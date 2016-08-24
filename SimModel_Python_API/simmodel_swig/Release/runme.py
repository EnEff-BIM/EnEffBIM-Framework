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
import SimWall_Wall_Default
import SimWall_Wall_ExteriorAboveGrade
import SimWindow_Window_Exterior
import SimMaterialLayerSet_Default_Default
import SimMaterialLayerSet_OpaqueLayerSet_Roof
import SimMaterialLayerSet_OpaqueLayerSet_Floor
import SimMaterialLayerSet_OpaqueLayerSet_Wall
import SimMaterialLayerSet_GlazingLayerSet_Window
import SimFeatureElementSubtraction_Void_Opening
import SimMaterialLayer_OpaqueMaterialLayer_Default
import SimMaterialLayer_GlazingMaterialLayer_Default
import SimMaterial_OpaqueMaterial_Default
import SimMaterial_OpaqueMaterial_AirGap
import SimMaterial_GlazingMaterial_Gas
import SimMaterial_GlazingMaterial_SimpleGlazingSystem
import SimMaterial_GlazingMaterial_Glazing
import SimSystem_HvacHotWater_FullSystem
import SimSystem_HvacHotWater_Control
import SimController_SupplyWater_Temperature
import SimSensor_TemperatureSensor_DryBulb
import SimSystem_HvacHotWater_Demand
import SimFlowController_Valve_Default
import SimFlowEnergyTransfer_ConvectiveHeater_Water
import SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water
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

from SimModel_Translator import SimTranslator

# create SimModel translator object
translator = SimTranslator()

# load and parse multiple SimXML files
zoneFile_path = ("SingleZoneWithInternalLoads.simxml")
hvacFile_path = ("1.1_Architecture+HVAC+Zone_Curve+Schedule_korr_ZumTesten.simxml")
fullFile_path= ("Boiler_Gas_VDI6020_V12.simxml")
pathList = [zoneFile_path, hvacFile_path]

simxml_data = translator.loadSimModel(zoneFile_path, hvacFile_path)

# old API for single SimXML file parsing
# simxml_data = translator.loadSimModel(fullFile_path)

# simxml_data is the unmapped SimXML data without hierarchy structure
# like our former demo, you can access the SimXML data via calling a SimModel class name
# e.g. retrieve the property 'SimModelName' of 1st instance of class SimProject_Project_DesignAlternative
#print("access SimXML data: ", simxml_data.SimProject_Project_DesignAlternative().at(0).SimModelName().getValue(), "\n")

# get SimModel mapped data
# here we need to specify the mapping rule xml file location before translating the data
simxml_mapped_data = translator.getSimMappedData(".\\mapping_rule\\mapping_rule_xml\\AixLib_v2.0.xml")

# we provide two different methods for accessing the mapped data
#
# 1. the first method: retrieve a list saving SimModel mapped components
# the list saves all mapped components generated by different mapping rules
mappedComonentList = simxml_mapped_data.getMappedComponentList()

# iterate each mapped components saved in the list
for id in range(0, mappedComonentList.size()):
    print("mapped component", id, ": ", mappedComonentList[id].getTargetComponentName())
    print("mapped component location in the target library: ", mappedComonentList[id].getTargetLocation())
    print("mapping rule used for mapping this component: ", mappedComonentList[id].getMappingRuleName())
    
    # access the unmapped SimModel objects linking to the mapped component
    # retrieve a SimHierarchyNode list saving the unmapped objects 
    unmappedSimHierarchyNodeList = mappedComonentList[id].getUnmappedSimHierarchyNodes()
    
    # iterate the list to access the unmapped SimModel objects
    for _id in range(0, unmappedSimHierarchyNodeList.size()):
        # unmappedSimHierarchyNodeList[_id] is a SimHierarchyNode object
        # you can access the unmapped data like:
        print("unmapped SimModel object class: ", unmappedSimHierarchyNodeList[_id].ClassType())
        print("unmapped SimModel object id: ", unmappedSimHierarchyNodeList[_id].getSimModelObject().RefId())
        
    # retrieve a list saving mapped properties of the mapped component
    mappedPropertyList = mappedComonentList[id].getMappedPropertyList()
    
    # iterate each mapped properties of the mapped component
    for _id in range(0, mappedPropertyList.size()):
        print(" mapped property name: ", mappedPropertyList[_id].getPropertyName())

        # access the mapped value of the mapped property
        # 1st step: you should check the value type, i.e., String, Number (int, float, double), or Matrix
        if(mappedPropertyList[_id].getValueType() =="String" or mappedPropertyList[_id].getValueType() =="Number"):
            print(" mapped property value: ", mappedPropertyList[_id].getPropertyValue())
            
        elif(mappedPropertyList[_id].getValueType()=="Matrix"):
            # get the matrix array
            matrix_data = mappedPropertyList[_id].getPropertyValue()

            print(" mapped property value: ")
            # iterate the matrix row by row
            # you can also access each matrix element like: matrix_data[_rowId][_columnId]
            # here _columnId in range(0, len(matrix_data[_rowId]))
            for _rowId in range(0, matrix_data.size()):
                print(matrix_data[_rowId])

        # optional data of the mapped property
        if(mappedPropertyList[_id].getPropertyLocation()!=""):
            print(" mapped property location: ", mappedPropertyList[_id].getPropertyLocation())

        if(mappedPropertyList[_id].getRecordInstance()!=""):
            print(" mapped property record instance name: ", mappedPropertyList[_id].getRecordInstance())

        if(mappedPropertyList[_id].getRecordLocation()!=""):
            print(" mapped property record location: ", mappedPropertyList[_id].getRecordLocation())
             
        print("\n")

    
    print("\n")

