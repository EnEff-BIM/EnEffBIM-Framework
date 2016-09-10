/* File : SimControlScheme_ControlAndSequencingScheme_HeatingLoad.i */
%module(directors="1") SimControlScheme_ControlAndSequencingScheme_HeatingLoad
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimControlScheme_ControlAndSequencingScheme_HeatingLoad)

%import  "..\base\base.i"
%import  "..\SimControlScheme_AvailabilityManagerScheme_Scheduled\SimControlScheme_AvailabilityManagerScheme_Scheduled.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimControlScheme_ControlAndSequencingScheme.hxx"
%include "..\SimModel\framework\SimControlScheme_ControlAndSequencingScheme_HeatingLoad.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimControlScheme_ControlAndSequencingScheme_HeatingLoad_sequence) sequence<::schema::simxml::ResourcesGeneral::SimControlScheme_ControlAndSequencingScheme_HeatingLoad, false>;
		
		// property method
	}
  }
}