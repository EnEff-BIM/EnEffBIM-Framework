/* File : SimConnectedFaceSet_ConnectedFaceSet_ClosedShell.i */
%module(directors="1") SimConnectedFaceSet_ConnectedFaceSet_ClosedShell
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeometry::SimConnectedFaceSet_ConnectedFaceSet_ClosedShell)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimConnectedFaceSet.hxx"
%include "..\SimModel\framework\SimConnectedFaceSet_ConnectedFaceSet.hxx"
%include "..\SimModel\framework\SimConnectedFaceSet_ConnectedFaceSet_ClosedShell.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimConnectedFaceSet_ConnectedFaceSet_ClosedShell_sequence) sequence<::schema::simxml::ResourcesGeometry::SimConnectedFaceSet_ConnectedFaceSet_ClosedShell, false>;
		
		// property method
	}
  }
}