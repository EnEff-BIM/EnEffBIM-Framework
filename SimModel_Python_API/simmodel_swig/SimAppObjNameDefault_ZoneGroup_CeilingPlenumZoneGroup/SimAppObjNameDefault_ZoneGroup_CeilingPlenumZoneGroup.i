/* File : SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup.i */
%module(directors="1") SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup)

%import  "..\base\base.i"
%import "..\SimAppObjNameDefault_BldgComponentGroup_HvacComponent\SimAppObjNameDefault_BldgComponentGroup_HvacComponent.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_ZoneGroup.hxx"
%include "..\SimModel\framework\SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_ZoneGroup_CeilingPlenumZoneGroup, false>;
		
		// property method
	}
  }
}