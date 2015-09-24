class MappedBuilding(object):
    """Representation of a mapped building
        
    The MappedBuilding class is a representation of a building mapped with
    Modelica information. It contains HVAC and geometric information.
    
    Parameters
    ----------
    
    parent_project : instance of MappedProject()
        MappedBuilding recieves an instance of MappedProject, in order to know
        to what Project it belongs to. Might be trivial in the case of the 
        project, more because of consistency.
        
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
    
    def __init__(self, parent_project):
        
        self.parent_project = parent_project
        self.building_name = ""
        self.thermal_zones = []
        self.supply_components = []
        
        
    