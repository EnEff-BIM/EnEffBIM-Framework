# -*- coding: utf-8 -*-
"""


containes the python class Pump, as well as a function to instantiate classes
from the corresponding SimModel instances.
"""

import mapapi.MapClasses as MapHierarchy
import SimTimeSeriesSchedule_Year_Default
import SimTimeSeriesSchedule_Week_Daily
import SimTimeSeriesSchedule_Day_Interval

class FlowControlled_dp(MapHierarchy.MapComponent):
    """Representation of BuildingSystems.Fluid.Movers.FlowControlled_dp
    """

    def init_me(self):
        self.fluid_two_port()
        self.dp_in = self.add_connector("dp_in", "Boolean")

        return True

    def mapp_me(self):
        self.target_name += "pump"
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except RuntimeError:
            raise ("could not apply mapping")

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
                                    '''there is some input needed here. you
                                    need to set the value to 0.7*5e5 and 5e5
                                    (see use case) currently its 0 and 1. You
                                    can do this in SimXML or here'''
                                    value = sim_obje.SimTimeSeriesSched_ValUntilTime_1_144().getNumberList()[i]

                                    table.append((end_time, value))
                                self.add_night_set_back(table)
        except:
            import warnings
            warnings.warn("Could not apply controller to pump")


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
        self.add_connection(self.dp_in, combi_time.y)
        self.project.mod_components.append(combi_time)
