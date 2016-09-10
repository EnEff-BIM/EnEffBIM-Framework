/* File : SimClassification_ClassificationSystem_OmniClass.i */
%module(directors="1") SimClassification_ClassificationSystem_OmniClass
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimClassification_ClassificationSystem_OmniClass)

%import  "..\base\base.i"
%import  "..\SimClassification_ClassificationSystem_Default\SimClassification_ClassificationSystem_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimClassification_ClassificationSystem_OmniClass.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimClassification_ClassificationSystem_OmniClass_sequence) sequence<::schema::simxml::ResourcesGeneral::SimClassification_ClassificationSystem_OmniClass, false>;
		
		// property method
	}
  }
}