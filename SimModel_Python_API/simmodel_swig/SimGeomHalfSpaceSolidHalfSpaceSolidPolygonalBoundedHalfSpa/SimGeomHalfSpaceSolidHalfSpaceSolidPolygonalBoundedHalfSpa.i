/* File : SimGeomHalfSpaceSolidHalfSpaceSolidPolygonalBoundedHalfSpa.i */
%module(directors="1") SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomHalfSpaceSolid.hxx"
%include "..\SimModel\framework\SimGeomHalfSpaceSolid_HalfSpaceSolid.hxx"
%include "..\SimModel\framework\SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomHalfSpaceSolid_HalfSpaceSolid_PolygonalBoundedHalfSpace, false>;
		
		// property method
	}
  }
}