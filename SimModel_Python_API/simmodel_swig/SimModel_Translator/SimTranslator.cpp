#include "SimTranslator.h"

// load SimModel data
::std::auto_ptr< ::schema::simxml::Model::SimModel > SimTranslator::loadSimModel(std::string _name)
{
	// load SimXML file
	SimModel_Data = SimModel_(_name);

	// parse SimModel hierarchy data
	_simHierarchyObj.parser(SimModel_Data);

	// translate SimModel data based on mapping rules
	//_simMappedDataObj.translator(_simHierarchyObj);

	// return SimXML data
	return SimModel_Data;
}

// get SimModel hierarchy object
SimHierarchy& SimTranslator::getSimHierarchy()
{
	return _simHierarchyObj;
}

// get SimModel mapped data object
SimMappedData& SimTranslator::getSimMappedData(std::string _name)
{
	// translate SimModel data based on mapping rules
	_simMappedDataObj.translator(_simHierarchyObj, _name);

	return _simMappedDataObj;
}