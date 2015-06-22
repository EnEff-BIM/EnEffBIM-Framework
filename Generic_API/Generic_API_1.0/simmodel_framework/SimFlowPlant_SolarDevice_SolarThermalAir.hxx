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

#ifndef SIM_FLOW_PLANT_SOLAR_DEVICE_SOLAR_THERMAL_AIR_HXX
#define SIM_FLOW_PLANT_SOLAR_DEVICE_SOLAR_THERMAL_AIR_HXX

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
namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowPlant_SolarDevice_SolarThermalAir;
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

#include "simflowplant_solardevice.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowPlant_SolarDevice_SolarThermalAir: public ::namespaces::Sim::MepModel::SimFlowPlant_SolarDevice
      {
        public:
        // SimFlowPlant_InNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_InNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_InNodeName_type > SimFlowPlant_InNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_InNodeName_type, char > SimFlowPlant_InNodeName_traits;

        const SimFlowPlant_InNodeName_optional&
        SimFlowPlant_InNodeName () const;

        SimFlowPlant_InNodeName_optional&
        SimFlowPlant_InNodeName ();

        void
        SimFlowPlant_InNodeName (const SimFlowPlant_InNodeName_type& x);

        void
        SimFlowPlant_InNodeName (const SimFlowPlant_InNodeName_optional& x);

        void
        SimFlowPlant_InNodeName (::std::auto_ptr< SimFlowPlant_InNodeName_type > p);

        // SimFlowPlant_OutNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_OutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_OutNodeName_type > SimFlowPlant_OutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_OutNodeName_type, char > SimFlowPlant_OutNodeName_traits;

        const SimFlowPlant_OutNodeName_optional&
        SimFlowPlant_OutNodeName () const;

        SimFlowPlant_OutNodeName_optional&
        SimFlowPlant_OutNodeName ();

        void
        SimFlowPlant_OutNodeName (const SimFlowPlant_OutNodeName_type& x);

        void
        SimFlowPlant_OutNodeName (const SimFlowPlant_OutNodeName_optional& x);

        void
        SimFlowPlant_OutNodeName (::std::auto_ptr< SimFlowPlant_OutNodeName_type > p);

        // SimFlowPlant_BoundaryCondModelName
        //
        typedef ::xml_schema::idref SimFlowPlant_BoundaryCondModelName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_BoundaryCondModelName_type > SimFlowPlant_BoundaryCondModelName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_BoundaryCondModelName_type, char > SimFlowPlant_BoundaryCondModelName_traits;

        const SimFlowPlant_BoundaryCondModelName_optional&
        SimFlowPlant_BoundaryCondModelName () const;

        SimFlowPlant_BoundaryCondModelName_optional&
        SimFlowPlant_BoundaryCondModelName ();

        void
        SimFlowPlant_BoundaryCondModelName (const SimFlowPlant_BoundaryCondModelName_type& x);

        void
        SimFlowPlant_BoundaryCondModelName (const SimFlowPlant_BoundaryCondModelName_optional& x);

        void
        SimFlowPlant_BoundaryCondModelName (::std::auto_ptr< SimFlowPlant_BoundaryCondModelName_type > p);

        // SimFlowPlant_AvailSchedName
        //
        typedef ::xml_schema::idref SimFlowPlant_AvailSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AvailSchedName_type > SimFlowPlant_AvailSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AvailSchedName_type, char > SimFlowPlant_AvailSchedName_traits;

        const SimFlowPlant_AvailSchedName_optional&
        SimFlowPlant_AvailSchedName () const;

        SimFlowPlant_AvailSchedName_optional&
        SimFlowPlant_AvailSchedName ();

        void
        SimFlowPlant_AvailSchedName (const SimFlowPlant_AvailSchedName_type& x);

        void
        SimFlowPlant_AvailSchedName (const SimFlowPlant_AvailSchedName_optional& x);

        void
        SimFlowPlant_AvailSchedName (::std::auto_ptr< SimFlowPlant_AvailSchedName_type > p);

        // SimFlowPlant_SetpointNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_SetpointNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SetpointNodeName_type > SimFlowPlant_SetpointNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SetpointNodeName_type, char > SimFlowPlant_SetpointNodeName_traits;

        const SimFlowPlant_SetpointNodeName_optional&
        SimFlowPlant_SetpointNodeName () const;

        SimFlowPlant_SetpointNodeName_optional&
        SimFlowPlant_SetpointNodeName ();

        void
        SimFlowPlant_SetpointNodeName (const SimFlowPlant_SetpointNodeName_type& x);

        void
        SimFlowPlant_SetpointNodeName (const SimFlowPlant_SetpointNodeName_optional& x);

        void
        SimFlowPlant_SetpointNodeName (::std::auto_ptr< SimFlowPlant_SetpointNodeName_type > p);

        // SimFlowPlant_ZoneNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_ZoneNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ZoneNodeName_type > SimFlowPlant_ZoneNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ZoneNodeName_type, char > SimFlowPlant_ZoneNodeName_traits;

        const SimFlowPlant_ZoneNodeName_optional&
        SimFlowPlant_ZoneNodeName () const;

        SimFlowPlant_ZoneNodeName_optional&
        SimFlowPlant_ZoneNodeName ();

        void
        SimFlowPlant_ZoneNodeName (const SimFlowPlant_ZoneNodeName_type& x);

        void
        SimFlowPlant_ZoneNodeName (const SimFlowPlant_ZoneNodeName_optional& x);

        void
        SimFlowPlant_ZoneNodeName (::std::auto_ptr< SimFlowPlant_ZoneNodeName_type > p);

        // SimFlowPlant_FreeHeatingSetpointSchedName
        //
        typedef ::xml_schema::idref SimFlowPlant_FreeHeatingSetpointSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_FreeHeatingSetpointSchedName_type > SimFlowPlant_FreeHeatingSetpointSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_FreeHeatingSetpointSchedName_type, char > SimFlowPlant_FreeHeatingSetpointSchedName_traits;

        const SimFlowPlant_FreeHeatingSetpointSchedName_optional&
        SimFlowPlant_FreeHeatingSetpointSchedName () const;

        SimFlowPlant_FreeHeatingSetpointSchedName_optional&
        SimFlowPlant_FreeHeatingSetpointSchedName ();

        void
        SimFlowPlant_FreeHeatingSetpointSchedName (const SimFlowPlant_FreeHeatingSetpointSchedName_type& x);

        void
        SimFlowPlant_FreeHeatingSetpointSchedName (const SimFlowPlant_FreeHeatingSetpointSchedName_optional& x);

        void
        SimFlowPlant_FreeHeatingSetpointSchedName (::std::auto_ptr< SimFlowPlant_FreeHeatingSetpointSchedName_type > p);

        // SimFlowPlant_DiamPerfCollect
        //
        typedef ::xml_schema::double_ SimFlowPlant_DiamPerfCollect_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_DiamPerfCollect_type > SimFlowPlant_DiamPerfCollect_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_DiamPerfCollect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_DiamPerfCollect_traits;

        const SimFlowPlant_DiamPerfCollect_optional&
        SimFlowPlant_DiamPerfCollect () const;

        SimFlowPlant_DiamPerfCollect_optional&
        SimFlowPlant_DiamPerfCollect ();

        void
        SimFlowPlant_DiamPerfCollect (const SimFlowPlant_DiamPerfCollect_type& x);

        void
        SimFlowPlant_DiamPerfCollect (const SimFlowPlant_DiamPerfCollect_optional& x);

        // SimFlowPlant_DistBetweenPerfCollect
        //
        typedef ::xml_schema::double_ SimFlowPlant_DistBetweenPerfCollect_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_DistBetweenPerfCollect_type > SimFlowPlant_DistBetweenPerfCollect_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_DistBetweenPerfCollect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_DistBetweenPerfCollect_traits;

        const SimFlowPlant_DistBetweenPerfCollect_optional&
        SimFlowPlant_DistBetweenPerfCollect () const;

        SimFlowPlant_DistBetweenPerfCollect_optional&
        SimFlowPlant_DistBetweenPerfCollect ();

        void
        SimFlowPlant_DistBetweenPerfCollect (const SimFlowPlant_DistBetweenPerfCollect_type& x);

        void
        SimFlowPlant_DistBetweenPerfCollect (const SimFlowPlant_DistBetweenPerfCollect_optional& x);

        // SimFlowPlant_ThermalEmisCollectSurf
        //
        typedef ::xml_schema::double_ SimFlowPlant_ThermalEmisCollectSurf_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ThermalEmisCollectSurf_type > SimFlowPlant_ThermalEmisCollectSurf_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ThermalEmisCollectSurf_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_ThermalEmisCollectSurf_traits;

        const SimFlowPlant_ThermalEmisCollectSurf_optional&
        SimFlowPlant_ThermalEmisCollectSurf () const;

        SimFlowPlant_ThermalEmisCollectSurf_optional&
        SimFlowPlant_ThermalEmisCollectSurf ();

        void
        SimFlowPlant_ThermalEmisCollectSurf (const SimFlowPlant_ThermalEmisCollectSurf_type& x);

        void
        SimFlowPlant_ThermalEmisCollectSurf (const SimFlowPlant_ThermalEmisCollectSurf_optional& x);

        // SimFlowPlant_SolarAbsorbCollectSurf
        //
        typedef ::xml_schema::double_ SimFlowPlant_SolarAbsorbCollectSurf_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SolarAbsorbCollectSurf_type > SimFlowPlant_SolarAbsorbCollectSurf_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SolarAbsorbCollectSurf_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_SolarAbsorbCollectSurf_traits;

        const SimFlowPlant_SolarAbsorbCollectSurf_optional&
        SimFlowPlant_SolarAbsorbCollectSurf () const;

        SimFlowPlant_SolarAbsorbCollectSurf_optional&
        SimFlowPlant_SolarAbsorbCollectSurf ();

        void
        SimFlowPlant_SolarAbsorbCollectSurf (const SimFlowPlant_SolarAbsorbCollectSurf_type& x);

        void
        SimFlowPlant_SolarAbsorbCollectSurf (const SimFlowPlant_SolarAbsorbCollectSurf_optional& x);

        // SimFlowPlant_EffecOverallHeightCollect
        //
        typedef ::xml_schema::double_ SimFlowPlant_EffecOverallHeightCollect_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_EffecOverallHeightCollect_type > SimFlowPlant_EffecOverallHeightCollect_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_EffecOverallHeightCollect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_EffecOverallHeightCollect_traits;

        const SimFlowPlant_EffecOverallHeightCollect_optional&
        SimFlowPlant_EffecOverallHeightCollect () const;

        SimFlowPlant_EffecOverallHeightCollect_optional&
        SimFlowPlant_EffecOverallHeightCollect ();

        void
        SimFlowPlant_EffecOverallHeightCollect (const SimFlowPlant_EffecOverallHeightCollect_type& x);

        void
        SimFlowPlant_EffecOverallHeightCollect (const SimFlowPlant_EffecOverallHeightCollect_optional& x);

        // SimFlowPlant_EffecGapThickPlenumBehindCollect
        //
        typedef ::xml_schema::double_ SimFlowPlant_EffecGapThickPlenumBehindCollect_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_EffecGapThickPlenumBehindCollect_type > SimFlowPlant_EffecGapThickPlenumBehindCollect_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_EffecGapThickPlenumBehindCollect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_EffecGapThickPlenumBehindCollect_traits;

        const SimFlowPlant_EffecGapThickPlenumBehindCollect_optional&
        SimFlowPlant_EffecGapThickPlenumBehindCollect () const;

        SimFlowPlant_EffecGapThickPlenumBehindCollect_optional&
        SimFlowPlant_EffecGapThickPlenumBehindCollect ();

        void
        SimFlowPlant_EffecGapThickPlenumBehindCollect (const SimFlowPlant_EffecGapThickPlenumBehindCollect_type& x);

        void
        SimFlowPlant_EffecGapThickPlenumBehindCollect (const SimFlowPlant_EffecGapThickPlenumBehindCollect_optional& x);

        // SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect
        //
        typedef ::xml_schema::double_ SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_type > SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_traits;

        const SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_optional&
        SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect () const;

        SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_optional&
        SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect ();

        void
        SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect (const SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_type& x);

        void
        SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect (const SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_optional& x);

        // SimFlowPlant_HoleLayoutPatternForPitch
        //
        typedef ::xml_schema::string SimFlowPlant_HoleLayoutPatternForPitch_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_HoleLayoutPatternForPitch_type > SimFlowPlant_HoleLayoutPatternForPitch_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_HoleLayoutPatternForPitch_type, char > SimFlowPlant_HoleLayoutPatternForPitch_traits;

        const SimFlowPlant_HoleLayoutPatternForPitch_optional&
        SimFlowPlant_HoleLayoutPatternForPitch () const;

        SimFlowPlant_HoleLayoutPatternForPitch_optional&
        SimFlowPlant_HoleLayoutPatternForPitch ();

        void
        SimFlowPlant_HoleLayoutPatternForPitch (const SimFlowPlant_HoleLayoutPatternForPitch_type& x);

        void
        SimFlowPlant_HoleLayoutPatternForPitch (const SimFlowPlant_HoleLayoutPatternForPitch_optional& x);

        void
        SimFlowPlant_HoleLayoutPatternForPitch (::std::auto_ptr< SimFlowPlant_HoleLayoutPatternForPitch_type > p);

        // SimFlowPlant_HeatExchangeEffectCorrel
        //
        typedef ::xml_schema::string SimFlowPlant_HeatExchangeEffectCorrel_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_HeatExchangeEffectCorrel_type > SimFlowPlant_HeatExchangeEffectCorrel_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_HeatExchangeEffectCorrel_type, char > SimFlowPlant_HeatExchangeEffectCorrel_traits;

        const SimFlowPlant_HeatExchangeEffectCorrel_optional&
        SimFlowPlant_HeatExchangeEffectCorrel () const;

        SimFlowPlant_HeatExchangeEffectCorrel_optional&
        SimFlowPlant_HeatExchangeEffectCorrel ();

        void
        SimFlowPlant_HeatExchangeEffectCorrel (const SimFlowPlant_HeatExchangeEffectCorrel_type& x);

        void
        SimFlowPlant_HeatExchangeEffectCorrel (const SimFlowPlant_HeatExchangeEffectCorrel_optional& x);

        void
        SimFlowPlant_HeatExchangeEffectCorrel (::std::auto_ptr< SimFlowPlant_HeatExchangeEffectCorrel_type > p);

        // SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea
        //
        typedef ::xml_schema::double_ SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_type > SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_traits;

        const SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_optional&
        SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea () const;

        SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_optional&
        SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea ();

        void
        SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea (const SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_type& x);

        void
        SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea (const SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_optional& x);

        // SimFlowPlant_RoughCollect
        //
        typedef ::xml_schema::string SimFlowPlant_RoughCollect_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RoughCollect_type > SimFlowPlant_RoughCollect_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RoughCollect_type, char > SimFlowPlant_RoughCollect_traits;

        const SimFlowPlant_RoughCollect_optional&
        SimFlowPlant_RoughCollect () const;

        SimFlowPlant_RoughCollect_optional&
        SimFlowPlant_RoughCollect ();

        void
        SimFlowPlant_RoughCollect (const SimFlowPlant_RoughCollect_type& x);

        void
        SimFlowPlant_RoughCollect (const SimFlowPlant_RoughCollect_optional& x);

        void
        SimFlowPlant_RoughCollect (::std::auto_ptr< SimFlowPlant_RoughCollect_type > p);

        // SimFlowPlant_CollectThick
        //
        typedef ::xml_schema::double_ SimFlowPlant_CollectThick_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CollectThick_type > SimFlowPlant_CollectThick_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CollectThick_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_CollectThick_traits;

        const SimFlowPlant_CollectThick_optional&
        SimFlowPlant_CollectThick () const;

        SimFlowPlant_CollectThick_optional&
        SimFlowPlant_CollectThick ();

        void
        SimFlowPlant_CollectThick (const SimFlowPlant_CollectThick_type& x);

        void
        SimFlowPlant_CollectThick (const SimFlowPlant_CollectThick_optional& x);

        // SimFlowPlant_EffectForPerfWithRespectToWind
        //
        typedef ::xml_schema::double_ SimFlowPlant_EffectForPerfWithRespectToWind_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_EffectForPerfWithRespectToWind_type > SimFlowPlant_EffectForPerfWithRespectToWind_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_EffectForPerfWithRespectToWind_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_EffectForPerfWithRespectToWind_traits;

        const SimFlowPlant_EffectForPerfWithRespectToWind_optional&
        SimFlowPlant_EffectForPerfWithRespectToWind () const;

        SimFlowPlant_EffectForPerfWithRespectToWind_optional&
        SimFlowPlant_EffectForPerfWithRespectToWind ();

        void
        SimFlowPlant_EffectForPerfWithRespectToWind (const SimFlowPlant_EffectForPerfWithRespectToWind_type& x);

        void
        SimFlowPlant_EffectForPerfWithRespectToWind (const SimFlowPlant_EffectForPerfWithRespectToWind_optional& x);

        // SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow
        //
        typedef ::xml_schema::double_ SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_type > SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_traits;

        const SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_optional&
        SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow () const;

        SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_optional&
        SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow ();

        void
        SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow (const SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_type& x);

        void
        SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow (const SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_optional& x);

        // SimFlowPlant_SurfName_1_10
        //
        typedef ::xml_schema::idrefs SimFlowPlant_SurfName_1_10_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SurfName_1_10_type > SimFlowPlant_SurfName_1_10_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SurfName_1_10_type, char > SimFlowPlant_SurfName_1_10_traits;

        const SimFlowPlant_SurfName_1_10_optional&
        SimFlowPlant_SurfName_1_10 () const;

        SimFlowPlant_SurfName_1_10_optional&
        SimFlowPlant_SurfName_1_10 ();

        void
        SimFlowPlant_SurfName_1_10 (const SimFlowPlant_SurfName_1_10_type& x);

        void
        SimFlowPlant_SurfName_1_10 (const SimFlowPlant_SurfName_1_10_optional& x);

        void
        SimFlowPlant_SurfName_1_10 (::std::auto_ptr< SimFlowPlant_SurfName_1_10_type > p);

        // Constructors.
        //
        SimFlowPlant_SolarDevice_SolarThermalAir (const RefId_type&);

        SimFlowPlant_SolarDevice_SolarThermalAir (const ::xercesc::DOMElement& e,
                                                  ::xml_schema::flags f = 0,
                                                  ::xml_schema::container* c = 0);

        SimFlowPlant_SolarDevice_SolarThermalAir (const SimFlowPlant_SolarDevice_SolarThermalAir& x,
                                                  ::xml_schema::flags f = 0,
                                                  ::xml_schema::container* c = 0);

        virtual SimFlowPlant_SolarDevice_SolarThermalAir*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowPlant_SolarDevice_SolarThermalAir&
        operator= (const SimFlowPlant_SolarDevice_SolarThermalAir& x);

        virtual 
        ~SimFlowPlant_SolarDevice_SolarThermalAir ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowPlant_InNodeName_optional SimFlowPlant_InNodeName_;
        SimFlowPlant_OutNodeName_optional SimFlowPlant_OutNodeName_;
        SimFlowPlant_BoundaryCondModelName_optional SimFlowPlant_BoundaryCondModelName_;
        SimFlowPlant_AvailSchedName_optional SimFlowPlant_AvailSchedName_;
        SimFlowPlant_SetpointNodeName_optional SimFlowPlant_SetpointNodeName_;
        SimFlowPlant_ZoneNodeName_optional SimFlowPlant_ZoneNodeName_;
        SimFlowPlant_FreeHeatingSetpointSchedName_optional SimFlowPlant_FreeHeatingSetpointSchedName_;
        SimFlowPlant_DiamPerfCollect_optional SimFlowPlant_DiamPerfCollect_;
        SimFlowPlant_DistBetweenPerfCollect_optional SimFlowPlant_DistBetweenPerfCollect_;
        SimFlowPlant_ThermalEmisCollectSurf_optional SimFlowPlant_ThermalEmisCollectSurf_;
        SimFlowPlant_SolarAbsorbCollectSurf_optional SimFlowPlant_SolarAbsorbCollectSurf_;
        SimFlowPlant_EffecOverallHeightCollect_optional SimFlowPlant_EffecOverallHeightCollect_;
        SimFlowPlant_EffecGapThickPlenumBehindCollect_optional SimFlowPlant_EffecGapThickPlenumBehindCollect_;
        SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_optional SimFlowPlant_EffecCrossSectionAreaPlenumBehindCollect_;
        SimFlowPlant_HoleLayoutPatternForPitch_optional SimFlowPlant_HoleLayoutPatternForPitch_;
        SimFlowPlant_HeatExchangeEffectCorrel_optional SimFlowPlant_HeatExchangeEffectCorrel_;
        SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_optional SimFlowPlant_RatioActCollectSurfAreaToProjSurfArea_;
        SimFlowPlant_RoughCollect_optional SimFlowPlant_RoughCollect_;
        SimFlowPlant_CollectThick_optional SimFlowPlant_CollectThick_;
        SimFlowPlant_EffectForPerfWithRespectToWind_optional SimFlowPlant_EffectForPerfWithRespectToWind_;
        SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_optional SimFlowPlant_DischargeCoefForOpngsBuoyancyDrivenFlow_;
        SimFlowPlant_SurfName_1_10_optional SimFlowPlant_SurfName_1_10_;
      };
    }
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_FLOW_PLANT_SOLAR_DEVICE_SOLAR_THERMAL_AIR_HXX