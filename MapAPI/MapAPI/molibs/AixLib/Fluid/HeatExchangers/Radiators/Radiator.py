# -*- coding: utf-8 -*-
"""
Created on Mon Nov 23 12:00:26 2015

@author: pre
"""
import mapapi.MapClasses as MapHierarchy

class Radiator(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.HeatExchangers.Radiators.Radiator
    """
    
    def init_me(self):
        self.target_location = "AixLib.Fluid.HeatExchangers.Radiators.Radiator"
        pump_child = self.hierarchy_node.getChildList()
        for id in range(pump_child.size()):
            if pump_child[id].ClassType() == \
                    "SimNode_HotWaterFlowPort_Water_In":
                sim_port_in = pump_child[id]
            if pump_child[id].ClassType () == \
                    "SimNode_HotWaterFlowPort_Water_Out":
                sim_port_out = pump_child[id]
        self.port_a = self.add_connector(name="port_a", type="FluidPort",
         dimension= 1, hierarchy_node=sim_port_in)
        self.port_b = self.add_connector(name="port_b", type="FluidPort",
         dimension= 1, hierarchy_node=sim_port_out)
        self.convPort = self.add_connector("convPort", "HeatPort")
        self.radPort = self.add_connector("radPort", "HeatPort")


    def mapp_me(self):
        record_location = \
            "AixLib.DataBase.Radiators.RadiatiorBaseDataDefinition"
        self.parameters.append(MapHierarchy.MapRecord(parent=self,
                                                      record_location=record_location,
                                                      name="RadiatorType"))

        self.parameters[-1].add_parameter(name="NominalPower", value=979.0)
        self.parameters[-1].add_parameter(name="T_flow_nom", value=75.0)
        self.parameters[-1].add_parameter(name="T_return_nom", value=65.0)
        self.parameters[-1].add_parameter(name="T_room_nom", value=20.0)
        self.parameters[-1].add_parameter(name="Exponent", value=1.2721)
        self.parameters[-1].add_parameter(name="VolumeWater", value=3.15)
        self.parameters[-1].add_parameter(name="MassSteel", value=19.58)
        self.parameters[-1].add_parameter(name="RadPercent", value=0.35)
        self.parameters[-1].add_parameter(name="length",  value=1.0)
        self.parameters[-1].add_parameter(name="height", value=0.6)
        self.m_flow_small = self.add_parameter(name="m_flow_small", value=0.01)

        self.ctrl_valve()
        self.add_pipe()

    def add_pipe(self):
        from mapapi.molibs.AixLib.Fluid.FixedResitances.StaticPipe import Pipe

        pipe = Pipe(self.project, self.hierarchy_node, self)
        pipe.init_me()
        pipe.mapp_me()
        self.project.buildings[0].hvac_components_mod.append(pipe)
        self.add_connection(self.port_a, pipe.port_b)
        self.port_a = pipe.port_a
        self.connectors.append(pipe.port_a)

    def ctrl_valve(self):
        from mapapi.molibs.AixLib.Fluid.Actuators.Valves.SimpleValve import \
            SimpleValve

        valve = SimpleValve(self.project, self.hierarchy_node, self)
        valve.init_me()
        valve.pid_controller(thermal_zone=self.project.buildings[0]) #needs
        # to be changed if thermalZone is implemented
        self.project.buildings[0].hvac_components_mod.append(valve)
        self.add_connection(self.port_a, valve.port_b)
        self.port_a = valve.port_a
        self.connectors.append(valve.port_a)


