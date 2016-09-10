/* File : SimSolarShade_Fin_Default.i */
%module(directors="1") SimSolarShade_Fin_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSolarShade_Fin_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSolarShade.hxx"
%include "..\SimModel\framework\SimSolarShade_Fin.hxx"
%include "..\SimModel\framework\SimSolarShade_Fin_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSolarShade_Fin_Default_sequence) sequence<::schema::simxml::BuildingModel::SimSolarShade_Fin_Default, false>;
		
		// property method
	}
  }
}