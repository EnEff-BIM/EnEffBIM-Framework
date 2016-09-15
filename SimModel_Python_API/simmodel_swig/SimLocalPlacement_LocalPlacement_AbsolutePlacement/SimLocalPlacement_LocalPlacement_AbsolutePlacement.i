/* File : SimLocalPlacement_LocalPlacement_AbsolutePlacement.i */
%module(directors="1") SimLocalPlacement_LocalPlacement_AbsolutePlacement
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimLocalPlacement_LocalPlacement_AbsolutePlacement, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimLocalPlacement_LocalPlacement_AbsolutePlacement)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimLocalPlacement.hxx"
%include "..\SimModel\framework\SimLocalPlacement_LocalPlacement.hxx"
%include "..\SimModel\framework\SimLocalPlacement_LocalPlacement_AbsolutePlacement.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimLocalPlacement_LocalPlacement_AbsolutePlacement_sequence) sequence<::schema::simxml::ResourcesGeometry::SimLocalPlacement_LocalPlacement_AbsolutePlacement, false>;
		
		// property method
	}
  }
}