/* File : SimLoop_Loop_PolyLoop.i */
%module(directors="1") SimLoop_Loop_PolyLoop
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimLoop_Loop_PolyLoop)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimLoop.hxx"
%include "..\SimModel\framework\SimLoop_Loop.hxx"
%include "..\SimModel\framework\SimLoop_Loop_PolyLoop.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimLoop_Loop_PolyLoop_sequence) sequence<::schema::simxml::ResourcesGeometry::SimLoop_Loop_PolyLoop, false>;
		
		// property method
	}
  }
}