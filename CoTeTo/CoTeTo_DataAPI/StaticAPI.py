#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - a code generation tool
#

name = 'StaticAPI'
description = 'StaticAPI example that uses the Map Hierarchy'
version = '0.0.1'
author = 'EnEff-BIM team'
helptxt = """
Design the APIgit add
"""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    import os
    import sys
    
    rootPath = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))
    modulePath = os.path.join(rootPath, 'Generic_API\MapAPI')
    dllPath = os.path.join(rootPath, 'Generic_API\MapAPI\MappHierarchy')
    
    # add dllPath to Windows Path
    os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
    # add modulePath to Python Path
    sys.path.append(modulePath)
    
    from LibSimModelAPI import LibSimModelAPI
    import StaticExample
    test = StaticExample.return_mapped_project()
    static_data = test
    dataDictionary=dict(
        static_data=static_data
    )
    return dataDictionary
