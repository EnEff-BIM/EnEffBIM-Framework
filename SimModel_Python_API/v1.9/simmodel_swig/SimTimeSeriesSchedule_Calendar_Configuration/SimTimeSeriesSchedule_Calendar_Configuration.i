/* File : SimTimeSeriesSchedule_Calendar_Configuration.i */
%module(directors="1") SimTimeSeriesSchedule_Calendar_Configuration
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Calendar_Configuration)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTimeSeriesSchedule.hxx"
%include "..\SimModel\framework\SimTimeSeriesSchedule_Calendar.hxx"
%include "..\SimModel\framework\SimTimeSeriesSchedule_Calendar_Configuration.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTimeSeriesSchedule_Calendar_Configuration_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Calendar_Configuration, false>;
		
		// property method
	}
  }
}