/* File : SimFlowPlant_Boiler_BoilerHotWater.i */
%module(directors="1") SimFlowPlant_Boiler_BoilerHotWater
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::MepModel::SimFlowPlant_Boiler_BoilerHotWater, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowPlant_Boiler_BoilerHotWater)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowPlant.hxx"
%include "..\SimModel\framework\SimFlowPlant_Boiler.hxx"
%include "..\SimModel\framework\SimFlowPlant_Boiler_BoilerHotWater.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowPlant_Boiler_BoilerHotWater_sequence) sequence<::schema::simxml::MepModel::SimFlowPlant_Boiler_BoilerHotWater, false>;
		
		// property method
	}
  }
}