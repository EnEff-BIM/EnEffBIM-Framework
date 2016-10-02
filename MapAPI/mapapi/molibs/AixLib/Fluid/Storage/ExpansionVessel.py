# -*- coding: utf-8 -*-
"""
Created on Tue Nov 24 09:59:24 2015

@author: pre
"""

import mapapi.MapClasses as MapHierarchy


class ExpansionVessel(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.add_parameter(name="Medium", value="SimpleWater")
        self.port_a = self.add_connector("port_a", "FluidPort")

    def mapp_me(self):

        self.target_name += "vessel"
        try:
            self.target_location = self.mapped_component.getTargetLocation()
            prop_list = self.mapped_component.getMappedPropertyList()
            self.arrange_parameters(prop_list)
        except Exception:
            import warnings
            warning_text = ("can't apply mapping, probably because this class "
                            "is not defined in Mapping Rules. We are using "
                            "default values")
            warnings.warn(warning_text)
            self.target_location = "AixLib.Fluid.Storage.ExpansionVessel"
            self.add_parameter(name="V_start", value=0.001)
            self.add_parameter(name="p", value="Medium.p_default")
            pass
