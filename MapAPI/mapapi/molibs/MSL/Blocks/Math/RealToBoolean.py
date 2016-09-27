# -*- coding: utf-8 -*-
"""
@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class RealToBoolean(MapHierarchy.MapComponent):
    """Representation of MSL.Blocks.Math.RealToBoolean
    """

    def init_me(self):
        self.target_location = "Modelica.Blocks.Math.RealToBoolean"
        self.target_name = "realToBool"+str(random.randint(1, 100))
        self.threshold = self.add_parameter(name="threshold", value=1.0)
        self.u = self.add_connector(name="u", type="Real")
        self.y = self.add_connector(name="y", type="Boolean", dimension=1)
        return True

    def mapp_me(self):
        pass
