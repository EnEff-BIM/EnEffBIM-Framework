#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#
def filter01(filter, *args, **kwargs):
    
    static_data = filter['static_data']
    
    for bldg_count in static_data.buildings:
        for comp_count in bldg_count.supply_components:
            if comp_count.mapped_control != None:
                if comp_count.mapped_control.control_strategy == "T_set_const" or \
                   comp_count.mapped_control.control_strategy == "dp_const":
                    
                    con = static_data.create_connector(None, "y", "Real")
                    sys = static_data.create_system("Modelica.Blocks.Sources.Constant", comp_count.mapped_control.control_strategy, [con])
                    for para in comp_count.mapped_control.parameters:
                        static_data.create_mapped_property(sys, para.name, para.value)
                    con.parent = sys
                    static_data.add_connection(con, comp_count.mapped_control.control_connector)
                    comp_count.parent.supply_components.append(sys)
                    
        for zone_count in bldg_count.thermal_zones:
            for comp_zone_count in zone_count.supply_components:
                if comp_zone_count.mapped_control != None:
                    if comp_zone_count.mapped_control.control_strategy == "room_T_PID1":
                    
                         con = static_data.create_connector(None, "y", "Real")
                         sys = static_data.create_system("Modelica.Blocks.Sources.Constant", (comp_zone_count.mapped_control.control_strategy+"_T_set"), [con])
                         for para in comp_zone_count.mapped_control.parameters:
                             static_data.create_mapped_property(sys, para.name, para.value)
                         con.parent = sys
                        
                         con_a = static_data.create_connector(None, "T", "Real")
                         con_b = static_data.create_connector(None, "port", "Heat")
                         sys1 = static_data.create_system("Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor", (comp_zone_count.mapped_control.control_strategy+"_sens"), [con])
                         con_a.parent = sys1
                         con_b.parent = sys1
                        
                         con_c = static_data.create_connector(None, "u_s", "Real")
                         con_d = static_data.create_connector(None, "u_m", "Real")
                         con_e = static_data.create_connector(None, "y", "Real")
                         sys2 = static_data.create_system("Modelica.Blocks.Continuous.LimPID", (comp_zone_count.mapped_control.control_strategy+"_contrl"), [con])
                         for para in comp_zone_count.mapped_control.parameters:
                             static_data.create_mapped_property(sys2, para.name, para.value)
                         con_c.parent = sys2
                         con_d.parent = sys2
                         con_e.parent = sys2
                         
                         static_data.add_connection(con, con_c)
                         static_data.add_connection(con_a, con_d)
                         for check in comp_zone_count.parent.connectors:
                             if check.type == "HeatPort":
                                 con_f = check
                         static_data.add_connection(con_b, con_f)
                         static_data.add_connection(con_e, comp_zone_count.mapped_control.control_connector)

