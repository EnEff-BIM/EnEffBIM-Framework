class MappedProperty(object):
    """Representation of a mapped property
        
    The MappedProperty class is a representation of any Modelica property. 
    
    
    Parameters
    ----------
    
    parent_component : instance of a MappedComponent()
        MappedProperty receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    name : str
        Modelica name of the Parameter (e.g. Q_flow_max)
        
    value : float/int/bool/str/list
        Value of the Property, can be float, int, boolean, string or a list 
        with corresponding data type.
        
    
        
    

    """
    
    def __init__(self, parent_component):
        
        self.parent_component = parent_component
        