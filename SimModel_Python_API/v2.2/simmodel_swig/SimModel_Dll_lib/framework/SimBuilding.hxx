// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef SIM_BUILDING_HXX
#define SIM_BUILDING_HXX

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
//#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;
  typedef ::xsd::cxx::tree::no_type_info< char > no_type_info;
  typedef ::xsd::cxx::tree::not_derived< char > not_derived;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimBuilding;
    }
  }
}


#include <memory>    // ::std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "simspatialstructureelement.hxx"

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      class logical;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class __declspec(dllexport) SimBuilding: public ::schema::simxml::SimModelCore::SimSpatialStructureElement
      {
        public:
        // Name
        //
        typedef ::xml_schema::string Name_type;
        typedef ::xsd::cxx::tree::optional< Name_type, false > Name_optional;
        typedef ::xsd::cxx::tree::traits< Name_type, char > Name_traits;

        const Name_optional&
        Name () const;

        Name_optional&
        Name ();

        void
        Name (const Name_type& x);

        void
        Name (const Name_optional& x);

        void
        Name (::std::auto_ptr< Name_type > p);

        // BuildingAddress
        //
        typedef ::xml_schema::idref BuildingAddress_type;
        typedef ::xsd::cxx::tree::optional< BuildingAddress_type, false > BuildingAddress_optional;
        typedef ::xsd::cxx::tree::traits< BuildingAddress_type, char > BuildingAddress_traits;

        const BuildingAddress_optional&
        BuildingAddress () const;

        BuildingAddress_optional&
        BuildingAddress ();

        void
        BuildingAddress (const BuildingAddress_type& x);

        void
        BuildingAddress (const BuildingAddress_optional& x);

        void
        BuildingAddress (::std::auto_ptr< BuildingAddress_type > p);

        // BuildingDatumElevation
        //
        typedef ::xml_schema::double_ BuildingDatumElevation_type;
        typedef ::xsd::cxx::tree::optional< BuildingDatumElevation_type, true > BuildingDatumElevation_optional;
        typedef ::xsd::cxx::tree::traits< BuildingDatumElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingDatumElevation_traits;

        const BuildingDatumElevation_optional&
        BuildingDatumElevation () const;

        BuildingDatumElevation_optional&
        BuildingDatumElevation ();

        void
        BuildingDatumElevation (const BuildingDatumElevation_type& x);

        void
        BuildingDatumElevation (const BuildingDatumElevation_optional& x);

        // BuildingOccupancyType
        //
        typedef ::xml_schema::string BuildingOccupancyType_type;
        typedef ::xsd::cxx::tree::optional< BuildingOccupancyType_type, false > BuildingOccupancyType_optional;
        typedef ::xsd::cxx::tree::traits< BuildingOccupancyType_type, char > BuildingOccupancyType_traits;

        const BuildingOccupancyType_optional&
        BuildingOccupancyType () const;

        BuildingOccupancyType_optional&
        BuildingOccupancyType ();

        void
        BuildingOccupancyType (const BuildingOccupancyType_type& x);

        void
        BuildingOccupancyType (const BuildingOccupancyType_optional& x);

        void
        BuildingOccupancyType (::std::auto_ptr< BuildingOccupancyType_type > p);

        // BuildingGrossPlannedArea
        //
        typedef ::xml_schema::double_ BuildingGrossPlannedArea_type;
        typedef ::xsd::cxx::tree::optional< BuildingGrossPlannedArea_type, true > BuildingGrossPlannedArea_optional;
        typedef ::xsd::cxx::tree::traits< BuildingGrossPlannedArea_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingGrossPlannedArea_traits;

        const BuildingGrossPlannedArea_optional&
        BuildingGrossPlannedArea () const;

        BuildingGrossPlannedArea_optional&
        BuildingGrossPlannedArea ();

        void
        BuildingGrossPlannedArea (const BuildingGrossPlannedArea_type& x);

        void
        BuildingGrossPlannedArea (const BuildingGrossPlannedArea_optional& x);

        // BuildingNumberofStoreys
        //
        typedef ::xml_schema::double_ BuildingNumberofStoreys_type;
        typedef ::xsd::cxx::tree::optional< BuildingNumberofStoreys_type, true > BuildingNumberofStoreys_optional;
        typedef ::xsd::cxx::tree::traits< BuildingNumberofStoreys_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingNumberofStoreys_traits;

        const BuildingNumberofStoreys_optional&
        BuildingNumberofStoreys () const;

        BuildingNumberofStoreys_optional&
        BuildingNumberofStoreys ();

        void
        BuildingNumberofStoreys (const BuildingNumberofStoreys_type& x);

        void
        BuildingNumberofStoreys (const BuildingNumberofStoreys_optional& x);

        // BuildingYearOfConstruction
        //
        typedef ::xml_schema::string BuildingYearOfConstruction_type;
        typedef ::xsd::cxx::tree::optional< BuildingYearOfConstruction_type, false > BuildingYearOfConstruction_optional;
        typedef ::xsd::cxx::tree::traits< BuildingYearOfConstruction_type, char > BuildingYearOfConstruction_traits;

        const BuildingYearOfConstruction_optional&
        BuildingYearOfConstruction () const;

        BuildingYearOfConstruction_optional&
        BuildingYearOfConstruction ();

        void
        BuildingYearOfConstruction (const BuildingYearOfConstruction_type& x);

        void
        BuildingYearOfConstruction (const BuildingYearOfConstruction_optional& x);

        void
        BuildingYearOfConstruction (::std::auto_ptr< BuildingYearOfConstruction_type > p);

        // BuildingisLandmarked
        //
        typedef ::schema::simxml::SimModelCore::logical BuildingisLandmarked_type;
        typedef ::xsd::cxx::tree::optional< BuildingisLandmarked_type > BuildingisLandmarked_optional;
        typedef ::xsd::cxx::tree::traits< BuildingisLandmarked_type, char > BuildingisLandmarked_traits;

        const BuildingisLandmarked_optional&
        BuildingisLandmarked () const;

        BuildingisLandmarked_optional&
        BuildingisLandmarked ();

        void
        BuildingisLandmarked (const BuildingisLandmarked_type& x);

        void
        BuildingisLandmarked (const BuildingisLandmarked_optional& x);

        void
        BuildingisLandmarked (::std::auto_ptr< BuildingisLandmarked_type > p);

        // BuildingEnergyTargetUnits
        //
        typedef ::xml_schema::string BuildingEnergyTargetUnits_type;
        typedef ::xsd::cxx::tree::optional< BuildingEnergyTargetUnits_type, false > BuildingEnergyTargetUnits_optional;
        typedef ::xsd::cxx::tree::traits< BuildingEnergyTargetUnits_type, char > BuildingEnergyTargetUnits_traits;

        const BuildingEnergyTargetUnits_optional&
        BuildingEnergyTargetUnits () const;

        BuildingEnergyTargetUnits_optional&
        BuildingEnergyTargetUnits ();

        void
        BuildingEnergyTargetUnits (const BuildingEnergyTargetUnits_type& x);

        void
        BuildingEnergyTargetUnits (const BuildingEnergyTargetUnits_optional& x);

        void
        BuildingEnergyTargetUnits (::std::auto_ptr< BuildingEnergyTargetUnits_type > p);

        // BuildingEnergyTargetValue
        //
        typedef ::xml_schema::double_ BuildingEnergyTargetValue_type;
        typedef ::xsd::cxx::tree::optional< BuildingEnergyTargetValue_type, true > BuildingEnergyTargetValue_optional;
        typedef ::xsd::cxx::tree::traits< BuildingEnergyTargetValue_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingEnergyTargetValue_traits;

        const BuildingEnergyTargetValue_optional&
        BuildingEnergyTargetValue () const;

        BuildingEnergyTargetValue_optional&
        BuildingEnergyTargetValue ();

        void
        BuildingEnergyTargetValue (const BuildingEnergyTargetValue_type& x);

        void
        BuildingEnergyTargetValue (const BuildingEnergyTargetValue_optional& x);

        // BuildingHeight
        //
        typedef ::xml_schema::double_ BuildingHeight_type;
        //typedef ::xsd::cxx::tree::optional< BuildingHeight_type > BuildingHeight_optional;
		typedef ::xsd::cxx::tree::optional< BuildingHeight_type, true > BuildingHeight_optional;
        typedef ::xsd::cxx::tree::traits< BuildingHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingHeight_traits;

        const BuildingHeight_optional&
        BuildingHeight () const;

        BuildingHeight_optional&
        BuildingHeight ();

        void
        BuildingHeight (const BuildingHeight_type& x);

        void
        BuildingHeight (const BuildingHeight_optional& x);

        // BuildingGrossFloorArea
        //
        typedef ::xml_schema::double_ BuildingGrossFloorArea_type;
        typedef ::xsd::cxx::tree::optional< BuildingGrossFloorArea_type, true > BuildingGrossFloorArea_optional;
        typedef ::xsd::cxx::tree::traits< BuildingGrossFloorArea_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingGrossFloorArea_traits;

        const BuildingGrossFloorArea_optional&
        BuildingGrossFloorArea () const;

        BuildingGrossFloorArea_optional&
        BuildingGrossFloorArea ();

        void
        BuildingGrossFloorArea (const BuildingGrossFloorArea_type& x);

        void
        BuildingGrossFloorArea (const BuildingGrossFloorArea_optional& x);

        // ClassRef_ConstEntByFunction
        //
        typedef ::xml_schema::idref ClassRef_ConstEntByFunction_type;
        typedef ::xsd::cxx::tree::optional< ClassRef_ConstEntByFunction_type, false > ClassRef_ConstEntByFunction_optional;
        typedef ::xsd::cxx::tree::traits< ClassRef_ConstEntByFunction_type, char > ClassRef_ConstEntByFunction_traits;

        const ClassRef_ConstEntByFunction_optional&
        ClassRef_ConstEntByFunction () const;

        ClassRef_ConstEntByFunction_optional&
        ClassRef_ConstEntByFunction ();

        void
        ClassRef_ConstEntByFunction (const ClassRef_ConstEntByFunction_type& x);

        void
        ClassRef_ConstEntByFunction (const ClassRef_ConstEntByFunction_optional& x);

        void
        ClassRef_ConstEntByFunction (::std::auto_ptr< ClassRef_ConstEntByFunction_type > p);

        // BuildingInSpatialContainer
        //
        typedef ::xml_schema::idref BuildingInSpatialContainer_type;
        typedef ::xsd::cxx::tree::optional< BuildingInSpatialContainer_type, false > BuildingInSpatialContainer_optional;
        typedef ::xsd::cxx::tree::traits< BuildingInSpatialContainer_type, char > BuildingInSpatialContainer_traits;

        const BuildingInSpatialContainer_optional&
        BuildingInSpatialContainer () const;

        BuildingInSpatialContainer_optional&
        BuildingInSpatialContainer ();

        void
        BuildingInSpatialContainer (const BuildingInSpatialContainer_type& x);

        void
        BuildingInSpatialContainer (const BuildingInSpatialContainer_optional& x);

        void
        BuildingInSpatialContainer (::std::auto_ptr< BuildingInSpatialContainer_type > p);

        // Representation
        //
        typedef ::xml_schema::idref Representation_type;
        typedef ::xsd::cxx::tree::optional< Representation_type, false > Representation_optional;
        typedef ::xsd::cxx::tree::traits< Representation_type, char > Representation_traits;

        const Representation_optional&
        Representation () const;

        Representation_optional&
        Representation ();

        void
        Representation (const Representation_type& x);

        void
        Representation (const Representation_optional& x);

        void
        Representation (::std::auto_ptr< Representation_type > p);

        // ElevationOfTerrain
        //
        typedef ::xml_schema::double_ ElevationOfTerrain_type;
        typedef ::xsd::cxx::tree::optional< ElevationOfTerrain_type, true > ElevationOfTerrain_optional;
        typedef ::xsd::cxx::tree::traits< ElevationOfTerrain_type, char, ::xsd::cxx::tree::schema_type::double_ > ElevationOfTerrain_traits;

        const ElevationOfTerrain_optional&
        ElevationOfTerrain () const;

        ElevationOfTerrain_optional&
        ElevationOfTerrain ();

        void
        ElevationOfTerrain (const ElevationOfTerrain_type& x);

        void
        ElevationOfTerrain (const ElevationOfTerrain_optional& x);

        // BuildingConstructionsTemplate
        //
        typedef ::xml_schema::idref BuildingConstructionsTemplate_type;
        typedef ::xsd::cxx::tree::optional< BuildingConstructionsTemplate_type, false > BuildingConstructionsTemplate_optional;
        typedef ::xsd::cxx::tree::traits< BuildingConstructionsTemplate_type, char > BuildingConstructionsTemplate_traits;

        const BuildingConstructionsTemplate_optional&
        BuildingConstructionsTemplate () const;

        BuildingConstructionsTemplate_optional&
        BuildingConstructionsTemplate ();

        void
        BuildingConstructionsTemplate (const BuildingConstructionsTemplate_type& x);

        void
        BuildingConstructionsTemplate (const BuildingConstructionsTemplate_optional& x);

        void
        BuildingConstructionsTemplate (::std::auto_ptr< BuildingConstructionsTemplate_type > p);

        // SpaceBoundsNotCurrent
        //
        typedef ::xml_schema::boolean SpaceBoundsNotCurrent_type;
        typedef ::xsd::cxx::tree::optional< SpaceBoundsNotCurrent_type > SpaceBoundsNotCurrent_optional;
        typedef ::xsd::cxx::tree::traits< SpaceBoundsNotCurrent_type, char > SpaceBoundsNotCurrent_traits;

        const SpaceBoundsNotCurrent_optional&
        SpaceBoundsNotCurrent () const;

        SpaceBoundsNotCurrent_optional&
        SpaceBoundsNotCurrent ();

        void
        SpaceBoundsNotCurrent (const SpaceBoundsNotCurrent_type& x);

        void
        SpaceBoundsNotCurrent (const SpaceBoundsNotCurrent_optional& x);

        // DaylightControlsDefault
        //
        typedef ::xml_schema::idref DaylightControlsDefault_type;
        typedef ::xsd::cxx::tree::optional< DaylightControlsDefault_type, false > DaylightControlsDefault_optional;
        typedef ::xsd::cxx::tree::traits< DaylightControlsDefault_type, char > DaylightControlsDefault_traits;

        const DaylightControlsDefault_optional&
        DaylightControlsDefault () const;

        DaylightControlsDefault_optional&
        DaylightControlsDefault ();

        void
        DaylightControlsDefault (const DaylightControlsDefault_type& x);

        void
        DaylightControlsDefault (const DaylightControlsDefault_optional& x);

        void
        DaylightControlsDefault (::std::auto_ptr< DaylightControlsDefault_type > p);

        // NatVentilationDefault
        //
        typedef ::xml_schema::idref NatVentilationDefault_type;
        typedef ::xsd::cxx::tree::optional< NatVentilationDefault_type, false > NatVentilationDefault_optional;
        typedef ::xsd::cxx::tree::traits< NatVentilationDefault_type, char > NatVentilationDefault_traits;

        const NatVentilationDefault_optional&
        NatVentilationDefault () const;

        NatVentilationDefault_optional&
        NatVentilationDefault ();

        void
        NatVentilationDefault (const NatVentilationDefault_type& x);

        void
        NatVentilationDefault (const NatVentilationDefault_optional& x);

        void
        NatVentilationDefault (::std::auto_ptr< NatVentilationDefault_type > p);

        // BuildingInfiltrationType
        //
        typedef ::xml_schema::string BuildingInfiltrationType_type;
        typedef ::xsd::cxx::tree::optional< BuildingInfiltrationType_type, false > BuildingInfiltrationType_optional;
        typedef ::xsd::cxx::tree::traits< BuildingInfiltrationType_type, char > BuildingInfiltrationType_traits;

        const BuildingInfiltrationType_optional&
        BuildingInfiltrationType () const;

        BuildingInfiltrationType_optional&
        BuildingInfiltrationType ();

        void
        BuildingInfiltrationType (const BuildingInfiltrationType_type& x);

        void
        BuildingInfiltrationType (const BuildingInfiltrationType_optional& x);

        void
        BuildingInfiltrationType (::std::auto_ptr< BuildingInfiltrationType_type > p);

        // BuildingInfiltrationValue
        //
        typedef ::xml_schema::double_ BuildingInfiltrationValue_type;
        typedef ::xsd::cxx::tree::optional< BuildingInfiltrationValue_type, true > BuildingInfiltrationValue_optional;
        typedef ::xsd::cxx::tree::traits< BuildingInfiltrationValue_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingInfiltrationValue_traits;

        const BuildingInfiltrationValue_optional&
        BuildingInfiltrationValue () const;

        BuildingInfiltrationValue_optional&
        BuildingInfiltrationValue ();

        void
        BuildingInfiltrationValue (const BuildingInfiltrationValue_type& x);

        void
        BuildingInfiltrationValue (const BuildingInfiltrationValue_optional& x);

        // TemplateOverrideValues
        //
        typedef ::xml_schema::idref TemplateOverrideValues_type;
        typedef ::xsd::cxx::tree::optional< TemplateOverrideValues_type, false > TemplateOverrideValues_optional;
        typedef ::xsd::cxx::tree::traits< TemplateOverrideValues_type, char > TemplateOverrideValues_traits;

        const TemplateOverrideValues_optional&
        TemplateOverrideValues () const;

        TemplateOverrideValues_optional&
        TemplateOverrideValues ();

        void
        TemplateOverrideValues (const TemplateOverrideValues_type& x);

        void
        TemplateOverrideValues (const TemplateOverrideValues_optional& x);

        void
        TemplateOverrideValues (::std::auto_ptr< TemplateOverrideValues_type > p);

        // Constructors.
        //
        SimBuilding ();

        SimBuilding (const RefId_type&);

        SimBuilding (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

        SimBuilding (const SimBuilding& x,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

        virtual SimBuilding*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimBuilding&
        operator= (const SimBuilding& x);

        virtual 
        ~SimBuilding ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Name_optional Name_;
        BuildingAddress_optional BuildingAddress_;
        BuildingDatumElevation_optional BuildingDatumElevation_;
        BuildingOccupancyType_optional BuildingOccupancyType_;
        BuildingGrossPlannedArea_optional BuildingGrossPlannedArea_;
        BuildingNumberofStoreys_optional BuildingNumberofStoreys_;
        BuildingYearOfConstruction_optional BuildingYearOfConstruction_;
        BuildingisLandmarked_optional BuildingisLandmarked_;
        BuildingEnergyTargetUnits_optional BuildingEnergyTargetUnits_;
        BuildingEnergyTargetValue_optional BuildingEnergyTargetValue_;
        BuildingHeight_optional BuildingHeight_;
        BuildingGrossFloorArea_optional BuildingGrossFloorArea_;
        ClassRef_ConstEntByFunction_optional ClassRef_ConstEntByFunction_;
        BuildingInSpatialContainer_optional BuildingInSpatialContainer_;
        Representation_optional Representation_;
        ElevationOfTerrain_optional ElevationOfTerrain_;
        BuildingConstructionsTemplate_optional BuildingConstructionsTemplate_;
        SpaceBoundsNotCurrent_optional SpaceBoundsNotCurrent_;
        DaylightControlsDefault_optional DaylightControlsDefault_;
        NatVentilationDefault_optional NatVentilationDefault_;
        BuildingInfiltrationType_optional BuildingInfiltrationType_;
        BuildingInfiltrationValue_optional BuildingInfiltrationValue_;
        TemplateOverrideValues_optional TemplateOverrideValues_;
      };
    }
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_BUILDING_HXX
