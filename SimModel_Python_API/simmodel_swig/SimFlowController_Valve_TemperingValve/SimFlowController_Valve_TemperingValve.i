/* File : SimFlowController_Valve_TemperingValve.i */
%module(directors="1") SimFlowController_Valve_TemperingValve
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::MepModel::SimFlowController_Valve_TemperingValve, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowController_Valve_TemperingValve)

%import  "..\SimFlowController_Valve_Default\SimFlowController_Valve_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowController_Valve_TemperingValve.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowController_Valve_TemperingValve_sequence) sequence<::schema::simxml::MepModel::SimFlowController_Valve_TemperingValve, false>;
		
		// property method
	}
  }
}