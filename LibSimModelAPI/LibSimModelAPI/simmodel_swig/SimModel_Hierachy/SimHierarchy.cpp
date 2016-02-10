#include "SimHierarchy.h"

// get SimModel object
SimRoot& SimHierarchyNode::getCurrentObject()
{
	return _SimRootObject;
}

SimRoot* SimHierarchyNode::getCurrentObjectPtr()
{
	return _SimRootObjectPtr;
}

// get its parent objects
std::vector<SimHierarchyNode*> SimHierarchyNode::getParentList()
{
	return ParentList;
}

// get its child objects
std::vector<SimHierarchyNode*> SimHierarchyNode::getChildList()
{
	return ChildList;
}

// check SimModel object class type
bool SimHierarchyNode::isClassType(std::string _type)
{
	if((std::string)typeid(_SimRootObject).name() == _type)
		return true;
	else
		return false;
}

// get SimModel object class type
std::string SimHierarchyNode::ClassType()
{
	return typeid(_SimRootObject).name();
}

// check parent object
bool SimHierarchyNode::isParent(SimHierarchyNode& _simNode)
{
	if(ParentIdList.find(_simNode.getCurrentObject().RefId()) != ParentIdList.end())
		return true;
	else
		return false;
}

bool SimHierarchyNode::isParent(SimHierarchyNode* _simNode)
{
	if(ParentIdList.find(_simNode->getCurrentObject().RefId()) != ParentIdList.end())
		return true;
	else
		return false;
}

// check child object
bool SimHierarchyNode::isChild(SimHierarchyNode& _simNode)
{
	if(ChildIdList.find(_simNode.getCurrentObject().RefId()) != ChildIdList.end())
		return true;
	else
		return false;
}

bool SimHierarchyNode::isChild(SimHierarchyNode* _simNode)
{
	if(ChildIdList.find(_simNode->getCurrentObject().RefId()) != ChildIdList.end())
		return true;
	else
		return false;
}

// set SimModel object
void setCurrentObject(SimHierarchyNode& _simNode, SimRoot& _simObj)
{
	_simNode._SimRootObject = _simObj;
	// test
	_simNode._SimRootObjectPtr = &_simObj;
}

void setCurrentObjectPtr(SimHierarchyNode& _simNode, SimRoot* _simObj)
{
	_simNode._SimRootObjectPtr = _simObj;
}

// add parent object
void addParent(SimHierarchyNode& _simNode, SimHierarchyNode& _simParentNode)
{
	_simNode.ParentList.push_back(&_simParentNode);
	_simNode.ParentIdList.insert(_simParentNode.getCurrentObject().RefId());
}

// add child object
void addChild(SimHierarchyNode& _simNode, SimHierarchyNode& _simChildNode)
{
	_simNode.ChildList.push_back(&_simChildNode);
	_simNode.ChildIdList.insert(_simChildNode.getCurrentObject().RefId());

}
/**********************************************************************/

// get SimModel Hierarchical Nodes
std::vector<SimHierarchyNode> SimHierarchy::getHierarchyNodeList()
{
	return SimHierarchyNodeList;
}

// get SimModel Hierarchical Node by retrieve object Id
SimHierarchyNode* SimHierarchy::getHierarchyNode(std::string _Id)
{
	std::map<std::string, SimHierarchyNode*>::iterator _it = SimHierarchyNode_IdMapList.find(_Id);
	if(_it != SimHierarchyNode_IdMapList.end())
		return _it->second;
	else
		return NULL;
}

// check SimModel object class type
bool SimHierarchy::isClassType(SimRoot& _simObj, std::string _type)
{
	if((std::string)typeid(_simObj).name() == _type)
		return true;
	else
		return false;
}

// get SimModel object class type
std::string SimHierarchy::ClassType(SimRoot& _simObj)
{
	return typeid(_simObj).name();
}

// load SimModel data
void SimHierarchy::loadSimModel(std::string _name)
{
	SimModel_Data = SimModel_(_name);

	// dummy data for testing
	SimHierarchyNode SimProject_Node;
	setCurrentObject(SimProject_Node, SimModel_Data->SimProject_Project_DesignAlternative().front());
	addHierarchyNode(*this, SimProject_Node);

	SimHierarchyNode SimSite_Node;
	setCurrentObject(SimSite_Node, SimModel_Data->SimSite_BuildingSite_Default().front());
	addHierarchyNode(*this, SimSite_Node);
}

// add SimModel Hiearachial Node
void addHierarchyNode(SimHierarchy& _simHierarchy, SimHierarchyNode& _simNode)
{
	_simHierarchy.SimHierarchyNodeList.push_back(_simNode);
	_simHierarchy.SimHierarchyNode_IdMapList.insert(
		std::pair<std::string, SimHierarchyNode*>(_simNode.getCurrentObject().RefId(), &_simHierarchy.SimHierarchyNodeList.back())
	);
}

//SimHierarchy c = SimHierarchy();