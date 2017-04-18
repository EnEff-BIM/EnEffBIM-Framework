/* File : SimFace_Face_Default.i */
%module(directors="1") SimFace_Face_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimFace_Face_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimFace_Face_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFace.hxx"
%include "..\SimModel\framework\SimFace_Face.hxx"
%include "..\SimModel\framework\SimFace_Face_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFace_Face_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimFace_Face_Default, false>;
		
		// property method
	}
  }
}