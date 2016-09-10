/* File : SimGeomSurfaceModel_FaceBasedSurfaceModel_Default.i */
%module(directors="1") SimGeomSurfaceModel_FaceBasedSurfaceModel_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomSurfaceModel_FaceBasedSurfaceModel_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomSurfaceModel.hxx"
%include "..\SimModel\framework\SimGeomSurfaceModel_FaceBasedSurfaceModel.hxx"
%include "..\SimModel\framework\SimGeomSurfaceModel_FaceBasedSurfaceModel_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomSurfaceModel_FaceBasedSurfaceModel_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomSurfaceModel_FaceBasedSurfaceModel_Default, false>;
		
		// property method
	}
  }
}