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
        for a in range(boiler_parent.size()):
            if boiler_parent[a].ClassType() == "SimSystem_HvacHotWater_Supply" and \
               boiler_parent[a].getSimModelObject().IsTemplateObject().getValue() == False:
                self.hvac_loop = boiler_parent[a].getParentList()[0].getSimModelObject().SimModelName().getValue()
                self.parent.hvac_component_group[self.hvac_loop].append(self)

        self.target_location = "AixLib.Fluid.HeatExchangers.Boiler"
        self.target_name = sim_object.getSimModelObject().SimModelName().getValue()

        self.Q_flow_max = self.add_parameter(name="Q_flow_max",
                                             value=self.sim_object.getSimModelObject().SimFlowPlant_NomCap().getValue())
        self.Volume = self.add_parameter(name="Volume",
                                         value=0.00999999977648)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.T_set = self.add_connector("T_set", "Real")

        self.ctrl_const_flow_temp(t=350.0)

    def ctrl_const_flow_temp(self, t):
        """adds a constant flow temperature to the Boiler"""
        from genericapi.MSL.Blocks.Sources.Constant import Constant

        const = Constant(self.project, None, self)
        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(const)
        const.target_name = "setTemp"
        const.k.value = t
        self.parent.hvac_component_group[self.hvac_loop].append(const)
        self.add_connection(self.T_set, const.y)
