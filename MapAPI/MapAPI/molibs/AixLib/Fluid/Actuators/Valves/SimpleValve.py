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

    def pid_controller(self,thermal_zone=None):

        from mapapi.molibs.MSL.Blocks.Continuous.LimPID import LimPID

        ctrl = LimPID(self.project, self.hierarchy_node, self)
        ctrl.init_me()
        self.project.buildings[0].hvac_components_mod.append(ctrl)
        ctrl.measure_temperature(thermal_zone.internalGainsConv)
        #ctrl.measure_temperature(thermal_zone)
        ctrl.input_constant(setpoint=293.15)

        self.add_connection(self.opening, ctrl.y)

        pass
