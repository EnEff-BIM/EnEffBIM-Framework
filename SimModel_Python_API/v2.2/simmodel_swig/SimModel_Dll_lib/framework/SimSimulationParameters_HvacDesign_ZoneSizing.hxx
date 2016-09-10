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

#ifndef SIM_SIMULATION_PARAMETERS_HVAC_DESIGN_ZONE_SIZING_HXX
#define SIM_SIMULATION_PARAMETERS_HVAC_DESIGN_ZONE_SIZING_HXX

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
#error XSD runtime version mismatch
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
      class SimSimulationParameters_HvacDesign_ZoneSizing;
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

#include "simsimulationparameters_hvacdesign.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimSimulationParameters_HvacDesign_ZoneSizing: public ::schema::simxml::ResourcesGeneral::SimSimulationParameters_HvacDesign
      {
        public:
        // SimSimParams_ZoneOrZoneListName
        //
        typedef ::xml_schema::idref SimSimParams_ZoneOrZoneListName_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneOrZoneListName_type > SimSimParams_ZoneOrZoneListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneOrZoneListName_type, char > SimSimParams_ZoneOrZoneListName_traits;

        const SimSimParams_ZoneOrZoneListName_optional&
        SimSimParams_ZoneOrZoneListName () const;

        SimSimParams_ZoneOrZoneListName_optional&
        SimSimParams_ZoneOrZoneListName ();

        void
        SimSimParams_ZoneOrZoneListName (const SimSimParams_ZoneOrZoneListName_type& x);

        void
        SimSimParams_ZoneOrZoneListName (const SimSimParams_ZoneOrZoneListName_optional& x);

        void
        SimSimParams_ZoneOrZoneListName (::std::auto_ptr< SimSimParams_ZoneOrZoneListName_type > p);

        // SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod
        //
        typedef ::xml_schema::string SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_type > SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_type, char > SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_traits;

        const SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_optional&
        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod () const;

        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_optional&
        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod ();

        void
        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod (const SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_type& x);

        void
        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod (const SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_optional& x);

        void
        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod (::std::auto_ptr< SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_type > p);

        // SimSimParams_ZoneCoolDesignSupplyAirTemp
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneCoolDesignSupplyAirTemp_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneCoolDesignSupplyAirTemp_type > SimSimParams_ZoneCoolDesignSupplyAirTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneCoolDesignSupplyAirTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneCoolDesignSupplyAirTemp_traits;

        const SimSimParams_ZoneCoolDesignSupplyAirTemp_optional&
        SimSimParams_ZoneCoolDesignSupplyAirTemp () const;

        SimSimParams_ZoneCoolDesignSupplyAirTemp_optional&
        SimSimParams_ZoneCoolDesignSupplyAirTemp ();

        void
        SimSimParams_ZoneCoolDesignSupplyAirTemp (const SimSimParams_ZoneCoolDesignSupplyAirTemp_type& x);

        void
        SimSimParams_ZoneCoolDesignSupplyAirTemp (const SimSimParams_ZoneCoolDesignSupplyAirTemp_optional& x);

        // SimSimParams_ZoneCoolingDesignSupplyAirTempDifference
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_type > SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_traits;

        const SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_optional&
        SimSimParams_ZoneCoolingDesignSupplyAirTempDifference () const;

        SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_optional&
        SimSimParams_ZoneCoolingDesignSupplyAirTempDifference ();

        void
        SimSimParams_ZoneCoolingDesignSupplyAirTempDifference (const SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_type& x);

        void
        SimSimParams_ZoneCoolingDesignSupplyAirTempDifference (const SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_optional& x);

        // SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod
        //
        typedef ::xml_schema::string SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_type > SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_type, char > SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_traits;

        const SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_optional&
        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod () const;

        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_optional&
        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod ();

        void
        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod (const SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_type& x);

        void
        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod (const SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_optional& x);

        void
        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod (::std::auto_ptr< SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_type > p);

        // SimSimParams_ZoneHeatDesignSupplyAirTemp
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneHeatDesignSupplyAirTemp_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneHeatDesignSupplyAirTemp_type > SimSimParams_ZoneHeatDesignSupplyAirTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneHeatDesignSupplyAirTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneHeatDesignSupplyAirTemp_traits;

        const SimSimParams_ZoneHeatDesignSupplyAirTemp_optional&
        SimSimParams_ZoneHeatDesignSupplyAirTemp () const;

        SimSimParams_ZoneHeatDesignSupplyAirTemp_optional&
        SimSimParams_ZoneHeatDesignSupplyAirTemp ();

        void
        SimSimParams_ZoneHeatDesignSupplyAirTemp (const SimSimParams_ZoneHeatDesignSupplyAirTemp_type& x);

        void
        SimSimParams_ZoneHeatDesignSupplyAirTemp (const SimSimParams_ZoneHeatDesignSupplyAirTemp_optional& x);

        // SimSimParams_ZoneHeatingDesignSupplyAirTempDifference
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_type > SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_traits;

        const SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_optional&
        SimSimParams_ZoneHeatingDesignSupplyAirTempDifference () const;

        SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_optional&
        SimSimParams_ZoneHeatingDesignSupplyAirTempDifference ();

        void
        SimSimParams_ZoneHeatingDesignSupplyAirTempDifference (const SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_type& x);

        void
        SimSimParams_ZoneHeatingDesignSupplyAirTempDifference (const SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_optional& x);

        // SimSimParams_ZoneCoolDesignSupplyAirHumidRatio
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_type > SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_traits;

        const SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_optional&
        SimSimParams_ZoneCoolDesignSupplyAirHumidRatio () const;

        SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_optional&
        SimSimParams_ZoneCoolDesignSupplyAirHumidRatio ();

        void
        SimSimParams_ZoneCoolDesignSupplyAirHumidRatio (const SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_type& x);

        void
        SimSimParams_ZoneCoolDesignSupplyAirHumidRatio (const SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_optional& x);

        // SimSimParams_ZoneHeatDesignSupplyAirHumidRatio
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_type > SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_traits;

        const SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_optional&
        SimSimParams_ZoneHeatDesignSupplyAirHumidRatio () const;

        SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_optional&
        SimSimParams_ZoneHeatDesignSupplyAirHumidRatio ();

        void
        SimSimParams_ZoneHeatDesignSupplyAirHumidRatio (const SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_type& x);

        void
        SimSimParams_ZoneHeatDesignSupplyAirHumidRatio (const SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_optional& x);

        // SimSimParams_DesignSpecOutdrAirObjName
        //
        typedef ::xml_schema::idref SimSimParams_DesignSpecOutdrAirObjName_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_DesignSpecOutdrAirObjName_type > SimSimParams_DesignSpecOutdrAirObjName_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_DesignSpecOutdrAirObjName_type, char > SimSimParams_DesignSpecOutdrAirObjName_traits;

        const SimSimParams_DesignSpecOutdrAirObjName_optional&
        SimSimParams_DesignSpecOutdrAirObjName () const;

        SimSimParams_DesignSpecOutdrAirObjName_optional&
        SimSimParams_DesignSpecOutdrAirObjName ();

        void
        SimSimParams_DesignSpecOutdrAirObjName (const SimSimParams_DesignSpecOutdrAirObjName_type& x);

        void
        SimSimParams_DesignSpecOutdrAirObjName (const SimSimParams_DesignSpecOutdrAirObjName_optional& x);

        void
        SimSimParams_DesignSpecOutdrAirObjName (::std::auto_ptr< SimSimParams_DesignSpecOutdrAirObjName_type > p);

        // SimSimParams_ZoneHeatingSizingFactor
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneHeatingSizingFactor_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneHeatingSizingFactor_type > SimSimParams_ZoneHeatingSizingFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneHeatingSizingFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneHeatingSizingFactor_traits;

        const SimSimParams_ZoneHeatingSizingFactor_optional&
        SimSimParams_ZoneHeatingSizingFactor () const;

        SimSimParams_ZoneHeatingSizingFactor_optional&
        SimSimParams_ZoneHeatingSizingFactor ();

        void
        SimSimParams_ZoneHeatingSizingFactor (const SimSimParams_ZoneHeatingSizingFactor_type& x);

        void
        SimSimParams_ZoneHeatingSizingFactor (const SimSimParams_ZoneHeatingSizingFactor_optional& x);

        // SimSimParams_ZoneCoolingSizingFactor
        //
        typedef ::xml_schema::double_ SimSimParams_ZoneCoolingSizingFactor_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_ZoneCoolingSizingFactor_type > SimSimParams_ZoneCoolingSizingFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_ZoneCoolingSizingFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_ZoneCoolingSizingFactor_traits;

        const SimSimParams_ZoneCoolingSizingFactor_optional&
        SimSimParams_ZoneCoolingSizingFactor () const;

        SimSimParams_ZoneCoolingSizingFactor_optional&
        SimSimParams_ZoneCoolingSizingFactor ();

        void
        SimSimParams_ZoneCoolingSizingFactor (const SimSimParams_ZoneCoolingSizingFactor_type& x);

        void
        SimSimParams_ZoneCoolingSizingFactor (const SimSimParams_ZoneCoolingSizingFactor_optional& x);

        // SimSimParams_CoolDesignAirFlowMethod
        //
        typedef ::xml_schema::string SimSimParams_CoolDesignAirFlowMethod_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_CoolDesignAirFlowMethod_type > SimSimParams_CoolDesignAirFlowMethod_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_CoolDesignAirFlowMethod_type, char > SimSimParams_CoolDesignAirFlowMethod_traits;

        const SimSimParams_CoolDesignAirFlowMethod_optional&
        SimSimParams_CoolDesignAirFlowMethod () const;

        SimSimParams_CoolDesignAirFlowMethod_optional&
        SimSimParams_CoolDesignAirFlowMethod ();

        void
        SimSimParams_CoolDesignAirFlowMethod (const SimSimParams_CoolDesignAirFlowMethod_type& x);

        void
        SimSimParams_CoolDesignAirFlowMethod (const SimSimParams_CoolDesignAirFlowMethod_optional& x);

        void
        SimSimParams_CoolDesignAirFlowMethod (::std::auto_ptr< SimSimParams_CoolDesignAirFlowMethod_type > p);

        // SimSimParams_CoolDesignAirFlowRate
        //
        typedef ::xml_schema::double_ SimSimParams_CoolDesignAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_CoolDesignAirFlowRate_type > SimSimParams_CoolDesignAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_CoolDesignAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_CoolDesignAirFlowRate_traits;

        const SimSimParams_CoolDesignAirFlowRate_optional&
        SimSimParams_CoolDesignAirFlowRate () const;

        SimSimParams_CoolDesignAirFlowRate_optional&
        SimSimParams_CoolDesignAirFlowRate ();

        void
        SimSimParams_CoolDesignAirFlowRate (const SimSimParams_CoolDesignAirFlowRate_type& x);

        void
        SimSimParams_CoolDesignAirFlowRate (const SimSimParams_CoolDesignAirFlowRate_optional& x);

        // SimSimParams_CoolMinAirFlowPerZoneFloorArea
        //
        typedef ::xml_schema::double_ SimSimParams_CoolMinAirFlowPerZoneFloorArea_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_CoolMinAirFlowPerZoneFloorArea_type > SimSimParams_CoolMinAirFlowPerZoneFloorArea_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_CoolMinAirFlowPerZoneFloorArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_CoolMinAirFlowPerZoneFloorArea_traits;

        const SimSimParams_CoolMinAirFlowPerZoneFloorArea_optional&
        SimSimParams_CoolMinAirFlowPerZoneFloorArea () const;

        SimSimParams_CoolMinAirFlowPerZoneFloorArea_optional&
        SimSimParams_CoolMinAirFlowPerZoneFloorArea ();

        void
        SimSimParams_CoolMinAirFlowPerZoneFloorArea (const SimSimParams_CoolMinAirFlowPerZoneFloorArea_type& x);

        void
        SimSimParams_CoolMinAirFlowPerZoneFloorArea (const SimSimParams_CoolMinAirFlowPerZoneFloorArea_optional& x);

        // SimSimParams_CoolMinAirFlow
        //
        typedef ::xml_schema::double_ SimSimParams_CoolMinAirFlow_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_CoolMinAirFlow_type > SimSimParams_CoolMinAirFlow_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_CoolMinAirFlow_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_CoolMinAirFlow_traits;

        const SimSimParams_CoolMinAirFlow_optional&
        SimSimParams_CoolMinAirFlow () const;

        SimSimParams_CoolMinAirFlow_optional&
        SimSimParams_CoolMinAirFlow ();

        void
        SimSimParams_CoolMinAirFlow (const SimSimParams_CoolMinAirFlow_type& x);

        void
        SimSimParams_CoolMinAirFlow (const SimSimParams_CoolMinAirFlow_optional& x);

        // SimSimParams_CoolMinAirFlowFraction
        //
        typedef ::xml_schema::double_ SimSimParams_CoolMinAirFlowFraction_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_CoolMinAirFlowFraction_type > SimSimParams_CoolMinAirFlowFraction_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_CoolMinAirFlowFraction_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_CoolMinAirFlowFraction_traits;

        const SimSimParams_CoolMinAirFlowFraction_optional&
        SimSimParams_CoolMinAirFlowFraction () const;

        SimSimParams_CoolMinAirFlowFraction_optional&
        SimSimParams_CoolMinAirFlowFraction ();

        void
        SimSimParams_CoolMinAirFlowFraction (const SimSimParams_CoolMinAirFlowFraction_type& x);

        void
        SimSimParams_CoolMinAirFlowFraction (const SimSimParams_CoolMinAirFlowFraction_optional& x);

        // SimSimParams_HeatDesignAirFlowMethod
        //
        typedef ::xml_schema::string SimSimParams_HeatDesignAirFlowMethod_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_HeatDesignAirFlowMethod_type > SimSimParams_HeatDesignAirFlowMethod_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_HeatDesignAirFlowMethod_type, char > SimSimParams_HeatDesignAirFlowMethod_traits;

        const SimSimParams_HeatDesignAirFlowMethod_optional&
        SimSimParams_HeatDesignAirFlowMethod () const;

        SimSimParams_HeatDesignAirFlowMethod_optional&
        SimSimParams_HeatDesignAirFlowMethod ();

        void
        SimSimParams_HeatDesignAirFlowMethod (const SimSimParams_HeatDesignAirFlowMethod_type& x);

        void
        SimSimParams_HeatDesignAirFlowMethod (const SimSimParams_HeatDesignAirFlowMethod_optional& x);

        void
        SimSimParams_HeatDesignAirFlowMethod (::std::auto_ptr< SimSimParams_HeatDesignAirFlowMethod_type > p);

        // SimSimParams_HeatDesignAirFlowRate
        //
        typedef ::xml_schema::double_ SimSimParams_HeatDesignAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_HeatDesignAirFlowRate_type > SimSimParams_HeatDesignAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_HeatDesignAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_HeatDesignAirFlowRate_traits;

        const SimSimParams_HeatDesignAirFlowRate_optional&
        SimSimParams_HeatDesignAirFlowRate () const;

        SimSimParams_HeatDesignAirFlowRate_optional&
        SimSimParams_HeatDesignAirFlowRate ();

        void
        SimSimParams_HeatDesignAirFlowRate (const SimSimParams_HeatDesignAirFlowRate_type& x);

        void
        SimSimParams_HeatDesignAirFlowRate (const SimSimParams_HeatDesignAirFlowRate_optional& x);

        // SimSimParams_HeatMaxAirFlowPerZoneFloorArea
        //
        typedef ::xml_schema::double_ SimSimParams_HeatMaxAirFlowPerZoneFloorArea_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_HeatMaxAirFlowPerZoneFloorArea_type > SimSimParams_HeatMaxAirFlowPerZoneFloorArea_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_HeatMaxAirFlowPerZoneFloorArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_HeatMaxAirFlowPerZoneFloorArea_traits;

        const SimSimParams_HeatMaxAirFlowPerZoneFloorArea_optional&
        SimSimParams_HeatMaxAirFlowPerZoneFloorArea () const;

        SimSimParams_HeatMaxAirFlowPerZoneFloorArea_optional&
        SimSimParams_HeatMaxAirFlowPerZoneFloorArea ();

        void
        SimSimParams_HeatMaxAirFlowPerZoneFloorArea (const SimSimParams_HeatMaxAirFlowPerZoneFloorArea_type& x);

        void
        SimSimParams_HeatMaxAirFlowPerZoneFloorArea (const SimSimParams_HeatMaxAirFlowPerZoneFloorArea_optional& x);

        // SimSimParams_HeatMaxAirFlow
        //
        typedef ::xml_schema::double_ SimSimParams_HeatMaxAirFlow_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_HeatMaxAirFlow_type > SimSimParams_HeatMaxAirFlow_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_HeatMaxAirFlow_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_HeatMaxAirFlow_traits;

        const SimSimParams_HeatMaxAirFlow_optional&
        SimSimParams_HeatMaxAirFlow () const;

        SimSimParams_HeatMaxAirFlow_optional&
        SimSimParams_HeatMaxAirFlow ();

        void
        SimSimParams_HeatMaxAirFlow (const SimSimParams_HeatMaxAirFlow_type& x);

        void
        SimSimParams_HeatMaxAirFlow (const SimSimParams_HeatMaxAirFlow_optional& x);

        // SimSimParams_HeatMaxAirFlowFraction
        //
        typedef ::xml_schema::double_ SimSimParams_HeatMaxAirFlowFraction_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_HeatMaxAirFlowFraction_type > SimSimParams_HeatMaxAirFlowFraction_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_HeatMaxAirFlowFraction_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimParams_HeatMaxAirFlowFraction_traits;

        const SimSimParams_HeatMaxAirFlowFraction_optional&
        SimSimParams_HeatMaxAirFlowFraction () const;

        SimSimParams_HeatMaxAirFlowFraction_optional&
        SimSimParams_HeatMaxAirFlowFraction ();

        void
        SimSimParams_HeatMaxAirFlowFraction (const SimSimParams_HeatMaxAirFlowFraction_type& x);

        void
        SimSimParams_HeatMaxAirFlowFraction (const SimSimParams_HeatMaxAirFlowFraction_optional& x);

        // SimSimParams_DesignSpecZoneAirDistribObjName
        //
        typedef ::xml_schema::idref SimSimParams_DesignSpecZoneAirDistribObjName_type;
        typedef ::xsd::cxx::tree::optional< SimSimParams_DesignSpecZoneAirDistribObjName_type > SimSimParams_DesignSpecZoneAirDistribObjName_optional;
        typedef ::xsd::cxx::tree::traits< SimSimParams_DesignSpecZoneAirDistribObjName_type, char > SimSimParams_DesignSpecZoneAirDistribObjName_traits;

        const SimSimParams_DesignSpecZoneAirDistribObjName_optional&
        SimSimParams_DesignSpecZoneAirDistribObjName () const;

        SimSimParams_DesignSpecZoneAirDistribObjName_optional&
        SimSimParams_DesignSpecZoneAirDistribObjName ();

        void
        SimSimParams_DesignSpecZoneAirDistribObjName (const SimSimParams_DesignSpecZoneAirDistribObjName_type& x);

        void
        SimSimParams_DesignSpecZoneAirDistribObjName (const SimSimParams_DesignSpecZoneAirDistribObjName_optional& x);

        void
        SimSimParams_DesignSpecZoneAirDistribObjName (::std::auto_ptr< SimSimParams_DesignSpecZoneAirDistribObjName_type > p);

        // Constructors.
        //
        SimSimulationParameters_HvacDesign_ZoneSizing ();

        SimSimulationParameters_HvacDesign_ZoneSizing (const RefId_type&);

        SimSimulationParameters_HvacDesign_ZoneSizing (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f = 0,
                                                       ::xml_schema::container* c = 0);

        SimSimulationParameters_HvacDesign_ZoneSizing (const SimSimulationParameters_HvacDesign_ZoneSizing& x,
                                                       ::xml_schema::flags f = 0,
                                                       ::xml_schema::container* c = 0);

        virtual SimSimulationParameters_HvacDesign_ZoneSizing*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSimulationParameters_HvacDesign_ZoneSizing&
        operator= (const SimSimulationParameters_HvacDesign_ZoneSizing& x);

        virtual 
        ~SimSimulationParameters_HvacDesign_ZoneSizing ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSimParams_ZoneOrZoneListName_optional SimSimParams_ZoneOrZoneListName_;
        SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_optional SimSimParams_ZoneCoolingDesignSupplyAirTempInputMethod_;
        SimSimParams_ZoneCoolDesignSupplyAirTemp_optional SimSimParams_ZoneCoolDesignSupplyAirTemp_;
        SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_optional SimSimParams_ZoneCoolingDesignSupplyAirTempDifference_;
        SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_optional SimSimParams_ZoneHeatingDesignSupplyAirTempInputMethod_;
        SimSimParams_ZoneHeatDesignSupplyAirTemp_optional SimSimParams_ZoneHeatDesignSupplyAirTemp_;
        SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_optional SimSimParams_ZoneHeatingDesignSupplyAirTempDifference_;
        SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_optional SimSimParams_ZoneCoolDesignSupplyAirHumidRatio_;
        SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_optional SimSimParams_ZoneHeatDesignSupplyAirHumidRatio_;
        SimSimParams_DesignSpecOutdrAirObjName_optional SimSimParams_DesignSpecOutdrAirObjName_;
        SimSimParams_ZoneHeatingSizingFactor_optional SimSimParams_ZoneHeatingSizingFactor_;
        SimSimParams_ZoneCoolingSizingFactor_optional SimSimParams_ZoneCoolingSizingFactor_;
        SimSimParams_CoolDesignAirFlowMethod_optional SimSimParams_CoolDesignAirFlowMethod_;
        SimSimParams_CoolDesignAirFlowRate_optional SimSimParams_CoolDesignAirFlowRate_;
        SimSimParams_CoolMinAirFlowPerZoneFloorArea_optional SimSimParams_CoolMinAirFlowPerZoneFloorArea_;
        SimSimParams_CoolMinAirFlow_optional SimSimParams_CoolMinAirFlow_;
        SimSimParams_CoolMinAirFlowFraction_optional SimSimParams_CoolMinAirFlowFraction_;
        SimSimParams_HeatDesignAirFlowMethod_optional SimSimParams_HeatDesignAirFlowMethod_;
        SimSimParams_HeatDesignAirFlowRate_optional SimSimParams_HeatDesignAirFlowRate_;
        SimSimParams_HeatMaxAirFlowPerZoneFloorArea_optional SimSimParams_HeatMaxAirFlowPerZoneFloorArea_;
        SimSimParams_HeatMaxAirFlow_optional SimSimParams_HeatMaxAirFlow_;
        SimSimParams_HeatMaxAirFlowFraction_optional SimSimParams_HeatMaxAirFlowFraction_;
        SimSimParams_DesignSpecZoneAirDistribObjName_optional SimSimParams_DesignSpecZoneAirDistribObjName_;
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

#endif // SIM_SIMULATION_PARAMETERS_HVAC_DESIGN_ZONE_SIZING_HXX
