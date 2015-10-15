class MoObject(object):
    """Base class for all mapped objects
        
    The MoObject class is the base class for all mapped objects in the
    StaticAPI. It contains some library specific data.
    
    
    Parameters
    ----------
    
    parent : instance of a Map class
        MapComponent receives any mapped class (MapBuilding etc.)
        
    Attributes
    ----------
    
    target_location : str (optional)
        location within the library

    target_name : str (optional)
        name of the Modelica object (if not set: this could be SimModel name)
        
    parameters : list of MapProperty or MapRecord 
        This is an *iterable* list containing all records and properties of
        the MoObject
        
    connectors : list of MapConnector()
        This is an *iterable* list containing all  Modelica connectors of the
        MoObject (e.g. Real, Heatport, Fluid)        
                   
    sim_ref_id : list 
        This is an *iterable* list containing all SImModel refID where this system
        was mapped from. (e.g. SimBoilerHotWater). 
        
    control: MapControl()
        Pointer to an optional control element, instance of MapContorl()

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        
        self.target_location = None
        self.target_name = None
        self.parameters = []
        self.connectors = []
        self.sim_ref_id = []

class MapProject(object):
    """Root Class for each mapped data information
        
    The MapProject class is the root class for all mapped information
    and thus the head of the hierarchy tree. Further more it contains meta 
    information about the used library.
        
    Attributes
    ----------
    
    used_library : str
        Name of used library
        
    library_version : str
        Version of used library
    
    buildings : list of MapBuilding()
        This is an *iterable* list containing all buildings of the 
        project. The items of the list have to be an instance of
        the class "MapBuilding".

    connections : list of MapConnection()
        This is an *iterable* list containing all connections.
        
    project_name : str
        name of the project
        
    connections_hard : list of list of strings
        This is a hardcoded list, how the connections list should look like
        at the end

    """
    
    def __init__(self):
        
        self.buildings = []
        self.used_library = ""
        self.library_version = ""
        self.project_name = ""
        self.connections = []
        self.connections_hard = []
        self.systems = []
        
    def add_connection(self, connector_a, connector_b):
        self.connections.append(MapConnection(connector_a, connector_b))
	
    def create_system(self, target_location, target_name, connector):

        map_sys = MapComponent(self)
        map_sys.target_location = target_location
        map_sys.target_name = target_name
        
        for con in connector:
            map_sys.connectors.append(con)

        self.systems.append(map_sys)
        
        return mapp_sys
        
    def create_connector(self, parent, name, type):
        
        connector = MapConnector(parent)
        connector.name = name
        connector.type = type
        
        return connector
    
    def create_mapped_property(self, parent, name, value):
    
        map_prop = MapProperty(parent)
        map_prop.name = name
        map_prop.value = value
        
        parent.parameters.append(map_prop)
    	
class MapBuilding(MoObject):
    """Representation of a mapped building
        
    The MapBuilding class is a representation of a building mapped with
    Modelica information. It contains HVAC and geometric information.
    
    Note: As MapBuilding inherits from MoObject it is possible to
    implement connectors, parameters and whole models target names.
    
    Parameters
    ----------
    
    parent : instance of MapProject()
        MapBuilding receives an instance of MapProject, in order to know
        to what Project it belongs to. Might be trivial in the case of the 
        project, more because of consistency.
        
    Attributes
    ----------
    
    building_name : str
        Name of the building

    thermal_zones : list of MapThermalZone()
        This is an *iterable* list containing all thermal zones of the 
        building. The items of the list have to be an instance of
        the class "MapThermalZone".
        
    supply_components : list of MappedModelicaComponents()
        This is an *iterable* list containing all supply components (e.g. pump,
        boiler, storage) of the building. The items of the list have to be an 
        instance of the class "MappedModelicaComponent".
    
    """
    
    def __init__(self, parent):
        
        super(MapBuilding, self).__init__(parent)
                
        self.building_name = ""
        self.thermal_zones = []
        self.supply_components = []
             
class MapThermalZone(MoObject):
    """Representation of a mapped thermal zone
        
    The MapThermalZone class is a representation of a thermal zone mapped 
    with Modelica information. It contains HVAC and geometric information.
    
    Note: As MapThermalZone inherits from MoObject it is possible to
    implement connectors, parameters and whole models target names.
    
    Parameters
    ----------
    
    parent : instance of MapBuilding()
        MapThermalZone receives an instance of MapProject, in order to 
        know to what building it belongs to.
        
    Attributes
    ----------
    
    zone_name : str
        Name of the thermal_zone 

    space_boundaries : MapSpaceBoundaries()
        This is a instance of MapSpaceBoundaries.
        
    supply_components : list of MappedModelicaComponents()
        This is an *iterable* list containing all supply components (e.g. 
        radiator) of the thermal zone. The items of the list have to be an 
        instance of the class "MapComponent".
        
    
    """
    
    def __init__(self, parent):
        
        super(MapThermalZone, self).__init__(parent)
        
        
        self.zone_name = ""
        self.space_boundaries = []
        self.supply_components = []
		
class MapComponent(MoObject):
    """Representation of a mapped component
        
    The MapComponent class is a representation of any HVAC component mapped
    with Modelica information. It contains library specific information. 

    Attributes
    ----------
    
    mapped_control : MapControl()
        This is an instance of MapControl()
    """
    
    def __init__(self, parent):
        
        super(MapComponent, self).__init__(parent)

        self.map_control = None
		
class MapConnection(object):
    """Representation of a mapped connector
        
    The MapConnection class is a representation of a connection in Modelica.
    It contains two MapConnectors and the Modelica Type of the connection.
    
    
    Parameters
    ----------
    
    connector_a : instance of a MapConnector()
        The input connector, with the parent/child relationshsip we can access
        the component
        
    connector_b : instance of a MapConnector()
        The output component, with the parent/child relationshsip we can access
        the component
        
    Attributes
    ----------
       
    type : str
        Modelica Type of the connection.
        - Fluid
        - Real
        - Boolean
        - Heat
        - ...
        
    sim_ref_id : str
        refID of SimModel for the corresponding distributionPort

    """
    
    def __init__(self, connector_a,connector_b):
        
        self.connector_a = connector_a
        self.connector_b = connector_b
        self.type = ""
        self.sim_ref_id = None
		
class MapConnector(object):
    """Representation of a mapped connector
        
    The MapConnector class is a representation of any connector in Modelica.
    It contains connector information like name and type.
    
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapProperty receives an instance of MapComponent. 
        
    Attributes
    ----------
    
    name : str
        Name of the connector in the model.
    
    type : str
        - FluidPort
        - Real
        - Boolean
        - HeatPort
        - ...
        
    sim_ref_id : str
        refID of SimModel for the corresponding distributionPort
        
    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.type = ""
        self.sim_ref_id = None
		
        
