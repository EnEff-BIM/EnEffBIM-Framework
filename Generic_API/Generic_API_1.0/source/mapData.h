#ifndef MAPDATA_H
#define MAPDATA_H

// include the head files
// for SimModel and mapping rule API
#include "simmodelParser.h"
#include "ruleFilter.h"

// save a list of component data
// translated by the mapping rules
class map_rule_data
{
public:
    //map_rule_data() { load_map_data(); }
	map_rule_data() {}
	~map_rule_data() {}

	// retrieve
	vector<component_data>& get_component_list();
	// loop connections
	// retrieve the total number of loop connections
	int get_loop_connection_total_number();
	// retrieve the connection at the position id
	sim_conns* get_loop_connection(int id);
	
	// set value
    void set_target_component(component_data& _c) { component_list.push_back(_c); }
    //void set_target_component_list(vector<component_data>& _c_list);

    // rule data for ctypes
    component_data* get_component(int id) { return &component_list.at(id); }
    int get_component_total_number() { return component_list.size(); }

	// retrieve the root class of SimModel hierarchy
	sim_project* get_root_class() { return &sim_parse.get_sim_project(); }

	// get SimModel use case location
	void set_use_case_location(char* _use_case_loc);
	// set SimModel use case location
	// set mapping rule location
	void set_data_location(char* _use_case_loc, char* _map_rule_loc);
	// load mapped data
    void load_map_data();

private:
	// a list of component data after filtering the mapping rules
	vector<component_data> component_list;
	// SimModel hierarchy parser
	simmodel_parser sim_parse;
	// use case data stored in the SimXML file
	auto_ptr<SimModel> ob_model;
	// use case directory
	char* _use_case_location;
	// mapping rule location
	char* _map_rule_location;
};

#endif