/* File : SimGroup_SpatialZoneGroup_ZoneGroup.i */
%module(directors="1") SimGroup_SpatialZoneGroup_ZoneGroup
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::SimModelCore::SimGroup_SpatialZoneGroup_ZoneGroup)

%import  "..\base\base.i"
%import  "..\SimGroup_BldgCompGroup_ZoneEquipment\SimGroup_BldgCompGroup_ZoneEquipment.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGroup_SpatialZoneGroup.hxx"
%include "..\SimModel\framework\SimGroup_SpatialZoneGroup_ZoneGroup.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGroup_SpatialZoneGroup_ZoneGroup_sequence) sequence<::schema::simxml::SimModelCore::SimGroup_SpatialZoneGroup_ZoneGroup, false>;
		
		// property method
	}
  }
}