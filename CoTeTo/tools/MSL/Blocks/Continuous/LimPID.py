# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:26:16 2015

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

class Constant(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, parent, project):
        
        super(Constant, self).__init__(parent, project)
        
        self.target_location = "Modelica.Blocks.Continuous.LimPID"
        self.target_name = "pidCtrl"+str(random.randint(1, 100))
        self.y = self.add_connector("y", "RealOutput")
        self.u_s = self.add_connector("u_s", "RealInput")
        self.u_m = self.add_connector("u_m", "RealInput")