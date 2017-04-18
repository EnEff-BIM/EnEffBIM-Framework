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

        self.port = self.add_connector("port", "HeatPort")
        self.T = self.add_connector("T", "Real")

    def mapp_me(self):
        self.target_name = "sensT" + str(random.randint(1, 100))
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, please check if you are "
                            "using one to many mappings correctly. We are "
                            "using default values")