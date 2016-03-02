/* File : SimGeomSurface_BoundedSurface_CurveBoundedPlane.i */
%module(directors="1") SimGeomSurface_BoundedSurface_CurveBoundedPlane
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface_CurveBoundedPlane)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomSurface.hxx"
%include "..\SimModel\framework\SimGeomSurface_BoundedSurface.hxx"
%include "..\SimModel\framework\SimGeomSurface_BoundedSurface_CurveBoundedPlane.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomSurface_BoundedSurface_CurveBoundedPlane_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface_CurveBoundedPlane, false>;
		
		// property method
	}
  }
}