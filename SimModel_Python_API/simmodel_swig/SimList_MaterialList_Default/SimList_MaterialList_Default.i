/* File : SimList_MaterialList_Default.i */
%module(directors="1") SimList_MaterialList_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimList_MaterialList_Default, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimList_MaterialList_Default)

%import  "..\base\base.i"
%import  "..\SimList_ConnectorList_SimConnections\SimList_ConnectorList_SimConnections.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimList_MaterialList.hxx"
%include "..\SimModel\framework\SimList_MaterialList_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimList_MaterialList_Default_sequence) sequence<::schema::simxml::BuildingModel::SimList_MaterialList_Default, false>;
		
		// property method
	}
  }
}