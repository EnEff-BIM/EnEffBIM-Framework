# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:26:16 2015

@author: pre
"""
import random

import mapapi.MapClasses as MapHierarchy


class LimPID(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.y = self.add_connector("y", "Real")
        self.u_s = self.add_connector("u_s", "Real")
        self.u_m = self.add_connector("u_m", "Real")

    def mapp_me(self):
        self.target_name = "pidCtrl" + str(random.randint(1, 100))
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, please check if you are "
                            "using one to many mappings correctly. We are "
                            "using default values")
            warnings.warn(warning_text)
            self.target_location = "Modelica.Blocks.Continuous.LimPID"
            self.target_name = "pidCtrl" + str(random.randint(1, 100))

            self.k = self.add_parameter(name="k", value=0.5)
            self.yMax = self.add_parameter(name="yMax", value=1)
            self.yMin = self.add_parameter(name="yMin", value=0)

