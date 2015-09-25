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
        
    parameters : list of MappedProperties or MappedRecords
        This is an *iterable* list containing all records and properties of
        the MappedComponent
        
    connections : not yet sure how to handle this
        
    
    """
    
    def __init__(self, parent_class):
        
        self.parent_class = parent_class
        self.target_location = ""
        self.target_name = ""
        self.parameters = []
        self.connections = []