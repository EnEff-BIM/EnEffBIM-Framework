# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import genericapi.MapAPI.MapHierarchy as MapHierarchy

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(Radiator, self).__init__(project, sim_object, parent)

        self.sim_ref_id = [sim_object.getSimModelObject().RefId()]

        radiator_parent = sim_object.getParentList()
        for a in range(radiator_parent.size()):
            if radiator_parent[a].ClassType() == "SimGroup_SpatialZoneGroup_ZoneHvacGroup" and \
               radiator_parent[a].getSimModelObject().IsTemplateObject().getValue() == False:
                self.hvac_loop = radiator_parent[a].getSimModelObject(
                    ).SimModelName().getValue()
                self.parent.hvac_component_group[self.hvac_loop].append(self)

        self.target_location = "AixLib.Fluid.HeatExchangers.Radiators.Radiator"
        self.target_name = sim_object.getSimModelObject().SimModelName().getValue()

        #mapp the Record Parameters:
        self.radiator_type = MapHierarchy.MapRecord(self,
                                                    "AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition",
                                                    "RadiatorType")
        self.radiator_type.add_parameter(name="NominalPower",
                                         value=979.0)
        self.radiator_type.add_parameter(name="T_flow_nom",
                                         value=75.0)
        self.radiator_type.add_parameter(name="T_return_nom",
                                         value=65.0)
        self.radiator_type.add_parameter(name="T_room_nom",
                                         value=20.0)
        self.radiator_type.add_parameter(name="Exponent",
                                         value=1.2721)
        self.radiator_type.add_parameter(name="VolumeWater",
                                         value=3.15)
        self.radiator_type.add_parameter(name="MassSteel",
                                         value=19.58)
        self.radiator_type.add_parameter(name="RadPercent",
                                         value=0.35)
        self.radiator_type.add_parameter(name="length",
                                         value=1.0)
        self.radiator_type.add_parameter(name="height",
                                         value=0.6)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.convPort = self.add_connector("convPort", "HeatPort")
        self.radPort = self.add_connector("radPort", "HeatPort")

        from genericapi.AixLib.Fluid.Actuators.Valves.SimpleValve import \
            SimpleValve

        SimpleValve(project=self.project,
                    sim_object=self.sim_object,
                    parent=self)
        
        


