/* File : SimAppPreferences_AppPreferences_AutoSaveInterval.i */
%module(directors="1") SimAppPreferences_AppPreferences_AutoSaveInterval
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimAppPreferences_AppPreferences_AutoSaveInterval, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimAppPreferences_AppPreferences_AutoSaveInterval)

%import  "..\base\base.i"
%import "..\SimAppPreferences_AppPreferences_AutoSave\SimAppPreferences_AppPreferences_AutoSave.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAppPreferences_AppPreferences_AutoSaveInterval.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimAppPreferences_AppPreferences_AutoSaveInterval_sequence) sequence<::schema::simxml::ResourcesGeneral::SimAppPreferences_AppPreferences_AutoSaveInterval, false>;
		
		// property method
	}
  }
}