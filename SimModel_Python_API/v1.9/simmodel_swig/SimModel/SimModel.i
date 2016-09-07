/* File : SimModel.i */
%module(directors="1") SimModel
%include "std_string.i"
%include <std_auto_ptr.i>
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}

%import  "..\base\base.i"
//%import  "..\SimBuilding_Building_Default\SimBuilding_Building_Default.i"
//%import  "..\SimBuildingStory_BuildingStory_Default\SimBuildingStory_BuildingStory_Default.i"

%auto_ptr(::xml_schema::string)
%auto_ptr(::schema::simxml::Model::SimModel)

/* Let's just grab the original header file here */
%include ".\framework\SimModel1.hxx"
%include ".\framework\simmodel.hxx"

using namespace schema;
using namespace simxml;
using namespace Model;
using namespace MepModel;
using namespace BuildingModel;
using namespace ResourcesGeneral;
using namespace ResourcesGeometry;
//using namespace SimModelCore;