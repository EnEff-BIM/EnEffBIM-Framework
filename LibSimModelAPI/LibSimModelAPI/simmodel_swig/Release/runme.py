import os

# load the SimModel classes you wanna access, e.g.,
# if you need to access a class named A, then import A like following code
import SimAddress_Postal_Default
import SimBuildingStory_BuildingStory_Default
import SimBuilding_Building_Default
import SimModel

# load the use case SimXML, and validate the synatx
unmapped_data = SimModel.SimModel_("Boiler_Gas_VDI6020_V10.xml")

#access the element list of specified class, e.g., SimBuilding_Building_Default
sim_build_seq = unmapped_data.SimBuilding_Building_Default()

#iterate each class instance member of the list
for id in range(0, sim_build_seq.sizeInt()):
    sim_build = sim_build_seq.at(id)
    # access the internal properties,
    # e.g., the building height
    ht = sim_build.BuildingHeight()
    # if the value is saved in the SimXML
    if (ht.present()):
        # retrieve the value
        print("Building height: ", ht.getValue(), "\n")
