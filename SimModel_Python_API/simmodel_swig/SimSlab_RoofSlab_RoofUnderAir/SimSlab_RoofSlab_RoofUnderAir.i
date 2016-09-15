/* File : SimSlab_RoofSlab_RoofUnderAir.i */
%module(directors="1") SimSlab_RoofSlab_RoofUnderAir
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSlab_RoofSlab_RoofUnderAir, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSlab_RoofSlab_RoofUnderAir)

%import  "..\SimSlab_Default_Default\SimSlab_Default_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSlab_RoofSlab.hxx"
%include "..\SimModel\framework\SimSlab_RoofSlab_RoofUnderAir.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSlab_RoofSlab_RoofUnderAir_sequence) sequence<::schema::simxml::BuildingModel::SimSlab_RoofSlab_RoofUnderAir, false>;
		
		// property method
	}
  }
}