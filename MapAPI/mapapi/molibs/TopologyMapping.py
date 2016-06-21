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
modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API\\simmodel_swig\\Release")

print(modulePath)
from mapapi.MapClasses import MapProject

zoneFile_path = os.path.join(modulePath+"\\SingleZoneWithInternalLoads.simxml")
hvacFile_path = os.path.join(modulePath+"\\1.1BoilerGasRadiator.simxml")
fullFile_path = os.path.join(modulePath+"\\Boiler_Gas_VDI6020_V12.simxml")
pathList = (zoneFile_path, hvacFile_path)
mappingFile_path = os.path.join(modulePath+"\\mapping_rule\\mapping_rule_xml\\AixLib.xml")

prj = MapProject(fullFile_path, mappingFile_path)
print("finish")
