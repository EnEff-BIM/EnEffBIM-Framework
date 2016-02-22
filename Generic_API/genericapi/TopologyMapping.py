# -*- coding: utf-8 -*-
"""
Created on Fri Jan 22 11:06:14 2016

@author: pre

This Module creates the MapHierarchy for Topology Mapping and Code generation
with help of libSimModel
"""

from genericapi.MapAPI.MapHierarchy import MapProject

prj = MapProject(path="D:/GIT/EnEffBIM-Framework/LibSimModelAPI/LibSimModelAPI"
                     "/simmodel_swig/Release/Boiler_Gas_VDI6020_V10.xml")

print(prj.buildings[-1].hvac_component_group)
print(prj.buildings[-1].thermal_zones[-1].hvac_component_group)
print("finish")
















