/* File : base.i */
%module(directors="1") base
%include "std_string.i"
%include <std_auto_ptr.i>
%include "stl.i"

%{
#define SWIG_FILE_WITH_INIT
#include "../SimModel_Dll_lib/framework/simmodel.hxx"
using namespace xsd::cxx::tree;
%}


%auto_ptr(::xml_schema::string)
%auto_ptr(::xml_schema::id)
%auto_ptr(::xml_schema::idref)
%auto_ptr(::xml_schema::idrefs)
%auto_ptr(::schema::simxml::SimModelCore::doubleList)
%auto_ptr(::schema::simxml::SimModelCore::integerList)
%auto_ptr(::schema::simxml::SimModelCore::logical)
%auto_ptr(::schema::simxml::SimModelCore::SelectedPropertyGroups)
%auto_ptr(::schema::simxml::Model::SimModel)

/* Let's just grab the original header file here */
%include "C:\xsd\xsd4.0\include\xsd\cxx\config.hxx"
%include "C:\xsd\xsd4.0\include\xsd\cxx\tree\containers-wildcard.hxx"
%include "C:\xsd\xsd4.0\include\xsd\cxx\tree\elements.hxx"
%include "C:\xsd\xsd4.0\include\xsd\cxx\tree\containers.hxx"

//4.
%include "..\SimModel\framework\SimRoot.hxx"
%include "..\SimModel\framework\SimObjectDefinition.hxx"
%include "..\SimModel\framework\SimObject.hxx"
%include "..\SimModel\framework\SimGroup.hxx"
%include "..\SimModel\framework\SimSpatialStructureElement.hxx"
%include "..\SimModel\framework\SimResourceObject.hxx"
// additional
%include "..\SimModel\framework\SimAppDefault.hxx"
%include "..\SimModel\framework\SimRepresentationItem.hxx"
%include "..\SimModel\framework\SimProfileDefinition.hxx"
%include "..\SimModel\framework\SimBldgModelParams.hxx"
%include "..\SimModel\framework\SimTopologicalRepresentationItem.hxx"
%include "..\SimModel\framework\SimElement.hxx"
%include "..\SimModel\framework\SimDistributionElement.hxx"
%include "..\SimModel\framework\SimDistributionControlElement.hxx"
%include "..\SimModel\framework\SimUnitType.hxx"
%include "..\SimModel\framework\SimNode.hxx"
%include "..\SimModel\framework\SimPort.hxx"
%include "..\SimModel\framework\SimFeatureElement.hxx"
%include "..\SimModel\framework\SimDistributionFlowElement.hxx"
%include "..\SimModel\framework\SimFlowEnergyConverter.hxx"
%include "..\SimModel\framework\SimGeometricRepresentationItem.hxx"
%include "..\SimModel\framework\SimObjectPlacement.hxx"
%include "..\SimModel\framework\SimActorDefinition.hxx"
%include "..\SimModel\framework\SimRepresentation.hxx"
%include "..\SimModel\framework\SimBuildingElement.hxx"
%include "..\SimModel\framework\SimTemplate.hxx"
%include "..\SimModel\framework\SimObjectTypeDefinition.hxx"
%include "..\SimModel\framework\SimArrayParams.hxx"
%include "..\SimModel\framework\SimPropertySetDefinition.hxx"


using namespace schema;
using namespace simxml;
using namespace SimModelCore;
using namespace xsd;
using namespace cxx;
using namespace tree;

//using namespace Model;
using namespace MepModel;
//using namespace BuildingModel;
using namespace ResourcesGeneral;
using namespace ResourcesGeometry;