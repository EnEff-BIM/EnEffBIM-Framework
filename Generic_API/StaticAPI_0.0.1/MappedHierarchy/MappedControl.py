class MappedControl(object):
    """Representation of a mapped control strategy
        
    The MappedControl class is a representation of a mapped control system.
    It is used to store control parameters and more important the control 
    strategy/system itself
    
    
    Parameters
    ----------
    
    parent_component : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    control_strategy : str
        Probably a code list of possible control strategies
        
    parameters : list of MappedProperty or MappedRecord 
        This is an *iterable* list containing all records and properties of
        the MappedControl

    """
    
    def __init__(self, parent_component):
        
        self.parent_component = parent_component
        self.control_strategy = ""
        self.parameters = []
        