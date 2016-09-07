/* File : SimDistributionPort_HotWaterFlowPort_Water_InOrOut.i */
%module(directors="1") SimDistributionPort_HotWaterFlowPort_Water_InOrOut
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimDistributionPort_HotWaterFlowPort_Water_InOrOut)

%import  "..\base\base.i"
%import  "..\SimDistributionPort_HotWaterFlowPort_Water_Out\SimDistributionPort_HotWaterFlowPort_Water_Out.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimDistributionPort_HotWaterFlowPort_Water_InOrOut.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimDistributionPort_HotWaterFlowPort_Water_InOrOut_sequence) sequence<::schema::simxml::ResourcesGeneral::SimDistributionPort_HotWaterFlowPort_Water_InOrOut, false>;
		
		// property method
	}
  }
}