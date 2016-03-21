import os
import sys
rootPath = os.path.dirname(__file__)
try:
    default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                              "\\simmodel_swig\\Release")
    os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
    sys.path.append(modulePath)
    import SimModel
except:
    default_path = rootPath[:rootPath.rfind("eneffbim-framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API"
                              "\\simmodel_swig\\Release")
    os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
    sys.path.append(modulePath)
    import SimModel
print(modulePath)
import SimModel_Hierachy
from SimProject_Project_DesignAlternative import SimProject_Project_DesignAlternative
from SimSite_BuildingSite_Default import SimSite_BuildingSite_Default
from SimSystem_HvacHotWater_FullSystem import SimSystem_HvacHotWater_FullSystem
from SimBuilding_Building_Default import SimBuilding_Building_Default
from SimSystem_HvacHotWater_Demand import SimSystem_HvacHotWater_Demand
from SimSystem_HvacHotWater_Supply import SimSystem_HvacHotWater_Supply
from SimFlowEnergyTransfer_ConvectiveHeater_Water import SimFlowEnergyTransfer_ConvectiveHeater_Water
from SimFlowMover_Pump_VariableSpeedReturn import SimFlowMover_Pump_VariableSpeedReturn
from SimFlowPlant_Boiler_BoilerHotWater import SimFlowPlant_Boiler_BoilerHotWater
from SimSpatialZone_ThermalZone_Default import SimSpatialZone_ThermalZone_Default
from SimGroup_SpatialZoneGroup_ZoneHvacGroup import SimGroup_SpatialZoneGroup_ZoneHvacGroup
from SimSpace_Occupied_Default import SimSpace_Occupied_Default
from SimMaterial_OpaqueMaterial_Default import SimMaterial_OpaqueMaterial_Default
from SimConnection_HotWaterFlow_Default import SimConnection_HotWaterFlow_Default
from SimConnection_HotWaterFlow_Default import SimConnection_HotWaterFlow_Default
from SimFlowFitting_Splitter_DemandProxySplitterWater import SimFlowFitting_Splitter_DemandProxySplitterWater
from SimFlowFitting_Mixer_DemandProxyMixerWater import SimFlowFitting_Mixer_DemandProxyMixerWater

class MoObject(object):
    """Base class for all mapped objects

    The MoObject class is the base class for all mapped objects in the
    StaticAPI. It contains some library specific data and ist always referenced
    directly or indirectly (MapGap) to a SimModel Object.


    Parameters
    ----------

    project : instance of MapProject()
        MapProject as a "root" parent to have control over the connections in
        the overall model

    hierarchy_node : instance of libSimModelAPI.SimHierarchyNode()
        SimHierarchyNode() of the mapped or referenced MoObject

    Attributes
    ----------

    target_location : str
        location within the library - part of Parameter/Object Mapping

    target_name : str
        name of the Modelica object (by default the SimModel Name, if it is
        only indrectly referenced to SimModel (MapGap) it is most likely the
        parent SimModel Name with some addition

    sim_ref_id : str
        for some application it might be useful to store the SimModel
        Reference ID of the mapped Object

    parameters : list of MapParameter or MapRecord
        This is an *iterable* list containing all records and parameters of
        the MoObject

    connectors : list of MapConnector
        This is an *iterable* list containing all  Modelica connectors of the
        MoObject (e.g. Real, Heatport, Fluid)

    """

    def __init__(self, project, hierarchy_node):
        self.parent = None
        self.project = project
        self.target_location = None
        self.hierarchy_node = hierarchy_node
        if self.hierarchy_node is not None:
            self.sim_instance = self.hierarchy_node.getSimModelObject()
        else:
            self.sim_instance = None

        if self.sim_instance is not None:
            self.target_name = self.sim_instance.SimModelName().getValue(
                ).replace(" ", "").replace("(","").replace(")","").replace(
                "-","_")
        else:
            self.target_name = None

        if self.sim_instance is not None:
            self.sim_ref_id = self.sim_instance.RefId()
        else:
            self.sim_ref_id = None

        self.parameters = []
        self.connectors = []

    def add_connector(self,
                      name,
                      type,
                      hierarchy_node=None,
                      dimension=1,
                      design=None):
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
            returns the instantiated MapConnector class

        """
        connector = MapConnector(self, hierarchy_node)
        connector.name = name
        connector.type = type
        connector.dimension = dimension
        self.connectors.append(connector)

        return connector
        
    def add_parameter(self, name, value):
        """This adds a MapParameter to the MoObject

        For topology mapping it might be necessary to add additional
        parameters, besides the mapped once to some MoObjects. This creates
        an instance of MapParameter and adds it to MoObject parameter list.

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
        
    def add_connection(self, connector_a, connector_b):
        """This connects the MoObject to another Object
        
        For topology mapping it might be necessary to connect two MoObjects.
        With the given Connectors of each Object a MapConnection is instantiated
        and the attributes are set.

        Parameters
        ----------

        connector_a : MapConnector
            Own connector that should be connected (must be in connectors list!)

        connector_b : MapConnector
            Connector of the MoObject that is connected

        Returns
        ----------

        mapped_con : MapConnector
            returns the MapConnector instance
        """

        if connector_a in self.connectors:
            pass
        else:
            raise ValueError("input_connector is not assigned to MoObject")
        if connector_a.type == connector_b.type and \
                connector_a.dimension == connector_b.dimension:
    
            mapped_con = MapConnection(connector_b,connector_a)
            mapped_con.type = connector_a.type
            self.project.connections.append(mapped_con)

            return mapped_con
            
        else:
            raise TypeError("Input/Ouput connector type or dimension"
                            "do not match")


class MapProject(object):
    """Root Class for each mapped data information
        
    The MapProject class is the root class for all mapped information
    and thus the head of the hierarchy tree. Further more it contains meta 
    information about the used library.

    Parameters
    ----------

    simxml_file : str
        absolute path to the SimModel XML file
        
    Attributes
    ----------
    project_name : str
        name of the project

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

    hvac_components : list of MapComponents()
        This is an iterable list containing all MapComponents.

    sim_hierarchy : instance of SimHierarchy
        SImHierarchy object, generic class
    """

    def __init__(self, simxml_file):
        self.simxml_file = simxml_file
        self.project_name = ""
        self.used_library = ""
        self.library_version = ""

        self.buildings = []
        self.connections = []
        self.hvac_components = []

        """Instantiate the SimModel Hierarchy and load the SimXML file through
        libSimModelAPI"""
        self.sim_hierarchy = SimModel_Hierachy.SimHierarchy()
        load_sim = self.sim_hierarchy.loadSimModel(simxml_file)

        self.instantiate_buildings()

    def instantiate_buildings(self):
        '''Instantiates for each SimBuilding_Building_Default a MapBuilding.

        Search the libSimModel Hierarchy for the root and for Buildings,
        for each Building: instantiate a MapBuilding and appends it to the
        buildings list.
        '''
        root_node = self.sim_hierarchy.getHierarchyRootNode()
        prj_child = root_node.getChildList()
        if isinstance(root_node.getSimModelObject(),
                      SimProject_Project_DesignAlternative):
            for a in range(prj_child.size()):
                if isinstance(prj_child[a].getSimModelObject(),
                              SimSite_BuildingSite_Default):
                    site_child = prj_child[a].getChildList()
                    for b in range(site_child.size()):
                        if isinstance(site_child[b].getSimModelObject(),
                                      SimBuilding_Building_Default):
                            MapBuilding(self, site_child[b])

class MapBuilding(MoObject):
    """Representation of a mapped building
        
    The MapBuilding class is a representation of a building mapped with
    Modelica information. It contains HVAC and geometric information.
    
    Note: As MapBuilding inherits from MoObject it is possible to
    implement connectors, parameters and whole models target names.

    Attributes
    ----------

    thermal_zones : list of MapThermalZone()
        This is an *iterable* list containing all thermal zones of the 
        building. The items of the list have to be an instance of
        the class MapThermalZone or inherit from MapThermalZone.
        
    hvac_components_sim : list
        This is a list with all (converted) hvac components from SimModel

    hvac_components_mod : list
        This is a list with all added hvac components because of MapGap,
        one to Many Mappings or Topology mapping
    
    """

    def __init__(self, project, hierarchy_node):
        
        super(MapBuilding, self).__init__(project, hierarchy_node)

        self.project.buildings.append(self)
        self.thermal_zones = []
        self.hvac_components_sim = []
        self.hvac_components_mod = []

        self.instantiate_components()
        self.instantiate_thermal_zones()
        self.convert_components()
        self.instantiate_connections()


    def instantiate_connections(self):
        '''instantiates the SimModel topology connections
        '''
        for a in self.hvac_components_sim:
            for b in a.connected_in:
                for c in self.hvac_components_sim:
                    if c.sim_ref_id == b.getSimModelObject().RefId():
                        a.add_connection(a.port_b, c.port_a)


    def instantiate_thermal_zones(self):
        '''Instantiates for each SimSpatialZone_ThermalZone_Default a
        MapThermalZone.

        Search the libSimModel Hierarchy for thermalZones, for each thermal
        zone: instantiate a MapThermalZone and append it to the thermal zone
        list.
        '''

        bldg_child = self.hierarchy_node.getChildList()

        for a in range(bldg_child.size()):
            if isinstance(bldg_child[a].getSimModelObject(),
                          SimSpatialZone_ThermalZone_Default):
                self.thermal_zones.append(MapThermalZone(project=self.project,
                                                         hierarchy_node=bldg_child[a],
                                                         parent=self))

    def instantiate_components(self):
        '''Seach for Items attached to SimSystem_HvacHotWater_Supply and
        SimSystemHvacHotWater_Demand in SimModel, for each found: create
        MapComponent and add to hvac_component list
        '''

        bldg_child = self.hierarchy_node.getChildList()

        for a in range(bldg_child.size()):
            if isinstance(bldg_child[a].getSimModelObject(),
                          SimSystem_HvacHotWater_FullSystem):
                bldg_hvac_child = bldg_child[a].getChildList()
                for d in range(bldg_hvac_child.size()):
                    if isinstance(bldg_hvac_child[d].getSimModelObject(),
                                  SimSystem_HvacHotWater_Supply):
                        supply_child = bldg_hvac_child[d].getChildList()
                        for e in range(supply_child.size()):
                            sup_comp = MapComponent(self.project,
                                                   supply_child[e])
                            sup_comp.convert_me()
                            sup_comp.find_loop_connection()
                            self.hvac_components_sim.append(sup_comp)
                    elif isinstance(bldg_hvac_child[d].getSimModelObject(),
                                     SimSystem_HvacHotWater_Demand):
                        demand_child = bldg_hvac_child[d].getChildList()
                        for e in range(demand_child.size()):
                            dem_comp = MapComponent(self.project,
                                                    demand_child[e])
                            dem_comp.convert_me()
                            dem_comp.find_loop_connection()
                            self.hvac_components_sim.append(dem_comp)

    def convert_components(self):
        '''Once all hvac components in the SimXML are identified and
        instantiated as a MapComponent() on Python side (with help of
        instantiate_components() function ), we can convert these
        into the library specific classes, by calling the convert_me()
        function'''
        for a in self.hvac_components_sim:
            a.convert_me()
            print("after conversion",a)
        for a in self.hvac_components_sim:
            a.mapp_me()
            print(a)


class MapThermalZone(MoObject):
    """Representation of a mapped thermal zone
        
    The MapThermalZone class is a representation of a thermal zone mapped 
    with Modelica information. It contains HVAC and geometric information.
    
    Note: As MapThermalZone inherits from MoObject it is possible to
    implement connectors, parameters and whole models target names.

    Parameters
    ----------

    parent : instance of MapBuilding()
        parent of the MapThermalZone, instance of MapBuilding()

    Attributes
    ----------

    space_boundaries : MapSpaceBoundaries()
        needs to be figured out
    """
    
    def __init__(self, project, hierarchy_node, parent):
        
        super(MapThermalZone, self).__init__(project, hierarchy_node)
        
        self.parent = parent
        self.space_boundaries = []


class MapComponent(MoObject):
    """Representation of a mapped component
        
    The MapComponent class is a representation of any HVAC component mapped
    with Modelica information. It contains library specific information. 

    Attributes
    ----------

    map_control: MapControl()
        Pointer to an optional control element, instance of MapControl()

    hvac_loop : string
        if the MapComponent is referenced to a HVAC loop (e.g.
        MapThermalZone.hvac_component_group) the name of this loop can be
        stored here. This is a string because hvac_component_group is a
        dictionary with the name of the loops as the key

    connected_in : list of HierarchyNodes
        list of hierarchy nodes that are connected TO this MapComponent

    connected_out : list of HierarchyNodes
        list of hierarchy nodes that are connected FROM this MapComponent

    """

    def __init__(self, project, hierarchy_node, parent=None):

        super(MapComponent, self).__init__(project, hierarchy_node)
        self.parent = parent
        self.map_control = None
        self.hvac_loop = None
        self.connected_in = []
        self.connected_out = []
        from molibs.AixLib.Fluid.HeatExchangers.Boiler import Boiler
        from molibs.AixLib.Fluid.Movers.Pump import Pump
        from molibs.AixLib.Fluid.FixedResitances.StaticPipe import Pipe
        from molibs.AixLib.Fluid.HeatExchangers.Radiators.Radiator import Radiator
        self.aix_lib = {"SimFlowPlant_Boiler_BoilerHotWater" : Boiler,
                        "SimFlowMover_Pump_VariableSpeedReturn" : Pump,
                        "SimFlowEnergyTransfer_ConvectiveHeater_Water" :
                            Radiator,
                        "SimFlowFitting_Mixer_DemandProxyMixerWater" : Pipe,
                        "SimFlowFitting_Splitter_DemandProxySplitterWater" :
                            Pipe}


    def find_loop_connection(self, hierarchy_node=None):
        '''

        recursive function, to find all connected items in SimXML

        Parameters
        ----------
        hierarchy_node : current hierarchy node

        Returns
        -------

        '''
        if hierarchy_node is not None:
            comp_child = hierarchy_node.getChildList()
        else:
            comp_child = self.hierarchy_node.getChildList()
        for i in range(comp_child.size()):
            if comp_child[i].ClassType() == "SimNode_HotWaterFlowPort_Water_Out":
                outlet_child = comp_child[i].getChildList()
                for j in range(outlet_child.size()):
                    if outlet_child[j].ClassType() == "SimConnection_HotWaterFlow_Default":
                        connection_parent = outlet_child[j].getParentList()
                        for k in range(connection_parent.size()):
                            if connection_parent[k].ClassType() == "SimNode_HotWaterFlowPort_Water_In":
                                inlet_parent = connection_parent[k].getParentList()
                                for h in range(inlet_parent.size()):
                                    if inlet_parent[h].ClassType != "SimConnection_HotWaterFlow_Default":
                                        self.connected_out.append(inlet_parent[h])
            elif comp_child[i].ClassType() == \
                "SimNode_HotWaterFlowPort_Water_In":
                outlet_child = comp_child[i].getChildList()
                for j in range(outlet_child.size()):
                    if outlet_child[j].ClassType() == "SimConnection_HotWaterFlow_Default":
                        connection_parent = outlet_child[j].getParentList()
                        for k in range(connection_parent.size()):
                            if connection_parent[k].ClassType() == \
                                    "SimNode_HotWaterFlowPort_Water_Out":
                                inlet_parent = connection_parent[k].getParentList()
                                for h in range(inlet_parent.size()):
                                    if inlet_parent[h].ClassType != "SimConnection_HotWaterFlow_Default":
                                        self.connected_in.append(inlet_parent[h])

    def create_connection(self, test):
        self.project.connections.append(MapConnection(self,test))

    def convert_me(self):
        """Converts the MapComponent to a library specific component"""
        for key, value in self.aix_lib.items():
            if self.hierarchy_node.ClassType() == key:
                self.__class__ = value
                self.init_me()
                return
        else:
            pass


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
        refID of SimModel for the corresponding SimConnection
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
    
    def __init__(self, parent, hierarchy_node=None):
        
        self.parent = parent
        self.hierarchy_node = hierarchy_node
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
        
    The MapParameter class is a representation of any Modelica parameter.

    Parameters
    ----------
    
    parent : instance of a MapComponent() or MapRecord()
        MapParameter receives an instance of MapComponent or MapRecord()
        
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
        
    Attributes
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

        self.parent = parent
        self.name = ""
        self.density = 0.0  
        self.thermal_conduc = 0.0
        self.heat_capac = 0.0
        self.solar_absorp = 0.0
        self.ir_emissivity = 0.0
        self.transmittance = 0.0