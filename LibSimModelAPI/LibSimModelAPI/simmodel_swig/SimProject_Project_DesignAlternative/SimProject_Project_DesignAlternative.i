/* File : SimProject_Project_DesignAlternative.i */
%module(directors="1") SimProject_Project_DesignAlternative
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimProject_Project_DesignAlternative)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimProject.hxx"
%include "..\SimModel\framework\SimProject_Project.hxx"
%include "..\SimModel\framework\SimProject_Project_DesignAlternative.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimProject_Project_DesignAlternative_sequence) sequence<::schema::simxml::BuildingModel::SimProject_Project_DesignAlternative, false>;
		
		// property method
	}
  }
}