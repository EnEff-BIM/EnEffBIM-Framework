/* File : SimInternalLoad_Equipment_Electric.i */
%module(directors="1") SimInternalLoad_Equipment_Electric
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimInternalLoad_Equipment_Electric)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimInternalLoad.hxx"
%include "..\SimModel\framework\SimInternalLoad_Equipment.hxx"
%include "..\SimModel\framework\SimInternalLoad_Equipment_Electric.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimInternalLoad_Equipment_Electric_sequence) sequence<::schema::simxml::ResourcesGeneral::SimInternalLoad_Equipment_Electric, false>;
		
		// property method
	}
  }
}