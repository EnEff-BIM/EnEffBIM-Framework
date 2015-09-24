class MappedProject(object):
    """Base Class for each mapped data information_centrality
        
    The MappedProject class is the root class for all mapped information
    and thus the head of the hierarchy tree. Further more it contains meta 
    information about the used library.
        
    Attributes
    ----------
    
    used_library : str
        Name of used library
        
    library_version : str
        Version of used library
    
    buildings : list of MappedBuilding()
        This is an *iterable* list containing all buildings of the 
        project. The items of the list have to be an instance of
        the class "MappedBuilding".


    """
    
    def __init__(self):
        
        self.buildings = []
        self.used_library = ""
        self.library_version = ""
    
        
    
    