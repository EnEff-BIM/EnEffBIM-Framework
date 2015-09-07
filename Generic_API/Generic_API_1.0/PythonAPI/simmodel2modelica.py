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

fs_enc = sys.getfilesystemencoding()
df_enc = sys.getdefaultencoding()
# b2s : decode bytes to string
# s2b : encode string to bytes
def b2s(b):
    return b.decode(fs_enc)
def s2b(s):
    return s.encode(fs_enc)
    #return s.encode('mbcs')
    #return s

class Property(object):
    
    '''This class represents a mapped property 

    Parameters:
    ----------
        
               
    obj: obj
        ?
        

    Attributes:
    ----------
       
    name : str
        Modelica name of property
    
    
    value : str
        Value of property
    
    targetLocation : str
        if the parameter is a modifier of a submodel, this is the name of the 
        submodel
        
    recordInstance : str
        if the parameter is part of a record, this is the record name
       
    recorLocation : str
        if the parameter is part of a record, this is the record location in
        the lib
        
    valueGroup : str
        ?
    
    flag : str
        ?

    '''
    
    def __init__(self, obj):
        self.obj = obj
        self._name = None
        self._value = None
        self._targetLocation = None
        self._recordInstance = None
        self._recordLocation = None
        self._valueGroup = None
        self._flag = None
   
    @property
    def name(self):
        if self._name == None:
            self._name = b2s(lib.property_get_name(self.obj))
        return self._name
    @property
    def value(self):
        if self._value == None:    
            self._value = b2s(lib.property_get_value(self.obj))
        return self._value
    @property
    def targetLocation(self):
        if self._targetLocation == None:    
            self._targetLocation = b2s(lib.property_get_target_location(self.obj))
        return self._targetLocation
    @property
    def recordInstance(self):
        if self._recordInstance == None:    
            self._recordInstance = b2s(lib.property_get_record_instance(self.obj))
        return self._recordInstance
    @property
    def recordLocation(self):
        if self._recordLocation == None:    
            self._recordLocation = b2s(lib.property_get_record_location(self.obj))
        return self._recordLocation
    @property
    def valueGroup(self):
        if self._valueGroup == None:    
            self._valueGroup = b2s(lib.property_get_value_group(self.obj))
        return self._valueGroup
    @property
    def flag(self):
        if self._flag == None:    
            self._flag = lib.property_get_flag(self.obj)
        return self._flag


class Component(object):
    '''This class represents a mapped component 

    Parameters:
    ----------
        
               
    obj: obj
        ?
        

    Attributes:
    ----------
       
    targetName : str
        Modelica name of component
    
    
    targetLocation : str
        Modelica library path of component
    
    properties : list of Property()
        Properties of Modelica model
        
    unmappedComponent : list of SimSystem()
        This list provides the link to the SimModel Class(es)

    '''
    def __init__(self, obj):
        self.obj = obj
        self._targetName = None
        self._targetLocation = None
        self._properties = None
        self._unmappedComponent = None

     
    @property
    def targetName(self):
        if self._targetName == None:
            self._targetName = b2s(lib.component_get_target_name(self.obj))
        return self._targetName
    @property
    def targetLocation(self):
        if self._targetLocation == None:
            self._targetLocation = b2s(lib.component_get_target_location(self.obj))
        return self._targetLocation
    @property
    def properties(self):
        if self._properties == None:
            self._properties = []
            for id in range(lib.component_get_property_number(self.obj)):
                self._properties.append(lib.component_get_property(self.obj, id))
        return self._properties
    @property
    def unmappedComponent(self):
        if self._unmappedComponent == None:
            self._unmappedComponent = []
            for id in  range(lib.component_get_unmapped_component_number(self.obj)):
                self._unmappedComponent.append(lib.component_get_unmapped_component(self.obj, id).typeConversion())
        return self._unmappedComponent


