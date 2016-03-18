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
    rootPath = os.path.dirname(__file__)
    default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                              "\\simmodel_swig\\Release")
    print(modulePath)
    from genericapi.MapAPI.MapHierarchy import MapProject
    prj = MapProject(modulePath+"\\Boiler_Gas_VDI6020_V12.simxml")
      
    dataDictionary=dict(
        MapData = prj
    )
    return dataDictionary
