/* File : SimSlabParams_Slab_Floor.i */
%module(directors="1") SimSlabParams_Slab_Floor
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::ResourcesGeneral::SimSlabParams_Slab_Floor)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSlabParams.hxx"
%include "..\SimModel\framework\SimSlabParams_Slab.hxx"
%include "..\SimModel\framework\SimSlabParams_Slab_Floor.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSlabParams_Slab_Floor_sequence) sequence<::schema::simxml::ResourcesGeneral::SimSlabParams_Slab_Floor, false>;
		
		// property method
	}
  }
}