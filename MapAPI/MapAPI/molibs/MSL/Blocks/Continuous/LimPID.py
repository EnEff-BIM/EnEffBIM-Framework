# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:26:16 2015

@author: pre
"""
import random

import mapapi.MapClasses as MapHierarchy


class LimPID(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def init_me(self):

        self.target_location = "Modelica.Blocks.Continuous.LimPID"
        self.target_name = "pidCtrl"+str(random.randint(1, 100))

        self.k = self.add_parameter(name="k", value=0.5)
        self.yMax = self.add_parameter(name="yMax", value=1)
        self.yMin = self.add_parameter(name="yMin", value=0)

        self.y = self.add_connector("y", "Real")
        self.u_s = self.add_connector("u_s", "Real")
        self.u_m = self.add_connector("u_m", "Real")

    def measure_temperature(self, heat_port_measure=None):

        from mapapi.molibs.MSL.Thermal.HeatTransfer.Sensors.TemperatureSensor\
            import TemperatureSensor

        sens = TemperatureSensor(self.project, self.hierarchy_node, self)
        sens.init_me()
        self.project.buildings[0].hvac_components_mod.append(sens)
        self.add_connection(self.u_m, sens.T)
        sens.add_connection(sens.port, heat_port_measure)

    def input_constant(self, setpoint=None):

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant

        const = Constant(self.project, self.hierarchy_node, self)
        const.init_me()
        self.project.buildings[0].hvac_components_mod.append(const)
        const.k.value = setpoint
        self.add_connection(self.u_s, const.y)




