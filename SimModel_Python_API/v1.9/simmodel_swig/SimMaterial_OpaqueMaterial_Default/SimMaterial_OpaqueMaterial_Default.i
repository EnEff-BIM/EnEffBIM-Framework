/* File : SimMaterial_OpaqueMaterial_Default.i */
%module(directors="1") SimMaterial_OpaqueMaterial_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterial_OpaqueMaterial_Default)

%import  "..\base\base.i"
%import  "..\SimMaterial_OpaqueMaterial_AirGap\SimMaterial_OpaqueMaterial_AirGap.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterial_OpaqueMaterial_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterial_OpaqueMaterial_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterial_OpaqueMaterial_Default, false>;
		
		// property method
	}
  }
}