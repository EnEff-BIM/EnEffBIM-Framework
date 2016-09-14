/* File : SimWindow_Window_Default.i */
%module(directors="1") SimWindow_Window_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimWindow_Window_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimWindow_Window_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimWindow.hxx"
%include "..\SimModel\framework\SimWindow_Window.hxx"
%include "..\SimModel\framework\SimWindow_Window_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimWindow_Window_Default_sequence) sequence<::schema::simxml::BuildingModel::SimWindow_Window_Default, false>;
		
		// property method
	}
  }
}