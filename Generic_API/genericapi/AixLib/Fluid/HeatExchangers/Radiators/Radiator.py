# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(Radiator, self).__init__(project, sim_object, parent)
        self.sim_ref_id = [sim_object.getSimModelObject().RefId()]
        boiler_parent = sim_object.getParentList()
        for a in range(boiler_parent.size()):
            if boiler_parent[a].ClassType() == "SimGroup_SpatialZoneGroup_ZoneHvacGroup" and \
               boiler_parent[a].getSimModelObject().IsTemplateObject().getValue() == False:
                hvac_loop = boiler_parent[a].getSimModelObject().SimModelName().getValue()
                print(hvac_loop,"zbd", self.parent.hvac_component_group)
                self.parent.hvac_component_group[hvac_loop].append(self)


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