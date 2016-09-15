/* File : SimConnectedFaceSet_ConnectedFaceSet_Default.i */
%module(directors="1") SimConnectedFaceSet_ConnectedFaceSet_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::ResourcesGeometry::SimConnectedFaceSet_ConnectedFaceSet_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimConnectedFaceSet_ConnectedFaceSet_Default)

%import  "..\base\base.i"
%import  "..\SimConnectedFaceSet_ConnectedFaceSet_ClosedShell\SimConnectedFaceSet_ConnectedFaceSet_ClosedShell.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimConnectedFaceSet_ConnectedFaceSet_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimConnectedFaceSet_ConnectedFaceSet_Default_sequence) sequence<::schema::simxml::ResourcesGeometry::SimConnectedFaceSet_ConnectedFaceSet_Default, false>;
		
		// property method
	}
  }
}