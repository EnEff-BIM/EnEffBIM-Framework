# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class Pipe(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.FixedResistances.Pipe
    """

    def init_me(self):
        self.fluid_two_port()

        return True


    def mapp_me(self):
        pass
        """
        map_sim = self.hierarchy_node.getMappedComponents()
        self.target_location = map_sim.getTargetLocation()
        prop_list = map_sim[0].getMappedPropertyList()
        self.arrange_parameters(prop_list)
        """