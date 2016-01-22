/* File : SimPerson_Person_Default.i */
%module(directors="1") SimPerson_Person_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimPerson_Person_Default)
%auto_ptr(::schema::simxml::ResourcesGeneral::MiddleNames)
%auto_ptr(::schema::simxml::ResourcesGeneral::PrefixTitles)
%auto_ptr(::schema::simxml::ResourcesGeneral::SuffixTitles)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimPerson.hxx"
%include "..\SimModel\framework\SimPerson_Person.hxx"
%include "..\SimModel\framework\SimPerson_Person_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimPerson_Person_Default_sequence) sequence<::schema::simxml::ResourcesGeneral::SimPerson_Person_Default, false>;
		
		// property method
	}
  }
}