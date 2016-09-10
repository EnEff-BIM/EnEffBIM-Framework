/* File : SimFlowMover_Pump_VariableSpeedReturn.i */
%module(directors="1") SimFlowMover_Pump_VariableSpeedReturn
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowMover_Pump_VariableSpeedReturn)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowMover.hxx"
%include "..\SimModel\framework\SimFlowMover_Pump.hxx"
%include "..\SimModel\framework\SimFlowMover_Pump_VariableSpeedReturn.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowMover_Pump_VariableSpeedReturn_sequence) sequence<::schema::simxml::MepModel::SimFlowMover_Pump_VariableSpeedReturn, false>;
		
		// property method
	}
  }
}