/* File : SimTemplateZoneConditions_ZoneConditions_Default.i */
%module(directors="1") SimTemplateZoneConditions_ZoneConditions_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTemplateZoneConditions_ZoneConditions_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTemplateZoneConditions.hxx"
%include "..\SimModel\framework\SimTemplateZoneConditions_ZoneConditions.hxx"
%include "..\SimModel\framework\SimTemplateZoneConditions_ZoneConditions_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTemplateZoneConditions_ZoneConditions_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTemplateZoneConditions_ZoneConditions_Default, false>;
		
		// property method
	}
  }
}