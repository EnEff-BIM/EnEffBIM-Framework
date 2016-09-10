/* File : SimFeatureElementSubtraction_Void_Opening.i */
%module(directors="1") SimFeatureElementSubtraction_Void_Opening
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimFeatureElementSubtraction_Void_Opening)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFeatureElementSubtraction.hxx"
%include "..\SimModel\framework\SimFeatureElementSubtraction_Void.hxx"
%include "..\SimModel\framework\SimFeatureElementSubtraction_Void_Opening.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFeatureElementSubtraction_Void_Opening_sequence) sequence<::schema::simxml::ResourcesGeometry::SimFeatureElementSubtraction_Void_Opening, false>;
		
		// property method
	}
  }
}