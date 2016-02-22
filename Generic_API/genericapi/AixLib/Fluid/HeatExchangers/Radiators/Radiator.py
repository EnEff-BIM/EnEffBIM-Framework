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

        check_zone_hvac = ["SimGroup_SpatialZoneGroup_ZoneHvacGroup"]
        radiator_parent = sim_object.getParentList()
        self.add_to_loop(parent_list=radiator_parent,
                         check_list=check_zone_hvac)

        self.target_location = "AixLib.Fluid.HeatExchangers.Radiators.Radiator"
        #mapp the Record Parameters:
        record_location = \
            "AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition"
        self.parameters.append(MapHierarchy.MapRecord(parent=self,
                                                      record_location=record_location,
                                                      name="RadiatorType"))

        self.parameters[-1].add_parameter(name="NominalPower",
                                          value=979.0)
        self.parameters[-1].add_parameter(name="T_flow_nom",
                                          value=75.0)
        self.parameters[-1].add_parameter(name="T_return_nom",
                                          value=65.0)
        self.parameters[-1].add_parameter(name="T_room_nom",
                                          value=20.0)
        self.parameters[-1].add_parameter(name="Exponent",
                                          value=1.2721)
        self.parameters[-1].add_parameter(name="VolumeWater",
                                          value=3.15)
        self.parameters[-1].add_parameter(name="MassSteel",
                                          value=19.58)
        self.parameters[-1].add_parameter(name="RadPercent",
                                          value=0.35)
        self.parameters[-1].add_parameter(name="length",
                                          value=1.0)
        self.parameters[-1].add_parameter(name="height",
                                          value=0.6)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.convPort = self.add_connector("convPort", "HeatPort")
        self.radPort = self.add_connector("radPort", "HeatPort")

        self.ctrl_valve()

    def ctrl_valve(self):

        from genericapi.AixLib.Fluid.Actuators.Valves.SimpleValve import \
            SimpleValve
        self.map_control = MapHierarchy.MapControl(parent=self)
        self.valve = SimpleValve(project=self.project,
                                 sim_object=self.sim_object,
                                 parent=self)

        self.valve.ctrl_p_room()
        self.map_control.control_connector = self.valve.map_control.control_connector


        #print(self.parent)
        #self.parent.connect_to_radiator_aixlib(self)
        


