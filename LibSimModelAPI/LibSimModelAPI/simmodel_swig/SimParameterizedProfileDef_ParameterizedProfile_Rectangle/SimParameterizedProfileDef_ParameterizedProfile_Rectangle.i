/* File : SimParameterizedProfileDef_ParameterizedProfile_Rectangle.i */
%module(directors="1") SimParameterizedProfileDef_ParameterizedProfile_Rectangle
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile_Rectangle)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimParameterizedProfileDef.hxx"
%include "..\SimModel\framework\SimParameterizedProfileDef_ParameterizedProfile.hxx"
%include "..\SimModel\framework\SimParameterizedProfileDef_ParameterizedProfile_Rectangle.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimParameterizedProfileDef_ParameterizedProfile_Rectangle_sequence) sequence<::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile_Rectangle, false>;
		
		// property method
	}
  }
}