/* File : SimGeomPoint_Point_CartesianPoint.i */
%module(directors="1") SimGeomPoint_Point_CartesianPoint
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimGeomPoint_Point_CartesianPoint)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimGeomPoint.hxx"
%include "..\SimModel\framework\SimGeomPoint_Point.hxx"
%include "..\SimModel\framework\SimGeomPoint_Point_CartesianPoint.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimGeomPoint_Point_CartesianPoint_sequence) sequence<::schema::simxml::ResourcesGeometry::SimGeomPoint_Point_CartesianPoint, false>;
		
		// property method
	}
  }
}