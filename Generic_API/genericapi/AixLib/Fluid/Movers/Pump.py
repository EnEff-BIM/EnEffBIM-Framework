# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 09:33:28 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy

def instantiate_pump(parent, project, sim_instance):
    import SimFlowMover_Pump_VariableSpeedReturn
    test=[]
    for id in range(sim_instance.SimFlowMover_Pump_VariableSpeedReturn().sizeInt()):
        test.append(Pump(parent, 
                         project, 
                         sim_instance.SimFlowMover_Pump_VariableSpeedReturn().at(id)))
    return test
    
class Pump(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, project, parent, sim_instance):
        
        super(Pump, self).__init__(project, parent)

        self.sim_ref_id = [sim_instance.RefId()]
        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.IsNight = self.add_connector("IsNight", "BooleanInput")
        
        """automatically instantiate an expansion vessel to pump"""
        self.con_expansion_vessel(0.01)
        
    def ctrl_switching_night(self, width, period, startTime):
        """adds a boolean pulse to the boiler for switching the night mode"""

        self.map_control = MapHierarchy.MapControl(self)
        self.map_control.control_objects.append(MapHierarchy.MoObject(self))
        self.map_control.control_objects[-1].target_location = \
                                        "Modelica.Blocks.Sources.BooleanPulse"
        self.map_control.control_objects[-1].target_name = "nightSignal"
        self.map_control.control_objects[-1].add_property("width", width)
        self.map_control.control_objects[-1].add_property("period", period)
        self.map_control.control_objects[-1].add_property("startTime",
                                                          startTime)
        y = self.map_control.control_objects[-1].add_connector("y",
                                                               "BooleanOutput")
        self.project.systems.append(self.map_control.control_objects[-1])
        self.add_connection(self.project, y, self.IsNight)

    def con_expansion_vessel(self, V_start):
        import genericapi.AixLib.Fluid.Storage.ExpansionVessel \
                                                as ExpansionVessel
        self.parent.hvac_component_group.append(ExpansionVessel.ExpansionVessel(
                                                self.project, self))
        self.parent.hvac_component_group[-1].target_location = ("AixLib.Fluid."
                                                    "Storage.ExpansionVessel")
        self.parent.hvac_component_group[-1].target_name = "expansionVessel"
        self.parent.hvac_component_group[-1].add_property = ("V_start", V_start)
        port_a = self.parent.hvac_component_group[-1].add_connector("port_a",
                                                                    "FluidPort")
        self.add_connection(port_a, self.port_a)