/* File : SimPlacement_Axis2Placement2D_Default.i */
%module(directors="1") SimPlacement_Axis2Placement2D_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimPlacement_Axis2Placement2D_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimPlacement_Axis2Placement2D_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimPlacement.hxx"
%include "..\SimModel\framework\SimPlacement_Axis2Placement2D.hxx"
%include "..\SimModel\framework\SimPlacement_Axis2Placement2D_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimPlacement_Axis2Placement2D_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimPlacement_Axis2Placement2D_Default, false>;
		
		// property method
	}
  }
}