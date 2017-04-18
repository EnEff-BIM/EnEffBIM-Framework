/* File : SimFaceBound_FaceBound_FaceOuterBound.i */
%module(directors="1") SimFaceBound_FaceBound_FaceOuterBound
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimFaceBound_FaceBound_FaceOuterBound, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimFaceBound_FaceBound_FaceOuterBound)

%import  "..\base\base.i"
%import  "..\SimFaceBound_FaceBound_Default\SimFaceBound_FaceBound_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFaceBound_FaceBound_FaceOuterBound.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFaceBound_FaceBound_FaceOuterBound_sequence) sequence<::schema::simxml::ResourcesGeometry::SimFaceBound_FaceBound_FaceOuterBound, false>;
		
		// property method
	}
  }
}