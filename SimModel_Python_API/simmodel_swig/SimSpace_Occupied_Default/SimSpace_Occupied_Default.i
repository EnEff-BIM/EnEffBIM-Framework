/* File : SimSpace_Occupied_Default.i */
%module(directors="1") SimSpace_Occupied_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSpace_Occupied_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSpace_Occupied_Default)
%auto_ptr(::schema::simxml::BuildingModel::T24KitchExhHoodDutyList)
%auto_ptr(::schema::simxml::BuildingModel::T24KitchExhHoodStyleList)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlDescRpt)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlRpt)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlAccepReqRpt)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlIsAutoShOffCntrlRpt)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlIsDayltngCntrlRpt)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlIsDmndRespCntrlRpt)
%auto_ptr(::schema::simxml::BuildingModel::T24MandLightCntrlIsManAreaCntrlRpt)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSpace.hxx"
%include "..\SimModel\framework\SimSpace_Occupied.hxx"
%include "..\SimModel\framework\SimSpace_Occupied_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSpace_Occupied_Default_sequence) sequence<::schema::simxml::BuildingModel::SimSpace_Occupied_Default, false>;
		
		// property method
	}
  }
}