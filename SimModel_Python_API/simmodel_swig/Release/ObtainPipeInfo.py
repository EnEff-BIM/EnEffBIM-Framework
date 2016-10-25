import os
import networkx as nx
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
   
# iterate each hierarchy node saved in the list
Structured_HVAC = []

for id in range(0, nodeList.size()):    
    hierarchy_node = nodeList[id]
    #print("node ", id, ":", hierarchy_node.getSimModelObject().RefId())    
    # check the class type of the hierarchy node
    if hierarchy_node.isClassType("SimSystem_HvacHotWater_Supply") or hierarchy_node.isClassType("SimSystem_HvacHotWater_Demand"):
    # We are in Supply System: --> obtain child list.
        print("Extract childs from ", hierarchy_node.getSimModelObject().RefId())	
        child_node_list = hierarchy_node.getChildList()	
        #print("child_node_list: ", child_node_list)
        #sim_object = hierarchy_node.getSimModelObject()
        #sim_object_id = sim_object.RefId()
        #print("current SimModel object id: ", sim_object_id, " has the childs: ", child_node_list, "\n")
        for child in child_node_list:
            #print("child: ", child.getSimModelObject().RefId()) 		
            selected_info = []		
		# Every child will eventually become a modelica component. Thus we need:
        # Name/ID - Type - & if applicable InPort and Outport from each TargePort and SourcePort
		# The following structure (list of lists) will be used:
		# for each node: [RefId,Type,[list of InPorts],[list of OutPorts],[list of InOrOutPorts]] where each element of the list InPorts
		# is a list of the form: [TargetPort,SourcePort] 
            objectRefId = child.getSimModelObject().RefId()
            objectType = child.ClassType()
            selected_info.extend([objectRefId,objectType])			
        #InPort and Outport			
            child_node_list_2 = child.getChildList()
            InPortlist = []  #SimDistributionPort_HotWaterFlowPort_Water_Out
            OutPortlist = [] #SimDistributionPort_HotWaterFlowPort_Water_In			
            for child_2lvl in child_node_list_2:
    # We need to go 1 level deeper to get Source- and TargetPort. Both are in class SimConnection_HotWaterFlow_Default (Port[0])
    # Attribute TargetPort = OutPort.RefId() (Water_In) and Attribute SourcePort = InPort.RefId() (Water_Out)
	#EXAMPLE:
	#ID0LMbjl8XfFaui1YxJs_D6D
	#InPort: ID3zs117w1n5lwSRidPGhKht (Water_Out)
	#	SourcePort: ID3zs117w1n5lwSRidPGhKht
    #	TargetPort: ID13UhRNCnX1rAwEBMyxljsq
	#OutPort: ID1a5meudDCPOBQD1vrPCFy (Water_In)
    #	SourcePort: ID3mJZcz594IfdQpbAKBQkZ
	#	TargetPort: ID1a5meudDCPOBQD1vrPCFy
    #
    # In case the calss is HotWaterFlowPort_Water_InOrOut
	# The above rule (compare attribute SourcePort and TargetPort with object RefId)
	# helps to know whether the object is an InPort or OutPort.
    # We will later associate InPort with OutPorts.
	# InPort.RefId() = InPort.SourcePort = OutPort.SourcePort  --> Alternative -->  InPort.TargetPort = OutPort.TargetPort = OutPort.RefId()
    # we use -> TargetPort	
                if child_2lvl.isClassType("SimDistributionPort_HotWaterFlowPort_Water_In"):				
                    Port = child_2lvl.getChildList()
                    obj = Port[0].getSimModelObject()
                    OutPortlist.append(child_2lvl.getSimModelObject().RefId())
                if child_2lvl.isClassType("SimDistributionPort_HotWaterFlowPort_Water_Out"):		
                    Port = child_2lvl.getChildList()
                    obj = Port[0].getSimModelObject()
                    class_name = getattr(obj,"TargetPort")				
                    instance = class_name()
                    Port_Id = class_name().getValue()					
                    InPortlist.append(Port_Id)
                if child_2lvl.isClassType("SimDistributionPort_HotWaterFlowPort_Water_InOrOut"):				
                    Port = child_2lvl.getChildList()
                    obj = Port[0].getSimModelObject()				
                    class_name = getattr(obj,"TargetPort")				
                    instance = class_name()
                    TargetPort_Id = class_name().getValue()
                    class_name = getattr(obj,"SourcePort")				
                    instance = class_name()
                    SourcePort_Id = class_name().getValue()
		# If TargetPort_Id = child_2lvl.getSimModelObject().RefId() we have an OutPort (Water_In class)
		# we append SourcePort_Id to OutPortlist otherwise
        # we have an InPort (Water_Out class) so we append SourcePort_Id to the InPort list!
                    print("Water_InOrOut: ", child.getSimModelObject().RefId())		
                    if child_2lvl.getSimModelObject().RefId() == TargetPort_Id:
                        OutPortlist.append(TargetPort_Id)
                    else:
                        InPortlist.append(TargetPort_Id)					
			# Finish reading second lvl childs:  add list of OutPort and InPort into selected info
            selected_info.extend([InPortlist,OutPortlist])			
		     # Finisch with HVAC child. append structured information of the node into global list.
            Structured_HVAC.append(selected_info)
		
G=nx.DiGraph()
listof_RefId  = [elem[0] for elem in Structured_HVAC]
listof_type   = [elem[1] for elem in Structured_HVAC]
listof_InPorts  = [elem[2] for elem in Structured_HVAC]
listof_OutPorts = [elem[3] for elem in Structured_HVAC]


G.add_nodes_from(listof_RefId)	
for node in Structured_HVAC:
    G.node[node[0]]['Text'] = node[0]
    G.node[node[0]]['Description'] = node[1]
	
listofusedPorts = []	
for element_in in Structured_HVAC:
    for InPort in element_in[2]:   
        for element_out in Structured_HVAC:
            for OutPort in element_out[3]: 		
               if InPort == OutPort:
                    print("ElementIN: ", element_in[0]," with InPort: ", InPort, "found OutPort: ", OutPort, " in element ", element_out[0])			   
                    G.add_edge(element_in[0],element_out[0],connection=InPort)
                    if InPort in listofusedPorts:
                        #print("[in]: ", element_in[0], "[out]: ", element_out[0], "port: ", InPort)					
                    listofusedPorts.append(InPort)					
	
print("number of edges: ", G.number_of_edges(), " - number of nodes: ", G.number_of_nodes())	
nx.write_graphml(G,"test.graphml")


	
print("finish")
