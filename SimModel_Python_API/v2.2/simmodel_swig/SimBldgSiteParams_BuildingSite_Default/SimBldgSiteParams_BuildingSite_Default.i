/* File : SimBldgSiteParams_BuildingSite_Default.i */
%module(directors="1") SimBldgSiteParams_BuildingSite_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimBldgSiteParams_BuildingSite_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimBldgSiteParams.hxx"
%include "..\SimModel\framework\SimBldgSiteParams_BuildingSite.hxx"
%include "..\SimModel\framework\SimBldgSiteParams_BuildingSite_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimBldgSiteParams_BuildingSite_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimBldgSiteParams_BuildingSite_Default, false>;
	}
  }
}