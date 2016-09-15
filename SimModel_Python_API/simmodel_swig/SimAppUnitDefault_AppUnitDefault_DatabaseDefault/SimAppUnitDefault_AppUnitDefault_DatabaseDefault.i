/* File : SimAppUnitDefault_AppUnitDefault_DatabaseDefault.i */
%module(directors="1") SimAppUnitDefault_AppUnitDefault_DatabaseDefault
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAppUnitDefault_AppUnitDefault_DatabaseDefault, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppUnitDefault_AppUnitDefault_DatabaseDefault)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppUnitDefault.hxx"
%include "..\SimModel\framework\SimAppUnitDefault_AppUnitDefault.hxx"
%include "..\SimModel\framework\SimAppUnitDefault_AppUnitDefault_DatabaseDefault.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppUnitDefault_AppUnitDefault_DatabaseDefault_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppUnitDefault_AppUnitDefault_DatabaseDefault, false>;
		
		// property method
	}
  }
}