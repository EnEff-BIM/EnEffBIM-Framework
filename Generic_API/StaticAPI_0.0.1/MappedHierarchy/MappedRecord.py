class MappedRecord(object):
    """Representation of a mapped record
        
    The MappedRecord class is a representation of any Modelica Record class. 
    
    
    Parameters
    ----------
    
    parent_component : instance of a MappedComponent()
        MappedRecords receives an instance of MappedComponent. 
        
    Attributes
    ----------
    
    name : str
        Modelica name of the Record (e.g. boilerEfficiencyB)
        
    record_location : str
        location in the library of the base record
        
    parameters : list of MappedProperties or MappedRecords
        This is an *iterable* list containing all records and properties of
        the MappedRecord

    """
    
    def __init__(self, parent_component):
        
        self.parent_component = parent_component
        self.name = ""
        self.record_location = ""
        self.parameters = []
        