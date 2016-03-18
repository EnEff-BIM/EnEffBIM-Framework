# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def init_me(self):
        self.target_location = "AixLib.Fluid.HeatExchangers.Radiators.Radiator"
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
        


    def mapp_me(self):
        print("map rad")

        from genericapi.AixLib.Fluid.FixedResitances.StaticPipe import Pipe
        #pipe.convert_it(name=Pipe)
        pipe = Pipe(self.project,self.hierarchy_node,self)
        pipe.init_me()
        self.project.buildings[0].hvac_components_mod.append(pipe)
        self.add_connection(self.port_a, pipe.port_b)
        self.port_a = pipe.port_a
