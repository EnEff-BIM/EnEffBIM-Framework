/* File : SimSimulationParameters_HvacDesign_WaterLoopSizing.i */
%module(directors="1") SimSimulationParameters_HvacDesign_WaterLoopSizing
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimSimulationParameters_HvacDesign_WaterLoopSizing, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimSimulationParameters_HvacDesign_WaterLoopSizing)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSimulationParameters.hxx"
%include "..\SimModel\framework\SimSimulationParameters_HvacDesign.hxx"
%include "..\SimModel\framework\SimSimulationParameters_HvacDesign_WaterLoopSizing.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSimulationParameters_HvacDesign_WaterLoopSizing_sequence) sequence<::schema::simxml::ResourcesGeneral::SimSimulationParameters_HvacDesign_WaterLoopSizing, false>;
		
		// property method
	}
  }
}