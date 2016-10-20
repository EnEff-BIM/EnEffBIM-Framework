import os

# load SimModel hierarchy
import SimModel_Hierachy
# load SimModel mapped data
import SimModel_Mapping
# load SimModel translation engine
import SimModel_Translator

# load the SimModel classes you wanna access their properties,
# e.g., if you need to access a class named A, then import A
# as shown in the following code
import SimProject_Project_DesignAlternative
import SimSite_BuildingSite_Default
import SimBuilding_Building_Default
import SimBuildingStory_BuildingStory_Default
import SimGroup_SpatialZoneGroup_ZoneGroup
import SimGroup_SpatialZoneGroup_ZoneHvacGroup
import SimSpatialZone_ThermalZone_Default
import SimSpace_Occupied_Default
import SimList_EquipmentList_ZoneHvac
import SimSpaceBoundary_SecondLevel_SubTypeA
import SimSlab_Default_Default
import SimSlab_RoofSlab_RoofUnderAir
import SimSlab_Floor_FloorOverEarth
import SimSlab_Floor_InterzoneFloor
import SimWall_Wall_Default
import SimWall_Wall_ExteriorAboveGrade
import SimWall_Wall_Interior
import SimWindow_Window_Exterior
import SimMaterialLayerSet_Default_Default
import SimMaterialLayerSet_OpaqueLayerSet_Roof
import SimMaterialLayerSet_OpaqueLayerSet_Floor
import SimMaterialLayerSet_OpaqueLayerSet_Wall
import SimMaterialLayerSet_GlazingLayerSet_Window
import SimFeatureElementSubtraction_Void_Opening
import SimMaterialLayer_OpaqueMaterialLayer_Default
import SimMaterialLayer_GlazingMaterialLayer_Default
import SimMaterial_Default_Default
import SimMaterial_OpaqueMaterial_Default
import SimMaterial_OpaqueMaterial_AirGap
import SimMaterial_GlazingMaterial_Gas
import SimMaterial_GlazingMaterial_SimpleGlazingSystem
import SimMaterial_GlazingMaterial_Glazing
import SimModelRepresentationContext_GeometricRepresentationContext_Default
import SimPlacement_Axis2Placement3D_Default
import SimGeomVector_Vector_Direction
import SimSystem_HvacHotWater_FullSystem
import SimSystem_HvacHotWater_Control
import SimController_SupplyWater_Temperature
import SimSensor_TemperatureSensor_DryBulb
import SimSystem_HvacHotWater_Demand
import SimFlowController_Valve_Default
import SimFlowController_Valve_TemperingValve
import SimFlowEnergyTransfer_ConvectiveHeater_Water
import SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water
import SimFlowEnergyTransferStorage_HotWaterTank_Expansion
import SimFlowEnergyTransferStorage_HotWaterTank_Mixed
import SimFlowFitting_Default_Default
import SimFlowFitting_Mixer_DemandProxyMixerWater
import SimFlowFitting_Splitter_DemandProxySplitterWater
import SimFlowSegment_Pipe_Indoor
import SimSystem_HvacHotWater_Supply
import SimFlowMover_Pump_VariableSpeedReturn
import SimFlowPlant_Boiler_BoilerHotWater
import SimConnection_HotWaterFlow_Default
import SimNode_HotWaterFlowPort_Water_Out
import SimNode_HotWaterFlowPort_Water_In
import SimDistributionPort_HotWaterFlowPort_Water_Out
import SimDistributionPort_HotWaterFlowPort_Water_In
import SimDistributionPort_HotWaterFlowPort_Water_InOrOut
import SimNode_DigitalControl_HWLoop_DigitalSignal_In
import SimTimeSeriesSchedule_Year_Default
import SimTimeSeriesSchedule_Week_Daily
import SimTimeSeriesSchedule_Day_Interval
import SimTemplateZoneLoads_ZoneLoads_Default
import SimTemplateZoneConditions_ZoneConditions_Default
import SimInternalLoad_Equipment_Electric
import SimInternalLoad_People_Default
import SimInternalLoad_Lights_Default
import SimController_ZoneControlTemperature_Thermostat
import SimControlScheme_SetpointScheme_SingleHeating
import SimPerformanceCurve_Mathematical_Cubic

from SimModel_Translator import SimTranslator

# create SimModel translator object
translator = SimTranslator()

# load and parse multiple SimXML files
zoneFile_path = ("UseCase1_1_BoilerGasRadiatorFromSimergy.simxml")
hvacFile_path = ("1.1_Architecture+HVAC+Zone_Curve+Schedule_korr.simxml")
pathList = [zoneFile_path, hvacFile_path]

simxml_data = translator.loadSimModel(zoneFile_path, hvacFile_path)

# get SimModel mapped data
simxml_mapped_data = translator.getSimMappedData(".\\mapping_rule\\mapping_rule_xml\\AixLib_v2.6.xml")
mappedComonentList = simxml_mapped_data.getMappedComponentList()

sim_hierarchy = translator.getSimHierarchy()
nodeList = sim_hierarchy.getHierarchyNodeList()
   
# iterate each hiearchy node saved in the list
for id in range(0, nodeList.size()):
    print("node ", id, ":")
    
    # retrieve a node
    hierarchy_node = nodeList[id]
    
    # check the class type of the hiearchy node
    if(hierarchy_node.isClassType("SimFlowSegment_Pipe_Indoor")):	
        print("node class type: ", hierarchy_node.ClassType())
        sim_object = hierarchy_node.getSimModelObject()
        sim_object_id = sim_object.RefId()
        child_node_list = hierarchy_node.getChildList()		
        print("current SimModel object id: ", sim_object_id, " has the childs: ", child_node_list, "\n")
        for x in child_node_list:
            obj = x.getSimModelObject()		
            child_node_2level = child_node_list[obj.RefId()]
            print("current SimModel object id: ", sim_object_id, " has the childs: ", child_node_2level, "\n")			
        
print("finish")
