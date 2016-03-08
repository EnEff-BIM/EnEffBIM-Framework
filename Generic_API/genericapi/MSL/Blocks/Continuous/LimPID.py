# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:26:16 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy
import random

class LimPID(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(LimPID, self).__init__(project, sim_object, parent)
        
        self.target_location = "Modelica.Blocks.Continuous.LimPID"
        self.target_name = "pidCtrl"+str(random.randint(1, 100))

        self.k = self.add_parameter(name="k", value=0.5)
        self.yMax = self.add_parameter(name="yMax", value=1)
        self.yMin = self.add_parameter(name="yMin", value=0)

        self.y = self.add_connector("y", "Real")
        self.u_s = self.add_connector("u_s", "Real")
        self.u_m = self.add_connector("u_m", "Real")

