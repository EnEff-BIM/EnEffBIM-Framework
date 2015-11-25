# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 17:36:54 2015

@author: pre
"""

import os
import sys
import tools.utilities as ut

modulePath = ut.get_full_path("Generic_API/MapAPI/MapHierarchy")

os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
# add modulePath to Python Path
sys.path.append(modulePath)


import MapHierarchy 

class SimpleValve(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Actuators.Valves.SimpleValve
    """

    def __init__(self, parent, project):

        super(SimpleValve, self).__init__(parent, project)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.opening = self.add_connector("opening", "RealInput")

    def ctrl_P_room(self, thermal_zone, t, k, yMax=1, yMin=0):
        """adds a Pcontroller to valve, works with AixLib components
        room temperature is control variable
        t is set temperature
        k is gain of controller
        yMax maximum output 
        yMin minimum output
        """

        self.map_control = MapHierarchy.MapControl(self)
        """constant, define Template for often used components"""
        from tools.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self, self.project)
        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(const)
        const.target_name = "setTemp"
        const.add_property("k", t)

        self.project.systems.append(const)


        """sensor, define Template for often used components"""
        self.map_control.control_objects.append(MapHierarchy.MoObject(self))
        self.map_control.control_objects[-1].target_location = \
                    "Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor"
        self.map_control.control_objects[-1].target_name = "setTemp"
        T = self.map_control.control_objects[-1].add_connector("T",
                                                               "RealOutput")
        port = self.map_control.control_objects[-1].add_connector("port",
                                                               "HeatPort")
        self.project.systems.append(self.map_control.control_objects[-1])
        """P controller"""
        from tools.MSL.Blocks.Continuous.LimPID import LimPID
        p_ctrl = LimPID(self, self.project)
        self.map_control.control_objects.append(p_ctrl)
        p_ctrl.target_name = "PIDController"
        p_ctrl.add_property("k", k)
        p_ctrl.add_property("yMax", yMax)
        p_ctrl.add_property("yMin", yMin)

        self.project.systems.append(p_ctrl)                       

        self.add_connection(const.y, p_ctrl.u_s)
        self.add_connection(port, thermal_zone.internalGainsConv)
        self.add_connection(T, p_ctrl.u_m)
        self.add_connection(p_ctrl.y, self.opening)
        