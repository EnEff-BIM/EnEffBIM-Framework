class MappedMaterial(object):
    """Representation of a mapped material
        
    The MappedMaterial class is the representation of a material
    
    Parameters
    ----------
    
    parent : instance of MappedMaterialLayer()
        MappedMaterial receives an instance of MappedMaterialLayer, 
        in order to know to what layer it belongs to.
        
    Attributes:
    ----------
    
    name : str
        individual name
    
    density : float
        density of material in kg/m^3
        
    thermal_conduc : float
        thermal conductivity of material in W/(m*K)
        
    heat_capac : float
        specific heat capacity of material in kJ/(kg*K)
        
    solar_absorp : float
        coefficient of absorption of solar short wave 
        
    ir_emissivity : float
        coefficient of longwave emissivity of material
        
    transmittance : float
        coefficient of transmittanve of material

    """


    def __init__(self, parent):

        
        self.parent_class = parent
        self.name = ""
        self.density = 0.0  
        self.thermal_conduc = 0.0
        self.heat_capac = 0.0
        self.solar_absorp = 0.0
        self.ir_emissivity = 0.0
        self.transmittance = 0.0