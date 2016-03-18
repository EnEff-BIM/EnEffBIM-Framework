import genericapi.MapAPI.MapHierarchy as MapHierarchy
from genericapi.AixLib.Fluid.FixedResitances.StaticPipe import Pipe

class Mixer(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):

        self.many = []

        self.many.append(Pipe(self.project, self.hierarchy_node,
                              self.parent))
        self.many.append(Pipe(self.project, self.hierarchy_node,
                              self.parent))

        return True

class Splitter(MapHierarchy.MapComponent):
    """Representation of AixLib.Fluid.Movers.Pump
    """

    def init_me(self):

        self.many.append(Pipe(self.project, self.hierarchy_node,
                              self.parent))
        self.many.append(Pipe(self.project, self.hierarchy_node,
                              self.parent))

        return True