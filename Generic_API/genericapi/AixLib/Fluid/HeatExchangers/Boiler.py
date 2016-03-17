# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy


class Boiler(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Boiler
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