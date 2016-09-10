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

#ifndef SIM_BLDG_STORY_PARAMS_HXX
#define SIM_BLDG_STORY_PARAMS_HXX

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
    namespace ResourcesGeneral
    {
      class SimBldgStoryParams;
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

#include "simbldgmodelparams.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimBldgStoryParams: public ::schema::simxml::SimModelCore::SimBldgModelParams
      {
        public:
        // BldgStoryName
        //
        typedef ::xml_schema::string BldgStoryName_type;
        typedef ::xsd::cxx::tree::optional< BldgStoryName_type, false > BldgStoryName_optional;
        typedef ::xsd::cxx::tree::traits< BldgStoryName_type, char > BldgStoryName_traits;

        const BldgStoryName_optional&
        BldgStoryName () const;

        BldgStoryName_optional&
        BldgStoryName ();

        void
        BldgStoryName (const BldgStoryName_type& x);

        void
        BldgStoryName (const BldgStoryName_optional& x);

        void
        BldgStoryName (::std::auto_ptr< BldgStoryName_type > p);

        // BldgStoryShape
        //
        typedef ::xml_schema::string BldgStoryShape_type;
        typedef ::xsd::cxx::tree::optional< BldgStoryShape_type, false > BldgStoryShape_optional;
        typedef ::xsd::cxx::tree::traits< BldgStoryShape_type, char > BldgStoryShape_traits;

        const BldgStoryShape_optional&
        BldgStoryShape () const;

        BldgStoryShape_optional&
        BldgStoryShape ();

        void
        BldgStoryShape (const BldgStoryShape_type& x);

        void
        BldgStoryShape (const BldgStoryShape_optional& x);

        void
        BldgStoryShape (::std::auto_ptr< BldgStoryShape_type > p);

        // X1Dim
        //
        typedef ::xml_schema::double_ X1Dim_type;
        typedef ::xsd::cxx::tree::optional< X1Dim_type, true > X1Dim_optional;
        typedef ::xsd::cxx::tree::traits< X1Dim_type, char, ::xsd::cxx::tree::schema_type::double_ > X1Dim_traits;

        const X1Dim_optional&
        X1Dim () const;

        X1Dim_optional&
        X1Dim ();

        void
        X1Dim (const X1Dim_type& x);

        void
        X1Dim (const X1Dim_optional& x);

        // X2Dim
        //
        typedef ::xml_schema::double_ X2Dim_type;
        typedef ::xsd::cxx::tree::optional< X2Dim_type, true > X2Dim_optional;
        typedef ::xsd::cxx::tree::traits< X2Dim_type, char, ::xsd::cxx::tree::schema_type::double_ > X2Dim_traits;

        const X2Dim_optional&
        X2Dim () const;

        X2Dim_optional&
        X2Dim ();

        void
        X2Dim (const X2Dim_type& x);

        void
        X2Dim (const X2Dim_optional& x);

        // X3Dim
        //
        typedef ::xml_schema::double_ X3Dim_type;
        typedef ::xsd::cxx::tree::optional< X3Dim_type, true > X3Dim_optional;
        typedef ::xsd::cxx::tree::traits< X3Dim_type, char, ::xsd::cxx::tree::schema_type::double_ > X3Dim_traits;

        const X3Dim_optional&
        X3Dim () const;

        X3Dim_optional&
        X3Dim ();

        void
        X3Dim (const X3Dim_type& x);

        void
        X3Dim (const X3Dim_optional& x);

        // Y1Dim
        //
        typedef ::xml_schema::double_ Y1Dim_type;
        typedef ::xsd::cxx::tree::optional< Y1Dim_type, true > Y1Dim_optional;
        typedef ::xsd::cxx::tree::traits< Y1Dim_type, char, ::xsd::cxx::tree::schema_type::double_ > Y1Dim_traits;

        const Y1Dim_optional&
        Y1Dim () const;

        Y1Dim_optional&
        Y1Dim ();

        void
        Y1Dim (const Y1Dim_type& x);

        void
        Y1Dim (const Y1Dim_optional& x);

        // Y2Dim
        //
        typedef ::xml_schema::double_ Y2Dim_type;
        typedef ::xsd::cxx::tree::optional< Y2Dim_type, true > Y2Dim_optional;
        typedef ::xsd::cxx::tree::traits< Y2Dim_type, char, ::xsd::cxx::tree::schema_type::double_ > Y2Dim_traits;

        const Y2Dim_optional&
        Y2Dim () const;

        Y2Dim_optional&
        Y2Dim ();

        void
        Y2Dim (const Y2Dim_type& x);

        void
        Y2Dim (const Y2Dim_optional& x);

        // Y3Dim
        //
        typedef ::xml_schema::double_ Y3Dim_type;
        typedef ::xsd::cxx::tree::optional< Y3Dim_type, true > Y3Dim_optional;
        typedef ::xsd::cxx::tree::traits< Y3Dim_type, char, ::xsd::cxx::tree::schema_type::double_ > Y3Dim_traits;

        const Y3Dim_optional&
        Y3Dim () const;

        Y3Dim_optional&
        Y3Dim ();

        void
        Y3Dim (const Y3Dim_type& x);

        void
        Y3Dim (const Y3Dim_optional& x);

        // FloorToFloorHeight
        //
        typedef ::xml_schema::double_ FloorToFloorHeight_type;
        typedef ::xsd::cxx::tree::optional< FloorToFloorHeight_type, true > FloorToFloorHeight_optional;
        typedef ::xsd::cxx::tree::traits< FloorToFloorHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > FloorToFloorHeight_traits;

        const FloorToFloorHeight_optional&
        FloorToFloorHeight () const;

        FloorToFloorHeight_optional&
        FloorToFloorHeight ();

        void
        FloorToFloorHeight (const FloorToFloorHeight_type& x);

        void
        FloorToFloorHeight (const FloorToFloorHeight_optional& x);

        // CeilingBottomElevation
        //
        typedef ::xml_schema::double_ CeilingBottomElevation_type;
        typedef ::xsd::cxx::tree::optional< CeilingBottomElevation_type, true > CeilingBottomElevation_optional;
        typedef ::xsd::cxx::tree::traits< CeilingBottomElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > CeilingBottomElevation_traits;

        const CeilingBottomElevation_optional&
        CeilingBottomElevation () const;

        CeilingBottomElevation_optional&
        CeilingBottomElevation ();

        void
        CeilingBottomElevation (const CeilingBottomElevation_type& x);

        void
        CeilingBottomElevation (const CeilingBottomElevation_optional& x);

        // FinishFloorTopElevation
        //
        typedef ::xml_schema::double_ FinishFloorTopElevation_type;
        typedef ::xsd::cxx::tree::optional< FinishFloorTopElevation_type, true > FinishFloorTopElevation_optional;
        typedef ::xsd::cxx::tree::traits< FinishFloorTopElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > FinishFloorTopElevation_traits;

        const FinishFloorTopElevation_optional&
        FinishFloorTopElevation () const;

        FinishFloorTopElevation_optional&
        FinishFloorTopElevation ();

        void
        FinishFloorTopElevation (const FinishFloorTopElevation_type& x);

        void
        FinishFloorTopElevation (const FinishFloorTopElevation_optional& x);

        // SpaceConfigOccupied
        //
        typedef ::xml_schema::string SpaceConfigOccupied_type;
        typedef ::xsd::cxx::tree::optional< SpaceConfigOccupied_type, false > SpaceConfigOccupied_optional;
        typedef ::xsd::cxx::tree::traits< SpaceConfigOccupied_type, char > SpaceConfigOccupied_traits;

        const SpaceConfigOccupied_optional&
        SpaceConfigOccupied () const;

        SpaceConfigOccupied_optional&
        SpaceConfigOccupied ();

        void
        SpaceConfigOccupied (const SpaceConfigOccupied_type& x);

        void
        SpaceConfigOccupied (const SpaceConfigOccupied_optional& x);

        void
        SpaceConfigOccupied (::std::auto_ptr< SpaceConfigOccupied_type > p);

        // PlenumConfiguration
        //
        typedef ::xml_schema::string PlenumConfiguration_type;
        typedef ::xsd::cxx::tree::optional< PlenumConfiguration_type, false > PlenumConfiguration_optional;
        typedef ::xsd::cxx::tree::traits< PlenumConfiguration_type, char > PlenumConfiguration_traits;

        const PlenumConfiguration_optional&
        PlenumConfiguration () const;

        PlenumConfiguration_optional&
        PlenumConfiguration ();

        void
        PlenumConfiguration (const PlenumConfiguration_type& x);

        void
        PlenumConfiguration (const PlenumConfiguration_optional& x);

        void
        PlenumConfiguration (::std::auto_ptr< PlenumConfiguration_type > p);

        // SpaceConfigAboveCeiling
        //
        typedef ::xml_schema::string SpaceConfigAboveCeiling_type;
        typedef ::xsd::cxx::tree::optional< SpaceConfigAboveCeiling_type, false > SpaceConfigAboveCeiling_optional;
        typedef ::xsd::cxx::tree::traits< SpaceConfigAboveCeiling_type, char > SpaceConfigAboveCeiling_traits;

        const SpaceConfigAboveCeiling_optional&
        SpaceConfigAboveCeiling () const;

        SpaceConfigAboveCeiling_optional&
        SpaceConfigAboveCeiling ();

        void
        SpaceConfigAboveCeiling (const SpaceConfigAboveCeiling_type& x);

        void
        SpaceConfigAboveCeiling (const SpaceConfigAboveCeiling_optional& x);

        void
        SpaceConfigAboveCeiling (::std::auto_ptr< SpaceConfigAboveCeiling_type > p);

        // SpaceConfigBelowFloor
        //
        typedef ::xml_schema::string SpaceConfigBelowFloor_type;
        typedef ::xsd::cxx::tree::optional< SpaceConfigBelowFloor_type, false > SpaceConfigBelowFloor_optional;
        typedef ::xsd::cxx::tree::traits< SpaceConfigBelowFloor_type, char > SpaceConfigBelowFloor_traits;

        const SpaceConfigBelowFloor_optional&
        SpaceConfigBelowFloor () const;

        SpaceConfigBelowFloor_optional&
        SpaceConfigBelowFloor ();

        void
        SpaceConfigBelowFloor (const SpaceConfigBelowFloor_type& x);

        void
        SpaceConfigBelowFloor (const SpaceConfigBelowFloor_optional& x);

        void
        SpaceConfigBelowFloor (::std::auto_ptr< SpaceConfigBelowFloor_type > p);

        // PerimeterZoneDepth
        //
        typedef ::xml_schema::double_ PerimeterZoneDepth_type;
        typedef ::xsd::cxx::tree::optional< PerimeterZoneDepth_type, true > PerimeterZoneDepth_optional;
        typedef ::xsd::cxx::tree::traits< PerimeterZoneDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > PerimeterZoneDepth_traits;

        const PerimeterZoneDepth_optional&
        PerimeterZoneDepth () const;

        PerimeterZoneDepth_optional&
        PerimeterZoneDepth ();

        void
        PerimeterZoneDepth (const PerimeterZoneDepth_type& x);

        void
        PerimeterZoneDepth (const PerimeterZoneDepth_optional& x);

        // WallProfilePathType
        //
        typedef ::xml_schema::string WallProfilePathType_type;
        typedef ::xsd::cxx::tree::optional< WallProfilePathType_type, false > WallProfilePathType_optional;
        typedef ::xsd::cxx::tree::traits< WallProfilePathType_type, char > WallProfilePathType_traits;

        const WallProfilePathType_optional&
        WallProfilePathType () const;

        WallProfilePathType_optional&
        WallProfilePathType ();

        void
        WallProfilePathType (const WallProfilePathType_type& x);

        void
        WallProfilePathType (const WallProfilePathType_optional& x);

        void
        WallProfilePathType (::std::auto_ptr< WallProfilePathType_type > p);

        // BldgStoryProfilePath
        //
        typedef ::xml_schema::idref BldgStoryProfilePath_type;
        typedef ::xsd::cxx::tree::optional< BldgStoryProfilePath_type, false > BldgStoryProfilePath_optional;
        typedef ::xsd::cxx::tree::traits< BldgStoryProfilePath_type, char > BldgStoryProfilePath_traits;

        const BldgStoryProfilePath_optional&
        BldgStoryProfilePath () const;

        BldgStoryProfilePath_optional&
        BldgStoryProfilePath ();

        void
        BldgStoryProfilePath (const BldgStoryProfilePath_type& x);

        void
        BldgStoryProfilePath (const BldgStoryProfilePath_optional& x);

        void
        BldgStoryProfilePath (::std::auto_ptr< BldgStoryProfilePath_type > p);

        // PerimeterZoneOutsidePath
        //
        typedef ::xml_schema::idref PerimeterZoneOutsidePath_type;
        typedef ::xsd::cxx::tree::optional< PerimeterZoneOutsidePath_type, false > PerimeterZoneOutsidePath_optional;
        typedef ::xsd::cxx::tree::traits< PerimeterZoneOutsidePath_type, char > PerimeterZoneOutsidePath_traits;

        const PerimeterZoneOutsidePath_optional&
        PerimeterZoneOutsidePath () const;

        PerimeterZoneOutsidePath_optional&
        PerimeterZoneOutsidePath ();

        void
        PerimeterZoneOutsidePath (const PerimeterZoneOutsidePath_type& x);

        void
        PerimeterZoneOutsidePath (const PerimeterZoneOutsidePath_optional& x);

        void
        PerimeterZoneOutsidePath (::std::auto_ptr< PerimeterZoneOutsidePath_type > p);

        // CoreZoneOutsidePaths
        //
        typedef ::xml_schema::idrefs CoreZoneOutsidePaths_type;
        typedef ::xsd::cxx::tree::optional< CoreZoneOutsidePaths_type > CoreZoneOutsidePaths_optional;
        typedef ::xsd::cxx::tree::traits< CoreZoneOutsidePaths_type, char > CoreZoneOutsidePaths_traits;

        const CoreZoneOutsidePaths_optional&
        CoreZoneOutsidePaths () const;

        CoreZoneOutsidePaths_optional&
        CoreZoneOutsidePaths ();

        void
        CoreZoneOutsidePaths (const CoreZoneOutsidePaths_type& x);

        void
        CoreZoneOutsidePaths (const CoreZoneOutsidePaths_optional& x);

        void
        CoreZoneOutsidePaths (::std::auto_ptr< CoreZoneOutsidePaths_type > p);

        // CoreZoneInsidePaths
        //
        typedef ::xml_schema::idrefs CoreZoneInsidePaths_type;
        typedef ::xsd::cxx::tree::optional< CoreZoneInsidePaths_type > CoreZoneInsidePaths_optional;
        typedef ::xsd::cxx::tree::traits< CoreZoneInsidePaths_type, char > CoreZoneInsidePaths_traits;

        const CoreZoneInsidePaths_optional&
        CoreZoneInsidePaths () const;

        CoreZoneInsidePaths_optional&
        CoreZoneInsidePaths ();

        void
        CoreZoneInsidePaths (const CoreZoneInsidePaths_type& x);

        void
        CoreZoneInsidePaths (const CoreZoneInsidePaths_optional& x);

        void
        CoreZoneInsidePaths (::std::auto_ptr< CoreZoneInsidePaths_type > p);

        // VoidProfilePaths
        //
        typedef ::xml_schema::idrefs VoidProfilePaths_type;
        typedef ::xsd::cxx::tree::optional< VoidProfilePaths_type > VoidProfilePaths_optional;
        typedef ::xsd::cxx::tree::traits< VoidProfilePaths_type, char > VoidProfilePaths_traits;

        const VoidProfilePaths_optional&
        VoidProfilePaths () const;

        VoidProfilePaths_optional&
        VoidProfilePaths ();

        void
        VoidProfilePaths (const VoidProfilePaths_type& x);

        void
        VoidProfilePaths (const VoidProfilePaths_optional& x);

        void
        VoidProfilePaths (::std::auto_ptr< VoidProfilePaths_type > p);

        // BldgConstructionsTemplate
        //
        typedef ::xml_schema::idref BldgConstructionsTemplate_type;
        typedef ::xsd::cxx::tree::optional< BldgConstructionsTemplate_type, false > BldgConstructionsTemplate_optional;
        typedef ::xsd::cxx::tree::traits< BldgConstructionsTemplate_type, char > BldgConstructionsTemplate_traits;

        const BldgConstructionsTemplate_optional&
        BldgConstructionsTemplate () const;

        BldgConstructionsTemplate_optional&
        BldgConstructionsTemplate ();

        void
        BldgConstructionsTemplate (const BldgConstructionsTemplate_type& x);

        void
        BldgConstructionsTemplate (const BldgConstructionsTemplate_optional& x);

        void
        BldgConstructionsTemplate (::std::auto_ptr< BldgConstructionsTemplate_type > p);

        // TargetNorthWinArrayParams
        //
        typedef ::xml_schema::idrefs TargetNorthWinArrayParams_type;
        typedef ::xsd::cxx::tree::optional< TargetNorthWinArrayParams_type > TargetNorthWinArrayParams_optional;
        typedef ::xsd::cxx::tree::traits< TargetNorthWinArrayParams_type, char > TargetNorthWinArrayParams_traits;

        const TargetNorthWinArrayParams_optional&
        TargetNorthWinArrayParams () const;

        TargetNorthWinArrayParams_optional&
        TargetNorthWinArrayParams ();

        void
        TargetNorthWinArrayParams (const TargetNorthWinArrayParams_type& x);

        void
        TargetNorthWinArrayParams (const TargetNorthWinArrayParams_optional& x);

        void
        TargetNorthWinArrayParams (::std::auto_ptr< TargetNorthWinArrayParams_type > p);

        // TargetSouthWinArrayParams
        //
        typedef ::xml_schema::idrefs TargetSouthWinArrayParams_type;
        typedef ::xsd::cxx::tree::optional< TargetSouthWinArrayParams_type > TargetSouthWinArrayParams_optional;
        typedef ::xsd::cxx::tree::traits< TargetSouthWinArrayParams_type, char > TargetSouthWinArrayParams_traits;

        const TargetSouthWinArrayParams_optional&
        TargetSouthWinArrayParams () const;

        TargetSouthWinArrayParams_optional&
        TargetSouthWinArrayParams ();

        void
        TargetSouthWinArrayParams (const TargetSouthWinArrayParams_type& x);

        void
        TargetSouthWinArrayParams (const TargetSouthWinArrayParams_optional& x);

        void
        TargetSouthWinArrayParams (::std::auto_ptr< TargetSouthWinArrayParams_type > p);

        // TargetEastWinArrayParams
        //
        typedef ::xml_schema::idrefs TargetEastWinArrayParams_type;
        typedef ::xsd::cxx::tree::optional< TargetEastWinArrayParams_type > TargetEastWinArrayParams_optional;
        typedef ::xsd::cxx::tree::traits< TargetEastWinArrayParams_type, char > TargetEastWinArrayParams_traits;

        const TargetEastWinArrayParams_optional&
        TargetEastWinArrayParams () const;

        TargetEastWinArrayParams_optional&
        TargetEastWinArrayParams ();

        void
        TargetEastWinArrayParams (const TargetEastWinArrayParams_type& x);

        void
        TargetEastWinArrayParams (const TargetEastWinArrayParams_optional& x);

        void
        TargetEastWinArrayParams (::std::auto_ptr< TargetEastWinArrayParams_type > p);

        // TargetWestWinArrayParams
        //
        typedef ::xml_schema::idrefs TargetWestWinArrayParams_type;
        typedef ::xsd::cxx::tree::optional< TargetWestWinArrayParams_type > TargetWestWinArrayParams_optional;
        typedef ::xsd::cxx::tree::traits< TargetWestWinArrayParams_type, char > TargetWestWinArrayParams_traits;

        const TargetWestWinArrayParams_optional&
        TargetWestWinArrayParams () const;

        TargetWestWinArrayParams_optional&
        TargetWestWinArrayParams ();

        void
        TargetWestWinArrayParams (const TargetWestWinArrayParams_type& x);

        void
        TargetWestWinArrayParams (const TargetWestWinArrayParams_optional& x);

        void
        TargetWestWinArrayParams (::std::auto_ptr< TargetWestWinArrayParams_type > p);

        // DefaultLibraryType
        //
        typedef ::xml_schema::string DefaultLibraryType_type;
        typedef ::xsd::cxx::tree::optional< DefaultLibraryType_type, false > DefaultLibraryType_optional;
        typedef ::xsd::cxx::tree::traits< DefaultLibraryType_type, char > DefaultLibraryType_traits;

        const DefaultLibraryType_optional&
        DefaultLibraryType () const;

        DefaultLibraryType_optional&
        DefaultLibraryType ();

        void
        DefaultLibraryType (const DefaultLibraryType_type& x);

        void
        DefaultLibraryType (const DefaultLibraryType_optional& x);

        void
        DefaultLibraryType (::std::auto_ptr< DefaultLibraryType_type > p);

        // DefaultLibEntryRef
        //
        typedef ::xml_schema::idref DefaultLibEntryRef_type;
        typedef ::xsd::cxx::tree::optional< DefaultLibEntryRef_type, false > DefaultLibEntryRef_optional;
        typedef ::xsd::cxx::tree::traits< DefaultLibEntryRef_type, char > DefaultLibEntryRef_traits;

        const DefaultLibEntryRef_optional&
        DefaultLibEntryRef () const;

        DefaultLibEntryRef_optional&
        DefaultLibEntryRef ();

        void
        DefaultLibEntryRef (const DefaultLibEntryRef_type& x);

        void
        DefaultLibEntryRef (const DefaultLibEntryRef_optional& x);

        void
        DefaultLibEntryRef (::std::auto_ptr< DefaultLibEntryRef_type > p);

        // DefaultOhangEntryRef
        //
        typedef ::xml_schema::idref DefaultOhangEntryRef_type;
        typedef ::xsd::cxx::tree::optional< DefaultOhangEntryRef_type, false > DefaultOhangEntryRef_optional;
        typedef ::xsd::cxx::tree::traits< DefaultOhangEntryRef_type, char > DefaultOhangEntryRef_traits;

        const DefaultOhangEntryRef_optional&
        DefaultOhangEntryRef () const;

        DefaultOhangEntryRef_optional&
        DefaultOhangEntryRef ();

        void
        DefaultOhangEntryRef (const DefaultOhangEntryRef_type& x);

        void
        DefaultOhangEntryRef (const DefaultOhangEntryRef_optional& x);

        void
        DefaultOhangEntryRef (::std::auto_ptr< DefaultOhangEntryRef_type > p);

        // DefaultFinEntryRef
        //
        typedef ::xml_schema::idref DefaultFinEntryRef_type;
        typedef ::xsd::cxx::tree::optional< DefaultFinEntryRef_type, false > DefaultFinEntryRef_optional;
        typedef ::xsd::cxx::tree::traits< DefaultFinEntryRef_type, char > DefaultFinEntryRef_traits;

        const DefaultFinEntryRef_optional&
        DefaultFinEntryRef () const;

        DefaultFinEntryRef_optional&
        DefaultFinEntryRef ();

        void
        DefaultFinEntryRef (const DefaultFinEntryRef_type& x);

        void
        DefaultFinEntryRef (const DefaultFinEntryRef_optional& x);

        void
        DefaultFinEntryRef (::std::auto_ptr< DefaultFinEntryRef_type > p);

        // InsertedDWG
        //
        typedef ::xml_schema::idref InsertedDWG_type;
        typedef ::xsd::cxx::tree::optional< InsertedDWG_type, false > InsertedDWG_optional;
        typedef ::xsd::cxx::tree::traits< InsertedDWG_type, char > InsertedDWG_traits;

        const InsertedDWG_optional&
        InsertedDWG () const;

        InsertedDWG_optional&
        InsertedDWG ();

        void
        InsertedDWG (const InsertedDWG_type& x);

        void
        InsertedDWG (const InsertedDWG_optional& x);

        void
        InsertedDWG (::std::auto_ptr< InsertedDWG_type > p);

        // Constructors.
        //
        SimBldgStoryParams ();

        SimBldgStoryParams (const RefId_type&);

        SimBldgStoryParams (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f = 0,
                            ::xml_schema::container* c = 0);

        SimBldgStoryParams (const SimBldgStoryParams& x,
                            ::xml_schema::flags f = 0,
                            ::xml_schema::container* c = 0);

        virtual SimBldgStoryParams*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimBldgStoryParams&
        operator= (const SimBldgStoryParams& x);

        virtual 
        ~SimBldgStoryParams ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        BldgStoryName_optional BldgStoryName_;
        BldgStoryShape_optional BldgStoryShape_;
        X1Dim_optional X1Dim_;
        X2Dim_optional X2Dim_;
        X3Dim_optional X3Dim_;
        Y1Dim_optional Y1Dim_;
        Y2Dim_optional Y2Dim_;
        Y3Dim_optional Y3Dim_;
        FloorToFloorHeight_optional FloorToFloorHeight_;
        CeilingBottomElevation_optional CeilingBottomElevation_;
        FinishFloorTopElevation_optional FinishFloorTopElevation_;
        SpaceConfigOccupied_optional SpaceConfigOccupied_;
        PlenumConfiguration_optional PlenumConfiguration_;
        SpaceConfigAboveCeiling_optional SpaceConfigAboveCeiling_;
        SpaceConfigBelowFloor_optional SpaceConfigBelowFloor_;
        PerimeterZoneDepth_optional PerimeterZoneDepth_;
        WallProfilePathType_optional WallProfilePathType_;
        BldgStoryProfilePath_optional BldgStoryProfilePath_;
        PerimeterZoneOutsidePath_optional PerimeterZoneOutsidePath_;
        CoreZoneOutsidePaths_optional CoreZoneOutsidePaths_;
        CoreZoneInsidePaths_optional CoreZoneInsidePaths_;
        VoidProfilePaths_optional VoidProfilePaths_;
        BldgConstructionsTemplate_optional BldgConstructionsTemplate_;
        TargetNorthWinArrayParams_optional TargetNorthWinArrayParams_;
        TargetSouthWinArrayParams_optional TargetSouthWinArrayParams_;
        TargetEastWinArrayParams_optional TargetEastWinArrayParams_;
        TargetWestWinArrayParams_optional TargetWestWinArrayParams_;
        DefaultLibraryType_optional DefaultLibraryType_;
        DefaultLibEntryRef_optional DefaultLibEntryRef_;
        DefaultOhangEntryRef_optional DefaultOhangEntryRef_;
        DefaultFinEntryRef_optional DefaultFinEntryRef_;
        InsertedDWG_optional InsertedDWG_;
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
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_BLDG_STORY_PARAMS_HXX
