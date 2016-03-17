import genericapi.MapAPI.MapHierarchy as MapHierarchy


class Mixer(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):

        self.port_a = self.connected_in[0].getSimModelObject()
        self.port_b = self.connected_out[0].getSimModelObject()

        return True

class Splitter(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):

        self.port_a = self.connected_in[0].getSimModelObject()
        self.port_b = self.connected_out[0].getSimModelObject()

        return True