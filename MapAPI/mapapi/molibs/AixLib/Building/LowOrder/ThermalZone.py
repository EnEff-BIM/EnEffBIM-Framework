# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy


class ThermalZone(MapHierarchy.MapThermalZone):
    """Representation of AixLib.Building.LowOrder.ThermalZone
    """

    def init_me(self):

        self.internalGainsConv = self.add_connector(name="internalGainsConv",
                                                    type="HeatPort")
        self.internalGainsRad = self.add_connector(name="internalGainsRad",
                                                   type="HeatPort")
        self.infiltrationTemperature = self.add_connector(
                                        name="infiltrationTemperature",
                                        type="Real")
        self.infiltrationRate = self.add_connector(name="infiltrationRate",
                                                   type="Real")
        self.internalGains = self.add_connector(name="internalGains",
                                                type="Real",
                                                dimension=3)
        self.solarRad_in = self.add_connector(name="solarRad_in",
                                              type="SolarRad")
        self.weather = self.add_connector(name="weather",
                                          type="Real",
                                          dimension=3)

        self.target_location = "AixLib.Building.LowOrder.ThermalZone.ThermalZone"
        self.target_name = "thermal_zone" + "_" + self.target_name
        """
        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)
        const.init_me()
        const.target_name = "infil" + "_" + self.target_name
        const.k.value = 0.5
        const.add_connection(const.y, self.infiltrationRate)
        self.project.mod_components.append(const)
        table = [(0, 0)]
        zone_child = self.hierarchy_node.getChildList()
        for a in range(zone_child.size()):
            if zone_child[a].ClassType() == "SimTimeSeriesSchedule_Year_Default":
                year_child = zone_child[a].getChildList()
                for b in range(len(year_child)):
                    if year_child[b].ClassType() == \
                            "SimTimeSeriesSchedule_Week_Daily":
                        week_child = year_child[b].getChildList()
                        for c in range(len(week_child)):
                            sim_obje = week_child[c].getSimModelObject()
                            for i in range(sim_obje.SimTimeSeriesSched_Time_1_144().get().stringItem().sizeInt()):
                                str_until = \
                                    sim_obje.SimTimeSeriesSched_Time_1_144().get().stringItem().getValue(i)
                                end_time = (int((str_until.replace("Until:","").replace(":", ""))) / 100) * 3600
                                value = \
                                    sim_obje.SimTimeSeriesSched_ValUntilTime_1_144().getNumberList()[i]
                                table.append((end_time, value))

        from mapapi.molibs.MSL.Blocks.Sources.CombiTimeTable import \
            CombiTimeTable
        combi_time = CombiTimeTable(
            self.project,
            self.hierarchy_node,
            self)
        combi_time.init_me()
        combi_time.target_name = "combi_time" + "_" + self.target_name
        combi_time.table.value = table
        self.project.mod_components.append(combi_time)

        # import teaser.Data.Input.simxml_input as teaser
        # self.teaser_parameters = teaser.api_to_teaser(self)
        """
