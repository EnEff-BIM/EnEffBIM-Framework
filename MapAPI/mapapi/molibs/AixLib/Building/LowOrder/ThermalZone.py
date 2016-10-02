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

    def mapp_me(self):

        #from teaser.project import Project
        #import teaser.data.input.simmodel_input as t_sim

        #t_prj = Project(load_data=False)

       # t_sim.load_lib_sim_model(sim_api=self.project, t_prj=t_prj)
       # t_prj.calc_all_buildings(raise_errors=True)


        self.target_location = "AixLib.Building.LowOrder.ThermalZone.ThermalZone"
        self.target_name = "thermal_zone" + "_" + self.target_name

        self.infiltration_rate(rate=0.5)
        self.internal_loads()

    def infiltration_rate(self, rate):

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)
        const.init_me()
        const.target_name = "infil" + "_" + self.target_name
        const.add_parameter('k', rate)
        const.add_connection(const.y, self.infiltrationRate)
        self.project.mod_components.append(const)

    def internal_loads(self):

        table_elect = [(0, 0)]
        table_light = [(0, 0)]
        table_people = [(0, 0)]
        zone_child = self.hierarchy_node.getChildList()
        for x in range(zone_child.size()):
            if zone_child[x].isClassType(
                    "SimTemplateZoneLoads_ZoneLoads_Default"):
                load_child = zone_child[x].getChildList()
                for z in range(load_child.size()):
                    if load_child[z].isClassType(
                            "SimInternalLoad_Equipment_Electric"):
                        table_elect = self._help_schedule(table_elect,
                                                         load_child[z])
                    if load_child[z].isClassType(
                            "SimInternalLoad_Lights_Default"):
                        table_light = self._help_schedule(table_light,
                                                        load_child[z])
                    elif load_child[z].isClassType(
                            "SimInternalLoad_People_Default"):
                        table_people = self._help_schedule(table_people,
                                                         load_child[z])

        from mapapi.molibs.MSL.Blocks.Sources.CombiTimeTable import \
            CombiTimeTable
        combi_time = CombiTimeTable(
            self.project,
            self.hierarchy_node,
            self)
        table = []
        for i, value in enumerate(table_elect):
            table.append(value)
        for i, value in enumerate(table_light):
            table[i] += (value[1],)
        for i, value in enumerate(table_people):
            table[i] += (value[1],)
        combi_time.init_me()
        combi_time.mapp_me()
        combi_time.target_name = "combi_time" + "_" + self.target_name
        combi_time.table.value = table
        combi_time.y.dimension = 3
        self.add_connection(self.internalGains, combi_time.y)
        self.project.mod_components.append(combi_time)

    def _help_schedule(self, table, hierarchy_schedule_internal):

        child = hierarchy_schedule_internal.getChildList()
        for a in range(child.size()):
            if child[a].ClassType() == "SimTimeSeriesSchedule_Year_Default":
                year_child = child[a].getChildList()
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
        return table

