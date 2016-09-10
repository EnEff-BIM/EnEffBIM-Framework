/* File : SimOwnerHistory_Default_Default.i */
%module(directors="1") SimOwnerHistory_Default_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimOwnerHistory_Default_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimOwnerHistory.hxx"
%include "..\SimModel\framework\SimOwnerHistory_Default.hxx"
%include "..\SimModel\framework\SimOwnerHistory_Default_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimOwnerHistory_Default_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimOwnerHistory_Default_Default, false>;
		
		// property method
	}
  }
}