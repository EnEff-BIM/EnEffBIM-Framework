/* File : SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid.i */
%module(directors="1") SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid)

%import  "..\base\base.i"
%import  "..\SimGeomSolidModel_FacetedBrep_Default\SimGeomSolidModel_FacetedBrep_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomSolidModel_SweptAreaSolid.hxx"
%include "..\SimModel\framework\SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid_ExtrudedAreaSolid, false>;
		
		// property method
	}
  }
}