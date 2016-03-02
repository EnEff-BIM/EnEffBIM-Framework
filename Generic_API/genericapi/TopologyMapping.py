# -*- coding: utf-8 -*-
"""
Created on Fri Jan 22 11:06:14 2016

@author: pre

This Module creates the MapHierarchy for Topology Mapping and Code generation
with help of libSimModel
"""

from genericapi.MapAPI.MapHierarchy import MapProject

prj = MapProject("D:/GIT/EnEffBIM-Framework/LibSimModelAPI/LibSimModelAPI"
                 "/simmodel_swig/Release/Boiler_Gas_VDI6020_V10.xml")

"""
print(prj.buildings[-1].hvac_component_group)
print(prj.buildings[-1].thermal_zones[-1].hvac_component_group)
"""




for bldg in prj.buildings:
    for key, value in bldg.hvac_component_group.items():
        for item in value:
            for pa in item.parameters:
                print(item.target_name,"(",pa.name,"=",pa.value,")")
    for zone in bldg.thermal_zones:
        for ke, val in zone.hvac_component_group.items():
            for it in val:
                for pas in it.parameters:
                    if type(item).__name__ == "MapParameter":
                        print(it.target_name,"(",pas.name,"=",pas.value,")")
                    else:
                        print(it.target_name,pas.name)

for connect in prj.connections:
    print(connect.connector_a.parent.target_name+"."+connect.connector_a.name,
          connect.connector_b.parent.target_name+"."+connect.connector_b.name)

print("finish")













