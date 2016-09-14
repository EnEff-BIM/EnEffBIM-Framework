/* File : SimArbitraryProfileDef_ArbitraryProfile_Closed.i */
%module(directors="1") SimArbitraryProfileDef_ArbitraryProfile_Closed
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimArbitraryProfileDef_ArbitraryProfile_Closed, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimArbitraryProfileDef_ArbitraryProfile_Closed)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimArbitraryProfileDef.hxx"
%include "..\SimModel\framework\SimArbitraryProfileDef_ArbitraryProfile.hxx"
%include "..\SimModel\framework\SimArbitraryProfileDef_ArbitraryProfile_Closed.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimArbitraryProfileDef_ArbitraryProfile_Closed_sequence) sequence<::schema::simxml::ResourcesGeometry::SimArbitraryProfileDef_ArbitraryProfile_Closed, false>;
		
		// property method
	}
  }
}