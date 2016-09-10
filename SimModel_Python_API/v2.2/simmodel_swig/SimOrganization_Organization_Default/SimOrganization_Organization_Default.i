/* File : SimOrganization_Organization_Default.i */
%module(directors="1") SimOrganization_Organization_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimOrganization_Organization_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimOrganization.hxx"
%include "..\SimModel\framework\SimOrganization_Organization.hxx"
%include "..\SimModel\framework\SimOrganization_Organization_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimOrganization_Organization_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimOrganization_Organization_Default, false>;
		
		// property method
	}
  }
}