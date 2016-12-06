# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class Window(MapHierarchy.MapSpaceBoundary):

    def init_me(self):
        self.toSurfacePort_1 = self.add_connector(name="toSurfacePort_1", type="Real")
        self.toSurfacePort_2 = self.add_connector(name="toSurfacePort_2", type="Real")	
        self.TSur_1 = self.add_connector(name="TSur_1", type="Real")
        self.TSur_2 = self.add_connector(name="TSur_2", type="Real")
		
    def mapp_me(self,zone,building):
        self.target_name = self.sim_ref_id	
        self.target_location = "BuildingSystems.Buildings.Constructions.Windows.Window"
        self.show_TSur = self.add_parameter(name="show_TSur",value="true")
        self.angleDegAzi = self.add_parameter(name="angleDegAzi",value=self.orientation)
        self.angleDegTil = self.add_parameter(name="angleDegTil",value=self.tilt)
#Exact values for height and width are in general not needed... 
        self.height = self.add_parameter(name="height",value=zone.height.value)
        self.width = self.add_parameter(name="width",value=self.area/zone.height.value)			
        self.UVal = self.add_parameter(name="UVal",value=1)
        self.tauDir0 = self.add_parameter(name="tauDir0",value="constructionWindow.g")
        self.tauDif = self.add_parameter(name="tauDif",value="constructionWindow.g")			