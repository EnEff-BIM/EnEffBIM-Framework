/* File : SimSystem_ZoneHvacGroup_Control.i */
%module(directors="1") SimSystem_ZoneHvacGroup_Control
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSystem_ZoneHvacGroup_Control, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSystem_ZoneHvacGroup_Control)

%import  "..\base\base.i"
%import  "..\SimSystem_HvacHotWater_Control\SimSystem_HvacHotWater_Control.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSystem_ZoneHvacGroup.hxx"
%include "..\SimModel\framework\SimSystem_ZoneHvacGroup_Control.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSystem_ZoneHvacGroup_Control_sequence) sequence<::schema::simxml::BuildingModel::SimSystem_ZoneHvacGroup_Control, false>;
		
		// property method
	}
  }
}