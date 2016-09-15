/* File : SimSystem_HvacHotWater_FullSystem.i */
%module(directors="1") SimSystem_HvacHotWater_FullSystem
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSystem_HvacHotWater_FullSystem, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSystem_HvacHotWater_FullSystem)

%import  "..\base\base.i"
%import  "..\SimSystem_HvacHotWater_Control\SimSystem_HvacHotWater_Control.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSystem_HvacHotWater_FullSystem.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSystem_HvacHotWater_FullSystem_sequence) sequence<::schema::simxml::BuildingModel::SimSystem_HvacHotWater_FullSystem, false>;
		
		// property method
	}
  }
}