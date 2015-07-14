from ctypes import *

import os, sys
rootPath = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(__file__))))
modulePath = os.path.join(rootPath, 'Generic_API\Generic_API_1.0')
dllPath = os.path.join(rootPath, 'Generic_API\Generic_API_1.0\PythonAPI')

# add dllPath to Windows Path
os.environ['PATH'] = ';'.join([dllPath, os.environ['PATH']])
# add modulePath to Python Path
sys.path.append(modulePath)

lib = cdll.LoadLibrary('./simmodel2modelica')


# b2s : bytes to string
if sys.version_info < (3, 0):
    def b2s(b):
        return b
else:
    def b2s(b):
        return str(b, 'latin1')

class Property(object):
    def __init__(self, obj):
        self.obj = obj
    def getName(self):
        return lib.property_get_name(self.obj)
    def getValue(self):
        return lib.property_get_value(self.obj)
    def getTargetLocation(self):
        return lib.property_get_target_location(self.obj)
    def getRecordInstance(self):
        return lib.property_get_record_instance(self.obj)
    def getRecordLocation(self):
        return lib.property_get_record_location(self.obj)
    def getValueGroup(self):
        return lib.property_get_value_group(self.obj)
    def getFlag(self):
        return lib.property_get_flag(self.obj)

class Component(object):
    def __init__(self, obj):
        self.obj = obj
    def getTargetName(self):
        return lib.component_get_target_name(self.obj)
    def getTargetLocation(self):
        return lib.component_get_target_location(self.obj)
    def getProperty(self, id):
        return lib.component_get_property(self.obj, id)
    def getPropertyNumber(self):
        return lib.component_get_property_number(self.obj)
    
class RuleData(object):
    def __init__(self):
        self.obj = lib.rule_data_init()
    def getComponent(self, id):
        return lib.rule_data_get_component(self.obj, id)
    def getComponentNumber(self):
        return lib.rule_data_get_component_number(self.obj)
    def getSimProject(self):
        return lib.sim_project_init(self.obj)
    def transformModel(self):
        return lib.rule_data_transform_model(self.obj)
    def setUseCaseLocation(self, case_loc):
        return lib.rule_data_set_use_case_location(self.obj, case_loc)
    def setDataLocation(self, useCaseLoc, mapRuleLoc):
        return lib.rule_data_set_data_location(self.obj, useCaseLoc, mapRuleLoc)
    def getLoopConnection(self, id):
        return lib.sim_system_get_loop_connection(self.obj, id)
    def getLoopConnectionNumber(self):
        return lib.sim_system_get_loop_connection_number(self.obj)    

class SimConnection(object):
    def __init__(self, obj):
        self.obj = obj
    def getOutletComponent(self):
        return lib.sim_system_get_outlet_component(self.obj)
    def getInletComponent(self):
        return lib.sim_system_get_inlet_component(self.obj)
        
class SimProject(object):
    def __init__(self, obj):
        self.obj = obj
    def getWeatherLocationCity(self):
        return lib.sim_project_get_weather_location_city(self.obj)
    def getSimSiteNumber(self):
        return lib.sim_project_get_sim_site_number(self.obj)
    def getSimSite(self, id):
        return lib.sim_project_get_sim_site(self.obj, id)

class SimSite(object):
    def __init__(self, obj):
        self.obj = obj
    def getSiteName(self):
        return lib.sim_site_get_name(self.obj)
    def getSimBuilding(self, id):
        return lib.sim_site_get_sim_building(self.obj, id)
    def getSimBuildingNumber(self):
        return lib.sim_site_get_sim_building_number(self.obj)

class SimBuilding(object):
    def __init__(self, obj):
        self.obj = obj
    def getSimZoneHvacGroup(self, id):
        return lib.sim_building_get_sim_zone_hvac_group(self.obj, id)
    def getSimZoneHvacGroupNumber(self):
        return lib.sim_building_get_sim_zone_hvac_group_number(self.obj)
    def getSimThermalZone(self, id):
        return lib.sim_building_get_sim_thermal_zone(self.obj, id)
    def getSimThermalZoneNumber(self):
        return lib.sim_building_get_sim_thermal_zone_number(self.obj)
    def getSimSystem(self, id):
        return lib.sim_building_get_sim_system(self.obj, id)
    def getSimSystemNumber(self):
        return lib.sim_building_get_sim_system_number(self.obj)

