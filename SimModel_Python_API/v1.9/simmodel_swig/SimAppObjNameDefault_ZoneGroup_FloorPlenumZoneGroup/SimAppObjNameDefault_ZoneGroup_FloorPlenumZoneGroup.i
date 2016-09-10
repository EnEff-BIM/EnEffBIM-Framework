/* File : SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup.i */
%module(directors="1") SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup)

%import  "..\base\base.i"
%import  "..\SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup\SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_ZoneGroup_FloorPlenumZoneGroup, false>;
		
		// property method
	}
  }
}