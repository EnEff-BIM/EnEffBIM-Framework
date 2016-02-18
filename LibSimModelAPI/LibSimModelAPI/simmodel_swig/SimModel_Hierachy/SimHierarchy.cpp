#include "SimHierarchy.h"

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
	std::string __type = typeid(*_SimRootObject).name();
	if(__type.substr(__type.find_last_of(":")+1) == _type)
		return true;
	else
		return false;
}

// get SimModel object class type
std::string SimHierarchyNode::ClassType()
{
	std::string _type = typeid(*_SimRootObject).name();
	return _type.substr(_type.find_last_of(":")+1);
}

// check parent object
bool SimHierarchyNode::isParent(SimHierarchyNode& _simNode)
{
	if(ParentIdList.find(_simNode._SimRootObject->RefId()) != ParentIdList.end())
		return true;
	else
		return false;
}

bool SimHierarchyNode::isParent(SimHierarchyNode* _simNode)
{
	if(ParentIdList.find(_simNode->_SimRootObject->RefId()) != ParentIdList.end())
		return true;
	else
		return false;
}

// check child object
bool SimHierarchyNode::isChild(SimHierarchyNode& _simNode)
{
	if(ChildIdList.find(_simNode._SimRootObject->RefId()) != ChildIdList.end())
		return true;
	else
		return false;
}

bool SimHierarchyNode::isChild(SimHierarchyNode* _simNode)
{
	if(ChildIdList.find(_simNode->_SimRootObject->RefId()) != ChildIdList.end())
		return true;
	else
		return false;
}

// set SimModel object
void setCurrentObject(SimHierarchyNode& _simNode, SimRoot& _simObj)
{
	_simNode._SimRootObject = &_simObj;
}

// add parent object
void addParent(SimHierarchyNode& _simNode, SimHierarchyNode& _simParentNode)
{
	_simNode.ParentList.push_back(&_simParentNode);
	_simNode.ParentIdList.insert(_simParentNode._SimRootObject->RefId());
}

// add child object
void addChild(SimHierarchyNode& _simNode, SimHierarchyNode& _simChildNode)
{
	_simNode.ChildList.push_back(&_simChildNode);
	_simNode.ChildIdList.insert(_simChildNode._SimRootObject->RefId());

}

// add parent child relationship
void addNodesRelationship(SimHierarchyNode& _simParentNode, SimHierarchyNode&_simChildNode)
{
	// add parent nodes of the given child node
	addParent(_simChildNode, _simParentNode);
	// add child nodes of the given parent node
	addChild(_simParentNode, _simChildNode);
}

/**********************************************************************/

// get SimModel Hierarchical Root Node
SimHierarchyNode* SimHierarchy::getHierarchyRootNode()
{
	if(SimHierarchyNodeList.size())
		return &SimHierarchyNodeList.at(0);
	else
		return NULL;
}

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
	std::string __type = typeid(_simObj).name();
	if(__type.substr(__type.find_last_of(":")+1) == _type)
		return true;
	else
		return false;
}

bool SimHierarchy::isClassType(SimRoot* _simObj, std::string _type)
{
	std::string __type = typeid(*_simObj).name();
	if(__type.substr(__type.find_last_of(":")+1) == _type)
		return true;
	else
		return false;
}

// get SimModel object class type
std::string SimHierarchy::ClassType(SimRoot& _simObj)
{
	std::string _type = typeid(_simObj).name();
	return _type.substr(_type.find_last_of(":")+1);
}

std::string SimHierarchy::ClassType(SimRoot* _simObj)
{
	std::string _type = typeid(*_simObj).name();
	return _type.substr(_type.find_last_of(":")+1);
}

