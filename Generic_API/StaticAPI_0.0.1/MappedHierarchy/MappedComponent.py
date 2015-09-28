from MappedHierarchy.MappedSystem import MappedSystem

class MappedComponent(MappedSystem):
    """Representation of a mapped component
        
    The MappedComponent class is a representation of any HVAC component mapped
    with Modelica information. It contains library specific information. 

    Attributes
    ----------
    
    mapped_control : MappedControl()
        This is an instance of MappedControl()
    """
    
    def __init__(self, parent_class):
        
        super(MappedComponent, self).__init__(parent_class)

        self.mapped_control = None