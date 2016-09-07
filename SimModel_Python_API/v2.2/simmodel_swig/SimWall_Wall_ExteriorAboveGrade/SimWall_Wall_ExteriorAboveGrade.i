/* File : SimWall_Wall_ExteriorAboveGrade.i */
%module(directors="1") SimWall_Wall_ExteriorAboveGrade
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimWall_Wall_ExteriorAboveGrade)

%import  "..\SimWall_Wall_Default\SimWall_Wall_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimWall_Wall_ExteriorAboveGrade.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimWall_Wall_ExteriorAboveGrade_sequence) sequence<::schema::simxml::BuildingModel::SimWall_Wall_ExteriorAboveGrade, false>;
		
		// property method
	}
  }
}