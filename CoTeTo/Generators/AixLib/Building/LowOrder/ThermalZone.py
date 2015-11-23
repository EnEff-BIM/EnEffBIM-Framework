# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import os
import sys

modulePath = "D:\\GIT\\EnEffBIM-Framework\\Generic_API\\MapAPI\\MapHierarchy"
print(modulePath)

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
        self.add_connector("port_b", "FluidPort")
        self.add_connector("infiltrationTemperature", "RealInput")
        self.add_connector("infiltrationRate", "RealInput")
        self.add_connector("internalGains", "RealInput", dimension = 3)