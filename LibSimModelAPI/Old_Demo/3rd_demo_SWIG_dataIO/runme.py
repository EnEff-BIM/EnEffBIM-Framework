import os

# load the SimModel pyd file
import test_dll

# load the use case SimXML, and validate the synatx
unmapped_data = test_dll.SimModel_("Boiler_Gas_VDI6020_Test.xml")
print(unmapped_data)

#access the element list of class SimBuilding_Building_Default
sim_build_seq = unmapped_data.SimBuilding_Building_Default()
print(sim_build_seq)
print("\n")
#print(sim_build_seq.size())

# access the 1st elment saving in the list
sim_build = sim_build_seq.front()
# the iteration operator [] of accessing list element is under developing (E.g., sim_build[0]). We need further development.
# Reason: in C++ side, the STL container used to save the class element does not support [] operator.
# we will try to provide such convinent operator in Python API.
# right now, we can only call the function, like front() to access the 1st element,
# end() to the last element or at() to access internal elements at given positions.
# here at() needs an position index id given as input. The data type of the id in Python
# is an integer. But the corresponding type in C++ is named size_type. The coversion function
# between this two type is under testing. We will publish it and the [] in next version.
print(sim_build)
print("\n")

# access the property building height of class SimBuilding_Building_Default
# this property is inherited from the parent class SimBuilding_Building
# 1st step: load the BuildingHeight container
ht = sim_build.BuildingHeight()
print(ht)
print("\n")

# 2nd step: check whether this value is saved in SimXML
if(ht.present()):
    # if returned boolean value is: true
    # then 3rd step: get the value
    print("Building height: ", ht.getV()) # later we will use the function get() instead of getV()
    print("\n")

# The access to the other properties are very similar, e.g., SimUniqueID
# 1st step: load the SimUniqueID container
sim_id = sim_build.SimUniqueID()
# But the container saving the other properties are not yet binded. We'll add this binding soon later.
# Afterwards, we can do following steps again to retrieve the other property values.
# 2nd step: check availability
# sim_id.present()
# 3rd step: get the value
# sim_id.get()
