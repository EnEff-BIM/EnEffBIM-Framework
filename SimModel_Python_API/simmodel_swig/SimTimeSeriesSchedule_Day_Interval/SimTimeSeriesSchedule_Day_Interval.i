/* File : SimTimeSeriesSchedule_Day_Interval.i */
%module(directors="1") SimTimeSeriesSchedule_Day_Interval
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Day_Interval, false>::getValue(int n);

%ignore xsd::cxx::tree::optional<::schema::simxml::ResourcesGeneral::SimTimeSeriesSched_Time_1_144, false>::getValue();

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Day_Interval)
%auto_ptr(::schema::simxml::ResourcesGeneral::SimTimeSeriesSched_Time_1_144)

%import  "..\base\base.i"
%import  "..\SimTimeSeriesSchedule_Calendar_Configuration\SimTimeSeriesSchedule_Calendar_Configuration.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimTimeSeriesSched_Time_1_144.hxx"
%include "..\SimModel\framework\SimTimeSeriesSchedule_Day.hxx"
%include "..\SimModel\framework\SimTimeSeriesSchedule_Day_Interval.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimTimeSeriesSchedule_Day_Interval_sequence) sequence<::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule_Day_Interval, false>;
		
		// property method
		%template(Time_1_144_list) optional<::schema::simxml::ResourcesGeneral::SimTimeSeriesSched_Time_1_144, false>;
	}
  }
}