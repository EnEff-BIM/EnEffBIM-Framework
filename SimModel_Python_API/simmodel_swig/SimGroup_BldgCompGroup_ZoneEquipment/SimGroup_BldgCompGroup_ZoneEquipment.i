/* File : SimGroup_BldgCompGroup_ZoneEquipment.i */
%module(directors="1") SimGroup_BldgCompGroup_ZoneEquipment
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::SimModelCore::SimGroup_BldgCompGroup_ZoneEquipment, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::SimModelCore::SimGroup_BldgCompGroup_ZoneEquipment)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGroup_BldgCompGroup.hxx"
%include "..\SimModel\framework\SimGroup_BldgCompGroup_ZoneEquipment.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGroup_BldgCompGroup_ZoneEquipment_sequence) sequence<::schema::simxml::SimModelCore::SimGroup_BldgCompGroup_ZoneEquipment, false>;
		
		// property method
	}
  }
}