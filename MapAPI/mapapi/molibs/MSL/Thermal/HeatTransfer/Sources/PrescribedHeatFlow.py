# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class PrescribedHeatFlow(MapHierarchy.MapComponent):
    def init_me(self):
        self.Q_flow = self.add_connector(name="Q_flow",type="Real")
        self.port = self.add_connector(name="port",type="HeatPort")
        self.target_location = "Modelica.Thermal.HeatTransfer.Sources.PrescribedHeatFlow"			

