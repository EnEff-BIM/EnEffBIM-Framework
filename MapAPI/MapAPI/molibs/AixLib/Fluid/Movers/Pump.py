# -*- coding: utf-8 -*-
"""
Module for AixLib.Fluid.Movers.Pump

containes the python class Pump, as well as a function to instantiate classes
from the corresponding SimModel instances.
"""

import mapapi.MapClasses as MapHierarchy


class Pump(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):
        self.target_location = "AixLib.Fluid.Movers.Pump"
        self.fluid_two_port()
        self.IsNight = self.add_connector("IsNight", "Boolean")

        return True

    def mapp_me(self):
        self.con_expansion_vessel(0.1)

        self.ControlStrategy = self.add_parameter(name="ControlStrategy",
                                                  value=1.0)
        self.V_flow_max = self.add_parameter(name="V_flow_max",
                                             value=self.sim_instance.SimFlowMover_RatedFlowRate().getValue())
        self.Head_max = self.add_parameter(name="Head_max",
                                           value=self.sim_instance.SimFlowMover_RatedPumpHead().getValue() * 0.0001019716)


    def con_expansion_vessel(self, v_start):
        from mapapi.molibs.AixLib.Fluid.Storage.ExpansionVessel import \
            ExpansionVessel

        exp_ves = ExpansionVessel(self.project, self.hierarchy_node, self)
        exp_ves.init_me()
        exp_ves.V_start.value = v_start

        self.add_connection(self.port_a, exp_ves.port_a)