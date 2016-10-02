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
        map_sim = self.hierarchy_node.getMappedComponents()
        self.target_location = map_sim[0].getTargetLocation()
        prop_list = map_sim[0].getMappedPropertyList()
        self.arrange_parameters(prop_list)

    def pid_control(self, thermal_zone):
        """function for temperature PID controlled valve with measured value
        from AixLib Thermal zone. Intended use with radiator"""

        map_sim = self.hierarchy_node.getMappedComponents()
        for i in range(map_sim.size()):
            if map_sim[i].getTargetLocation() == \
                    "Modelica.Blocks.Continuous.LimPID":
                map_pid = map_sim[i]
            elif map_sim[i].getTargetLocation() == \
                    'Modelica.Blocks.Sources.Constant':
                map_const = map_sim[i]
            elif map_sim[i].getTargetLocation() == \
                    'Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor':
                map_sens = map_sim[i]

        from mapapi.molibs.MSL.Blocks.Continuous.LimPID import LimPID
        pid = LimPID(self.project,
                     map_pid,
                     self)
        pid.init_me()
        pid.mapp_me()
        pid.target_name = "pid" + "_" + self.target_name
        self.add_connection(self.opening, pid.y)
        self.project.mod_components.append(pid)

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)
        const.init_me()
        pid.mapp_me()
        const.target_name = "setTemp" + "_" + self.target_name
        const.add_connection(const.y, pid.u_s)
        self.project.mod_components.append(const)

        from mapapi.molibs.MSL.Thermal.HeatTransfer.Sensors.TemperatureSensor \
            import TemperatureSensor

        sens = TemperatureSensor(self.project, map_sens, self)
        sens.init_me()
        sens.mapp_me()
        sens.add_connection(sens.T, pid.u_m)
        sens.add_connection(sens.port, thermal_zone.internalGainsConv)
        self.project.mod_components.append(sens)


