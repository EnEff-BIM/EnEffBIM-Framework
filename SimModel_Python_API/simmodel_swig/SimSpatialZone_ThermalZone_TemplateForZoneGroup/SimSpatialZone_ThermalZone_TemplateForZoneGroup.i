/* File : SimSpatialZone_ThermalZone_TemplateForZoneGroup.i */
%module(directors="1") SimSpatialZone_ThermalZone_TemplateForZoneGroup
%include <std_auto_ptr.i>

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%ignore xsd::cxx::tree::sequence<::schema::simxml::BuildingModel::SimSpatialZone_ThermalZone_TemplateForZoneGroup, false>::getValue(int n);

//3. class auto ptr
%auto_ptr(::schema::simxml::BuildingModel::SimSpatialZone_ThermalZone_TemplateForZoneGroup)

%import  "..\base\base.i"
%import  "..\SimSpatialZone_ThermalZone_Default\SimSpatialZone_ThermalZone_Default.i"
/* Let's just grab the original header file here */
%include "..\SimModel\framework\SimSpatialZone_ThermalZone_TemplateForZoneGroup.hxx"

namespace xsd
{
  namespace cxx
  {
    namespace tree
    {
		//5. class method				
		%template(SimSpatialZone_ThermalZone_TemplateForZoneGroup_sequence) sequence<::schema::simxml::BuildingModel::SimSpatialZone_ThermalZone_TemplateForZoneGroup, false>;
		
		// property method
	}
  }
}