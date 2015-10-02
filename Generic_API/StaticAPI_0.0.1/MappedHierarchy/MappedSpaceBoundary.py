class MappedSpaceBoundary(object):
    """Representation of a mapped space boundary
        
    The MappedSpaceBoundary class is a representation of a space boundary 
    filled with geometric information.
    
    Parameters
    ----------
    
    parent : instance of MappedZone()
        MappedSpaceBoundary receives an instance of MappedZone, in order to 
        know to what zone it belongs to.
        
    Attributes
    ----------

    mapped_building_elements : list of MappedBuildingElements()
        list of all building elements that form the space boundary
            
    """
    
    def __init__(self, parent):
        
              
        self.parent = parent
        self.mapped_building_elements = []
        