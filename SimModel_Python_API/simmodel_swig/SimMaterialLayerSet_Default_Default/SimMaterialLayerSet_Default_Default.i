/* File : SimMaterialLayerSet_Default_Default.i */
%module(directors="1") SimMaterialLayerSet_Default_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_Default_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_Default_Default)
%auto_ptr(::schema::simxml::ResourcesGeneral::IntendedBldgElemTypes)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimMaterialLayerSet.hxx"
%include "..\SimModel\framework\SimMaterialLayerSet_Default.hxx"
%include "..\SimModel\framework\SimMaterialLayerSet_Default_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimMaterialLayerSet_Default_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_Default_Default, false>;
		
		// property method
	}
  }
}