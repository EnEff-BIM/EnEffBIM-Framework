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

#ifndef SIM_TEMPLATE_ZONE_CONDITIONS_HXX
#define SIM_TEMPLATE_ZONE_CONDITIONS_HXX

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
      class SimTemplateZoneConditions;
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

#include "simtemplate.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimTemplateZoneConditions: public ::schema::simxml::SimModelCore::SimTemplate
      {
        public:
        // TemplateInfiltration
        //
        typedef ::xml_schema::idref TemplateInfiltration_type;
        typedef ::xsd::cxx::tree::optional< TemplateInfiltration_type, false > TemplateInfiltration_optional;
        typedef ::xsd::cxx::tree::traits< TemplateInfiltration_type, char > TemplateInfiltration_traits;

        const TemplateInfiltration_optional&
        TemplateInfiltration () const;

        TemplateInfiltration_optional&
        TemplateInfiltration ();

        void
        TemplateInfiltration (const TemplateInfiltration_type& x);

        void
        TemplateInfiltration (const TemplateInfiltration_optional& x);

        void
        TemplateInfiltration (::std::auto_ptr< TemplateInfiltration_type > p);

        // PeakMinimumVentilationMethod
        //
        typedef ::xml_schema::string PeakMinimumVentilationMethod_type;
        typedef ::xsd::cxx::tree::optional< PeakMinimumVentilationMethod_type, false > PeakMinimumVentilationMethod_optional;
        typedef ::xsd::cxx::tree::traits< PeakMinimumVentilationMethod_type, char > PeakMinimumVentilationMethod_traits;

        const PeakMinimumVentilationMethod_optional&
        PeakMinimumVentilationMethod () const;

        PeakMinimumVentilationMethod_optional&
        PeakMinimumVentilationMethod ();

        void
        PeakMinimumVentilationMethod (const PeakMinimumVentilationMethod_type& x);

        void
        PeakMinimumVentilationMethod (const PeakMinimumVentilationMethod_optional& x);

        void
        PeakMinimumVentilationMethod (::std::auto_ptr< PeakMinimumVentilationMethod_type > p);

        // TemplateSimParamsZoneSizing
        //
        typedef ::xml_schema::idref TemplateSimParamsZoneSizing_type;
        typedef ::xsd::cxx::tree::optional< TemplateSimParamsZoneSizing_type, false > TemplateSimParamsZoneSizing_optional;
        typedef ::xsd::cxx::tree::traits< TemplateSimParamsZoneSizing_type, char > TemplateSimParamsZoneSizing_traits;

        const TemplateSimParamsZoneSizing_optional&
        TemplateSimParamsZoneSizing () const;

        TemplateSimParamsZoneSizing_optional&
        TemplateSimParamsZoneSizing ();

        void
        TemplateSimParamsZoneSizing (const TemplateSimParamsZoneSizing_type& x);

        void
        TemplateSimParamsZoneSizing (const TemplateSimParamsZoneSizing_optional& x);

        void
        TemplateSimParamsZoneSizing (::std::auto_ptr< TemplateSimParamsZoneSizing_type > p);

        // ZoneThermostatType
        //
        typedef ::xml_schema::string ZoneThermostatType_type;
        typedef ::xsd::cxx::tree::optional< ZoneThermostatType_type, false > ZoneThermostatType_optional;
        typedef ::xsd::cxx::tree::traits< ZoneThermostatType_type, char > ZoneThermostatType_traits;

        const ZoneThermostatType_optional&
        ZoneThermostatType () const;

        ZoneThermostatType_optional&
        ZoneThermostatType ();

        void
        ZoneThermostatType (const ZoneThermostatType_type& x);

        void
        ZoneThermostatType (const ZoneThermostatType_optional& x);

        void
        ZoneThermostatType (::std::auto_ptr< ZoneThermostatType_type > p);

        // TemplateZoneTempController
        //
        typedef ::xml_schema::idref TemplateZoneTempController_type;
        typedef ::xsd::cxx::tree::optional< TemplateZoneTempController_type, false > TemplateZoneTempController_optional;
        typedef ::xsd::cxx::tree::traits< TemplateZoneTempController_type, char > TemplateZoneTempController_traits;

        const TemplateZoneTempController_optional&
        TemplateZoneTempController () const;

        TemplateZoneTempController_optional&
        TemplateZoneTempController ();

        void
        TemplateZoneTempController (const TemplateZoneTempController_type& x);

        void
        TemplateZoneTempController (const TemplateZoneTempController_optional& x);

        void
        TemplateZoneTempController (::std::auto_ptr< TemplateZoneTempController_type > p);

        // ZoneHasHumidistat
        //
        typedef ::xml_schema::boolean ZoneHasHumidistat_type;
        typedef ::xsd::cxx::tree::optional< ZoneHasHumidistat_type > ZoneHasHumidistat_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHasHumidistat_type, char > ZoneHasHumidistat_traits;

        const ZoneHasHumidistat_optional&
        ZoneHasHumidistat () const;

        ZoneHasHumidistat_optional&
        ZoneHasHumidistat ();

        void
        ZoneHasHumidistat (const ZoneHasHumidistat_type& x);

        void
        ZoneHasHumidistat (const ZoneHasHumidistat_optional& x);

        // TemplateZoneHumidistat
        //
        typedef ::xml_schema::idref TemplateZoneHumidistat_type;
        typedef ::xsd::cxx::tree::optional< TemplateZoneHumidistat_type, false > TemplateZoneHumidistat_optional;
        typedef ::xsd::cxx::tree::traits< TemplateZoneHumidistat_type, char > TemplateZoneHumidistat_traits;

        const TemplateZoneHumidistat_optional&
        TemplateZoneHumidistat () const;

        TemplateZoneHumidistat_optional&
        TemplateZoneHumidistat ();

        void
        TemplateZoneHumidistat (const TemplateZoneHumidistat_type& x);

        void
        TemplateZoneHumidistat (const TemplateZoneHumidistat_optional& x);

        void
        TemplateZoneHumidistat (::std::auto_ptr< TemplateZoneHumidistat_type > p);

        // ZoneHasDemandControlledVentilation
        //
        typedef ::xml_schema::boolean ZoneHasDemandControlledVentilation_type;
        typedef ::xsd::cxx::tree::optional< ZoneHasDemandControlledVentilation_type > ZoneHasDemandControlledVentilation_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHasDemandControlledVentilation_type, char > ZoneHasDemandControlledVentilation_traits;

        const ZoneHasDemandControlledVentilation_optional&
        ZoneHasDemandControlledVentilation () const;

        ZoneHasDemandControlledVentilation_optional&
        ZoneHasDemandControlledVentilation ();

        void
        ZoneHasDemandControlledVentilation (const ZoneHasDemandControlledVentilation_type& x);

        void
        ZoneHasDemandControlledVentilation (const ZoneHasDemandControlledVentilation_optional& x);

        // TemplateZoneVentController
        //
        typedef ::xml_schema::idref TemplateZoneVentController_type;
        typedef ::xsd::cxx::tree::optional< TemplateZoneVentController_type, false > TemplateZoneVentController_optional;
        typedef ::xsd::cxx::tree::traits< TemplateZoneVentController_type, char > TemplateZoneVentController_traits;

        const TemplateZoneVentController_optional&
        TemplateZoneVentController () const;

        TemplateZoneVentController_optional&
        TemplateZoneVentController ();

        void
        TemplateZoneVentController (const TemplateZoneVentController_type& x);

        void
        TemplateZoneVentController (const TemplateZoneVentController_optional& x);

        void
        TemplateZoneVentController (::std::auto_ptr< TemplateZoneVentController_type > p);

        // RoomAirModelType
        //
        typedef ::xml_schema::string RoomAirModelType_type;
        typedef ::xsd::cxx::tree::optional< RoomAirModelType_type, false > RoomAirModelType_optional;
        typedef ::xsd::cxx::tree::traits< RoomAirModelType_type, char > RoomAirModelType_traits;

        const RoomAirModelType_optional&
        RoomAirModelType () const;

        RoomAirModelType_optional&
        RoomAirModelType ();

        void
        RoomAirModelType (const RoomAirModelType_type& x);

        void
        RoomAirModelType (const RoomAirModelType_optional& x);

        void
        RoomAirModelType (::std::auto_ptr< RoomAirModelType_type > p);

        // TemplateInfilVentOneNode
        //
        typedef ::xml_schema::idref TemplateInfilVentOneNode_type;
        typedef ::xsd::cxx::tree::optional< TemplateInfilVentOneNode_type, false > TemplateInfilVentOneNode_optional;
        typedef ::xsd::cxx::tree::traits< TemplateInfilVentOneNode_type, char > TemplateInfilVentOneNode_traits;

        const TemplateInfilVentOneNode_optional&
        TemplateInfilVentOneNode () const;

        TemplateInfilVentOneNode_optional&
        TemplateInfilVentOneNode ();

        void
        TemplateInfilVentOneNode (const TemplateInfilVentOneNode_type& x);

        void
        TemplateInfilVentOneNode (const TemplateInfilVentOneNode_optional& x);

        void
        TemplateInfilVentOneNode (::std::auto_ptr< TemplateInfilVentOneNode_type > p);

        // TemplateInfilVentThreeNode
        //
        typedef ::xml_schema::idref TemplateInfilVentThreeNode_type;
        typedef ::xsd::cxx::tree::optional< TemplateInfilVentThreeNode_type, false > TemplateInfilVentThreeNode_optional;
        typedef ::xsd::cxx::tree::traits< TemplateInfilVentThreeNode_type, char > TemplateInfilVentThreeNode_traits;

        const TemplateInfilVentThreeNode_optional&
        TemplateInfilVentThreeNode () const;

        TemplateInfilVentThreeNode_optional&
        TemplateInfilVentThreeNode ();

        void
        TemplateInfilVentThreeNode (const TemplateInfilVentThreeNode_type& x);

        void
        TemplateInfilVentThreeNode (const TemplateInfilVentThreeNode_optional& x);

        void
        TemplateInfilVentThreeNode (::std::auto_ptr< TemplateInfilVentThreeNode_type > p);

        // TemplateInfilVentCrossVent
        //
        typedef ::xml_schema::idref TemplateInfilVentCrossVent_type;
        typedef ::xsd::cxx::tree::optional< TemplateInfilVentCrossVent_type, false > TemplateInfilVentCrossVent_optional;
        typedef ::xsd::cxx::tree::traits< TemplateInfilVentCrossVent_type, char > TemplateInfilVentCrossVent_traits;

        const TemplateInfilVentCrossVent_optional&
        TemplateInfilVentCrossVent () const;

        TemplateInfilVentCrossVent_optional&
        TemplateInfilVentCrossVent ();

        void
        TemplateInfilVentCrossVent (const TemplateInfilVentCrossVent_type& x);

        void
        TemplateInfilVentCrossVent (const TemplateInfilVentCrossVent_optional& x);

        void
        TemplateInfilVentCrossVent (::std::auto_ptr< TemplateInfilVentCrossVent_type > p);

        // InteriorOrExteriorZone
        //
        typedef ::xml_schema::string InteriorOrExteriorZone_type;
        typedef ::xsd::cxx::tree::optional< InteriorOrExteriorZone_type, false > InteriorOrExteriorZone_optional;
        typedef ::xsd::cxx::tree::traits< InteriorOrExteriorZone_type, char > InteriorOrExteriorZone_traits;

        const InteriorOrExteriorZone_optional&
        InteriorOrExteriorZone () const;

        InteriorOrExteriorZone_optional&
        InteriorOrExteriorZone ();

        void
        InteriorOrExteriorZone (const InteriorOrExteriorZone_type& x);

        void
        InteriorOrExteriorZone (const InteriorOrExteriorZone_optional& x);

        void
        InteriorOrExteriorZone (::std::auto_ptr< InteriorOrExteriorZone_type > p);

        // TemplateInfilVentFloorInt
        //
        typedef ::xml_schema::idref TemplateInfilVentFloorInt_type;
        typedef ::xsd::cxx::tree::optional< TemplateInfilVentFloorInt_type, false > TemplateInfilVentFloorInt_optional;
        typedef ::xsd::cxx::tree::traits< TemplateInfilVentFloorInt_type, char > TemplateInfilVentFloorInt_traits;

        const TemplateInfilVentFloorInt_optional&
        TemplateInfilVentFloorInt () const;

        TemplateInfilVentFloorInt_optional&
        TemplateInfilVentFloorInt ();

        void
        TemplateInfilVentFloorInt (const TemplateInfilVentFloorInt_type& x);

        void
        TemplateInfilVentFloorInt (const TemplateInfilVentFloorInt_optional& x);

        void
        TemplateInfilVentFloorInt (::std::auto_ptr< TemplateInfilVentFloorInt_type > p);

        // TemplateInfilVentFloorExt
        //
        typedef ::xml_schema::idref TemplateInfilVentFloorExt_type;
        typedef ::xsd::cxx::tree::optional< TemplateInfilVentFloorExt_type, false > TemplateInfilVentFloorExt_optional;
        typedef ::xsd::cxx::tree::traits< TemplateInfilVentFloorExt_type, char > TemplateInfilVentFloorExt_traits;

        const TemplateInfilVentFloorExt_optional&
        TemplateInfilVentFloorExt () const;

        TemplateInfilVentFloorExt_optional&
        TemplateInfilVentFloorExt ();

        void
        TemplateInfilVentFloorExt (const TemplateInfilVentFloorExt_type& x);

        void
        TemplateInfilVentFloorExt (const TemplateInfilVentFloorExt_optional& x);

        void
        TemplateInfilVentFloorExt (::std::auto_ptr< TemplateInfilVentFloorExt_type > p);

        // Constructors.
        //
        SimTemplateZoneConditions ();

        SimTemplateZoneConditions (const RefId_type&);

        SimTemplateZoneConditions (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f = 0,
                                   ::xml_schema::container* c = 0);

        SimTemplateZoneConditions (const SimTemplateZoneConditions& x,
                                   ::xml_schema::flags f = 0,
                                   ::xml_schema::container* c = 0);

        virtual SimTemplateZoneConditions*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimTemplateZoneConditions&
        operator= (const SimTemplateZoneConditions& x);

        virtual 
        ~SimTemplateZoneConditions ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        TemplateInfiltration_optional TemplateInfiltration_;
        PeakMinimumVentilationMethod_optional PeakMinimumVentilationMethod_;
        TemplateSimParamsZoneSizing_optional TemplateSimParamsZoneSizing_;
        ZoneThermostatType_optional ZoneThermostatType_;
        TemplateZoneTempController_optional TemplateZoneTempController_;
        ZoneHasHumidistat_optional ZoneHasHumidistat_;
        TemplateZoneHumidistat_optional TemplateZoneHumidistat_;
        ZoneHasDemandControlledVentilation_optional ZoneHasDemandControlledVentilation_;
        TemplateZoneVentController_optional TemplateZoneVentController_;
        RoomAirModelType_optional RoomAirModelType_;
        TemplateInfilVentOneNode_optional TemplateInfilVentOneNode_;
        TemplateInfilVentThreeNode_optional TemplateInfilVentThreeNode_;
        TemplateInfilVentCrossVent_optional TemplateInfilVentCrossVent_;
        InteriorOrExteriorZone_optional InteriorOrExteriorZone_;
        TemplateInfilVentFloorInt_optional TemplateInfilVentFloorInt_;
        TemplateInfilVentFloorExt_optional TemplateInfilVentFloorExt_;
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

#endif // SIM_TEMPLATE_ZONE_CONDITIONS_HXX
