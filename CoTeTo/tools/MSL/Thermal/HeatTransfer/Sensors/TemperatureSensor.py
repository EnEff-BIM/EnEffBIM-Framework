# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 15:41:25 2015

@author: pre
"""

import os
import sys
import tools.utilities as ut
import random

modulePath = ut.get_full_path("Generic_API/mapapi/MapHierarchy")

os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
# add modulePath to Python Path
sys.path.append(modulePath)


import MapHierarchy 

class TemperatureSensor(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, parent, project):
        
        super(TemperatureSensor, self).__init__(parent, project)
        self.target_location = ("Modelica.Thermal.HeatTransfer.Sensors."+
                                "TemperatureSensor")
        self.target_name = "sensT"+str(random.randint(1, 100))
        self.port = self.add_connector("port", "HeatPort")
        self.T = self.add_connector("T", "RealOutput")

