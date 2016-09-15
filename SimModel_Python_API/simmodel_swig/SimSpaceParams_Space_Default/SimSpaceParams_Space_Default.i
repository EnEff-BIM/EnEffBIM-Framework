/* File : SimSpaceParams_Space_Default.i */
%module(directors="1") SimSpaceParams_Space_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimSpaceParams_Space_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimSpaceParams_Space_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSpaceParams.hxx"
%include "..\SimModel\framework\SimSpaceParams_Space.hxx"
%include "..\SimModel\framework\SimSpaceParams_Space_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSpaceParams_Space_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimSpaceParams_Space_Default, false>;
		
		// property method
	}
  }
}