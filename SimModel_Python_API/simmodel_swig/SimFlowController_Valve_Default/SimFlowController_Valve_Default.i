/* File : SimFlowController_Valve_Default.i */
%module(directors="1") SimFlowController_Valve_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowController_Valve_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowController.hxx"
%include "..\SimModel\framework\SimFlowController_Valve.hxx"
%include "..\SimModel\framework\SimFlowController_Valve_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowController_Valve_Default_sequence) sequence<::schema::simxml::MepModel::SimFlowController_Valve_Default, false>;
		
		// property method
	}
  }
}