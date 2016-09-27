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
        self.target_location = "Modelica.Blocks.Sources.CombiTimeTable"
        self.target_name = "time_table"+str(random.randint(1, 100))
        self.tableOnFile = self.add_parameter(name="tableOnFile", value="false")
        self.table = self.add_parameter(name="table", value=[(0, 0), (86400, 0)])
        self.extrapolation = self.add_parameter(
            name="extrapolation",
            value="Modelica.Blocks.Types.Extrapolation.Periodic")
        self.y = self.add_connector(name="y",type="Real", dimension=1)
        return True

    def mapp_me(self):
        pass
