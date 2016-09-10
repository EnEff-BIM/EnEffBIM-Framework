/* File : SimSimulationConfiguration_SimulationConfiguration_Default.i */
%module(directors="1") SimSimulationConfiguration_SimulationConfiguration_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimSimulationConfiguration_SimulationConfiguration_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSimulationConfiguration.hxx"
%include "..\SimModel\framework\SimSimulationConfiguration_SimulationConfiguration.hxx"
%include "..\SimModel\framework\SimSimulationConfiguration_SimulationConfiguration_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSimulationConfiguration_SimulationConfiguration_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimSimulationConfiguration_SimulationConfiguration_Default, false>;
		
		// property method
	}
  }
}