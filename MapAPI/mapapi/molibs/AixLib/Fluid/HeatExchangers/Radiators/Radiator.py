# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy
import warnings
class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def init_me(self):

        self.fluid_two_port()
        return True

    def mapp_me(self):
        self.target_name += "radiator"
        map_sim = self.hierarchy_node.getMappedComponents()

        self.target_location = map_sim[0].getTargetLocation()
        prop_list = map_sim[0].getMappedPropertyList()
        self.arrange_parameters(prop_list)

        self.convPort = self.add_connector(name="convPort", type="HeatPort",
                                           dimension=1, hierarchy_node=None)
        self.radPort = self.add_connector(name="radPort", type="HeatPort",
                                          dimension=1, hierarchy_node=None)

        rad_parent = self.hierarchy_node.getParentList()
        for a in range(rad_parent.size()):
            if rad_parent[a].ClassType() == "SimList_EquipmentList_ZoneHvac":
                eq_parent = rad_parent[a].getParentList()
                for b in range(eq_parent.size()):
                    for tz in self.project.buildings[0].thermal_zones:
                        if tz.sim_ref_id == eq_parent[b].getSimModelObject().RefId():
                            self.parent = tz
                            self.connect_zone(self.parent)
                        else:
                            warnings.warn("Could not connect to zone")

        for con_in in self.connected_in:
            if con_in.ClassType() == 'SimFlowController_Valve_TemperingValve':
                for comp in self.project.hvac_components:
                    if comp.sim_ref_id == con_in.getSimModelObject().RefId():
                        #try:
                        self.pid_ctrl_valve(self.parent, comp)
                        #except:
                        #    warnings.warn("Could not apply controller")

    def pid_ctrl_valve(self, thermal_zone, valve_component):
        """

        Parameters
        ----------
        thermal_zone

        valve component

        Returns
        -------

        """

        valve_component.pid_control(thermal_zone)

    def connect_zone(self, thermal_zone):

        self.add_connection(self.convPort, thermal_zone.internalGainsConv)
        self.add_connection(self.radPort, thermal_zone.internalGainsRad)
