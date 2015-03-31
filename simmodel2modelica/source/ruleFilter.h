// Copyright (C) 2012-2015 Institute of Energy Efficient Building E3D,
// RWTH Aachen University, Germany.
//
// This program was developed for the EnEff-BIM project. In EnEff-BIM, 
// a project participating in IEA Annex 60, translators between Building 
// Information Models (BIM) and Modelica are developed to support building
// and community energy performance simulation. This is accomplished through 
// extending existing standards for exchanging energy calculation data, and 
// through data representation formats such as the Industry Foundation Classes (IFC).
//
// This program is free software; you can redistribute it and/or modify it 
// under the terms of the GNU General Public License version 2 as published 
// by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, simmodel2c++ gives permission to 
// link this program with the XML data binding framework generated by the 
// Code Synthesis Tools CC, and distribute linked combinations including 
// the two. You must obey the GNU General Public License version 2 in all 
// respects for all of the code used. If you modify this copy of the program, 
// you may extend this exception to your version of the program, but you are 
// not obligated to do so. If you do not wish to do so, delete this exception 
// statement from your version.
//

#ifndef RULEFILTER_H
#define RULEFILTER_H

// include SimModel hierarchy
// and SimModel API for Python
#include "hierarchy.h"

// refer to the mapping rule class
typedef namespaces::Sim::DataMap::Component_Map_One2one com_map_one2one;
typedef namespaces::Sim::DataMap::Component_Map_One2Many com_map_one2many;
typedef namespaces::Sim::DataMap::ComponentMappingGroup com_map_group;
typedef namespaces::Sim::DataMap::Component_Map_Gap com_map_gap;
typedef namespaces::Sim::DataMap::StringList StringList;

class map_rule_filter
{
public:
	map_rule_filter() {}
	map_rule_filter(auto_ptr<SimMap>& rule_model) { load_rule_data(rule_model); }
	~map_rule_filter() {}

	// filter the SimModel data of given component
	bool filter_component(sim_base* component_ptr, vector<component_data>& _component_list);

	// filter gap component

private:
	// count the number of components
	// give each component an unique id
	static int next_id;
	// increase the id number
	static void next_component_id() { ++next_id; }

	// make index for the property rules: search by rule id
	map<string, SimMap::Property_Map_One2one_iterator> property_one2one_index;
	map<string, SimMap::Property_Map_Gap_iterator> property_gap_index;
	map<string, SimMap::Property_Map_Many2one_iterator> property_many2one_index;
	map<string, SimMap::Property_Map_Conversion_iterator> property_conversion_index;
	map<string, SimMap::Property_Map_Combination_iterator> property_combination_index;
	map<string, SimMap::ComponentMappingGroup_iterator> component_map_group_index;

	// make index for the component rules: search by source component name
	map<string, SimMap::Component_Map_One2one_iterator> component_one2one_index;
	map<string, SimMap::Component_Map_Many2One_iterator> component_many2one_index;
	map<string, SimMap::Component_Map_One2Many_iterator> component_one2many_index;
	SimMap::Component_Map_Gap_sequence* _component_gap_list_ptr;

	// load mapping rules: filter each rules, build the index for them
	void load_rule_data(auto_ptr<SimMap>& rule_model);
	
	// property mappings
	//
	// propetry mapping template: one to one mapping
	void filter_property_map_one2one(SimMap::Property_Map_One2one_iterator property_it, sim_base* component_ptr, property_data& _property);
	// propetry mapping template: gap
	void filter_property_map_gap(SimMap::Property_Map_Gap_iterator property_it, property_data& _property);
	//! propetry mapping template: combination
	void filter_property_map_combination(SimMap::Property_Map_Combination_iterator property_it, property_data& _property);
	// !many2one, conversion

	// component data filter based the mapping rules
	//
	// component mapping template: one to one mapping
	void filter_component_map_one2one(SimMap::Component_Map_One2one_iterator component_it, sim_base* component_ptr, component_data& _component);
	//! component mapping template: many to one mapping
	void filter_component_map_many2one(SimMap::Component_Map_Many2One_iterator component_it, vector<sim_base*>& component_list, component_data& _component);
	// component mapping template: one to many mapping
	void filter_component_map_one2many(SimMap::Component_Map_One2Many_iterator component_it, sim_base* component_ptr, vector<component_data>& _component_list);
	// component mapping template: Gap
	void filter_component_map_gap(SimMap::Component_Map_Gap_iterator component_it, component_data& _component);
};

#endif