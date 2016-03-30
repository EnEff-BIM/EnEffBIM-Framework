#include "SimMapping.h"
#include "../SimModel_Hierachy/SimHierarchy.h"

// save mapping rule name
void setMappingRuleName(MappedComponent& _mapCom, std::string& _mapName)
{
	_mapCom.mappingRuleName = _mapName;
}

// save mapped component name
void setTargetComponentName(MappedComponent& _mapCom, std::string _targetName)
{
	_mapCom.targetComponentName = _targetName;
}

// save mapped component location
void setTargetLocation(MappedComponent& _mapCom, std::string _targetLocation)
{
	_mapCom.targetLocation = _targetLocation;
}

// get SimModel hierarchy nodes
std::vector<SimHierarchyNode*>& MappedComponent::getUnmappedSimHierarchyNodes()
{
	return UnmappedSimHierarchyNodeList;
}

// get mapped SimModel properties
std::vector<MappedProperty>& MappedComponent::getMappedPropertyList()
{
	return MappedPropertyList;
}

// get mapping rule name
std::string MappedComponent::getMappingRuleName()
{
	return mappingRuleName;
}

// get mapped component name
std::string MappedComponent::getTargetComponentName()
{
	return targetComponentName;
}

// get mapped component location
std::string MappedComponent::getTargetLocation()
{
	return targetLocation;
}

// add mapped component
void SimMappedData::addMappedComponent(MappedComponent& _mapCom)
{
	MappedComponentList.push_back(_mapCom);
}

// get mapped components
std::vector<MappedComponent>& SimMappedData::getMappedComponentList()
{
	return MappedComponentList;
}