class RuleData(object):
    '''
    This class is the root object of Python API 

    Parameters:
    ----------
        
               
    obj: obj
        ?
        

    Attributes:
    ----------
       
    components : list of Component()
        List of all Modelica components
    
    
    simProject : SimProject()
        Instance of SimProject()
    
    loopConnections : list of SimConnection()
        list of Sim Connections between components(?)

    '''
    def __init__(self):
        self.obj = lib.rule_data_init()
        self._components = None
        self._simProject = None
        self._loopConnections = None
    @property 
    def components(self):
        if self._components == None:
            self._components = []
            for id in range(lib.rule_data_get_component_number(self.obj)):
                self._components.append(lib.rule_data_get_component(self.obj, id))
        return self._components    
    @property
    def simProject(self):
         if self._simProject == None:
             self._simProject = lib.sim_project_init(self.obj)
         return self._simProject
    @property 
    def loopConnections(self):
        if self._loopConnections == None:
            self._loopConnections = []
            for id in range(lib.sim_system_get_loop_connection_number(self.obj)):
                self._loopConnections.append(lib.sim_system_get_loop_connection(self.obj, id))
        return self._loopConnections
    
    def transformModel(self):
        return lib.rule_data_transform_model(self.obj)
    def setUseCaseLocation(self, case_loc):
        return lib.rule_data_set_use_case_location(self.obj, case_loc)
    def setDataLocation(self, useCaseLoc, mapRuleLoc):
        return lib.rule_data_set_data_location(self.obj, s2b(useCaseLoc), s2b(mapRuleLoc))

class SimConnection(object):
    '''This class represents an unmapped connection of SimModel

    Parameters:
    ----------
 
    obj: obj
        ?  

    Attributes:
    ----------
       
    outletComponent : str
        ?
    
    
    inletComponent : str
        ?
    '''
    def __init__(self, obj):
        self.obj = obj
        self._outletComponent = None
        self._inletComponent = None
        
    @property
    def outletComponent(self):
        if self._outletComponent == None:
            self._outletComponent = lib.sim_system_get_outlet_component(self.obj)
        return self._outletComponent
        '''if lib.sim_system_get_outlet_component(self.obj).identifier == "SimFlowPlant_Boiler_BoilerHotWater":
                #print("Pointer to specific Boiler")
                self._outletComponent =lib.sim_system_get_outlet_component(self.obj).toBoilerHotWater()
            elif lib.sim_system_get_outlet_component(self.obj).identifier == "SimFlowEnergyTransfer_ConvectiveHeater_Water":
                #print("Pointer to specific Radiator")
                self._outletComponent =lib.sim_system_get_outlet_component(self.obj).toHeaterConvectiveWater()
            elif lib.sim_system_get_outlet_component(self.obj).identifier == "SimFlowMover_Pump_VariableSpeedReturn":
                #print("Pointer to specific Pump")
                self._outletComponent =lib.sim_system_get_outlet_component(self.obj).toPumpVarSpedRet()
        return self._outletComponent'''
    @property
    def inletComponent(self):
        if self._inletComponent == None:
            self._inletComponent = lib.sim_system_get_inlet_component(self.obj)
        return self._inletComponent
        '''if lib.sim_system_get_inlet_component(self.obj).identifier == "SimFlowPlant_Boiler_BoilerHotWater":
                print("Pointer to specific Boiler")
                self._inletComponent =lib.sim_system_get_inlet_component(self.obj).toBoilerHotWater()
            elif lib.sim_system_get_inlet_component(self.obj).identifier == "SimFlowEnergyTransfer_ConvectiveHeater_Water":
                print("Pointer to specific Radiator")
                self._inletComponent =lib.sim_system_get_inlet_component(self.obj).toHeaterConvectiveWater()
            elif lib.sim_system_get_inlet_component(self.obj).identifier == "SimFlowMover_Pump_VariableSpeedReturn":
                print("Pointer to specific Pump")
                self._inletComponent =lib.sim_system_get_inlet_component(self.obj).toPumpVarSpedRet()
        return self._inletComponent'''

class SimProject(object):
    '''This class represents an unmapped SimProject 

    Parameters:
    ----------
 
    obj: obj
        ?  

    Attributes:
    ----------
       
    weatherLocation : str
        Location of reference year
    
    
    simSite : str
        Location of building

    '''
    def __init__(self, obj):
        self.obj = obj
        self._weatherLocation = None
        self._simSite = None
        
    @property
    def weatherLocation(self):
        if self._weatherLocation == None:
            self._weatherLocation = b2s(lib.sim_project_get_weather_location_city(self.obj))
        return self._weatherLocation
    
    @property
    def simSite(self):
        if self._simSite == None:
            self._simSite = []
            for id in range(lib.sim_project_get_sim_site_number(self.obj)):
                self._simSite.append(lib.sim_project_get_sim_site(self.obj, id))
        return self._simSite 

