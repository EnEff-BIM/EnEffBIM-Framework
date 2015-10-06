from MappedHierarchy.MappedHierarchy import *
'''
StaticAPI Use Case Scenario:

1 Building
    one boiler
        control: constant flow temperature
    one pump
        control: prescribed pressure rise
    2 connecting pipes
2 Thermal Zones
    each one Radiator
        one valve
            control room set temperature P Controlled
'''
    


def return_mapped_project():
    '''Instantiate MappedPropject, fill attributes'''
    m_prj = MappedProject()
    m_prj.used_library = "AixLib"
    m_prj.library_version = "0.1.0"
    m_prj.project_name = "StaticAPI"
    
    '''Instantiate MappedBuilding, fill attributes, add building to project'''
    m_bldg = MappedBuilding(m_prj)
    m_bldg.building_name = "UseCase1.1"
    m_prj.buildings = [m_bldg]
    '''Instantiate MappedThermalZone m_tz1, m_tz2, fill attributes, add thermal zone to building'''
    m_tz1 = MappedThermalZone(m_bldg)
    m_tz1.zone_name = "OneZone"
    m_tz1.target_name = "OneZone"
    tz1_conv = add_mapped_connector(m_tz1, "internalGainsCon", "HeatPort")
    tz1_rad = add_mapped_connector(m_tz1, "internalGainsRad", "Star")
    
    m_tz2 = MappedThermalZone(m_bldg)
    m_tz2.zone_name = "TwoZone"
    m_tz2.target_name = "TwoZone"
    tz2_conv = add_mapped_connector(m_tz2, "internalGainsCon", "HeatPort")
    tz2_rad = add_mapped_connector(m_tz2, "internalGainsRad", "Star")
    
    m_bldg.thermal_zones = [m_tz1, m_tz2]
    
    '''Instantiate Boiler as MappedComponent, add Properties, add connectors'''
    
    m_bldg_sc_boiler = return_mapped_component(m_bldg,"AixLib.Fluid.HeatExchangers.Boiler","boiler")
    add_mapped_property(m_bldg_sc_boiler, "Medium", "Modelica.Media.Water.ConstantPropertyLiquidWater")  
    add_mapped_property(m_bldg_sc_boiler,"Q_flow_max", 1000.0)
    add_mapped_property(m_bldg_sc_boiler, "Volume", 0.102)
    add_mapped_record(m_bldg_sc_boiler, "boilerEfficiencyB", "AixLib.DataBase.Boiler")
    add_mapped_property(m_bldg_sc_boiler.parameters[3], "boilerEfficiency", [[0,0.5,1],[0.8,0.9,1.1]])
    boiler_a = add_mapped_connector(m_bldg_sc_boiler, "port_a", "Fluid")
    boiler_b = add_mapped_connector(m_bldg_sc_boiler, "port_b", "Fluid")
    boiler_real = add_mapped_connector(m_bldg_sc_boiler, "T_set", "Real")
    
    ctrl_boiler = add_mapped_control(m_bldg_sc_boiler, 'T_set_const', boiler_real)
    add_mapped_property(ctrl_boiler, "k", 330.0)
    
    '''Instantiate Pump as MappedComponent, add Properties, add connectors'''
    
    m_bldg_sc_pump = return_mapped_component(m_bldg,"AixLib.Fluid.Movers.FlowControlled_dp","pump")
    add_mapped_property(m_bldg_sc_pump, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pump, "addPowerToMedium", False)
    add_mapped_record(m_bldg_sc_pump, "per", "AixLib.Fluid.Movers.Data.FlowControlled")
    add_mapped_record(m_bldg_sc_pump.parameters[2], "hydraulicEfficiency", "AixLib.Fluid.Movers.BaseClasses.Characteristics.efficiencyParameters")
    add_mapped_property(m_bldg_sc_pump.parameters[2].parameters[0], "V_flow",[0,0.5,1])
    add_mapped_property(m_bldg_sc_pump.parameters[2].parameters[0], "eta",[1,0.5,0])
    pump_a = add_mapped_connector(m_bldg_sc_pump, "port_a", "Fluid")
    pump_b = add_mapped_connector(m_bldg_sc_pump, "port_b", "Fluid")
    pump_real = add_mapped_connector(m_bldg_sc_pump, "dp_in", "Real")
    pump_heat = add_mapped_connector(m_bldg_sc_pump, "heatPort", "Heat")
    
    ctrl_pump = add_mapped_control(m_bldg_sc_pump, 'dp_const', pump_real)
    add_mapped_property(ctrl_pump, "k", 330.0)
    
    '''Instantiate Pipe pipe1 and pipe 2 as MappedComponent, add Properties, add connectors'''
    
    m_bldg_sc_pipe1 = return_mapped_component(m_bldg,"AixLib.Fluid.FixedResistances.StaticPipe", "flowPipe")
    add_mapped_property(m_bldg_sc_pipe1, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pipe1, "D", 0.01)
    add_mapped_property(m_bldg_sc_pipe1, "l", 10.01)
    add_mapped_property(m_bldg_sc_pipe1, "e", 0.000021)
    pipe1_a = add_mapped_connector(m_bldg_sc_pipe1, "port_a", "Fluid")
    pipe1_b = add_mapped_connector(m_bldg_sc_pipe1, "port_b", "Fluid")
    
    m_bldg_sc_pipe2 = return_mapped_component(m_bldg, "AixLib.Fluid.FixedResistances.StaticPipe","flowPipe")
    add_mapped_property(m_bldg_sc_pipe2, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_bldg_sc_pipe2, "D", 0.02)
    add_mapped_property(m_bldg_sc_pipe2, "l", 10.02)
    add_mapped_property(m_bldg_sc_pipe2, "e", 0.000022)
    pipe2_a = add_mapped_connector(m_bldg_sc_pipe2, "port_a", "Fluid")
    pipe2_b = add_mapped_connector(m_bldg_sc_pipe2, "port_b", "Fluid")
     
    '''Add Pipe1, Pipe2, Boiler, Pump to the buildings components'''
    
    m_bldg.supply_components = [m_bldg_sc_pipe1, m_bldg_sc_pipe2, m_bldg_sc_boiler, m_bldg_sc_pump]
   
  
    '''Instantiate Radiator 1 MappedComponent, add Properties, add connectors, add to thermal zone'''
    
    m_tz1_sc_radiator = return_mapped_component(m_tz1,"AixLib.Fluid.HeatExchangers.Radiators.Radiator","radiator_tz1")
    add_mapped_property(m_tz1_sc_radiator, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_record(m_tz1_sc_radiator, "RadiatorType","AixLib.DataBase.Radiators")
    
    add_mapped_property(m_tz1_sc_radiator.parameters[1], "NominalPower", 885.94)
    add_mapped_property(m_tz1_sc_radiator.parameters[1], "T_flow_nom", 56.94)
    add_mapped_property(m_tz1_sc_radiator.parameters[1], "T_return_nom", 36.94)
    
    rad1_a = add_mapped_connector(m_tz1_sc_radiator, "port_a", "Fluid")
    rad1_b = add_mapped_connector(m_tz1_sc_radiator, "port_b", "Fluid")
    rad1_conv = add_mapped_connector(m_tz1_sc_radiator, "convPort", "HeatPort")
    rad1_rad = add_mapped_connector(m_tz1_sc_radiator, "radPort", "Star")
    
    '''Instantiate Valve 1 as MappedComponent, add Properties, add connectors, add to thermal zone'''
    
    m_tz1_sc_valve = return_mapped_component(m_tz1,"AixLib.Fluid.Actuators.Valves.SimpleValve","valve_tz1")
    add_mapped_property(m_tz1_sc_radiator, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_tz1_sc_radiator, "Kvs",1.4)
    
    valve1_a = add_mapped_connector(m_tz1_sc_valve, "port_a", "Fluid")
    valve1_b = add_mapped_connector(m_tz1_sc_valve, "port_b", "Fluid")
    valve1_real = add_mapped_connector(m_tz1_sc_valve, "opening", "Real")
    
    ctrl_v1 = add_mapped_control(m_tz1_sc_valve, 'room_T_PID1', valve1_real)
    add_mapped_property(ctrl_v1, "setTemp", 330.0)
    add_mapped_property(ctrl_v1, "k", 0.19688)
    add_mapped_property(ctrl_v1, "yMin", 0)
    add_mapped_property(ctrl_v1, "yMax", 1)
           
    m_tz1.supply_components = [m_tz1_sc_radiator, m_tz1_sc_valve]

    '''Instantiate Radiator 2 MappedComponent, add Properties, add connectors, add to thermal zone'''
    
    m_tz2_sc_radiator = return_mapped_component(m_tz2,"AixLib.Fluid.HeatExchangers.Radiators.Radiator","radiator_tz2")
    add_mapped_property(m_tz2_sc_radiator, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_record(m_tz2_sc_radiator, "RadiatorType","AixLib.DataBase.Radiators")
    
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "NominalPower", 885.94)
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "T_flow_nom", 56.94)
    add_mapped_property(m_tz2_sc_radiator.parameters[1], "T_return_nom", 36.94)
    
    rad2_a = add_mapped_connector(m_tz2_sc_radiator, "port_a", "Fluid")
    rad2_b = add_mapped_connector(m_tz2_sc_radiator, "port_b", "Fluid")
    rad2_conv = add_mapped_connector(m_tz2_sc_radiator, "convPort", "HeatPort")
    rad2_rad = add_mapped_connector(m_tz2_sc_radiator, "radPort", "Star") 
    
    '''Instantiate Valve 1 as MappedComponent, add Properties, add connectors, add to thermal zone'''
    
    m_tz2_sc_valve = return_mapped_component(m_tz2,"AixLib.Fluid.Actuators.Valves.SimpleValve","valve_tz1")
    add_mapped_property(m_tz2_sc_valve, "Medium","Modelica.Media.Water.ConstantPropertyLiquidWater")
    add_mapped_property(m_tz2_sc_valve, "Kvs",1.4)
    
    valve2_a = add_mapped_connector(m_tz2_sc_valve, "port_a", "Fluid")
    valve2_b = add_mapped_connector(m_tz2_sc_valve, "port_b", "Fluid")
    valve2_real = add_mapped_connector(m_tz2_sc_valve, "opening", "Real")
    
    ctrl_v2 = add_mapped_control(m_tz2_sc_valve, 'room_T_PID', valve2_real)
    add_mapped_property(ctrl_v2, "setTemp", 330.0)
    add_mapped_property(ctrl_v2, "k", 0.19688)
    add_mapped_property(ctrl_v2, "yMin", 0)
    add_mapped_property(ctrl_v2, "yMax", 1)

    m_tz2.supply_components = [m_tz2_sc_radiator,m_tz2_sc_valve]
    
    '''Add all connections'''
    #FluidConnections
    add_mapped_connections(m_prj, pipe1_b, valve1_a , "Fluid")
    add_mapped_connections(m_prj, valve1_b, rad1_a , "Fluid")
    add_mapped_connections(m_prj, rad1_b, valve2_a, "Fluid")
    add_mapped_connections(m_prj, valve1_b, rad2_a , "Fluid")
    add_mapped_connections(m_prj, rad2_b, pipe2_a, "Fluid")
    add_mapped_connections(m_prj, pipe2_b, pump_a , "Fluid")
    add_mapped_connections(m_prj, pump_b, boiler_a, "Fluid")
    add_mapped_connections(m_prj, boiler_b, pipe1_a , "Fluid")
    #Connections from radiator to zone
    add_mapped_connections(m_prj, rad2_conv, tz2_conv, "Heat")
    add_mapped_connections(m_prj, rad2_rad, tz2_rad, "Star")
    add_mapped_connections(m_prj, rad1_conv, tz1_conv, "Heat")
    add_mapped_connections(m_prj, rad1_rad, tz1_rad, "Star")
    
    
    
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

def add_mapped_connector(parent, name, type):
    
    mapped_con = MappedConnector(parent)
    mapped_con.name = name
    mapped_con.type = type

    if isinstance(parent, MappedControl):
        parent.control_connector.append(mapped_con)
    else:
        parent.connectors.append(mapped_con)
           
    return mapped_con
    
def add_mapped_connections(project, input, output, type): 
    mapped_con = MappedConnection(input,output)
    mapped_con.type = type   
    
    project.connections.append(mapped_con)

def add_mapped_control(parent, strategy, ctrl_con):
    
    mapped_ctrl = MappedControl(parent)
    mapped_ctrl.control_strategy = strategy
    mapped_ctrl.control_connector = ctrl_con
    parent.mapped_control = mapped_ctrl
    
    return mapped_ctrl