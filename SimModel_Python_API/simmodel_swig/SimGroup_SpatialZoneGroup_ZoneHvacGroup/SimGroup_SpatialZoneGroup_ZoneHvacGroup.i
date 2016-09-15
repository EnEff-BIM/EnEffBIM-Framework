/* File : SimGroup_SpatialZoneGroup_ZoneHvacGroup.i */
%module(directors="1") SimGroup_SpatialZoneGroup_ZoneHvacGroup
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::SimModelCore::SimGroup_SpatialZoneGroup_ZoneHvacGroup, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::SimModelCore::SimGroup_SpatialZoneGroup_ZoneHvacGroup)

%import  "..\base\base.i"
%import  "..\SimGroup_SpatialZoneGroup_ZoneGroup\SimGroup_SpatialZoneGroup_ZoneGroup.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGroup_SpatialZoneGroup_ZoneHvacGroup.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGroup_SpatialZoneGroup_ZoneHvacGroup_sequence) sequence<::schema::simxml::SimModelCore::SimGroup_SpatialZoneGroup_ZoneHvacGroup, false>;
		
		// property method
	}
  }
}