class SimSite(object):
    '''
    This class represents an unmapped SimSite 

    Parameters:
    ----------
 
    obj: obj
        ?  

    Attributes:
    ----------
       
    name : str
        name of the site
    
    
    buildings : list SimBuilding()
        list of SimBuilding instances

    '''
    def __init__(self, obj):
        self.obj = obj
        self._name = None
        self._buildings = None
        
    @property
    def name(self):
        if self._name == None:
            self._name = b2s(lib.sim_site_get_name(self.obj))
        return self._name
    @property
    def buildings(self):
        if self._buildings == None:
            self._buildings = []
            for id in range(lib.sim_site_get_sim_building_number(self.obj)):
                self._buildings.append(lib.sim_site_get_sim_building(self.obj, id))
        return self._buildings   

class SimBuilding(object):
    '''
    This class represents an unmapped SimBuilding

    Parameters:
    ----------
 
    obj: obj
        ?  

    Attributes:
    ----------
       
    simZoneHvacGroup : SimZoneHvacGroup()
        list of zone hvac groups (?)
    
    
    simThermalZone : SimThermalZone()
        list of thermal zones (SimModel)
        
    buildingSystem : list
        list of Systems in building (e.g. hot water system - SimSystemHotwater())
    '''
    def __init__(self, obj):
        self.obj = obj
        self._simSystem = None
        self._simZoneHvacGroup = None
        self._simThermalZone = None
        self._buildingSystem = None

    @property
    def simZoneHvacGroup(self):
        if self._simZoneHvacGroup == None:
            self._simZoneHvacGroup = []
            for id in range(lib.sim_building_get_sim_zone_hvac_group_number(self.obj)):
                self._simZoneHvacGroup.append(lib.sim_building_get_sim_zone_hvac_group(self.obj, id))
        return self._simZoneHvacGroup 
	
    @property
    def simThermalZone(self):
        if self._simThermalZone == None:
            self._simThermalZone = []
            for id in range(lib.sim_building_get_sim_thermal_zone_number(self.obj)):
                self._simThermalZone.append(lib.sim_building_get_sim_thermal_zone(self.obj, id))
        return self._simThermalZone 
	
    @property
    def buildingSystem(self):
        if self._buildingSystem == None:
            self._buildingSystem = []
            for id in range(lib.sim_building_get_sim_system_number(self.obj)):
                self._buildingSystem.append(lib.sim_building_get_sim_system(self.obj, id))
        return self._buildingSystem

class SimZoneHvacGroup(object):
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
   

class SimThermalZone(object):
    def __init__(self, obj):
        self.obj = obj

class SimSystem(object):
    def __init__(self, obj):
        self.obj = obj
        
        self._identifier = None
        self._loopConnection = None
        self._dataType = None
    '''
    This class represents an unmapped SimSystem (root element)

    Parameters:
    ----------
 
    obj: obj
        ?  

    Attributes:
    ----------
       
    identifier: str
        identifier of a SimSystem
        
    Methods:
    ----------
    
    toHotwaterSystem()
        transforms to SimSystemHotwater()
        
    typeConversion()
        automatically calls the corresponding transforming method 
        (e.g. toHotwaterSystem())
    
    '''
    @property
    def identifier(self):
        if self._identifier == None:
            self._identifier = b2s(lib.sim_system_get_name(self.obj))
        return self._identifier
    def getDataType(self):
        return b2s(lib.sim_system_get_datatype(self.obj))
    def toHotwaterSystem(self):
        return lib.sim_system_to_hotwater_system(self.obj)
    def getSystemName(self):
        return b2s(lib.sim_system_get_name(self.obj))
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
    @property
    def loopConnection(self):
        if self._loopConnection == None:
            lib.sim_system_check_component_connection(self.obj)
            self._loopConnection = [lib.sim_system_get_component_connection(self.obj, id) for id in range(lib.sim_system_get_component_connection_number(self.obj))]
        return self._loopConnection
    
    def typeConversion(self):
        if self._dataType == None:
            self._dataType = self.getDataType()
        return getattr(self, self._dataType)()

class SimSystemHotwater(object):
    def __init__(self, obj):
        self.obj = obj
        
        self._supplySide = None
        self._demandSide = None
        self._controlSide = None
        self._maxLoopTemp = None
        self._minLoopTemp = None
        self._get_maxLoopFlowRate = None
     
    @property
    def supplySide(self):
        if self._supplySide == None:
            self._supplySide = lib.sim_system_hotwater_get_supply(self.obj)
        return self._supplySide
        
    @property
    def demandSide(self):
        if self._demandSide == None:
            self._demandSide = lib.sim_system_hotwater_get_demand(self.obj)
        return self._demandSide
    
    def getMaxLoopTemp(self):
        return lib.sim_system_hotwater_get_max_loop_temp(self.obj)
    def getMinLoopTemp(self):
        return lib.sim_system_hotwater_get_min_loop_temp(self.obj)
    def getMaxLoopFlowRate(self):
        lib.sim_system_hotwater_get_max_loop_flow_rate(self.obj)

    def getControlSide(self):
        return lib.sim_system_hotwater_get_control(self.obj)

