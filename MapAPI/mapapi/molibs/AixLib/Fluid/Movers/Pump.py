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
        self.IsNight = self.add_connector("IsNight", "Boolean")

        return True

    def mapp_me(self):
        self.target_name += "pump"
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except RuntimeError:
            raise ("could not apply mapping", self)

        try:
            table = [(0, 0)]
            pump_child = self.hierarchy_node.getChildList()
            for a in range(pump_child.size()):
                if pump_child[a].ClassType() == "SimTimeSeriesSchedule_Year_Default":
                    year_child = pump_child[a].getChildList()
                    for b in range(len(year_child)):
                        if year_child[b].ClassType() == \
                                "SimTimeSeriesSchedule_Week_Daily":
                            week_child = year_child[b].getChildList()
                            for c in range(len(week_child)):
                                sim_obje = week_child[c].getSimModelObject()
                                for i in range(sim_obje.SimTimeSeriesSched_Time_1_144().get().stringItem().sizeInt()):
                                    str_until = \
                                        sim_obje.SimTimeSeriesSched_Time_1_144().get().stringItem().getValue(i)
                                    end_time = (int((str_until.replace("Until:", "").replace(":", ""))) / 100) * 3600
                                    value = sim_obje.SimTimeSeriesSched_ValUntilTime_1_144().getNumberList()[i]
                                    table.append((end_time, value))
                                self.add_night_set_back(table)
        except:
            import warnings
            warnings.warn("Could not apply controller to pump",self)


    def add_night_set_back(self, time_table):
        '''adds a constants Boolean pulse for night setback'''

        from mapapi.molibs.MSL.Blocks.Sources.CombiTimeTable import \
            CombiTimeTable

        combi_time = CombiTimeTable(
                self.project,
                None,
                self)
        combi_time.init_me()
        combi_time.mapp_me()
        combi_time.target_name = "combi_time" + "_" + self.target_name
        combi_time.table.value = time_table
        self.project.mod_components.append(combi_time)

        from mapapi.molibs.MSL.Blocks.Math.RealToBoolean import RealToBoolean

        r_to_b = RealToBoolean(
                    self.project,
                    None,
                    self)
        r_to_b.init_me()
        r_to_b.mapp_me()
        r_to_b.target_name = "reatToBool" + "_" + self.target_name
        r_to_b.add_connection(r_to_b.u, combi_time.y)
        r_to_b.add_connection(r_to_b.y, self.IsNight)
        self.project.mod_components.append(r_to_b)
