# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class WallThermal1DNodes(MapHierarchy.MapSpaceBoundary):

    def init_me(self):
        self.toSurfacePort_1 = self.add_connector(name="toSurfacePort_1", type="Real")
        self.toSurfacePort_2 = self.add_connector(name="toSurfacePort_2", type="Real")	
        self.TSur_1 = self.add_connector(name="TSur_1", type="Real")
        self.TSur_2 = self.add_connector(name="TSur_2", type="Real")
		
    def mapp_me(self,zone,building):
        self.target_name = self.sim_ref_id	
        self.target_location = "BuildingSystems.Buildings.Constructions.Walls.WallThermal1DNodes"
        self.show_TSur = self.add_parameter(name="show_TSur",value="true")
        if self.orientation in ["Slab","Roof"]:		
            self.angleDegAzi = self.add_parameter(name="angleDegAzi",value=0)
        else:
            self.angleDegAzi = self.add_parameter(name="angleDegAzi",value=self.orientation)            
        self.angleDegTil = self.add_parameter(name="angleDegTil",value=self.tilt)	
        self.nInnSur = self.add_parameter(name="nInnSur",value=0)
        self.height = self.add_parameter(name="height", value=zone.height.value)
        self.width  = self.add_parameter(name="width" , value=self.area/zone.height.value)
        self.constructionData  = self.add_parameter(name="constructionData" , value="ID33872", typ="redeclare")			