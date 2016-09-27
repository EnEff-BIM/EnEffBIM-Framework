/* File : SimFlowEnergyTransferStorage_HotWaterTank_Expansion.i */
%module(directors="1") SimFlowEnergyTransferStorage_HotWaterTank_Expansion
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::MepModel::SimFlowEnergyTransferStorage_HotWaterTank_Expansion, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowEnergyTransferStorage_HotWaterTank_Expansion)

%import  "..\SimFlowEnergyTransferStorage_HotWaterTank_Mixed\SimFlowEnergyTransferStorage_HotWaterTank_Mixed.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowEnergyTransferStorage_HotWaterTank_Expansion.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowEnergyTransferStorage_HotWaterTank_Expansion_sequence) sequence<::schema::simxml::MepModel::SimFlowEnergyTransferStorage_HotWaterTank_Expansion, false>;
		
		// property method
	}
  }
}