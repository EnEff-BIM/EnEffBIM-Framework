#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 201500225 Joerg Raedler jraedler@udk-berlin.de
#

import os, os.path, zipfile, tempfile, configparser

# mako template engine
from mako.template import Template
from mako.lookup import TemplateLookup
from mako.runtime import Context

# jinja2 template engine
from jinja2 import Environment, FileSystemLoader

from io import StringIO
import MoCGF
from MoCGF.import_file import import_file

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


class Generator(object):
    """represents a generator package """

    def __init__(self, controller, packagePath=None):
        self.controller = controller
        self.packagePath = packagePath
        self.tempDir = None
        self.logger = controller.logger
        self.logger.debug('GEN | start to create instance for path %s', packagePath)
        if zipfile.is_zipfile(packagePath):
            self.zf = zipfile.ZipFile(packagePath)
        else:
            self.zf = None
        self.cfg = configparser.ConfigParser()
        self.logger.debug('GEN | read Package.ini')
        self.cfg.read_file(self.getReadableFile('Package.inf'))
        g = self.cfg['GENERATOR']
        self.name = g.get('name')
        self.version = g.get('version')
        self.author = g.get('author')
        self.description = g.get('description')

        # check for a usable api
        acfg = self.cfg['API']
        self.api = None
        self.logger.debug('GEN | locate API')
        for api in self.controller.apis.values():
            if acfg.get('name') == api.name:
                if (acfg.get('minVer', '000') <= api.version) and (acfg.get('maxVer', '999999') >= api.version):
                    self.logger.debug('GEN | found API: %s::%s', api.name, api.version)
                    self.api = api

    def infoText(self, fmt='txt'):
        """return information on this generator in text form"""
        t = Template(generatorInfoTmpl[fmt])
        return t.render(cfg=self.cfg, path=self.packagePath, api=self.api, p2u=self.controller.pathname2url)

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

    def executeDataAPI(self, uriList=[]):
        """execute the dataAPI to fetch data from the source"""
        self.logger.debug('GEN | calling data api')
        self.data = self.api.fetchData(uriList, self.controller.systemCfg, self.cfg, self.logger)

    def executePyFilter(self):
        """execute the python filter to manipulate loaded data"""
        moduleName = self.cfg['PYFILTER'].get('module')
        functionName = self.cfg['PYFILTER'].get('function')
        modulePath = os.path.join(self.packagePath, 'Filters')
        self.logger.debug('GEN | import pyfilter module %s', moduleName)
        module = import_file(modulePath, moduleName)
        self.logger.debug('GEN | calling pyfilter function %s', functionName)
        function = getattr(module, functionName)
        function(self.data, self.controller.systemCfg, self.cfg, self.logger)

    def executeTemplates(self):
        """execeute the templates with the data, return the output buffer"""
        tmplType = self.cfg['TEMPLATES'].get('type', 'mako')
        if tmplType == 'mako':
            self.logger.debug('GEN | calling mako template')
            tLookup = TemplateLookup(directories=[self.getTemplateFolder()])
            template = Template("""<%%include file="%s"/>""" % self.cfg['TEMPLATES'].get('topFile'), lookup=tLookup, strict_undefined=True)
            buf = StringIO()
            ctx = Context(buf, systemCfg=self.controller.systemCfg, generatorCfg=self.cfg, logger=self.logger, **self.data)
            template.render_context(ctx)
            buf.flush()
            buf.seek(0)
            return buf
        elif tmplType == 'jinja2':
            self.logger.debug('GEN | calling jinja2 template')
            env = Environment(loader=FileSystemLoader(self.getTemplateFolder()))
            template = env.get_template(self.cfg['TEMPLATES'].get('topFile'))
            # FIXME: give access to systemCfg, generatorCfg, logger
            tmp = template.render(self.data)
            buf = StringIO(tmp)
            return(buf)
        else:
            raise Exception('Unknown template system: '+tmplType)

    def execute(self, uriList=[]):
        if not self.api:
            raise Exception('Generator is not valid - canceling execution!')
        # fill data model from the api using the data URIs
        self.executeDataAPI(uriList)
        # apply filter
        if self.cfg.has_section('PYFILTER'):
            self.executePyFilter()
        # handle data to template, return text buffer
        return self.executeTemplates()

    # make the generator executable
    __call__ = execute
