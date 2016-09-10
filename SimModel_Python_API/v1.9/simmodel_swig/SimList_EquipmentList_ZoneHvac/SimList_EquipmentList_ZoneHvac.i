/* File : SimList_EquipmentList_ZoneHvac.i */
%module(directors="1") SimList_EquipmentList_ZoneHvac
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimList_EquipmentList_ZoneHvac)
%auto_ptr(::schema::simxml::BuildingModel::SimList_ZoneEqmt_1_18_ObjectType)

%import  "..\base\base.i"
%import  "..\SimList_ConnectorList_SimConnections\SimList_ConnectorList_SimConnections.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimList_EquipmentList.hxx"
%include "..\SimModel\framework\SimList_EquipmentList_ZoneHvac.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimList_EquipmentList_ZoneHvac_sequence) sequence<::schema::simxml::BuildingModel::SimList_EquipmentList_ZoneHvac, false>;
		
		// property method
	}
  }
}