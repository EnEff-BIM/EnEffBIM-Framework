/* File : SimMaterialLayerSet_OpaqueLayerSet_Wall.i */
%module(directors="1") SimMaterialLayerSet_OpaqueLayerSet_Wall
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet_Wall, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet_Wall)

%import  "..\base\base.i"
%import  "..\SimMaterialLayerSet_OpaqueLayerSet_Ceiling\SimMaterialLayerSet_OpaqueLayerSet_Ceiling.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterialLayerSet_OpaqueLayerSet_Wall.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterialLayerSet_OpaqueLayerSet_Wall_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet_Wall, false>;
		
		// property method
	}
  }
}