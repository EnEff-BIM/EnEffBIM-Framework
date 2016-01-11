#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - a code generation tool
#

name = 'EnEffBIM'
description = 'Data API for CoTeTo to load SimModel/EnEff-BIM data.'
version = '1.1'
author = 'EnEff-BIM team'
helptxt = """
Trying to use the API
"""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    import os
    import sys

    rootPath = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))
    modulePath = os.path.join(rootPath, 'Generic_API\Generic_API_1.0')
    dllPath = os.path.join(rootPath, 'Generic_API\Generic_API_1.0\PythonAPI')
    useCaseLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml")
    mapRuleLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_mapping_rule\\AixLib_Mapping_Rule.xml")
    
    # add dllPath to Windows Path
    os.environ['PATH'] = ';'.join([dllPath, os.environ['PATH']])
    print(os.environ['PATH'])
    # add modulePath to Python Path
    sys.path.append(modulePath)

    from PythonAPI import simmodel2modelica as lsm
    # create mapped data object
    MapData = lsm.RuleData()
    # set data location
    MapData.setDataLocation(useCaseLoc, mapRuleLoc)
    # transform SimModel data into Modelica objects
    MapData.transformModel()
    simProject = MapData.simProject
    simSite = simProject.simSite;
      
    dataDictionary=dict(
        MapData = MapData
    )
    return dataDictionary
