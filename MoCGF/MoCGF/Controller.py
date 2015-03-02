#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import os, os.path, zipfile, tempfile, configparser
from mako.template import Template
from mako.lookup import TemplateLookup
from mako.runtime import Context
from io import StringIO
import MoCGF
from MoCGF.Generator import Generator
from MoCGF.import_file import import_file

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

    def __init__(self, generatorPath=None):
        self.readAPIs()
        # if not specified, use 'Generators' subfolder in the parent folder of this file
        if generatorPath is None:
            parent = os.path.dirname(os.path.dirname(os.path.realpath(__file__)))
            self.generatorPath = os.path.join(parent, 'Generators')
        self.rescanGenerators()

    def readAPIs(self):
        """read list of APIs and load corresponding modules"""
        import MoCGF_DataAPI, importlib
        self.apis = {}
        for a in MoCGF_DataAPI.__all__:
            m = importlib.import_module('.'+a, 'MoCGF_DataAPI')
            n = '%s::%s' % (m.name, m.version)
            self.apis[n] = m

    def rescanGenerators(self):
        """rescan generatorPath and load generator packages"""
        self.generators = {}
        for o in os.listdir(self.generatorPath):
            p = os.path.join(self.generatorPath, o)
            if os.path.isdir(p) or zipfile.is_zipfile(p):
                g = Generator(self, p)
                n = '%s::%s' % (g.name, g.version)
                self.generators[n] = g

    def apiInfoText(self, api, fmt='txt'):
        """return information on an api in text form"""
        t = Template(apiInfoTmpl[fmt])
        return t.render(m=self.apis[api], p2u=pathname2url)

