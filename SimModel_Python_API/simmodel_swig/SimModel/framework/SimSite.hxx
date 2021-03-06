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

#ifndef SIM_SITE_HXX
#define SIM_SITE_HXX

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
      class SimSite;
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
      class integerList;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimSite: public ::schema::simxml::SimModelCore::SimSpatialStructureElement
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

        // Longitude
        //
        typedef ::schema::simxml::SimModelCore::integerList Longitude_type;
        typedef ::xsd::cxx::tree::optional< Longitude_type > Longitude_optional;
        typedef ::xsd::cxx::tree::traits< Longitude_type, char > Longitude_traits;

        const Longitude_optional&
        Longitude () const;

        Longitude_optional&
        Longitude ();

        void
        Longitude (const Longitude_type& x);

        void
        Longitude (const Longitude_optional& x);

        void
        Longitude (::std::auto_ptr< Longitude_type > p);

        // Latitude
        //
        typedef ::schema::simxml::SimModelCore::integerList Latitude_type;
        typedef ::xsd::cxx::tree::optional< Latitude_type > Latitude_optional;
        typedef ::xsd::cxx::tree::traits< Latitude_type, char > Latitude_traits;

        const Latitude_optional&
        Latitude () const;

        Latitude_optional&
        Latitude ();

        void
        Latitude (const Latitude_type& x);

        void
        Latitude (const Latitude_optional& x);

        void
        Latitude (::std::auto_ptr< Latitude_type > p);

        // SiteReferenceElevation
        //
        typedef ::xml_schema::double_ SiteReferenceElevation_type;
        typedef ::xsd::cxx::tree::optional< SiteReferenceElevation_type, true > SiteReferenceElevation_optional;
        typedef ::xsd::cxx::tree::traits< SiteReferenceElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > SiteReferenceElevation_traits;

        const SiteReferenceElevation_optional&
        SiteReferenceElevation () const;

        SiteReferenceElevation_optional&
        SiteReferenceElevation ();

        void
        SiteReferenceElevation (const SiteReferenceElevation_type& x);

        void
        SiteReferenceElevation (const SiteReferenceElevation_optional& x);

        // BuildableArea
        //
        typedef ::xml_schema::double_ BuildableArea_type;
        typedef ::xsd::cxx::tree::optional< BuildableArea_type, true > BuildableArea_optional;
        typedef ::xsd::cxx::tree::traits< BuildableArea_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildableArea_traits;

        const BuildableArea_optional&
        BuildableArea () const;

        BuildableArea_optional&
        BuildableArea ();

        void
        BuildableArea (const BuildableArea_type& x);

        void
        BuildableArea (const BuildableArea_optional& x);

        // BuildingHeightLimit
        //
        typedef ::xml_schema::double_ BuildingHeightLimit_type;
        typedef ::xsd::cxx::tree::optional< BuildingHeightLimit_type, true > BuildingHeightLimit_optional;
        typedef ::xsd::cxx::tree::traits< BuildingHeightLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > BuildingHeightLimit_traits;

        const BuildingHeightLimit_optional&
        BuildingHeightLimit () const;

        BuildingHeightLimit_optional&
        BuildingHeightLimit ();

        void
        BuildingHeightLimit (const BuildingHeightLimit_type& x);

        void
        BuildingHeightLimit (const BuildingHeightLimit_optional& x);

        // SitePerimeter
        //
        typedef ::xml_schema::double_ SitePerimeter_type;
        typedef ::xsd::cxx::tree::optional< SitePerimeter_type, true > SitePerimeter_optional;
        typedef ::xsd::cxx::tree::traits< SitePerimeter_type, char, ::xsd::cxx::tree::schema_type::double_ > SitePerimeter_traits;

        const SitePerimeter_optional&
        SitePerimeter () const;

        SitePerimeter_optional&
        SitePerimeter ();

        void
        SitePerimeter (const SitePerimeter_type& x);

        void
        SitePerimeter (const SitePerimeter_optional& x);

        // SiteGrossLandArea
        //
        typedef ::xml_schema::double_ SiteGrossLandArea_type;
        typedef ::xsd::cxx::tree::optional< SiteGrossLandArea_type, true > SiteGrossLandArea_optional;
        typedef ::xsd::cxx::tree::traits< SiteGrossLandArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SiteGrossLandArea_traits;

        const SiteGrossLandArea_optional&
        SiteGrossLandArea () const;

        SiteGrossLandArea_optional&
        SiteGrossLandArea ();

        void
        SiteGrossLandArea (const SiteGrossLandArea_type& x);

        void
        SiteGrossLandArea (const SiteGrossLandArea_optional& x);

        // SiteExcavationCutVolume
        //
        typedef ::xml_schema::double_ SiteExcavationCutVolume_type;
        typedef ::xsd::cxx::tree::optional< SiteExcavationCutVolume_type, true > SiteExcavationCutVolume_optional;
        typedef ::xsd::cxx::tree::traits< SiteExcavationCutVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > SiteExcavationCutVolume_traits;

        const SiteExcavationCutVolume_optional&
        SiteExcavationCutVolume () const;

        SiteExcavationCutVolume_optional&
        SiteExcavationCutVolume ();

        void
        SiteExcavationCutVolume (const SiteExcavationCutVolume_type& x);

        void
        SiteExcavationCutVolume (const SiteExcavationCutVolume_optional& x);

        // SiteExcavationBackfillVolume
        //
        typedef ::xml_schema::double_ SiteExcavationBackfillVolume_type;
        typedef ::xsd::cxx::tree::optional< SiteExcavationBackfillVolume_type, true > SiteExcavationBackfillVolume_optional;
        typedef ::xsd::cxx::tree::traits< SiteExcavationBackfillVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > SiteExcavationBackfillVolume_traits;

        const SiteExcavationBackfillVolume_optional&
        SiteExcavationBackfillVolume () const;

        SiteExcavationBackfillVolume_optional&
        SiteExcavationBackfillVolume ();

        void
        SiteExcavationBackfillVolume (const SiteExcavationBackfillVolume_type& x);

        void
        SiteExcavationBackfillVolume (const SiteExcavationBackfillVolume_optional& x);

        // GeometricRepresentations
        //
        typedef ::xml_schema::idrefs GeometricRepresentations_type;
        typedef ::xsd::cxx::tree::optional< GeometricRepresentations_type > GeometricRepresentations_optional;
        typedef ::xsd::cxx::tree::traits< GeometricRepresentations_type, char > GeometricRepresentations_traits;

        const GeometricRepresentations_optional&
        GeometricRepresentations () const;

        GeometricRepresentations_optional&
        GeometricRepresentations ();

        void
        GeometricRepresentations (const GeometricRepresentations_type& x);

        void
        GeometricRepresentations (const GeometricRepresentations_optional& x);

        void
        GeometricRepresentations (::std::auto_ptr< GeometricRepresentations_type > p);

        // SiteInSpatialContainer
        //
        typedef ::xml_schema::idref SiteInSpatialContainer_type;
        typedef ::xsd::cxx::tree::optional< SiteInSpatialContainer_type, false > SiteInSpatialContainer_optional;
        typedef ::xsd::cxx::tree::traits< SiteInSpatialContainer_type, char > SiteInSpatialContainer_traits;

        const SiteInSpatialContainer_optional&
        SiteInSpatialContainer () const;

        SiteInSpatialContainer_optional&
        SiteInSpatialContainer ();

        void
        SiteInSpatialContainer (const SiteInSpatialContainer_type& x);

        void
        SiteInSpatialContainer (const SiteInSpatialContainer_optional& x);

        void
        SiteInSpatialContainer (::std::auto_ptr< SiteInSpatialContainer_type > p);

        // LandTitleNumber
        //
        typedef ::xml_schema::string LandTitleNumber_type;
        typedef ::xsd::cxx::tree::optional< LandTitleNumber_type, false > LandTitleNumber_optional;
        typedef ::xsd::cxx::tree::traits< LandTitleNumber_type, char > LandTitleNumber_traits;

        const LandTitleNumber_optional&
        LandTitleNumber () const;

        LandTitleNumber_optional&
        LandTitleNumber ();

        void
        LandTitleNumber (const LandTitleNumber_type& x);

        void
        LandTitleNumber (const LandTitleNumber_optional& x);

        void
        LandTitleNumber (::std::auto_ptr< LandTitleNumber_type > p);

        // SiteAddress
        //
        typedef ::xml_schema::idref SiteAddress_type;
        typedef ::xsd::cxx::tree::optional< SiteAddress_type, false > SiteAddress_optional;
        typedef ::xsd::cxx::tree::traits< SiteAddress_type, char > SiteAddress_traits;

        const SiteAddress_optional&
        SiteAddress () const;

        SiteAddress_optional&
        SiteAddress ();

        void
        SiteAddress (const SiteAddress_type& x);

        void
        SiteAddress (const SiteAddress_optional& x);

        void
        SiteAddress (::std::auto_ptr< SiteAddress_type > p);

        // WeatherLocationRegion
        //
        typedef ::xml_schema::string WeatherLocationRegion_type;
        typedef ::xsd::cxx::tree::optional< WeatherLocationRegion_type, false > WeatherLocationRegion_optional;
        typedef ::xsd::cxx::tree::traits< WeatherLocationRegion_type, char > WeatherLocationRegion_traits;

        const WeatherLocationRegion_optional&
        WeatherLocationRegion () const;

        WeatherLocationRegion_optional&
        WeatherLocationRegion ();

        void
        WeatherLocationRegion (const WeatherLocationRegion_type& x);

        void
        WeatherLocationRegion (const WeatherLocationRegion_optional& x);

        void
        WeatherLocationRegion (::std::auto_ptr< WeatherLocationRegion_type > p);

        // WeatherLocationCity
        //
        typedef ::xml_schema::string WeatherLocationCity_type;
        typedef ::xsd::cxx::tree::optional< WeatherLocationCity_type, false > WeatherLocationCity_optional;
        typedef ::xsd::cxx::tree::traits< WeatherLocationCity_type, char > WeatherLocationCity_traits;

        const WeatherLocationCity_optional&
        WeatherLocationCity () const;

        WeatherLocationCity_optional&
        WeatherLocationCity ();

        void
        WeatherLocationCity (const WeatherLocationCity_type& x);

        void
        WeatherLocationCity (const WeatherLocationCity_optional& x);

        void
        WeatherLocationCity (::std::auto_ptr< WeatherLocationCity_type > p);

        // WeatherLocationID
        //
        typedef ::xml_schema::string WeatherLocationID_type;
        typedef ::xsd::cxx::tree::optional< WeatherLocationID_type, false > WeatherLocationID_optional;
        typedef ::xsd::cxx::tree::traits< WeatherLocationID_type, char > WeatherLocationID_traits;

        const WeatherLocationID_optional&
        WeatherLocationID () const;

        WeatherLocationID_optional&
        WeatherLocationID ();

        void
        WeatherLocationID (const WeatherLocationID_type& x);

        void
        WeatherLocationID (const WeatherLocationID_optional& x);

        void
        WeatherLocationID (::std::auto_ptr< WeatherLocationID_type > p);

        // WeatherLocationIDType
        //
        typedef ::xml_schema::string WeatherLocationIDType_type;
        typedef ::xsd::cxx::tree::optional< WeatherLocationIDType_type, false > WeatherLocationIDType_optional;
        typedef ::xsd::cxx::tree::traits< WeatherLocationIDType_type, char > WeatherLocationIDType_traits;

        const WeatherLocationIDType_optional&
        WeatherLocationIDType () const;

        WeatherLocationIDType_optional&
        WeatherLocationIDType ();

        void
        WeatherLocationIDType (const WeatherLocationIDType_type& x);

        void
        WeatherLocationIDType (const WeatherLocationIDType_optional& x);

        void
        WeatherLocationIDType (::std::auto_ptr< WeatherLocationIDType_type > p);

        // DesignDays
        //
        typedef ::xml_schema::idrefs DesignDays_type;
        typedef ::xsd::cxx::tree::optional< DesignDays_type > DesignDays_optional;
        typedef ::xsd::cxx::tree::traits< DesignDays_type, char > DesignDays_traits;

        const DesignDays_optional&
        DesignDays () const;

        DesignDays_optional&
        DesignDays ();

        void
        DesignDays (const DesignDays_type& x);

        void
        DesignDays (const DesignDays_optional& x);

        void
        DesignDays (::std::auto_ptr< DesignDays_type > p);

        // TimeZone
        //
        typedef ::xml_schema::double_ TimeZone_type;
        typedef ::xsd::cxx::tree::optional< TimeZone_type, true > TimeZone_optional;
        typedef ::xsd::cxx::tree::traits< TimeZone_type, char, ::xsd::cxx::tree::schema_type::double_ > TimeZone_traits;

        const TimeZone_optional&
        TimeZone () const;

        TimeZone_optional&
        TimeZone ();

        void
        TimeZone (const TimeZone_type& x);

        void
        TimeZone (const TimeZone_optional& x);

        // LocationsTemplate
        //
        typedef ::xml_schema::idref LocationsTemplate_type;
        typedef ::xsd::cxx::tree::optional< LocationsTemplate_type, false > LocationsTemplate_optional;
        typedef ::xsd::cxx::tree::traits< LocationsTemplate_type, char > LocationsTemplate_traits;

        const LocationsTemplate_optional&
        LocationsTemplate () const;

        LocationsTemplate_optional&
        LocationsTemplate ();

        void
        LocationsTemplate (const LocationsTemplate_type& x);

        void
        LocationsTemplate (const LocationsTemplate_optional& x);

        void
        LocationsTemplate (::std::auto_ptr< LocationsTemplate_type > p);

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
        SimSite ();

        SimSite (const RefId_type&);

        SimSite (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

        SimSite (const SimSite& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

        virtual SimSite*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSite&
        operator= (const SimSite& x);

        virtual 
        ~SimSite ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Name_optional Name_;
        Longitude_optional Longitude_;
        Latitude_optional Latitude_;
        SiteReferenceElevation_optional SiteReferenceElevation_;
        BuildableArea_optional BuildableArea_;
        BuildingHeightLimit_optional BuildingHeightLimit_;
        SitePerimeter_optional SitePerimeter_;
        SiteGrossLandArea_optional SiteGrossLandArea_;
        SiteExcavationCutVolume_optional SiteExcavationCutVolume_;
        SiteExcavationBackfillVolume_optional SiteExcavationBackfillVolume_;
        GeometricRepresentations_optional GeometricRepresentations_;
        SiteInSpatialContainer_optional SiteInSpatialContainer_;
        LandTitleNumber_optional LandTitleNumber_;
        SiteAddress_optional SiteAddress_;
        WeatherLocationRegion_optional WeatherLocationRegion_;
        WeatherLocationCity_optional WeatherLocationCity_;
        WeatherLocationID_optional WeatherLocationID_;
        WeatherLocationIDType_optional WeatherLocationIDType_;
        DesignDays_optional DesignDays_;
        TimeZone_optional TimeZone_;
        LocationsTemplate_optional LocationsTemplate_;
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

#endif // SIM_SITE_HXX
