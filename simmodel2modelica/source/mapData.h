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
    map_rule_data() { load_map_data(); }
	~map_rule_data() {}

	// retrieve
	vector<component_data>& get_component_list();
	
	// set value
    void set_target_component(component_data& _c) { component_list.push_back(_c); }
    //void set_target_component_list(vector<component_data>& _c_list);

    // rule data for ctypes
    component_data* get_component(int id) { return &component_list.at(id); }
    int get_component_total_number() { return component_list.size(); }

private:
	// a list of component data after filtering the mapping rules
	vector<component_data> component_list;

    // load mapped data
    void load_map_data();
};

#endif