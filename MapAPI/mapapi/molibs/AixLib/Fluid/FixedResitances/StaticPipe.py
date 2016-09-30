# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class Pipe(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.FixedResistances.Pipe
    """

    def init_me(self):

        self.fluid_two_port()
        return True


    def mapp_me(self):

        map_sim = self.hierarchy_node.getMappedComponents()
        self.target_name += "pipe"
        try:
            self.target_location = map_sim[0].getTargetLocation()
            prop_list = map_sim[0].getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except:
            import warnings
            warnings.warn("can't apply mapping, probably because class "
                          "SimFlowFitting_Default_Default or "
                          "SimFlowController_Valve_Default are used, "
                          "that are not part of mapping rules")
            pass
