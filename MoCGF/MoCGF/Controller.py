#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import sys, os, os.path, zipfile, logging
from mako.template import Template
import MoCGF
from MoCGF.Generator import Generator

if MoCGF.py27:
    from urllib import pathname2url
else: # py33
    from urllib.request import pathname2url

# a template for the api info text as txt and html
apiInfoTmpl = {
'txt' : """
Name:        ${m.name}
Description: ${m.description}
Version:     ${m.version}
Author:      ${m.author}
Path:        ${m.__file__}
""",

'html' : """
<h2>${m.name} - version ${m.version}</h2>
<h3>Author</h3>
<p>${m.author}</p>
<h3>Description</h3>
<p>${m.description}</p>
<h3>Path</h3>
<p><a href="file:${p2u(m.__file__)}">${m.__file__}</a></p>

% if hasattr(m, 'helptxt'):
<h3>Help</h3>
<p>${m.helptxt}</p>
% endif
"""
}


class Controller(object):
    """main controller of the code generation framework"""

    def __init__(self, generatorPath=[], logger='MoCGF', logHandler=None, logLevel=logging.WARNING):
        # initialize logging system
        self.logger = logging.getLogger(logger)
        if logHandler is None:
            # fall back to stderr
            logHandler = logging.StreamHandler(sys.stderr)
        self.logger.addHandler(logHandler)
        self.logger.setLevel(logLevel)
        self.logger.info('Starting MoCGF.Controller from file %s, version %s', __file__, MoCGF.__version__)
        # create system configuration dict - will be available to subsystems
        self.systemCfg = {
            'py27': MoCGF.py27,
            'py33': MoCGF.py33,
            'platform': sys.platform,
            'version': MoCGF.__version__,
            # need more here?
        }
        self.pathname2url = pathname2url
        # read APIs
        self.readAPIs()
        # handle empty path list
        if not generatorPath:
            # running from source folder?
            parent = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
            p = os.path.join(parent, 'Generators')
            if os.path.isdir(p):
                generatorPath.append(p)
            else:
                raise Exception('No folders to search for generators specified!')
        self.generatorPath = generatorPath
        # try to load available generators
        self.rescanGenerators()

    def readAPIs(self):
        """read list of APIs and load corresponding modules"""
        import MoCGF_DataAPI, importlib
        self.apis = {}
        self.logger.debug('CON-API | start to loading')
        for a in MoCGF_DataAPI.__all__:
            self.logger.debug('CON-API | try to load: %s', a)
            m = importlib.import_module('.'+a, 'MoCGF_DataAPI')
            n = '%s::%s' % (m.name, m.version)
            self.apis[n] = m

    def rescanGenerators(self):
        """rescan generatorPath and load generator packages"""
        self.generators = {}
        self.logger.debug('CON-GEN | start scan')
        for p in self.generatorPath:
            self.logger.debug('CON-GEN | scan path: %s', p)
            for e in os.listdir(p):
                o = os.path.join(p, e)
                if os.path.isdir(o) or zipfile.is_zipfile(o):
                    self.logger.debug('CON-GEN | load element: %s', o)
                    g = Generator(self, o)
                    n = '%s::%s' % (g.name, g.version)
                    self.logger.debug('CON-GEN | found: %s::%s', g.name, g.version)
                    self.generators[n] = g

    def apiInfoText(self, api, fmt='txt'):
        """return information on an api in text form"""
        t = Template(apiInfoTmpl[fmt])
        return t.render(m=self.apis[api], p2u=pathname2url)
