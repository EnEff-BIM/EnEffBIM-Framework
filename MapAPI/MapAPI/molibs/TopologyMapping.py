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
modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                          "\\simmodel_swig\\Release")


from mapapi.MapClasses import MapProject

file_path = os.path.join(modulePath+"\\Boiler_Gas_VDI6020_V12.simxml")

prj = MapProject(file_path)
print("finish")












