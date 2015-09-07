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

# access the mapped data
for component in MapData.components:
    print("Component location: " + component.targetName + ", name: " + component.targetLocation)
    print(component.unmappedComponent)
    # access the corresponding unmapped component in SimModel side
    for unmappedComponentObj in component.unmappedComponent:
        # automated type conversion to the real data type
        # print the unmapeed component name
        print("unmapped component name: " + unmappedComponentObj.identifier)
        
for connection in MapData.loopConnections:
    print(connection.outletComponent)
"""        
    # access the internal property of the mapped component    
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
        for simSystemObj in simBuildingObj.buildingSystem:
            # automated type conversion, e.g., the hot water loop system in our 1st use case
            simHotWaterLoop = simSystemObj.typeConversion()
            print(simHotWaterLoop)
            for supply in simHotWaterLoop.supplySide.supplyComponents:
                print(supply.typeConversion(), "has following connections:")
                # access the connection of given component
                for connection in supply.typeConversion().loopConnection:
                    print(connection.outletComponent.typeConversion(),"is connected to",connection.inletComponent.typeConversion())
                print("\n")
"""