/* File : SimFlowSegment_Pipe_Indoor.i */
%module(directors="1") SimFlowSegment_Pipe_Indoor
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::MepModel::SimFlowSegment_Pipe_Indoor, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::MepModel::SimFlowSegment_Pipe_Indoor)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimFlowSegment.hxx"
%include "..\SimModel\framework\SimFlowSegment_Pipe.hxx"
%include "..\SimModel\framework\SimFlowSegment_Pipe_Indoor.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimFlowSegment_Pipe_Indoor_sequence) sequence<::schema::simxml::MepModel::SimFlowSegment_Pipe_Indoor, false>;
		
		// property method
	}
  }
}