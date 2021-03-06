/* File : SimWindowLiningProps_WindowLiningProps_Default.i */
%module(directors="1") SimWindowLiningProps_WindowLiningProps_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimWindowLiningProps_WindowLiningProps_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimWindowLiningProps_WindowLiningProps_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimWindowLiningProps.hxx"
%include "..\SimModel\framework\SimWindowLiningProps_WindowLiningProps.hxx"
%include "..\SimModel\framework\SimWindowLiningProps_WindowLiningProps_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimWindowLiningProps_WindowLiningProps_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimWindowLiningProps_WindowLiningProps_Default, false>;
		
		// property method
	}
  }
}