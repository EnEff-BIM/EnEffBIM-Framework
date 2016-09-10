/* File : SimInternalLoad_People_Default.i */
%module(directors="1") SimInternalLoad_People_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimInternalLoad_People_Default)
%auto_ptr(::schema::simxml::ResourcesGeneral::SimInternalLoad_ThermalComfortModel_1_5_Type)

%import  "..\base\base.i"
%import  "..\SimInternalLoad_Equipment_Electric\SimInternalLoad_Equipment_Electric.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimInternalLoad_People.hxx"
%include "..\SimModel\framework\SimInternalLoad_People_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimInternalLoad_People_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimInternalLoad_People_Default, false>;
		
		// property method
	}
  }
}