# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy

def instantiate_radiator(project, sim_object, parent, loop):

    return Radiator(project, sim_object, parent, loop)


class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def __init__(self, project, sim_object, parent, loop):
        
        super(Radiator, self).__init__(project, sim_object, parent)
        self.sim_ref_id = [sim_object.getSimModelObject().RefId()]
        radiator_parent = sim_object.getParentList()
        for d in range(radiator_parent.size()):

            if radiator_parent[d].ClassType() == "SimGroup_SpatialZoneGroup_ZoneHvacGroup": #iterate thermal_zone hvac on bldg level
                loop1 = radiator_parent[d].getSimModelObject().SimModelName().getValue()

        self.parent.hvac_component_group[loop1].append(self)
        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.convPort = self.add_connector("convPort", "HeatPort")
        self.radPort = self.add_connector("radPort", "HeatPort")
        
        
    def connect_tz_AixLib(self, thermal_zone):
        """connect AixLib Radiator to AixLib ThermalZone"""
        self.add_connection(self.project,
                            self.convPort,
                            thermal_zone.internalGainsConv)
        self.add_connection(self.project,
                            self.radPort,
                            thermal_zone.internalGainsRad)
                            
    def connect_tz_Buildings(self, thermal_zone):
        """just a code example, will not work"""
        
        self.add_connection(self.project,
                            self.convPort,
                            thermal_zone.heaPorAir)
        self.add_connection(self.project,
                            self.radPort,
                            thermal_zone.heaPorRad)