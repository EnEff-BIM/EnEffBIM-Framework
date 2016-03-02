# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 17:36:54 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy


class SimpleValve(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Actuators.Valves.SimpleValve
    """

    def __init__(self, project, sim_object, parent):

        super(SimpleValve, self).__init__(project, sim_object, parent)

        valve_parent = sim_object.getParentList()
        check_valve = ["SimGroup_SpatialZoneGroup_ZoneHvacGroup",
                       "SimSystem_HvacHotWater_Supply"]

        self.target_location = "AixLib.Fluid.Actuators.Valves.SimpleValve"
        self.target_name = self.parent.target_name+"_valve"

        self.add_to_loop(parent_list=valve_parent,
                         check_list=check_valve)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.opening = self.add_connector("opening", "Real")

    def ctrl_p_room(self,
                    set_temp=293.15,
                    gain=0.5,
                    y_min=0,
                    y_max=1):
        """adds a Pcontroller to valve, works with AixLib components
        room temperature is control variable
        Parameters:

            set_temp
                is set temperature
            gain
                is gain of controller
            y_min
                maximum output
            y_max
                minimum output
        """

        self.map_control = MapHierarchy.MapControl(self)

        from genericapi.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project, None, self)
        const.target_name = "setTemp"+"_"+self.parent.target_name
        const.k.value = set_temp
        self.map_control.control_objects.append(const)
        self.parent.parent.hvac_component_group[self.hvac_loop].append(
            const)

        """sensor"""
        from genericapi.MSL.Thermal.HeatTransfer.Sensors.TemperatureSensor \
            import TemperatureSensor
        sens_t = TemperatureSensor(project=self.project,
                                   sim_object=None,
                                   parent=self)
        self.map_control.control_objects.append(sens_t)
        self.map_control.control_connector = sens_t.port
        self.parent.parent.hvac_component_group[self.hvac_loop].append(sens_t)

        """P controller"""
        from genericapi.MSL.Blocks.Continuous.LimPID import LimPID
        p_ctrl = LimPID(project=self.project,
                        sim_object=None,
                        parent=self)
        p_ctrl.k = gain
        p_ctrl.yMax = y_max
        p_ctrl.yMin = y_min
        p_ctrl.add_connection(p_ctrl.u_s, const.y)
        p_ctrl.add_connection(p_ctrl.u_m, sens_t.T)
        p_ctrl.add_connection(p_ctrl.y, self.opening)
        self.map_control.control_objects.append(p_ctrl)
        self.parent.parent.hvac_component_group[self.hvac_loop].append(p_ctrl)
