# -*- coding: utf-8 -*-
"""
@author: crt
"""
import MoCore as Core

class Ambient(Core.MoObject):
    """
    Representation of Building for BuildingSystems
    """

    def init_me(self):
        self.toSurfacePorts = self.add_connector(name="toSurfacePorts",type="HeatPort")
        self.toAirPorts = self.add_connector(name="toAirPorts",type="HeatPort")
        self.TAirRef = self.add_connector(name="TAirRef",type="Real")
        self.xAir = self.add_connector(name="xAir",type="Real")
        self.target_name = "ambient"
        self.target_location = "BuildingSystems.Buildings.Ambient"


    def mapp_me(self,data):
        nSurfaces = 8
        self.nSurfaces = self.add_parameter(name="nSurfaces",value=nSurfaces)
        self.weatherDataFile = self.add_parameter(name="weatherDataFile",value="BuildingSystems.Climate.WeatherDataMeteonorm.WeatherDataFile_Germany_Berlin()")