# 2. the second method for accessing the mapped data: go through their unmapped SimHierarchyNode
# the second method can not access the mapped components generted by the mapping rule: 'Gap'
# as these components do not have the corresponding unmapped object in the SimModel side, e.g., the baseParameters defined in the Modelica use case
# you can still access these Gap components via the first method shown above
#
# get SimModel hierarchy object
# sim_hierarchy can be used to access the hierarchy as shown in our former demo
sim_hierarchy = translator.getSimHierarchy()

# retrieve a list saving SimModel hierarchy nodes
# each node represents a SimModel class object
nodeList = sim_hierarchy.getHierarchyNodeList()
   
# iterate each hiearchy node saved in the list
for id in range(0, nodeList.size()):
    print("node ", id, ":")
    
    # retrieve a node
    hierarchy_node = nodeList[id]
    
    # check the class type of the hiearchy node
    print("node class type: ", hierarchy_node.ClassType())

    # retrieve the SimModel class object saved in curren node
    sim_object = hierarchy_node.getSimModelObject()
        
    # retrieve the reference id of current SimModel object
    sim_object_id = sim_object.RefId()
    print("current SimModel object id: ", sim_object_id)
        
    #!!! access the mapped data linking to this hiearchy node
    # retrieve a list saving the mapped components
    mappedComponentList = hierarchy_node.getMappedComponents()

    # iterate the mapped components
    for _id in range(0, mappedComponentList.size()):
        # now you can do similar operation on the mapped data as we shown in former section 1
        # e.g.
        print(" mapped component name: ", mappedComponentList[_id].getTargetComponentName())
        print(" mapped component location: ", mappedComponentList[_id].getTargetLocation())
        

    ##########################################the following is the demo code for SimModel hierarchy access##########################################
    
    
    # here we show how to access the internal properties of Time Series classes
    # 1. compare the class type with a given class name, e.g., 'SimTimeSeriesSchedule_Year_Default'
    class_name = "SimTimeSeriesSchedule_Year_Default"
    if(hierarchy_node.isClassType(class_name)):
        # access internal property SimTimeSeriesSched_StartMonth_1_53
        # SimTimeSeriesSched_StartMonth_1_53 is a list saving multiple number values instead of a single value
        # so the 1st step is to retrieve a list of numbers, e.g., integers, doubles, by calling function getNumberList()
        _timeSeriesList = sim_object.SimTimeSeriesSched_StartMonth_1_53().getNumberList()
        # iterate the internal elements of the list to retrieve each single value saved by the property list 'SimTimeSeriesSched_StartMonth_1_53'
        for _subId in range(0, len(_timeSeriesList)):
            print("Year time series property StartMonth: ", _timeSeriesList[_subId])
            
    # 2. access class 'SimTimeSeriesSchedule_Day_Interval'
    class_name = "SimTimeSeriesSchedule_Day_Interval"
    if(hierarchy_node.isClassType(class_name)):
        # 2.1 access internal property SimTimeSeriesSched_Time_1_144
        # SimTimeSeriesSched_Time_1_144 saves a nested child class 'stringItem'
        # so the 1st step is get the class instance of SimTimeSeriesSched_Time_1_144 by calling function get(), not getValue()
        # getValue() is designed to retrieve a single value saved by a property, but SimTimeSeriesSched_Time_1_144 is not a single value, is a parent class
        # that will link to its child class stringItem. Then we need to call function get() here to firstly get the parent class instance as follows.
        # Afterwards, we can call the function stringItem() to retrieve the child class.
        _stringItem = sim_object.SimTimeSeriesSched_Time_1_144().get().stringItem()
        # 2nd step: each SimTimeSeriesSched_Time_1_144 class can save multiple stringItem class instance
        # therefore, when we call stringItem(), it will return a sequence of stringItem instance.
        # we need to iterate this sequence for accessing its internal values
        for _subId in range(0, _stringItem.sizeInt()):
            print("Day time series: ", _stringItem.getValue(_subId))

        # 2.2 access internal property SimTimeSeriesSched_ValUntilTime_1_144
        # SimTimeSeriesSched_ValUntilTime_1_144 is also a list saving multiple numbers, so we need to call getNumberList() as follows.
        _timeSeriesList = sim_object.SimTimeSeriesSched_ValUntilTime_1_144().getNumberList()
        for _sub_id in range(0, len(_timeSeriesList)):
            print("Day time series valid time: ", _timeSeriesList[_sub_id])

    # after retrieve the SimModel class object, you can
    # retrieve the internal property of current SimModel object
    # e.g., a property named: SimModelName
    if(sim_object.SimModelName().present()):
        print("SimModel name value: ", sim_object.SimModelName().getValue())

    # retrieve the parent node list of current hierarchy node
    parent_node_list = hierarchy_node.getParentList()
    # access each parent node
    for _id in range(0, parent_node_list.size()):
        parent_node = parent_node_list[_id]
        # parent node is also a hierarchy node
        # you can re-do everything above agian for each parent node
        # such as
        print("parent node ", _id, ": ", parent_node.ClassType(), " ", parent_node.getSimModelObject().RefId())

    # retrieve the child node list of current hierarchy node
    child_node_list = hierarchy_node.getChildList()
    for _id in range(0, child_node_list.size()):
        child_node = child_node_list[_id]
        # child node is also a hierarchy node
        # you can re-do everything above agian for each parent node
        # such as
        print("child node ", _id, ": ", child_node.ClassType(), " ", child_node.getSimModelObject().RefId())
        
    print("\n")

