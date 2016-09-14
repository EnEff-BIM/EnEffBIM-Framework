/* File : SimSlab_Floor_FloorOverEarth.i */
%module(directors="1") SimSlab_Floor_FloorOverEarth
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSlab_Floor_FloorOverEarth, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSlab_Floor_FloorOverEarth)

%import  "..\SimSlab_Default_Default\SimSlab_Default_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSlab_Floor.hxx"
%include "..\SimModel\framework\SimSlab_Floor_FloorOverEarth.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSlab_Floor_FloorOverEarth_sequence) sequence<::schema::simxml::BuildingModel::SimSlab_Floor_FloorOverEarth, false>;
		
		// property method
	}
  }
}