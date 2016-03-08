/* File : SimAppObjNameDefault_SpatialZone_FloorPlenumZone.i */
%module(directors="1") SimAppObjNameDefault_SpatialZone_FloorPlenumZone
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_FloorPlenumZone)

%import  "..\base\base.i"
%import  "..\SimAppObjNameDefault_SpatialZone_CeilingPlenumZone\SimAppObjNameDefault_SpatialZone_CeilingPlenumZone.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialZone_FloorPlenumZone.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SpatialZone_FloorPlenumZone_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_FloorPlenumZone, false>;
		
		// property method
	}
  }
}