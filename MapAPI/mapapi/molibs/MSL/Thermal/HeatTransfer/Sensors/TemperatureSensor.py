# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:26:16 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class TemperatureSensor(MapHierarchy.MapComponent):
    """Representation of MSL Sensor
    """

    def init_me(self):

        self.target_location = ("Modelica.Thermal.HeatTransfer.Sensors."
                                "TemperatureSensor")
        self.target_name = "sensT"+str(random.randint(1, 100))
        self.port = self.add_connector("port", "HeatPort")
        self.T = self.add_connector("T", "Real")
