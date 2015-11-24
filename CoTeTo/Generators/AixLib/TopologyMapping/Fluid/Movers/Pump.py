# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 09:33:28 2015

@author: pre
"""

import os
import sys
import tools.utilities as ut

modulePath = ut.get_full_path("Generic_API/MapAPI/MapHierarchy")

os.environ['PATH'] = ';'.join([modulePath, os.environ['PATH']])
# add modulePath to Python Path
sys.path.append(modulePath)


import MapHierarchy 

class Pump(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, parent=None):
        
        super(Pump, self).__init__(parent)

        self.port_a = self.add_connector("port_a", "FluidPort")
        self.port_b = self.add_connector("port_b", "FluidPort")
        self.IsNight = self.add_connector("IsNight", "BooleanInput")
        
        """automatically instantiate an expansion vessel to pump"""
        self.con_expansion_vessel("project", 0.01)
        
    def ctrl_switching_night(self, project, width, period, startTime):
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
        project.systems.append(self.map_control.control_objects[-1])
        self.add_connection(project, y, self.IsNight)
        
    def con_expansion_vessel(self, project, V_start):
        import Generators.AixLib.MappingRules.Fluid.Storage.ExpansionVessel \
                                                as ExpansionVessel
        project.systems.append(ExpansionVessel.ExpansionVessel())
        project.systems[-1].target_location = "AixLib.Fluid.Storage.ExpansionVessel"
        project.systems[-1].target_name = "expansionVessel"
        project.systems[-1].add_property = ("V_start", V_start)
        port_a = self.map_control.control_objects[-1].add_connector("port_a",
                                                                    "Fluid")
        self.add_connection(project, port_a, self.port_a)