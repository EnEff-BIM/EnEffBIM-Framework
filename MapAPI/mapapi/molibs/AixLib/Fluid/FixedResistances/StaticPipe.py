# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class StaticPipe(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.FixedResistances.Pipe
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
            self.target_location = "AixLib.Fluid.FixedResistances.StaticPipe"
            self.add_parameter(name="D", value="0.014")
            self.add_parameter(name="l", value="0.05")
            self.add_parameter(name="e", value="2.5e-5")
            pass


