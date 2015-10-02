from MappedHierarchy.MappedProject import MappedProject
from MappedHierarchy.MappedBuilding import MappedBuilding
from MappedHierarchy.MappedThermalZone import MappedThermalZone
from MappedHierarchy.MappedComponent import MappedComponent
from MappedHierarchy.MappedProperty import MappedProperty
from MappedHierarchy.MappedRecord import MappedRecord
from MappedHierarchy.MappedConnector import MappedConnector
from MappedHierarchy.MappedConnection import MappedConnection

def return_mapped_project():
    m_prj = MappedProject()
    
    m_prj.used_library = "AixLib"
    m_prj.library_version = "0.1.0"
    m_prj.project_name = "StaticAPI"
    
    m_bldg = MappedBuilding(m_prj)
            
    m_bldg.building_name = "UseCase1.1"
    
    m_prj.connections_hard = [["weather.WeatherDataVector", "thermalZone.weather"],
                              ["weather.SolarRadiation_OrientedSurfaces", "thermalZone.solarRad_in"],
                              ["infiltrationRate.y", "thermalZone.infiltrationRate"],
                              ["internalLoads.y", "thermalZone.internalGains"],
                              ["pump.port_b", "boiler.port_a"],
                              ["boiler.port_b", "flowPipe.port_a"],
                              ["valve.port_a", "flowPipe.port_b"],
                              ["valve.port_b", "radiator.port_a"],
                              ["radiator.port_b", "returnPipe.port_a"],
                              ["pump.port_a", "returnPipe.port_b"],
                              ["radiator.convPort", "thermalZone.internalGainsConv"],
                              ["thermalZone.internalGainsConv", "temperatureSensor.port"],
                              ["temperatureSensor.T", "PID.u_m"],
                              ["PID.u_s", "setTemp.y"],
                              ["PID.y", "valve.opening"],
                              ["nightSignal.y", "pump.IsNight"],
                              ["thermalZone.internalGainsRad", "radiator.radPort"],
                              ["flowTemp.y", "boiler.T_set"],
                              ["weather.WeatherDataVector[1]", "thermalZone.infiltrationTemperature"],
                              ["expansionVessel.ports[1]", "pump.port_a"]]

    #Pipe 1
    m_bldg_sc_pipe1 = return_mapped_component(m_bldg,\
                             "AixLib.Fluid.FixedResistances.StaticPipe", \
                             "flowPipe")
    
    add_mapped_property(m_bldg_sc_pipe1, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pipe1, "D", 0.01)
    add_mapped_property(m_bldg_sc_pipe1, "l", 10.01)
    add_mapped_property(m_bldg_sc_pipe1, "e", 0.000021)
    pipe1_a = add_mapped_connector(m_bldg_sc_pipe1, "port_a", "Fluid", "Input")
    pipe1_b = add_mapped_connector(m_bldg_sc_pipe1, "port_b", "Fluid", "Output")
    
    
    #Pipe 2
    m_bldg_sc_pipe2 = return_mapped_component(m_bldg,\
                             "AixLib.Fluid.FixedResistances.StaticPipe", \
                             "flowPipe")
    add_mapped_property(m_bldg_sc_pipe2, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pipe2, "D", 0.02)
    add_mapped_property(m_bldg_sc_pipe2, "l", 10.02)
    add_mapped_property(m_bldg_sc_pipe2, "e", 0.000022)
    pipe2_a = add_mapped_connector(m_bldg_sc_pipe2, "port_a", "Fluid", "Input")
    pipe2_b = add_mapped_connector(m_bldg_sc_pipe2, "port_b", "Fluid", "Output")
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
    boiler_a = add_mapped_connector(m_bldg_sc_boiler, "port_a", "Fluid", "Input")
    boiler_b = add_mapped_connector(m_bldg_sc_boiler, "port_b", "Fluid", "Output")
    boiler_real = add_mapped_connector(m_bldg_sc_boiler, "T_set", "Real", "Input")
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
    pump_a = add_mapped_connector(m_bldg_sc_pump, "port_a", "Fluid", "Input")
    pump_b = add_mapped_connector(m_bldg_sc_pump, "port_b", "Fluid", "Output")
    pump_bool = add_mapped_connector(m_bldg_sc_pump, "IsNight", "Boolean", "Input")
    
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
    
    rad1_a = add_mapped_connector(m_tz1_sc_radiator, "port_a", "Fluid", "Input")
    rad1_b = add_mapped_connector(m_tz1_sc_radiator, "port_b", "Fluid", "Output")
    rad1_conv = add_mapped_connector(m_tz1_sc_radiator, "convPort", "HeatPort", "Output")
    rad1_rad = add_mapped_connector(m_tz1_sc_radiator, "radPort", "Star", "Output")
    
    tz1_conv = add_mapped_connector(m_tz1, "internalGainsCon", "HeatPort", "Input")
    tz1_rad = add_mapped_connector(m_tz1, "internalGainsRad", "Star", "Input")
    
    m_tz1.supply_components = [m_tz1_sc_radiator]
    #seccond zone 
    m_tz2 = MappedThermalZone(m_bldg)
    m_tz2.zone_name = "TwoZone"
    m_tz2_sc_radiator = return_mapped_component(m_tz2, \
                            "AixLib.Fluid.HeatExchangers.Radiators.Radiator", \
                            "radiator_tz2")
    add_mapped_property(m_tz2_sc_radiator, "Medium",\
                             "Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_record(m_tz2_sc_radiator, "RadiatorType", \
                             "AixLib.DataBase.Radiators")
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "NominalPower", 885.94)
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "T_flow_nom", 56.94)
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "T_return_nom", 36.94)
    
    rad2_a = add_mapped_connector(m_tz2_sc_radiator, "port_a", "Fluid", "Input")
    rad2_b = add_mapped_connector(m_tz2_sc_radiator, "port_b", "Fluid", "Output")
    rad2_conv = add_mapped_connector(m_tz2_sc_radiator, "convPort", "HeatPort", "Output")
    rad2_rad = add_mapped_connector(m_tz2_sc_radiator, "radPort", "Star", "Output")
    
    tz2_conv = add_mapped_connector(m_tz2, "internalGainsCon", "HeatPort", "Input")
    tz2_rad = add_mapped_connector(m_tz2, "internalGainsRad", "Star", "Input")
    
    
    m_tz2.supply_components = [m_tz2_sc_radiator]
    m_bldg.thermal_zones = [m_tz1, m_tz2]
    m_prj.buildings = [m_bldg]
    
    #FluidConnections
    add_mapped_connections(m_prj, pipe1_b, rad1_a , "Fluid")
    add_mapped_connections(m_prj, rad1_b, rad2_a, "Fluid")
    add_mapped_connections(m_prj, rad2_b, pipe2_a, "Fluid")
    add_mapped_connections(m_prj, pipe2_b, pump_a , "Fluid")
    add_mapped_connections(m_prj, pump_b, boiler_a, "Fluid")
    add_mapped_connections(m_prj, boiler_b, pipe1_a , "Fluid")
    #Connections from radiator to zone
    add_mapped_connections(m_prj, rad2_conv, tz2_conv, "Heat")
    add_mapped_connections(m_prj, rad2_rad, tz2_rad, "Star")
    add_mapped_connections(m_prj, rad1_conv, tz1_conv, "Heat")
    add_mapped_connections(m_prj, rad1_rad, tz1_rad, "Star")
    #
    
    
    
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

def add_mapped_connector(parent, name, type, input_output):
    
    mapped_con = MappedConnector(parent)
    mapped_con.name = name
    mapped_con.type = type
    
    parent.connectors.append(mapped_con)
    return mapped_con
    
def add_mapped_connections(project, input, output, type): 
    mapped_con = MappedConnection(input,output)
    mapped_con.type = type   
    
    project.connections.append(mapped_con)

