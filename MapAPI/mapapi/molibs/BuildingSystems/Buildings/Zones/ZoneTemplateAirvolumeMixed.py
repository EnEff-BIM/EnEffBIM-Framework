# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class ZoneTemplateAirvolumeMixed(MapHierarchy.MapThermalZone):
    """Representation of Building for BuildingSystems
    """
	
    def init_me(self):
        self.toConstructionPorts1 = self.add_connector(name="toConstructionPorts1", type="Real",
                                        dimension=len(self.space_boundaries))	
        self.TAirAmb = self.add_connector(name="TAirAmb",type="Real")
        self.xAirAmb = self.add_connector(name="xAirAmb ",type="Real")
        self.T_setHeating = self.add_connector(name="T_setHeating",type="Real")										  
        self.T_setCooling = self.add_connector(name="T_setCooling",type="Real")
        self.airchange = self.add_connector(name="airchange",type="Real")										
        self.conHeatSourcesPorts = self.add_connector(name="conHeatSourcesPorts",
                                                            type="HeatPort",dimension=1)	
        self.radHeatSourcesPorts = self.add_connector(name="radHeatSourcesPorts",
                                                            type="HeatPort",dimension=1)	
        self.Q_flow_heating = self.add_connector(name="Q_flow_heating",type="HeatPort")										
        self.Q_flow_cooling = self.add_connector(name="Q_flow_cooling",type="HeatPort")		

	
    def mapp_me(self):
        self.target_name = self.sim_ref_id	
        self.target_location = "BuildingSystems.Buildings.Zones.ZoneTemplateAirvolumeMixed"
        self.V = self.add_parameter(name="V",value=self.volume)
        self.height = self.add_parameter(name="height",value=self.height/1000)
        self.nConstructions1 = self.add_parameter(name="nConstructions1",
                                                value=len(self.space_boundaries))
        self.heatSources = self.add_parameter(name="heatSources",value="true")														
        self.nHeatSources = self.add_parameter(name="nHeatSources",value=1)												