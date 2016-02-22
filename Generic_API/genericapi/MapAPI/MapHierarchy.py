class MoObject(object):
    """Base class for all mapped objects
        
    The MoObject class is the base class for all mapped objects in the
    StaticAPI. It contains some library specific data.
    
    
    Parameters
    ----------
    
    project : instance of MapProject()
        MapProject as a "root" parent to have control over the connections in 
        the overall model

    parent : instance of a Map class
        MapComponent receives any mapped class (MapBuilding etc.)

        
    Attributes
    ----------
    
    target_location : str (optional)
        location within the library

    target_name : str (optional)
        name of the Modelica object (if not set: this could be SimModel name)
        
    parameters : list of MapParameter or MapRecord 
        This is an *iterable* list containing all records and parameters of
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

    def __init__(self, project=None, sim_object=None):
        
        self.parent = None
        self.project = project
        self.sim_object = sim_object
        
        self.target_location = None
        self.target_name = None
        self.parameters = []
        self.connectors = []
        self.map_control = []
     
       
    def add_connector(self,
                      name,
                      type,
                      dimension = 1):
        """This adds a MapConnector to the MoObject

        For topology mapping it is necessary to add Modelica connectors to
        the MoObject. An instance of MapConnector is added to the 
        MoObject.connectors list. The function sets the attributes of the
        MapConnector

        Parameters
        ----------

        name : str
            name of the Connector in the Modelica model

        type : str
            type of the Connector (e.g. Real)

        dimension : int
            dimension of the connector if it is a vector

        Returns
        ----------

        connector : MapConnector
            return the instantiated MapConnector class 

        """
        connector = MapConnector(self)
        connector.name = name
        connector.type = type
        connector.dimension = dimension
        self.connectors.append(connector)

        return connector
        
    def add_parameter(self, name, value):
        """This adds a Parameter to the MoObject

        For topology mapping it might be necessary to add additional propertys, 
        besides the mapped once to some MoObjects. This creates an instance
        of MapParameter and adds it to MoObject property list.


        Parameters
        ----------

        name : str
            name of the property in Modelica

        value : int/float/str/bool
            value of the property

        Returns
        ----------

        mapped_prop : MapParameter
            returns the MapParameter instance

        """
        mapped_prop = MapParameter(self, name, value)
        
        self.parameters.append(mapped_prop)
        
        return mapped_prop
        
    def add_connection(self,
                       input_connector,
                       output_connector):
        """This connects the MoObject to another Object
        
        For topology mapping it might be necessary to connect two MoObjects.
        With the given Connectors of each Object a MapConnection is instantiated
        and the attributes are set.

        Parameters
        ----------

        input_connector : MapConnector
            Own connector that should be connected (must be in connectors list)

        output_connector : MapConnector
            Connector of the MoObject that is connected

        Returns
        ----------

        mapped_con : MapConnector
            returns the MapConnector instance
        """
        if input_connector in self.connectors:
            pass
        else:
            raise ValueError("input_connector is not assigned to MoObject")


        if input_connector.type == output_connector.type and \
            input_connector.dimension == output_connector.dimension:
    
            mapped_con = MapConnection(input_connector, output_connector)
            mapped_con.type = input_connector.type
            self.project.connections.append(mapped_con)

            return mapped_con
            
        else:
             raise TypeError("Input/Ouput connector type or dimension" +
                             "do not match")

        
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

    """

    def __init__(self, sim_object=None):

        self.sim_object=sim_object
        self.buildings = []
        self.used_library = ""
        self.library_version = ""
        self.project_name = ""
        self.connections = []


