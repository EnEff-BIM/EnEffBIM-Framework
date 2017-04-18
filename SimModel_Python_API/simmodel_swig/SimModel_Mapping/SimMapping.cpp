#include "SimMapping.h"
#include "Filters.h"
#include "../SimModel_Hierachy/SimHierarchy.h"

// set property name
void MappedProperty::setPropertyName(std::string _name)
{
	propertyName = _name;
}

// set property location
void MappedProperty::setPropertyLocation(std::string _location)
{
	propertyLocation = _location;
}

// set property value type
void MappedProperty::setValueType(std::string _type)
{
	propertyValueType = _type;
}

// set int, float double value
void MappedProperty::setValueNumber(double _number)
{
	propertyValueNumber = _number;
}

// set string value
void MappedProperty::setValueString(std::string _string)
{
	propertyValueString = _string;
}

// set matrix value
void MappedProperty::setValueMatrix(std::vector<std::vector<double> >& _matrix)
{
	propertyValueMatrix = _matrix;
}

// set record instance
void MappedProperty::setRecordInstance(std::string _recordInstance)
{
	recordInstance = _recordInstance;
}

// set record location
void MappedProperty::setRecordLocation(std::string _recordLocation)
{
	recordLocation = _recordLocation;
}

// get property name
std::string MappedProperty::getPropertyName()
{
	return propertyName;
}

// get property location
std::string MappedProperty::getPropertyLocation()
{
	return propertyLocation;
}

// get property value type
std::string MappedProperty::getValueType()
{
	return propertyValueType;
}

// get int, float double value
double MappedProperty::getValueNumber()
{
	return propertyValueNumber;
}

// get string value
std::string MappedProperty::getValueString()
{
	return propertyValueString;
}

// get matrix value
std::vector<std::vector<double> >& MappedProperty::getValueMatrix()
{
	return propertyValueMatrix;
}

// get record instance
std::string MappedProperty::getRecordInstance()
{
	return recordInstance;
}

// get record location
std::string MappedProperty::getRecordLocation()
{
	return recordLocation;
}


// save mapping rule name
void setMappingRuleName(MappedComponent& _mapCom, std::string _mapName)
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

// add unmapped SimModel hierarchy node
void MappedComponent::addUnmappedSimHierarchyNode(SimHierarchyNode& _simNode)
{
	UnmappedSimHierarchyNodeList.push_back(&_simNode);
}

// add mapped property
void MappedComponent::addMappedProperty(MappedProperty& _mapPro)
{
	MappedPropertyList.push_back(_mapPro);
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

// translate the SimModel data based on mapping rules
void SimMappedData::translator(SimHierarchy& _simHierarchy, std::string _name)
{
	// load mapping rules of the given library
	::std::auto_ptr<Data_Model_Map> _mapping_rule = Data_Model_Map_(_name);
	// load mapping rule filter
	RuleFilter _rule_filter;
	// set mapping rule parsing environment
	_rule_filter.setMappingRule(_mapping_rule, _simHierarchy.getCallBack()); // set callback here
		

	std::multimap<int, int> _idList;
	for(unsigned int i=0; i<_simHierarchy.getHierarchyNodeList().size(); ++i)
	{
		// check whether the component is necessary to be translated
		if(_rule_filter.isMappedComponent(_simHierarchy.getHierarchyNodeList()[i]))
		{
			// translate the SimModel component
			std::vector<MappedComponent> _mapComList = _rule_filter.getMappedData2_2(_simHierarchy.getHierarchyNodeList()[i]);

			// add mapped component
			for(unsigned int j=0; j<_mapComList.size(); ++j)
			{
				addMappedComponent(_mapComList[j]);
				// save index
				_idList.insert(std::pair<int, int>(i, MappedComponentList.size()-1));
			}
		}
	}

	// check whether there are newly added components
	if(_rule_filter.isNewComponentAdded())
	{
		// get new component
		std::vector<MappedComponent> _mapComList = _rule_filter.getNewComponent();

		// add mapped component
		for(unsigned int j=0; j<_mapComList.size(); ++j)
			addMappedComponent(_mapComList[j]);
	}
	

	// in the end, add linker
	for(std::multimap<int, int>::iterator _it=_idList.begin(); _it!=_idList.end(); ++_it)
	{
		_simHierarchy.getHierarchyNodeList()[_it->first].addMappedComponent(MappedComponentList[_it->second]);
		MappedComponentList[_it->second].addUnmappedSimHierarchyNode(_simHierarchy.getHierarchyNodeList()[_it->first]);
	}
}