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

#ifndef SIM_FLOW_TERMINAL_AIR_TERMINAL_CAV_PASSIVE_FOUR_PIPE_INDUCTION_HXX
#define SIM_FLOW_TERMINAL_AIR_TERMINAL_CAV_PASSIVE_FOUR_PIPE_INDUCTION_HXX

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
      class SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction;
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

#include "simflowterminal_airterminal.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction: public ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal
      {
        public:
        // SimFlowTerm_Name
        //
        typedef ::xml_schema::string SimFlowTerm_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_Name_type > SimFlowTerm_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_Name_type, char > SimFlowTerm_Name_traits;

        const SimFlowTerm_Name_optional&
        SimFlowTerm_Name () const;

        SimFlowTerm_Name_optional&
        SimFlowTerm_Name ();

        void
        SimFlowTerm_Name (const SimFlowTerm_Name_type& x);

        void
        SimFlowTerm_Name (const SimFlowTerm_Name_optional& x);

        void
        SimFlowTerm_Name (::std::auto_ptr< SimFlowTerm_Name_type > p);

        // SimFlowTerm_CoolingCoilObjType
        //
        typedef ::xml_schema::string SimFlowTerm_CoolingCoilObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_CoolingCoilObjType_type > SimFlowTerm_CoolingCoilObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_CoolingCoilObjType_type, char > SimFlowTerm_CoolingCoilObjType_traits;

        const SimFlowTerm_CoolingCoilObjType_optional&
        SimFlowTerm_CoolingCoilObjType () const;

        SimFlowTerm_CoolingCoilObjType_optional&
        SimFlowTerm_CoolingCoilObjType ();

        void
        SimFlowTerm_CoolingCoilObjType (const SimFlowTerm_CoolingCoilObjType_type& x);

        void
        SimFlowTerm_CoolingCoilObjType (const SimFlowTerm_CoolingCoilObjType_optional& x);

        void
        SimFlowTerm_CoolingCoilObjType (::std::auto_ptr< SimFlowTerm_CoolingCoilObjType_type > p);

        // SimFlowTerm_HeatingCoilObjType
        //
        typedef ::xml_schema::string SimFlowTerm_HeatingCoilObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HeatingCoilObjType_type > SimFlowTerm_HeatingCoilObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HeatingCoilObjType_type, char > SimFlowTerm_HeatingCoilObjType_traits;

        const SimFlowTerm_HeatingCoilObjType_optional&
        SimFlowTerm_HeatingCoilObjType () const;

        SimFlowTerm_HeatingCoilObjType_optional&
        SimFlowTerm_HeatingCoilObjType ();

        void
        SimFlowTerm_HeatingCoilObjType (const SimFlowTerm_HeatingCoilObjType_type& x);

        void
        SimFlowTerm_HeatingCoilObjType (const SimFlowTerm_HeatingCoilObjType_optional& x);

        void
        SimFlowTerm_HeatingCoilObjType (::std::auto_ptr< SimFlowTerm_HeatingCoilObjType_type > p);

        // SimFlowTerm_AvailSchedName
        //
        typedef ::xml_schema::idref SimFlowTerm_AvailSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_AvailSchedName_type > SimFlowTerm_AvailSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_AvailSchedName_type, char > SimFlowTerm_AvailSchedName_traits;

        const SimFlowTerm_AvailSchedName_optional&
        SimFlowTerm_AvailSchedName () const;

        SimFlowTerm_AvailSchedName_optional&
        SimFlowTerm_AvailSchedName ();

        void
        SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_type& x);

        void
        SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_optional& x);

        void
        SimFlowTerm_AvailSchedName (::std::auto_ptr< SimFlowTerm_AvailSchedName_type > p);

        // SimFlowTerm_AirOutNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_AirOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_AirOutNodeName_type > SimFlowTerm_AirOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_AirOutNodeName_type, char > SimFlowTerm_AirOutNodeName_traits;

        const SimFlowTerm_AirOutNodeName_optional&
        SimFlowTerm_AirOutNodeName () const;

        SimFlowTerm_AirOutNodeName_optional&
        SimFlowTerm_AirOutNodeName ();

        void
        SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_type& x);

        void
        SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_optional& x);

        void
        SimFlowTerm_AirOutNodeName (::std::auto_ptr< SimFlowTerm_AirOutNodeName_type > p);

        // SimFlowTerm_HeatingCoilName
        //
        typedef ::xml_schema::idref SimFlowTerm_HeatingCoilName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HeatingCoilName_type > SimFlowTerm_HeatingCoilName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HeatingCoilName_type, char > SimFlowTerm_HeatingCoilName_traits;

        const SimFlowTerm_HeatingCoilName_optional&
        SimFlowTerm_HeatingCoilName () const;

        SimFlowTerm_HeatingCoilName_optional&
        SimFlowTerm_HeatingCoilName ();

        void
        SimFlowTerm_HeatingCoilName (const SimFlowTerm_HeatingCoilName_type& x);

        void
        SimFlowTerm_HeatingCoilName (const SimFlowTerm_HeatingCoilName_optional& x);

        void
        SimFlowTerm_HeatingCoilName (::std::auto_ptr< SimFlowTerm_HeatingCoilName_type > p);

        // SimFlowTerm_HeatingConvergTol
        //
        typedef ::xml_schema::double_ SimFlowTerm_HeatingConvergTol_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HeatingConvergTol_type > SimFlowTerm_HeatingConvergTol_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HeatingConvergTol_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_HeatingConvergTol_traits;

        const SimFlowTerm_HeatingConvergTol_optional&
        SimFlowTerm_HeatingConvergTol () const;

        SimFlowTerm_HeatingConvergTol_optional&
        SimFlowTerm_HeatingConvergTol ();

        void
        SimFlowTerm_HeatingConvergTol (const SimFlowTerm_HeatingConvergTol_type& x);

        void
        SimFlowTerm_HeatingConvergTol (const SimFlowTerm_HeatingConvergTol_optional& x);

        // SimFlowTerm_SupplyAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_SupplyAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_SupplyAirInletNodeName_type > SimFlowTerm_SupplyAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_SupplyAirInletNodeName_type, char > SimFlowTerm_SupplyAirInletNodeName_traits;

        const SimFlowTerm_SupplyAirInletNodeName_optional&
        SimFlowTerm_SupplyAirInletNodeName () const;

        SimFlowTerm_SupplyAirInletNodeName_optional&
        SimFlowTerm_SupplyAirInletNodeName ();

        void
        SimFlowTerm_SupplyAirInletNodeName (const SimFlowTerm_SupplyAirInletNodeName_type& x);

        void
        SimFlowTerm_SupplyAirInletNodeName (const SimFlowTerm_SupplyAirInletNodeName_optional& x);

        void
        SimFlowTerm_SupplyAirInletNodeName (::std::auto_ptr< SimFlowTerm_SupplyAirInletNodeName_type > p);

        // SimFlowTerm_ZoneMixerName
        //
        typedef ::xml_schema::idref SimFlowTerm_ZoneMixerName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ZoneMixerName_type > SimFlowTerm_ZoneMixerName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ZoneMixerName_type, char > SimFlowTerm_ZoneMixerName_traits;

        const SimFlowTerm_ZoneMixerName_optional&
        SimFlowTerm_ZoneMixerName () const;

        SimFlowTerm_ZoneMixerName_optional&
        SimFlowTerm_ZoneMixerName ();

        void
        SimFlowTerm_ZoneMixerName (const SimFlowTerm_ZoneMixerName_type& x);

        void
        SimFlowTerm_ZoneMixerName (const SimFlowTerm_ZoneMixerName_optional& x);

        void
        SimFlowTerm_ZoneMixerName (::std::auto_ptr< SimFlowTerm_ZoneMixerName_type > p);

        // SimFlowTerm_MaxTotalAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxTotalAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxTotalAirFlowRate_type > SimFlowTerm_MaxTotalAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxTotalAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxTotalAirFlowRate_traits;

        const SimFlowTerm_MaxTotalAirFlowRate_optional&
        SimFlowTerm_MaxTotalAirFlowRate () const;

        SimFlowTerm_MaxTotalAirFlowRate_optional&
        SimFlowTerm_MaxTotalAirFlowRate ();

        void
        SimFlowTerm_MaxTotalAirFlowRate (const SimFlowTerm_MaxTotalAirFlowRate_type& x);

        void
        SimFlowTerm_MaxTotalAirFlowRate (const SimFlowTerm_MaxTotalAirFlowRate_optional& x);

        // SimFlowTerm_InductionRatio
        //
        typedef ::xml_schema::double_ SimFlowTerm_InductionRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_InductionRatio_type > SimFlowTerm_InductionRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_InductionRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_InductionRatio_traits;

        const SimFlowTerm_InductionRatio_optional&
        SimFlowTerm_InductionRatio () const;

        SimFlowTerm_InductionRatio_optional&
        SimFlowTerm_InductionRatio ();

        void
        SimFlowTerm_InductionRatio (const SimFlowTerm_InductionRatio_type& x);

        void
        SimFlowTerm_InductionRatio (const SimFlowTerm_InductionRatio_optional& x);

        // SimFlowTerm_InducedAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_InducedAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_InducedAirInletNodeName_type > SimFlowTerm_InducedAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_InducedAirInletNodeName_type, char > SimFlowTerm_InducedAirInletNodeName_traits;

        const SimFlowTerm_InducedAirInletNodeName_optional&
        SimFlowTerm_InducedAirInletNodeName () const;

        SimFlowTerm_InducedAirInletNodeName_optional&
        SimFlowTerm_InducedAirInletNodeName ();

        void
        SimFlowTerm_InducedAirInletNodeName (const SimFlowTerm_InducedAirInletNodeName_type& x);

        void
        SimFlowTerm_InducedAirInletNodeName (const SimFlowTerm_InducedAirInletNodeName_optional& x);

        void
        SimFlowTerm_InducedAirInletNodeName (::std::auto_ptr< SimFlowTerm_InducedAirInletNodeName_type > p);

        // SimFlowTerm_HotWaterInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_HotWaterInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HotWaterInletNodeName_type > SimFlowTerm_HotWaterInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HotWaterInletNodeName_type, char > SimFlowTerm_HotWaterInletNodeName_traits;

        const SimFlowTerm_HotWaterInletNodeName_optional&
        SimFlowTerm_HotWaterInletNodeName () const;

        SimFlowTerm_HotWaterInletNodeName_optional&
        SimFlowTerm_HotWaterInletNodeName ();

        void
        SimFlowTerm_HotWaterInletNodeName (const SimFlowTerm_HotWaterInletNodeName_type& x);

        void
        SimFlowTerm_HotWaterInletNodeName (const SimFlowTerm_HotWaterInletNodeName_optional& x);

        void
        SimFlowTerm_HotWaterInletNodeName (::std::auto_ptr< SimFlowTerm_HotWaterInletNodeName_type > p);

        // SimFlowTerm_ColdWaterInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_ColdWaterInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ColdWaterInletNodeName_type > SimFlowTerm_ColdWaterInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ColdWaterInletNodeName_type, char > SimFlowTerm_ColdWaterInletNodeName_traits;

        const SimFlowTerm_ColdWaterInletNodeName_optional&
        SimFlowTerm_ColdWaterInletNodeName () const;

        SimFlowTerm_ColdWaterInletNodeName_optional&
        SimFlowTerm_ColdWaterInletNodeName ();

        void
        SimFlowTerm_ColdWaterInletNodeName (const SimFlowTerm_ColdWaterInletNodeName_type& x);

        void
        SimFlowTerm_ColdWaterInletNodeName (const SimFlowTerm_ColdWaterInletNodeName_optional& x);

        void
        SimFlowTerm_ColdWaterInletNodeName (::std::auto_ptr< SimFlowTerm_ColdWaterInletNodeName_type > p);

        // SimFlowTerm_MaxHotWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxHotWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxHotWaterFlowRate_type > SimFlowTerm_MaxHotWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxHotWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxHotWaterFlowRate_traits;

        const SimFlowTerm_MaxHotWaterFlowRate_optional&
        SimFlowTerm_MaxHotWaterFlowRate () const;

        SimFlowTerm_MaxHotWaterFlowRate_optional&
        SimFlowTerm_MaxHotWaterFlowRate ();

        void
        SimFlowTerm_MaxHotWaterFlowRate (const SimFlowTerm_MaxHotWaterFlowRate_type& x);

        void
        SimFlowTerm_MaxHotWaterFlowRate (const SimFlowTerm_MaxHotWaterFlowRate_optional& x);

        // SimFlowTerm_MinHotWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MinHotWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MinHotWaterFlowRate_type > SimFlowTerm_MinHotWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MinHotWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MinHotWaterFlowRate_traits;

        const SimFlowTerm_MinHotWaterFlowRate_optional&
        SimFlowTerm_MinHotWaterFlowRate () const;

        SimFlowTerm_MinHotWaterFlowRate_optional&
        SimFlowTerm_MinHotWaterFlowRate ();

        void
        SimFlowTerm_MinHotWaterFlowRate (const SimFlowTerm_MinHotWaterFlowRate_type& x);

        void
        SimFlowTerm_MinHotWaterFlowRate (const SimFlowTerm_MinHotWaterFlowRate_optional& x);

        // SimFlowTerm_CoolingCoilName
        //
        typedef ::xml_schema::idref SimFlowTerm_CoolingCoilName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_CoolingCoilName_type > SimFlowTerm_CoolingCoilName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_CoolingCoilName_type, char > SimFlowTerm_CoolingCoilName_traits;

        const SimFlowTerm_CoolingCoilName_optional&
        SimFlowTerm_CoolingCoilName () const;

        SimFlowTerm_CoolingCoilName_optional&
        SimFlowTerm_CoolingCoilName ();

        void
        SimFlowTerm_CoolingCoilName (const SimFlowTerm_CoolingCoilName_type& x);

        void
        SimFlowTerm_CoolingCoilName (const SimFlowTerm_CoolingCoilName_optional& x);

        void
        SimFlowTerm_CoolingCoilName (::std::auto_ptr< SimFlowTerm_CoolingCoilName_type > p);

        // SimFlowTerm_MaxColdWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxColdWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxColdWaterFlowRate_type > SimFlowTerm_MaxColdWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxColdWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxColdWaterFlowRate_traits;

        const SimFlowTerm_MaxColdWaterFlowRate_optional&
        SimFlowTerm_MaxColdWaterFlowRate () const;

        SimFlowTerm_MaxColdWaterFlowRate_optional&
        SimFlowTerm_MaxColdWaterFlowRate ();

        void
        SimFlowTerm_MaxColdWaterFlowRate (const SimFlowTerm_MaxColdWaterFlowRate_type& x);

        void
        SimFlowTerm_MaxColdWaterFlowRate (const SimFlowTerm_MaxColdWaterFlowRate_optional& x);

        // SimFlowTerm_MinColdWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MinColdWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MinColdWaterFlowRate_type > SimFlowTerm_MinColdWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MinColdWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MinColdWaterFlowRate_traits;

        const SimFlowTerm_MinColdWaterFlowRate_optional&
        SimFlowTerm_MinColdWaterFlowRate () const;

        SimFlowTerm_MinColdWaterFlowRate_optional&
        SimFlowTerm_MinColdWaterFlowRate ();

        void
        SimFlowTerm_MinColdWaterFlowRate (const SimFlowTerm_MinColdWaterFlowRate_type& x);

        void
        SimFlowTerm_MinColdWaterFlowRate (const SimFlowTerm_MinColdWaterFlowRate_optional& x);

        // SimFlowTerm_CoolingConvergTol
        //
        typedef ::xml_schema::double_ SimFlowTerm_CoolingConvergTol_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_CoolingConvergTol_type > SimFlowTerm_CoolingConvergTol_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_CoolingConvergTol_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_CoolingConvergTol_traits;

        const SimFlowTerm_CoolingConvergTol_optional&
        SimFlowTerm_CoolingConvergTol () const;

        SimFlowTerm_CoolingConvergTol_optional&
        SimFlowTerm_CoolingConvergTol ();

        void
        SimFlowTerm_CoolingConvergTol (const SimFlowTerm_CoolingConvergTol_type& x);

        void
        SimFlowTerm_CoolingConvergTol (const SimFlowTerm_CoolingConvergTol_optional& x);

        // Constructors.
        //
        SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction ();

        SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction (const RefId_type&);

        SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction (const ::xercesc::DOMElement& e,
                                                                  ::xml_schema::flags f = 0,
                                                                  ::xml_schema::container* c = 0);

        SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction (const SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction& x,
                                                                  ::xml_schema::flags f = 0,
                                                                  ::xml_schema::container* c = 0);

        virtual SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction&
        operator= (const SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction& x);

        virtual 
        ~SimFlowTerminal_AirTerminal_CAV_PassiveFourPipeInduction ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowTerm_Name_optional SimFlowTerm_Name_;
        SimFlowTerm_CoolingCoilObjType_optional SimFlowTerm_CoolingCoilObjType_;
        SimFlowTerm_HeatingCoilObjType_optional SimFlowTerm_HeatingCoilObjType_;
        SimFlowTerm_AvailSchedName_optional SimFlowTerm_AvailSchedName_;
        SimFlowTerm_AirOutNodeName_optional SimFlowTerm_AirOutNodeName_;
        SimFlowTerm_HeatingCoilName_optional SimFlowTerm_HeatingCoilName_;
        SimFlowTerm_HeatingConvergTol_optional SimFlowTerm_HeatingConvergTol_;
        SimFlowTerm_SupplyAirInletNodeName_optional SimFlowTerm_SupplyAirInletNodeName_;
        SimFlowTerm_ZoneMixerName_optional SimFlowTerm_ZoneMixerName_;
        SimFlowTerm_MaxTotalAirFlowRate_optional SimFlowTerm_MaxTotalAirFlowRate_;
        SimFlowTerm_InductionRatio_optional SimFlowTerm_InductionRatio_;
        SimFlowTerm_InducedAirInletNodeName_optional SimFlowTerm_InducedAirInletNodeName_;
        SimFlowTerm_HotWaterInletNodeName_optional SimFlowTerm_HotWaterInletNodeName_;
        SimFlowTerm_ColdWaterInletNodeName_optional SimFlowTerm_ColdWaterInletNodeName_;
        SimFlowTerm_MaxHotWaterFlowRate_optional SimFlowTerm_MaxHotWaterFlowRate_;
        SimFlowTerm_MinHotWaterFlowRate_optional SimFlowTerm_MinHotWaterFlowRate_;
        SimFlowTerm_CoolingCoilName_optional SimFlowTerm_CoolingCoilName_;
        SimFlowTerm_MaxColdWaterFlowRate_optional SimFlowTerm_MaxColdWaterFlowRate_;
        SimFlowTerm_MinColdWaterFlowRate_optional SimFlowTerm_MinColdWaterFlowRate_;
        SimFlowTerm_CoolingConvergTol_optional SimFlowTerm_CoolingConvergTol_;
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

#endif // SIM_FLOW_TERMINAL_AIR_TERMINAL_CAV_PASSIVE_FOUR_PIPE_INDUCTION_HXX
