# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:10:45 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class Constant(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.target_location = "Modelica.Blocks.Sources.Constant"
        self.target_name = "const"+str(random.randint(1, 100))
        self.k = self.add_parameter(name="k", value=1.0)
        self.y = self.add_connector("y","Real")
        return True

    def mapp_me(self):
        pass
