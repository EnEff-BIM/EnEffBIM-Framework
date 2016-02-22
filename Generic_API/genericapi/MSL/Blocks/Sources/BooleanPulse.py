# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 12:10:45 2015

@author: pre
"""

import genericapi.MapAPI.MapHierarchy as MapHierarchy
import random
class BooleanPulse(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """
    
    def __init__(self, project, sim_object, parent):
        
        super(BooleanPulse, self).__init__(project, sim_object, parent)
        
        self.target_location = "Modelica.Blocks.Sources.BooleanPulse"
        self.target_name = "booleanPulse"+str(random.randint(1, 100))
        self.width = self.add_parameter(name="width",
                                        value=50)
        self.period = self.add_parameter(name="period",
                                         value=None)
        self.startTime = self.add_parameter(name="startTime",
                                            value=0)
        self.y = self.add_connector(name='y',
                                    type='Boolean')


