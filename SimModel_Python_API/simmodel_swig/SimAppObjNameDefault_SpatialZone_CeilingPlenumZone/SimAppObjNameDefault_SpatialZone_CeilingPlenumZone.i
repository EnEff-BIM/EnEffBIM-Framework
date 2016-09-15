/* File : SimAppObjNameDefault_SpatialZone_CeilingPlenumZone.i */
%module(directors="1") SimAppObjNameDefault_SpatialZone_CeilingPlenumZone
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_CeilingPlenumZone, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_CeilingPlenumZone)

%import  "..\base\base.i"
%import "..\SimAppObjNameDefault_BldgComponentGroup_HvacComponent\SimAppObjNameDefault_BldgComponentGroup_HvacComponent.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialZone.hxx"
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialZone_CeilingPlenumZone.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SpatialZone_CeilingPlenumZone_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_CeilingPlenumZone, false>;
		
		// property method
	}
  }
}