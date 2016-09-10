/* File : SimNode_Docking_Default.i */
%module(directors="1") SimNode_Docking_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimNode_Docking_Default)

%import  "..\base\base.i"
%import  "..\SimNode_AirFlowPort_Air_In\SimNode_AirFlowPort_Air_In.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimNode_Docking.hxx"
%include "..\SimModel\framework\SimNode_Docking_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimNode_Docking_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimNode_Docking_Default, false>;
		
		// property method
	}
  }
}