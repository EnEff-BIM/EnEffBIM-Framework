/* File : SimGeomCurve_Polyline_Default.i */
%module(directors="1") SimGeomCurve_Polyline_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimGeomCurve_Polyline_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomCurve_Polyline_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomCurve.hxx"
%include "..\SimModel\framework\SimGeomCurve_Polyline.hxx"
%include "..\SimModel\framework\SimGeomCurve_Polyline_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomCurve_Polyline_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomCurve_Polyline_Default, false>;
		
		// property method
	}
  }
}