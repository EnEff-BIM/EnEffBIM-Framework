# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:10:45 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class Constant(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.y = self.add_connector("y","Real")
        return True


    def mapp_me(self):
        self.target_name = "const" + str(random.randint(1, 100))
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, please check if you are "
                            "using one to many mappings correctly. We are "
                            "using default values", self)
            warnings.warn(warning_text)
            self.target_location = "Modelica.Blocks.Sources.Constant"
            self.target_name = "const" + str(random.randint(1, 100))
            self.k = self.add_parameter(name="k", value=1.0)
            pass
