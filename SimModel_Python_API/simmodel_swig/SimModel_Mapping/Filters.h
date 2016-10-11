#ifndef FILTERS_H
#define FILTERS_H

#include <map>
#include <string>
#include <set>
#include <vector>
#include <limits>
// mapping rules
#include "./mapping_rule_lib/mapping_rule_schema.hxx"
using namespace namespaces::Sim::DataMap;
// sim hierarchy and mapping component
#include "../SimModel_Hierachy/SimHierarchy.h"
// forward declaration
class MappedComponent;
class MappedProperty;

class RuleFilter 
{
private:
	template<class S, class T>
	void parseInnerPropertyId(T _comRuleIt, std::set<std::string>& _ruleIdlist)
	{
		// property rule One2One
		for(S::Property_Map_One2One_Name_iterator it=_comRuleIt->Property_Map_One2One_Name().begin(); it!=_comRuleIt->Property_Map_One2One_Name().end(); ++it)
		{
			_ruleIdlist.insert(*it);
		}

		// property rule Gap
		for(S::Property_Map_Gap_Name_iterator it=_comRuleIt->Property_Map_Gap_Name().begin(); it!=_comRuleIt->Property_Map_Gap_Name().end(); ++it)
		{
			_ruleIdlist.insert(*it);
		}

		// property rule Transformation
		for(S::Property_Map_Transformation_Name_iterator it=_comRuleIt->Property_Map_Transformation_Name().begin(); it!=_comRuleIt->Property_Map_Transformation_Name().end(); ++it)
		{
			_ruleIdlist.insert(*it);
		}
	}

	// save different component mapping rules: <component_name, rule>
	std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator> ComRuleOne2OneList;
	std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator> ComRuleOne2ManyList;
	std::vector<Data_Model_Map::Component_Map_Gap_iterator> ComRuleGapList;

	// <component_One2Many_id, ComponentMappingGroup>
	std::map<std::string, Data_Model_Map::ComponentMappingGroup_iterator> ComMappingGroupList;
	// save different propety mapping rules: <property_id, rule>	
	std::map<std::string, Data_Model_Map::Property_Map_Transformation_iterator> ProRuleTransforList;
	std::map<std::string, Data_Model_Map::Property_Map_One2One_iterator> ProRuleOne2OneList;
	std::map<std::string, Data_Model_Map::Property_Map_Gap_iterator> ProRuleGapList;
	// save different paramters used by property Transformation rules
	std::map<std::string, Data_Model_Map::InputParameter_iterator> InputParaList, ProInputParaList;
	std::map<std::string, Data_Model_Map::InputCoefficient_iterator> InputCoeffList;
	std::map<std::string, Data_Model_Map::OutputParameter_iterator> OutputParaList, ProOutputParaList;

	// get the lower and upper bounding iterators refering to the rules
	std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2One_iterator>::iterator> getComRuleOne2One(std::string SimComponentName);
	std::pair<std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator, std::multimap<std::string, Data_Model_Map::Component_Map_One2Many_iterator>::iterator> getComRuleOne2Many(std::string SimComponentName);

	// check whether the component is necessary to be translated into Modelica
	bool isComRuleOne2One(std::string SimComponentName);
	bool isComRuleOne2Many(std::string SimComponentName);

	// property data filters
	MappedProperty getProRuleGapData(std::string _id);
	// <SimModel component instance RefId, property rule id>
	MappedProperty getProRuleOne2OneData(std::string SimComponentId, std::string _id);
	MappedProperty getProRuleTransformationData(std::string SimComponentId, std::string _id);

	// Python callback
	SimPyCallBack* _callback;

public:
	// check whether the component is necessary to be translated
	bool isMappedComponent(SimHierarchyNode& _simHierarchyNode);
	// translate the SimModel component saved in the hierarchy node
	std::vector<MappedComponent> getMappedData(SimHierarchyNode& _simHierarchyNode);
	std::vector<MappedComponent> getMappedData(SimHierarchyNode& _simHierarchyNode, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData);
	// v2.2
	std::vector<MappedComponent> getMappedData2_2(SimHierarchyNode& _simHierarchyNode, ::std::auto_ptr< ::schema::simxml::Model::SimModel >& simSysData);

	// check whether there are newly added components defined by the mapping rule Gap
	bool isNewComponentAdded();
	// add new component into Modelica as defined in the component mapping rule Gap
	std::vector<MappedComponent> getNewComponent();
	// set mapping rule parsing environment
	void setMappingRule(::std::auto_ptr<Data_Model_Map>& _mapping_rule, SimPyCallBack* _passCallback);

};

#endif // FILTERS_H