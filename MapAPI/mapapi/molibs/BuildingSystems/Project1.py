# -*- coding: utf-8 -*-
"""
Project1 is the main algorithm that defines the necessary steps to create a project model 
of a detailed building model using but with a simple air volume model (not discretized) 
connected to a ideal heat source using the BuildingSystems library.

@author: crt
"""
import MoCore as Core

class MoProject(Core.MoObject):
    """
    Representation of Building for BuildingSystems
    """
    def __init__(self):
       pass
        
    def init_me(data):
        # INIT AMBIENT MODEL:
        from mapapi.molibs.BuildingSystems.Buildings.Ambient1 import Ambient
        ambient = Ambient()
        ambient.init_me()
        ambient.mapp_me(data)
        
        # INIT BUILDING MODEL:
        from mapapi.molibs.BuildingSystems.Buildings.Building1 import Building
        for b in data.Buildings:
            bdg = Building()
            bdg.init_me()
            bdg.mapp_me()

        # INIT HVAC MODEL:
    #def mapp_me(self,data):