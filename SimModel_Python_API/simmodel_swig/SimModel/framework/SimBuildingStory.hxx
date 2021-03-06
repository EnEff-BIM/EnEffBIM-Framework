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

#ifndef SIM_BUILDING_STORY_HXX
#define SIM_BUILDING_STORY_HXX

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
      class SimBuildingStory;
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
      class SimBuildingStory: public ::schema::simxml::SimModelCore::SimSpatialStructureElement
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

        // BuildingStoryElevation
        //
        typedef ::xml_schema::double_ BuildingStoryElevation_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryElevation_type, true > BuildingStoryElevation_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingStoryElevation_traits;

        const BuildingStoryElevation_optional&
        BuildingStoryElevation () const;

        BuildingStoryElevation_optional&
        BuildingStoryElevation ();

        void
        BuildingStoryElevation (const BuildingStoryElevation_type& x);

        void
        BuildingStoryElevation (const BuildingStoryElevation_optional& x);

        // BuildingStoryIsEntranceLevel
        //
        typedef ::xml_schema::boolean BuildingStoryIsEntranceLevel_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryIsEntranceLevel_type > BuildingStoryIsEntranceLevel_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryIsEntranceLevel_type, char > BuildingStoryIsEntranceLevel_traits;

        const BuildingStoryIsEntranceLevel_optional&
        BuildingStoryIsEntranceLevel () const;

        BuildingStoryIsEntranceLevel_optional&
        BuildingStoryIsEntranceLevel ();

        void
        BuildingStoryIsEntranceLevel (const BuildingStoryIsEntranceLevel_type& x);

        void
        BuildingStoryIsEntranceLevel (const BuildingStoryIsEntranceLevel_optional& x);

        // BuildingStoryIsAboveGrade
        //
        typedef ::schema::simxml::SimModelCore::logical BuildingStoryIsAboveGrade_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryIsAboveGrade_type > BuildingStoryIsAboveGrade_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryIsAboveGrade_type, char > BuildingStoryIsAboveGrade_traits;

        const BuildingStoryIsAboveGrade_optional&
        BuildingStoryIsAboveGrade () const;

        BuildingStoryIsAboveGrade_optional&
        BuildingStoryIsAboveGrade ();

        void
        BuildingStoryIsAboveGrade (const BuildingStoryIsAboveGrade_type& x);

        void
        BuildingStoryIsAboveGrade (const BuildingStoryIsAboveGrade_optional& x);

        void
        BuildingStoryIsAboveGrade (::std::auto_ptr< BuildingStoryIsAboveGrade_type > p);

        // BuildingStoryGrossFloorAreaPlanned
        //
        typedef ::xml_schema::double_ BuildingStoryGrossFloorAreaPlanned_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryGrossFloorAreaPlanned_type, true > BuildingStoryGrossFloorAreaPlanned_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryGrossFloorAreaPlanned_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingStoryGrossFloorAreaPlanned_traits;

        const BuildingStoryGrossFloorAreaPlanned_optional&
        BuildingStoryGrossFloorAreaPlanned () const;

        BuildingStoryGrossFloorAreaPlanned_optional&
        BuildingStoryGrossFloorAreaPlanned ();

        void
        BuildingStoryGrossFloorAreaPlanned (const BuildingStoryGrossFloorAreaPlanned_type& x);

        void
        BuildingStoryGrossFloorAreaPlanned (const BuildingStoryGrossFloorAreaPlanned_optional& x);

        // BuildingStoryHeight
        //
        typedef ::xml_schema::double_ BuildingStoryHeight_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryHeight_type, true > BuildingStoryHeight_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingStoryHeight_traits;

        const BuildingStoryHeight_optional&
        BuildingStoryHeight () const;

        BuildingStoryHeight_optional&
        BuildingStoryHeight ();

        void
        BuildingStoryHeight (const BuildingStoryHeight_type& x);

        void
        BuildingStoryHeight (const BuildingStoryHeight_optional& x);

        // BuildingStoryPerimeter
        //
        typedef ::xml_schema::double_ BuildingStoryPerimeter_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryPerimeter_type, true > BuildingStoryPerimeter_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryPerimeter_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingStoryPerimeter_traits;

        const BuildingStoryPerimeter_optional&
        BuildingStoryPerimeter () const;

        BuildingStoryPerimeter_optional&
        BuildingStoryPerimeter ();

        void
        BuildingStoryPerimeter (const BuildingStoryPerimeter_type& x);

        void
        BuildingStoryPerimeter (const BuildingStoryPerimeter_optional& x);

        // BuildingStoryGrossFloorArea
        //
        typedef ::xml_schema::double_ BuildingStoryGrossFloorArea_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryGrossFloorArea_type, true > BuildingStoryGrossFloorArea_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryGrossFloorArea_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingStoryGrossFloorArea_traits;

        const BuildingStoryGrossFloorArea_optional&
        BuildingStoryGrossFloorArea () const;

        BuildingStoryGrossFloorArea_optional&
        BuildingStoryGrossFloorArea ();

        void
        BuildingStoryGrossFloorArea (const BuildingStoryGrossFloorArea_type& x);

        void
        BuildingStoryGrossFloorArea (const BuildingStoryGrossFloorArea_optional& x);

        // BuildingStoryGrossVolume
        //
        typedef ::xml_schema::double_ BuildingStoryGrossVolume_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryGrossVolume_type, true > BuildingStoryGrossVolume_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryGrossVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingStoryGrossVolume_traits;

        const BuildingStoryGrossVolume_optional&
        BuildingStoryGrossVolume () const;

        BuildingStoryGrossVolume_optional&
        BuildingStoryGrossVolume ();

        void
        BuildingStoryGrossVolume (const BuildingStoryGrossVolume_type& x);

        void
        BuildingStoryGrossVolume (const BuildingStoryGrossVolume_optional& x);

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

        // BldgStoryInSpatialContainer
        //
        typedef ::xml_schema::idref BldgStoryInSpatialContainer_type;
        typedef ::xsd::cxx::tree::optional< BldgStoryInSpatialContainer_type, false > BldgStoryInSpatialContainer_optional;
        typedef ::xsd::cxx::tree::traits< BldgStoryInSpatialContainer_type, char > BldgStoryInSpatialContainer_traits;

        const BldgStoryInSpatialContainer_optional&
        BldgStoryInSpatialContainer () const;

        BldgStoryInSpatialContainer_optional&
        BldgStoryInSpatialContainer ();

        void
        BldgStoryInSpatialContainer (const BldgStoryInSpatialContainer_type& x);

        void
        BldgStoryInSpatialContainer (const BldgStoryInSpatialContainer_optional& x);

        void
        BldgStoryInSpatialContainer (::std::auto_ptr< BldgStoryInSpatialContainer_type > p);

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

        // BuildingStoryNumber
        //
        typedef ::xml_schema::int_ BuildingStoryNumber_type;
        typedef ::xsd::cxx::tree::optional< BuildingStoryNumber_type, true > BuildingStoryNumber_optional;
        typedef ::xsd::cxx::tree::traits< BuildingStoryNumber_type, char > BuildingStoryNumber_traits;

        const BuildingStoryNumber_optional&
        BuildingStoryNumber () const;

        BuildingStoryNumber_optional&
        BuildingStoryNumber ();

        void
        BuildingStoryNumber (const BuildingStoryNumber_type& x);

        void
        BuildingStoryNumber (const BuildingStoryNumber_optional& x);

        // IsTopFloor
        //
        typedef ::xml_schema::boolean IsTopFloor_type;
        typedef ::xsd::cxx::tree::optional< IsTopFloor_type > IsTopFloor_optional;
        typedef ::xsd::cxx::tree::traits< IsTopFloor_type, char > IsTopFloor_traits;

        const IsTopFloor_optional&
        IsTopFloor () const;

        IsTopFloor_optional&
        IsTopFloor ();

        void
        IsTopFloor (const IsTopFloor_type& x);

        void
        IsTopFloor (const IsTopFloor_optional& x);

        // IsBottomFloor
        //
        typedef ::xml_schema::boolean IsBottomFloor_type;
        typedef ::xsd::cxx::tree::optional< IsBottomFloor_type > IsBottomFloor_optional;
        typedef ::xsd::cxx::tree::traits< IsBottomFloor_type, char > IsBottomFloor_traits;

        const IsBottomFloor_optional&
        IsBottomFloor () const;

        IsBottomFloor_optional&
        IsBottomFloor ();

        void
        IsBottomFloor (const IsBottomFloor_type& x);

        void
        IsBottomFloor (const IsBottomFloor_optional& x);

        // Constructors.
        //
        SimBuildingStory ();

        SimBuildingStory (const RefId_type&);

        SimBuildingStory (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f = 0,
                          ::xml_schema::container* c = 0);

        SimBuildingStory (const SimBuildingStory& x,
                          ::xml_schema::flags f = 0,
                          ::xml_schema::container* c = 0);

        virtual SimBuildingStory*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimBuildingStory&
        operator= (const SimBuildingStory& x);

        virtual 
        ~SimBuildingStory ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Name_optional Name_;
        BuildingStoryElevation_optional BuildingStoryElevation_;
        BuildingStoryIsEntranceLevel_optional BuildingStoryIsEntranceLevel_;
        BuildingStoryIsAboveGrade_optional BuildingStoryIsAboveGrade_;
        BuildingStoryGrossFloorAreaPlanned_optional BuildingStoryGrossFloorAreaPlanned_;
        BuildingStoryHeight_optional BuildingStoryHeight_;
        BuildingStoryPerimeter_optional BuildingStoryPerimeter_;
        BuildingStoryGrossFloorArea_optional BuildingStoryGrossFloorArea_;
        BuildingStoryGrossVolume_optional BuildingStoryGrossVolume_;
        ClassRef_ConstEntByFunction_optional ClassRef_ConstEntByFunction_;
        BldgStoryInSpatialContainer_optional BldgStoryInSpatialContainer_;
        Representation_optional Representation_;
        BuildingStoryNumber_optional BuildingStoryNumber_;
        IsTopFloor_optional IsTopFloor_;
        IsBottomFloor_optional IsBottomFloor_;
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

#endif // SIM_BUILDING_STORY_HXX
