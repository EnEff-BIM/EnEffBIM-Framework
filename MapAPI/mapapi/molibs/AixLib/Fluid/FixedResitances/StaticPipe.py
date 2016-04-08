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
        self.target_name = "Pipe"+str(random.randint(0,10))
        return True

    def mapp_me(self):
        self.D = self.add_parameter(name="D",
                                    value=0.05)
        self.l = self.add_parameter(name="l",
                                    value=1)
        self.e = self.add_parameter(name="e",
                                    value=0.000025)
        self.m_flow_small = self.add_parameter(name="m_flow_small",
                                               value=0.01)
        return True
