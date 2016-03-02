/* File : SimAppObjNameDefault_BldgComponentGroup_HvacComponent.i */
%module(directors="1") SimAppObjNameDefault_BldgComponentGroup_HvacComponent
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_BldgComponentGroup_HvacComponent)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault.hxx"
%include "..\SimModel\framework\SimAppObjNameDefault_BldgComponentGroup.hxx"
%include "..\SimModel\framework\SimAppObjNameDefault_BldgComponentGroup_HvacComponent.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_BldgComponentGroup_HvacComponent_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_BldgComponentGroup_HvacComponent, false>;
		
		// property method
	}
  }
}