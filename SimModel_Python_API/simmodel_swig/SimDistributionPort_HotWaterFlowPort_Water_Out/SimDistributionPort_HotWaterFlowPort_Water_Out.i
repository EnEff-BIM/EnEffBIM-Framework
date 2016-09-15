/* File : SimDistributionPort_HotWaterFlowPort_Water_Out.i */
%module(directors="1") SimDistributionPort_HotWaterFlowPort_Water_Out
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimDistributionPort_HotWaterFlowPort_Water_Out, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimDistributionPort_HotWaterFlowPort_Water_Out)

%import  "..\base\base.i"
%import  "..\SimDistributionPort_AirFlowPort_Air_In\SimDistributionPort_AirFlowPort_Air_In.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimDistributionPort_HotWaterFlowPort.hxx"
%include "..\SimModel\framework\SimDistributionPort_HotWaterFlowPort_Water_Out.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimDistributionPort_HotWaterFlowPort_Water_Out_sequence) sequence<::schema::simxml::ResourcesGeneral::SimDistributionPort_HotWaterFlowPort_Water_Out, false>;
		
		// property method
	}
  }
}