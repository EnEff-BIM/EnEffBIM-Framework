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

#ifndef SIM_SYSTEM_HVAC_AIR_FULL_SYSTEM_HXX
#define SIM_SYSTEM_HVAC_AIR_FULL_SYSTEM_HXX

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
    namespace BuildingModel
    {
      class SimSystem_HvacAir_FullSystem;
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

#include "simsystem_hvacair.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimSystem_HvacAir_FullSystem: public ::schema::simxml::BuildingModel::SimSystem_HvacAir
      {
        public:
        // SimSys_ContListName
        //
        typedef ::xml_schema::idref SimSys_ContListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ContListName_type > SimSys_ContListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ContListName_type, char > SimSys_ContListName_traits;

        const SimSys_ContListName_optional&
        SimSys_ContListName () const;

        SimSys_ContListName_optional&
        SimSys_ContListName ();

        void
        SimSys_ContListName (const SimSys_ContListName_type& x);

        void
        SimSys_ContListName (const SimSys_ContListName_optional& x);

        void
        SimSys_ContListName (::std::auto_ptr< SimSys_ContListName_type > p);

        // SimSys_AvailMngrListName
        //
        typedef ::xml_schema::idref SimSys_AvailMngrListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_AvailMngrListName_type > SimSys_AvailMngrListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_AvailMngrListName_type, char > SimSys_AvailMngrListName_traits;

        const SimSys_AvailMngrListName_optional&
        SimSys_AvailMngrListName () const;

        SimSys_AvailMngrListName_optional&
        SimSys_AvailMngrListName ();

        void
        SimSys_AvailMngrListName (const SimSys_AvailMngrListName_type& x);

        void
        SimSys_AvailMngrListName (const SimSys_AvailMngrListName_optional& x);

        void
        SimSys_AvailMngrListName (::std::auto_ptr< SimSys_AvailMngrListName_type > p);

        // SimSys_DesignSupAirFlowRate
        //
        typedef ::xml_schema::double_ SimSys_DesignSupAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DesignSupAirFlowRate_type > SimSys_DesignSupAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DesignSupAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_DesignSupAirFlowRate_traits;

        const SimSys_DesignSupAirFlowRate_optional&
        SimSys_DesignSupAirFlowRate () const;

        SimSys_DesignSupAirFlowRate_optional&
        SimSys_DesignSupAirFlowRate ();

        void
        SimSys_DesignSupAirFlowRate (const SimSys_DesignSupAirFlowRate_type& x);

        void
        SimSys_DesignSupAirFlowRate (const SimSys_DesignSupAirFlowRate_optional& x);

        // SimSys_BranchListName
        //
        typedef ::xml_schema::idref SimSys_BranchListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_BranchListName_type > SimSys_BranchListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_BranchListName_type, char > SimSys_BranchListName_traits;

        const SimSys_BranchListName_optional&
        SimSys_BranchListName () const;

        SimSys_BranchListName_optional&
        SimSys_BranchListName ();

        void
        SimSys_BranchListName (const SimSys_BranchListName_type& x);

        void
        SimSys_BranchListName (const SimSys_BranchListName_optional& x);

        void
        SimSys_BranchListName (::std::auto_ptr< SimSys_BranchListName_type > p);

        // SimSys_ConnListName
        //
        typedef ::xml_schema::idref SimSys_ConnListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ConnListName_type > SimSys_ConnListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ConnListName_type, char > SimSys_ConnListName_traits;

        const SimSys_ConnListName_optional&
        SimSys_ConnListName () const;

        SimSys_ConnListName_optional&
        SimSys_ConnListName ();

        void
        SimSys_ConnListName (const SimSys_ConnListName_type& x);

        void
        SimSys_ConnListName (const SimSys_ConnListName_optional& x);

        void
        SimSys_ConnListName (::std::auto_ptr< SimSys_ConnListName_type > p);

        // SimSys_SupSideInNodeName
        //
        typedef ::xml_schema::string SimSys_SupSideInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_SupSideInNodeName_type > SimSys_SupSideInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_SupSideInNodeName_type, char > SimSys_SupSideInNodeName_traits;

        const SimSys_SupSideInNodeName_optional&
        SimSys_SupSideInNodeName () const;

        SimSys_SupSideInNodeName_optional&
        SimSys_SupSideInNodeName ();

        void
        SimSys_SupSideInNodeName (const SimSys_SupSideInNodeName_type& x);

        void
        SimSys_SupSideInNodeName (const SimSys_SupSideInNodeName_optional& x);

        void
        SimSys_SupSideInNodeName (::std::auto_ptr< SimSys_SupSideInNodeName_type > p);

        // SimSys_DemandSideOutNodeName
        //
        typedef ::xml_schema::string SimSys_DemandSideOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DemandSideOutNodeName_type > SimSys_DemandSideOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DemandSideOutNodeName_type, char > SimSys_DemandSideOutNodeName_traits;

        const SimSys_DemandSideOutNodeName_optional&
        SimSys_DemandSideOutNodeName () const;

        SimSys_DemandSideOutNodeName_optional&
        SimSys_DemandSideOutNodeName ();

        void
        SimSys_DemandSideOutNodeName (const SimSys_DemandSideOutNodeName_type& x);

        void
        SimSys_DemandSideOutNodeName (const SimSys_DemandSideOutNodeName_optional& x);

        void
        SimSys_DemandSideOutNodeName (::std::auto_ptr< SimSys_DemandSideOutNodeName_type > p);

        // SimSys_DemandSideInNodeNames
        //
        typedef ::xml_schema::string SimSys_DemandSideInNodeNames_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DemandSideInNodeNames_type > SimSys_DemandSideInNodeNames_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DemandSideInNodeNames_type, char > SimSys_DemandSideInNodeNames_traits;

        const SimSys_DemandSideInNodeNames_optional&
        SimSys_DemandSideInNodeNames () const;

        SimSys_DemandSideInNodeNames_optional&
        SimSys_DemandSideInNodeNames ();

        void
        SimSys_DemandSideInNodeNames (const SimSys_DemandSideInNodeNames_type& x);

        void
        SimSys_DemandSideInNodeNames (const SimSys_DemandSideInNodeNames_optional& x);

        void
        SimSys_DemandSideInNodeNames (::std::auto_ptr< SimSys_DemandSideInNodeNames_type > p);

        // SimSys_SupSideOutNodeNames
        //
        typedef ::xml_schema::string SimSys_SupSideOutNodeNames_type;
        typedef ::xsd::cxx::tree::optional< SimSys_SupSideOutNodeNames_type > SimSys_SupSideOutNodeNames_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_SupSideOutNodeNames_type, char > SimSys_SupSideOutNodeNames_traits;

        const SimSys_SupSideOutNodeNames_optional&
        SimSys_SupSideOutNodeNames () const;

        SimSys_SupSideOutNodeNames_optional&
        SimSys_SupSideOutNodeNames ();

        void
        SimSys_SupSideOutNodeNames (const SimSys_SupSideOutNodeNames_type& x);

        void
        SimSys_SupSideOutNodeNames (const SimSys_SupSideOutNodeNames_optional& x);

        void
        SimSys_SupSideOutNodeNames (::std::auto_ptr< SimSys_SupSideOutNodeNames_type > p);

        // T24AcceptTestReq
        //
        typedef ::xml_schema::int_ T24AcceptTestReq_type;
        typedef ::xsd::cxx::tree::optional< T24AcceptTestReq_type > T24AcceptTestReq_optional;
        typedef ::xsd::cxx::tree::traits< T24AcceptTestReq_type, char > T24AcceptTestReq_traits;

        const T24AcceptTestReq_optional&
        T24AcceptTestReq () const;

        T24AcceptTestReq_optional&
        T24AcceptTestReq ();

        void
        T24AcceptTestReq (const T24AcceptTestReq_type& x);

        void
        T24AcceptTestReq (const T24AcceptTestReq_optional& x);

        // T24DuctInsul
        //
        typedef ::xml_schema::double_ T24DuctInsul_type;
        typedef ::xsd::cxx::tree::optional< T24DuctInsul_type > T24DuctInsul_optional;
        typedef ::xsd::cxx::tree::traits< T24DuctInsul_type, char, ::xsd::cxx::tree::schema_type::double_ > T24DuctInsul_traits;

        const T24DuctInsul_optional&
        T24DuctInsul () const;

        T24DuctInsul_optional&
        T24DuctInsul ();

        void
        T24DuctInsul (const T24DuctInsul_type& x);

        void
        T24DuctInsul (const T24DuctInsul_optional& x);

        // T24DuctLoc
        //
        typedef ::xml_schema::string T24DuctLoc_type;
        typedef ::xsd::cxx::tree::optional< T24DuctLoc_type > T24DuctLoc_optional;
        typedef ::xsd::cxx::tree::traits< T24DuctLoc_type, char > T24DuctLoc_traits;

        const T24DuctLoc_optional&
        T24DuctLoc () const;

        T24DuctLoc_optional&
        T24DuctLoc ();

        void
        T24DuctLoc (const T24DuctLoc_type& x);

        void
        T24DuctLoc (const T24DuctLoc_optional& x);

        void
        T24DuctLoc (::std::auto_ptr< T24DuctLoc_type > p);

        // T24AirSysExhCtrlMthd
        //
        typedef ::xml_schema::string T24AirSysExhCtrlMthd_type;
        typedef ::xsd::cxx::tree::optional< T24AirSysExhCtrlMthd_type > T24AirSysExhCtrlMthd_optional;
        typedef ::xsd::cxx::tree::traits< T24AirSysExhCtrlMthd_type, char > T24AirSysExhCtrlMthd_traits;

        const T24AirSysExhCtrlMthd_optional&
        T24AirSysExhCtrlMthd () const;

        T24AirSysExhCtrlMthd_optional&
        T24AirSysExhCtrlMthd ();

        void
        T24AirSysExhCtrlMthd (const T24AirSysExhCtrlMthd_type& x);

        void
        T24AirSysExhCtrlMthd (const T24AirSysExhCtrlMthd_optional& x);

        void
        T24AirSysExhCtrlMthd (::std::auto_ptr< T24AirSysExhCtrlMthd_type > p);

        // T24AirSysExhSysType
        //
        typedef ::xml_schema::string T24AirSysExhSysType_type;
        typedef ::xsd::cxx::tree::optional< T24AirSysExhSysType_type > T24AirSysExhSysType_optional;
        typedef ::xsd::cxx::tree::traits< T24AirSysExhSysType_type, char > T24AirSysExhSysType_traits;

        const T24AirSysExhSysType_optional&
        T24AirSysExhSysType () const;

        T24AirSysExhSysType_optional&
        T24AirSysExhSysType ();

        void
        T24AirSysExhSysType (const T24AirSysExhSysType_type& x);

        void
        T24AirSysExhSysType (const T24AirSysExhSysType_optional& x);

        void
        T24AirSysExhSysType (::std::auto_ptr< T24AirSysExhSysType_type > p);

        // T24HERSDuctReq
        //
        typedef ::xml_schema::int_ T24HERSDuctReq_type;
        typedef ::xsd::cxx::tree::optional< T24HERSDuctReq_type > T24HERSDuctReq_optional;
        typedef ::xsd::cxx::tree::traits< T24HERSDuctReq_type, char > T24HERSDuctReq_traits;

        const T24HERSDuctReq_optional&
        T24HERSDuctReq () const;

        T24HERSDuctReq_optional&
        T24HERSDuctReq ();

        void
        T24HERSDuctReq (const T24HERSDuctReq_type& x);

        void
        T24HERSDuctReq (const T24HERSDuctReq_optional& x);

        // T24NRCAMch02A
        //
        typedef ::xml_schema::int_ T24NRCAMch02A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch02A_type > T24NRCAMch02A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch02A_type, char > T24NRCAMch02A_traits;

        const T24NRCAMch02A_optional&
        T24NRCAMch02A () const;

        T24NRCAMch02A_optional&
        T24NRCAMch02A ();

        void
        T24NRCAMch02A (const T24NRCAMch02A_type& x);

        void
        T24NRCAMch02A (const T24NRCAMch02A_optional& x);

        // T24NRCAMch03A
        //
        typedef ::xml_schema::int_ T24NRCAMch03A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch03A_type > T24NRCAMch03A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch03A_type, char > T24NRCAMch03A_traits;

        const T24NRCAMch03A_optional&
        T24NRCAMch03A () const;

        T24NRCAMch03A_optional&
        T24NRCAMch03A ();

        void
        T24NRCAMch03A (const T24NRCAMch03A_type& x);

        void
        T24NRCAMch03A (const T24NRCAMch03A_optional& x);

        // T24NRCAMch04A
        //
        typedef ::xml_schema::int_ T24NRCAMch04A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch04A_type > T24NRCAMch04A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch04A_type, char > T24NRCAMch04A_traits;

        const T24NRCAMch04A_optional&
        T24NRCAMch04A () const;

        T24NRCAMch04A_optional&
        T24NRCAMch04A ();

        void
        T24NRCAMch04A (const T24NRCAMch04A_type& x);

        void
        T24NRCAMch04A (const T24NRCAMch04A_optional& x);

        // T24NRCAMch05A
        //
        typedef ::xml_schema::int_ T24NRCAMch05A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch05A_type > T24NRCAMch05A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch05A_type, char > T24NRCAMch05A_traits;

        const T24NRCAMch05A_optional&
        T24NRCAMch05A () const;

        T24NRCAMch05A_optional&
        T24NRCAMch05A ();

        void
        T24NRCAMch05A (const T24NRCAMch05A_type& x);

        void
        T24NRCAMch05A (const T24NRCAMch05A_optional& x);

        // T24NRCAMch06A
        //
        typedef ::xml_schema::int_ T24NRCAMch06A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch06A_type > T24NRCAMch06A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch06A_type, char > T24NRCAMch06A_traits;

        const T24NRCAMch06A_optional&
        T24NRCAMch06A () const;

        T24NRCAMch06A_optional&
        T24NRCAMch06A ();

        void
        T24NRCAMch06A (const T24NRCAMch06A_type& x);

        void
        T24NRCAMch06A (const T24NRCAMch06A_optional& x);

        // T24NRCAMch07A
        //
        typedef ::xml_schema::int_ T24NRCAMch07A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch07A_type > T24NRCAMch07A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch07A_type, char > T24NRCAMch07A_traits;

        const T24NRCAMch07A_optional&
        T24NRCAMch07A () const;

        T24NRCAMch07A_optional&
        T24NRCAMch07A ();

        void
        T24NRCAMch07A (const T24NRCAMch07A_type& x);

        void
        T24NRCAMch07A (const T24NRCAMch07A_optional& x);

        // T24NRCAMch08A
        //
        typedef ::xml_schema::int_ T24NRCAMch08A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch08A_type > T24NRCAMch08A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch08A_type, char > T24NRCAMch08A_traits;

        const T24NRCAMch08A_optional&
        T24NRCAMch08A () const;

        T24NRCAMch08A_optional&
        T24NRCAMch08A ();

        void
        T24NRCAMch08A (const T24NRCAMch08A_type& x);

        void
        T24NRCAMch08A (const T24NRCAMch08A_optional& x);

        // T24NRCAMch09A
        //
        typedef ::xml_schema::int_ T24NRCAMch09A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch09A_type > T24NRCAMch09A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch09A_type, char > T24NRCAMch09A_traits;

        const T24NRCAMch09A_optional&
        T24NRCAMch09A () const;

        T24NRCAMch09A_optional&
        T24NRCAMch09A ();

        void
        T24NRCAMch09A (const T24NRCAMch09A_type& x);

        void
        T24NRCAMch09A (const T24NRCAMch09A_optional& x);

        // T24NRCAMch10A
        //
        typedef ::xml_schema::int_ T24NRCAMch10A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch10A_type > T24NRCAMch10A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch10A_type, char > T24NRCAMch10A_traits;

        const T24NRCAMch10A_optional&
        T24NRCAMch10A () const;

        T24NRCAMch10A_optional&
        T24NRCAMch10A ();

        void
        T24NRCAMch10A (const T24NRCAMch10A_type& x);

        void
        T24NRCAMch10A (const T24NRCAMch10A_optional& x);

        // T24NRCAMch11A
        //
        typedef ::xml_schema::int_ T24NRCAMch11A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch11A_type > T24NRCAMch11A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch11A_type, char > T24NRCAMch11A_traits;

        const T24NRCAMch11A_optional&
        T24NRCAMch11A () const;

        T24NRCAMch11A_optional&
        T24NRCAMch11A ();

        void
        T24NRCAMch11A (const T24NRCAMch11A_type& x);

        void
        T24NRCAMch11A (const T24NRCAMch11A_optional& x);

        // T24NRCAMch12A
        //
        typedef ::xml_schema::int_ T24NRCAMch12A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch12A_type > T24NRCAMch12A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch12A_type, char > T24NRCAMch12A_traits;

        const T24NRCAMch12A_optional&
        T24NRCAMch12A () const;

        T24NRCAMch12A_optional&
        T24NRCAMch12A ();

        void
        T24NRCAMch12A (const T24NRCAMch12A_type& x);

        void
        T24NRCAMch12A (const T24NRCAMch12A_optional& x);

        // T24NRCAMch13A
        //
        typedef ::xml_schema::int_ T24NRCAMch13A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch13A_type > T24NRCAMch13A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch13A_type, char > T24NRCAMch13A_traits;

        const T24NRCAMch13A_optional&
        T24NRCAMch13A () const;

        T24NRCAMch13A_optional&
        T24NRCAMch13A ();

        void
        T24NRCAMch13A (const T24NRCAMch13A_type& x);

        void
        T24NRCAMch13A (const T24NRCAMch13A_optional& x);

        // T24NRCAMch14A
        //
        typedef ::xml_schema::int_ T24NRCAMch14A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch14A_type > T24NRCAMch14A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch14A_type, char > T24NRCAMch14A_traits;

        const T24NRCAMch14A_optional&
        T24NRCAMch14A () const;

        T24NRCAMch14A_optional&
        T24NRCAMch14A ();

        void
        T24NRCAMch14A (const T24NRCAMch14A_type& x);

        void
        T24NRCAMch14A (const T24NRCAMch14A_optional& x);

        // T24NRCAMch15A
        //
        typedef ::xml_schema::int_ T24NRCAMch15A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch15A_type > T24NRCAMch15A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch15A_type, char > T24NRCAMch15A_traits;

        const T24NRCAMch15A_optional&
        T24NRCAMch15A () const;

        T24NRCAMch15A_optional&
        T24NRCAMch15A ();

        void
        T24NRCAMch15A (const T24NRCAMch15A_type& x);

        void
        T24NRCAMch15A (const T24NRCAMch15A_optional& x);

        // T24NRCAMch16A
        //
        typedef ::xml_schema::int_ T24NRCAMch16A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch16A_type > T24NRCAMch16A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch16A_type, char > T24NRCAMch16A_traits;

        const T24NRCAMch16A_optional&
        T24NRCAMch16A () const;

        T24NRCAMch16A_optional&
        T24NRCAMch16A ();

        void
        T24NRCAMch16A (const T24NRCAMch16A_type& x);

        void
        T24NRCAMch16A (const T24NRCAMch16A_optional& x);

        // T24NRCAMch17A
        //
        typedef ::xml_schema::int_ T24NRCAMch17A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch17A_type > T24NRCAMch17A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch17A_type, char > T24NRCAMch17A_traits;

        const T24NRCAMch17A_optional&
        T24NRCAMch17A () const;

        T24NRCAMch17A_optional&
        T24NRCAMch17A ();

        void
        T24NRCAMch17A (const T24NRCAMch17A_type& x);

        void
        T24NRCAMch17A (const T24NRCAMch17A_optional& x);

        // T24NRCAMch18A
        //
        typedef ::xml_schema::int_ T24NRCAMch18A_type;
        typedef ::xsd::cxx::tree::optional< T24NRCAMch18A_type > T24NRCAMch18A_optional;
        typedef ::xsd::cxx::tree::traits< T24NRCAMch18A_type, char > T24NRCAMch18A_traits;

        const T24NRCAMch18A_optional&
        T24NRCAMch18A () const;

        T24NRCAMch18A_optional&
        T24NRCAMch18A ();

        void
        T24NRCAMch18A (const T24NRCAMch18A_type& x);

        void
        T24NRCAMch18A (const T24NRCAMch18A_optional& x);

        // T24ConstructStatus3
        //
        typedef ::xml_schema::string T24ConstructStatus3_type;
        typedef ::xsd::cxx::tree::optional< T24ConstructStatus3_type > T24ConstructStatus3_optional;
        typedef ::xsd::cxx::tree::traits< T24ConstructStatus3_type, char > T24ConstructStatus3_traits;

        const T24ConstructStatus3_optional&
        T24ConstructStatus3 () const;

        T24ConstructStatus3_optional&
        T24ConstructStatus3 ();

        void
        T24ConstructStatus3 (const T24ConstructStatus3_type& x);

        void
        T24ConstructStatus3 (const T24ConstructStatus3_optional& x);

        void
        T24ConstructStatus3 (::std::auto_ptr< T24ConstructStatus3_type > p);

        // T24AHUSubType
        //
        typedef ::xml_schema::string T24AHUSubType_type;
        typedef ::xsd::cxx::tree::optional< T24AHUSubType_type > T24AHUSubType_optional;
        typedef ::xsd::cxx::tree::traits< T24AHUSubType_type, char > T24AHUSubType_traits;

        const T24AHUSubType_optional&
        T24AHUSubType () const;

        T24AHUSubType_optional&
        T24AHUSubType ();

        void
        T24AHUSubType (const T24AHUSubType_type& x);

        void
        T24AHUSubType (const T24AHUSubType_optional& x);

        void
        T24AHUSubType (::std::auto_ptr< T24AHUSubType_type > p);

        // Constructors.
        //
        SimSystem_HvacAir_FullSystem ();

        SimSystem_HvacAir_FullSystem (const RefId_type&);

        SimSystem_HvacAir_FullSystem (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f = 0,
                                      ::xml_schema::container* c = 0);

        SimSystem_HvacAir_FullSystem (const SimSystem_HvacAir_FullSystem& x,
                                      ::xml_schema::flags f = 0,
                                      ::xml_schema::container* c = 0);

        virtual SimSystem_HvacAir_FullSystem*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSystem_HvacAir_FullSystem&
        operator= (const SimSystem_HvacAir_FullSystem& x);

        virtual 
        ~SimSystem_HvacAir_FullSystem ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSys_ContListName_optional SimSys_ContListName_;
        SimSys_AvailMngrListName_optional SimSys_AvailMngrListName_;
        SimSys_DesignSupAirFlowRate_optional SimSys_DesignSupAirFlowRate_;
        SimSys_BranchListName_optional SimSys_BranchListName_;
        SimSys_ConnListName_optional SimSys_ConnListName_;
        SimSys_SupSideInNodeName_optional SimSys_SupSideInNodeName_;
        SimSys_DemandSideOutNodeName_optional SimSys_DemandSideOutNodeName_;
        SimSys_DemandSideInNodeNames_optional SimSys_DemandSideInNodeNames_;
        SimSys_SupSideOutNodeNames_optional SimSys_SupSideOutNodeNames_;
        T24AcceptTestReq_optional T24AcceptTestReq_;
        T24DuctInsul_optional T24DuctInsul_;
        T24DuctLoc_optional T24DuctLoc_;
        T24AirSysExhCtrlMthd_optional T24AirSysExhCtrlMthd_;
        T24AirSysExhSysType_optional T24AirSysExhSysType_;
        T24HERSDuctReq_optional T24HERSDuctReq_;
        T24NRCAMch02A_optional T24NRCAMch02A_;
        T24NRCAMch03A_optional T24NRCAMch03A_;
        T24NRCAMch04A_optional T24NRCAMch04A_;
        T24NRCAMch05A_optional T24NRCAMch05A_;
        T24NRCAMch06A_optional T24NRCAMch06A_;
        T24NRCAMch07A_optional T24NRCAMch07A_;
        T24NRCAMch08A_optional T24NRCAMch08A_;
        T24NRCAMch09A_optional T24NRCAMch09A_;
        T24NRCAMch10A_optional T24NRCAMch10A_;
        T24NRCAMch11A_optional T24NRCAMch11A_;
        T24NRCAMch12A_optional T24NRCAMch12A_;
        T24NRCAMch13A_optional T24NRCAMch13A_;
        T24NRCAMch14A_optional T24NRCAMch14A_;
        T24NRCAMch15A_optional T24NRCAMch15A_;
        T24NRCAMch16A_optional T24NRCAMch16A_;
        T24NRCAMch17A_optional T24NRCAMch17A_;
        T24NRCAMch18A_optional T24NRCAMch18A_;
        T24ConstructStatus3_optional T24ConstructStatus3_;
        T24AHUSubType_optional T24AHUSubType_;
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

#endif // SIM_SYSTEM_HVAC_AIR_FULL_SYSTEM_HXX
