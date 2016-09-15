/* File : SimClassificationClassificationReferenceSpaceCategoryOwner.i */
%module(directors="1") SimClassificationClassificationReferenceSpaceCategoryOwner
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimClassification_ClassificationReference_SpaceCategoryOwner, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimClassification_ClassificationReference_SpaceCategoryOwner)

%import  "..\base\base.i"
%import "..\SimClassification_ClassificationReference_SpaceTypeOwner\SimClassification_ClassificationReference_SpaceTypeOwner.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimClassification_ClassificationReference_SpaceCategoryOwner.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimClassification_ClassificationReference_SpaceCategoryOwner_sequence) sequence<::schema::simxml::ResourcesGeneral::SimClassification_ClassificationReference_SpaceCategoryOwner, false>;
		
		// property method
	}
  }
}