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
                hvac_loop = boiler_parent[a].getParentList()[0].getSimModelObject().SimModelName().getValue()
                self.parent.hvac_component_group[hvac_loop].append(self)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.T_set = self.add_connector("T_set", "RealInput")

    def ctrl_const_flow_temp(self, t):
        """adds a constant flow temperature to the Boiler"""
        from tools.MSL.Blocks.Sources.Constant import Constant

        const = Constant(self, self.project)
        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(const)
        const.target_name = "setTemp"
        const.add_property("k", t)
        self.project.systems.append(const)
        self.add_connection(const.y, self.T_set)
