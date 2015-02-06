
MoCGF - Modelica Code Generation Framework
==========================================

PROOF OF CONCEPT

Dependencies
------------

 1. Python 3.4 or 2.7 - WinPython is recommended (includes a lot of packages)
 2. PyQt for the GUI (included in WinPython)
 3. Mako template Engine:
     install on a python-enabled command line with "pip install mako"
 4. configparser for python 2.7:
     install on a python-enabled command line with "pip install configparser"
     
You can check these dependencies by running the script dependency_check.py if 
you already have a python interpreter installed.


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
(register in __init__.py).


Contents
--------

MoCGF.py
~~~~~~~~

Main functions of the framework. Can be imported in own python code.


MoCGF-cli.py
~~~~~~~~~~~~

Command line interface. Run "MoCGF-cli.py --help" to get help.


MoCGF-gui.pyw
~~~~~~~~~~~~~

Graphical user interface using PyQt.

