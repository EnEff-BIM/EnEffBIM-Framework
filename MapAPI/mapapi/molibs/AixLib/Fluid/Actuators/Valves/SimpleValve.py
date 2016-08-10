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

        self.fluid_two_port()
        self.opening = self.add_connector("opening", "Real")


    def mapp_me(self):

        self.target_location = "AixLib.Fluid.Actuators.Valves.SimpleValve"

        self.m_flow_small = self.add_parameter(name="m_flow_small",
                                               value=0.01)
        from mapapi.molibs.MSL.Blocks.Continuous.LimPID import LimPID
        ctrl = LimPID(self.project, self.hierarchy_node, self)
        ctrl.init_me()
        self.project.buildings[0].hvac_components_mod.append(ctrl)

