/* File : SimPerformanceCurve_Mathematical_Cubic.i */
%module(directors="1") SimPerformanceCurve_Mathematical_Cubic
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimPerformanceCurve_Mathematical_Cubic, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimPerformanceCurve_Mathematical_Cubic)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimAnalyticalRepresentationItem.hxx"
%include "..\SimModel\framework\SimPerformanceCurve.hxx"
%include "..\SimModel\framework\SimPerformanceCurve_Mathematical.hxx"
%include "..\SimModel\framework\SimPerformanceCurve_Mathematical_Cubic.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimPerformanceCurve_Mathematical_Cubic_sequence) sequence<::schema::simxml::ResourcesGeometry::SimPerformanceCurve_Mathematical_Cubic, false>;
		
		// property method
	}
  }
}