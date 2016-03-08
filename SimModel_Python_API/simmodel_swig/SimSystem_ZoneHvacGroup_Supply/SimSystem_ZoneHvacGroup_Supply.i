/* File : SimSystem_ZoneHvacGroup_Supply.i */
%module(directors="1") SimSystem_ZoneHvacGroup_Supply
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSystem_ZoneHvacGroup_Supply)

%import  "..\base\base.i"
%import  "..\SimSystem_ZoneHvacGroup_Control\SimSystem_ZoneHvacGroup_Control.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSystem_ZoneHvacGroup_Supply.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSystem_ZoneHvacGroup_Supply_sequence) sequence<::schema::simxml::BuildingModel::SimSystem_ZoneHvacGroup_Supply, false>;
		
		// property method
	}
  }
}