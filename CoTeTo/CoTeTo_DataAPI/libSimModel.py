#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - code templating tool
#

name = 'libSimModel'
description = 'SimXML file reader, return objects from SimXML files'
version = '0.1'
author = 'EnEff-BIM team'
helptxt = """
Help yourself"""

def fetchData(uriList, systemCfg, generatorCfg, logger):
    from mapapi.MapClasses import MapProject
    import os    
    if not uriList:
        logger.critical('libSimModel - no files specified!')
        raise Exception('No files specified!')

    rootPath = os.path.dirname(__file__)
    default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                              "\\simmodel_swig\\Release")

    zoneFile_path = uriList[1]
    hvacFile_path = uriList[0]
    print("zoneFile_path: ", uriList[0], "\n hvacFile_path", uriList[1],"\n")    	
    pathList = (zoneFile_path, hvacFile_path)
    mappingFile_path = os.path.join(modulePath + "\\mapping_rule\\mapping_rule_xml\\AixLib_v2.6.xml")

    return {'MapData': MapProject(pathList,mappingFile_path)}
