
CoTeTo - Code Templating Tool
=============================

CoTeTo is a tool for the generation of (Modelica) source  code.
It is part of the research project EnEff-BIM.

This software is work-in-progress.
Documentation will be incomplete or missing and the software may not run properly.

Concept
-------
CoTeTo manages a list of generators and data APIs.
A generator is a package (contained in folder or a zip file) that contains output specific elements:

- general information in file `Package.inf` (Windows ini-file syntax)
- mapping rule files in folder `MappingRules`
- preprocessor / filter function in folder `Filter`
- template files (mako) in file `Templates`

Generators are loaded from a list of folders.
Each generator (defined by a name and a version number in Package.inf) depends on a specific data API.
Data APIs are python modules loaded from the module package `CoTeTo_DataAPI`.

Dependencies
------------
1. CoTeTo works with vanilla Python 32 or 64 bit version >=3.3 or >=2.7.10 plus some packages listed below,
but the `libSimModel` API is currently only compatible to Python 3.4 in 32bit.  
[WinPython](http://winpython.github.io/) (v3.4, 32bit) is recommended,
because it includes most packages.
3. WinPython does not include the Mako templating engine,
install it by running `pip install -U mako` on a Python-enabled command prompt
4. If you are not using WinPython, you also need to install the Jinja2 templating engine by running `pip install -U jinja2` on a Python-enabled command prompt
5. If you are using Python 2.7 you will also have to install configparser by running `pip install -U configparser` on a Python-enabled command prompt

You can check these dependencies by running the script
`tools/dependency_check.py` if you already have a python interpreter installed.

Once all dependencies are installed,
you should be able to launch the GUI by running `python CoTeTo\scripts\CoTeTo-gui.py`

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

### Package: CoTeTo
This is the main python module package. It should be installed in your python
search path, this is usually done during the installation. This package contains
the core functions of CoTeTo.

### Package: CoTeTo_DataAPI
This is a python module package containing the data APIs. Developers will
probably need to edit and amend these modules. If you add new modules, you need
to list them in `__init__.py`. The package should be installed
in your python search path, this is usually done during the installation.

### Folder: Generators
This folder contains the predefined generators. You can copy this to your
working environment. CoTeTo can handle a list of folders to search for
generators.

### Executable Scripts
The scripts give you an interface to CoTeTo on the command line or in a graphical
environment. The scripts require the packages `CoTeTo` and `CoTeTo_DataAPI`. Call
the scripts with the `--help` switch to get some usage information.

### Tools
At the moment there's only one tool available. You can call
`dependency_check.py` to check for the required packages in your python
installation.
