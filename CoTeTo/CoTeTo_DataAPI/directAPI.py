#-*- coding:utf-8 -*-
#
# This file is part of CoTeTo - a code generation tool
#

name = 'directAPI'
description = 'Data API for CoTeTo to load SimModel/EnEff-BIM data from low level API'
version = '0.1'
author = 'crt'
helptxt = """
use the API
"""


def fetchData(uriList, systemCfg, generatorCfg, logger):
    import os, sys
    print("file: ", __file__)
    rootPath = os.path.dirname(__file__)
    default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                              "\\simmodel_swig\\Release")
    zoneFile_path = os.path.join(modulePath,"OneZone.simxml")
    #zoneFile_path = os.path.join(modulePath,"TwoZones.simxml")
    #zoneFile_path = os.path.join(modulePath,"MultiZoneBuilding.simxml")	
    #zoneFile_path = os.path.join(modulePath,"UseCase1_1_BoilerGasRadiatorFromSimergy.simxml")
    hvacFile_path = os.path.join(modulePath,
                                 "1.1_Architecture+HVAC+Zone_Curve+Schedule_korr.simxml")
    pathList = (zoneFile_path, hvacFile_path)	
#
    return {'pathList': pathList, 'modulePath': modulePath}