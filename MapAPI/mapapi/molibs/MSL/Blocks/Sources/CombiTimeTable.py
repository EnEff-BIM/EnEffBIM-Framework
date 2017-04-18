# -*- coding: utf-8 -*-
"""
@author: pre
"""

import random

import mapapi.MapClasses as MapHierarchy


class CombiTimeTable(MapHierarchy.MapComponent):
    """Representation of MSL.Blocks.Sources.CombiTimeTable
    """

    def init_me(self):

        self.y = self.add_connector(name="y",type="Real", dimension=1)
        return True

    def mapp_me(self):
        self.target_name = "time_table" + str(random.randint(1, 100))
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, probably because class is "
                            "not defined in Mapping Rules. We are "
                            "using default values")
            warnings.warn(warning_text)
            self.target_location = "Modelica.Blocks.Sources.CombiTimeTable"

            self.tableOnFile = self.add_parameter(name="tableOnFile", value="false")
            self.table = self.add_parameter(name="table",
                                            value=[(0, 0), (86400, 0)])
            self.extrapolation = self.add_parameter(
                name="extrapolation",
                value="Modelica.Blocks.Types.Extrapolation.Periodic")
            pass
