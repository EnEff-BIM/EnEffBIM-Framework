# -*- coding: utf-8 -*-
"""
Created on Fri Jan 22 11:06:14 2016

@author: pre

This Module creates the MapHierarchy for Topology Mapping and Code generation
with help of libSimModel
"""
import os
import sys
modulePath = ("D:\\GIT\EnEffBIM-Framework\\SimModel_Python_API\\simmodel_swig"
                 "\\Release")
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
from SimMaterial_OpaqueMaterial_Default import SimMaterial_OpaqueMaterial_Default
from SimConnection_HotWaterFlow_Default import SimConnection_HotWaterFlow_Default
from SimConnection_HotWaterFlow_Default import SimConnection_HotWaterFlow_Default
from SimFlowFitting_Splitter_DemandProxySplitterWater import SimFlowFitting_Splitter_DemandProxySplitterWater
from SimFlowFitting_Mixer_DemandProxyMixerWater import SimFlowFitting_Mixer_DemandProxyMixerWater
from genericapi.MapAPI.MapHierarchy import MapProject

prj = MapProject("D:\\GIT\\EnEffBIM-Framework\\SimModel_Python_API"
                 "\\simmodel_swig"
                 "\\Release\\Boiler_Gas_VDI6020_V12.simxml")

print(prj.buildings[0].hvac_components)
for test in prj.buildings[0].hvac_components:
    print(test.sim_instance)
"""
print(prj.buildings[-1].hvac_component_group)
print(prj.buildings[-1].thermal_zones[-1].hvac_component_group)

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
"""
print("finish")













