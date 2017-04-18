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

	class _treeNode
	{
	public:
		// operator or leaf paramter
		std::string _nodeName;
		// leaf or opeator
		bool isLeaf;
		// constant or parameter
		bool isConstant;
		// constant string or number
		bool isConstantNumber;
		double constantValue;
		// parent node
		bool hasParent;
		int parentId;
		// children
		bool hasLeftChild, hasRightChild;
		int leftChildId, rightChildId;

		_treeNode()
		{
			isLeaf = false;
			isConstant = false;
			isConstantNumber = false;
			constantValue = 0;
			hasParent = false;
			hasLeftChild = false;
			hasRightChild = false;
			parentId = leftChildId = rightChildId = 100;
		}
	};

	class _inputParametrInfo
	{
	public:
		std::string _inputParaName;
		std::string _inputParaType;
		bool isNumber;
		std::string _inputParaStrValue;
		double _inputParaValue;
		double _inputParaLowerBoundValue;
		double _inputParaUpperBoundValue;

		_inputParametrInfo()
		{
			_inputParaType = "single";
			isNumber = true;
			_inputParaStrValue = "";
			_inputParaValue = _inputParaLowerBoundValue = _inputParaUpperBoundValue = 0;
		}
	};

	// save parsed function elements
	std::vector<_treeNode> _treeNodeList;
	// save the memergy positions of parsed function elements
	// <_nodeName, vector_pos>
	std::map<std::string, int> _operatorRankMap;
	// set the left child node
	void setLeftChild(int _funItPos, int leftNeighborPos, int _deep);
	// set the right child node
	void setRightChild(int _funItPos, int rightNeighborPos);
	// execute the function
	double exeFunction(std::vector<_treeNode>& _FunTreeNodeList, std::string _inputParaName, double _inputParaValue, std::map<std::string, double>& _inputCoefficientMap, _inputParametrInfo& __inputParameterInstance);
	// find the root node of the function element tree
	int findRootNode(std::vector<_treeNode>& _FunTreeNodeList);
	// caculate the value defined by the given operator
	double getFunOperatorValue(std::vector<_treeNode>& _FunTreeNodeList, int _i, std::string _inputParaName, double _inputParaValue, std::map<std::string, double>& _inputCoefficientMap, _inputParametrInfo& __inputParameterInstance, bool _flag=true);

	void setOperatorRank()
	{
		//_operatorRankMap.clear();
		if(_operatorRankMap.empty())
		{
			_operatorRankMap.insert(std::pair<std::string, int>("*", 3));
			_operatorRankMap.insert(std::pair<std::string, int>("/", 3));
			_operatorRankMap.insert(std::pair<std::string, int>("+", 2));
			_operatorRankMap.insert(std::pair<std::string, int>("-", 2));
			_operatorRankMap.insert(std::pair<std::string, int>("==", 1));
			_operatorRankMap.insert(std::pair<std::string, int>(":", 1));
			_operatorRankMap.insert(std::pair<std::string, int>("?", 0));
		}
	}

public:
	// check whether the component is necessary to be translated
	bool isMappedComponent(SimHierarchyNode& _simHierarchyNode);
	// translate the SimModel component saved in the hierarchy node
	// v2.2
	std::vector<MappedComponent> getMappedData2_2(SimHierarchyNode& _simHierarchyNode);

	// check whether there are newly added components defined by the mapping rule Gap
	bool isNewComponentAdded();
	// add new component into Modelica as defined in the component mapping rule Gap
	std::vector<MappedComponent> getNewComponent();
	// set mapping rule parsing environment
	void setMappingRule(::std::auto_ptr<Data_Model_Map>& _mapping_rule, SimPyCallBack* _passCallback);

};

#endif // FILTERS_H