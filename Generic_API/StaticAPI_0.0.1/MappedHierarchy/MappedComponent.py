class MappedComponent(object):
    """Representation of a mapped thermal zhone
        
    The MappedThermalZone class is a representation of a thermal zone mapped 
    with Modelica information. It contains HVAC and geometric information.
    
    Parameters
    ----------
    
    parent_building : instance of MappedBuilding()
        MappedThermalZone recieves an instance of MappedProject, in order to 
        know to what building it belongs to.
        
    Attributes
    ----------
    
    zone_name : str
        Name of the thermal_zone 

    space_boundaries : MappedSpaceBoundaries()
        This is a instance of MappedSpaceBoundaries.
        
    supply_components : list of MappedComponents()
        This is an *iterable* list containing all supply components (e.g. 
        radiator) of the thermal zone. The items of the list have to be an 
        instance of the class "MappedComponent".
        
    supply_connections : not sure if I want to implement it here.
    
    """
    
    def __init__(self, parent_building):
        
        self.parent_building = parent_building
        self.zone_name = ""
        self.space_boundaries = []
        self.supply_components = []