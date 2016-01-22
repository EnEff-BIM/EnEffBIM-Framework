/* File : SimRepresentationMap_RepresentationMap_Default.i */
%module(directors="1") SimRepresentationMap_RepresentationMap_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimRepresentationMap_RepresentationMap_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimRepresentationMap.hxx"
%include "..\SimModel\framework\SimRepresentationMap_RepresentationMap.hxx"
%include "..\SimModel\framework\SimRepresentationMap_RepresentationMap_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimRepresentationMap_RepresentationMap_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimRepresentationMap_RepresentationMap_Default, false>;
		
		// property method
	}
  }
}