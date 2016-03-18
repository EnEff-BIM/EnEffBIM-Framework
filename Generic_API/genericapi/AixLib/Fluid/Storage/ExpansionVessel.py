# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 09:59:24 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy


class ExpansionVessel(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def init_me(self):
        self.target_location = ("AixLib.Fluid.Storage.ExpansionVessel")
        self.target_name = self.parent.target_name+"_expansionVessel"
        self.V_start = self.add_parameter(name="V_start",
                                          value=0.01)
        self.port_a = self.add_connector("port_a", "FluidPort")
        
   