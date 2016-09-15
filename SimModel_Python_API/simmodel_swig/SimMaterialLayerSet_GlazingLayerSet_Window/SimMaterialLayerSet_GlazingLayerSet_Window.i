/* File : SimMaterialLayerSet_GlazingLayerSet_Window.i */
%module(directors="1") SimMaterialLayerSet_GlazingLayerSet_Window
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_GlazingLayerSet_Window, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_GlazingLayerSet_Window)

%import  "..\base\base.i"
%import  "..\SimMaterialLayerSet_Default_Default\SimMaterialLayerSet_Default_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterialLayerSet_GlazingLayerSet.hxx"
%include "..\SimModel\framework\SimMaterialLayerSet_GlazingLayerSet_Window.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterialLayerSet_GlazingLayerSet_Window_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_GlazingLayerSet_Window, false>;
		
		// property method
	}
  }
}