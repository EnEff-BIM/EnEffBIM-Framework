#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#

import sys

# version check
# please handle py27 a s a special case which may be removed later
v = sys.version_info
if v >= (3, 3):
    py33 = True
    py27 = False
elif v >= (2, 7) and v < (3,):
    py33 = False
    py27 = True
else:
    raise Exception('This software runs on python versions 2.7 or >=3.3 only!')

if py27:
    from urllib import pathname2url
else: # py33
    from urllib.request import pathname2url

import os, os.path, zipfile, tempfile, configparser
from mako.template import Template
from mako.lookup import TemplateLookup
from mako.runtime import Context
from io import StringIO
from import_file import import_file

__version__ = '0.1-proof-of-concept'

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


# a template for the generator info text as txt and html
generatorInfoTmpl = {
'txt' : """
Name:        ${cfg['GENERATOR'].get('name')}
Description: ${cfg['GENERATOR'].get('description')}
Version:     ${cfg['GENERATOR'].get('version')}
Author:      ${cfg['GENERATOR'].get('author')}
Path:        ${path}

Data API:
    requires ${cfg['API'].get('name')}, version ${cfg['API'].get('minVer', '?')}...${cfg['API'].get('maxVer', '?')}
    % if api:
    using version ${api.version} from ${api.__file__}
    % else:
    *** NOT FOUND! ***
    % endif

Main Template:
    ${cfg['TEMPLATES'].get('topFile')}

% if cfg.has_section('PYFILTER'):
Python filter:
    ${cfg['PYFILTER'].get('module')}.${cfg['PYFILTER'].get('function')}
% endif

% if cfg.has_section('MAPRULES'):
Mapping Rules:
    % for f in cfg['MAPRULES'].get('files', '').split(','):
    ${f}
    % endfor
% endif
""",

'html' : """
<h2>${cfg['GENERATOR'].get('name')} - version ${cfg['GENERATOR'].get('version')}</h2>
<h3>Author</h3>
<p>${cfg['GENERATOR'].get('author')}</p>
<h3>Description</h3>
<p>${cfg['GENERATOR'].get('description')}</p>
<h3>Path</h3>
<p><a href="file:${p2u(path)}">${path}</a> </p>

<h3>Data API</h3>
<p>
Requires ${cfg['API'].get('name')}, version ${cfg['API'].get('minVer', '?')}...${cfg['API'].get('maxVer', '?')}<br/>
% if api:
Found <a href="api://${api.name}___${api.version}">version ${api.version}</a><br/>
% else:
<b>Not found, generator is not usable!</b><br/>
% endif
</p>

<h3>Main Template</h3>
<p>${cfg['TEMPLATES'].get('topFile')}</p>

% if cfg.has_section('PYFILTER'):
<h3>Python filter</h3>
<p>${cfg['PYFILTER'].get('module')}.${cfg['PYFILTER'].get('function')}</p>
% endif

% if cfg.has_section('MAPRULES'):
<h3>Mapping Rules</h3>
<p>
% for f in cfg['MAPRULES'].get('files', '').split(','):
${f}<br/>
% endfor
</p>
% endif
"""
}


class MoCGFController(object):
    """main controller of the code generation framework"""

    def __init__(self, generatorPath=None):
        self.readAPIs()
        # if not specified, use 'Generators' subfolder relative to this file
        self.generatorPath = generatorPath or os.path.join(os.path.split(__file__)[0], 'Generators')
        self.rescanGenerators()

    def readAPIs(self):
        """read list of APIs and load corresponding modules"""
        import DataAPI, importlib
        self.apis = {}
        for a in DataAPI.__all__:
            m = importlib.import_module('.'+a, 'DataAPI')
            n = '%s::%s' % (m.name, m.version)
            self.apis[n] = m

    def rescanGenerators(self):
        """rescan generatorPath and load generator packages"""
        self.generators = {}
        for o in os.listdir(self.generatorPath):
            p = os.path.join(self.generatorPath, o)
            if os.path.isdir(p) or zipfile.is_zipfile(p):
                g = MoCGFGenerator(self, p)
                n = '%s::%s' % (g.name, g.version)
                self.generators[n] = g

    def apiInfoText(self, api, fmt='txt'):
        """return information on an api in text form"""
        t = Template(apiInfoTmpl[fmt])
        return t.render(m=self.apis[api], p2u=pathname2url)


