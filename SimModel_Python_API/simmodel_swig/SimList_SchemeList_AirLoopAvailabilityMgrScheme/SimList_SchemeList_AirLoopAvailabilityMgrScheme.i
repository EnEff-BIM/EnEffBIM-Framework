/* File : SimList_SchemeList_AirLoopAvailabilityMgrScheme.i */
%module(directors="1") SimList_SchemeList_AirLoopAvailabilityMgrScheme
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimList_SchemeList_AirLoopAvailabilityMgrScheme, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimList_SchemeList_AirLoopAvailabilityMgrScheme)
%auto_ptr(::schema::simxml::BuildingModel::SimList_AvailMngrObjectType_1_6)

%import  "..\base\base.i"
%import  "..\SimList_ConnectorList_SimConnections\SimList_ConnectorList_SimConnections.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimList_SchemeList.hxx"
%include "..\SimModel\framework\SimList_SchemeList_AirLoopAvailabilityMgrScheme.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimList_SchemeList_AirLoopAvailabilityMgrScheme_sequence) sequence<::schema::simxml::BuildingModel::SimList_SchemeList_AirLoopAvailabilityMgrScheme, false>;
		
		// property method
	}
  }
}