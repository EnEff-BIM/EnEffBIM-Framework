/* File : SimCartesianTransformOperator_3D_Uniform.i */
%module(directors="1") SimCartesianTransformOperator_3D_Uniform
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D_Uniform, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D_Uniform)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimCartesianTransformOperator.hxx"
%include "..\SimModel\framework\SimCartesianTransformOperator_3D.hxx"
%include "..\SimModel\framework\SimCartesianTransformOperator_3D_Uniform.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimCartesianTransformOperator_3D_Uniform_sequence) sequence<::schema::simxml::ResourcesGeometry::SimCartesianTransformOperator_3D_Uniform, false>;
		
		// property method
	}
  }
}