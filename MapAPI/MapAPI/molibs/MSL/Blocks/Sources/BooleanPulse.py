# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:10:45 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class BooleanPulse(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    def init_me(self):
        self.target_location = "Modelica.Blocks.Sources.BooleanPulse"
        self.target_name = "booleanPulse"+str(random.randint(1, 100))
        self.width = self.add_parameter(name="width", value=50)
        self.period = self.add_parameter(name="period", value=None)
        self.startTime = self.add_parameter(name="startTime", value=0)
        self.y = self.add_connector(name='y', type='Boolean')
        return True
