# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import mapapi.MapClasses as MapHierarchy


class Boiler(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Boiler
    """

    def init_me(self):
        self.target_location = "AixLib.Fluid.HeatExchangers.Boiler"
        boiler_child = self.hierarchy_node.getChildList()
        for id in range(boiler_child.size()):
            if boiler_child[id].ClassType() == \
                    "SimNode_HotWaterFlowPort_Water_In":
                sim_port_in = boiler_child[id]
            if boiler_child[id].ClassType () == \
                    "SimNode_HotWaterFlowPort_Water_Out":
                sim_port_out = boiler_child[id]

        self.port_a = self.add_connector(name="port_a", type="FluidPort",
         dimension=1, hierarchy_node=sim_port_in)
        self.port_b = self.add_connector(name="port_b", type="FluidPort",
         dimension=1, hierarchy_node=sim_port_out)
        self.T_set = self.add_connector(name="T_set", type="Real", \
                                                            dimension=1)
        return True

    def mapp_me(self):
        self.add_constant_flow(set_temp=320.0)
        self.Volume = self.add_parameter(name="Volume",
                                         value=0.0045469)
        q_value = self.sim_instance.SimFlowPlant_NomCap().getValue()
        self.Q_flow_max = self.add_parameter(name="Q_flow_max",
                                             value=q_value)
        self.m_flow_nominal = self.add_parameter(name="m_flow_nominal",
                                                 value=0.01)
        self.T_ref = self.add_parameter(name="T_ref",
                                        value=20.0)

    def add_constant_flow(self, set_temp):
        '''adds a constants flow Temperature for the hot water loop'''

        from molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project, self.hierarchy_node, self)
        const.init_me()
        const.target_name = "setTemp"+"_"+self.target_name
        const.k.value = set_temp
        self.add_connection(self.T_set, const.y)
        self.project.buildings[0].hvac_components_mod.append(const)
