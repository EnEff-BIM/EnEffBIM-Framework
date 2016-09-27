/* File : SimSlab_Floor_InterzoneFloor.i */
%module(directors="1") SimSlab_Floor_InterzoneFloor
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSlab_Floor_InterzoneFloor, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSlab_Floor_InterzoneFloor)

%import  "..\SimSlab_Floor_FloorOverEarth\SimSlab_Floor_FloorOverEarth.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSlab_Floor_InterzoneFloor.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSlab_Floor_InterzoneFloor_sequence) sequence<::schema::simxml::BuildingModel::SimSlab_Floor_InterzoneFloor, false>;
		
		// property method
	}
  }
}