class SimZoneHvacGroup(SimBuilding):
    def __init__(self, obj):
        self.obj = obj
        
class SimThermalZone(object):
    def __init__(self, obj):
        self.obj = obj

class SimSystem(object):
    def __init__(self, obj):
        self.obj = obj
    def toHotwaterSystem(self):
        return lib.sim_system_to_hotwater_system(self.obj)
    def getSystemName(self):
        return lib.sim_system_get_name(self.obj)
    def toPumpVarSpedRet(self):
        return lib.sim_system_to_pump_varSpedRet(self.obj)
    def toBoilerHotWater(self):
        return lib.sim_system_to_boiler_hotwater(self.obj)
    def toHeaterConvectiveWater(self):
        return lib.sim_system_to_heater_convectwater(self.obj)
    def toSupplyWaterTemperatureControl(self):
        return lib.sim_system_to_supplywater_tempCtl(self.obj)
    def toTemperatureDryBulbSensor(self):
        return lib.sim_system_to_tempdrybulb_sensor(self.obj)
    
class SimSystemHotwater(object):
    def __init__(self, obj):
        self.obj = obj
    def getMaxLoopTemp(self):
        return lib.sim_system_hotwater_get_max_loop_temp(self.obj)
    def getMinLoopTemp(self):
        return lib.sim_system_hotwater_get_min_loop_temp(self.obj)
    def getMaxLoopFlowRate(self):
        lib.sim_system_hotwater_get_max_loop_flow_rate(self.obj)
    def getSupplySide(self):
        return lib.sim_system_hotwater_get_supply(self.obj)
    def getDemandSide(self):
        return lib.sim_system_hotwater_get_demand(self.obj)
    def getControlSide(self):
        return lib.sim_system_hotwater_get_control(self.obj)

# supply side of the hot water system
class SimSystemHotwaterSupply(object):
    def __init__(self, obj):
        self.obj = obj
    def getSupplyComponent(self, id):
        return lib.sim_system_hotwater_get_water_supply_component(self.obj, id)
    def getSupplyComponentNumber(self):
        return lib.sim_system_hotwater_get_water_supply_component_number(self.obj)

# sim pump of variable speed return
class SimPumpVarSpedRet(object):
    def __init__(self, obj):
        self.obj = obj
    def getRatedFlowRate(self):
        return lib.sim_pump_varSpedRet_ratedFlowRate(self.obj)

