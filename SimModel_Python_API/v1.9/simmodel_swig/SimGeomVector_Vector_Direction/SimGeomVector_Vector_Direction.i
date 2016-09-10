/* File : SimGeomVector_Vector_Direction.i */
%module(directors="1") SimGeomVector_Vector_Direction
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomVector_Vector_Direction)

%import  "..\base\base.i"
%import  "..\SimGeomVector_Vector_Default\SimGeomVector_Vector_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomVector_Vector_Direction.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomVector_Vector_Direction_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomVector_Vector_Direction, false>;
		
		// property method
	}
  }
}