# 3. the 2nd way for accessing each hierarchy node saved in a tree structure
# you need a recursive function to iterate the hierarchy tree (see below example)
def IterateSimModelHierarchy(_SimHierarchyNode, _level):
    # print current hierarchy node
    print("current hierarchy level: ", _level)
    print("current hierarchy node: ", _SimHierarchyNode.ClassType(), " ", _SimHierarchyNode.getSimModelObject().RefId())
    
    # access internal child nodes
    child_node_list = _SimHierarchyNode.getChildList()
    for _id in range(0, child_node_list.size()):
        child_node = child_node_list[_id]
        
        # print child node
        print(" child node ", _id, ": ", child_node.ClassType(), " ", child_node.getSimModelObject().RefId())
        
        # recursively iterating next hierarchy level
        IterateSimModelHierarchy(child_node, _level+1)


# initial level
_level = 0
# retrieve the root node the parsed hierarchy
root_node = sim_hierarchy.getHierarchyRootNode()

if(root_node):
    # if root_node!=none
    # set the root node of the hierarchy as the beginning node for tree iterating
    IterateSimModelHierarchy(root_node, _level)

print("\n")

# 4. search a node by giving a reference id
sim_object_id = "ID876"

# search this id in the hiearchy list
hierarchy_node = sim_hierarchy.getHierarchyNode(sim_object_id)

# if the return value is not none
# a node with the given id is found
if(hierarchy_node):
    print("found a node: ", hierarchy_node.ClassType(), " with id =", sim_object_id)
    
    # the return value 'hierarchy_node' is a also a hierarchy node
    # you can re-do everything as shown in above example
    # e.g. retrieve the SimModel class object saved in curren node
    sim_object = hierarchy_node.getSimModelObject()

    # check the class type of the SimModel class object
    # not the hierarchy node object 'hierarchy_node'
    print("SimModel class type: ", sim_hierarchy.ClassType(sim_object))

    # or compare the SimModel class object type with a given class name, e.g., 'SimSite_BuildingSite_Default'
    class_name = "SimSite_BuildingSite_Default"
    if(sim_hierarchy.isClassType(sim_object, class_name)):
        print("current class type is the same as: ", class_name)
    else:
        print("current class type is not the same as: ", class_name)

    print("\n")
    
# 5. compare the parent-child relationship between two hierarchy nodes
# retrieve a node
hierarchy_node0 = nodeList[0]

# retrieve another node
hierarchy_node1 = nodeList[1]

# compare their relationship
# e.g., whether the given node1 is the parent of node0
if(hierarchy_node0.isParent(hierarchy_node1)):
    print(hierarchy_node1.ClassType(), " is the parent of ", hierarchy_node0.ClassType())

# whether the given node1 is the child of node0
if(hierarchy_node0.isChild(hierarchy_node1)):
    print(hierarchy_node1.ClassType(), " is the child of ", hierarchy_node0.ClassType())

print("finish")
