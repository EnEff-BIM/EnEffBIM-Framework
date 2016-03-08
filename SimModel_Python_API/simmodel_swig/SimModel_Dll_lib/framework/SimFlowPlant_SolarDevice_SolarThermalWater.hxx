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

#ifndef SIM_FLOW_PLANT_SOLAR_DEVICE_SOLAR_THERMAL_WATER_HXX
#define SIM_FLOW_PLANT_SOLAR_DEVICE_SOLAR_THERMAL_WATER_HXX

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
    namespace MepModel
    {
      class SimFlowPlant_SolarDevice_SolarThermalWater;
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

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowPlant_SolarDevice_SolarThermalWater: public ::schema::simxml::MepModel::SimFlowPlant_SolarDevice
      {
        public:
        // SimFlowPlant_Name
        //
        typedef ::xml_schema::string SimFlowPlant_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_Name_type > SimFlowPlant_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_Name_type, char > SimFlowPlant_Name_traits;

        const SimFlowPlant_Name_optional&
        SimFlowPlant_Name () const;

        SimFlowPlant_Name_optional&
        SimFlowPlant_Name ();

        void
        SimFlowPlant_Name (const SimFlowPlant_Name_type& x);

        void
        SimFlowPlant_Name (const SimFlowPlant_Name_optional& x);

        void
        SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > p);

        // SimFlowPlant_SolarCollectPerfName
        //
        typedef ::xml_schema::idref SimFlowPlant_SolarCollectPerfName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SolarCollectPerfName_type > SimFlowPlant_SolarCollectPerfName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SolarCollectPerfName_type, char > SimFlowPlant_SolarCollectPerfName_traits;

        const SimFlowPlant_SolarCollectPerfName_optional&
        SimFlowPlant_SolarCollectPerfName () const;

        SimFlowPlant_SolarCollectPerfName_optional&
        SimFlowPlant_SolarCollectPerfName ();

        void
        SimFlowPlant_SolarCollectPerfName (const SimFlowPlant_SolarCollectPerfName_type& x);

        void
        SimFlowPlant_SolarCollectPerfName (const SimFlowPlant_SolarCollectPerfName_optional& x);

        void
        SimFlowPlant_SolarCollectPerfName (::std::auto_ptr< SimFlowPlant_SolarCollectPerfName_type > p);

        // SimFlowPlant_SurfName
        //
        typedef ::xml_schema::idref SimFlowPlant_SurfName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SurfName_type > SimFlowPlant_SurfName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SurfName_type, char > SimFlowPlant_SurfName_traits;

        const SimFlowPlant_SurfName_optional&
        SimFlowPlant_SurfName () const;

        SimFlowPlant_SurfName_optional&
        SimFlowPlant_SurfName ();

        void
        SimFlowPlant_SurfName (const SimFlowPlant_SurfName_type& x);

        void
        SimFlowPlant_SurfName (const SimFlowPlant_SurfName_optional& x);

        void
        SimFlowPlant_SurfName (::std::auto_ptr< SimFlowPlant_SurfName_type > p);

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

        // SimFlowPlant_MaxFlowRate
        //
        typedef ::xml_schema::double_ SimFlowPlant_MaxFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_MaxFlowRate_type > SimFlowPlant_MaxFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_MaxFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_MaxFlowRate_traits;

        const SimFlowPlant_MaxFlowRate_optional&
        SimFlowPlant_MaxFlowRate () const;

        SimFlowPlant_MaxFlowRate_optional&
        SimFlowPlant_MaxFlowRate ();

        void
        SimFlowPlant_MaxFlowRate (const SimFlowPlant_MaxFlowRate_type& x);

        void
        SimFlowPlant_MaxFlowRate (const SimFlowPlant_MaxFlowRate_optional& x);

        // SolarCollectPerf_FlatPlate_Name
        //
        typedef ::xml_schema::string SolarCollectPerf_FlatPlate_Name_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_Name_type > SolarCollectPerf_FlatPlate_Name_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_Name_type, char > SolarCollectPerf_FlatPlate_Name_traits;

        const SolarCollectPerf_FlatPlate_Name_optional&
        SolarCollectPerf_FlatPlate_Name () const;

        SolarCollectPerf_FlatPlate_Name_optional&
        SolarCollectPerf_FlatPlate_Name ();

        void
        SolarCollectPerf_FlatPlate_Name (const SolarCollectPerf_FlatPlate_Name_type& x);

        void
        SolarCollectPerf_FlatPlate_Name (const SolarCollectPerf_FlatPlate_Name_optional& x);

        void
        SolarCollectPerf_FlatPlate_Name (::std::auto_ptr< SolarCollectPerf_FlatPlate_Name_type > p);

        // SolarCollectPerf_FlatPlate_GrossArea
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_GrossArea_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_GrossArea_type > SolarCollectPerf_FlatPlate_GrossArea_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_GrossArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_GrossArea_traits;

        const SolarCollectPerf_FlatPlate_GrossArea_optional&
        SolarCollectPerf_FlatPlate_GrossArea () const;

        SolarCollectPerf_FlatPlate_GrossArea_optional&
        SolarCollectPerf_FlatPlate_GrossArea ();

        void
        SolarCollectPerf_FlatPlate_GrossArea (const SolarCollectPerf_FlatPlate_GrossArea_type& x);

        void
        SolarCollectPerf_FlatPlate_GrossArea (const SolarCollectPerf_FlatPlate_GrossArea_optional& x);

        // SolarCollectPerf_FlatPlate_TestFluid
        //
        typedef ::xml_schema::string SolarCollectPerf_FlatPlate_TestFluid_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_TestFluid_type > SolarCollectPerf_FlatPlate_TestFluid_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_TestFluid_type, char > SolarCollectPerf_FlatPlate_TestFluid_traits;

        const SolarCollectPerf_FlatPlate_TestFluid_optional&
        SolarCollectPerf_FlatPlate_TestFluid () const;

        SolarCollectPerf_FlatPlate_TestFluid_optional&
        SolarCollectPerf_FlatPlate_TestFluid ();

        void
        SolarCollectPerf_FlatPlate_TestFluid (const SolarCollectPerf_FlatPlate_TestFluid_type& x);

        void
        SolarCollectPerf_FlatPlate_TestFluid (const SolarCollectPerf_FlatPlate_TestFluid_optional& x);

        void
        SolarCollectPerf_FlatPlate_TestFluid (::std::auto_ptr< SolarCollectPerf_FlatPlate_TestFluid_type > p);

        // SolarCollectPerf_FlatPlate_TestFlowRate
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_TestFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_TestFlowRate_type > SolarCollectPerf_FlatPlate_TestFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_TestFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_TestFlowRate_traits;

        const SolarCollectPerf_FlatPlate_TestFlowRate_optional&
        SolarCollectPerf_FlatPlate_TestFlowRate () const;

        SolarCollectPerf_FlatPlate_TestFlowRate_optional&
        SolarCollectPerf_FlatPlate_TestFlowRate ();

        void
        SolarCollectPerf_FlatPlate_TestFlowRate (const SolarCollectPerf_FlatPlate_TestFlowRate_type& x);

        void
        SolarCollectPerf_FlatPlate_TestFlowRate (const SolarCollectPerf_FlatPlate_TestFlowRate_optional& x);

        // SolarCollectPerf_FlatPlate_TestCorrelType
        //
        typedef ::xml_schema::string SolarCollectPerf_FlatPlate_TestCorrelType_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_TestCorrelType_type > SolarCollectPerf_FlatPlate_TestCorrelType_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_TestCorrelType_type, char > SolarCollectPerf_FlatPlate_TestCorrelType_traits;

        const SolarCollectPerf_FlatPlate_TestCorrelType_optional&
        SolarCollectPerf_FlatPlate_TestCorrelType () const;

        SolarCollectPerf_FlatPlate_TestCorrelType_optional&
        SolarCollectPerf_FlatPlate_TestCorrelType ();

        void
        SolarCollectPerf_FlatPlate_TestCorrelType (const SolarCollectPerf_FlatPlate_TestCorrelType_type& x);

        void
        SolarCollectPerf_FlatPlate_TestCorrelType (const SolarCollectPerf_FlatPlate_TestCorrelType_optional& x);

        void
        SolarCollectPerf_FlatPlate_TestCorrelType (::std::auto_ptr< SolarCollectPerf_FlatPlate_TestCorrelType_type > p);

        // SolarCollectPerf_FlatPlate_Coef1ofEffEquation
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_Coef1ofEffEquation_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_Coef1ofEffEquation_type > SolarCollectPerf_FlatPlate_Coef1ofEffEquation_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_Coef1ofEffEquation_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_Coef1ofEffEquation_traits;

        const SolarCollectPerf_FlatPlate_Coef1ofEffEquation_optional&
        SolarCollectPerf_FlatPlate_Coef1ofEffEquation () const;

        SolarCollectPerf_FlatPlate_Coef1ofEffEquation_optional&
        SolarCollectPerf_FlatPlate_Coef1ofEffEquation ();

        void
        SolarCollectPerf_FlatPlate_Coef1ofEffEquation (const SolarCollectPerf_FlatPlate_Coef1ofEffEquation_type& x);

        void
        SolarCollectPerf_FlatPlate_Coef1ofEffEquation (const SolarCollectPerf_FlatPlate_Coef1ofEffEquation_optional& x);

        // SolarCollectPerf_FlatPlate_Coef2ofEffEquation
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_Coef2ofEffEquation_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_Coef2ofEffEquation_type > SolarCollectPerf_FlatPlate_Coef2ofEffEquation_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_Coef2ofEffEquation_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_Coef2ofEffEquation_traits;

        const SolarCollectPerf_FlatPlate_Coef2ofEffEquation_optional&
        SolarCollectPerf_FlatPlate_Coef2ofEffEquation () const;

        SolarCollectPerf_FlatPlate_Coef2ofEffEquation_optional&
        SolarCollectPerf_FlatPlate_Coef2ofEffEquation ();

        void
        SolarCollectPerf_FlatPlate_Coef2ofEffEquation (const SolarCollectPerf_FlatPlate_Coef2ofEffEquation_type& x);

        void
        SolarCollectPerf_FlatPlate_Coef2ofEffEquation (const SolarCollectPerf_FlatPlate_Coef2ofEffEquation_optional& x);

        // SolarCollectPerf_FlatPlate_Coef3ofEffEquation
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_Coef3ofEffEquation_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_Coef3ofEffEquation_type > SolarCollectPerf_FlatPlate_Coef3ofEffEquation_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_Coef3ofEffEquation_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_Coef3ofEffEquation_traits;

        const SolarCollectPerf_FlatPlate_Coef3ofEffEquation_optional&
        SolarCollectPerf_FlatPlate_Coef3ofEffEquation () const;

        SolarCollectPerf_FlatPlate_Coef3ofEffEquation_optional&
        SolarCollectPerf_FlatPlate_Coef3ofEffEquation ();

        void
        SolarCollectPerf_FlatPlate_Coef3ofEffEquation (const SolarCollectPerf_FlatPlate_Coef3ofEffEquation_type& x);

        void
        SolarCollectPerf_FlatPlate_Coef3ofEffEquation (const SolarCollectPerf_FlatPlate_Coef3ofEffEquation_optional& x);

        // SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_type > SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_traits;

        const SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_optional&
        SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod () const;

        SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_optional&
        SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod ();

        void
        SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod (const SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_type& x);

        void
        SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod (const SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_optional& x);

        // SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod
        //
        typedef ::xml_schema::double_ SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_type;
        typedef ::xsd::cxx::tree::optional< SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_type > SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_optional;
        typedef ::xsd::cxx::tree::traits< SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_traits;

        const SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_optional&
        SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod () const;

        SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_optional&
        SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod ();

        void
        SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod (const SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_type& x);

        void
        SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod (const SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_optional& x);

        // Constructors.
        //
        SimFlowPlant_SolarDevice_SolarThermalWater ();

        SimFlowPlant_SolarDevice_SolarThermalWater (const RefId_type&);

        SimFlowPlant_SolarDevice_SolarThermalWater (const ::xercesc::DOMElement& e,
                                                    ::xml_schema::flags f = 0,
                                                    ::xml_schema::container* c = 0);

        SimFlowPlant_SolarDevice_SolarThermalWater (const SimFlowPlant_SolarDevice_SolarThermalWater& x,
                                                    ::xml_schema::flags f = 0,
                                                    ::xml_schema::container* c = 0);

        virtual SimFlowPlant_SolarDevice_SolarThermalWater*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowPlant_SolarDevice_SolarThermalWater&
        operator= (const SimFlowPlant_SolarDevice_SolarThermalWater& x);

        virtual 
        ~SimFlowPlant_SolarDevice_SolarThermalWater ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowPlant_Name_optional SimFlowPlant_Name_;
        SimFlowPlant_SolarCollectPerfName_optional SimFlowPlant_SolarCollectPerfName_;
        SimFlowPlant_SurfName_optional SimFlowPlant_SurfName_;
        SimFlowPlant_InNodeName_optional SimFlowPlant_InNodeName_;
        SimFlowPlant_OutNodeName_optional SimFlowPlant_OutNodeName_;
        SimFlowPlant_MaxFlowRate_optional SimFlowPlant_MaxFlowRate_;
        SolarCollectPerf_FlatPlate_Name_optional SolarCollectPerf_FlatPlate_Name_;
        SolarCollectPerf_FlatPlate_GrossArea_optional SolarCollectPerf_FlatPlate_GrossArea_;
        SolarCollectPerf_FlatPlate_TestFluid_optional SolarCollectPerf_FlatPlate_TestFluid_;
        SolarCollectPerf_FlatPlate_TestFlowRate_optional SolarCollectPerf_FlatPlate_TestFlowRate_;
        SolarCollectPerf_FlatPlate_TestCorrelType_optional SolarCollectPerf_FlatPlate_TestCorrelType_;
        SolarCollectPerf_FlatPlate_Coef1ofEffEquation_optional SolarCollectPerf_FlatPlate_Coef1ofEffEquation_;
        SolarCollectPerf_FlatPlate_Coef2ofEffEquation_optional SolarCollectPerf_FlatPlate_Coef2ofEffEquation_;
        SolarCollectPerf_FlatPlate_Coef3ofEffEquation_optional SolarCollectPerf_FlatPlate_Coef3ofEffEquation_;
        SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_optional SolarCollectPerf_FlatPlate_Coef2OfIncidentAngleMod_;
        SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_optional SolarCollectPerf_FlatPlate_Coef3OfIncidentAngleMod_;
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

#endif // SIM_FLOW_PLANT_SOLAR_DEVICE_SOLAR_THERMAL_WATER_HXX
