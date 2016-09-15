/* File : SimSensor_TemperatureSensor_DryBulb.i */
%module(directors="1") SimSensor_TemperatureSensor_DryBulb
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}


%ignore xsd::cxx::tree::sequence<::schema::simxml::MepModel::SimSensor_TemperatureSensor_DryBulb, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimSensor_TemperatureSensor_DryBulb)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSensor.hxx"
%include "..\SimModel\framework\SimSensor_TemperatureSensor.hxx"
%include "..\SimModel\framework\SimSensor_TemperatureSensor_DryBulb.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSensor_TemperatureSensor_DryBulb_sequence) sequence<::schema::simxml::MepModel::SimSensor_TemperatureSensor_DryBulb, false>;
		
		// property method
	}
  }
}