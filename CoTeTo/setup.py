#!/usr/bin/env python

from distutils.core import setup

setup(name = 'CoTeTo',
    version = '0.2',
    description = 'Code Generation Tool based on templates',
    author = 'Joerg Raedler / EnEFF-BIM group',
    author_email = 'jraedler@udk-berlin.de',
    url = 'https://github.com/EnEff-BIM/EnEffBIM-Framework',
    # contents
    packages = ['CoTeTo', 'CoTeTo_DataAPI'],
    package_data = {'CoTeTo': ['res/*']},
    scripts = ['scripts/CoTeTo-cli.py', 'scripts/CoTeTo-gui.py'],
    # dependencies
    install_requires = ['mako', 'jinja2', 'PyQt4', 'configparser'],
    # classifiers
    classifiers = [
        "Development Status :: 3 - Alpha",
        "Environment :: Console",
        "Operating System :: Microsoft :: Windows",
        "Operating System :: POSIX :: Linux",
        "Operating System :: MacOS :: MacOS X",
        "Programming Language :: Python :: 2.7",
        "Programming Language :: Python :: 3.3",
        "Programming Language :: Python :: 3.4",
        "Programming Language :: Python :: 3.5",
        "Intended Audience :: Science/Research",
        "Topic :: Software Development :: Code Generators",
        "Topic :: Scientific/Engineering",
        "Topic :: Utilities"
    ],
)
