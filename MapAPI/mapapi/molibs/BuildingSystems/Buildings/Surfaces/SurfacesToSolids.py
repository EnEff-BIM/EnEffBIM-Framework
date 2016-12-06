# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class SurfacesToSolids(MapHierarchy.MapComponent):

    def init_me(self,toGround):
        self.toConstructionPorts = self.add_connector(name="toConstructionPorts", type="Real",
                                        dimension=toGround)
								
    def mapp_me(self,toGround):
        self.target_name = "surfacesToSolids"	
        self.target_location = ""
        self.nSurfaces = self.add_parameter(name="nSurfaces",value=toGround)			