import os
import sys
modulePath = ("D:\\GIT\EnEffBIM-Framework\\SimModel_Python_API\\simmodel_swig"
                 "\\Release")
os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
sys.path.append(modulePath)

import SimModel
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
        self.hierarchy_node = hierarchy_node
        if self.hierarchy_node is not None:
            self.sim_instance = self.hierarchy_node.getSimModelObject()
        else:
            self.sim_instance = None

        if self.sim_instance is not None:
            self.target_name = self.sim_instance.SimModelName().getValue(
                ).replace(" ", "").replace("(","").replace(")","").replace("-","_")
        else:
            self.target_name = None

        if self.sim_instance is not None:
            self.sim_ref_id = self.sim_instance.RefId()
        else:
            self.sim_ref_id = None

        self.parameters = []
        self.connectors = []

    def add_connector(self, name, type, dimension = 1):
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
        connector = MapConnector(self, self.hierarchy_node)
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
    
            mapped_con = MapConnection(connector_a, connector_b)
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
                            self.buildings.append(MapBuilding(self, site_child[
                                b]))

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
        
    hvac_component_group : dict
        This is an dict with all HVAC groups. The Key is the HVAC Group name 
        (e.g. HVAC_Hot_Water), the value is a list with *all* components in this
        group. These are most likely instances of "MapComponent".
    
    """

    def __init__(self, project, sim_object):
        
        super(MapBuilding, self).__init__(project, sim_object)

        self.thermal_zones = []
        self.hvac_component_group = {}


        bldg_child = sim_object.getChildList()

        """Seach for SimSpatialZone_ThermalZone in SimModel, for each found:
        instantiate AixLib ThermalZone, this needs to be changed for other
        libraries, a good approach would be a Template of this whole file"""
        for a in range(bldg_child.size()):
            if bldg_child[a].ClassType() == \
                    "SimSpatialZone_ThermalZone_Default":
                from genericapi.AixLib.Building.LowOrder.ThermalZone \
                    import ThermalZone
                self.thermal_zones.append(ThermalZone(project=project,
                                                      sim_object=bldg_child[a],
                                                      parent=self))

        """Seach for Items attached to SimSystem_HvacHotWater_Supply in
        SimModel, for each found: check what kind it is and instantiate the
        corresponding AixLib model. This needs to be changed for other
        libraries, a good approach would be a Template of this whole file"""
        for a in range(bldg_child.size()):
            if bldg_child[a].ClassType() == "SimSystem_HvacHotWater_FullSystem":
                bldg_hvac_child = bldg_child[a].getChildList()
                for d in range(bldg_hvac_child.size()):
                    if bldg_hvac_child[d].ClassType() == \
                            "SimSystem_HvacHotWater_Supply":
                        self.hvac_component_group[bldg_hvac_child[
                            d].getSimModelObject().SimModelName().getValue()]= []
                        supply_child = bldg_hvac_child[d].getChildList()
                        for e in range(supply_child.size()):
                            if supply_child[e].ClassType() == \
                                    "SimFlowMover_Pump_VariableSpeedReturn" and\
                                        supply_child[e].getSimModelObject().IsTemplateObject().getValue() is False:
                                from genericapi.AixLib.Fluid.Movers.Pump \
                                    import Pump

                                aa = Pump(self.project, supply_child[e], self)
                                aa.find_loop_connection(supply_child[e])
                            if supply_child[e].ClassType() == \
                                    "SimFlowPlant_Boiler_BoilerHotWater" and\
                                        supply_child[e].getSimModelObject().IsTemplateObject().getValue() is False:
                                from genericapi.AixLib.Fluid.HeatExchangers.Boiler import Boiler
                                Boiler(self.project, supply_child[e], self)



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

    hvac_component_group : dict
        This is a dict with all HVAC groups. The Key is the HVAC Group name
        (e.g. HVAC_Hot_Water), the value is a list with *all* components in this
        group. These are instances of "MapComponent".

    """
    
    def __init__(self,project, sim_object, parent=None):
        
        super(MapThermalZone, self).__init__(project, sim_object)
        
        self.parent = parent

        self.space_boundaries = []
        self.hvac_component_group = {}

        """Search for Items attached to SimGroup_SpatialZoneGroup_ZoneHvacGroup
        in SimModel, for each found: check what kind it is and instantiate the
        corresponding AixLib model. This needs to be changed for other
        libraries, a good approach would be a Template of this whole file"""
        tz_child = sim_object.getParentList()
        for a in range(tz_child.size()):
            if tz_child[a].ClassType() == \
                    "SimGroup_SpatialZoneGroup_ZoneHvacGroup":
                self.hvac_component_group[tz_child[a].getSimModelObject(
                    ).SimModelName().getValue()] = []
                print(self.hvac_component_group)
                tz_hvac = tz_child[a].getChildList()
                for b in range(tz_hvac.size()):
                    if tz_hvac[b].ClassType() == \
                            "SimFlowEnergyTransfer_ConvectiveHeater_Water" and \
                       tz_hvac[b].getSimModelObject().IsTemplateObject().getValue() is False:
                        from genericapi.AixLib.Fluid.HeatExchangers.Radiators.Radiator import Radiator
                        Radiator(self.project, tz_hvac[b], self)


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
    """

    def __init__(self, project, sim_object, parent):

        super(MapComponent, self).__init__(project, sim_object)

        self.parent = parent
        self.map_control = None
        self.hvac_loop = ""

    def add_to_loop(self, parent_list, check_list):
        """Adds the MapComponent to the hvac_loop it belongs to in MapHierarchy

        Adds the MapComponent to the right hvac_component_group (Building or
        Zone) in the MapHierarchy. Usually Supply is added to the
        MapBuilding, where demand is added to the MapThermalZone (try and
        except)

        Parameters
        ----------
        parent_list : SimHierarchyNodeRefList()
            Instance of SimHierarchyNodeRefList with all parent nodes of the
            MapComponent

        check_list : [str]
            list of SimModel Class types(str) to check if the right parent is
            chosen to add the MapComponent to the hvac_component_group

        """

        for a in range(parent_list.size()):
            if parent_list[a].ClassType() in check_list and \
               parent_list[a].getSimModelObject().IsTemplateObject().getValue() == False:
                self.hvac_loop = parent_list[a].getSimModelObject().SimModelName().getValue()
                try:
                    self.parent.hvac_component_group[self.hvac_loop].append(self)
                except:
                    self.parent.parent.hvac_component_group[
                        self.hvac_loop].append(self)

   # def find_connection(self,):

    def find_loop_connection(self, hierarchy_node):
        '''

        recursive function, to find all connected items in SimXML

        Parameters
        ----------
        hierarchy_node : current hierarchy node

        Returns
        -------

        '''
        comp_child = hierarchy_node.getChildList()
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
                                        if inlet_parent[h].getSimModelObject().RefId() != self.sim_object.getSimModelObject().RefId():
                                            self.project.hvac_components.append(inlet_parent[h].getSimModelObject())
                                            self.find_loop_connection(inlet_parent[h])
                                            break
                                        else:
                                            return


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
    
    def __init__(self, parent, sim_object=None):
        
        self.parent = parent
        self.sim_object = sim_object
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

        
        self.parent_class = parent
        self.name = ""
        self.density = 0.0  
        self.thermal_conduc = 0.0
        self.heat_capac = 0.0
        self.solar_absorp = 0.0
        self.ir_emissivity = 0.0
        self.transmittance = 0.0
