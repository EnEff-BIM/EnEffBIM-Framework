class MappedConnector(object):
    """Representation of a mapped connector
        
    The MappedConnector class is a representation of any connector in Modelica.
    It contains connector information
    
    
    Parameters
    ----------
    
    parent_class : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    name : str
        Name of the connector in the model.
    
    type : str
        - FluidPort
        - Real
        - Boolean
        - HeatPort
        - ...

    """
    
    def __init__(self, parent_class):
        
        self.parent_class = parent_class
        self.name = ""
        self.type = ""