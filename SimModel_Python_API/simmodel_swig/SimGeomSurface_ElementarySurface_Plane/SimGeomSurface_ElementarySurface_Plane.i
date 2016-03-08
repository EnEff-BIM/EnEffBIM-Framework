/* File : SimGeomSurface_ElementarySurface_Plane.i */
%module(directors="1") SimGeomSurface_ElementarySurface_Plane
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomSurface_ElementarySurface_Plane)

%import  "..\base\base.i"
%import  "..\SimGeomSurface_BoundedSurface_CurveBoundedPlane\SimGeomSurface_BoundedSurface_CurveBoundedPlane.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomSurface_ElementarySurface.hxx"
%include "..\SimModel\framework\SimGeomSurface_ElementarySurface_Plane.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomSurface_ElementarySurface_Plane_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomSurface_ElementarySurface_Plane, false>;
		
		// property method
	}
  }
}