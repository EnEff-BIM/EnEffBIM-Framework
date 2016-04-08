#ifndef SIM_HIERARCHY_H
#define SIM_HIERARCHY_H

#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
//using namespace std;
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace schema::simxml::Model;
using namespace schema::simxml::SimModelCore;

// forward declaration
class MappedComponent;

class __declspec(dllexport) SimHierarchyNodeBase
{
public:
	// current object
	SimRoot* _SimRootObject;
	// data type conversion
	template<class T>
	T* dataType()
	{
		return static_cast<T*>(_SimRootObject);
	}
};

class __declspec(dllexport) SimHierarchyNode : public SimHierarchyNodeBase
{
private:
	// parent objects
	std::vector<SimHierarchyNode*> ParentList;
	// children objects
	std::vector<SimHierarchyNode*> ChildList;
	// parent object id list
	std::set<std::string> ParentIdList;
	// child object id list
	std::set<std::string> ChildIdList;
	// mapped data objects
	std::vector<MappedComponent*> LocalMappedComponentList;

	// set SimModel object
	friend void setCurrentObject(SimHierarchyNode& _simNode, SimRoot& _simObj);
	// add parent object
	friend void addParent(SimHierarchyNode& _simNode, SimHierarchyNode& _simParentNode);
	// add child object
	friend void addChild(SimHierarchyNode& _simNode, SimHierarchyNode& _simChildNode);
	// add parent child relationship
	friend void addNodesRelationship(SimHierarchyNode& _simParentNode, SimHierarchyNode&_simChildNode);

public:
	SimHierarchyNode() 
	{ 
		_SimRootObject = NULL; 
		ParentList.resize(0);
		ChildList.resize(0);
		LocalMappedComponentList.resize(0);
	}
	// get its parent objects
	std::vector<SimHierarchyNode*>& getParentList();
	// get its child objects
	std::vector<SimHierarchyNode*>& getChildList();
	// get its mapped objects
	std::vector<MappedComponent*>& getMappedComponents();
	// check SimModel object class type
	bool isClassType(std::string _type);
	// get SimModel object class type
	std::string ClassType();
	// check parent object
	bool isParent(SimHierarchyNode& _simNode);
	bool isParent(SimHierarchyNode* _simNode);
	// check child object
	bool isChild(SimHierarchyNode& _simNode);
	bool isChild(SimHierarchyNode* _simNode);

	// ignored in Python
	// add mapped component object
	void addMappedComponent(MappedComponent& _mapObj);
};

class __declspec(dllexport) SimHierarchy
{
private:
	// SimModel Hierarchical Nodes
	std::vector<SimHierarchyNode> SimHierarchyNodeList;
	// SimModel object Id index
	std::map<std::string, SimHierarchyNode*> SimHierarchyNode_IdMapList;
	// add SimModel Hiearachial Node
	void addHierarchyNode(SimHierarchyNode& _simNode);
	// unmapped SimModel data
	//std::auto_ptr<SimModel> SimModel_Data;

public:
	SimHierarchy() { SimHierarchyNodeList.resize(0); }
	// get SimModel Hierarchical Root Node
	SimHierarchyNode* getHierarchyRootNode();
	// get SimModel Hierarchical Nodes
	//std::vector<SimHierarchyNode> getHierarchyNodeList();
	std::vector<SimHierarchyNode>& getHierarchyNodeList();
	// get SimModel Hierarchical Node by retrieve object Id
	SimHierarchyNode* getHierarchyNode(std::string _Id);
	// check SimModel object class type
	bool isClassType(SimRoot& _simObj, std::string _type);
	bool isClassType(SimRoot* _simObj, std::string _type);
	// get SimModel object class type
	std::string ClassType(SimRoot& _simObj);
	std::string ClassType(SimRoot* _simObj);
	// load SimModel data
	//::std::auto_ptr< ::schema::simxml::Model::SimModel > loadSimModel(std::string _name);
	// hierarchy parser
	void parser(::std::auto_ptr< ::schema::simxml::Model::SimModel >& SimModel_Data);
};

#endif // SIM_HIERARCHY_H