#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - a code generation tool
#

name = 'StaticAPI'
description = 'StaticAPI for design issues'
version = '0.0.1'
author = 'EnEff-BIM team'
helptxt = """
Design the APIgit add
"""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    import os
    import sys
    
    rootPath = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))
    modulePath = os.path.join(rootPath, 'Generic_API\StaticAPI_0.0.1')
    dllPath = os.path.join(rootPath, 'Generic_API\StaticAPI_0.0.1\MappedHierarchy')
    
    # add dllPath to Windows Path
    os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
    # add modulePath to Python Path
    sys.path.append(modulePath)
    
    from StaticAPI import StaticAPI
    
    static_data = StaticAPI().mapped_data
   
    dataDictionary=dict(
        static_data=static_data
    )
    return dataDictionary
