/* File : SimTemplateZoneLoads_ZoneLoads_Default.i */
%module(directors="1") SimTemplateZoneLoads_ZoneLoads_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimTemplateZoneLoads_ZoneLoads_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTemplateZoneLoads_ZoneLoads_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTemplateZoneLoads.hxx"
%include "..\SimModel\framework\SimTemplateZoneLoads_ZoneLoads.hxx"
%include "..\SimModel\framework\SimTemplateZoneLoads_ZoneLoads_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTemplateZoneLoads_ZoneLoads_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTemplateZoneLoads_ZoneLoads_Default, false>;
		
		// property method
	}
  }
}