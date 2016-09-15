/* File : SimController_SupplyWater_Temperature.i */
%module(directors="1") SimController_SupplyWater_Temperature
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::MepModel::SimController_SupplyWater_Temperature, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::AddressLines)
%auto_ptr(::schema::simxml::MepModel::SimController_SupplyWater_Temperature)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimController.hxx"
%include "..\SimModel\framework\SimController_SupplyWater.hxx"
%include "..\SimModel\framework\SimController_SupplyWater_Temperature.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimController_SupplyWater_Temperature_sequence) sequence<::schema::simxml::MepModel::SimController_SupplyWater_Temperature, false>;
		
		// property method
	}
  }
}