class MappedMaterialLayer(object):
    """Representation of a mapped building element layer
        
    The MappedMaterialLayer class is the representation of a material layer
    
    Parameters
    ----------
    
    parent_class : instance of MappedBuildingElement()
        MappedMaterialLayer receives an instance of MappedBuildingElement, 
        in order to know to what element it belongs to.
        
    Attributes
    ----------

    material : MappedMaterial()
        material of the layer
        
    thickness : float
        thickness of the layer
            
    """
    
    def __init__(self, parent_class):
        
              
        self.parent_class = parent_class
        
        self.material = None
        self.thickness = None