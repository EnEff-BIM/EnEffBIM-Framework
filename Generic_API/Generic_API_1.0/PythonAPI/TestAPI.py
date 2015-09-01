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
            if simSystemObj.getSystemName() == "hw_system": # if isinstance(simSystem, hw_system):
                # convert the system object to its own class type: hot water system
                simSystemHotwater = simSystemObj.toHotwaterSystem()
                # access the internal properties of the hot water looping system: max loop temperature
                print("System max loop temp: {}".format(simSystemHotwater.getMaxLoopTemp()))
                # retrieve the supply side of the hot water system
                supplySystem = simSystemHotwater.getSupplySide()
                # retrieve the total number of water supply components
                supplyComponentNumber = supplySystem.getSupplyComponentNumber()
                # iterate each components of the supply side
                for id in range(0, supplyComponentNumber):
                    simComponent = supplySystem.getSupplyComponent(id)
                    # retrieve the component name
                    #print("supply component name: " + simComponent.getSystemName())
                    # convert the component object to its own class type based on the name (data type conversion)
                    if simComponent.getSystemName() == "SimFlowMover_Pump_VariableSpeedReturn":
                        # convert to the pump type with variable flow speed return
                        simPump = simComponent.toPumpVarSpedRet()
                        # 1. access the loop connections assigned to the sim component object (after the data type conversion)
                        for connectionObj in simPump.loopConnection:
                            # retrieve the water outlet component of this loop connection
                            print("water outlet component: "+connectionObj.outletComponent.getSystemName())
                            # retrieve the water inlet component of this loop connection
                            print("water intlet component: "+connectionObj.inletComponent.getSystemName())
                
                

# access all loop connections
for connection in MapData.loopConnections:
    componentWaterOut = connection.outletComponent
    componentWaterIn = connection.inletComponent
    # 2. access the loop connection assigned to the sim system object (before the data type conversion)
    for connectionObj in componentWaterOut.loopConnection:
        print("water outlet component: "+connectionObj.outletComponent.getSystemName())
        print("water intlet component: "+connectionObj.inletComponent.getSystemName())
    # data type conversion
    if componentWaterOut.getSystemName() == "SimFlowMover_Pump_VariableSpeedReturn":
        # convert to the pump type with variable flow speed return
            simPumpWaterOut = componentWaterOut.toPumpVarSpedRet()
            # access the internal properties of the pump:
            print("pump rated flow rate in the loop: " + simPumpWaterOut.getRatedFlowRate())
