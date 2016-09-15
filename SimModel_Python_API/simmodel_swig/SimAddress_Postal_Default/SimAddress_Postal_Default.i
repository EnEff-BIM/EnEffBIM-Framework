/* File : SimAddress_Postal_Default.i */
%module(directors="1") SimAddress_Postal_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAddress_Postal_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::AddressLines)
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAddress_Postal_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAddress.hxx"
%include "..\SimModel\framework\SimAddress_Postal.hxx"
%include "..\SimModel\framework\SimAddress_Postal_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAddress_Postal_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAddress_Postal_Default, false>;
		
		// property method
	}
  }
}