# supply side of the hot water system
class SimSystemHotwaterSupply(object):
    def __init__(self, obj):
        self.obj = obj
        self._supplyComponents = None
        
    @property
    def supplyComponents(self):
        if self._supplyComponents == None:
            self._supplyComponents = []
            for id in range(lib.sim_system_hotwater_get_water_supply_component_number(self.obj)):
                self._supplyComponents.append(lib.sim_system_hotwater_get_water_supply_component(self.obj, id))      
        return self._supplyComponents

# sim pump of variable speed return
class SimPumpVarSpedRet(SimSystem):
    def __init__(self, obj):
        super(SimPumpVarSpedRet,self).__init__(obj)
        self.obj = obj
        self._loopConnection = None
        
    def getRatedFlowRate(self):
        return b2s(lib.sim_pump_varSpedRet_ratedFlowRate(self.obj))

        self._ratedFlowRate = None
        
    @property
    def ratedFlowRate(self):
        if self._ratedFlowRate == None:
            self._ratedFlowRate == lib.sim_pump_varSpedRet_ratedFlowRate(self.obj)
        return self._ratedFlowRate
    
# sim boiler of hot water
class SimBoilerHotWater(SimSystem):
    def __init__(self, obj):
        super(SimBoilerHotWater,self).__init__(obj)
        self.obj = obj
        self._loopConnection = None
        
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
        
        self._demandComponents = None
        
    @property
    def demandComponents(self):
        if self._demandComponents == None:
            self._demandComponents = []
            for id in range(lib.sim_system_hotwater_get_water_demand_component_number(self.obj)):
                self._demandComponents.append(lib.sim_system_hotwater_get_water_demand_component(self.obj, id))
        return self._demandComponents
            
# sim heater of convective water
class SimHeaterConvectiveWater(SimSystem):
    def __init__(self, obj):
        self.obj = obj
        self._loopConnection = None
        super(SimHeaterConvectiveWater,self).__init__(obj)
    def getMaxWaterFlowRate(self):
        return lib.sim_heater_convective_water_get_max_water_flow_rate(self.obj)
    def getConvergTol(self):
        return lib.sim_heater_convective_water_get_converg_tol(self.obj)
    def getUFactorTimesAreaVal(self):
        return lib.sim_heater_convective_water_get_ufactor_times_area(self.obj)

# control side of the hot water system
class SimSystemHotwaterControl(SimSystem):
    def __init__(self, obj):
        self.obj = obj
        self._loopConnection = None
        super(SimSystemHotwaterControl,self).__init__(obj)
    def getControlComponent(self, id):
        return lib.sim_system_hotwater_get_water_control_component(self.obj, id)
    def getControlComponentNumber(self):
        return lib.sim_system_hotwater_get_water_control_component_number(self.obj)

# sim supply water temperature control
class SimSupplyWaterTemperatureControl(SimSystem):
    def __init__(self, obj):
        self.obj = obj
        self._loopConnection = None
        super(SimSupplyWaterTemperatureControl,self).__init__(obj)

# sim dry bulb temperature sensor
class SimTemperatureDryBulbSensor(SimSystem):
    def __init__(self, obj):
        self.obj = obj
        self._loopConnection = None
        super(SimTemperatureDryBulbSensor,self).__init__(obj)


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
lib.component_get_unmapped_component.restype = SimSystem
lib.component_get_unmapped_component.argtypes = [c_void_p, c_int]
lib.component_get_unmapped_component_number.restype = c_int
lib.component_get_unmapped_component_number.argtypes = ()
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
lib.sim_system_get_datatype.restype = c_char_p
lib.sim_system_get_datatype.argtypes = ()
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
lib.sim_system_check_component_connection.argtypes = ()
lib.sim_system_check_component_connection.restype = None
lib.sim_system_get_component_connection_number.argtypes = ()
lib.sim_system_get_component_connection_number.restype = c_int
lib.sim_system_get_component_connection.argtypes = [c_void_p, c_int]
lib.sim_system_get_component_connection.restype = SimConnection
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
