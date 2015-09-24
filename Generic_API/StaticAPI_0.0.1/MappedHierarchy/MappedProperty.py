class MappedProperty(object):
    """Representation of a mapped property
        
    The MappedProperty class is a representation of any Modelica property. 
    
    
    Parameters
    ----------
    
    parent_component : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
   
        
    
    """
    
    def __init__(self, parent_component):
        
        self.parent_component = parent_component
        