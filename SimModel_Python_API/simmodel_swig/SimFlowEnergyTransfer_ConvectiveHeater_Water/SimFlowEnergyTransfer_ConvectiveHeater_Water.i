/* File : SimFlowEnergyTransfer_ConvectiveHeater_Water.i */
%module(directors="1") SimFlowEnergyTransfer_ConvectiveHeater_Water
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater_Water)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowEnergyTransfer.hxx"
%include "..\SimModel\framework\SimFlowEnergyTransfer_ConvectiveHeater.hxx"
%include "..\SimModel\framework\SimFlowEnergyTransfer_ConvectiveHeater_Water.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowEnergyTransfer_ConvectiveHeater_Water_sequence) sequence<::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater_Water, false>;
		
		// property method
	}
  }
}