#ifndef SIM_MAPPING_H
#define SIM_MAPPING_H

#include <vector>
#include <string>
// mapping rules
#include "./mapping_rule_lib/mapping_rule_schema.hxx"
using namespace namespaces::Sim::DataMap;
// forward declaration
class SimHierarchyNode;
class SimHierarchy;
//using namespace std;
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace schema::simxml::Model;
using namespace schema::simxml::SimModelCore;
using namespace schema::simxml::ResourcesGeneral;
using namespace schema::simxml::MepModel;

class __declspec(dllexport) MappedProperty
{
private:
	// mapped property name at the target library
	std::string propertyName;
	// mapped property location at the target library
	std::string propertyLocation;
	// property value type: Number, String, Matrix
	std::string propertyValueType;
	// different data types for the property values
	// int, float, double
	double propertyValueNumber;
	// string type
	std::string propertyValueString;
	// matrix
	std::vector<std::vector<double> > propertyValueMatrix;
	
	// the name of a record instance declared in the target data model
	std::string recordInstance;
	// the location of the record instance
	std::string recordInstanceLocation;
	// a record location in the target data model
	std::string recordLocation;

public:
	MappedProperty() 
	{
		propertyName = "";
		propertyLocation = "";
		recordInstance = "";
		recordInstanceLocation = "";
		recordLocation = "";

		propertyValueType = "";
		propertyValueString = "";
		propertyValueNumber = 0;
		propertyValueMatrix.resize(0);
	}
	// set property name
	void setPropertyName(std::string _name);
	// set property location
	void setPropertyLocation(std::string _location);
	// set property value type
	void setValueType(std::string _type);
	// set int, float double value
	void setValueNumber(double _number);
	// set string value
	void setValueString(std::string _string);
	// set matrix value
	void setValueMatrix(std::vector<std::vector<double> >& _matrix);
	// set record instance
	void setRecordInstance(std::string _recordInstance);
	// set record location
	void setRecordLocation(std::string _recordLocation);


	// get property name
	std::string getPropertyName();
	// get property location
	std::string getPropertyLocation();
	// get property value type
	std::string getValueType();
	// get int, float double value
	double getValueNumber();
	// get string value
	std::string getValueString();
	// get matrix value
	std::vector<std::vector<double> >& getValueMatrix();
	// get record instance
	std::string getRecordInstance();
	// get record location
	std::string getRecordLocation();
};

class __declspec(dllexport) MappedComponent
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
	friend void setMappingRuleName(MappedComponent& _mapCom, std::string _mapName);
	// save mapped component name
	friend void setTargetComponentName(MappedComponent& _mapCom, std::string _targetName);
	// save mapped component location
	friend void setTargetLocation(MappedComponent& _mapCom, std::string _targetLocation);

public:
	MappedComponent() 
	{
		UnmappedSimHierarchyNodeList.resize(0);
		MappedPropertyList.resize(0);
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

	// ignored in Python
	// add unmapped SimModel hierarchy node
	void addUnmappedSimHierarchyNode(SimHierarchyNode& _simNode);
	// add mapped property
	void addMappedProperty(MappedProperty& _mapPro);
};

class __declspec(dllexport) SimMappedData
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
	void translator(SimHierarchy& _simHierarchy, std::string _name);
};

#endif // SIM_MAPPING_H