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

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def __init__(self, parent=None):
        
        super(Radiator, self).__init__(parent)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.convPort = self.add_connector("convPort", "HeatPort")
        self.radPort = self.add_connector("radPort", "HeatPort")
        
        
    def connect_tz_AixLib(self, thermal_zone):
        
        self.add_connection(self.convPort,
                            thermal_zone.internalGainsConv)
        self.add_connection(self.radPort,
                            thermal_zone.internalGainsRad)