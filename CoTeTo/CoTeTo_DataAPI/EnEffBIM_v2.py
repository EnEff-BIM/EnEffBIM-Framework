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
    from genericapi.MapAPI.MapHierarchy import MapProject

    prj = MapProject("D:/GIT/EnEffBIM-Framework/LibSimModelAPI/LibSimModelAPI"
                 "/simmodel_swig/Release/Boiler_Gas_VDI6020_V10.xml")
      
    dataDictionary=dict(
        MapData = prj
    )
    return dataDictionary
