/* File : SimController_ZoneControlTemperature_Thermostat.i */
%module(directors="1") SimController_ZoneControlTemperature_Thermostat
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimController_ZoneControlTemperature_Thermostat)
%auto_ptr(::schema::simxml::MepModel::SimCntrl_Control_1_4_ObjectType)

%import  "..\base\base.i"
%import  "..\SimController_SupplyWater_Temperature\SimController_SupplyWater_Temperature.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimController_ZoneControlTemperature.hxx"
%include "..\SimModel\framework\SimController_ZoneControlTemperature_Thermostat.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimController_ZoneControlTemperature_Thermostat_sequence) sequence<::schema::simxml::MepModel::SimController_ZoneControlTemperature_Thermostat, false>;
		
		// property method
	}
  }
}