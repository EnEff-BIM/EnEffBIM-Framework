/* File : SimClassification_ClassificationReference_SpaceTypeOwner.i */
%module(directors="1") SimClassification_ClassificationReference_SpaceTypeOwner
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimClassification_ClassificationReference_SpaceTypeOwner)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimClassification.hxx"
%include "..\SimModel\framework\SimClassification_ClassificationReference.hxx"
%include "..\SimModel\framework\SimClassification_ClassificationReference_SpaceTypeOwner.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimClassification_ClassificationReference_SpaceTypeOwner_sequence) sequence<::schema::simxml::ResourcesGeneral::SimClassification_ClassificationReference_SpaceTypeOwner, false>;
		
		// property method
	}
  }
}