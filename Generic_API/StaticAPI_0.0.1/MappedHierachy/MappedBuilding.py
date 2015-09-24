class MappedBuilding(object):
    """Representation of a mapped building
        
    The MappedBuilding class is a representation of a building mapped with
    Modelica information. It contains HVAC and geometric information.
        
    Attributes
    ----------
    
    building_name : str
        Name of the building

    thermal_zones : list of MappedThermalZone()
        This is an *iterable* list containing all thermal zones of the 
        building. The items of the list have to be an instance of
        the class "MappedThermalZone".
        
    supply_components : list of MappedModelicaComponents()
        This is an *iterable* list containing all supply components (e.g. pump,
        boiler, storage) of the building. The items of the list have to be an 
        instance of the class "MappedModelicaComponent".
        
    supply_connections : not sure if I want to implement it here.
    
    """
    
    def __init__(self):
        
        self.building_name = ""
        self.thermal_zones = []
        self.supply_components = []
        
        
    