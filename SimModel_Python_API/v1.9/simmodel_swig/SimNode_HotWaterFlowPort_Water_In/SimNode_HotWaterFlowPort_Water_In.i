/* File : SimNode_HotWaterFlowPort_Water_In.i */
%module(directors="1") SimNode_HotWaterFlowPort_Water_In
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimNode_HotWaterFlowPort_Water_In)

%import  "..\base\base.i"
%import  "..\SimNode_AirFlowPort_Air_In\SimNode_AirFlowPort_Air_In.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimNode_HotWaterFlowPort.hxx"
%include "..\SimModel\framework\SimNode_HotWaterFlowPort_Water_In.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimNode_HotWaterFlowPort_Water_In_sequence) sequence<::schema::simxml::ResourcesGeneral::SimNode_HotWaterFlowPort_Water_In, false>;
		
		// property method
	}
  }
}