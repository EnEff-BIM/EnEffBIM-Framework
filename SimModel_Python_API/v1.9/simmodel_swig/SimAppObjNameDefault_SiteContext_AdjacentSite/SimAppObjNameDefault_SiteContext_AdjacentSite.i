/* File : SimAppObjNameDefault_SiteContext_AdjacentSite.i */
%module(directors="1") SimAppObjNameDefault_SiteContext_AdjacentSite
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SiteContext_AdjacentSite)

%import  "..\base\base.i"
%import "..\SimAppObjNameDefault_BldgComponentGroup_HvacComponent\SimAppObjNameDefault_BldgComponentGroup_HvacComponent.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SiteContext.hxx"
%include "..\SimModel\framework\SimAppObjNameDefault_SiteContext_AdjacentSite.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SiteContext_AdjacentSite_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SiteContext_AdjacentSite, false>;
		
		// property method
	}
  }
}