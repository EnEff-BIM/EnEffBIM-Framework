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

        return True


    def mapp_me(self):
        pass
        """
        map_sim = self.hierarchy_node.getMappedComponents()
        self.target_location = map_sim.getTargetLocation()
        prop_list = map_sim[0].getMappedPropertyList()
        self.arrange_parameters(prop_list)

        self.target_location = "AixLib.Fluid.Actuators.Valves.SimpleValve"

        from mapapi.molibs.MSL.Blocks.Continuous.LimPID import LimPID
        ctrl = LimPID(self.project, self.hierarchy_node, self)
        ctrl.init_me()
        self.project.buildings[0].hvac_components_mod.append(ctrl)
        """
