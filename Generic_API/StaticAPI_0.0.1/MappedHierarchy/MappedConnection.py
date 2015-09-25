class MappedConnection(object):
    """Representation of a mapped connector
        
    The MappedConnection class is a representation of a connection in Modelica.
    It contains connection
    
    
    Parameters
    ----------
    
    input_component : instance of a MappedComponent()
        The input component 
        
    output_component : instance of a MappedComponent()
        The output component
        
    Attributes
    ----------
       
    type : str
        - Fluid
        - Real
        - Boolean
        - Heat
        - ...

    """
    
    def __init__(self, input_component,output_component):
        
        self.input_component = input_component
        self.output_component = output_component
        self.type = ""