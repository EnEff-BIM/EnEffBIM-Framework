/* File : SimAppObjNameDefault_SpatialContainer_Building.i */
%module(directors="1") SimAppObjNameDefault_SpatialContainer_Building
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialContainer_Building)

%import  "..\base\base.i"
%import "..\SimAppObjNameDefault_BldgComponentGroup_HvacComponent\SimAppObjNameDefault_BldgComponentGroup_HvacComponent.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialContainer.hxx"
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialContainer_Building.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SpatialContainer_Building_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialContainer_Building, false>;
		
		// property method
	}
  }
}