# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy
import random

class Pipe(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.target_location = \
            "AixLib.Fluid.FixedResistances.StaticPipe"
        self.port_a = self.add_connector(name="port_a", type="FluidPort",
         dimension= 1)
        self.port_b = self.add_connector(name="port_b", type="FluidPort",
         dimension= 1)
        self.target_name = "Pipe"+str(random.randint(0,10))
        return True

    def mapp_me(self):
        print("map pipe")
        return True