// load SimModel data
::std::auto_ptr< ::schema::simxml::Model::SimModel > SimHierarchy::loadSimModel(std::string _name)
{
	// load SimXML file
	SimModel_Data = SimModel_(_name);

	// parsing SimXML hierarchy
	// dummy data for testing
	SimHierarchyNode SimProject_Node;
	setCurrentObject(SimProject_Node, SimModel_Data->SimProject_Project_DesignAlternative().front());
	addHierarchyNode(SimProject_Node);
	int _id_SimProject = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimSite_Node;
	setCurrentObject(SimSite_Node, SimModel_Data->SimSite_BuildingSite_Default().front());
	addHierarchyNode(SimSite_Node);
	int _id_SimSite = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimBuilding_Node;
	setCurrentObject(SimBuilding_Node, SimModel_Data->SimBuilding_Building_Default().front());
	addHierarchyNode(SimBuilding_Node);
	int _id_SimBuilding = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimGroup_ZoneGroup_Node;
	setCurrentObject(SimGroup_ZoneGroup_Node, SimModel_Data->SimGroup_SpatialZoneGroup_ZoneGroup().front());
	addHierarchyNode(SimGroup_ZoneGroup_Node);
	int _id_SimGroup_ZoneGroup = SimHierarchyNodeList.size() - 1;

	std::vector<int> _id_SimGroup_ZoneHvac_Vec;
	for(SimModel::SimGroup_SpatialZoneGroup_ZoneHvacGroup_iterator _it = SimModel_Data->SimGroup_SpatialZoneGroup_ZoneHvacGroup().begin(); _it != SimModel_Data->SimGroup_SpatialZoneGroup_ZoneHvacGroup().end(); ++_it)
	{
		if(!_it->IsTemplateObject().present())
		{
			SimHierarchyNode SimGroup_ZoneHvac_Node;
			setCurrentObject(SimGroup_ZoneHvac_Node, *_it);
			addHierarchyNode(SimGroup_ZoneHvac_Node);
			_id_SimGroup_ZoneHvac_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	SimHierarchyNode SimThermalZone_Node;
	setCurrentObject(SimThermalZone_Node, SimModel_Data->SimSpatialZone_ThermalZone_Default().front());
	addHierarchyNode(SimThermalZone_Node);
	int _id_SimThermalZone = SimHierarchyNodeList.size() - 1;

	SimHierarchyNode SimSpace_Occupied_Node;
	setCurrentObject(SimSpace_Occupied_Node, SimModel_Data->SimSpace_Occupied_Default().front());
	addHierarchyNode(SimSpace_Occupied_Node);
	int _id_SimSpace_Occupied = SimHierarchyNodeList.size() - 1;
	
	std::vector<int> _id_SimSpaceBoundary_Vec;
	for(SimModel::SimSpaceBoundary_SecondLevel_SubTypeA_iterator _it = SimModel_Data->SimSpaceBoundary_SecondLevel_SubTypeA().begin(); _it != SimModel_Data->SimSpaceBoundary_SecondLevel_SubTypeA().end(); ++_it)
	{
		SimHierarchyNode SimSpaceBoundary_Node;
		setCurrentObject(SimSpaceBoundary_Node, *_it);
		addHierarchyNode(SimSpaceBoundary_Node);
		_id_SimSpaceBoundary_Vec.push_back(SimHierarchyNodeList.size() - 1);
		
	}

	// building element
	int _id_SimSlab;
	for(SimModel::SimSlab_Default_Default_iterator _it = SimModel_Data->SimSlab_Default_Default().begin(); _it != SimModel_Data->SimSlab_Default_Default().end(); ++_it)
	{
		if(_it->RefId()=="ID882")
		{
			SimHierarchyNode SimSlab_Node;
			setCurrentObject(SimSlab_Node, *_it);
			addHierarchyNode(SimSlab_Node);
			_id_SimSlab = SimHierarchyNodeList.size() - 1;
		}
	}

	std::vector<int> _id_SimWall_Vec;
	for(SimModel::SimWall_Wall_Default_iterator _it = SimModel_Data->SimWall_Wall_Default().begin(); _it != SimModel_Data->SimWall_Wall_Default().end(); ++_it)
	{
		SimHierarchyNode SimWall_Node;
		setCurrentObject(SimWall_Node, *_it);
		addHierarchyNode(SimWall_Node);
		_id_SimWall_Vec.push_back(SimHierarchyNodeList.size() - 1);
	}

	int _id_SimMaterialLayerSet;
	for(SimModel::SimMaterialLayerSet_Default_Default_iterator _it = SimModel_Data->SimMaterialLayerSet_Default_Default().begin(); _it != SimModel_Data->SimMaterialLayerSet_Default_Default().end(); ++_it)
	{
		if(_it->RefId()=="ID1364")
		{
			SimHierarchyNode SimMaterialLayerSet_Node;
			setCurrentObject(SimMaterialLayerSet_Node, *_it);
			addHierarchyNode(SimMaterialLayerSet_Node);
			_id_SimMaterialLayerSet = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimSystem;
	for(SimModel::SimSystem_HvacHotWater_FullSystem_iterator _it = SimModel_Data->SimSystem_HvacHotWater_FullSystem().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_FullSystem().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Node;
			setCurrentObject(SimSystem_Node, *_it);
			addHierarchyNode(SimSystem_Node);
			_id_SimSystem = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSystem_Control;
	for(SimModel::SimSystem_HvacHotWater_Control_iterator _it = SimModel_Data->SimSystem_HvacHotWater_Control().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_Control().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Control_Node;
			setCurrentObject(SimSystem_Control_Node, *_it);
			addHierarchyNode(SimSystem_Control_Node);
			_id_SimSystem_Control = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimController_SupplyWater_Temperature;
	for(SimModel::SimController_SupplyWater_Temperature_iterator _it = SimModel_Data->SimController_SupplyWater_Temperature().begin(); _it != SimModel_Data->SimController_SupplyWater_Temperature().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimController_SupplyWater_Temperature_Node;
			setCurrentObject(SimController_SupplyWater_Temperature_Node, *_it);
			addHierarchyNode(SimController_SupplyWater_Temperature_Node);
			_id_SimController_SupplyWater_Temperature = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSensor_TemperatureSensor_DryBulb;
	for(SimModel::SimController_SupplyWater_Temperature_iterator _it = SimModel_Data->SimSensor_TemperatureSensor_DryBulb().begin(); _it != SimModel_Data->SimSensor_TemperatureSensor_DryBulb().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSensor_TemperatureSensor_DryBulb_Node;
			setCurrentObject(SimSensor_TemperatureSensor_DryBulb_Node, *_it);
			addHierarchyNode(SimSensor_TemperatureSensor_DryBulb_Node);
			_id_SimSensor_TemperatureSensor_DryBulb = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimSystem_Demand;
	for(SimModel::SimSystem_HvacHotWater_Demand_iterator _it = SimModel_Data->SimSystem_HvacHotWater_Demand().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_Demand().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Demand_Node;
			setCurrentObject(SimSystem_Demand_Node, *_it);
			addHierarchyNode(SimSystem_Demand_Node);
			_id_SimSystem_Demand = SimHierarchyNodeList.size() - 1;
		}
	}

	std::vector<int> _id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec;
	for(SimModel::SimFlowEnergyTransfer_ConvectiveHeater_Water_iterator _it = SimModel_Data->SimFlowEnergyTransfer_ConvectiveHeater_Water().begin(); _it != SimModel_Data->SimFlowEnergyTransfer_ConvectiveHeater_Water().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowEnergyTransfer_ConvectiveHeater_Water_Node;
			setCurrentObject(SimFlowEnergyTransfer_ConvectiveHeater_Water_Node, *_it);
			addHierarchyNode(SimFlowEnergyTransfer_ConvectiveHeater_Water_Node);
			_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.push_back(SimHierarchyNodeList.size() - 1);
		}
	}

	int _id_SimFlowFitting_Mixer_DemandProxyMixerWater;
	for(SimModel::SimFlowFitting_Mixer_DemandProxyMixerWater_iterator _it = SimModel_Data->SimFlowFitting_Mixer_DemandProxyMixerWater().begin(); _it != SimModel_Data->SimFlowFitting_Mixer_DemandProxyMixerWater().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowFitting_Mixer_DemandProxyMixerWater_Node;
			setCurrentObject(SimFlowFitting_Mixer_DemandProxyMixerWater_Node, *_it);
			addHierarchyNode(SimFlowFitting_Mixer_DemandProxyMixerWater_Node);
			_id_SimFlowFitting_Mixer_DemandProxyMixerWater = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimFlowFitting_Splitter_DemandProxySplitterWater;
	for(SimModel::SimFlowFitting_Splitter_DemandProxySplitterWater_iterator _it = SimModel_Data->SimFlowFitting_Splitter_DemandProxySplitterWater().begin(); _it != SimModel_Data->SimFlowFitting_Splitter_DemandProxySplitterWater().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowFitting_Splitter_DemandProxySplitterWater_Node;
			setCurrentObject(SimFlowFitting_Splitter_DemandProxySplitterWater_Node, *_it);
			addHierarchyNode(SimFlowFitting_Splitter_DemandProxySplitterWater_Node);
			_id_SimFlowFitting_Splitter_DemandProxySplitterWater = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimSystem_Supply;
	for(SimModel::SimSystem_HvacHotWater_Supply_iterator _it = SimModel_Data->SimSystem_HvacHotWater_Supply().begin(); _it != SimModel_Data->SimSystem_HvacHotWater_Supply().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimSystem_Supply_Node;
			setCurrentObject(SimSystem_Supply_Node, *_it);
			addHierarchyNode(SimSystem_Supply_Node);
			_id_SimSystem_Supply = SimHierarchyNodeList.size() - 1;
		}
	}
	
	int _id_SimFlowMover_Pump_VariableSpeedReturn;
	for(SimModel::SimFlowMover_Pump_VariableSpeedReturn_iterator _it = SimModel_Data->SimFlowMover_Pump_VariableSpeedReturn().begin(); _it != SimModel_Data->SimFlowMover_Pump_VariableSpeedReturn().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowMover_Pump_VariableSpeedReturn_Node;
			setCurrentObject(SimFlowMover_Pump_VariableSpeedReturn_Node, *_it);
			addHierarchyNode(SimFlowMover_Pump_VariableSpeedReturn_Node);
			_id_SimFlowMover_Pump_VariableSpeedReturn = SimHierarchyNodeList.size() - 1;
		}
	}

	int _id_SimFlowPlant_Boiler_BoilerHotWater;
	for(SimModel::SimFlowPlant_Boiler_BoilerHotWater_iterator _it = SimModel_Data->SimFlowPlant_Boiler_BoilerHotWater().begin(); _it != SimModel_Data->SimFlowPlant_Boiler_BoilerHotWater().end(); ++_it)
	{
		if(!_it->IsTemplateObject().get())
		{
			SimHierarchyNode SimFlowPlant_Boiler_BoilerHotWater_Node;
			setCurrentObject(SimFlowPlant_Boiler_BoilerHotWater_Node, *_it);
			addHierarchyNode(SimFlowPlant_Boiler_BoilerHotWater_Node);
			_id_SimFlowPlant_Boiler_BoilerHotWater = SimHierarchyNodeList.size() - 1;
		}
	}
	
	std::vector<int> _id_SimBuildingStory_Vec;
	for(SimModel::SimBuildingStory_BuildingStory_Default_iterator _it = SimModel_Data->SimBuildingStory_BuildingStory_Default().begin(); _it != SimModel_Data->SimBuildingStory_BuildingStory_Default().end(); ++_it)
	{
		SimHierarchyNode SimBuildingStory_Node;
		setCurrentObject(SimBuildingStory_Node, *_it);
		addHierarchyNode(SimBuildingStory_Node);
		_id_SimBuildingStory_Vec.push_back(SimHierarchyNodeList.size() - 1);
	}
	

	// build hierarchy search map
	for(unsigned int i=0; i<SimHierarchyNodeList.size(); ++i)
	{
		SimHierarchyNode_IdMapList.insert(
			std::pair<std::string, SimHierarchyNode*>(SimHierarchyNodeList.at(i)._SimRootObject->RefId(), &SimHierarchyNodeList.at(i))
		);
	}

	// add parent-child relationship
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimProject), SimHierarchyNodeList.at(_id_SimSite));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSite), SimHierarchyNodeList.at(_id_SimBuilding));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimGroup_ZoneGroup));

	for(unsigned int _i=0; _i<_id_SimGroup_ZoneHvac_Vec.size(); ++_i)
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimGroup_ZoneHvac_Vec[_i]));

	addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimThermalZone));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimGroup_ZoneGroup), SimHierarchyNodeList.at(_id_SimThermalZone));
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimGroup_ZoneHvac_Vec[0]), SimHierarchyNodeList.at(_id_SimThermalZone));

	addNodesRelationship(SimHierarchyNodeList.at(_id_SimThermalZone), SimHierarchyNodeList.at(_id_SimSpace_Occupied));
	
	for(unsigned int _i=0; _i<_id_SimSpaceBoundary_Vec.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpace_Occupied), SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]));

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2519")
		{
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimSlab));

			addNodesRelationship(SimHierarchyNodeList.at(_id_SimSlab), SimHierarchyNodeList.at(_id_SimMaterialLayerSet));
		}
		
		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2520")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID886")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
			}

		}
		
		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2521")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID887")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
			}

		}

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2522")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID888")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
			}

		}

		if(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i])._SimRootObject->RefId() == "ID2523")
		{
			for(unsigned int _j=0; _j<_id_SimWall_Vec.size(); ++_j)
			{
				if(SimHierarchyNodeList.at(_id_SimWall_Vec[_j])._SimRootObject->RefId() == "ID889")
					addNodesRelationship(SimHierarchyNodeList.at(_id_SimSpaceBoundary_Vec[_i]), SimHierarchyNodeList.at(_id_SimWall_Vec[_j]));
			}

		}
	}
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimSystem));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem), SimHierarchyNodeList.at(_id_SimSystem_Control));

	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Control), SimHierarchyNodeList.at(_id_SimController_SupplyWater_Temperature));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Control), SimHierarchyNodeList.at(_id_SimSensor_TemperatureSensor_DryBulb));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem), SimHierarchyNodeList.at(_id_SimSystem_Demand));
	
	for(unsigned int _i=0; _i<_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Demand), SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i]));

		addNodesRelationship(SimHierarchyNodeList.at(_id_SimGroup_ZoneHvac_Vec[0]), SimHierarchyNodeList.at(_id_SimFlowEnergyTransfer_ConvectiveHeater_Water_Vec[_i]));
	}
		
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Demand), SimHierarchyNodeList.at(_id_SimFlowFitting_Mixer_DemandProxyMixerWater));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Demand), SimHierarchyNodeList.at(_id_SimFlowFitting_Splitter_DemandProxySplitterWater));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem), SimHierarchyNodeList.at(_id_SimSystem_Supply));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Supply), SimHierarchyNodeList.at(_id_SimFlowMover_Pump_VariableSpeedReturn));
	
	addNodesRelationship(SimHierarchyNodeList.at(_id_SimSystem_Supply), SimHierarchyNodeList.at(_id_SimFlowPlant_Boiler_BoilerHotWater));

	for(unsigned int _i=0; _i<_id_SimBuildingStory_Vec.size(); ++_i)
	{
		addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuilding), SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]));

		if(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i])._SimRootObject->RefId() == "ID878")
			addNodesRelationship(SimHierarchyNodeList.at(_id_SimBuildingStory_Vec[_i]), SimHierarchyNodeList.at(_id_SimSpace_Occupied));
	}
	
	// return SimXML data
	return SimModel_Data;
}

// add SimModel Hiearachial Node
void SimHierarchy::addHierarchyNode(SimHierarchyNode& _simNode)
{
	SimHierarchyNodeList.push_back(_simNode);
}