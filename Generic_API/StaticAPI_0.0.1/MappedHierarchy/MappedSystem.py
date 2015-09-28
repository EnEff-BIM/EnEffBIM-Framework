class MappedSystem(object):
    """Base class for all mapped objects
        
    The MappedSystem class is the base class for all mapped objects in the
    StaticAPI. It contains some library specific data.
    
    
    Parameters
    ----------
    
    parent_class : instance of a Mapped class
        MappedComponent receives any mapped class (MappedBuilding etc.)
        
    Attributes
    ----------
    
    target_location : str (optional)
        location within the library

    target_name : str (optional)
        name of the Modelica object (if not set: this could be SimModel name)
        
    parameters : list of MappedProperty or MappedRecord 
        This is an *iterable* list containing all records and properties of
        the MappedSystem
        
    input_connectors : list of MappedConnector()
        This is an *iterable* list containing all Input Modelica connectors of the
        MappedSystem (e.g. Real Input, Heatport (red), Fluid (blue)
        
    output_connectors : list of MappedConnector()
        This is an *iterable* list containing all Output Modelica connectors of the
        MappedSystem (e.g. Real Output, Heatport , Fluid 
               
    unmapped_system : list of SimClasses in StaticAPI.unmapped_data
        This is an *iterable* list containing all SimClasses where this system
        was mapped from. (e.g. SimBoilerHotWater). The Class should be referenced
        in StaticAPI.unmapped_data

    """
    
    def __init__(self, parent_class):
        
        self.parent_class = parent_class
        self.target_location = None
        self.target_name = None
        self.parameters = []
        self.input_connectors = []
        self.output_connectors = []
        self.unmapped_system = []

