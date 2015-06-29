#include "mapData.h"

// get SimModel use case location
void map_rule_data::set_use_case_location(char* _use_case_loc)
{
	_use_case_location = _use_case_loc;
}

// set SimModel use case location
// set mapping rule location
void map_rule_data::set_data_location(char* _use_case_loc, char* _map_rule_loc)
{
	_use_case_location = _use_case_loc;
	_map_rule_location = _map_rule_loc;
}

// retrieve the total number of loop connections
int map_rule_data::get_loop_connection_total_number()
{
	return sim_parse.get_loop_connection_list().size();
}

// retrieve the connection at the position id
sim_conns* map_rule_data::get_loop_connection(int id)
{
	return &sim_parse.get_loop_connection_list().at(id);
}

// load mapped data
void map_rule_data::load_map_data()
{
	// register the Simmodel meta info
	qRegisterMetaType<sim_flwEngyTran_convectheater_water*>();
	qRegisterMetaType<sim_flwMov_pump_varSpedRet*>();
	qRegisterMetaType<sim_flwPlt_hotwater_boiler*>();

    try
    {
		// load the use case data defined by SimModel from the SimXML file
        //ob_model = namespaces::Sim::Model::SimModel_("..\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml");
		ob_model = namespaces::Sim::Model::SimModel_(_use_case_location);
		// load the mapping rules defined for AixLib
		//auto_ptr<SimMap> rule_model = namespaces::Sim::DataMap::Data_Model_Map_("..\\xml_mapping_rule\\AixLib_Mapping_Rule.xml");
		auto_ptr<SimMap> rule_model = namespaces::Sim::DataMap::Data_Model_Map_(_map_rule_location);

		// load SimModel hierarchy
		//simmodel_parser sim_parse;
		sim_parse.load_model_hierarchy(ob_model);
		sim_parse.load_sim_conns(ob_model);
		
		// Map SimModel component into Modelica data
		// load mapping rules
		map_rule_filter sim_map(rule_model);
		// save mapped data
		//vector<component_data> _component_list;

		// iterate the component list
		for(map<string, sim_base*>::iterator _com_list_it = sim_parse.get_component_list().begin(); _com_list_it!=sim_parse.get_component_list().end(); ++_com_list_it)
		{
			sim_map.filter_component(_com_list_it->second, component_list);
		}
		// add the missing components
		sim_map.add_gap_component(component_list);
	}
	catch (const xml_schema::exception& e)
        {
            // output the syntax error by command line
            cerr << e << endl;
            // save error info into file
            string _file = "..\\errorLog.txt";
            // create the .txt file, then open
            ofstream io_file(_file.c_str());
            if (io_file.is_open())
            {
                // save syntax error info
                io_file << e << endl;
                // close the file
                io_file.close();
            }
        }
}

