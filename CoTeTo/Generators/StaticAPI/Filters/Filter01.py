#-*- coding:utf-8 -*-
#
# This file is part of MoCGF - a code generation framework
# 20141114 Joerg Raedler jraedler@udk-berlin.de
#
def filter01(filter, *args, **kwargs):
    
    static_data = filter['static_data']

    for bldg_count in static_data.buildings:
        
        for comp_key, comp_value in bldg_count.hvac_component_group.items():
            for comp_count in comp_value:
                if comp_count.map_control != None:
                    
                    if comp_count.map_control.control_strategy == "T_set_const" or \
                       comp_count.map_control.control_strategy == "dp_const":
                        
                        con = static_data.create_connector(None, "y", "Real")
                        sys = static_data.create_system("Modelica.Blocks.Sources.Constant", comp_count.map_control.control_strategy, [con], bldg_count)
                        for para in comp_count.map_control.parameters:
                            static_data.create_mapped_property(sys, para.name, para.value)
                        con.parent = sys
                        static_data.add_connection(con, comp_count.map_control.control_connector)
                    elif comp_count.map_control == "room_T_PID1":
                        
                        con = static_data.create_connector(None, "y", "Real")
                        sys = static_data.create_system("Modelica.Blocks.Sources.Constant", (comp_zone_count.map_control.control_strategy+"_T_set"), [con], bldg_count)
                        for para in comp_count.map_control.parameters:
                            static_data.create_mapped_property(sys, para.name, para.value)
                        con.parent = sys
                        
                        con_a = static_data.create_connector(None, "T", "Real")
                        con_b = static_data.create_connector(None, "port", "Heat")
                        sys1 = static_data.create_system("Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor", (comp_zone_count.map_control.control_strategy+"_sens"), [con], bldg_count)
                        con_a.parent = sys1
                        con_b.parent = sys1
                        
                        con_c = static_data.create_connector(None, "u_s", "Real")
                        con_d = static_data.create_connector(None, "u_m", "Real")
                        con_e = static_data.create_connector(None, "y", "Real")
                        sys2 = static_data.create_system("Modelica.Blocks.Continuous.LimPID", (comp_zone_count.map_control.control_strategy+"_contrl"), [con], bldg_count)
                        for para in comp_count.map_control.parameters:
                            static_data.create_mapped_property(sys2, para.name, para.value)
                        con_c.parent = sys2
                        con_d.parent = sys2
                        con_e.parent = sys2
                        
                        static_data.add_connection(con, con_c)
                        static_data.add_connection(con_a, con_d)
                        for check in comp_count.parent.connectors:
                            if check.type == "HeatPort":
                                con_f = check
                        static_data.add_connection(con_b, con_f)
                        static_data.add_connection(con_e, comp_count.map_control.control_connector)
