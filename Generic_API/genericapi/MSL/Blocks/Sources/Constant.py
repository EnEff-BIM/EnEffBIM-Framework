# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:10:45 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy
import random
class Constant(MapHierarchy.MapComponent):
    """Representation of Modelica.Blocks.Sources.Constant
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(Constant, self).__init__(project, sim_object, parent)
        
        self.target_location = "Modelica.Blocks.Sources.Constant"
        self.target_name = "const"+str(random.randint(1, 100))
        self.k = self.add_parameter(name="k",
                                    value=1.0)
        self.y = self.add_connector("y",
                                    "Real")
        