# sim boiler of hot water
class SimBoilerHotWater(object):
    def __init__(self, obj):
        self.obj = obj
    def getFlowPlantNomCap(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_NomCap(self.obj)
    def getFlowPlantNomThermalEff(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_NomThermalEff(self.obj)
    def getFlowPlantDesignWaterOutletTemp(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_DesignWaterOutletTemp(self.obj)
    def getFlowPlantDesignWaterFlowRate(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_DesignWaterFlowRate(self.obj)
    def getFlowPlantMinPartLoadRatio(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_MinPartLoadRatio(self.obj)
    def getFlowPlantMaxPartLoadRatio(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_MaxPartLoadRatio(self.obj)
    def getFlowPlantOptimumPartLoadRatio(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_OptimumPartLoadRatio(self.obj)
    def getFlowPlantWaterOutletUpTempLimit(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_WaterOutletUpTempLimit(self.obj)
    def getFlowPlantBoilerFlowMode(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_BoilerFlowMode(self.obj)
    def getFlowPlantSizingFactor(self):
        return lib.sim_boiler_hotwater_get_SimFlowPlant_SizingFactor(self.obj)
    

# demand side of the hot water system
class SimSystemHotwaterDemand(object):
    def __init__(self, obj):
        self.obj = obj
    def getDemandComponent(self, id):
        return lib.sim_system_hotwater_get_water_demand_component(self.obj, id)
    def getDemandComponentNumber(self):
        return lib.sim_system_hotwater_get_water_demand_component_number(self.obj)

# sim heater of convective water
class SimHeaterConvectiveWater(object):
    def __init__(self, obj):
        self.obj = obj
    def getMaxWaterFlowRate(self):
        return lib.sim_heater_convective_water_get_max_water_flow_rate(self.obj)
    def getConvergTol(self):
        return lib.sim_heater_convective_water_get_converg_tol(self.obj)
    def getUFactorTimesAreaVal(self):
        return lib.sim_heater_convective_water_get_ufactor_times_area(self.obj)

# control side of the hot water system
class SimSystemHotwaterControl(object):
    def __init__(self, obj):
        self.obj = obj
    def getControlComponent(self, id):
        return lib.sim_system_hotwater_get_water_control_component(self.obj, id)
    def getControlComponentNumber(self):
        return lib.sim_system_hotwater_get_water_control_component_number(self.obj)

# sim supply water temperature control
class SimSupplyWaterTemperatureControl(object):
    def __init__(self, obj):
        self.obj = obj

# sim dry bulb temperature sensor
class SimTemperatureDryBulbSensor(object):
    def __init__(self, obj):
        self.obj = obj

    
# property data level
lib.property_get_name.restype = c_char_p
lib.property_get_name.argtypes = ()
lib.property_get_value.restype = c_char_p
lib.property_get_value.argtypes = ()
lib.property_get_target_location.restype = c_char_p
lib.property_get_target_location.argtypes = ()
lib.property_get_record_instance.restype = c_char_p
lib.property_get_record_instance.argtypes = ()
lib.property_get_record_location.restype = c_char_p
lib.property_get_record_location.argtypes = ()
lib.property_get_value_group.restype = c_char_p
lib.property_get_value_group.argtypes = ()
lib.property_get_flag.restype = c_bool
lib.property_get_flag.argtypes = ()
# component data level
lib.component_get_target_name.restype = c_char_p
lib.component_get_target_name.argtypes = ()
lib.component_get_target_location.restype = c_char_p
lib.component_get_target_location.argtypes = ()
lib.component_get_property_number.restype = c_int
lib.component_get_property_number.argtypes = ()
lib.component_get_property.restype = Property
lib.component_get_property.argtypes = [c_void_p, c_int]
# component list level
lib.rule_data_get_component.restype = Component
lib.rule_data_get_component.argtypes = [c_void_p, c_int]
lib.rule_data_get_component_number.restype = c_int
lib.rule_data_get_component_number.argtypes = ()
# system loop connections
lib.sim_system_get_loop_connection.restype = SimConnection
lib.sim_system_get_loop_connection.argtypes = [c_void_p, c_int]
lib.sim_system_get_loop_connection_number.restype = c_int
lib.sim_system_get_loop_connection_number.argtypes = ()
lib.sim_system_get_outlet_component.restype = SimSystem
lib.sim_system_get_outlet_component.argtypes = ()
lib.sim_system_get_inlet_component.restype = SimSystem
lib.sim_system_get_inlet_component.argtypes = ()
# generic API
# file IO
lib.rule_data_set_use_case_location.argtypes = [c_void_p, c_char_p]
lib.rule_data_set_use_case_location.restype = None
lib.rule_data_set_data_location.argtypes = [c_void_p, c_char_p, c_char_p]
lib.rule_data_set_data_location.restype = None
# load SimModel data and transform the model
lib.rule_data_transform_model.argtypes = ()
lib.rule_data_transform_model.restype = None
# sim project
lib.sim_project_init.restype = SimProject
lib.sim_project_init.argtypes = ()
lib.sim_project_get_weather_location_city.restype = c_char_p
lib.sim_project_get_weather_location_city.argtypes = ()
lib.sim_project_get_sim_site_number.restype = c_int
lib.sim_project_get_sim_site_number.argtypes = ()
lib.sim_project_get_sim_site.restype = SimSite
lib.sim_project_get_sim_site.argtypes = [c_void_p, c_int]
# sim site
lib.sim_site_get_name.restype = c_char_p
lib.sim_site_get_name.argtypes = ()
# sim building
lib.sim_site_get_sim_building.restype = SimBuilding
lib.sim_site_get_sim_building.argtypes = [c_void_p, c_int]
lib.sim_site_get_sim_building_number.restype = c_int
lib.sim_site_get_sim_building_number.argtypes = ()
# sim zone & HVAC group
lib.sim_building_get_sim_zone_hvac_group.restype = SimZoneHvacGroup
lib.sim_building_get_sim_zone_hvac_group.argtypes = [c_void_p, c_int]
lib.sim_building_get_sim_zone_hvac_group_number.restype = c_int
lib.sim_building_get_sim_zone_hvac_group_number.argtypes = ()
# sim thermal zone
lib.sim_building_get_sim_thermal_zone.restype = SimThermalZone
lib.sim_building_get_sim_thermal_zone.argtypes = [c_void_p, c_int]
lib.sim_building_get_sim_thermal_zone_number.restype = c_int
lib.sim_building_get_sim_thermal_zone_number.argtypes = ()
# sim systems
lib.sim_building_get_sim_system.restype = SimSystem
lib.sim_building_get_sim_system.argtypes = [c_void_p, c_int]
lib.sim_building_get_sim_system_number.restype = c_int
lib.sim_building_get_sim_system_number.argtypes = ()
lib.sim_system_get_name.restype = c_char_p
lib.sim_system_get_name.argtypes = ()
lib.sim_system_to_pump_varSpedRet.restype = SimPumpVarSpedRet
lib.sim_system_to_pump_varSpedRet.argtypes = ()
lib.sim_system_to_boiler_hotwater.restype = SimBoilerHotWater
lib.sim_system_to_boiler_hotwater.argtypes = ()
lib.sim_system_to_heater_convectwater.restype = SimHeaterConvectiveWater
lib.sim_system_to_heater_convectwater.argtypes = ()
lib.sim_system_to_supplywater_tempCtl.restype = SimSupplyWaterTemperatureControl
lib.sim_system_to_supplywater_tempCtl.argtypes = ()
lib.sim_system_to_tempdrybulb_sensor.restype = SimTemperatureDryBulbSensor
lib.sim_system_to_tempdrybulb_sensor.argtypes = ()
# sim system for hot water
lib.sim_system_to_hotwater_system.restype = SimSystemHotwater
lib.sim_system_to_hotwater_system.argtypes = ()
lib.sim_system_hotwater_get_max_loop_temp.restype = c_double
lib.sim_system_hotwater_get_max_loop_temp.argtypes = ()
lib.sim_system_hotwater_get_min_loop_temp.restype = c_double
lib.sim_system_hotwater_get_min_loop_temp.argtypes = ()
lib.sim_system_hotwater_get_max_loop_flow_rate.restype = c_double
lib.sim_system_hotwater_get_max_loop_flow_rate.argtypes = ()
# sim system for hot water: supply side
lib.sim_system_hotwater_get_supply.restype = SimSystemHotwaterSupply
lib.sim_system_hotwater_get_supply.argtypes = ()
lib.sim_system_hotwater_get_water_supply_component.restype = SimSystem
lib.sim_system_hotwater_get_water_supply_component.argtypes = [c_void_p, c_int]
lib.sim_system_hotwater_get_water_supply_component_number.restype = c_int
lib.sim_system_hotwater_get_water_supply_component_number.argtypes = ()
# sim hot water boiler
lib.sim_boiler_hotwater_get_SimFlowPlant_NomCap.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_NomCap.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_NomThermalEff.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_NomThermalEff.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_DesignWaterOutletTemp.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_DesignWaterOutletTemp.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_DesignWaterFlowRate.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_DesignWaterFlowRate.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_MinPartLoadRatio.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_MinPartLoadRatio.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_MaxPartLoadRatio.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_MaxPartLoadRatio.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_OptimumPartLoadRatio.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_OptimumPartLoadRatio.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_WaterOutletUpTempLimit.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_WaterOutletUpTempLimit.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_BoilerFlowMode.restype = c_char_p
lib.sim_boiler_hotwater_get_SimFlowPlant_BoilerFlowMode.argtypes = ()
lib.sim_boiler_hotwater_get_SimFlowPlant_SizingFactor.restype = c_double
lib.sim_boiler_hotwater_get_SimFlowPlant_SizingFactor.argtypes = ()
# sim pump of variable flow speed return
lib.sim_pump_varSpedRet_ratedFlowRate.restype = c_char_p
lib.sim_pump_varSpedRet_ratedFlowRate.argtypes = ()
# sim system for hot water: demand side
lib.sim_system_hotwater_get_demand.restype = SimSystemHotwaterDemand
lib.sim_system_hotwater_get_demand.argtypes = ()
lib.sim_system_hotwater_get_water_demand_component.restype = SimSystem
lib.sim_system_hotwater_get_water_demand_component.argtypes = [c_void_p, c_int]
lib.sim_system_hotwater_get_water_demand_component_number.restype = c_int
lib.sim_system_hotwater_get_water_demand_component_number.argtypes = ()
# sim heater of convective water
lib.sim_heater_convective_water_get_max_water_flow_rate.restype = c_double
lib.sim_heater_convective_water_get_max_water_flow_rate.argtypes = ()
lib.sim_heater_convective_water_get_converg_tol.restype = c_double
lib.sim_heater_convective_water_get_converg_tol.argtypes = ()
lib.sim_heater_convective_water_get_ufactor_times_area.restype = c_double
lib.sim_heater_convective_water_get_ufactor_times_area.argtypes = ()
# control side
lib.sim_system_hotwater_get_control.restype = SimSystemHotwaterControl
lib.sim_system_hotwater_get_control.argtypes = ()
lib.sim_system_hotwater_get_water_control_component.restype = SimSystem
lib.sim_system_hotwater_get_water_control_component.argtypes = [c_void_p, c_int]
lib.sim_system_hotwater_get_water_control_component_number.restype = c_int
lib.sim_system_hotwater_get_water_control_component_number.argtypes = ()

if __name__ == "__main__":
    # all following lines are just  examples

    # specify the data location: SimModel use case and its
    # mapping rule instance for given Modelica library
    #useCaseLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml")
    #mapRuleLoc = os.path.join(rootPath, "Generic_API\\Generic_API_1.0\\xml_mapping_rule\\AixLib_Mapping_Rule.xml")
    # create mapped data object
    MapData = RuleData()
    # set data location
    #MapData.setDataLocation(useCaseLoc, mapRuleLoc)
    MapData.setDataLocation(b"..\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml", b"..\\xml_mapping_rule\\AixLib_Mapping_Rule.xml")
    # transform SimModel data into Modelica objects
    MapData.transformModel()

    # access transformed / mapped data
    componentNumber = MapData.getComponentNumber()
    # iterate each mapped component data
    for comId in range(0, componentNumber):
        # retrieve the mapped component name and its location in AixLib
        print("Component location: " + MapData.getComponent(comId).getTargetLocation().decode('ascii') + ", name: " + MapData.getComponent(comId).getTargetName().decode('ascii'))
        propertyNumber = MapData.getComponent(comId).getPropertyNumber()
        # iterate mapped properties of each component
        for proId in range(0, propertyNumber):
            if MapData.getComponent(comId).getProperty(proId).getRecordInstance() != "":
                print("record structure name: " + MapData.getComponent(comId).getProperty(proId).getRecordInstance().decode('ascii'))
            if MapData.getComponent(comId).getProperty(proId).getRecordLocation() != "":
                print("record structure location: " + MapData.getComponent(comId).getProperty(proId).getRecordLocation().decode('ascii'))
            print("Property: " + MapData.getComponent(comId).getProperty(proId).getTargetLocation().decode('ascii') + MapData.getComponent(comId).getProperty(proId).getName().decode('ascii') + "=" + MapData.getComponent(comId).getProperty(proId).getValue().decode('ascii'))
            print("\n")

    # access hierarchy
    print("Get SimProject object")
    simProject = MapData.getSimProject()
    print("Weather location city: " + simProject.getWeatherLocationCity().decode('ascii'))

    print("Get 1st SimSite object")
    simSite = simProject.getSimSite(0);
    print("Site name: " + simSite.getSiteName().decode('ascii'))

    print("Get SimBuilding object")
    simBuilding = simSite.getSimBuilding(0)
    print("SimBuilding number: {}".format(simSite.getSimBuildingNumber()))

    print("Get SimThermalZone object")
    simBuilding.getSimThermalZone(0)
    print("SimThermalZone number: {}".format(simBuilding.getSimThermalZoneNumber()))

    # access the HVAC system objects of the data model
    # retrieve the total number of HVAC systems saved in the data model
    systemNumber = simBuilding.getSimSystemNumber()
    # iterate each HVAC system
    for id in range(0, systemNumber):
        # retrieve the SimSystem object
        simSystem = simBuilding.getSimSystem(id)
        # e.g., the hot water loop system in our 1st use case
        if simSystem.getSystemName() == "hw_system":
            # convert the system object to its own class type: hot water system
            simSystemHotwater = simSystem.toHotwaterSystem()
            # access the internal properties of the hot water looping system: max loop temperature
            print("System max loop temp: {}".format(simSystemHotwater.getMaxLoopTemp()))

