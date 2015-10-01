from MappedHierarchy.MappedSystem import MappedSystem

class MappedBuildingElement(MappedSystem):
    """Representation of a mapped building element
        
    The MappedBuildingElement class is the root class of any mapped
    building element
    
    Parameters
    ----------
    
    parent_class : instance of MappedSpaceBoundary()
        MappedBuildingElement receives an instance of MappedSpaceBoundary, 
        in order to know to what zone it belongs to.
        
    Attributes
    ----------

    mapped_building_elements : list of MappedBuildingElements()
        list of all building elements that form the space boundary

    area : float
        area of building element

    tilt : float
        tilt against horizontal

    orientation : float
        compass direction of building element (e.g. 0 : north, 90: east, 
        180: south, 270: west)

    inner_convection : float
        constant heat transfer coefficient of convection inner side

    inner_radiation : float
        constant heat transfer coefficient of radiation inner side

    outer_convection : float
        constant heat transfer coefficient of convection outer side
        for inner walls and ground floor zero

    outer_radiation : float
        constant heat transfer coefficient of radiation outer side
        for inner walls and ground floor zero

    simmodel_coordinates: array
        coordinates given in SimModel if needed for 3D-modelling
        
    simmodel_normal_vector: array
        normal vector from SimModel
    
    mapped_layer : list of MappedMaterialLayer
        list of all layers of a building element 
            
    """
    
    def __init__(self, parent_class):
        
              
        self.parent_class = parent_class
        
        self.area = None
        self.tilt = None
        self._orientation = None
        self.inner_convection = None
        self.inner_radiation = None
        self.outer_convection = None
        self.outer_radiation = None
        self.simmodel_coordinates = None
        self.simmodel_normal_vector = None

        self.mapped_layer = []
        