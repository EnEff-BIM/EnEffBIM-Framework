import os

# load SimModel hierarchy
import SimModel_Hierachy

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
import SimMaterial_GlazingMaterial_SimpleGlazingSystem
import SimSystem_HvacHotWater_FullSystem
import SimSystem_HvacHotWater_Control
import SimController_SupplyWater_Temperature
import SimSensor_TemperatureSensor_DryBulb
import SimSystem_HvacHotWater_Demand
import SimFlowEnergyTransfer_ConvectiveHeater_Water
import SimFlowFitting_Mixer_DemandProxyMixerWater
import SimFlowFitting_Splitter_DemandProxySplitterWater
import SimSystem_HvacHotWater_Supply
import SimFlowMover_Pump_VariableSpeedReturn
import SimFlowPlant_Boiler_BoilerHotWater
from SimConnection_HotWaterFlow_Default import \
    SimConnection_HotWaterFlow_Default
import SimNode_HotWaterFlowPort_Water_Out
import SimNode_HotWaterFlowPort_Water_In
import SimNode_DigitalControl_HWLoop_DigitalSignal_In

# create SimModel hierarchy object
sim_hierarchy = SimModel_Hierachy.SimHierarchy()

#load and parse SimXML
#simxml_data = sim_hierarchy.loadSimModel("Boiler_Gas_VDI6020_V10.xml")
simxml_data = sim_hierarchy.loadSimModel("Boiler_Gas_VDI6020_V12.simxml")

nodeList = sim_hierarchy.getHierarchyNodeList()

for id in range(nodeList.size()):
    if nodeList[id].ClassType () == \
                    "SimFlowEnergyTransfer_ConvectiveHeater_Water":
        test = nodeList[id].getChildList()
        for i in range(test.size()):
            out = test[0].getChildList()
            connection = out[0].getParentList()
            inn = connection[1].getParentList()
            print(inn[0].getSimModelObject())
            #[0].getChildList()[0].getSimModelObject()
            #print(out[0].getSimModelObject())
            #print(test[i].getSimModelObject())
            """
        print(test.size())
        print(test[0].getSimModelObject())
        test1 = nodeList[id].getParentList()
        print(test1[0].getSimModelObject())
            """
"""
# number of SimModel classes saved in the hierarchy list
print("hierarchy node/class number: ", nodeList.size(), "\n")
hierarchy_node = sim_hierarchy.getHierarchyNode("ID879")
boiler_child = hierarchy_node.getChildList()

for id2 in range(boiler_child.size()):
    print(boiler_child[id2].ClassType())

connector_out = boiler_child[1].getChildList()
connector_in = boiler_child[0].getChildList()
for id3 in range(connector_out.size()):
    print(connector_out[id3].getSimModelObject())
print("break")
for id4 in range(connector_in.size()):
    print(connector_in[id4].getSimModelObject())
"""
"""
# iterate each hiearchy node saved in the list
for id in range(0, nodeList.size()):
    print("node ", id, ":")
    
    # retrieve a node
    hierarchy_node = nodeList[id]
    
    # check the class type of the hiearchy node
    print("node class type: ", hierarchy_node.ClassType())
    
    # compare the class type with a given class name, e.g., 'SimProject_Project_DesignAlternative'
    class_name = "SimProject_Project_DesignAlternative"
    if(hierarchy_node.isClassType(class_name)):
        print("current class type is the same as: ", class_name)

    # retrieve the SimModel class object saved in curren node
    sim_object = hierarchy_node.getSimModelObject()

    # after retrieve the SimModel class object, you can
    # retrieve the internal property of current SimModel object
    # e.g., a property named: SimModelName
    if(sim_object.SimModelName().present()):
        print("SimModel name value: ", sim_object.SimModelName().getValue())
        
    # retrieve the reference id of current SimModel object
    sim_object_id = sim_object.RefId()
    print("current SimModel object id: ", sim_object_id)

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

# 2. the 2nd way for accessing each hierarchy node saved in a tree structure
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

# 3. search a node by giving a reference id
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
    
# 4. compare the parent-child relationship between two hierarchy nodes
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
"""

