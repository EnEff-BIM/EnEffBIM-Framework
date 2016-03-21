# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 17:36:54 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy


class SimpleValve(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Actuators.Valves.SimpleValve
    """

    def init_me(self):
        self.target_location = "AixLib.Fluid.Actuators.Valves.SimpleValve"
        self.target_name = self.parent.target_name+"_valve"

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.opening = self.add_connector("opening", "Real")
        self.m_flow_small = self.add_parameter(name="m_flow_small",
                                               value=0.01)

