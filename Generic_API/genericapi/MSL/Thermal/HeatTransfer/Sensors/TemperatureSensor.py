# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 15:41:25 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy
import random
class TemperatureSensor(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(TemperatureSensor, self).__init__(project, sim_object, parent)
        self.target_location = ("Modelica.Thermal.HeatTransfer.Sensors."
                                "TemperatureSensor")
        self.target_name = "sensT"+str(random.randint(1, 100))
        self.port = self.add_connector("port", "HeatPort")
        self.T = self.add_connector("T", "Real")

