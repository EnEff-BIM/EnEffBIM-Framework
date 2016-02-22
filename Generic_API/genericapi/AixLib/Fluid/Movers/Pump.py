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

        self.sim_ref_id = [sim_object.getSimModelObject().RefId()] #by default

        pump_parent = sim_object.getParentList()
        check_bldg_hvac = ["SimSystem_HvacHotWater_Supply"]
        self.add_to_loop(parent_list=pump_parent,
                         check_list=check_bldg_hvac)

        self.target_location = "AixLib.Fluid.Movers.Pump"
        self.target_name = sim_object.getSimModelObject().SimModelName(
        ).getValue() #by default

        self.ControlStrategy = self.add_parameter(name="ControlStrategy",
                                                  value=1.0)
        self.V_flow_max = self.add_parameter(name="V_flow_max",
                                             value=sim_object.getSimModelObject().SimFlowMover_RatedFlowRate().getValue())
        self.Head_max = self.add_parameter(name="Head_max",
                                           value=sim_object.getSimModelObject().SimFlowMover_RatedPumpHead().getValue() * 0.0001019716)

        #connector
        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.IsNight = self.add_connector("IsNight", "Boolean")

        """automatically instantiate an expansion vessel to pump"""
        self.con_expansion_vessel(0.01)

        self.ctrl_switching_night(width=45.8,
                                  period=86400,
                                  startTime=64800)
        
    def ctrl_switching_night(self, width, period, startTime):
        """adds a boolean pulse to the boiler for switching the night mode"""
        from genericapi.MSL.Blocks.Sources.BooleanPulse import BooleanPulse
        bool_pulse = BooleanPulse(project=self.project,
                                  sim_object=None,
                                  parent=self)

        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(bool_pulse)
        bool_pulse.target_name = "nightSignal"
        bool_pulse.width.value = width
        bool_pulse.period.value = period
        bool_pulse.startTime.value = startTime
        self.parent.hvac_component_group[self.hvac_loop].append(bool_pulse)
        self.add_connection(self.IsNight, bool_pulse.y)


    def con_expansion_vessel(self, V_start):
        from genericapi.AixLib.Fluid.Storage.ExpansionVessel import ExpansionVessel
        self.parent.hvac_component_group[self.hvac_loop].append(ExpansionVessel(self.project, self))
        self.parent.hvac_component_group[self.hvac_loop][-1].target_location = ("AixLib.Fluid."
                                                    "Storage.ExpansionVessel")
        self.parent.hvac_component_group[self.hvac_loop][-1].target_name = "expansionVessel"
        self.parent.hvac_component_group[self.hvac_loop][-1].add_parameter = ("V_start", V_start)
        port_a = self.parent.hvac_component_group[self.hvac_loop][-1].add_connector("port_a",
                                                                          "FluidPort")
        self.add_connection(self.port_a, port_a)