# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy


class ThermalZone(MapHierarchy.MapThermalZone):
    """Representation of AixLib.Building.LowOrder.ThermalZone
    """
"""
    def __init__(self, project, sim_object, parent):

        super(ThermalZone, self).__init__(project, sim_object)

        self.internalGainsConv = self.add_connector(name="internalGainsConv",
                                                    type="HeatPort")
        self.internalGainsRad = self.add_connector(name="internalGainsRad",
                                                   type="HeatPort")
        self.infiltrationTemperature = self.add_connector(
                                        name="infiltrationTemperature",
                                        type="RealInput")
        self.infiltrationRate = self.add_connector(name="infiltrationRate",
                                                   type="RealInput")
        self.internalGains = self.add_connector(name="internalGains",
                                                type="RealInput",
                                                dimension=3)
        self.solarRad_in = self.add_connector(name="solarRad_in",
                                              type="SolarRad ")

        for key, value in self.hvac_component_group.items():
            for item in value:
                if type(item).__name__ == "Radiator":
                    self.connect_to_radiator_aixlib(item)
                else:
                    pass

    def connect_to_radiator_aixlib(self, radiator):

        self.add_connection(self.internalGainsConv, radiator.convPort)
        self.add_connection(self.internalGainsRad, radiator.radPort)
        self.add_connection(self.internalGainsConv,
                            radiator.map_control.control_connector)

"""