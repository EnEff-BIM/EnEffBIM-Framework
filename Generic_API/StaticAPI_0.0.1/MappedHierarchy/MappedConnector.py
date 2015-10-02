class MappedConnector(object):
    """Representation of a mapped connector
        
    The MappedConnector class is a representation of any connector in Modelica.
    It contains connector information
    
    
    Parameters
    ----------
    
    parent : instance of a MappedComponent()
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
    
    def __init__(self, parent):
        
        self.parent = parent
        self.name = ""
        self.type = ""