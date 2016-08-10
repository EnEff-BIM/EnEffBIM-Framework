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
        self.fluid_two_port()

        return True

    def mapp_me(self):
        map_sim = self.hierarchy_node.getMappedComponents()
        self.target_location = map_sim[0].getTargetLocation()
        prop_list = map_sim[0].getMappedPropertyList()
        self.arrange_parameters(prop_list)
        self.T_set = self.add_connector(name="T_set", type="Real", \
                                                            dimension=1)
        #self.add_constant_flow(set_temp=320.0)

    def add_constant_flow(self, set_temp):
        '''adds a constants flow Temperature for the hot water loop'''

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project, self.hierarchy_node, self)
        const.init_me()
        const.target_name = "setTemp"+"_"+self.target_name
        const.k.value = set_temp
        self.add_connection(self.T_set, const.y)
        self.project.buildings[0].hvac_components_mod.append(const)
