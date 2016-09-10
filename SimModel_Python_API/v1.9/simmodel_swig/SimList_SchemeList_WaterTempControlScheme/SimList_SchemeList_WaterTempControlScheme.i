/* File : SimList_SchemeList_WaterTempControlScheme.i */
%module(directors="1") SimList_SchemeList_WaterTempControlScheme
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimList_SchemeList_WaterTempControlScheme)

%import  "..\base\base.i"
%import  "..\SimList_SchemeList_AirLoopAvailabilityMgrScheme\SimList_SchemeList_AirLoopAvailabilityMgrScheme.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimList_SchemeList_WaterTempControlScheme.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimList_SchemeList_WaterTempControlScheme_sequence) sequence<::schema::simxml::BuildingModel::SimList_SchemeList_WaterTempControlScheme, false>;
		
		// property method
	}
  }
}