# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class RelationRadiationConvection(MapHierarchy.MapComponent):
    def init_me(self):
        self.heatPort = self.add_connector(name="heatPort",type="HeatPort")
        self.heatPortCv = self.add_connector(name="heatPortCv",type="HeatPort")
        self.heatPortLw = self.add_connector(name="heatPortLw",type="HeatPort")
        self.target_location = "BuildingSystems.Buildings.BaseClasses.RelationRadiationConvection"			
		
		
