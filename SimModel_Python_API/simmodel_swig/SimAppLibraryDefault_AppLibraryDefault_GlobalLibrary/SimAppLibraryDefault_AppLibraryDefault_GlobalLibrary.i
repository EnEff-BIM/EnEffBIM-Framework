/* File : SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.i */
%module(directors="1") SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppLibraryDefault.hxx"
%include "..\SimModel\framework\SimAppLibraryDefault_AppLibraryDefault.hxx"
%include "..\SimModel\framework\SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppLibraryDefault_AppLibraryDefault_GlobalLibrary, false>;
		
		// property method
	}
  }
}