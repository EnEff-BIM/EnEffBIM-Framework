/* File : SimGroup_HvacDemandGroup_WaterSystem.i */
%module(directors="1") SimGroup_HvacDemandGroup_WaterSystem
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::SimModelCore::SimGroup_HvacDemandGroup_WaterSystem)

%import  "..\base\base.i"
%import  "..\SimGroup_BldgCompGroup_ZoneEquipment\SimGroup_BldgCompGroup_ZoneEquipment.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGroup_HvacDemandGroup.hxx"
%include "..\SimModel\framework\SimGroup_HvacDemandGroup_WaterSystem.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGroup_HvacDemandGroup_WaterSystem_sequence) sequence<::schema::simxml::SimModelCore::SimGroup_HvacDemandGroup_WaterSystem, false>;
		
		// property method
	}
  }
}