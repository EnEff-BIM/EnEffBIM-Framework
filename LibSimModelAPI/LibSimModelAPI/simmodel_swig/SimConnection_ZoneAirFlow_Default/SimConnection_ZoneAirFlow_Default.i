/* File : SimConnection_ZoneAirFlow_Default.i */
%module(directors="1") SimConnection_ZoneAirFlow_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimConnection_ZoneAirFlow_Default)

%import  "..\base\base.i"
%import  "..\SimConnection_HotWaterFlow_Default\SimConnection_HotWaterFlow_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimConnection_ZoneAirFlow.hxx"
%include "..\SimModel\framework\SimConnection_ZoneAirFlow_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimConnection_ZoneAirFlow_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimConnection_ZoneAirFlow_Default, false>;
		
		// property method
	}
  }
}