# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class Building(MapHierarchy.MapBuilding):
    """Representation of Building for BuildingSystems
    """

    def init_me(self):
	# Pre-calculation of number of zones, internal surfaces, external surfaces and total surfaces
        self.nZones = len(self.thermal_zones)
        self.nSurfaces_int = 0
        self.nSurfaces_ext = 0
        self.SolidToGround = 0			
        for zone in self.thermal_zones:
            for boundary in zone.space_boundaries:		
                if boundary.internal_external == "INTERNAL" and boundary.type in ["SimWall_Wall_Interior","SimWall_Wall_ExteriorAboveGrade","SimWall_Wall_Default"]:
                    self.nSurfaces_int = self.nSurfaces_int + 1
                else:
                    self.nSurfaces_ext = self.nSurfaces_ext + 1
                    if boundary.orientation == "Slab":
                       self.SolidToGround = self.SolidToGround + 1   					
        self.pre_nSurfaces = self.nSurfaces_int + self.nSurfaces_ext*2	
		
        self.toAmbientSurfacesPorts = self.add_connector(name="toAmbientSurfacesPorts",                                                    type="HeatPort")
        self.toAmbientAirPorts = self.add_connector(name="toAmbientAirPorts",                                                   type="HeatPort")
        self.T_setHeating = self.add_connector(name="T_setHeating",type="Real",                                        dimension=self.nZones)										  
        self.T_setCooling = self.add_connector(name="T_setCooling",type="Real",                                          dimension=self.nZones)
        self.airchange = self.add_connector(name="airchange",type="Real",                                          dimension=self.nZones)
        self.conHeatSourcesPorts = self.add_connector(name="conHeatSourcesPorts",type="HeatPort",                                          dimension=self.nZones)
        self.radHeatSourcesPorts = self.add_connector(name="radHeatSourcesPorts",type="HeatPort",                                          dimension=self.nZones)
	
	# Internal connectors -> class definition are defined with the BuildingTemplate
        from mapapi.molibs.BuildingSystems.Buildings.BaseClasses.BuildingTemplate import BuildingTemplate  		
        from mapapi.molibs.BuildingSystems.Buildings.Zones.ZoneTemplateAirvolumeMixed import ZoneTemplateAirvolumeMixed
        from mapapi.molibs.BuildingSystems.Buildings.Constructions.Walls.WallThermal1DNodes import WallThermal1DNodes
        from mapapi.molibs.BuildingSystems.Buildings.Constructions.Windows.Window import Window
        self.BuildingTemplate = BuildingTemplate(self.project,self.hierarchy_node,self)
        self.BuildingTemplate.init_me(self)						 
        self.BuildingTemplate.mapp_me(self)
        self.hvac_components_mod.append(self.BuildingTemplate)	
        aux = []
        remove_me = []	 		
        for zone in self.thermal_zones: 		
            zone.__class__ = ZoneTemplateAirvolumeMixed
            zone.init_me()
            zone.mapp_me()		
            for boundary in zone.space_boundaries:
                #print("boundary: ", boundary.sim_ref_id, " -- ", boundary.internal_external) 			
            # We need the attribute OthersideSpaceBoundary, which so far can just be obtained for the walls...			
                if boundary.internal_external == "INTERNAL" and boundary.type in ["SimWall_Wall_Interior","SimWall_Wall_ExteriorAboveGrade","SimWall_Wall_Default"]:
                    new_id = "".join(sorted([boundary.sim_ref_id,boundary.OthersideSpaceBoundary]))
                    if new_id in aux:					
                        remove_me.append(boundary)
                    else:						
                        for zone_2 in self.thermal_zones:						
                            print(" search ", boundary.OthersideSpaceBoundary, " in ", zone_2) 						
                            if boundary.OthersideSpaceBoundary in [b.sim_ref_id for b in zone_2.space_boundaries] and zone_2 != zone:  						
                                boundary.OthersideZone = zone_2
                                print("found!")
                        boundary.__class__ = WallThermal1DNodes								
                        boundary.sim_ref_id = new_id								
                        boundary.init_me()
                        boundary.mapp_me(zone,self)
                        aux.append(new_id)						
                else:				
                    if boundary.type in ["SimWindow_Window_Exterior","SimWindow_Window_Interior"]:
                        boundary.__class__ = Window
                        boundary.init_me()
                        boundary.mapp_me(zone,self)					
                    else:
                        print("boundary WallThermal1DNodes: ", boundary.sim_ref_id, " -- ", boundary.internal_external) 					
                        boundary.__class__ = WallThermal1DNodes
                        boundary.init_me()
                        boundary.mapp_me(zone,self)
            for boundary in remove_me:						
                zone.space_boundaries.remove(boundary)
            remove_me = [] 				

        from mapapi.molibs.BuildingSystems.Buildings.Data.Constructions.OpaqueThermalConstruction import OpaqueThermalConstruction			
        for zone in self.thermal_zones:
            for boundary in zone.space_boundaries:
                Opaque = OpaqueThermalConstruction(self.project,self.hierarchy_node,self)
                Opaque.init_me()						 
                self.mappend_component.append(Opaque)				
                #for mapped_layer in boundary.mapped_layer:
					
	
    def mapp_me(self):
        # Class instance	
        self.target_name = self.sim_ref_id	
        self.target_location = "CustomBuilding"+self.target_name
											
        self.add_ambient()
        for n in range(1,1+len(self.thermal_zones)):		
            self.add_TSetHeating(n,self.thermal_zones[n-1].sim_ref_id)
            self.add_TSetCooling(n,self.thermal_zones[n-1].sim_ref_id)		
            self.add_airchange(n,self.thermal_zones[n-1].sim_ref_id)								
            self.add_heatsources(n,self.thermal_zones[n-1].sim_ref_id)
        # Class definition
        self.constructionWindow = self.add_parameter(name="constructionWindow",
                                        value="BuildingSystems.Buildings.Data.Constructions.Transparent.HeatProtectionDoubleGlazingUVal14",
                                        typ="parameter")
        self.mapp_internal_connections()
          		
    def add_ambient(self):
        from mapapi.molibs.BuildingSystems.Buildings.Ambient import Ambient        
        ambient = Ambient(self.project,self.hierarchy_node,self)
        ambient.init_me()
        ambient.mapp_me(self.nSurfaces_ext-self.SolidToGround)		
        ambient.add_connection(ambient.toSurfacePorts, self.toAmbientSurfacesPorts)        		
        ambient.add_connection(ambient.toAirPorts, self.toAmbientAirPorts)
        ambient.add_connection(ambient.TAirRef, self.BuildingTemplate.TAirAmb)
        ambient.add_connection(ambient.xAir, self.BuildingTemplate.xAirAmb)
        self.project.mod_components.append(ambient)
		
    def add_TSetHeating(self,n,sim_ref_id):
        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant	
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)	
        const.init_me()
        const.mapp_me()
        const.target_name = "TSetHeating_"+sim_ref_id
        const.add_parameter(name="k",value = 273.15 + 20)	
        const.add_connection(const.y, self.T_setHeating, index_b=n)
        self.project.mod_components.append(const)
						 
    def add_TSetCooling(self,n,sim_ref_id):
        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant	
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)	
        const.init_me()
        const.mapp_me()
        const.target_name = "TSetCooling_"+sim_ref_id
        const.add_parameter(name="k",value = 273.15 + 25)	
        const.add_connection(const.y, self.T_setCooling, index_b=n)
        self.project.mod_components.append(const)

    def add_airchange(self,n,sim_ref_id):
        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant	
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)	
        const.init_me()
        const.mapp_me()
        const.target_name = "airchange_"+sim_ref_id
        const.add_parameter(name="k",value = 0.5)
        const.add_connection(const.y, self.airchange, index_b=n)
        self.project.mod_components.append(const)

    def add_relationRadiationConvection(self,n,sim_ref_id):
        from mapapi.molibs.BuildingSystems.Buildings.BaseClasses.RelationRadiationConvection import RelationRadiationConvection	
        self.relation = RelationRadiationConvection(self.project,
                         self.hierarchy_node,
                         self)
        self.relation.add_parameter(name="radiationportion",value = 0.5)						 
        self.relation.init_me()
        self.relation.target_name = "relationRadiationConvection_"+sim_ref_id		

    def add_prescribedHeatFlow(self,n,sim_ref_id):
        from mapapi.molibs.MSL.Thermal.HeatTransfer.Sources.PrescribedHeatFlow import PrescribedHeatFlow		
        self.prescribed = PrescribedHeatFlow(self.project,
                         self.hierarchy_node,
                         self)
        self.prescribed.init_me()
        self.prescribed.target_name = "prescribedHeatFlow_"+sim_ref_id		
						 
    def add_heatsources(self,n,sim_ref_id):
        from mapapi.molibs.MSL.Blocks.Sources.Constant import Constant	
        const = Constant(self.project,
                         self.hierarchy_node,
                         self)	
        const.init_me()
        const.mapp_me()
        const.target_name = "Q_flow_Constant"+sim_ref_id
        const.add_parameter(name="k",value = 0)
        self.add_prescribedHeatFlow(n,sim_ref_id)		
        self.add_relationRadiationConvection(n,sim_ref_id)
        const.add_connection(const.y, self.prescribed.Q_flow)
        const.add_connection(self.prescribed.port, self.relation.heatPort)
        const.add_connection(self.relation.heatPortCv, self.conHeatSourcesPorts, index_b=n)
        const.add_connection(self.relation.heatPortLw, self.radHeatSourcesPorts, index_b=n)			
        self.project.mod_components.append(self.relation)		
        self.project.mod_components.append(self.prescribed)		
        self.project.mod_components.append(const)

    def mapp_internal_connections(self):
        '''This function is used to create the necessary instances to completely define the internal 
        connections of the building class. Internal connections should be append into the self.connections 
        list with the building
        '''	
        ambient = 0
        ground = 0
        index_count = {}		
        for zone in self.thermal_zones:
            index_count[zone] = list(range(1, 1+zone.nConstructions1.value))
            print("index_count: " ,index_count[zone])
        j=1	
        for zone in self.thermal_zones:
            print("boundaries: ", len(zone.space_boundaries))		
            for boundary in zone.space_boundaries:
                if boundary.internal_external == "INTERNAL" and boundary.type in ["SimWall_Wall_Interior","SimWall_Wall_ExteriorAboveGrade","SimWall_Wall_Default"]:
                    con1 = MapHierarchy.MapConnection(boundary.toSurfacePort_1 , zone.toConstructionPorts1,index_b = index_count[zone].pop())
                    print("zone_2: ", boundary.OthersideZone, " --- ", type(boundary.OthersideZone))					
                    con2 = MapHierarchy.MapConnection(boundary.toSurfacePort_2,  boundary.OthersideZone.toConstructionPorts1, index_b = index_count[boundary.OthersideZone].pop())											
                else:
                    con1 = MapHierarchy.MapConnection(boundary.toSurfacePort_1, zone.toConstructionPorts1,index_b = index_count[zone].pop())
                    if boundary.orientation == "Slab":
                        ground = 1 + ground					
                        con2 = MapHierarchy.MapConnection(boundary.toSurfacePort_2, self.BuildingTemplate.surfacesToSolids.toConstructionPorts, index_b = ground)	 		
					
                    else:					
                        ambient = 1 + ambient					
                        con2 = MapHierarchy.MapConnection(boundary.toSurfacePort_2, self.BuildingTemplate.surfacesToAmbient.toConstructionPorts, index_b = ambient)	 		
                self.connections.append(con1)
                self.connections.append(con2)				
                self.connections.append(MapHierarchy.MapConnection(boundary.TSur_1, self.BuildingTemplate.TSur, index_b = j,  inside_b=True))	
                self.connections.append(MapHierarchy.MapConnection(boundary.TSur_2, self.BuildingTemplate.TSur, index_b = j+1,  inside_b=True))
                j=j+2				
            ind = self.thermal_zones.index(zone)			
            self.connections.append(MapHierarchy.MapConnection(zone.T_setHeating, self.BuildingTemplate.T_setHeating, index_b = ind+1,  inside_b=True))	
            self.connections.append(MapHierarchy.MapConnection(zone.T_setCooling, self.BuildingTemplate.T_setCooling, index_b = ind+1,  inside_b=True))				
            self.connections.append(MapHierarchy.MapConnection(zone.airchange, self.BuildingTemplate.airchange, index_b = ind+1,  inside_b=True))	
            self.connections.append(MapHierarchy.MapConnection(zone.TAirAmb, self.BuildingTemplate.TAirAmb,  inside_b=True))			
            self.connections.append(MapHierarchy.MapConnection(zone.xAirAmb, self.BuildingTemplate.xAirAmb, inside_b=True))	
            self.connections.append(MapHierarchy.MapConnection(zone.Q_flow_cooling, self.BuildingTemplate.Q_flow_cooling, index_b = ind+1,  inside_b=True))			
            self.connections.append(MapHierarchy.MapConnection(zone.Q_flow_heating, self.BuildingTemplate.Q_flow_heating, index_b = ind+1,  inside_b=True))	
            self.connections.append(MapHierarchy.MapConnection(zone.radHeatSourcesPorts, self.BuildingTemplate.radHeatSourcesPorts,index_a = 1, index_b = ind+1, inside_b=True))	
            self.connections.append(MapHierarchy.MapConnection(zone.conHeatSourcesPorts, self.BuildingTemplate.conHeatSourcesPorts,index_a = 1, index_b = ind+1, inside_b=True))						