class MapControl(object):
    """Representation of a mapped control strategy
        
    The MapControl class is a representation of a mapped control system.
    It is used to store control parameters and more important the control 
    strategy/system itself
    
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapProperty receives an instance of MapComponent. 
        
    Attributes
    ----------
    
    control_strategy : str (library specific codelist)
        Probably a code list of possible control strategies
        
    parameters : list of MapProperty or MapRecord 
        This is an *iterable* list containing all records and properties of
        the MapControl
        
    control_connector : instance of a MapConnector()
        MapConnector to know where the control is mapped to

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.control_strategy = ""
        self.parameters = []
        self.control_connector = None
        
class MapProperty(object):
    """Representation of a mapped property
        
    The MapProperty class is a representation of any Modelica property. 
    
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapProperty receives an instance of MapComponent. 
        
    Attributes
    ----------
    
    name : str
        Modelica name of the Parameter (e.g. Q_flow_max)
        
    value : float/int/bool/str/list/array
        Value of the Property, can be float, int, boolean, string, list or array
        with corresponding data type.

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.value = None
        
class MapRecord(object):
    """Representation of a mapped record
        
    The MapRecord class is a representation of any Modelica Record class. 
    
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapRecords receives an instance of MapComponent. 
        
    Attributes
    ----------
    
    name : str
        Modelica name of the Record (e.g. boilerEfficiencyB)
        
    record_location : str
        location in the library of the base record
        
    parameters : list of MappedProperties or MapRecords
        This is an *iterable* list containing all records and properties of
        the MapRecord

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.record_location = ""
        self.parameters = []
		
class MapSpaceBoundary(object):
    """Representation of a mapped space boundary
        
    The MapSpaceBoundary class is a representation of a space boundary 
    filled with geometric information.
    
    Parameters
    ----------
    
    parent : instance of MappedZone()
        MapSpaceBoundary receives an instance of MappedZone, in order to 
        know to what zone it belongs to.
        
    Attributes
    ----------

    mapped_building_elements : list of MapBuildingElements()
        list of all building elements that form the space boundary
            
    """
    
    def __init__(self, parent):
        
              
        self.parent = parent
        self.mapped_building_elements = []
        
class MapBuildingElement(MoObject):
    """Representation of a mapped building element
        
    The MapBuildingElement class is the root class of any mapped
    building element
    
    Parameters
    ----------
    
    parent : instance of MapSpaceBoundary()
        MapBuildingElement receives an instance of MapSpaceBoundary, 
        in order to know to what zone it belongs to.
        
    Attributes
    ----------

    mapped_building_elements : list of MapBuildingElements()
        list of all building elements that form the space boundary

    area : float
        area of building element

    tilt : float
        tilt against horizontal

    orientation : float
        compass direction of building element (e.g. 0 : north, 90: east, 
        180: south, 270: west)

    inner_convection : float
        constant heat transfer coefficient of convection inner side

    inner_radiation : float
        constant heat transfer coefficient of radiation inner side

    outer_convection : float
        constant heat transfer coefficient of convection outer side
        for inner walls and ground floor zero

    outer_radiation : float
        constant heat transfer coefficient of radiation outer side
        for inner walls and ground floor zero

    simmodel_coordinates: array
        coordinates given in SimModel if needed for 3D-modelling
        
    simmodel_normal_vector: array
        normal vector from SimModel
    
    mapped_layer : list of MapMaterialLayer
        list of all layers of a building element 
            
    """
    
    def __init__(self, parent):
        
              
        self.parent = parent
        
        self.area = None
        self.tilt = None
        self.orientation = None
        self.inner_convection = None
        self.inner_radiation = None
        self.outer_convection = None
        self.outer_radiation = None
        self.simmodel_coordinates = None
        self.simmodel_normal_vector = None

        self.mapped_layer = []
        
class MapMaterialLayer(object):
    """Representation of a mapped building element layer
        
    The MapMaterialLayer class is the representation of a material layer
    
    Parameters
    ----------
    
    parent : instance of MapBuildingElement()
        MapMaterialLayer receives an instance of MapBuildingElement, 
        in order to know to what element it belongs to.
        
    Attributes
    ----------

    material : MapMaterialLayer()
        material of the layer
        
    thickness : float
        thickness of the layer
            
    """
    
    def __init__(self, parent):
        
              
        self.parent = parent
        
        self.material = None
        self.thickness = None

class MapMaterialLayer(object):
    """Representation of a mapped material
        
    The MapMaterialLayer class is the representation of a material
    
    Parameters
    ----------
    
    parent : instance of MapMaterialLayer()
        MapMaterialLayer receives an instance of MapMaterialLayer, 
        in order to know to what layer it belongs to.
        
    Attributes:
    ----------
    
    name : str
        individual name
    
    density : float
        density of material in kg/m^3
        
    thermal_conduc : float
        thermal conductivity of material in W/(m*K)
        
    heat_capac : float
        specific heat capacity of material in kJ/(kg*K)
        
    solar_absorp : float
        coefficient of absorption of solar short wave 
        
    ir_emissivity : float
        coefficient of longwave emissivity of material
        
    transmittance : float
        coefficient of transmittanve of material

    """


    def __init__(self, parent):

        
        self.parent_class = parent
        self.name = ""
        self.density = 0.0  
        self.thermal_conduc = 0.0
        self.heat_capac = 0.0
        self.solar_absorp = 0.0
        self.ir_emissivity = 0.0
        self.transmittance = 0.0
        