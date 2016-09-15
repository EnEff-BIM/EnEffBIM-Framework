/* File : SimConnection_HotWaterFlow_Default.i */
%module(directors="1") SimConnection_HotWaterFlow_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimConnection_HotWaterFlow_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimConnection_HotWaterFlow_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimConnection.hxx"
%include "..\SimModel\framework\SimConnection_HotWaterFlow.hxx"
%include "..\SimModel\framework\SimConnection_HotWaterFlow_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimConnection_HotWaterFlow_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimConnection_HotWaterFlow_Default, false>;
		
		// property method
	}
  }
}