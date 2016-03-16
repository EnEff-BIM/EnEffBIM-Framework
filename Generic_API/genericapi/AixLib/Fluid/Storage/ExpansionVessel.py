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
        self.supe = 1+1
        print("HALLO")
        self.Q_flow_max = self.add_parameter(name="Q_flow_max",
                                             value=123)
        return self.hierarchy_node
        
   