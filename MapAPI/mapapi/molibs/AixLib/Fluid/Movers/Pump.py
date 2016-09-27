# -*- coding: utf-8 -*-
"""
Module for AixLib.Fluid.Movers.Pump

containes the python class Pump, as well as a function to instantiate classes
from the corresponding SimModel instances.
"""

import mapapi.MapClasses as MapHierarchy
import SimTimeSeriesSchedule_Year_Default
import SimTimeSeriesSchedule_Week_Daily
import SimTimeSeriesSchedule_Day_Interval

class Pump(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.fluid_two_port()
        return True

    def mapp_me(self):
        self.target_name += "pump"
        map_sim = self.hierarchy_node.getMappedComponents()
#        self.target_location = map_sim[0].getTargetLocation()
#        prop_list = map_sim[0].getMappedPropertyList()
#        self.arrange_parameters(prop_list)
        self.IsNight = self.add_connector("IsNight", "Boolean")

        #self.add_night_set_back()

    def con_expansion_vessel(self, v_start):
        from mapapi.molibs.AixLib.Fluid.Storage.ExpansionVessel import \
            ExpansionVessel

        exp_ves = ExpansionVessel(self.project, self.hierarchy_node, self)
        exp_ves.init_me()
        exp_ves.V_start.value = v_start

        self.add_connection(self.port_a, exp_ves.port_a)

    def add_night_set_back(self, width=86400, period=43200, startTime=0):
        '''adds a constants Boolean pulse for night setback'''
        pump_child = self.hierarchy_node.getChildList()
        for x in range(len(pump_child)):
            if pump_child[x].ClassType() == "SimTimeSeriesSchedule_Year_Default":
                year_child = pump_child[x].getChildList()
                for y in range(len(year_child)):
                    if year_child[y].ClassType() == \
                            "SimTimeSeriesSchedule_Week_Daily":
                        week_child = year_child[y].getChildList()
                        for z in range(len(week_child)):
                            sim_obje = week_child[z].getSimModelObject()
                            day_child = week_child[z].getChildList()
                            for a in range(len(day_child)):
                                print(day_child[a])
                            print(sim_obje)
                            print(sim_obje.SimTimeSeriesSched_Time_1_144()
                                  .get().stringItem().getValue(0))

        from mapapi.molibs.MSL.Blocks.Sources.BooleanPulse import BooleanPulse
        pulse = BooleanPulse(self.project, self.hierarchy_node, self)
        pulse.init_me()
        pulse.target_name = "nightSetBack"+"_"+self.target_name
        pulse.width.value = width
        pulse.period.value = period
        pulse.startTime.value = startTime
        self.add_connection(self.IsNight, pulse.y)
        self.project.buildings[0].hvac_components_mod.append(pulse)
