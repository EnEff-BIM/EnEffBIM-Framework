/* File : SimWindowArrayParams_WindowArray_Default.i */
%module(directors="1") SimWindowArrayParams_WindowArray_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimWindowArrayParams_WindowArray_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimWindowArrayParams.hxx"
%include "..\SimModel\framework\SimWindowArrayParams_WindowArray.hxx"
%include "..\SimModel\framework\SimWindowArrayParams_WindowArray_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimWindowArrayParams_WindowArray_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimWindowArrayParams_WindowArray_Default, false>;
		
		// property method
	}
  }
}