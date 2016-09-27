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
                        try:
                            self.ctrl_valve(self.parent, comp)
                        except:
                            warnings.warn("Could not apply controller")

    def ctrl_valve(self, thermal_zone, valve_component):
        """

        Parameters
        ----------
        thermal_zone

        valve component

        Returns
        -------

        """

        from mapapi.molibs.MSL.Blocks.Continuous.LimPID import LimPID
        pid = LimPID(self.project,
                     valve_component.hierarchy_node,
                     valve_component)
        pid.init_me()
        pid.target_name = "pid" + "_" + valve_component.target_name
        valve_component.add_connection(valve_component.opening, pid.y)
        self.project.mod_components.append(pid)

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project,
                         valve_component.hierarchy_node,
                         valve_component)
        const.init_me()
        const.target_name = "setTemp" + "_" + valve_component.target_name
        const.k.value = 293.15
        const.add_connection(const.y, pid.u_s)
        self.project.mod_components.append(const)

        from mapapi.molibs.MSL.Thermal.HeatTransfer.Sensors.TemperatureSensor \
            import TemperatureSensor

        sens = TemperatureSensor(self.project, self.hierarchy_node, self)
        sens.init_me()
        sens.add_connection(sens.T, pid.u_m)
        sens.add_connection(sens.port, thermal_zone.internalGainsConv)
        self.project.mod_components.append(sens)

    def connect_zone(self, thermal_zone):

        self.add_connection(self.convPort, thermal_zone.internalGainsConv)
        self.add_connection(self.radPort, thermal_zone.internalGainsRad)
