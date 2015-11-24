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

    def __init__(self, parent=None):

        super(SimpleValve, self).__init__(parent)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.opening = self.add_connector("opening", "RealInput")

    def ctrl_P_room(self,  project, thermal_zone, t, k, yMax=1, yMin=0):
        """adds a Pcontroller to valve, works with AixLib components
        room temperature is control variable
        t is set temperature
        k is gain of controller
        yMax maximum output 
        yMin minimum output
        """

        self.map_control = MapHierarchy.MapControl(self)
        """constant, define Template for often used components"""
        self.map_control.control_objects.append(MapHierarchy.MoObject(self))
        self.map_control.control_objects[-1].target_location = \
                                            "Modelica.Blocks.Sources.Constant"
        self.map_control.control_objects[-1].target_name = "setTemp"
        self.map_control.control_objects[-1].add_property("k", t)
        const_y = self.map_control.control_objects[-1].add_connector("y",
                                                               "RealOutput")
        project.systems.append(self.map_control.control_objects[-1])
        """sensor, define Template for often used components"""
        self.map_control.control_objects.append(MapHierarchy.MoObject(self))
        self.map_control.control_objects[-1].target_location = \
                    "Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor"
        self.map_control.control_objects[-1].target_name = "setTemp"
        T = self.map_control.control_objects[-1].add_connector("T",
                                                               "RealOutput")
        port = self.map_control.control_objects[-1].add_connector("port",
                                                               "HeatPort")
        """P controller"""
        self.map_control.control_objects.append(MapHierarchy.MoObject(self))
        self.map_control.control_objects[-1].target_location = \
                    "Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor"
        self.map_control.control_objects[-1].target_name = "setTemp"
        self.map_control.control_objects[-1].add_property("k", k)
        self.map_control.control_objects[-1].add_property("yMax", yMax)
        self.map_control.control_objects[-1].add_property("yMin", yMin)
        p_y = self.map_control.control_objects[-1].add_connector("y",
                                                               "RealOutput")
        u_s = self.map_control.control_objects[-1].add_connector("u_s",
                                                               "RealInput")
        u_m = self.map_control.control_objects[-1].add_connector("u_m",
                                                               "RealInput")
                                  

        self.add_connection(project, const_y, u_s)
        self.add_connection(project, port, thermal_zone.internalGainsConv)
        self.add_connection(project, T, u_m)
        self.add_connection(project, p_y, self.opening)
        