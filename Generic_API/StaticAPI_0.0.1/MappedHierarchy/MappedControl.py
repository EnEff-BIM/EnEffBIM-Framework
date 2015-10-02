class MappedControl(object):
    """Representation of a mapped control strategy
        
    The MappedControl class is a representation of a mapped control system.
    It is used to store control parameters and more important the control 
    strategy/system itself
    
    
    Parameters
    ----------
    
    parent : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    control_strategy : str
        Probably a code list of possible control strategies
        
    parameters : list of MappedProperty or MappedRecord 
        This is an *iterable* list containing all records and properties of
        the MappedControl
        
    control_connector : instance of a MappedConnector()
        MappedConnector to know where the control is mapped to

    """
    
    def __init__(self, parent):
        
        self.parent = parent
        self.control_strategy = ""
        self.parameters = []
        self.control_connector = None
        