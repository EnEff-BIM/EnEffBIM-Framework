/* File : SimTemplateConstructions_Constructions_Default.i */
%module(directors="1") SimTemplateConstructions_Constructions_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTemplateConstructions_Constructions_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTemplateConstructions.hxx"
%include "..\SimModel\framework\SimTemplateConstructions_Constructions.hxx"
%include "..\SimModel\framework\SimTemplateConstructions_Constructions_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTemplateConstructions_Constructions_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTemplateConstructions_Constructions_Default, false>;
		
		// property method
	}
  }
}