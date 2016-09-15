/* File : SimAppObjNameDefault_SpatialZone_ThermalZone.i */
%module(directors="1") SimAppObjNameDefault_SpatialZone_ThermalZone
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_ThermalZone, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_ThermalZone)

%import  "..\base\base.i"
%import  "..\SimAppObjNameDefault_SpatialZone_CeilingPlenumZone\SimAppObjNameDefault_SpatialZone_CeilingPlenumZone.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SpatialZone_ThermalZone.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SpatialZone_ThermalZone_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SpatialZone_ThermalZone, false>;
		
		// property method
	}
  }
}