class MapBuilding(MoObject):
    """Representation of a mapped building
        
    The MapBuilding class is a representation of a building mapped with
    Modelica information. It contains HVAC and geometric information.
    
    Note: As MapBuilding inherits from MoObject it is possible to
    implement connectors, parameters and whole models target names.
    
    Parameters
    ----------
    
    project : instance of MapProject()
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
        
    hvac_component_group : dict
        This is an dict with all HVAC groups. The Key is the HVAC Group name 
        (e.g. HVAC_Hot_Water), the value is a list with *all* components in this
        group. These are instances of "MapComponent".
    
    """
    
    def __init__(self, project, sim_object):
        
        super(MapBuilding, self).__init__(project, sim_object)

        self.building_name = ""
        self.thermal_zones = []
        self.hvac_component_group = {}

        #Add the HVAC Components, attached to the building to MapBuilding
        #First Use Case supports Boiler and Pump (no more components are supported in libSimModel
        bldg_child = sim_object.getChildList()
        for a in range(bldg_child.size()):
            if bldg_child[a].ClassType() == "SimSystem_HvacHotWater_FullSystem": #this must be a child of SimBldg
                self.hvac_component_group[bldg_child[a].getSimModelObject().SimModelName().getValue()] = []
                bldg_hvac_child = bldg_child[a].getChildList()
                for d in range(bldg_hvac_child.size()):
                    if bldg_hvac_child[d].ClassType() == "SimSystem_HvacHotWater_Supply":
                        supply_child = bldg_hvac_child[d].getChildList()
                        for e in range(supply_child.size()):
                            if supply_child[e].ClassType() == "SimFlowMover_Pump_VariableSpeedReturn" and  \
                               supply_child[e].getSimModelObject().IsTemplateObject().getValue() is False:
                                from genericapi.AixLib.Fluid.Movers.Pump import Pump
                                Pump(self.project, supply_child[e], self)
                            if supply_child[e].ClassType() == "SimFlowPlant_Boiler_BoilerHotWater" and  \
                                    supply_child[e].getSimModelObject().IsTemplateObject().getValue() is False:
                                from genericapi.AixLib.Fluid.HeatExchangers.Boiler import Boiler
                                Boiler(self.project, supply_child[e], self)
            if bldg_child[a].ClassType() == "SimSpatialZone_ThermalZone_Default":
                self.thermal_zones.append(MapThermalZone(project=project,
                                                         sim_object=bldg_child[a],
                                                         parent=self))


class MapThermalZone(MoObject):
    """Representation of a mapped thermal zone
        
    The MapThermalZone class is a representation of a thermal zone mapped 
    with Modelica information. It contains HVAC and geometric information.
    
    Note: As MapThermalZone inherits from MoObject it is possible to
    implement connectors, parameters and whole models target names.
    
    Parameters
    ----------

    project: MapProject()
        MapThermalZone recieves instance of MapProject to assign connections
        to the project.
            
    
    parent : instance of MapBuilding()
        MapThermalZone receives an instance of MapBuilding, in order to 
        know to what building it belongs to.

    Attributes
    ----------
    
    zone_name : str
        Name of the thermal_zone 

    space_boundaries : MapSpaceBoundaries()
        This is a instance of MapSpaceBoundaries.
        
    hvac_component_group : dict
        This is an dict with all HVAC groups. The Key is the HVAC Group name 
        (e.g. HVAC_Hot_Water), the value is a list with *all* components in this
        group. These are instances of "MapComponent".

    """
    
    def __init__(self,project=None, sim_object=None, parent=None):
        
        super(MapThermalZone, self).__init__(project, sim_object)
        
        self.parent = parent
        self.zone_name = ""
        self.space_boundaries = []
        self.hvac_component_group = {}
        tz_child = sim_object.getParentList()
        for a in range(tz_child.size()): #iterate the SimBuilding
            if tz_child[a].ClassType() == "SimGroup_SpatialZoneGroup_ZoneHvacGroup":
                self.hvac_component_group[tz_child[a].getSimModelObject().SimModelName().getValue()] = []
                tz_hvac = tz_child[a].getChildList()
                for b in range(tz_hvac.size()):
                    if tz_hvac[b].ClassType() == "SimFlowEnergyTransfer_ConvectiveHeater_Water" and \
                       tz_hvac[b].getSimModelObject().IsTemplateObject().getValue() is False:
                        from genericapi.AixLib.Fluid.HeatExchangers.Radiators.Radiator import Radiator
                        Radiator(self.project, tz_hvac[b], self)


