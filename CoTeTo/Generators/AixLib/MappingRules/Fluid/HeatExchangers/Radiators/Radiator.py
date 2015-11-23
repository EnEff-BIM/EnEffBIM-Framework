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

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def __init__(self, parent=None):
        
        super(Radiator, self).__init__(parent)

        self.add_connector("port_a", "FluidPort")
        self.add_connector("port_b", "FluidPort")
        self.add_connector("convPort", "HeatPort")
        self.add_connector("radPort", "HeatPort")