/* File : SimAppObjNameDefault_SiteContext_SolarObstruction.i */
%module(directors="1") SimAppObjNameDefault_SiteContext_SolarObstruction
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SiteContext_SolarObstruction)

%import  "..\base\base.i"
%import  "..\SimAppObjNameDefault_SiteContext_AdjacentSite\SimAppObjNameDefault_SiteContext_AdjacentSite.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppObjNameDefault_SiteContext_SolarObstruction.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppObjNameDefault_SiteContext_SolarObstruction_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppObjNameDefault_SiteContext_SolarObstruction, false>;
		
		// property method
	}
  }
}