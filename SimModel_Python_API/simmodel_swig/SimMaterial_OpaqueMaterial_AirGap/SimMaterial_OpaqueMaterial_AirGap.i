/* File : SimMaterial_OpaqueMaterial_AirGap.i */
%module(directors="1") SimMaterial_OpaqueMaterial_AirGap
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimMaterial_OpaqueMaterial_AirGap, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterial_OpaqueMaterial_AirGap)

%import  "..\base\base.i"
%import  "..\SimMaterial_Default_Default\SimMaterial_Default_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterial_OpaqueMaterial.hxx"
%include "..\SimModel\framework\SimMaterial_OpaqueMaterial_AirGap.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterial_OpaqueMaterial_AirGap_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterial_OpaqueMaterial_AirGap, false>;
		
		// property method
	}
  }
}