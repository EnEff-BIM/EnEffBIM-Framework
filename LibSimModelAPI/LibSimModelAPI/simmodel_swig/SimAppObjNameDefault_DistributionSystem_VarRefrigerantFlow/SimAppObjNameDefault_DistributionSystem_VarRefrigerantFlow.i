/* File : SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow.i */
%module(directors="1") SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow)

%import  "..\base\base.i"
%import  "..\SimAppObjNameDefault_DistributionSystem_HvacAirLoop\SimAppObjNameDefault_DistributionSystem_HvacAirLoop.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_DistributionSystem_VarRefrigerantFlow, false>;
		
		// property method
	}
  }
}