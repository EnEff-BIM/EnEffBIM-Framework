class MappedSystem(object):
    """Base class for all mapped objects
        
    The MappedSystem class is the base class for all mapped objects in the
    StaticAPI. It contains some library specific data.
    
    
    Parameters
    ----------
    
    parent : instance of a Mapped class
        MappedComponent receives any mapped class (MappedBuilding etc.)
        
    Attributes
    ----------
    
    target_location : str (optional)
        location within the library

    target_name : str (optional)
        name of the Modelica object (if not set: this could be SimModel name)
        
    parameters : list of MappedProperty or MappedRecord 
        This is an *iterable* list containing all records and properties of
        the MappedSystem
        
    connectors : list of MappedConnector()
        This is an *iterable* list containing all  Modelica connectors of the
        MappedSystem (e.g. Real, Heatport, Fluid)        
                   
    unmapped_system : list of SimClasses in StaticAPI.unmapped_data
        This is an *iterable* list containing all SimClasses where this system
        was mapped from. (e.g. SimBoilerHotWater). The Class should be referenced
        in StaticAPI.unmapped_data
        
    control: MappedControl()
        Pointer to an optional control element, instance of MappedContorl()

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        
        self.target_location = None
        self.target_name = None
        self.parameters = []
        self.connectors = []
        self.unmapped_system = []

class MappedProject(object):
    """Base Class for each mapped data information_centrality
        
    The MappedProject class is the root class for all mapped information
    and thus the head of the hierarchy tree. Further more it contains meta 
    information about the used library.
        
    Attributes
    ----------
    
    used_library : str
        Name of used library
        
    library_version : str
        Version of used library
    
    buildings : list of MappedBuilding()
        This is an *iterable* list containing all buildings of the 
        project. The items of the list have to be an instance of
        the class "MappedBuilding".

    connections : list of MappedConnection()
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
        
    def add_connection(self, connector_a, connector_b):
        self.connections.append(MappedConnection(connector_a, connector_b))
		
class MappedBuilding(MappedSystem):
    """Representation of a mapped building
        
    The MappedBuilding class is a representation of a building mapped with
    Modelica information. It contains HVAC and geometric information.
    
    Parameters
    ----------
    
    parent : instance of MappedProject()
        MappedBuilding receives an instance of MappedProject, in order to know
        to what Project it belongs to. Might be trivial in the case of the 
        project, more because of consistency.
        
    Attributes
    ----------
    
    building_name : str
        Name of the building

    thermal_zones : list of MappedThermalZone()
        This is an *iterable* list containing all thermal zones of the 
        building. The items of the list have to be an instance of
        the class "MappedThermalZone".
        
    supply_components : list of MappedModelicaComponents()
        This is an *iterable* list containing all supply components (e.g. pump,
        boiler, storage) of the building. The items of the list have to be an 
        instance of the class "MappedModelicaComponent".
        
    supply_connections : not sure if I want to implement it here.
    
    """
    
    def __init__(self, parent):
        
        super(MappedBuilding, self).__init__(parent)
                
        self.building_name = ""
        self.thermal_zones = []
        self.supply_components = []
             
class MappedThermalZone(MappedSystem):
    """Representation of a mapped thermal zhone
        
    The MappedThermalZone class is a representation of a thermal zone mapped 
    with Modelica information. It contains HVAC and geometric information.
    
    Parameters
    ----------
    
    parent : instance of MappedBuilding()
        MappedThermalZone receives an instance of MappedProject, in order to 
        know to what building it belongs to.
        
    Attributes
    ----------
    
    zone_name : str
        Name of the thermal_zone 

    space_boundaries : MappedSpaceBoundaries()
        This is a instance of MappedSpaceBoundaries.
        
    supply_components : list of MappedModelicaComponents()
        This is an *iterable* list containing all supply components (e.g. 
        radiator) of the thermal zone. The items of the list have to be an 
        instance of the class "MappedModelicaComponent".
        
    supply_connections : not sure if I want to implement it here.
    
    """
    
    def __init__(self, parent):
        
        super(MappedThermalZone, self).__init__(parent)
        
        
        self.zone_name = ""
        self.space_boundaries = []
        self.supply_components = []
		
class MappedComponent(MappedSystem):
    """Representation of a mapped component
        
    The MappedComponent class is a representation of any HVAC component mapped
    with Modelica information. It contains library specific information. 

    Attributes
    ----------
    
    mapped_control : MappedControl()
        This is an instance of MappedControl()
    """
    
    def __init__(self, parent):
        
        super(MappedComponent, self).__init__(parent)

        self.mapped_control = None
		
