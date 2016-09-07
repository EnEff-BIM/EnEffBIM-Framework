/* File : SimWallParams_Wall_Default.i */
%module(directors="1") SimWallParams_Wall_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimWallParams_Wall_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimWallParams.hxx"
%include "..\SimModel\framework\SimWallParams_Wall.hxx"
%include "..\SimModel\framework\SimWallParams_Wall_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimWallParams_Wall_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimWallParams_Wall_Default, false>;
		
		// property method
	}
  }
}