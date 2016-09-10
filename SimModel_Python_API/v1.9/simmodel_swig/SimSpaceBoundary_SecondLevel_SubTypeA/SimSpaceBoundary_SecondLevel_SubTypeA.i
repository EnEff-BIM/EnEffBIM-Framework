/* File : SimSpaceBoundary_SecondLevel_SubTypeA.i */
%module(directors="1") SimSpaceBoundary_SecondLevel_SubTypeA
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimSpaceBoundary_SecondLevel_SubTypeA)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSpaceBoundary.hxx"
%include "..\SimModel\framework\SimSpaceBoundary_SecondLevel.hxx"
%include "..\SimModel\framework\SimSpaceBoundary_SecondLevel_SubTypeA.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSpaceBoundary_SecondLevel_SubTypeA_sequence) sequence<::schema::simxml::ResourcesGeneral::SimSpaceBoundary_SecondLevel_SubTypeA, false>;
		
		// property method
	}
  }
}