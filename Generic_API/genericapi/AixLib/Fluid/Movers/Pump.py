# -*- coding: utf-8 -*-
"""
Module for AixLib.Fluid.Movers.Pump

containes the python class Pump, as well as a function to instantiate classes
from the corresponding SimModel instances.
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy

class Pump(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(Pump, self).__init__(project, sim_object, parent)
        """
        self.sim_ref_id = [sim_object.RefId()] #by default
        self.target_name = sim_object.SimModelName().getValue() #by default

        self.target_location = "AixLib.Fluid.Movers.Pump" #from MR?
        self.ControlStrategy = self.add_parameter(name = "ControlStrategy",
                                                  value = 1.0) #from MR?
        self.Head_max = self.add_parameter(name = "Head_max",
                                           value = \
                        sim_object.SimFlowMover_RatedPumpHead().getValue())
        self.V_flow_max = self.add_parameter(name = "V_flow_max",
                                             value = \
                        sim_object.SimFlowMover_RatedFlowRate().getValue())
        """
        pump_parent = sim_object.getParentList()
        for a in range(pump_parent.size()):
            if pump_parent[a].ClassType() == "SimSystem_HvacHotWater_Supply" and \
               pump_parent[a].getSimModelObject().IsTemplateObject().getValue() == False:
                hvac_loop = pump_parent[a].getParentList()[0].getSimModelObject().SimModelName().getValue()
                self.parent.hvac_component_group["HW Loop 1"].append(self)
        #connector

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.IsNight = self.add_connector("IsNight", "BooleanInput")

        """automatically instantiate an expansion vessel to pump"""
        self.con_expansion_vessel(0.01, hvac_loop)
        
    def ctrl_switching_night(self, width, period, startTime):
        """adds a boolean pulse to the boiler for switching the night mode"""

        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(MapHierarchy.MoObject(self))
        self.map_control.control_objects[-1].target_location = \
                                        "Modelica.Blocks.Sources.BooleanPulse"
        self.map_control.control_objects[-1].target_name = "nightSignal"
        self.map_control.control_objects[-1].add_parameter("width", width)
        self.map_control.control_objects[-1].add_parameter("period", period)
        self.map_control.control_objects[-1].add_parameter("startTime",
                                                          startTime)
        y = self.map_control.control_objects[-1].add_connector("y",
                                                               "BooleanOutput")
        self.project.systems.append(self.map_control.control_objects[-1])
        self.add_connection(self.project, y, self.IsNight)

    def con_expansion_vessel(self, V_start,loop):
        import genericapi.AixLib.Fluid.Storage.ExpansionVessel \
                                                as ExpansionVessel
        self.parent.hvac_component_group[loop].append(ExpansionVessel.ExpansionVessel(
                                                self.project, self))
        self.parent.hvac_component_group[loop][-1].target_location = ("AixLib.Fluid."
                                                    "Storage.ExpansionVessel")
        self.parent.hvac_component_group[loop][-1].target_name = "expansionVessel"
        self.parent.hvac_component_group[loop][-1].add_parameter = ("V_start", V_start)
        port_a = self.parent.hvac_component_group[loop][-1].add_connector("port_a",
                                                                    "FluidPort")
        self.add_connection(self.port_a, port_a)