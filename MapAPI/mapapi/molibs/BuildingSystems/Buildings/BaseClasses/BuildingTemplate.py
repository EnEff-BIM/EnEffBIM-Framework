# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class BuildingTemplate(MapHierarchy.MapComponent):
    """Representation of Building for BuildingSystems
    """

    def init_me(self,building):
        self.nZones = self.add_parameter(name="nZones",
                                        value=len(building.thermal_zones))	
        self.TAirAmb = self.add_connector(name="TAirAmb",type="Real")
        self.xAirAmb = self.add_connector(name="xAirAmb",type="Real")
        self.T_setHeating = self.add_connector(name="T_setHeating",
                                          type="Real",
                                          dimension=self.nZones.value)												  
        self.TSur = self.add_connector(name="TSur",
                                          type="Real",
                                          dimension=building.pre_nSurfaces)										  
        self.T_setCooling = self.add_connector(name="T_setCooling",
                                          type="Real",
                                          dimension=self.nZones.value)
        self.airchange = self.add_connector(name="airchange",
                                          type="Real",
                                          dimension=self.nZones.value)										
        self.conHeatSourcesPorts = self.add_connector(name="conHeatSourcesPorts",
                                                            type="HeatPort",dimension=self.nZones.value)	
        self.radHeatSourcesPorts = self.add_connector(name="radHeatSourcesPorts",
                                                            type="HeatPort",dimension=self.nZones.value)	
        self.Q_flow_heating = self.add_connector(name="Q_flow_heating",
                                                            type="HeatPort",dimension=self.nZones.value)																			
        self.Q_flow_cooling = self.add_connector(name="Q_flow_cooling",type="HeatPort",dimension=self.nZones.value)
															
        self.nSurfaces_int = building.nSurfaces_int
        self.nSurfaces_ext = building.nSurfaces_ext
        self.SolidToGround = building.SolidToGround		
		
        from mapapi.molibs.BuildingSystems.Buildings.Surfaces.SurfacesToAir import SurfacesToAir  	
        self.surfacesToAmbient = SurfacesToAir(self.project,self.hierarchy_node,self)
        self.surfacesToAmbient.init_me(self.nSurfaces_ext-self.SolidToGround)
        self.surfacesToAmbient.mapp_me(self.nSurfaces_ext-self.SolidToGround)			
        self.hvac_components_mod.append(self.surfacesToAmbient)
	
        from mapapi.molibs.BuildingSystems.Buildings.Surfaces.SurfacesToSolids import SurfacesToSolids  	
        self.surfacesToSolids = SurfacesToSolids(self.project,self.hierarchy_node,self)
        self.surfacesToSolids.init_me(self.SolidToGround)
        self.surfacesToSolids.mapp_me(self.SolidToGround)			
        self.hvac_components_mod.append(self.surfacesToSolids)
		
    def mapp_me(self,building):
        self.prefix = "extends" 	
        self.target_name = building.sim_ref_id	
        self.target_location = "BuildingSystems.Buildings.BaseClasses.BuildingTemplate"										
        self.nSurfaces = self.add_parameter(name="nSurfaces",
                                                value=building.pre_nSurfaces)
        self.show_TSur = self.add_parameter(name="show_TSur",
                                                value="true")
        self.nHeatSources = self.add_parameter(name="nHeatSources",
                                                value=len(building.thermal_zones))
        self.heatSources = self.add_parameter(name="heatSources",
                                                value="true")
        self.useAirPathes = self.add_parameter(name="useAirPathes",
                                                value="false")
        self.convectionOnSurfaces = self.add_parameter(name="convectionOnSurfaces",
                                                value="BuildingSystems.HAM.ConvectiveHeatTransfer.Types.Convection.forced")	

																							

												
												
								