# all following lines are just  examples
import os
import sys

rootPath = os.path.dirname(os.path.dirname(os.path.dirname(__file__)))
dllPath = os.path.join(rootPath, 'Generic_API_1.0\\PythonAPI')
modulePath = os.path.join(rootPath, 'Generic_API_1.0')
dllPath = os.path.join(rootPath, 'Generic_API_1.0\PythonAPI')
useCaseLoc = os.path.join(rootPath, "Generic_API_1.0\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml")
mapRuleLoc = os.path.join(rootPath, "Generic_API_1.0\\xml_mapping_rule\\AixLib_Mapping_Rule.xml")
# add dllPath to Windows Path
os.environ['PATH'] = ';'.join([dllPath, os.environ['PATH']])
# add modulePath to Python Path
sys.path.append(modulePath)

from PythonAPI import simmodel2modelica as lsm

# create mapped data object
MapData = lsm.RuleData()
# set data location
MapData.setDataLocation(useCaseLoc, mapRuleLoc)
# transform SimModel data into Modelica objects
MapData.transformModel()

for component in MapData.components:
    print("Component location: " + component.targetName + ", name: " + component.targetLocation)
    for property in component.properties:
        if property.recordInstance != "":
            print("record structure name: " + property.recordInstance)
        if property.recordLocation != "":
            print("record structure location: " + property.recordLocation)
        print("Property: "+ property.targetLocation + property.name + "=" + property.value)

# create SimProject object
simProject = MapData.simProject
# iterate simSite list
for simSiteObj in simProject.simSite:
    # iterate SimBuilding list
    for simBuildingObj in simSiteObj.buildings:
        # iterate SimSystem (HVAC system) list
        for simSystemObj in simBuildingObj.simSystem:
            # e.g., the hot water loop system in our 1st use case
            if simSystemObj.getSystemName() == "hw_system":
                # convert the system object to its own class type: hot water system
                simSystemHotwater = simSystemObj.toHotwaterSystem()
                # access the internal properties of the hot water looping system: max loop temperature
                print("System max loop temp: {}".format(simSystemHotwater.getMaxLoopTemp()))
