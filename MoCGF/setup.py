#!/usr/bin/env python

from distutils.core import setup

setup(name='MoCGF',
      version='0.2',
      description='Modelica Code Generation Framework',
      author='Joerg Raedler / EnEFF-BIM group',
      author_email='jraedler@udk-berlin.de',
      url='https://github.com/EnEff-BIM/EnEffBIM-Framework',
      packages=['MoCGF', 'MoCGF_DataAPI'],
      scripts=['scripts/MoCGF-cli.py', 'scripts/MoCGF-gui.py']
     )
