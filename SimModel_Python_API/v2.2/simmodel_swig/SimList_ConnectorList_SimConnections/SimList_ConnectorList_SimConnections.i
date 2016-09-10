/* File : SimList_ConnectorList_SimConnections.i */
%module(directors="1") SimList_ConnectorList_SimConnections
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimList_ConnectorList_SimConnections)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimList.hxx"
%include "..\SimModel\framework\SimList_ConnectorList.hxx"
%include "..\SimModel\framework\SimList_ConnectorList_SimConnections.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimList_ConnectorList_SimConnections_sequence) sequence<::schema::simxml::BuildingModel::SimList_ConnectorList_SimConnections, false>;
		
		// property method
	}
  }
}