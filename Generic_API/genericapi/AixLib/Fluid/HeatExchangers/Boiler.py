# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy


class Boiler(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Boiler
    """

    def __init__(self, project, sim_object, parent):

        super(Boiler, self).__init__(project, sim_object, parent)
        
        self.sim_ref_id = [sim_object.getSimModelObject().RefId()]

        boiler_parent = sim_object.getParentList()
        check_bldg_hvac = ["SimSystem_HvacHotWater_Supply"]
        self.add_to_loop(parent_list=boiler_parent,
                         check_list=check_bldg_hvac)
        self.target_location = "AixLib.Fluid.HeatExchangers.Boiler"

        q_value = self.sim_object.getSimModelObject().SimFlowPlant_NomCap(
            ).getValue()
        self.Q_flow_max = self.add_parameter(name="Q_flow_max",
                                             value=q_value)
        self.Volume = self.add_parameter(name="Volume",
                                         value=0.00999999977648)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.T_set = self.add_connector("T_set", "Real")

        self.ctrl_const_flow_temp(set_temp=350.0)

    def ctrl_const_flow_temp(self, set_temp):
        """adds a constant flow temperature to the Boiler
        Parameters:

            set_temp
                    is set temperature
        """
        from genericapi.MSL.Blocks.Sources.Constant import Constant

        const = Constant(self.project, None, self)
        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(const)
        const.target_name = "setTemp"+"_"+self.target_name
        const.k.value = set_temp
        self.parent.hvac_component_group[self.hvac_loop].append(const)
        self.add_connection(self.T_set, const.y)
