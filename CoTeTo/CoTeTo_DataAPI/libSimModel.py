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
    if not uriList:
        logger.critical('libSimModel - no files specified!')
        raise Exception('No files specified!')
    return {'MapProject': MapProject(uriList[0])}
