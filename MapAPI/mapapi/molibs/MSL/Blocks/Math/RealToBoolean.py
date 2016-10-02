# -*- coding: utf-8 -*-
"""
@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class RealToBoolean(MapHierarchy.MapComponent):
    """Representation of MSL.Blocks.Math.RealToBoolean
    """

    def init_me(self):

        self.u = self.add_connector(name="u", type="Real")
        self.y = self.add_connector(name="y", type="Boolean", dimension=1)
        return True

    def mapp_me(self):

        self.target_name = "realToBool" + str(random.randint(1, 100))
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, probably because class is "
                            "not defined in Mapping Rules. We are "
                            "using default values", self)
            warnings.warn(warning_text)
            self.target_location = "Modelica.Blocks.Math.RealToBoolean"
            self.target_name = "realToBool" + str(random.randint(1, 100))
            self.threshold = self.add_parameter(name="threshold", value=1.0)
            pass
