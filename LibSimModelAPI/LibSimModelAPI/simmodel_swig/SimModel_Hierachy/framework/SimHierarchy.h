#ifndef SIM_HIERARCHY_H
#define SIM_HIERARCHY_H

#include <vector>
#include <string>
#include <typeinfo>
//using namespace std;
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace schema::simxml::Model;
using namespace schema::simxml::SimModelCore;

class SimHierarchyNode
{
private:
	// current object
	SimRoot _SimRootObject;
	SimRoot* _SimRootObjectPtr;
	// parent objects
	std::vector<SimHierarchyNode*> ParentList;
	// children objects
	std::vector<SimHierarchyNode*> ChildList;
	// parent object id list
	std::set<std::string> ParentIdList;
	// child object id list
	std::set<std::string> ChildIdList;

	// set SimModel object
	friend void setCurrentObject(SimHierarchyNode& _simNode, SimRoot& _simObj);
	friend void setCurrentObjectPtr(SimHierarchyNode& _simNode, SimRoot* _simObj);
	// add parent object
	friend void addParent(SimHierarchyNode& _simNode, SimHierarchyNode& _simParentNode);
	// add child object
	friend void addChild(SimHierarchyNode& _simNode, SimHierarchyNode& _simChildNode);

public:
	SimHierarchyNode() {}
	// get SimModel object
	SimRoot& getCurrentObject();
	SimRoot* getCurrentObjectPtr();
	// get its parent objects
	std::vector<SimHierarchyNode*> getParentList();
	// get its child objects
	std::vector<SimHierarchyNode*> getChildList();
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
};

class SimHierarchy
{
private:
	// SimModel Hierarchical Nodes
	std::vector<SimHierarchyNode> SimHierarchyNodeList;
	// SimModel object Id index
	std::map<std::string, SimHierarchyNode*> SimHierarchyNode_IdMapList;
	// add SimModel Hiearachial Node
	friend void addHierarchyNode(SimHierarchy& _simHierarchy, SimHierarchyNode& _simNode);
	// unmapped SimModel data
	std::auto_ptr<SimModel> SimModel_Data;
public:
	SimHierarchy() {}
	// get SimModel Hierarchical Nodes
	std::vector<SimHierarchyNode> getHierarchyNodeList();
	// get SimModel Hierarchical Node by retrieve object Id
	SimHierarchyNode* getHierarchyNode(std::string _Id);
	// check SimModel object class type
	bool isClassType(SimRoot& _simObj, std::string _type);
	// get SimModel object class type
	std::string ClassType(SimRoot& _simObj);
	// load SimModel data
	void loadSimModel(std::string _name);
};

#endif // SIM_HIERARCHY_H