/* File : SimBuildingStory_BuildingStory_Default.i */
%module(directors="1") SimBuildingStory_BuildingStory_Default
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimBuildingStory_BuildingStory_Default)

%import  "..\base\base.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimBuildingStory.hxx"
%include "..\SimModel\framework\SimBuildingStory_BuildingStory.hxx"
%include "..\SimModel\framework\SimBuildingStory_BuildingStory_Default.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimBuildingStory_BuildingStory_Default_sequence) sequence<::schema::simxml::BuildingModel::SimBuildingStory_BuildingStory_Default, false>;
		
		// property method
		//%template(BuildingStoryHeight_optional) optional<BuildingStoryHeight_type, true>;
	}
  }
}