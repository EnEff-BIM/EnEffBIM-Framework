/* File : SimWindow_Window_ExteriorDetailed.i */
%module(directors="1") SimWindow_Window_ExteriorDetailed
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimWindow_Window_ExteriorDetailed)

%import  "..\base\base.i"
%import  "..\SimWindow_Window_Default\SimWindow_Window_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimWindow_Window_ExteriorDetailed.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimWindow_Window_ExteriorDetailed_sequence) sequence<::schema::simxml::BuildingModel::SimWindow_Window_ExteriorDetailed, false>;
		
		// property method
	}
  }
}