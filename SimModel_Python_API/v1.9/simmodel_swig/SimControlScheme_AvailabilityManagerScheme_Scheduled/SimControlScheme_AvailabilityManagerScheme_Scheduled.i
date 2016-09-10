/* File : SimControlScheme_AvailabilityManagerScheme_Scheduled.i */
%module(directors="1") SimControlScheme_AvailabilityManagerScheme_Scheduled
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme_Scheduled)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimControlScheme.hxx"
%include "..\SimModel\framework\SimControlScheme_AvailabilityManagerScheme.hxx"
%include "..\SimModel\framework\SimControlScheme_AvailabilityManagerScheme_Scheduled.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimControlScheme_AvailabilityManagerScheme_Scheduled_sequence) sequence<::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme_Scheduled, false>;
		
		// property method
	}
  }
}