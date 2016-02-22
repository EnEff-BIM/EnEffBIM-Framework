# -*- coding: utf-8 -*-
"""
Created on Fri Jan 22 11:06:14 2016

@author: pre

This Module creates the MapHierarchy for Topology Mapping and Code generation
with help of libSimModel
"""

import os
import sys
import genericapi.MapAPI.MapHierarchy as MapHierarchy

#import all libSimModel Classes
modulePath = ("D:/GIT/EnEffBIM-Framework/LibSimModelAPI/LibSimModelAPI/simmodel_swig/Release")
os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
sys.path.append(modulePath)
import SimModel
import SimModel_Hierachy
from SimProject_Project_DesignAlternative import SimProject_Project_DesignAlternative
from SimSite_BuildingSite_Default import SimSite_BuildingSite_Default
from SimSystem_HvacHotWater_FullSystem import SimSystem_HvacHotWater_FullSystem
from SimBuilding_Building_Default import SimBuilding_Building_Default
from SimSystem_HvacHotWater_Demand import SimSystem_HvacHotWater_Demand
from SimSystem_HvacHotWater_Supply import SimSystem_HvacHotWater_Supply
from SimFlowEnergyTransfer_ConvectiveHeater_Water import SimFlowEnergyTransfer_ConvectiveHeater_Water
from SimFlowMover_Pump_VariableSpeedReturn import SimFlowMover_Pump_VariableSpeedReturn
from SimFlowPlant_Boiler_BoilerHotWater import SimFlowPlant_Boiler_BoilerHotWater
from SimSpatialZone_ThermalZone_Default import SimSpatialZone_ThermalZone_Default
from SimGroup_SpatialZoneGroup_ZoneHvacGroup import SimGroup_SpatialZoneGroup_ZoneHvacGroup
from SimSpace_Occupied_Default import SimSpace_Occupied_Default
#instantiate the SimHierarchy class
sim_hierarchy = SimModel_Hierachy.SimHierarchy()
simxml_data = sim_hierarchy.loadSimModel(modulePath + "/Boiler_Gas_VDI6020_V10.xml")

#get the root_node (which should be SimProject_Project_DesignAlternative
root_node = sim_hierarchy.getHierarchyRootNode()
prj_child = root_node.getChildList()

if (root_node.getSimModelObject(), SimProject_Project_DesignAlternative):
    prj = MapHierarchy.MapProject()
    for a in range(prj_child.size()): #iterate the SimProject
        if isinstance(prj_child[a].getSimModelObject(), SimSite_BuildingSite_Default):
            site_child = prj_child[a].getChildList()
            for b in range(site_child.size()):  #iterate the SimSite
                if isinstance(site_child[b].getSimModelObject(), SimBuilding_Building_Default):
                    bldg_child = site_child[b].getChildList()
                    prj.buildings.append(MapHierarchy.MapBuilding(prj, site_child[b]))




print(prj.buildings[-1].hvac_component_group)
print(prj.connections)
print(prj.buildings[-1].thermal_zones[-1].hvac_component_group)

print("aosidjaoisdjaoisd")



# load and parse SimXML

























