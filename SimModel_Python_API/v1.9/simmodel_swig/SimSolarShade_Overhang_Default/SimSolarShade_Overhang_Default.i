/* File : SimSolarShade_Overhang_Default.i */
%module(directors="1") SimSolarShade_Overhang_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSolarShade_Overhang_Default)

%import  "..\base\base.i"
%import  "..\SimSolarShade_Fin_Default\SimSolarShade_Fin_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSolarShade_Overhang.hxx"
%include "..\SimModel\framework\SimSolarShade_Overhang_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSolarShade_Overhang_Default_sequence) sequence<::schema::simxml::BuildingModel::SimSolarShade_Overhang_Default, false>;
		
		// property method
	}
  }
}