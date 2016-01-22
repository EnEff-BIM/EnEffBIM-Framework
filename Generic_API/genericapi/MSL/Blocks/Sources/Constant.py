# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:10:45 2015

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
import random
class Constant(MapHierarchy.MapComponent):
    """Representation of Modelica.Blocks.Sources.Constant
    """
    
    def __init__(self, parent, project):
        
        super(Constant, self).__init__(parent, project)
        
        self.target_location = "Modelica.Blocks.Sources.Constant"
        self.target_name = "const"+str(random.randint(1, 100))
        self.k = MapHierarchy.MapProperty(self, "k", 1.0)
        self.y = self.add_connector("y", "RealOutput")
        

