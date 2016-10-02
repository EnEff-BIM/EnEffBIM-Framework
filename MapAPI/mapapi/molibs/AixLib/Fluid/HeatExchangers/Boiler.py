# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import mapapi.MapClasses as MapHierarchy
import warnings

class Boiler(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Boiler
    """

    def init_me(self):
        self.fluid_two_port()
        self.T_set = self.add_connector(name="T_set", type="Real", \
                                        dimension=1)
        return True

    def mapp_me(self):

        self.target_name += "boiler"
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except RuntimeError:
            raise("could not apply mapping", self)

        try:
            boil_child = self.hierarchy_node.getChildList()
            for a in range(boil_child.size()):
                if boil_child[a].ClassType() == "SimController_SupplyWater_Temperature":
                    self.add_constant_flow()
        except Exception:
            warnings.warn("Could not apply controller to boiler", self)

    def add_constant_flow(self):
        '''adds a constants flow Temperature for the hot water loop'''

        map_sim = self.hierarchy_node.getMappedComponents()
        for i in range(map_sim.size()):
            if map_sim[i].getTargetLocation() == \
                    'Modelica.Blocks.Sources.Constant':
                map_const = map_sim[i]

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)

        const.init_me()
        const.mapp_me()
        const.target_name = "setTemp" + "_" + self.target_name
        self.project.mod_components.append(const)

        self.add_connection(self.T_set, const.y)