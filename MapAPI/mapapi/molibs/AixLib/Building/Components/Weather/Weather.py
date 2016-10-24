import mapapi.MapClasses as MapHierarchy

class Weather(MapHierarchy.MapComponent):
    """Representation of AixLib.Building.LowOrder.ThermalZone
    """

    def init_me(self):

        self.SolarRadiation_OrientedSurfaces = \
            self.add_connector(name="SolarRadiation_OrientedSurfaces",
                               type="SolarRad")
        self.WeatherDataVector = \
            self.add_connector(name="WeatherDataVector",
                               type="Real")


    def mapp_me(self):
        # individual outputs for aixlib
        self.Outop = self.add_parameter(name="Outopt",
                                        value=2)
        # output of air temperature, longwave radiation (conditional!!)
        self.Air_temp = self.add_parameter(name="Air_temp",
                                           value=True)
        self.AirTemp = self.add_connector(name="AirTemp",
                                           type="Real")
        self.Sky_rad = self.add_parameter(name="Sky_rad",
                                          value=True)
        self.SkyRadiation = self.add_connector(name="SkyRadiation",
                                                type="Real")
        self.Ter_rad = self.add_parameter(name="Ter_rad",
                                          value=True)
        self.TerrestrialRadiation = self.add_connector(
            name="TerrestrialRadiation",
            type="Real")

    def connect_to_zone(self, thermal_zone, teaser_bldg):
        """

        connects the weather model to the thermal zone model and sets
        parameters for orientation and tilt accordingly

        Parameters
        ----------
        thermal_zone : MapApi.AixLib ThermalZone Object

        teaser_bldg : instance of teaser bldg that computes parameters
        """
        # apply orientation and tilt information
        self.records.append(MapHierarchy.MapRecord(
            parent=self,
            record_location="AixLib.DataBase.Weather.SurfaceOrientation.SurfaceOrientationBaseDataDefinition",
            name="SOD"))
        rec = self.records[-1]
        rec.add_parameter(name="nSurfaces", value=len(
            teaser_bldg.orientation_bldg))
        rec.add_parameter(name="name",
                          value=[str(name_orient) for name_orient in
                                 teaser_bldg.orientation_bldg])
        rec.add_parameter(name="Azimut",
                          value=self._convert_azimut(teaser_bldg.orientation_bldg))
        rec.add_parameter(name="Tilt",
                          value=self._convert_azimut(
                              teaser_bldg.tilt_bldg))

        # apply connections to thermal_zone

        self.add_connection(self.AirTemp, thermal_zone.weather, index_b=1)
        self.add_connection(self.SkyRadiation, thermal_zone.weather, index_b=2)
        self.add_connection(self.TerrestrialRadiation, thermal_zone.weather,
                            index_b=3)
        self.add_connection(self.AirTemp, thermal_zone.infiltrationRate)
        self.add_connection(self.SolarRadiation_OrientedSurfaces,
                            thermal_zone.solarRad_in)


    def _convert_azimut(self, orientation_list):
        """
        converts TEASER orientation to AixLib Azimut
        Parameters
        ----------
        orientation_list: list of floats defining the orientation in TEASER

        Returns
        -------

        azimut_list : list of floats defining the orientation in AixLib model

        """

        azimut_list = []
        for element in orientation_list:
            if 0 < element < 360:
                azimut_list.append(-180.0 + element)
            elif element == 0:
                azimut_list.append(180.0)
            elif element == -1:
                azimut_list.append(0.0)
            elif element == -2:
                azimut_list.append(0.0)

        return azimut_list