class MapComponent(MoObject):
    """Representation of a mapped component
        
    The MapComponent class is a representation of any HVAC component mapped
    with Modelica information. It contains library specific information. 

    Attributes
    ----------

    mapped_control : MapControl()
        This is an instance of MapControl(), Map Control is a flag for used
        control stratagies
    """

    def __init__(self, project=None, sim_object=None, parent=None):

        super(MapComponent, self).__init__(project, sim_object)
        self.parent = parent
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

    index_a : index of connector_a
        default is None, only appicable if MapConnector has an index
        
    index_b : index of connector_b
        default is None, only appicable if MapConnector has an index

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
    
    def __init__(self,
                 connector_a,
                 connector_b,
                 index_a = None,
                 index_b = None):
        
        self.connector_a = connector_a
        self.connector_b = connector_b
        self.index_a = index_a
        self.index_b = index_b
        self.type = ""
        self.sim_ref_id = None
		
class MapConnector(object):
    """Representation of a mapped connector
        
    The MapConnector class is a representation of any connector in Modelica.
    It contains connector information like name and type.
    
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapParameter receives an instance of MapComponent. 
        
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

    dimension : int
        dimension of the Modelica connector (default = 1)     
        
    sim_ref_id : str
        refID of SimModel for the corresponding distributionPort
        
    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.type = ""
        self.dimension = 1
        self.sim_ref_id = None
		
        
class MapControl(object):
    """Representation of a mapped control strategy
        
    The MapControl class is a representation of a mapped control system.
    It is used to store control parameters and more important the control 
    strategy/system itself


    Parameters
    ----------

    parent : instance of a MapComponent()
        MapParameter receives an instance of MapComponent. 
        
    Attributes
    ----------
    
    control_strategy : str (library specific codelist)
        Probably a code list of possible control strategies
        
    control_objects : list of MoObject
        This is an *iterable* list containing all MoObjects of the control 
        strategy
        
    control_connector : instance of a MapConnector()
        MapConnector of one of the control_objects that provides the output
        control variable

    """

    def __init__(self, parent):

        self.parent = parent
        self.control_strategy = ""
        self.control_objects = []
        self.control_connector = None

class MapParameter(object):
    """Representation of a mapped property
        
    The MapParameter class is a representation of any Modelica property. 
    
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapParameter receives an instance of MapComponent. 
        
    name : str
        Modelica name of the Parameter (e.g. Q_flow_max)
        
    value : float/int/bool/str/list/array
        Value of the Parameter, can be float, int, boolean, string, list or array
        with corresponding data type.

    """
    
    def __init__(self, parent, name, value):
        
        self.parent = parent
        self.name = name
        self.value = value
        
class MapRecord(object):
    """Representation of a mapped record
        
    The MapRecord class is a representation of any Modelica Record class. 
    
    Parameters
    ----------
    
    parent : instance of a MapComponent()
        MapRecords receives an instance of MapComponent. 
        
    name : str
        Modelica name of the Record (e.g. boilerEfficiencyB)
        
    record_location : str
        location in the library of the base record
        
    Attributes
    ----------

    parameters : list of MappedParameter or MapRecords
        This is an *iterable* list containing all records and parameters of
        the MapRecord

    """
    
    def __init__(self, parent, record_location, name):
        
        self.parent = parent
        self.name = name
        self.record_location = record_location
        self.parameters = []

    def add_parameter(self, name, value):
        """This adds a Parameter to the MapRecord

        For topology mapping it might be necessary to add additional propertys,
        besides the mapped once to some MoObjects. This creates an instance
        of MapParameter and adds it to MoObject property list.


        Parameters
        ----------

        name : str
            name of the property in Modelica

        value : int/float/str/bool
            value of the property

        Returns
        ----------

        mapped_prop : MapParameter
            returns the MapParameter instance

        """
        mapped_prop = MapParameter(self, name, value)

        self.parameters.append(mapped_prop)

        return mapped_prop
		
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
    
    sim_ref_id : str 
        SimModel ref id
        
    type: str(?)
        OuterWall, InnerWall, Roof, Floor, Ceiling, Door, etc.
        
    internal_external: str(?)
        internal or external space boundary (is sun exposed?)
    
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
        self.sim_ref_id = None
        self.type = None
        self.internal_external = None
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

class MapMaterial(object):
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
        