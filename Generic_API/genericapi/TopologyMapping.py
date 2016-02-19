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
                    prj.buildings.append(MapHierarchy.MapBuilding(prj, site_child[b].getSimModelObject())) # add to MapProject
                    for c in range(bldg_child.size()): #iterate the SimBuilding
                        if isinstance(bldg_child[c].getSimModelObject(),SimSystem_HvacHotWater_FullSystem):
                            bldg_hvac_child = bldg_child[c].getChildList()
                            prj.buildings[-1].hvac_component_group[bldg_child[c].getSimModelObject().SimModelName().getValue()] = None
                            for d in range(bldg_hvac_child.size()): # iterare SimSystem on bldg level
                                if isinstance(bldg_hvac_child[d].getSimModelObject(), SimSystem_HvacHotWater_Supply):
                                    supply_child = bldg_hvac_child[d].getChildList()
                                    prj.buildings[-1].hvac_component_group[bldg_child[c].getSimModelObject().SimModelName().getValue()]=[]
                                    for e in range(supply_child.size()): # iterate SimSystem_Supply on bldg leven
                                        if isinstance(supply_child[e].getSimModelObject(), SimFlowMover_Pump_VariableSpeedReturn) and  supply_child[e].getSimModelObject().IsTemplateObject().getValue() is False:
                                            import genericapi.AixLib.Fluid.Movers.Pump as Pump
                                            prj.buildings[-1].hvac_component_group[bldg_child[c].getSimModelObject().SimModelName().getValue()].append(Pump.instantiate_pump(prj,supply_child[e].getSimModelObject(),prj.buildings[-1],bldg_child[c].getSimModelObject().SimModelName().getValue()))
                                        if isinstance(supply_child[e].getSimModelObject(), SimFlowPlant_Boiler_BoilerHotWater) and  supply_child[e].getSimModelObject().IsTemplateObject().getValue() is False:
                                            import genericapi.AixLib.Fluid.HeatExchangers.Boiler as Boiler
                                            Boiler.instantiate_boiler(prj, supply_child[e].getSimModelObject(), prj.buildings[-1], bldg_child[c].getSimModelObject().SimModelName().getValue())
                        if isinstance(bldg_child[c].getSimModelObject(), SimGroup_SpatialZoneGroup_ZoneHvacGroup): #iterate thermal_zone hvac on bldg level
                            hvac_tz_child = bldg_child[c].getChildList()
                            for f in range(hvac_tz_child.size()):
                                if isinstance(hvac_tz_child[f].getSimModelObject(), SimSpatialZone_ThermalZone_Default):
                                    prj.buildings[-1].thermal_zones.append(MapHierarchy.MapThermalZone(prj,hvac_tz_child[f].getSimModelObject(), prj.buildings[-1]))
                                    prj.buildings[-1].thermal_zones[-1].hvac_component_group[bldg_child[c].getSimModelObject().SimModelName().getValue()]=[]
                                if isinstance(hvac_tz_child[f].getSimModelObject(), SimFlowEnergyTransfer_ConvectiveHeater_Water) and  hvac_tz_child[f].getSimModelObject().IsTemplateObject().getValue() is False:
                                    import genericapi.AixLib.Fluid.HeatExchangers.Radiators.Radiator as Radiator
                                    Radiator.instantiate_radiator(prj, hvac_tz_child[f], prj.buildings[-1].thermal_zones[-1], "asd")



print(prj.buildings[-1].hvac_component_group)
print(prj.buildings[-1].thermal_zones[-1].hvac_component_group)

print("aosidjaoisdjaoisd")



# load and parse SimXML


























"""
sim_instance = SimModel.SimModel_


import genericapi.AixLib.Fluid.HeatExchangers.Boiler as Boiler
import genericapi.AixLib.Fluid.HeatExchangers.Radiators.Radiator as Radiator
import genericapi.AixLib.Fluid.Movers.Pump as Pump


if "asd"
print(sim_instance.SimConnection_HotWaterFlow_Default().front().SourcePort().getValue())
asd = MapHierarchy.MapProject()
test = MapHierarchy.MapBuilding(asd, asd)
ttt = Pump.instantiate_pump(asd, test, sim_instance)


print(ttt)
for g in ttt:
    print(g.sim_ref_id)
    print(g.target_name)
print(asd.connections)
"""