/* File : SimTimeSeriesSchedule_Week_Daily.i */
%module(directors="1") SimTimeSeriesSchedule_Week_Daily
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Week_Daily)

%import  "..\base\base.i"
%import  "..\SimTimeSeriesSchedule_Calendar_Configuration\SimTimeSeriesSchedule_Calendar_Configuration.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTimeSeriesSchedule_Week.hxx"
%include "..\SimModel\framework\SimTimeSeriesSchedule_Week_Daily.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTimeSeriesSchedule_Week_Daily_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Week_Daily, false>;
		
		// property method
	}
  }
}