class MappedConnection(object):
    """Representation of a mapped connector
        
    The MappedConnection class is a representation of a connection in Modelica.
    It contains connection
    
    
    Parameters
    ----------
    
    connector_a : instance of a MappedConnector()
        The input connector, with the parent/child relationshsip we can access
        the component
        
    connector_b : instance of a MappedConnector()
        The output component, with the parent/child relationshsip we can access
        the component
        
    Attributes
    ----------
       
    type : str
        - Fluid
        - Real
        - Boolean
        - Heat
        - ...

    """
    
    def __init__(self, connector_a,connector_b):
        
        self.connector_a = connector_a
        self.connector_b = connector_b
        self.type = ""
		
class MappedConnector(object):
    """Representation of a mapped connector
        
    The MappedConnector class is a representation of any connector in Modelica.
    It contains connector information
    
    
    Parameters
    ----------
    
    parent : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
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

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.type = ""
		
class MappedControl(object):
    """Representation of a mapped control strategy
        
    The MappedControl class is a representation of a mapped control system.
    It is used to store control parameters and more important the control 
    strategy/system itself
    
    
    Parameters
    ----------
    
    parent : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    control_strategy : str
        Probably a code list of possible control strategies
        
    parameters : list of MappedProperty or MappedRecord 
        This is an *iterable* list containing all records and properties of
        the MappedControl
        
    control_connector : instance of a MappedConnector()
        MappedConnector to know where the control is mapped to

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.control_strategy = ""
        self.parameters = []
        self.control_connector = None
        
class MappedProperty(object):
    """Representation of a mapped property
        
    The MappedProperty class is a representation of any Modelica property. 
    
    
    Parameters
    ----------
    
    parent : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
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
        
class MappedRecord(object):
    """Representation of a mapped record
        
    The MappedRecord class is a representation of any Modelica Record class. 
    
    
    Parameters
    ----------
    
    parent : instance of a MappedComponent()
        MappedRecords receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    name : str
        Modelica name of the Record (e.g. boilerEfficiencyB)
        
    record_location : str
        location in the library of the base record
        
    parameters : list of MappedProperties or MappedRecords
        This is an *iterable* list containing all records and properties of
        the MappedRecord

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.record_location = ""
        self.parameters = []
		
class MappedSpaceBoundary(object):
    """Representation of a mapped space boundary
        
    The MappedSpaceBoundary class is a representation of a space boundary 
    filled with geometric information.
    
    Parameters
    ----------
    
    parent : instance of MappedZone()
        MappedSpaceBoundary receives an instance of MappedZone, in order to 
        know to what zone it belongs to.
        
    Attributes
    ----------

    mapped_building_elements : list of MappedBuildingElements()
        list of all building elements that form the space boundary
            
    """
    
    def __init__(self, parent):
        
              
        self.parent = parent
        self.mapped_building_elements = []
        
class MappedBuildingElement(MappedSystem):
    """Representation of a mapped building element
        
    The MappedBuildingElement class is the root class of any mapped
    building element
    
    Parameters
    ----------
    
    parent : instance of MappedSpaceBoundary()
        MappedBuildingElement receives an instance of MappedSpaceBoundary, 
        in order to know to what zone it belongs to.
        
    Attributes
    ----------

    mapped_building_elements : list of MappedBuildingElements()
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
    
    mapped_layer : list of MappedMaterialLayer
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
        
class MappedMaterialLayer(object):
    """Representation of a mapped building element layer
        
    The MappedMaterialLayer class is the representation of a material layer
    
    Parameters
    ----------
    
    parent : instance of MappedBuildingElement()
        MappedMaterialLayer receives an instance of MappedBuildingElement, 
        in order to know to what element it belongs to.
        
    Attributes
    ----------

    material : MappedMaterial()
        material of the layer
        
    thickness : float
        thickness of the layer
            
    """
    
    def __init__(self, parent):
        
              
        self.parent = parent
        
        self.material = None
        self.thickness = None

class MappedMaterial(object):
    """Representation of a mapped material
        
    The MappedMaterial class is the representation of a material
    
    Parameters
    ----------
    
    parent : instance of MappedMaterialLayer()
        MappedMaterial receives an instance of MappedMaterialLayer, 
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
        