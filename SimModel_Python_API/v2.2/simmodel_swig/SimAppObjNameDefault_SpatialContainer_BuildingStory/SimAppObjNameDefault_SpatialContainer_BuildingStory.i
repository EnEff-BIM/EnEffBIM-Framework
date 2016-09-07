/* File : SimAppObjNameDefault_SpatialContainer_BuildingStory.i */
%module(directors="1") SimAppObjNameDefault_SpatialContainer_BuildingStory
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialContainer_BuildingStory)

%import  "..\base\base.i"
%import  "..\SimAppObjNameDefault_SpatialContainer_Building\SimAppObjNameDefault_SpatialContainer_Building.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialContainer_BuildingStory.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SpatialContainer_BuildingStory_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialContainer_BuildingStory, false>;
		
		// property method
	}
  }
}