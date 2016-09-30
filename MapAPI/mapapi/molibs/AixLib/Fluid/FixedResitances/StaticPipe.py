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

        if self.hierarchy_node.isClassType("SimFlowSegment_Pipe_Indoor"):
            self.target_name += "pipe"
            self.target_location = map_sim[0].getTargetLocation()
            prop_list = map_sim[0].getMappedPropertyList()
            self.arrange_parameters(prop_list)

        elif self.hierarchy_node.isClassType("SimFlowFitting_Default_Default"):
            self.target_name += "fitting"
            self.target_location = map_sim[0].getTargetLocation()
            self.add_parameter(name="D", value="0.014")
            self.add_parameter(name="l", value="0.05")
            self.add_parameter(name="e", value="2.5e-5")

        elif self.hierarchy_node.isClassType("SimFlowController_Valve_Default"):
            self.target_name += "staticvalve"
            self.target_location = "AixLib.HVAC.Pipes.Pipe"
            self.add_parameter(name="D", value="0.014")
            self.add_parameter(name="l", value="0.05")
            self.add_parameter(name="e", value="2.5e-5")