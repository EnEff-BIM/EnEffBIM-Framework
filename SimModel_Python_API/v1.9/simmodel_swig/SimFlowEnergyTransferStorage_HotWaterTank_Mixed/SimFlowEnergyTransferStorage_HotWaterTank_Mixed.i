/* File : SimFlowEnergyTransferStorage_HotWaterTank_Mixed.i */
%module(directors="1") SimFlowEnergyTransferStorage_HotWaterTank_Mixed
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowEnergyTransferStorage_HotWaterTank_Mixed)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowEnergyTransferStorage.hxx"
%include "..\SimModel\framework\SimFlowEnergyTransferStorage_HotWaterTank.hxx"
%include "..\SimModel\framework\SimFlowEnergyTransferStorage_HotWaterTank_Mixed.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowEnergyTransferStorage_HotWaterTank_Mixed_sequence) sequence<::schema::simxml::MepModel::SimFlowEnergyTransferStorage_HotWaterTank_Mixed, false>;
		
		// property method
	}
  }
}