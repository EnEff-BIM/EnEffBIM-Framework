#include "SimmodelAPI.h"

// save the corresponding SimModel component before mapping
void component_data::save_unmapped_component(sim_base* _com)
{
	unmapped_component_list.push_back(_com);
}

int component_data::get_unmapped_component_number()
{
	return unmapped_component_list.size();
}

sim_base* component_data::get_unmapped_component(int id)
{
	return unmapped_component_list.at(id);
}