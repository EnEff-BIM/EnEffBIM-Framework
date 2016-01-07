/* File : SimDerivedUnitType_DerivedUnit_Default.i */
%module(directors="1") SimDerivedUnitType_DerivedUnit_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimDerivedUnitType_DerivedUnit_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimDerivedUnitType.hxx"
%include "..\SimModel\framework\SimDerivedUnitType_DerivedUnit.hxx"
%include "..\SimModel\framework\SimDerivedUnitType_DerivedUnit_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimDerivedUnitType_DerivedUnit_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimDerivedUnitType_DerivedUnit_Default, false>;
		
		// property method
	}
  }
}