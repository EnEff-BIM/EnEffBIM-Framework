"""libSimModelAPI

This module contains function to load from libSimModelAPI
"""
from teaser.logic.buildingobjects.building import Building
from teaser.logic.archetypebuildings.bmvbs.office import Office
from teaser.logic.archetypebuildings.bmvbs.singlefamilydwelling import SingleFamilyDwelling
from teaser.logic.archetypebuildings.bmvbs.custom.institute import Institute
from teaser.logic.archetypebuildings.bmvbs.custom.institute4 import Institute4
from teaser.logic.archetypebuildings.bmvbs.custom.institute8 import Institute8
from teaser.logic.buildingobjects.thermalzone import ThermalZone
from teaser.logic.buildingobjects.buildingsystems.buildingahu import BuildingAHU
from teaser.logic.buildingobjects.boundaryconditions.boundaryconditions \
    import BoundaryConditions
from teaser.logic.buildingobjects.buildingphysics.outerwall import OuterWall
from teaser.logic.buildingobjects.buildingphysics.layer import Layer
from teaser.logic.buildingobjects.buildingphysics.material import Material
from teaser.logic.buildingobjects.buildingphysics.rooftop import Rooftop
from teaser.logic.buildingobjects.buildingphysics.groundfloor import \
    GroundFloor
from teaser.logic.buildingobjects.buildingphysics.innerwall import InnerWall
from teaser.logic.buildingobjects.buildingphysics.ceiling import Ceiling
from teaser.logic.buildingobjects.buildingphysics.floor import Floor
from teaser.logic.buildingobjects.buildingphysics.window import Window


def load_lib_sim_model(sim_api, t_prj):
    '''This function loads buildings from a CityGML file

    Parameters
    ----------
    sim_api: libSimModelAPI Project class
        container of libSimModelAPI

    t_prj: Project()
        Teaser instance of Project()
    '''

    for bldg in sim_api.buildings:
        t_bldg = Building(parent=t_prj)
        for tz in bldg.thermal_zones:
            t_tz = ThermalZone(parent=t_bldg)
            for sb in tz.space_boundaries:
                if sb.type == 'SimWall_Wall_ExteriorAboveGrade':
                    t_ow = OuterWall(parent=t_tz)
                    _set_basic_data(t_ow, sb)
                elif sb.type == 'SimSlab_Floor_InterzoneFloor':
                    t_ce = Ceiling(parent=t_tz)
                    _set_basic_data(t_ce, sb)
                    t_tz.area = t_ce.area
                    t_tz.volume = t_ce.area * tz.height/1000
                elif sb.type == 'SimWall_Wall_Interior':
                    t_in = InnerWall(parent=t_tz)
                    _set_basic_data(t_in, sb)
                elif sb.type == 'SimWindow_Window_Exterior':
                    t_win = Window(parent=t_tz)
                    _set_window_data(t_win, sb)

    return t_prj


def _set_basic_data(t_element, space_bound):

    t_element.name = space_bound.type
    t_element.area = space_bound.area
    t_element.tilt = space_bound.tilt
    t_element.orientation = space_bound.orientation

    for i, lay in enumerate(space_bound.mapped_layer):
        t_lay = Layer(parent=t_element, id=i)

        t_lay.thickness = lay.thickness/1000
        mat = Material(parent=t_lay)
        mat.name = lay.material.name
        mat.density = lay.material.density	
        mat.thermal_conduc = lay.material.thermal_conduc
        mat.thermal_conduc = 1		
        if lay.material.heat_capac is not None:		
            mat.heat_capac = lay.material.heat_capac/1000
        else:		
            mat.heat_capac = None		

def _set_window_data(t_element, space_bound):

    t_element.name = space_bound.type
    t_element.area = space_bound.area
    t_element.tilt = space_bound.tilt
    t_element.orientation = space_bound.orientation


    for i, lay in enumerate(space_bound.mapped_layer):
        t_lay = Layer(parent=t_element, id=i)

        t_lay.thickness = lay.thickness/1000
        mat = Material(parent=t_lay)
        mat.name = lay.material.name
        if lay.material.thermal_conduc is not None:
            mat.thermal_conduc = lay.material.thermal_conduc
        else:
            mat.thermal_conduc = (t_lay.thickness /
                ((1/lay.material.u_value)-
                 (1/(mat.parent.parent.inner_convection+mat.parent.parent.inner_radiation))-
                 (1/(mat.parent.parent.outer_convection+mat.parent.parent.outer_radiation))))
            if lay.material.g_value is not None:
                t_element.g_value = lay.material.g_value