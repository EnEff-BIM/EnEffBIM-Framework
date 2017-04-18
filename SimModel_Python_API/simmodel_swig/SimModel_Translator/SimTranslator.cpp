#include "SimTranslator.h"

// set SimHierarchy init object
void SimTranslator::setTranslator(SimHierarchy& _simHierarchyObj) 
{ 
	_simHierarchyPtr = &_simHierarchyObj;
}

// load SimModel data: geometry and system
void SimTranslator::loadSimModel(std::string _geoName, std::string _sysName)
{
	// load SimXML file
	simGeometryData = SimModel_(_geoName);
	simSysData = SimModel_(_sysName);

	// parse SimModel hierarchy data
	// new update for version 2.2
	_simHierarchyPtr->parser2_2(simGeometryData, simSysData, _geoName, _sysName);
}

// get SimModel hierarchy object
SimHierarchy& SimTranslator::getSimHierarchy()
{
	return *_simHierarchyPtr;
}

// get SimModel mapped data object
SimMappedData& SimTranslator::getSimMappedData(std::string _name)
{
	// translate SimModel data based on mapping rules
	_simMappedDataObj.translator(*_simHierarchyPtr, _name);

	return _simMappedDataObj;
}