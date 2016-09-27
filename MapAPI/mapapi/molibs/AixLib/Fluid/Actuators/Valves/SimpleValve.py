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
        self.opening = self.add_connector(name='opening', type='Real')
        return True


    def mapp_me(self):

        self.target_name += "valve"
        #map_sim = self.hierarchy_node.getMappedComponents()
        #self.target_location = map_sim[0].getTargetLocation()
        #prop_list = map_sim[0].getMappedPropertyList()
        #self.arrange_parameters(prop_list)

