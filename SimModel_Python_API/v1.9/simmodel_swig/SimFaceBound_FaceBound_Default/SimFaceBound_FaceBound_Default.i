/* File : SimFaceBound_FaceBound_Default.i */
%module(directors="1") SimFaceBound_FaceBound_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimFaceBound_FaceBound_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFaceBound.hxx"
%include "..\SimModel\framework\SimFaceBound_FaceBound.hxx"
%include "..\SimModel\framework\SimFaceBound_FaceBound_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFaceBound_FaceBound_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimFaceBound_FaceBound_Default, false>;
		
		// property method
	}
  }
}