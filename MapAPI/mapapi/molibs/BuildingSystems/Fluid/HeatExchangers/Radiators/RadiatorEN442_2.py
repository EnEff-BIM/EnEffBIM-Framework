# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy
import warnings
class RadiatorEN442_2(MapHierarchy.MapComponent):
    """Representation of BuildingSystems.Fluid.HeatExchangers.Radiators
    .RadiatorEN442_2
    """
    
    def init_me(self):

        self.fluid_two_port()
        self.heatPortCon = self.add_connector(name="heatPortCon", type="HeatPort",
                                           dimension=1, hierarchy_node=None)
        self.heatPortRad = self.add_connector(name="heatPortRad",
                                             type="HeatPort",
                                          dimension=1, hierarchy_node=None)
        return True

    def mapp_me(self):
        self.target_name += "radiator"
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except RuntimeError:
            raise ("could not apply mapping")

        rad_parent = self.hierarchy_node.getParentList()
        try:
            for a in range(rad_parent.size()):
                if rad_parent[a].ClassType() == "SimList_EquipmentList_ZoneHvac":
                    eq_parent = rad_parent[a].getParentList()
                    for b in range(eq_parent.size()):
                        for tz in self.project.buildings[0].thermal_zones:
                            if tz.sim_ref_id == eq_parent[b].getSimModelObject().RefId():
                                self.parent = tz
                                self.connect_zone(self.parent)
        except Exception:
            warnings.warn("Could not connect radiator to zone")
            pass

        try:
            for con_in in self.connected_in:
                if con_in.ClassType() == 'SimFlowController_Valve_TemperingValve':
                    for comp in self.project.hvac_components:
                        if comp.sim_ref_id == con_in.getSimModelObject().RefId():
                            #try:
                            self.pid_ctrl_valve(self.parent, comp)
        except Exception:
            warnings.warn("Could not apply valve to radiator")
            pass

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

        self.add_connection(self.heatPortCon, thermal_zone.internalGainsConv)
        self.add_connection(self.heatPortRad, thermal_zone.internalGainsRad)
