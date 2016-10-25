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
        self.infiltrationRate = self.add_connector(name="infiltrationRate ",
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

        from teaser.project import Project
        import mapapi.molibs.AixLib.resources.simmodel_teaser as t_sim

        t_prj = Project(load_data=False)

        t_sim.load_lib_sim_model(sim_api=self.project, t_prj=t_prj)
        t_prj.calc_all_buildings(raise_errors=True)

        self.target_location = "AixLib.Building.LowOrder.ThermalZone"
        self.target_name = "thermal_zone" + "_" + self.target_name

        self.apply_teaser_parameters(t_prj)
        self.infiltration_rate(rate=0.5)
        self.internal_loads()

        self.connect_to_weather(t_prj)

    def infiltration_rate(self, rate):

        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)
        const.init_me()
        const.mapp_me()
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

    def apply_teaser_parameters(self, teaser_project):
        """adds zone paramters to framework

        Parameters
        ----------
        teaser_project: instance of teaser.project()

        Returns
        -------

        """

        thermal_zone = teaser_project.buildings[0].thermal_zones[0]
        self.records.append(MapHierarchy.MapRecord(parent=self,
                                      record_location="AixLib.DataBase.Buildings.ZoneBaseRecord",
                                      name="zoneParam"))
        rec = self.records[-1]
        rec.add_parameter(name="RRest", value=thermal_zone.r_rest_ow)
        rec.add_parameter(name="R1o", value=thermal_zone.r1_ow)
        rec.add_parameter(name="C1o", value=thermal_zone.c1_ow)
        rec.add_parameter(name="Ao", value=thermal_zone.area_ow)
        rec.add_parameter(name="alphaowi", value=thermal_zone.alpha_comb_inner_ow)
        rec.add_parameter(name="alphaowo", value=thermal_zone.alpha_comb_outer_ow)
        rec.add_parameter(name="epso", value=thermal_zone.ir_emissivity_outer_ow)
        rec.add_parameter(name="R1i", value=thermal_zone.r1_iw)
        rec.add_parameter(name="C1i", value=thermal_zone.c1_iw)
        rec.add_parameter(name="Ai", value=thermal_zone.area_iw)
        rec.add_parameter(name="Vair", value=thermal_zone.volume)
        rec.add_parameter(name="alphaiwi", value=thermal_zone.alpha_comb_inner_iw)
        rec.add_parameter(name="rhoair", value=thermal_zone.density_air)
        rec.add_parameter(name="cair", value=thermal_zone.heat_capac_air)
        rec.add_parameter(name="epsi", value=thermal_zone.ir_emissivity_inner_ow)
        rec.add_parameter(name="aowo", value=thermal_zone.solar_absorp_ow)
        rec.add_parameter(name="epsw", value=thermal_zone.ir_emissivity_win)
        rec.add_parameter(name="g", value=thermal_zone.weighted_g_value)
        rec.add_parameter(name="n", value=len(thermal_zone.tilt_wall))
        rec.add_parameter(name="weightfactorswall", value=thermal_zone.weightfactor_ow)
        rec.add_parameter(name="weightfactorswindow",
                          value=thermal_zone.weightfactor_win)
        # AixLib weightfactor ground can't be multidimensional (different in
        # Annex thats why it is a list)
        rec.add_parameter(name="weightfactorground",
                          value=thermal_zone.weightfactor_ground[0])
        # rec.add_parameter(name="temperatureground",
                         # value=thermal_zone.temperatureground) ???
        rec.add_parameter(name="Aw", value=thermal_zone.window_areas)
        rec.add_parameter(name="UWin",
                          value=thermal_zone.ua_value_win/thermal_zone.area_win)
        rec.add_parameter(name="gsunblind", value=thermal_zone.g_sunblind_list)
        if thermal_zone.inner_walls:
            value_help=True
        else:
            value_help=False
        rec.add_parameter(name="withInnerwalls", value=value_help)
        if thermal_zone.windows:
            value_help=True
        else:
            value_help=False
        rec.add_parameter(name="withWindows", value=value_help)
        if thermal_zone.outer_walls:
            value_help=True
        else:
            value_help=False
        rec.add_parameter(name="withOuterwalls", value=value_help)
        rec.add_parameter(name="RWin", value=thermal_zone.r1_win)
        rec.add_parameter(name="alphaConvWinInner", value=thermal_zone.alpha_conv_inner_win)
        rec.add_parameter(name="alphaConvWinOuter", value=thermal_zone.alpha_conv_outer_win)
        rec.add_parameter(name="awin", value=thermal_zone.solar_absorp_win)
        rec.add_parameter(name="orientationswallshorizontal",
                          value=thermal_zone.orientation_wall)

    def connect_to_weather(self, teaser_project):
        from mapapi.molibs.AixLib.Building.Components.Weather.Weather import\
            Weather
        we = Weather(self.project,
                     self.hierarchy_node,
                     self)
        teaser_bldg = teaser_project.buildings[0]
        we.init_me()
        we.mapp_me()
        we.connect_to_zone(self, teaser_bldg)
        self.project.mod_components.append(we)

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

                            break
        return table

