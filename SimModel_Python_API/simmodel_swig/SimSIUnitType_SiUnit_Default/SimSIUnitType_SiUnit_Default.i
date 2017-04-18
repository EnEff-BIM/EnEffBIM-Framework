/* File : SimSIUnitType_SiUnit_Default.i */
%module(directors="1") SimSIUnitType_SiUnit_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimSIUnitType_SiUnit_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimSIUnitType_SiUnit_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSIUnitType.hxx"
%include "..\SimModel\framework\SimSIUnitType_SiUnit.hxx"
%include "..\SimModel\framework\SimSIUnitType_SiUnit_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSIUnitType_SiUnit_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimSIUnitType_SiUnit_Default, false>;
		
		// property method
	}
  }
}