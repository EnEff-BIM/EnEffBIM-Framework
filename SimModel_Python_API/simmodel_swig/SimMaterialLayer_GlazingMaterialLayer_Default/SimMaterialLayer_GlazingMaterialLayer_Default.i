/* File : SimMaterialLayer_GlazingMaterialLayer_Default.i */
%module(directors="1") SimMaterialLayer_GlazingMaterialLayer_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayer_GlazingMaterialLayer_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterialLayer_GlazingMaterialLayer_Default)

%import  "..\SimMaterialLayer_OpaqueMaterialLayer_Default\SimMaterialLayer_OpaqueMaterialLayer_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterialLayer_GlazingMaterialLayer.hxx"
%include "..\SimModel\framework\SimMaterialLayer_GlazingMaterialLayer_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterialLayer_GlazingMaterialLayer_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayer_GlazingMaterialLayer_Default, false>;
		
		// property method
	}
  }
}