/* File : SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop.i */
%module(directors="1") SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop)

%import  "..\base\base.i"
%import  "..\SimFlowFitting_FlowElementProxy_DemandProxy_WaterLoop\SimFlowFitting_FlowElementProxy_DemandProxy_WaterLoop.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop_sequence) sequence<::schema::simxml::MepModel::SimFlowFitting_FlowElementProxy_SupplyProxy_AirLoop, false>;
		
		// property method
	}
  }
}