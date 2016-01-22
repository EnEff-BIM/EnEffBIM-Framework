# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 09:59:24 2015

@author: pre
"""


import genericapi.MapAPI.MapHierarchy as MapHierarchy

class ExpansionVessel(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, parent, project):
        
        super(ExpansionVessel, self).__init__(parent, project)
        
        self.port_a = self.add_connector("port_a", "FluidPort")
        
   