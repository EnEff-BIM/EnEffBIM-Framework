/* File : SimMaterialLayerSet_OpaqueLayerSet_Ceiling.i */
%module(directors="1") SimMaterialLayerSet_OpaqueLayerSet_Ceiling
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet_Ceiling)

%import  "..\base\base.i"
%import  "..\SimMaterialLayerSet_Default_Default\SimMaterialLayerSet_Default_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterialLayerSet_OpaqueLayerSet.hxx"
%include "..\SimModel\framework\SimMaterialLayerSet_OpaqueLayerSet_Ceiling.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterialLayerSet_OpaqueLayerSet_Ceiling_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet_Ceiling, false>;
		
		// property method
	}
  }
}