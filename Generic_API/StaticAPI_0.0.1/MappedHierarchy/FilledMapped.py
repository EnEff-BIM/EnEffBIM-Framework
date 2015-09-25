from MappedHierarchy.MappedProject import MappedProject
from MappedHierarchy.MappedBuilding import MappedBuilding
from MappedHierarchy.MappedThermalZone import MappedThermalZone
from MappedHierarchy.MappedComponent import MappedComponent
from MappedHierarchy.MappedProperty import MappedProperty
from MappedHierarchy.MappedRecord import MappedRecord




def return_mapped_project():
    m_prj = MappedProject()
    
    m_prj.used_library = "AixLib"
    m_prj.library_version = "0.1.0"
    
    
    m_bldg = MappedBuilding(m_prj)
            
    m_bldg.building_name = "UseCase1.1"

    #Pipe 1
    m_bldg_sc_pipe1 = return_mapped_component(m_bldg,\
                             "AixLib.Fluid.FixedResistances.StaticPipe", \
                             "flowPipe")
    
    add_mapped_property(m_bldg_sc_pipe1, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pipe1, "D", 0.01)
    add_mapped_property(m_bldg_sc_pipe1, "l", 10.01)
    add_mapped_property(m_bldg_sc_pipe1, "e", 0.000021)
    #Pipe 2
    m_bldg_sc_pipe2 = return_mapped_component(m_bldg,\
                             "AixLib.Fluid.FixedResistances.StaticPipe", \
                             "flowPipe")
    add_mapped_property(m_bldg_sc_pipe2, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pipe2, "D", 0.02)
    add_mapped_property(m_bldg_sc_pipe2, "l", 10.02)
    add_mapped_property(m_bldg_sc_pipe2, "e", 0.000022)
    #Boiler
    m_bldg_sc_boiler = return_mapped_component(m_bldg,\
                             "AixLib.Fluid.HeatExchangers.Boiler", \
                             "boiler")
    add_mapped_property(m_bldg_sc_boiler, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_boiler, "Q_flow_max", 1000.0)
    add_mapped_property(m_bldg_sc_boiler, "Volume", 0.102)
    add_mapped_record(m_bldg_sc_boiler, "boilerEfficiencyB", "AixLib.DataBase.Boiler")
    add_mapped_property(m_bldg_sc_boiler.parameters[3], "boilerEfficiency",\
                         [[0,0.5,1],[0.8,0.9,1.1]])
    #Pump
    m_bldg_sc_pump = return_mapped_component(m_bldg,\
                             "AixLib.Fluid.Movers.Pump", \
                             "pump")
    add_mapped_property(m_bldg_sc_pump, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pump, "ControlStrategy", 0)
    add_mapped_property(m_bldg_sc_pump, "Head_max", 5)
    add_mapped_property(m_bldg_sc_pump, "V_flow_max", 2)
    add_mapped_record(m_bldg_sc_pump, "MinMaxCharacteristics", "AixLib.DataBase.Pump")
    add_mapped_property(m_bldg_sc_pump.parameters[4], "minMaxHead",\
                         [[0,0.5,1],[0.8,0.9,1.1],[0.1,0.2,0.3]])
    m_bldg.supply_components = [m_bldg_sc_pipe1, m_bldg_sc_pipe2, m_bldg_sc_boiler, m_bldg_sc_pump]
    #first zone  
    m_tz1 = MappedThermalZone(m_bldg)
    m_tz1.zone_name = "OneZone"
    m_tz1_sc_radiator = return_mapped_component(m_tz1, \
                            "AixLib.Fluid.HeatExchangers.Radiators.Radiator", \
                            "radiator_tz1")
    add_mapped_property(m_tz1_sc_radiator, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_record(m_tz1_sc_radiator, "RadiatorType", \
                             "AixLib.DataBase.Radiators")
    add_mapped_property(m_tz1_sc_radiator.parameters[1], "NominalPower", 885.94)
    add_mapped_property(m_tz1_sc_radiator.parameters[1], "T_flow_nom", 56.94)
    add_mapped_property(m_tz1_sc_radiator.parameters[1], "T_return_nom", 36.94)
    m_tz1.supply_components = [m_tz1_sc_radiator]
    #seccond zone 
    m_tz2 = MappedThermalZone(m_bldg)
    m_tz2.zone_name = "TwoZone"
    m_tz2_sc_radiator = return_mapped_component(m_tz2, \
                            "AixLib.Fluid.HeatExchangers.Radiators.Radiator", \
                            "radiator_tz1")
    add_mapped_property(m_tz2_sc_radiator, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_record(m_tz2_sc_radiator, "RadiatorType", \
                             "AixLib.DataBase.Radiators")
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "NominalPower", 885.94)
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "T_flow_nom", 56.94)
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "T_return_nom", 36.94)
    m_tz2.supply_components = [m_tz2_sc_radiator]
    m_bldg.thermal_zones = [m_tz1, m_tz2]
    m_prj.buildings = [m_bldg]
    return m_prj
    
def add_mapped_property(parent, name, value):
    
    mapped_prop = MappedProperty(parent)
    mapped_prop.name = name
    mapped_prop.value = value
    
    parent.parameters.append(mapped_prop)
    
def add_mapped_record(parent, name, record_location):
    
    mapped_rec = MappedRecord(parent)
    mapped_rec.name = name
    mapped_rec.record_location = record_location
    
    parent.parameters.append(mapped_rec)

    
def return_mapped_component(parent, target_location, target_name):
    
    mapped_comp = MappedComponent(parent)
    mapped_comp.target_location = target_location
    mapped_comp.target_name = target_name
    
    return mapped_comp
    
"""    
    
    
test = return_mapped_project()

print(test.buildings[0].thermal_zones[0].supply_components[0].parameters[1].parameters)
"""