import os

# load the SimModel pyd file
import test_dll

# load the use case SimXML, and validate the synatx
unmapped_data = test_dll.SimModel_("Boiler_Gas_VDI6020_Test.xml")
print(unmapped_data)

#access the sim building element list
sim_build_seq = unmapped_data.SimBuilding_Building_Default()
print(sim_build_seq)

# the list structure SimBuilding_Building_Default_sequence now is not iterable
# the correpsonding API is under testing
# When the itration API is working, then we can continue accessing each single
# sim building elment like this:
#for sim_build in sim_build_seq:
#    sim_build.BuildingHeight()




