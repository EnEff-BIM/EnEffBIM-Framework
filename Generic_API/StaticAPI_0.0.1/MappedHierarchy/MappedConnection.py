class MappedConnection(object):
    """Representation of a mapped connector
        
    The MappedConnection class is a representation of a connection in Modelica.
    It contains connection
    
    
    Parameters
    ----------
    
    connector_a : instance of a MappedConnector()
        The input connector, with the parent/child relationshsip we can access
        the component
        
    connector_b : instance of a MappedConnector()
        The output component, with the parent/child relationshsip we can access
        the component
        
    Attributes
    ----------
       
    type : str
        - Fluid
        - Real
        - Boolean
        - Heat
        - ...

    """
    
    def __init__(self, connector_a,connector_b):
        
        self.connector_a = connector_a
        self.connector_b = connector_b
        self.type = ""