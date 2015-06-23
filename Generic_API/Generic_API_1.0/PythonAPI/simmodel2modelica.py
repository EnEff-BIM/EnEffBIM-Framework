from ctypes import *

import sys
# b2s : bytes to string
if sys.version_info < (3, 0):
    def b2s(b):
        return b
else:
    def b2s(b):
        return str(b, 'latin1')

lib = cdll.LoadLibrary('./simmodel2modelica')

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
    def getSimThermalZone(self, id):
        return lib.sim_building_get_sim_thermal_zone(self.obj, id)
    def getSimThermalZoneNumber(self):
        return lib.sim_building_get_sim_thermal_zone_number(self.obj)
    def getSimSystem(self, id):
        return lib.sim_building_get_sim_system(self.obj, id)
    def getSimSystemNumber(self):
        return lib.sim_building_get_sim_system_total_number(self.obj)

class SimThermalZone(object):
    def __init__(self, obj):
        self.obj = obj

class SimSystem(object):
    def __init__(self, obj):
        self.obj = obj
    def toHotwaterSystem(self):
        return lib.sim_system_to_hotwater_system(self.obj)
        
class SimSystemHotwater(object):
    def __init__(self, obj):
        self.obj = obj
    def getMaxLoopTemp(self):
        return lib.sim_system_hotwater_get_max_loop_temp(self.obj)
    
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
# sim thermal zone
lib.sim_building_get_sim_thermal_zone.restype = SimThermalZone
lib.sim_building_get_sim_thermal_zone.argtypes = [c_void_p, c_int]
lib.sim_building_get_sim_thermal_zone_number.restype = c_int
lib.sim_building_get_sim_thermal_zone_number.argtypes = ()
# sim systems
lib.sim_building_get_sim_system.restype = SimSystem
lib.sim_building_get_sim_system.argtypes = [c_void_p, c_int]
lib.sim_building_get_sim_system_total_number.restype = c_int
lib.sim_building_get_sim_system_total_number.argtypes = ()
# sim system for hot water
lib.sim_system_to_hotwater_system.restype = SimSystemHotwater
lib.sim_system_to_hotwater_system.argtypes = ()
lib.sim_system_hotwater_get_max_loop_temp.restype = c_double
lib.sim_system_hotwater_get_max_loop_temp.argtypes = ()

# specify the data location: SimModel use case and its
# mapping rule instance for given Modelica library
useCaseLoc = "..\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml"
mapRuleLoc = "..\\xml_mapping_rule\\AixLib_Mapping_Rule.xml"
# create mapped data object
MapData = RuleData()
# set data location
MapData.setDataLocation(useCaseLoc, mapRuleLoc)
# transform SimModel data into Modelica objects
MapData.transformModel()

# print transformed / mapped data
componentNumber = MapData.getComponentNumber()
for comId in range(0, componentNumber):
    print "Component " + repr(comId) + ": " + MapData.getComponent(comId).getTargetLocation() + " " + MapData.getComponent(comId).getTargetName()   
    propertyNumber = MapData.getComponent(comId).getPropertyNumber()    
    for proId in range(0, propertyNumber):
        if MapData.getComponent(comId).getProperty(proId).getFlag():
            print "Property: " + MapData.getComponent(comId).getProperty(proId).getTargetLocation() + "(" + MapData.getComponent(comId).getProperty(proId).getName() + "=" + MapData.getComponent(comId).getProperty(proId).getValue() + ") "
        else:
            print "Property: " + MapData.getComponent(comId).getProperty(proId).getTargetLocation() + "(" + MapData.getComponent(comId).getProperty(proId).getValueGroup() + ") "

# access hierarchy
print "Get SimProject object"
simProject = MapData.getSimProject()
print "Weather location city: " + simProject.getWeatherLocationCity()

print "Get 1st SimSite object"
simSite = simProject.getSimSite(0);
print "Site name: " + simSite.getSiteName()

print "Get SimBuilding object"
simBuilding = simSite.getSimBuilding(0)
print "SimBuilding number: {}".format(simSite.getSimBuildingNumber())

print "Get SimThermalZone object"
simBuilding.getSimThermalZone(0)
print "SimThermalZone number: {}".format(simBuilding.getSimThermalZoneNumber())

print "Get SimSystem object"
simSystem = simBuilding.getSimSystem(0)
print "SimSystem number: {}".format(simBuilding.getSimSystemNumber())

# hot water system
simSystemHotwater = simSystem.toHotwaterSystem()
print "System max loop temp: {}".format(simSystemHotwater.getMaxLoopTemp())

# access loop connections
connectionNumber = MapData.getLoopConnectionNumber()
for conId in range(0, connectionNumber):
    print "Connection " + repr(conId)
    # retrieve one connection
    simConnection = MapData.getLoopConnection(conId)
    simConnection.getOutletComponent()
    simConnection.getInletComponent()
