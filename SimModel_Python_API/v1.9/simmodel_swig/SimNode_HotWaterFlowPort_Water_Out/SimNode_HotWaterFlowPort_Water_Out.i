/* File : SimNode_HotWaterFlowPort_Water_Out.i */
%module(directors="1") SimNode_HotWaterFlowPort_Water_Out
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimNode_HotWaterFlowPort_Water_Out)

%import  "..\base\base.i"
%import  "..\SimNode_HotWaterFlowPort_Water_In\SimNode_HotWaterFlowPort_Water_In.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimNode_HotWaterFlowPort_Water_Out.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimNode_HotWaterFlowPort_Water_Out_sequence) sequence<::schema::simxml::ResourcesGeneral::SimNode_HotWaterFlowPort_Water_Out, false>;
		
		// property method
	}
  }
}