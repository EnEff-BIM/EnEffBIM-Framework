/* File : SimShapeRepresentation_ShapeRepresentation_Default.i */
%module(directors="1") SimShapeRepresentation_ShapeRepresentation_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimShapeRepresentation_ShapeRepresentation_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimShapeRepresentation_ShapeRepresentation_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimShapeRepresentation.hxx"
%include "..\SimModel\framework\SimShapeRepresentation_ShapeRepresentation.hxx"
%include "..\SimModel\framework\SimShapeRepresentation_ShapeRepresentation_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimShapeRepresentation_ShapeRepresentation_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimShapeRepresentation_ShapeRepresentation_Default, false>;
		
		// property method
	}
  }
}