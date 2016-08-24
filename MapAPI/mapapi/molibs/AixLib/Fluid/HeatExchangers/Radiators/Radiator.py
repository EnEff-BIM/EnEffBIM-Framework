# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def init_me(self):

        self.fluid_two_port()
        return True

    def mapp_me(self):

        map_sim = self.hierarchy_node.getMappedComponents()

        self.target_location = map_sim[0].getTargetLocation()
        prop_list = map_sim[0].getMappedPropertyList()
        print(prop_list)
        self.arrange_parameters(prop_list)

        self.convPort = self.add_connector(name="convPort", type="HeatPort",
                                           dimension=1, hierarchy_node=None)
        self.radPort = self.add_connector(name="radPort", type="HeatPort",
                                          dimension=1, hierarchy_node=None)
        #needs to be changed if thermalZone is implemented
        self.connect_zone(self.project.buildings[0].thermal_zones[0])

        #self.add_pipe()

    def add_pipe(self):
        from mapapi.molibs.AixLib.Fluid.FixedResitances.StaticPipe import Pipe

        pipe = Pipe(self.project, self.hierarchy_node, self)
        pipe.init_me()
        pipe.mapp_me()
        self.project.buildings[0].hvac_components_mod.append(pipe)
        self.add_connection(self.port_a, pipe.port_b)
        self.port_a = pipe.port_a
        self.connectors.append(pipe.port_a)

    def ctrl_valve(self, thermal_zone):
        from mapapi.molibs.AixLib.Fluid.Actuators.Valves.SimpleValve import \
            SimpleValve



    def connect_zone(self, thermal_zone):

        self.add_connection(self.convPort, thermal_zone.internalGainsConv)
        self.add_connection(self.radPort, thermal_zone.internalGainsRad)
        #self.ctrl_valve(thermal_zone=thermal_zone)
