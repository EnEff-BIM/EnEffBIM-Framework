# -*- coding: utf-8 -*-
"""
Created on Fri Jan 22 11:06:14 2016

@author: pre

This Module creates the MapHierarchy for Topology Mapping and Code generation
with help of libSimModel
"""
import os

rootPath = os.path.dirname(__file__)
default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
modulePath = os.path.join(default_path,
                          "EnEffBIM-Framework\\SimModel_Python_API"
                          "\\simmodel_swig\\Release")

from mapapi.MapClasses import MapProject

zoneFile_path = os.path.join(modulePath,
                             "UseCase1_1_BoilerGasRadiatorFromSimergy.simxml")
hvacFile_path = os.path.join(modulePath,
                             "1.1_Architecture+HVAC+Zone_Curve+Schedule_korr.simxml")
fullFile_path = os.path.join(modulePath,
                             "Boiler_Gas_VDI6020_V12.simxml")

pathList = (zoneFile_path, hvacFile_path)
mappingFile_path = os.path.join(
    modulePath+"\\mapping_rule\\mapping_rule_xml\\AixLib_v2.0.xml")
#test_file_tobias = os.path.join(modulePath,
#
# "1.1_Architecture+HVAC+Zone_Curve+Schedule_korr.simxml")
prj = MapProject(pathList, mappingFile_path)


print("finish")
