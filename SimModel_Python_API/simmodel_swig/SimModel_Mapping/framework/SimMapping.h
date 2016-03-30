#ifndef SIM_MAPPING_H
#define SIM_MAPPING_H

#include <vector>
#include <string>
// forward declaration
class SimHierarchyNode;
class SimHierarchy;

class MappedProperty
{
public:
	MappedProperty() {}
};

class MappedComponent
{
private:
	// mapped component name at the target library
	std::string targetComponentName;
	// mapped component location at the target library
	std::string targetLocation;

	// save SimModel hierarchy nodes referring to the unmapped data
	std::vector<SimHierarchyNode*> UnmappedSimHierarchyNodeList;
	// mapping rule name
	std::string mappingRuleName;
	// save mapped SimModel properties
	std::vector<MappedProperty> MappedPropertyList;

	// save mapping rule name
	friend void setMappingRuleName(MappedComponent& _mapCom, std::string& _mapName);
	// save mapped component name
	friend void setTargetComponentName(MappedComponent& _mapCom, std::string _targetName);
	// save mapped component location
	friend void setTargetLocation(MappedComponent& _mapCom, std::string _targetLocation);

public:
	MappedComponent() 
	{
		UnmappedSimHierarchyNodeList.resize(0);
	}
	// get SimModel hierarchy nodes
	std::vector<SimHierarchyNode*>& getUnmappedSimHierarchyNodes();
	// get mapped SimModel properties
	std::vector<MappedProperty>& getMappedPropertyList();
	// get mapping rule name
	std::string getMappingRuleName();
	// get mapped component name
	std::string getTargetComponentName();
	// get mapped component location
	std::string getTargetLocation();
};

class SimMappedData
{
private:
	// save mapped SimModel components
	std::vector<MappedComponent> MappedComponentList;

	// add mapped component
	void addMappedComponent(MappedComponent& _mapCom);

public:
	SimMappedData() 
	{
		MappedComponentList.resize(0);
	}
	// get mapped components
	std::vector<MappedComponent>& getMappedComponentList();
	// translate the SimModel data based on mapping rules
	//void translator(SimHierarchy& _simHierarchy);
};

#endif // SIM_MAPPING_H