/* File : SimTemplateLocation_Location_Default.i */
%module(directors="1") SimTemplateLocation_Location_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTemplateLocation_Location_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTemplateLocation.hxx"
%include "..\SimModel\framework\SimTemplateLocation_Location.hxx"
%include "..\SimModel\framework\SimTemplateLocation_Location_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTemplateLocation_Location_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTemplateLocation_Location_Default, false>;
		
		// property method
	}
  }
}