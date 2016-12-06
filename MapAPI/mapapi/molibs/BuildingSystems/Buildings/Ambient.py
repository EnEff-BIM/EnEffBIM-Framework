# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class Ambient(MapHierarchy.MapComponent):
    """Representation of Building for BuildingSystems
    """
	
    def init_me(self):
        self.toSurfacePorts = self.add_connector(name="toSurfacePorts",
                                                   type="HeatPort")
        self.toAirPorts = self.add_connector(name="toAirPorts",
                                                   type="HeatPort")
        self.TAirRef = self.add_connector(name="TAirRef",type="Real")
        self.xAir = self.add_connector(name="xAir",type="Real")

    def mapp_me(self,nSurfaces):
        self.target_name = "ambient"	
        self.target_location = "BuildingSystems.Buildings.Ambient"	
        self.nSurfaces = self.add_parameter(name="nSurfaces",value=nSurfaces)
        self.weatherDataFile = self.add_parameter(name="weatherDataFile",value="BuildingSystems.Climate.WeatherDataMeteonorm.WeatherDataFile_Germany_Berlin()")
		