import os

# load SimModel basic classes
import base
# load SimXML I/O functions
import SimModel

# load the SimModel classes you wanna access, e.g.,
# if you need to access a class named A, then import A like following code
import SimBuilding_Building_Default
import SimBuildingStory_BuildingStory_Default
import SimSIUnitType_SiUnit_Default
import SimFlowMover_Pump_VariableSpeedReturn
import SimFlowPlant_Boiler_BoilerHotWater
import SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace
import SimGroup_SpatialZoneGroup_ZoneHvacGroup
import SimProject_Project_DesignAlternative
import SimModel_Hierachy

# load the use case SimXML, and validate the synatx
unmapped_data = SimModel.SimModel_("Boiler_Gas_VDI6020_V10.xml")

#access the element list of specified class, e.g., SimBuildingStory_BuildingStory_Default
sim_build_seq = unmapped_data.SimBuildingStory_BuildingStory_Default()

#iterate each class instance member of the list
for id in range(0, sim_build_seq.sizeInt()):
    print("Instance ", id, ": ")
    sim_build = sim_build_seq.at(id)
    # access the class RefId
    print(" Class RefId: ", sim_build.RefId(), "\n")
    # access the internal properties, e.g.,
    # schema version
    ss = sim_build.SourceModelSchema()
    # if the value is saved in the SimXML
    if (ss.present()):
        # retrieve the value
        print(" Schema version: ", ss.getValue(), "\n")
    # id info
    if (sim_build.ObjectCreationParams().present()):
        print(" Object Id: ", sim_build.ObjectCreationParams().getValue(), "\n")
    # the building story height
    ht = sim_build.BuildingStoryHeight()
    if (ht.present()):
        print(" Building story height: ", ht.getValue(), "\n")
    print("\n")
    
print(unmapped_data.SimSIUnitType_SiUnit_Default().front().DecimalPrecision().getValue(), "\n")
print(unmapped_data.SimFlowMover_Pump_VariableSpeedReturn().at(1).IsTemplateObject().getValue(), "\n")
print(unmapped_data.SimFlowPlant_Boiler_BoilerHotWater().front().IsTemplateObject().getValue(), "\n")

print(unmapped_data.SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace().front().AgreementFlag().getValue(), "\n")
print(unmapped_data.SimGroup_SpatialZoneGroup_ZoneHvacGroup().front().HasTemplateChanged().getValue(), "\n")

#hiearchy
sim_hierarchy = SimModel_Hierachy.SimHierarchy()
sim_hierarchy.loadSimModel("Boiler_Gas_VDI6020_V10.xml")
nodeList = sim_hierarchy.getHierarchyNodeList()
print(nodeList.size())
for id in range(0, nodeList.size()):
    print(nodeList[id].getCurrentObjectPtr().SimModelName().getValue())

print("\n")
