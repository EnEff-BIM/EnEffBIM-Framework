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
    rootPath = os.path.dirname(__file__)
    default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                              "\\simmodel_swig\\Release")
    print(modulePath)
    zoneFile_path = os.path.join(modulePath,"SingleZoneWithInternalLoads.simxml")
    hvacFile_path = os.path.join(modulePath,"1.1BoilerGasRadiator.simxml")
    fullFile_path = os.path.join(modulePath,"Boiler_Gas_VDI6020_V12.simxml")
    pathList = (zoneFile_path, hvacFile_path)
    print(pathList[0])
    mapping_file = os.path.join(modulePath,
                                "mapping_rule\\mapping_rule_xml\\AixLib.xml")
    from mapapi.MapClasses import MapProject
    prj = MapProject(pathList,
                     mapping_file)
      
    dataDictionary=dict(
        MapData = prj
    )
    return dataDictionary
