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

    def init_me(self):
        self.target_location = "AixLib.Fluid.Movers.Pump"
        pump_child = self.hierarchy_node.getChildList()
        for id in range(pump_child.size()):
            if pump_child[id].ClassType() == \
                    "SimNode_HotWaterFlowPort_Water_In":
                sim_port_in = pump_child[id]
            if pump_child[id].ClassType () == \
                    "SimNode_HotWaterFlowPort_Water_Out":
                sim_port_out = pump_child[id]
        self.port_a = self.add_connector(name="port_a", type="FluidPort",
         dimension= 1, hierarchy_node=sim_port_in)
        self.port_b = self.add_connector(name="port_b", type="FluidPort",
         dimension= 1, hierarchy_node=sim_port_out)
        self.IsNight = self.add_connector("IsNight", "Boolean")

        return True

    def mapp_me(self):
        self.con_expansion_vessel(0.1)

        self.ControlStrategy = self.add_parameter(name="ControlStrategy",
                                                  value=1.0)
        self.V_flow_max = self.add_parameter(name="V_flow_max",
                                             value=self.sim_instance.SimFlowMover_RatedFlowRate().getValue())
        self.Head_max = self.add_parameter(name="Head_max",
                                           value=self.sim_instance.SimFlowMover_RatedPumpHead().getValue() * 0.0001019716)


    def con_expansion_vessel(self, v_start):
        from genericapi.AixLib.Fluid.Storage.ExpansionVessel import ExpansionVessel

        exp_ves = ExpansionVessel(self.project, self.hierarchy_node, self)
        exp_ves.init_me()
        exp_ves.V_start.value = v_start

        self.add_connection(self.port_a, exp_ves.port_a)