#ifndef SIM_TRANSLATOR_H
#define SIM_TRANSLATOR_H

#include "../SimModel_Hierachy/SimHierarchy.h"
#include "../SimModel_Mapping/SimMapping.h"

class SimTranslator
{
private:
	// SimModel hierarchy object
	SimHierarchy _simHierarchyObj;
	// SimModel mapped data object
	SimMappedData _simMappedDataObj;
	// unmapped SimModel data
	::std::auto_ptr< ::schema::simxml::Model::SimModel > SimModel_Data;

public:
	// load SimModel data
	::std::auto_ptr< ::schema::simxml::Model::SimModel > loadSimModel(std::string _name);
	// get SimModel hierarchy object
	SimHierarchy& getSimHierarchy();
	// get SimModel mapped data object
	SimMappedData& getSimMappedData(std::string _name);
};

#endif // SIM_TRANSLATOR_H