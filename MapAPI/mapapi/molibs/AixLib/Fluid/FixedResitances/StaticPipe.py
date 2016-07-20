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
        if self.target_name is None:
            self.target_name = "Pipe"+str(random.randint(0,10))
        else:
            pass

        if self.hierarchy_node is None:
            self.target_location = "AixLib.Fluid.FixedResistances.StaticPipe"
            self.D = self.add_parameter(name="D",
                                    value=0.05)
            self.l = self.add_parameter(name="l",
                                        value=1)
            self.e = self.add_parameter(name="e",
                                        value=0.000025)
        else:
            self.target_location = "AixLib.Fluid.FixedResistances.StaticPipe"
            self.D = self.add_parameter(name="D",
                                    value=0.05)
            self.l = self.add_parameter(name="l",
                                        value=1)
            self.e = self.add_parameter(name="e",
                                        value=0.000025)
            #map_sim = self.hierarchy_node.getMappedComponents()
            #self.target_location = map_sim[0].getTargetLocation()
            #prop_list = map_sim[0].getMappedPropertyList()
            #self.arrange_parameters(prop_list)

        return True
