/* File : SimBuilding_Building_Default.i */
%module(directors="1") SimBuilding_Building_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimBuilding_Building_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimBuilding.hxx"
%include "..\SimModel\framework\SimBuilding_Building.hxx"
%include "..\SimModel\framework\SimBuilding_Building_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimBuilding_Building_Default_sequence) sequence<::schema::simxml::BuildingModel::SimBuilding_Building_Default, false>;

		// property method
		%template(BuildingHeight_optional) optional<::xml_schema::decimal, true>;
	}
  }
}