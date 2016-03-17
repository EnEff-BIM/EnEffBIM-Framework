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

        return True