extern "C" {
	// list of components
    map_rule_data* TEST_COMMON_DLLSPEC rule_data_init() { return new map_rule_data(); }
	// set SimModel use case location and mapping rule location
	void TEST_COMMON_DLLSPEC rule_data_set_data_location(map_rule_data* _rule_data, char* _use_case_loc, char* _map_rule_loc) { _rule_data->set_data_location(_use_case_loc, _map_rule_loc); }
	// set data file directory
	void TEST_COMMON_DLLSPEC rule_data_set_use_case_location(map_rule_data* _rule_data, char* _use_case_loc) { _rule_data->set_use_case_location(_use_case_loc); }
	// load use case and mapping rule, then transform the model
	void TEST_COMMON_DLLSPEC rule_data_transform_model(map_rule_data* _rule_data) { _rule_data->load_map_data(); } 
	// retrieve component
    component_data* TEST_COMMON_DLLSPEC rule_data_get_component(map_rule_data* _rule_data, int id) { return _rule_data->get_component(id); }
	int TEST_COMMON_DLLSPEC rule_data_get_component_number(map_rule_data* _rule_data) { return _rule_data->get_component_total_number(); }
	// each component
	const char* TEST_COMMON_DLLSPEC component_get_target_name(component_data* _component) { return _component->get_target_name(); }
    const char* TEST_COMMON_DLLSPEC component_get_target_location(component_data* _component) { return _component->get_target_location(); }
    property_data* TEST_COMMON_DLLSPEC component_get_property(component_data* _component, int id) { return _component->get_property(id); }
	int TEST_COMMON_DLLSPEC component_get_property_number(component_data* _component) { return _component->get_property_total_number(); }
	// each property
    const char* TEST_COMMON_DLLSPEC property_get_name(property_data* _property) { return _property->get_name(); }
	const char* TEST_COMMON_DLLSPEC property_get_value(property_data* _property) { return _property->get_value(); }
    const char* TEST_COMMON_DLLSPEC property_get_target_location(property_data* _property) { return _property->get_target_location(); }
    const char* TEST_COMMON_DLLSPEC property_get_record_instance(property_data* _property) { return _property->get_record_instance(); }
    const char* TEST_COMMON_DLLSPEC property_get_record_location(property_data* _property) { return _property->get_record_location(); }
    const char* TEST_COMMON_DLLSPEC property_get_value_group(property_data* _property) { return _property->get_value_group(); }
	bool TEST_COMMON_DLLSPEC property_get_flag(property_data* _property) { return _property->get_flag(); }

	// hierarchy object list
	// sim_project
	sim_project* TEST_COMMON_DLLSPEC  sim_project_init(map_rule_data* _rule_data) { return _rule_data->get_root_class(); }
	// internal properties of sim project
	const char* TEST_COMMON_DLLSPEC sim_project_get_weather_location_city(sim_project* _sim_project) { return _sim_project->get_weather_location_city(); }

	// sim_site
	// retrieve the sim site object at position id
	sim_site* TEST_COMMON_DLLSPEC sim_project_get_sim_site(sim_project* _sim_project, int id) { return _sim_project->get_sim_site(id); }
	// retrieve total number of sim site objects
	int TEST_COMMON_DLLSPEC sim_project_get_sim_site_number(sim_project* _sim_project) { return _sim_project->get_sim_site_total_number(); }
	// internal properties of sim project
	const char* TEST_COMMON_DLLSPEC sim_site_get_name(sim_site* _sim_site) { return _sim_site->get_sim_site_name(); }

	// sim_building
	// retrieve the sim building object at position id
	sim_building* TEST_COMMON_DLLSPEC sim_site_get_sim_building(sim_site* _sim_site, int id) { return _sim_site->get_sim_building(id); }
	// retrieve the total number of sim_building objects
	int TEST_COMMON_DLLSPEC sim_site_get_sim_building_number(sim_site* _sim_site) { return _sim_site->get_sim_building_total_number(); }

	// sim_thermal_zone
	// retrieve the sim_thermal_zone object with a given id
	sim_thermal_zone* TEST_COMMON_DLLSPEC sim_building_get_sim_thermal_zone(sim_building* _sim_building, int id) { return _sim_building->get_sim_thermal_zone(id); }
	// retrieve the total number of sim_thermal_zone objects
	int TEST_COMMON_DLLSPEC sim_building_get_sim_thermal_zone_number(sim_building* _sim_building) { return _sim_building->get_sim_thermal_zone_total_number(); }

	// sim system objects
	// retrieve the system object
	sim_base* TEST_COMMON_DLLSPEC sim_building_get_sim_system(sim_building* _sim_building, int id) { return _sim_building->get_sim_system(id); }
	// retrieve the total number of sim systems
	int TEST_COMMON_DLLSPEC sim_building_get_sim_system_number(sim_building* _sim_building) { return _sim_building->get_sim_system_total_number(); }
	// retrieve the system component name
	const char* TEST_COMMON_DLLSPEC sim_system_get_name(sim_base* _sim_base) { return _sim_base->get_com_name().c_str(); }
	// convert system objects
	// convert to the hot water system
	sim_hotwater_system* TEST_COMMON_DLLSPEC sim_system_to_hotwater_system(sim_base* _sim_base) { return _sim_base->to_hotwater_system(); }
	// convert to the pump of variable speed return
	sim_flwMov_pump_varSpedRet* TEST_COMMON_DLLSPEC sim_system_to_pump_varSpedRet(sim_base* _sim_base) { return _sim_base->to_pump_varSpedRet(); }
	// convert to hot water boiler
	sim_flwPlt_hotwater_boiler* TEST_COMMON_DLLSPEC sim_system_to_boiler_hotwater(sim_base* _sim_base) { return _sim_base->to_boiler_hotwater(); }
	// convert to convective water heater
	sim_flwEngyTran_convectheater_water* TEST_COMMON_DLLSPEC sim_system_to_heater_convectwater(sim_base* _sim_base) { return _sim_base->to_heater_convectwater(); }


	// sim system: hot water
	// internal properties
	double TEST_COMMON_DLLSPEC sim_system_hotwater_get_max_loop_temp(sim_hotwater_system* _sim_sys_hotwater) { return _sim_sys_hotwater->get_max_loop_temp(); }
	
	// supply side: of hot water system
	// retrieve the supply side of the sim hot water system
	sim_hotwater_supply* TEST_COMMON_DLLSPEC sim_system_hotwater_get_supply(sim_hotwater_system* _sim_sys_hotwater) { return _sim_sys_hotwater->get_hotwater_supply(); }
	// retrieve the water supply component
	sim_base* TEST_COMMON_DLLSPEC sim_system_hotwater_get_water_supply_component(sim_hotwater_supply* _sim_hotwater_supply, int id) { return _sim_hotwater_supply->get_water_supply_component(id); }
	// retrieve the total number of water supply components
	int TEST_COMMON_DLLSPEC sim_system_hotwater_get_water_supply_component_number(sim_hotwater_supply* _sim_hotwater_supply) { return _sim_hotwater_supply->get_water_supply_component_total_number(); }

	// component internal properties of the supply side
	// water pump of variable speed return
	const char* TEST_COMMON_DLLSPEC sim_pump_varSpedRet_ratedFlowRate(sim_flwMov_pump_varSpedRet* _sim_pump_varSpedRet) { return _sim_pump_varSpedRet->get_SimFlowMover_RatedFlowRate().c_str(); }

	// demand side: of the hot water system
	// retrieve the demand side of the sim hot water system
	sim_hotwater_demand* TEST_COMMON_DLLSPEC sim_system_hotwater_get_demand(sim_hotwater_system* _sim_sys_hotwater) { return _sim_sys_hotwater->get_hotwater_demand(); }
	// retrieve the water demand component
	sim_base* TEST_COMMON_DLLSPEC sim_system_hotwater_get_water_demand_component(sim_hotwater_demand* _sim_hotwater_demand, int id) { return _sim_hotwater_demand->get_water_demand_component(id); }
	// retrieve the total number of water demand components
	int TEST_COMMON_DLLSPEC sim_system_hotwater_get_water_demand_component_number(sim_hotwater_demand* _sim_hotwater_demand) { return _sim_hotwater_demand->get_water_demand_component_total_number(); }

	// control side:
	// retrieve the control side system of the sim hot water system loop
	sim_hotwater_control* TEST_COMMON_DLLSPEC sim_system_hotwater_get_control(sim_hotwater_system* _sim_sys_hotwater) { return _sim_sys_hotwater->get_hotwater_control(); }
	// retrieve the water control component
	sim_base* TEST_COMMON_DLLSPEC sim_system_hotwater_get_water_control_component(sim_hotwater_control* _sim_hotwater_control, int id) { return _sim_hotwater_control->get_water_control_component(id); }
	// retrieve the total number of water control components
	int TEST_COMMON_DLLSPEC sim_system_hotwater_get_water_control_component_number(sim_hotwater_control* _sim_hotwater_control) { return _sim_hotwater_control->get_water_control_component_total_number(); }



	// loop connections
	// retrieve the connection at the position id
	sim_conns* TEST_COMMON_DLLSPEC sim_system_get_loop_connection(map_rule_data* _rule_data, int id) { return _rule_data->get_loop_connection(id); }
	// retrieve the total number of loop connections
	int TEST_COMMON_DLLSPEC sim_system_get_loop_connection_number(map_rule_data* _rule_data) { return _rule_data->get_loop_connection_total_number(); }
	// retrieve the component with outlet port
	sim_base* TEST_COMMON_DLLSPEC sim_system_get_outlet_component(sim_conns* _sim_conn) { return _sim_conn->get_com_out_ptr(); }
	// retrieve the component with inlet port
	sim_base* TEST_COMMON_DLLSPEC sim_system_get_inlet_component(sim_conns* _sim_conn) { return _sim_conn->get_com_in_ptr(); }
}