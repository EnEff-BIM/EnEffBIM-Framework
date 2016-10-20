import os
import sys
rootPath = os.path.dirname(__file__)
try:
    default_path = rootPath[:rootPath.rfind("EnEffBIM-Framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API\\"
                          "\\simmodel_swig\\Release")
    os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
    sys.path.append(modulePath)
    import SimModel
except:
    default_path = rootPath[:rootPath.rfind("eneffbim-framework")]
    modulePath = os.path.join(default_path, "EnEffBIM-Framework\\SimModel_Python_API\\"
                          "\\simmodel_swig\\Release")
    os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
    sys.path.append(modulePath)
    import SimModel
import numpy as np
from numpy import linalg as LA
import SimModel_Mapping
import SimModel_Hierachy

from  SimProject_Project_DesignAlternative import SimProject_Project_DesignAlternative
from  SimSite_BuildingSite_Default import SimSite_BuildingSite_Default
from  SimBuilding_Building_Default import SimBuilding_Building_Default
import SimBuildingStory_BuildingStory_Default
import SimGroup_SpatialZoneGroup_ZoneGroup
import SimGroup_SpatialZoneGroup_ZoneHvacGroup
from  SimSpatialZone_ThermalZone_Default import SimSpatialZone_ThermalZone_Default
import SimSpace_Occupied_Default
import SimList_EquipmentList_ZoneHvac
import SimSpaceBoundary_SecondLevel_SubTypeA
import SimSlab_Default_Default
import SimSlab_RoofSlab_RoofUnderAir
import SimSlab_Floor_FloorOverEarth
import SimSlab_Floor_InterzoneFloor
import SimWall_Wall_Default
import SimWall_Wall_ExteriorAboveGrade
import SimWall_Wall_Interior
import SimWindow_Window_Exterior
import SimMaterialLayerSet_Default_Default
import SimMaterialLayerSet_OpaqueLayerSet_Roof
import SimMaterialLayerSet_OpaqueLayerSet_Floor
import SimMaterialLayerSet_OpaqueLayerSet_Wall
import SimMaterialLayerSet_GlazingLayerSet_Window
import SimFeatureElementSubtraction_Void_Opening
import SimMaterialLayer_OpaqueMaterialLayer_Default
import SimMaterialLayer_GlazingMaterialLayer_Default
import SimMaterial_Default_Default
import SimMaterial_OpaqueMaterial_Default
import SimMaterial_OpaqueMaterial_AirGap
import SimMaterial_GlazingMaterial_Gas
import SimMaterial_GlazingMaterial_SimpleGlazingSystem
import SimMaterial_GlazingMaterial_Glazing
import SimModelRepresentationContext_GeometricRepresentationContext_Default
import SimPlacement_Axis2Placement3D_Default
import SimGeomVector_Vector_Direction
from SimSystem_HvacHotWater_FullSystem import SimSystem_HvacHotWater_FullSystem
import SimSystem_HvacHotWater_Control
import SimController_SupplyWater_Temperature
import SimSensor_TemperatureSensor_DryBulb
from SimSystem_HvacHotWater_Demand import SimSystem_HvacHotWater_Demand
import SimFlowController_Valve_Default
import SimFlowController_Valve_TemperingValve
import SimFlowEnergyTransfer_ConvectiveHeater_Water
import SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Water
import SimFlowEnergyTransferStorage_HotWaterTank_Expansion
import SimFlowEnergyTransferStorage_HotWaterTank_Mixed
import SimFlowFitting_Default_Default
import SimFlowFitting_Mixer_DemandProxyMixerWater
import SimFlowFitting_Splitter_DemandProxySplitterWater
import SimFlowSegment_Pipe_Indoor
from  SimSystem_HvacHotWater_Supply import SimSystem_HvacHotWater_Supply
import SimFlowMover_Pump_VariableSpeedReturn
import SimFlowPlant_Boiler_BoilerHotWater
import SimConnection_HotWaterFlow_Default
import SimNode_HotWaterFlowPort_Water_Out
import SimNode_HotWaterFlowPort_Water_In
import SimDistributionPort_HotWaterFlowPort_Water_Out
import SimDistributionPort_HotWaterFlowPort_Water_In
import SimDistributionPort_HotWaterFlowPort_Water_InOrOut
import SimNode_DigitalControl_HWLoop_DigitalSignal_In
import SimTimeSeriesSchedule_Year_Default
import SimTimeSeriesSchedule_Week_Daily
import SimTimeSeriesSchedule_Day_Interval
import SimTemplateZoneLoads_ZoneLoads_Default
import SimTemplateZoneConditions_ZoneConditions_Default
import SimInternalLoad_Equipment_Electric
import SimInternalLoad_People_Default
import SimInternalLoad_Lights_Default
import SimController_ZoneControlTemperature_Thermostat
import SimControlScheme_SetpointScheme_SingleHeating
import SimPerformanceCurve_Mathematical_Cubic

from SimModel_Translator import SimTranslator

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

    mapped_component : libSimModelAPI.MappedComponent Object
        if available mapped component. If there is an explicit SimModelObject
        for the hierarchy node, the first entry of MappedCompomponent is
        assinged, otherwise mapped_component is None and needs to be set for
        one to many mapping individually
    """

    def __init__(self, project, hierarchy_node):
        self.parent = None
        self.project = project
        self.target_location = None
        self.hierarchy_node = hierarchy_node
        if self.hierarchy_node is not None:
            try:
                self.sim_instance = self.hierarchy_node.getSimModelObject()
            except:
                self.sim_instance = None
        else:
            self.sim_instance = None

        try:
            self.mapped_component = self.hierarchy_node.getMappedComponents()[0]
        except:
            self.mapped_component = None

        if self.sim_instance is not None:
            self.target_name = "Random" + self.sim_instance.RefId()[-5:]
            #self.target_name = self.sim_instance.SimModelName().getValue(
            #    ).replace(" ", "").replace("(","").replace(")","").replace(
            #    "-","_")
        else:
            self.target_name = None

        if self.sim_instance is not None:
            self.sim_ref_id = self.sim_instance.RefId()
        else:
            self.sim_ref_id = None

        self.parameters = []
        self.records = []
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
        existing_para = False
        for para in self.parameters:
            if para.name == name:
                existing_para = True
                break
            else:
                pass
        if existing_para is True:
            para.value = value
            return para
        elif existing_para is False:
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

    simxml_file : list of length 2
        absolute path to the SimModel XML file, first entry geometry, second
        entry HVAC

    mapping_file : srt
        absolute path to the MappingRule XML file

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

    mod_components : list of MapComponents()
        This is an iterable list containing all additionally added
        MapComponents (e.g. Non-Fluid)

    sim_hierarchy : instance of SimHierarchy
        SImHierarchy object, generic class
    """

    def __init__(self, simxml_file, mapping_file):
        self.simxml_file = simxml_file
        self.project_name = ""
        self.used_library = ""
        self.library_version = ""

        self.buildings = []
        self.connections = []
        self.hvac_components = []
        self.mod_components = []

        """Instantiate the SimModel Hierarchy and load the SimXML file through
        libSimModelAPI"""
        self.translator = SimTranslator()
        self.sim_hierarchy = self.translator.getSimHierarchy()
        #load_sim = self.translator.loadSimModel(simxml_file)
        load_sim = self.translator.loadSimModel(simxml_file[0], simxml_file[1])
        self.sim_mapping = self.translator.getSimMappedData(mapping_file)
        mapped_list = self.sim_mapping.getMappedComponentList()
        self.mapped_components = {}
        for a in range(mapped_list.size()):
            if mapped_list[a].getMappingRuleName() == "Component_Map_One2Many":
                if mapped_list[a].getUnmappedSimHierarchyNodes()[0].ClassType() in self.mapped_components:
                    pass
                else:
                    self.mapped_components[mapped_list[a].getUnmappedSimHierarchyNodes()[0].ClassType()] = str(mapped_list[a].getTargetLocation())
            elif mapped_list[a].getMappingRuleName() == "Component_Map_Map_Gap":
                pass
            elif mapped_list[a].getMappingRuleName() == "Component_Map_One2One":
                self.mapped_components[mapped_list[a].getUnmappedSimHierarchyNodes()[0].ClassType()] = str(mapped_list[a].getTargetLocation())

        self.library_objects = {}

        import importlib
        import sys
        this_module = sys.modules[__name__]

        for key, value in self.mapped_components.items():
            m_class = value[(value.rfind(".")+1):len(value)]
            m_module = importlib.import_module("mapapi.molibs."+value)
            m_temp = getattr(m_module, m_class)
            self.library_objects[key] = m_temp
            setattr(this_module, m_class, m_temp)

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
        self.hvac_components_node = []
        self.hvac_components_sim = []
        self.hvac_components_mod = []
        self.internalGainsConv = self.add_connector(name="internalGainsConv",
                                                    type="HeatPort")

        self.instantiate_components()
        self.instantiate_thermal_zones()
        self.convert_components()
        self.instantiate_connections()

        for tz in self.thermal_zones:
            tz.mapp_me()


    def instantiate_connections(self):
        '''instantiates the SimModel topology connections
        '''
        for a in self.project.hvac_components:
            if (a.connected_in and a.connected_out):
                for b in a.connected_in:
                    for c in self.project.hvac_components:

                        if c.sim_ref_id == b.getSimModelObject().RefId():
                            a.add_connection(a.port_b, c.port_a)
            else:
                for b in a.connected_in:
                    for c in self.project.hvac_components:
                        if c.sim_ref_id == b.getSimModelObject().RefId():
                            a.add_connection(a.port_a, c.port_a)

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
                self.thermal_zones[-1].convert_me()

    def instantiate_components(self):
        '''Seach for Items attached to SimSystem_HvacHotWater_Supply and
        SimSystemHvacHotWater_Demand in SimModel, for each found: create
        MapComponent and add to hvac_component list
        '''
        comp_help = {}
        bldg_child = self.hierarchy_node.getChildList()
        for a in range(bldg_child.size()):
            if isinstance(bldg_child[a].getSimModelObject(),
                          SimSystem_HvacHotWater_FullSystem):
                full_system_child = bldg_child[a].getChildList()
                for b in range (full_system_child.size()):
                    if isinstance(full_system_child[b].getSimModelObject(),
                                  SimSystem_HvacHotWater_Supply):
                        supply_child = full_system_child[b].getChildList()
                        for e in range(supply_child.size()):
                            comp_help[supply_child[e].getSimModelObject().RefId()] = supply_child[e]

        for a in range(bldg_child.size()):
            if isinstance(bldg_child[a].getSimModelObject(),
                          SimSystem_HvacHotWater_FullSystem):
                full_system_child = bldg_child[a].getChildList()
                for b in range(full_system_child.size()):
                    if isinstance(full_system_child[b].getSimModelObject(),
                                     SimSystem_HvacHotWater_Demand):
                        demand_child = full_system_child[b].getChildList()
                        for f in range(demand_child.size()):
                            comp_help[demand_child[f].getSimModelObject().RefId()] = demand_child[f]

        for key, value in comp_help.items():
            component = MapComponent(self.project, value)
            component.find_loop_connection()
            self.hvac_components_sim.append(component)
        self.project.hvac_components = self.hvac_components_sim

    def convert_components(self):
        '''Once all hvac components in the SimXML are identified and
        instantiated as a MapComponent() on Python side (with help of
        instantiate_components() function ), we can convert these
        into the library specific classes, by calling the convert_me()
        function'''
        for a in self.hvac_components_sim:
            a.convert_me()
        for a in self.hvac_components_sim:
            a.mapp_me()
            pass

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
        self.height = None
        self.area = None
        self.volume = None
        self.space_boundaries = []
        from mapapi.molibs.AixLib.Building.LowOrder.ThermalZone import \
            ThermalZone
        self.aix_lib = {"SimSpatialZone_ThermalZone_Default" : ThermalZone}
        self.instantiate_space_boundaries()
        spatial_child = self.hierarchy_node.getChildList()
        for a in range(spatial_child.size()):
            if spatial_child[a].ClassType() == "SimSpace_Occupied_Default":
                self.height = spatial_child[a].getSimModelObject().SpaceHeight().getValue()

    def convert_me(self):
        """Converts the MapComponent to a library specific component"""
        for key, value in self.aix_lib.items():
            if self.hierarchy_node.ClassType() == key:
                self.__class__ = value
                self.init_me()
                return
        else:
            pass

    def instantiate_space_boundaries(self):
        tz_child = self.hierarchy_node.getChildList()
        for a in range(tz_child.size()):
            if tz_child[a].ClassType() == "SimSpace_Occupied_Default":
                occ_child = tz_child[a].getChildList()
                for b in range(occ_child.size()):
                    if occ_child[b].ClassType() == \
                            "SimSpaceBoundary_SecondLevel_SubTypeA":
                        if occ_child[b].getSimModelObject().PhysicalOrVirtualBoundary().getValue() == "PHYSICAL":
                            space_bound = MapSpaceBoundary(self, occ_child[b])
                            space_bound.instantiate_element()
                            self.space_boundaries.append(space_bound)

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
        self.connected_out_ref_id = []


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
            if comp_child[i].ClassType() == \
                    "SimDistributionPort_HotWaterFlowPort_Water_Out":
                outlet_child = comp_child[i].getChildList()
                for j in range(outlet_child.size()):
                    if outlet_child[j].ClassType() == "SimConnection_HotWaterFlow_Default":
                        connection_parent = outlet_child[j].getParentList()
                        for k in range(connection_parent.size()):

                            if connection_parent[k].ClassType() == \
                                    "SimDistributionPort_HotWaterFlowPort_Water_In":
                                inlet_parent = connection_parent[k].getParentList()
                                for h in range(inlet_parent.size()):
                                    if inlet_parent[h].ClassType() != \
                                            "SimConnection_HotWaterFlow_Default":
                                        self.connected_in.append(
                                            inlet_parent[h])

            elif comp_child[i].ClassType() == \
                "SimDistributionPort_HotWaterFlowPort_Water_In":
                outlet_child = comp_child[i].getChildList()
                for j in range(outlet_child.size()):
                    if outlet_child[j].ClassType() == "SimConnection_HotWaterFlow_Default":
                        connection_parent = outlet_child[j].getParentList()
                        for k in range(connection_parent.size()):
                            if connection_parent[k].ClassType() == \
                                    "SimDistributionPort_HotWaterFlowPort_Water_Out":
                                outlet_parent = connection_parent[k].getParentList()
                                for h in range(outlet_parent.size()):
                                    if outlet_parent[h].ClassType != "SimConnection_HotWaterFlow_Default":
                                        self.connected_out.append(outlet_parent[h])

            elif comp_child[i].ClassType() == \
                    "SimDistributionPort_HotWaterFlowPort_Water_InOrOut" and \
                    i == 0:
                outlet_child = comp_child[i].getChildList()
                for j in range(outlet_child.size()):
                    if outlet_child[j].ClassType() == "SimConnection_HotWaterFlow_Default":
                        connection_parent = outlet_child[j].getParentList()
                        for k in range(connection_parent.size()):
                            if connection_parent[k].ClassType() == \
                                    "SimDistributionPort_HotWaterFlowPort_Water_InOrOut":
                                inlet_parent = connection_parent[k].getParentList()
                                for h in range(inlet_parent.size()):
                                    if inlet_parent[h].ClassType() != \
                                            "SimConnection_HotWaterFlow_Default" and comp_child.size() > 1:
                                        self.connected_in.append(inlet_parent[h])
                                        for x in range(comp_child.size()):
                                            if comp_child[x].ClassType() ==\
                                                    "SimDistributionPort_HotWaterFlowPort_Water_InOrOut" and \
                                                            comp_child[i].getSimModelObject().RefId() != comp_child[x].getSimModelObject().RefId() :
                                                inlet_child = comp_child[x].getChildList()
                                                for y in range(inlet_child.size()):
                                                    if inlet_child[y].ClassType() == "SimConnection_HotWaterFlow_Default":
                                                        connection_parent_2 = inlet_child[y].getParentList()
                                                        for z in range(connection_parent_2.size()):
                                                            if connection_parent_2[z].ClassType() == \
                                                                    "SimDistributionPort_HotWaterFlowPort_Water_InOrOut":
                                                                outlet_parent = connection_parent_2[z].getParentList()
                                                                for w in range(outlet_parent.size()):
                                                                    if outlet_parent[w].ClassType != \
                                                                            "SimConnection_HotWaterFlow_Default":
                                                                        self.connected_out.append(outlet_parent[w])
                                                                        return
                                            else:
                                                pass
                                    elif inlet_parent[h].ClassType != \
                                            "SimConnection_HotWaterFlow_Default":
                                        self.connected_in.append(inlet_parent[h])
                                        return

    def create_connection(self, test):
        self.project.connections.append(MapConnection(self,test))

    def convert_me(self):
        """Converts the MapComponent to a library specific component"""
        for key, value in self.project.library_objects.items():

            if self.hierarchy_node.ClassType() == key:
                self.__class__ = value
                self.init_me()
                return
        else:
            pass

    def fluid_two_port(self, medium="Water"):
        """Adds connection for Modelica Fluid Two port to component"""
        sim_port_out = None
        sim_port_in = None
        child = self.hierarchy_node.getChildList()
        for id in range(child.size()):
            if child[id].ClassType() == \
                    "SimDistributionPort_HotWaterFlowPort_Water_In":
                sim_port_in = child[id]
            if child[id].ClassType () == \
                    "SimDistributionPort_HotWaterFlowPort_Water_Out":
                sim_port_out = child[id]

        self.port_a = self.add_connector(name="port_a", type="FluidPort",
         dimension=1, hierarchy_node=sim_port_in)
        self.port_b = self.add_connector(name="port_b", type="FluidPort",
         dimension=1, hierarchy_node=sim_port_out)
        self.add_parameter(name="m_flow_small",
                           value=0.01)
        if medium == "Water":
            self.add_parameter(name="replacable package Medium",
                               value="SimpleWater")
        else:
            pass

    def arrange_parameters(self, map_prop_list):
        """arranges parameters in such a way that it distinguishes between
        records and parameters"""

        for a in range(map_prop_list.size()):
            if map_prop_list[a].getRecordInstance() != "":
                if len(self.records) == 0:
                    self.records.append(MapRecord(parent=self,
                                                  record_location=map_prop_list[a].getRecordLocation(),
                                                  name=map_prop_list[a].getRecordInstance()))
                else:
                    for rec in self.records:
                        if map_prop_list[a].getRecordInstance() == rec.name:
                            pass
                        else:
                            self.records.append(MapRecord(parent=self,
                                                          record_location=map_prop_list[a].getRecordLocation(),
                                                          name=map_prop_list[a].getRecordInstance()))

        for b in range(map_prop_list.size()):
            if map_prop_list[b].getValueType() =="String" or map_prop_list[b].getValueType() =="Number":
                if map_prop_list[b].getRecordInstance() != "":
                    for rec in self.records:
                        if map_prop_list[b].getRecordInstance() == rec.name:
                            rec.add_parameter(name=map_prop_list[b].getPropertyName(),
                                              value=map_prop_list[b].getPropertyValue())
                        else:
                            print("warning: parameter seems to be aligned with "
                                  "empty record")

                else:
                    self.add_parameter(name=map_prop_list[b].getPropertyName(),
                                       value=map_prop_list[b].getPropertyValue())
            elif map_prop_list[b].getValueType() =="Matrix":
                matrix_data = map_prop_list[b].getPropertyValue()
                if map_prop_list[b].getRecordInstance() != "":
                    for rec in self.records:
                        if map_prop_list[b].getRecordInstance() == rec.name:
                            rec.add_parameter(name=map_prop_list[b].getPropertyName(),
                                   value=[])
                        for row in range(matrix_data.size()):
                            rec.parameters[-1].value.append(matrix_data[row])
                else:
                    self.add_parameter(name=map_prop_list[b].getPropertyName(),
                                   value=[])
                    for row in range(matrix_data.size()):
                        self.parameters[-1].value.append(matrix_data[row])

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

    def __init__(self, parent, hierarchy_node=None):


        self.parent = parent
        self.hierarchy_node = hierarchy_node
        self.type = None
        if self.hierarchy_node is not None:
            self.sim_instance = self.hierarchy_node.getSimModelObject()
            self.sim_ref_id = self.sim_instance.RefId()

        else:
            self.sim_instance = None

        self.possible_types = ['SimSlab_RoofSlab_RoofUnderAir',
                               'SimSlab_Floor_FloorOverEarth',
                               'SimWall_Wall_ExteriorAboveGrade',
                               'SimWindow_Window_Exterior',
                               'SimSlab_Default_Default',
                               'SimWall_Wall_Default',
                               'SimWall_Wall_Interior',
                               'SimSlab_Floor_InterzoneFloor']
        self.possible_layers = ["SimMaterialLayerSet_OpaqueLayerSet_Wall",
                               "SimMaterialLayerSet_OpaqueLayerSet_Roof",
                               "SimMaterialLayerSet_OpaqueLayerSet_Floor",
                               "SimMaterialLayerSet_GlazingLayerSet_Window"]
        self.internal_external = \
            self.sim_instance.InternalOrExternalBoundary().getValue()
        self.area = self.sim_instance.GrossSurfaceArea().getValue()/1000000

        self.tilt = None
        self.orientation = None

        self.inner_convection = None
        self.inner_radiation = None
        self.outer_convection = None
        self.outer_radiation = None

        self.simmodel_coordinates = None
        self.building_element = None
        self.layer_set = None
        self.mapped_layer = []

        child = self.hierarchy_node.getChildList()
        for q in range(child.size()):
            if child[q].isClassType("SimGeomVector_Vector_Direction"):
                self.simmodel_normal_vector = child[q].getSimModelObject().DirectionRatios().getNumberList()

                self.set_orientation()
                self.set_tilt()
            else:
                self.simmodel_normal_vector = None

    def instantiate_element(self):
        bound_child = self.hierarchy_node.getChildList()
        for a in range(bound_child.size()):
            if bound_child[a].ClassType() in self.possible_types:
                self.type = bound_child[a].ClassType()
                self.building_element = bound_child[a].getSimModelObject()
                element_child = bound_child[a].getChildList()
                for b in range(element_child.size()):
                    if element_child[b].ClassType() in self.possible_layers:
                        self.layer_set = element_child[b].getSimModelObject()
                        layer_child = element_child[b].getChildList()
                        for c in range(layer_child.size()):
                            self.mapped_layer.append(MapMaterialLayer(self,layer_child[c]))

    def set_orientation(self):

        normal_uni = np.asarray(self.simmodel_normal_vector)

        if normal_uni[0] > 0:
            phi = np.arctan(normal_uni[1]/normal_uni[0])
        elif normal_uni[0] < 0 <= normal_uni[1]:
            phi = np.arctan(normal_uni[1]/normal_uni[0]) + np.pi
        elif normal_uni[0] < 0 > normal_uni[1]:
            phi = np.arctan(normal_uni[1]/normal_uni[0]) - np.pi
        elif normal_uni[0] == 0 < normal_uni[1]:
            phi = np.pi/2
        elif normal_uni[0] == 0 > normal_uni[1]:
            phi = -np.pi/2
        elif normal_uni[0] == 0 and normal_uni [1] == 0:
            phi = None

        if phi is None:
            if normal_uni[2] == -1:
                self.orientation = "Slab"
            elif normal_uni[2] == 1:
                self.orientation = "Roof"
        elif phi < 0:
            self.orientation = (phi+2*np.pi)*360/(2*np.pi)
        else:
            self.orientation = phi*360/(2*np.pi)

        if self.orientation in ["Slab","Roof"]:
            pass
        elif 0 <= self.orientation <= 90:
            self.orientation = 90 - self.orientation
        else:
            self.orientation = 450 - self.orientation

    def set_tilt(self):

        normal_uni = np.asarray(self.simmodel_normal_vector)
        z_axis = np.array([0, 0, 1])

        self.tilt = np.arccos(np.dot(normal_uni, z_axis) / (LA.norm(z_axis) * LA.norm(normal_uni))) * 360 / (2 * np.pi)

        if self.tilt == 180:
            self.tilt = 0.0
        elif str(self.tilt) == "nan":
            self.tilt = None
        print(self.tilt)

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

    def __init__(self, parent, hierarchy_node=None):

        self.parent = parent

        self.material = None



        self.hierarchy_node = hierarchy_node
        if self.hierarchy_node is not None:
            self.sim_instance = self.hierarchy_node.getSimModelObject()
            self.thickness = self.sim_instance.SimMatLayer_LayerThickness().getValue()
        else:
            self.sim_instance = None
        self.sim_ref_id = self.sim_instance.RefId()
        self.instantiate_layer()

    def instantiate_layer(self):
        layer_child = self.hierarchy_node.getChildList()
        for a in range(layer_child.size()):
            self.material = MapMaterial(self, layer_child[a])

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

    def __init__(self, parent, hierarchy_node=None):

        self.parent = parent
        self.hierarchy_node = hierarchy_node
        self.sim_instance = self.hierarchy_node.getSimModelObject()

        if self.hierarchy_node is not None:

            if self.hierarchy_node.ClassType() == \
                    "SimMaterial_OpaqueMaterial_Default":
                self.name = self.sim_instance.SimModelName().getValue()
                self.density = self.sim_instance.SimMaterial_Density().getValue()
                self.thermal_conduc = self.sim_instance.SimMaterial_Cond().getValue()
                self.heat_capac = self.sim_instance.SimMaterial_SpecificHeat().getValue()
                self.solar_absorp = self.sim_instance.SimMaterial_SolarAbsorptance().getValue()
                self.ir_emissivity = self.sim_instance.SimMaterial_ThermalAbsorptance().getValue()
                self.transmittance =(1-
                    self.sim_instance.SimMaterial_VisAbsorptance().getValue())
            elif self.hierarchy_node.ClassType() ==  \
                    "SimMaterial_GlazingMaterial_Glazing":
                self.name = self.sim_instance.SimModelName().getValue()
                self.thermal_conduc = self.sim_instance.SimMaterial_Cond().getValue()
            elif self.hierarchy_node.ClassType() == \
                    "SimMaterial_GlazingMaterial_Gas":
                self.name = self.sim_instance.SimModelName().getValue()
                self.heat_capac = \
                    self.sim_instance.SimMaterial_SpecificHeatCoefA().getValue()
                self.thermal_conduc = \
                    self.sim_instance.SimMaterial_CondCoefA().getValue()

            else:
                print(self.hierarchy_node.ClassType())