class MoCGFGenerator(object):
    """represents a generator package """

    def __init__(self, controller, packagePath=None):
        self.controller = controller
        self.packagePath = packagePath
        self.tempDir = None
        if zipfile.is_zipfile(packagePath):
            self.zf = zipfile.ZipFile(packagePath)
        else:
            self.zf = None
        self.cfg = configparser.ConfigParser()
        self.cfg.read_file(self.getReadableFile('Package.inf'))
        g = self.cfg['GENERATOR']
        self.name = g.get('name')
        self.version = g.get('version')
        self.author = g.get('author')
        self.description = g.get('description')

        # check for a usable api
        acfg = self.cfg['API']
        self.api = None
        for api in self.controller.apis.values():
            if acfg.get('name') == api.name:
                if (acfg.get('minVer', '000') <= api.version) and (acfg.get('maxVer', '999999') >= api.version):
                    self.api = api

    def infoText(self, fmt='txt'):
        """return information on this generator in text form"""
        t = Template(generatorInfoTmpl[fmt])
        return t.render(cfg=self.cfg, path=self.packagePath, api=self.api, p2u=pathname2url)

    def getReadableFile(self, name, folder=''):
        """return a readable file-like object from package folder or zip"""
        if self.zf:
            f = self.zf.open(os.path.join(folder, name), 'r')
        else:
            f = open(os.path.join(self.packagePath, folder, name), 'r')
        return f

    def getTextFileContents(self, name, folder=''):
        """return a string read from a text file from package folder or zip"""
        if self.zf:
            s = str(self.zf.read(os.path.join(folder, name)), 'utf8')
        else:
            s = open(os.path.join(self.packagePath, folder, name), 'r').read()
        return s

    def getMappingRules(self):
        """return list of files to read mapping rules from"""
        if self.cfg.has_section('MAPRULES'):
            return [self.getReadableFile(f, 'MappingRules') for f in self.cfg['MAPRULES'].get('files', '').split(',') if f]
        else:
            return []

    def getTemplateFolder(self):
        """return template folder, for zip packages extract to temporary folder first"""
        if not self.zf:
            return os.path.join(self.packagePath, 'Templates')
        if self.tempDir is None:
            self.tempDir = tempfile.TemporaryDirectory()
        tf = 'Templates/'
        tmpl = [f for f in self.zf.namelist() if f and f.startswith(tf) and f != tf]
        for t in tmpl:
            f = open(os.path.join(self.tempDir.name, os.path.split(t)[1]), 'wb')
            f.write(self.zf.read(t))
            f.close()
        return self.tempDir.name

    def execute(self, uriList=[]):
        if not self.api:
            raise Exception('Generator is not valid - canceling execution!')
        # fill data model from the api using the data URIs
        dm = self.api.fetchData(uriList)
        # print(dm)
        # apply filter
        if self.cfg.has_section('PYFILTER'):
            moduleName = self.cfg['PYFILTER'].get('module')
            functionName = self.cfg['PYFILTER'].get('function')
            modulePath = os.path.join(self.packagePath, 'Filters')
            module = import_file(modulePath, moduleName)
            function = getattr(module, functionName)
            function(dm)
        # handle data to template
        tLookup = TemplateLookup(directories=[self.getTemplateFolder()])
        template = Template("""<%%include file="%s"/>""" % self.cfg['TEMPLATES'].get('topFile'), lookup=tLookup, strict_undefined=True)
        buf = StringIO()
        ctx = Context(buf, **dm)
        template.render_context(ctx)
        buf.flush()
        buf.seek(0)
        return buf
