# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class FixedResistanceDpM(MapHierarchy.MapComponent):
    """Representation of BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM
    """

    def init_me(self):

        self.fluid_two_port()
        return True


    def mapp_me(self):

        self.target_name += "pipe"
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, probably because class "
                          "SimFlowFitting_Default_Default or "
                          "SimFlowController_Valve_Default are used, "
                          "that are not part of mapping rules. We are using "
                          "default values!")
            warnings.warn(warning_text)
            self.target_location = \
                "BuildingSystems.Fluid.FixedResistances.FixedResistanceDpM"
            pass


