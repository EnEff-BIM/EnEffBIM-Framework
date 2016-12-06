# -*- coding: utf-8 -*-
"""
@author: crt
"""
import mapapi.MapClasses as MapHierarchy

class OpaqueThermalConstruction(MapHierarchy.MoObject):
    """Representation of a Construction
    """

    def init_me(self):
        self.target_name = "name"	
        self.target_location = "Record"
        self.core = OpaqueThermalConstructionCore()
        self.core.init_me()
        self.core.mapp_me()
        self.records.append(self.core)   

class OpaqueThermalConstructionCore(MapHierarchy.MapRecord):
    """Representation of a Construction
    """	
	
    def init_me(self):
        self.typ = "extends"	
        self.target_location = "BuildingSystems.Buildings.Data.Constructions.OpaqueThermalConstruction"

    def mapp_me(self):
        self.add_parameter(name="nLayers", value = 1)
        thick = MapRecord(parent=self, record_location="", name="thickness")
        				