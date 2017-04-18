/* File : SimControlScheme_SetpointManagerScheme_ScheduledSetpoint.i */
%module(directors="1") SimControlScheme_SetpointManagerScheme_ScheduledSetpoint
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme_ScheduledSetpoint, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme_ScheduledSetpoint)

%import  "..\base\base.i"
%import  "..\SimControlScheme_AvailabilityManagerScheme_Scheduled\SimControlScheme_AvailabilityManagerScheme_Scheduled.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimControlScheme_SetpointManagerScheme.hxx"
%include "..\SimModel\framework\SimControlScheme_SetpointManagerScheme_ScheduledSetpoint.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimControlScheme_SetpointManagerScheme_ScheduledSetpoint_sequence) sequence<::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme_ScheduledSetpoint, false>;
		
		// property method
	}
  }
}