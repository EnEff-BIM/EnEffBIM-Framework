# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class SurfacesToAir(MapHierarchy.MapComponent):

    def init_me(self,nSurfaces_ext):
        self.toConstructionPorts = self.add_connector(name="toConstructionPorts", type="Real",
                                        dimension=nSurfaces_ext)
								
    def mapp_me(self,nSurfaces_ext):
        self.target_name = "surfacesToAmbient"	
        self.target_location = ""
        self.nSurfaces = self.add_parameter(name="nSurfaces",value=nSurfaces_ext)										