
MoCGF - Modelica Code Generation Framework
==========================================

This software is work-in-progress. Documentation will be incomplete or missing
and the software may not run properly.

General Purpose
---------------
MoCGF is a framework for the generation of Modelica code. It is part of the
research project EnEff-BIM.


Concept
-------
MoCGF manages a list of generators and data APIs. An generator is a package
(contained in folder or a zip file) that contains output specific elements:

- general information in file `Package.inf` (Windows ini-file syntax)
- mapping rule files in folder `MappingRules`
- preprocessor / filter function in folder `Filter`
- template files (mako) in file `Templates`

Generators are loaded from a list of folders. Each generator (defined by a name
and a version number in Package.inf) depends on a specific data API. Data APIs
are python modules loaded from the module package `MoCGF_DataAPI`.

Dependencies
------------
1. Python >=3.3 or 2.7 - WinPython is recommended (includes a lot of packages)
2. PyQt for the GUI (included in WinPython)
3. Mako template Engine:
   install on a python-enabled command line with `pip install mako`
4. Jinja2 template Engine:
   install on a python-enabled command line with `pip install jinja2`
   (included in WinPython)
5. configparser for python 2.7:
   install on a python-enabled command line with `pip install configparser`

You can check these dependencies by running the script
`tools/dependency_check.py` if you already have a python interpreter installed.

Installation
------------
The framework can be used in different ways:

1. Directly from the source folder:
This is the preferred way during development.

2. After installation with pythons standard tools (distutils):
  * run `python setup.py install` in the source folder
  * all parts should now be installed on your computer (depending on the
    operating system)
  * this procedure is not fully implemented yet!

3. Using one of the packages that will be available in the future.

Contents
--------
The source folder contains different elements. After installation these elements
are stored in different places depending on your system.

### Package: MoCGF
This is the main python module package. It should be installed in your python
search path, this is usually done during the installation. This package contains
the core functions of MoCGF.

### Package: MoCGF_DataAPI
This is a python module package containing the data APIs. Developers will
probably need to edit and amend these modules. If you add new modules, you need
to list them in `__init__.py`. The package should be installed
in your python search path, this is usually done during the installation.

### Folder: Generators
This folder contains the predefined generators. You can copy this to your
working environment. MoCGF can handle a list of folders to search for
generators.

### Executable Scripts
The scripts give you an interface to MoCGF on the command line or in a graphical
environment. The scripts require the packages `MoCGF` and `MoCGF_DataAPI`. Call
the scripts with the `--help` switch to get some usage information.

### Tools
At the moment there's only one tool available. You can call
`dependency_check.py` to check for the required packages in your python
installation.
