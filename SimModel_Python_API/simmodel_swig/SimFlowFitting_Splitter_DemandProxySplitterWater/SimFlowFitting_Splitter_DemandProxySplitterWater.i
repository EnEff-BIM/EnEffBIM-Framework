/* File : SimFlowFitting_Splitter_DemandProxySplitterWater.i */
%module(directors="1") SimFlowFitting_Splitter_DemandProxySplitterWater
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowFitting_Splitter_DemandProxySplitterWater)

%import  "..\base\base.i"
%import  "..\SimFlowFitting_FlowElementProxy_DemandProxy_WaterLoop\SimFlowFitting_FlowElementProxy_DemandProxy_WaterLoop.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowFitting_Splitter.hxx"
%include "..\SimModel\framework\SimFlowFitting_Splitter_DemandProxySplitterWater.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowFitting_Splitter_DemandProxySplitterWater_sequence) sequence<::schema::simxml::MepModel::SimFlowFitting_Splitter_DemandProxySplitterWater, false>;
		
		// property method
	}
  }
}