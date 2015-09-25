class MappedComponent(object):
    """Representation of a mapped component
        
    The MappedComponent class is a representation of any HVAC component mapped
    with Modelica information. It contains library specific information. 
    
    
    Parameters
    ----------
    
    parent_class : instance of a Mapped class
        MappedComponent receives any mapped class (MappedBuilding etc.)
        
    Attributes
    ----------
    
    target_location : str
        location within the library

    target_name : str
        name of the Modelica object (if not set: this could be SimModel name)
        
    parameters : list of MappedProperty or MappedRecord
        This is an *iterable* list containing all records and properties of
        the MappedComponent
        
    connectors : list of MappedConnector
        This is an *iterable* list containing all Modelica connectors of the
        MappedComponent

    """
    
    def __init__(self, parent_class):
        
        self.parent_class = parent_class
        self.target_location = ""
        self.target_name = ""
        self.parameters = []
        self.connectors = []
