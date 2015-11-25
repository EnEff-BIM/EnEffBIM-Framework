# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import os
import sys

import tools.utilities as ut

modulePath = ut.get_full_path("Generic_API/MapAPI/MapHierarchy")

os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
# add modulePath to Python Path
sys.path.append(modulePath)

import MapHierarchy 

class ThermalZone(MapHierarchy.MoObject):
    """Representation of AixLib.Building.LowOrder.ThermalZone
    """

    def __init__(self, parent=None):

        super(ThermalZone, self).__init__(parent)

        self.internalGainsConv = self.add_connector("internalGainsConv", 
                                                    "HeatPort")
        self.internalGainsRad = self.add_connector("internalGainsRad", 
                                                    "HeatPort")
        self.infiltrationTemperature = self.add_connector(
                                        "infiltrationTemperature",
                                        "RealInput")
        self.infiltrationRate = self.add_connector("infiltrationRate",
                                                   "RealInput")
        self.internalGains = self.add_connector("internalGains",
                                                "RealInput", dimension = 3)
        self.solarRad_in = self.add_connector("solarRad_in", "SolarRad_in ")