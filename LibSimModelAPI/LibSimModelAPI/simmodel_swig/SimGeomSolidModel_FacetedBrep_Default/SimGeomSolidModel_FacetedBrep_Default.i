/* File : SimGeomSolidModel_FacetedBrep_Default.i */
%module(directors="1") SimGeomSolidModel_FacetedBrep_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::AddressLines)
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomSolidModel_FacetedBrep_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomSolidModel.hxx"
%include "..\SimModel\framework\SimGeomSolidModel_FacetedBrep.hxx"
%include "..\SimModel\framework\SimGeomSolidModel_FacetedBrep_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomSolidModel_FacetedBrep_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomSolidModel_FacetedBrep_Default, false>;
		
		// property method
	}
  }
}