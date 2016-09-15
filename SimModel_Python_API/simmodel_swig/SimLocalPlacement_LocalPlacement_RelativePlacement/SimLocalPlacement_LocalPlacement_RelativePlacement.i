/* File : SimLocalPlacement_LocalPlacement_RelativePlacement.i */
%module(directors="1") SimLocalPlacement_LocalPlacement_RelativePlacement
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimLocalPlacement_LocalPlacement_RelativePlacement, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimLocalPlacement_LocalPlacement_RelativePlacement)

%import  "..\base\base.i"
%import  "..\SimLocalPlacement_LocalPlacement_AbsolutePlacement\SimLocalPlacement_LocalPlacement_AbsolutePlacement.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimLocalPlacement_LocalPlacement_RelativePlacement.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimLocalPlacement_LocalPlacement_RelativePlacement_sequence) sequence<::schema::simxml::ResourcesGeometry::SimLocalPlacement_LocalPlacement_RelativePlacement, false>;
		
		// property method
	}
  }
}