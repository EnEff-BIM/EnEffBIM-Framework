/* File : SimMaterial_GlazingMaterial_SimpleGlazingSystem.i */
%module(directors="1") SimMaterial_GlazingMaterial_SimpleGlazingSystem
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial_SimpleGlazingSystem, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial_SimpleGlazingSystem)

%import  "..\base\base.i"
%import  "..\SimMaterial_GlazingMaterial_Gas\SimMaterial_GlazingMaterial_Gas.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterial_GlazingMaterial_SimpleGlazingSystem.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterial_GlazingMaterial_SimpleGlazingSystem_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial_SimpleGlazingSystem, false>;
		
		// property method
	}
  }
}