# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 09:59:24 2015

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

class ExpansionVessel(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, parent, project):
        
        super(ExpansionVessel, self).__init__(parent, project)
        
        self.port_a = self.add_connector("port_a", "FluidPort")
        
   