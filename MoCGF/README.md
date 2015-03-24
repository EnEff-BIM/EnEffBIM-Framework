
MoCGF - Modelica Code Generation Framework
==========================================

General Purpose
---------------

MoCGF is a framework for the generation of Modelica code. It is part of the
research project EnEff-BIM.

Concept
-------

MoCGF manages a list of generators and data APIs. An generator is a package
(contained in folder or a zip file) that contains output specific elements:

- general information in file Package.inf (Windows ini-file syntax)
- mapping rule files in folder MappingRules
- preprocessor / filter function in folder Filter
- template files (mako) in file Templates

Generators are loaded from a folder (default: ./Generators). Each generator
(defined by a name and a version number in Package.inf) depends on a
specific API. APIs are python modules loaded from the module package DataAPI
(register in MoCGF_DataAPI/__init__.py).


Dependencies
------------

1. Python >=3.3 or 2.7 - WinPython is recommended (includes a lot of packages)
2. PyQt for the GUI (included in WinPython)
3. Mako template Engine:
   install on a python-enabled command line with "pip install mako"
4. Jinja2 template Engine:
   install on a python-enabled command line with "pip install jinja2"
   (included in WinPython)
5. configparser for python 2.7:
   install on a python-enabled command line with "pip install configparser"

You can check these dependencies by running the script tools/dependency_check.py
if you already have a python interpreter installed.

Installation
------------
The framework can be used in different ways:

1. Directly from the source folder:
This is the preferred way during development.

2. After installation with pythons standard tools (distutils):
  * run "python setup.py install" in the source folder
  * all parts should now be installed on your computer (depending on the
    operating system)
  * this procedure is not fully implemented yet!

3. Using one of the packages that will be available in the future.

Contents
--------
To be filled with contents.

### Package: MoCGF
To be filled with contents.

### Package: MoCGF_DataAPI
To be filled with contents.

### Folder: Generators
To be filled with contents.

### Executable Scripts
To be filled with contents.

### Tools
To be filled with contents.
