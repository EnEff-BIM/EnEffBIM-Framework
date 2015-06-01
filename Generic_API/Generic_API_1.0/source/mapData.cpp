#include "mapData.h"

// get SimModel use case location
void map_rule_data::set_use_case_location(char* _use_case_loc)
{
	_use_case_location = _use_case_loc;
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
		//char* case_loc = "..\\xml_use_case\\Boiler_Gas_VDI6020_Test.xml";
		//set_use_case_location(case_loc);
		ob_model = namespaces::Sim::Model::SimModel_(_use_case_location);
		// load the mapping rules defined for AixLib
		auto_ptr<SimMap> rule_model = namespaces::Sim::DataMap::Data_Model_Map_("..\\xml_mapping_rule\\AixLib_Mapping_Rule.xml");

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
	void TEST_COMMON_DLLSPEC rule_data_transform_model(map_rule_data* _rule_data) { _rule_data->load_map_data(); } 
	// set data file directory
	void TEST_COMMON_DLLSPEC rule_data_set_use_case_location(map_rule_data* _rule_data, char* _use_case_loc) { _rule_data->set_use_case_location(_use_case_loc); }
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
	const char* TEST_COMMON_DLLSPEC sim_project_get_weather_location_city(sim_project* _sim_project) { return _sim_project->get_weather_location_city(); }
	// retrieve total number of sim site objects
	int TEST_COMMON_DLLSPEC sim_project_get_sim_site_number(sim_project* _sim_project) { return _sim_project->get_sim_site_total_number(); }
	// retrieve the sim site object at position id
	sim_site* TEST_COMMON_DLLSPEC sim_project_get_sim_site(sim_project* _sim_project, int id) { return _sim_project->get_sim_site(id); }
	// sim_site
	const char* TEST_COMMON_DLLSPEC sim_site_get_name(sim_site* _sim_site) { return _sim_site->get_sim_site_name(); }
}