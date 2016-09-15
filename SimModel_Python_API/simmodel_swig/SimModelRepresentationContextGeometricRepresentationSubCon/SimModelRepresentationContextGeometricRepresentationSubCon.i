/* File : SimModelRepresentationContextGeometricRepresentationSubCon.i */
%module(directors="1") SimModelRepresentationContextGeometricRepresentationSubCon
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimModelRepresentationContext_GeometricRepresentationSubContext_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimModelRepresentationContext_GeometricRepresentationSubContext_Default)

%import  "..\base\base.i"
%import  "..\SimModelRepresentationContextGeometricRepresentationContex\SimModelRepresentationContextGeometricRepresentationContex.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimModelRepresentationContext_GeometricRepresentationSubContext.hxx"
%include "..\SimModel\framework\SimModelRepresentationContext_GeometricRepresentationSubContext_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimModelRepresentationContext_GeometricRepresentationSubContext_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimModelRepresentationContext_GeometricRepresentationSubContext_Default, false>;
		
		// property method
	}
  }
}