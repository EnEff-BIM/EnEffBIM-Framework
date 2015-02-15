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

#ifndef SIM_FLOW_TERMINAL_AIR_TERMINAL_VAV_REHEAT_VARIABLE_SPEED_FAN_HXX
#define SIM_FLOW_TERMINAL_AIR_TERMINAL_VAV_REHEAT_VARIABLE_SPEED_FAN_HXX

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
      class SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan;
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

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan: public ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal
      {
        public:
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

        // SimFlowTerm_AirInNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_AirInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_AirInNodeName_type > SimFlowTerm_AirInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_AirInNodeName_type, char > SimFlowTerm_AirInNodeName_traits;

        const SimFlowTerm_AirInNodeName_optional&
        SimFlowTerm_AirInNodeName () const;

        SimFlowTerm_AirInNodeName_optional&
        SimFlowTerm_AirInNodeName ();

        void
        SimFlowTerm_AirInNodeName (const SimFlowTerm_AirInNodeName_type& x);

        void
        SimFlowTerm_AirInNodeName (const SimFlowTerm_AirInNodeName_optional& x);

        void
        SimFlowTerm_AirInNodeName (::std::auto_ptr< SimFlowTerm_AirInNodeName_type > p);

        // SimFlowTerm_ZoneMinAirFlowFract
        //
        typedef ::xml_schema::double_ SimFlowTerm_ZoneMinAirFlowFract_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ZoneMinAirFlowFract_type > SimFlowTerm_ZoneMinAirFlowFract_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ZoneMinAirFlowFract_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ZoneMinAirFlowFract_traits;

        const SimFlowTerm_ZoneMinAirFlowFract_optional&
        SimFlowTerm_ZoneMinAirFlowFract () const;

        SimFlowTerm_ZoneMinAirFlowFract_optional&
        SimFlowTerm_ZoneMinAirFlowFract ();

        void
        SimFlowTerm_ZoneMinAirFlowFract (const SimFlowTerm_ZoneMinAirFlowFract_type& x);

        void
        SimFlowTerm_ZoneMinAirFlowFract (const SimFlowTerm_ZoneMinAirFlowFract_optional& x);

        // SimFlowTerm_HotWaterOrSteamInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_HotWaterOrSteamInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HotWaterOrSteamInletNodeName_type > SimFlowTerm_HotWaterOrSteamInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HotWaterOrSteamInletNodeName_type, char > SimFlowTerm_HotWaterOrSteamInletNodeName_traits;

        const SimFlowTerm_HotWaterOrSteamInletNodeName_optional&
        SimFlowTerm_HotWaterOrSteamInletNodeName () const;

        SimFlowTerm_HotWaterOrSteamInletNodeName_optional&
        SimFlowTerm_HotWaterOrSteamInletNodeName ();

        void
        SimFlowTerm_HotWaterOrSteamInletNodeName (const SimFlowTerm_HotWaterOrSteamInletNodeName_type& x);

        void
        SimFlowTerm_HotWaterOrSteamInletNodeName (const SimFlowTerm_HotWaterOrSteamInletNodeName_optional& x);

        void
        SimFlowTerm_HotWaterOrSteamInletNodeName (::std::auto_ptr< SimFlowTerm_HotWaterOrSteamInletNodeName_type > p);

        // SimFlowTerm_MaxHotWaterOrSteamFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxHotWaterOrSteamFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxHotWaterOrSteamFlowRate_type > SimFlowTerm_MaxHotWaterOrSteamFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxHotWaterOrSteamFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxHotWaterOrSteamFlowRate_traits;

        const SimFlowTerm_MaxHotWaterOrSteamFlowRate_optional&
        SimFlowTerm_MaxHotWaterOrSteamFlowRate () const;

        SimFlowTerm_MaxHotWaterOrSteamFlowRate_optional&
        SimFlowTerm_MaxHotWaterOrSteamFlowRate ();

        void
        SimFlowTerm_MaxHotWaterOrSteamFlowRate (const SimFlowTerm_MaxHotWaterOrSteamFlowRate_type& x);

        void
        SimFlowTerm_MaxHotWaterOrSteamFlowRate (const SimFlowTerm_MaxHotWaterOrSteamFlowRate_optional& x);

        // SimFlowTerm_MinHotWaterOrSteamFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MinHotWaterOrSteamFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MinHotWaterOrSteamFlowRate_type > SimFlowTerm_MinHotWaterOrSteamFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MinHotWaterOrSteamFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MinHotWaterOrSteamFlowRate_traits;

        const SimFlowTerm_MinHotWaterOrSteamFlowRate_optional&
        SimFlowTerm_MinHotWaterOrSteamFlowRate () const;

        SimFlowTerm_MinHotWaterOrSteamFlowRate_optional&
        SimFlowTerm_MinHotWaterOrSteamFlowRate ();

        void
        SimFlowTerm_MinHotWaterOrSteamFlowRate (const SimFlowTerm_MinHotWaterOrSteamFlowRate_type& x);

        void
        SimFlowTerm_MinHotWaterOrSteamFlowRate (const SimFlowTerm_MinHotWaterOrSteamFlowRate_optional& x);

        // SimFlowTerm_MaxCoolAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxCoolAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxCoolAirFlowRate_type > SimFlowTerm_MaxCoolAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxCoolAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxCoolAirFlowRate_traits;

        const SimFlowTerm_MaxCoolAirFlowRate_optional&
        SimFlowTerm_MaxCoolAirFlowRate () const;

        SimFlowTerm_MaxCoolAirFlowRate_optional&
        SimFlowTerm_MaxCoolAirFlowRate ();

        void
        SimFlowTerm_MaxCoolAirFlowRate (const SimFlowTerm_MaxCoolAirFlowRate_type& x);

        void
        SimFlowTerm_MaxCoolAirFlowRate (const SimFlowTerm_MaxCoolAirFlowRate_optional& x);

        // SimFlowTerm_MaxHeatingAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxHeatingAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxHeatingAirFlowRate_type > SimFlowTerm_MaxHeatingAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxHeatingAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxHeatingAirFlowRate_traits;

        const SimFlowTerm_MaxHeatingAirFlowRate_optional&
        SimFlowTerm_MaxHeatingAirFlowRate () const;

        SimFlowTerm_MaxHeatingAirFlowRate_optional&
        SimFlowTerm_MaxHeatingAirFlowRate ();

        void
        SimFlowTerm_MaxHeatingAirFlowRate (const SimFlowTerm_MaxHeatingAirFlowRate_type& x);

        void
        SimFlowTerm_MaxHeatingAirFlowRate (const SimFlowTerm_MaxHeatingAirFlowRate_optional& x);

        // SimFlowTerm_HeatingCoilAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_HeatingCoilAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HeatingCoilAirInletNodeName_type > SimFlowTerm_HeatingCoilAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HeatingCoilAirInletNodeName_type, char > SimFlowTerm_HeatingCoilAirInletNodeName_traits;

        const SimFlowTerm_HeatingCoilAirInletNodeName_optional&
        SimFlowTerm_HeatingCoilAirInletNodeName () const;

        SimFlowTerm_HeatingCoilAirInletNodeName_optional&
        SimFlowTerm_HeatingCoilAirInletNodeName ();

        void
        SimFlowTerm_HeatingCoilAirInletNodeName (const SimFlowTerm_HeatingCoilAirInletNodeName_type& x);

        void
        SimFlowTerm_HeatingCoilAirInletNodeName (const SimFlowTerm_HeatingCoilAirInletNodeName_optional& x);

        void
        SimFlowTerm_HeatingCoilAirInletNodeName (::std::auto_ptr< SimFlowTerm_HeatingCoilAirInletNodeName_type > p);

        // SimFlowTerm_FanObjType
        //
        typedef ::xml_schema::string SimFlowTerm_FanObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_FanObjType_type > SimFlowTerm_FanObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_FanObjType_type, char > SimFlowTerm_FanObjType_traits;

        const SimFlowTerm_FanObjType_optional&
        SimFlowTerm_FanObjType () const;

        SimFlowTerm_FanObjType_optional&
        SimFlowTerm_FanObjType ();

        void
        SimFlowTerm_FanObjType (const SimFlowTerm_FanObjType_type& x);

        void
        SimFlowTerm_FanObjType (const SimFlowTerm_FanObjType_optional& x);

        void
        SimFlowTerm_FanObjType (::std::auto_ptr< SimFlowTerm_FanObjType_type > p);

        // SimFlowTerm_FanName
        //
        typedef ::xml_schema::idref SimFlowTerm_FanName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_FanName_type > SimFlowTerm_FanName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_FanName_type, char > SimFlowTerm_FanName_traits;

        const SimFlowTerm_FanName_optional&
        SimFlowTerm_FanName () const;

        SimFlowTerm_FanName_optional&
        SimFlowTerm_FanName ();

        void
        SimFlowTerm_FanName (const SimFlowTerm_FanName_type& x);

        void
        SimFlowTerm_FanName (const SimFlowTerm_FanName_optional& x);

        void
        SimFlowTerm_FanName (::std::auto_ptr< SimFlowTerm_FanName_type > p);

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

        // Constructors.
        //
        SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan (const RefId_type&);

        SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan (const ::xercesc::DOMElement& e,
                                                                 ::xml_schema::flags f = 0,
                                                                 ::xml_schema::container* c = 0);

        SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan (const SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan& x,
                                                                 ::xml_schema::flags f = 0,
                                                                 ::xml_schema::container* c = 0);

        virtual SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan&
        operator= (const SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan& x);

        virtual 
        ~SimFlowTerminal_AirTerminal_VAV_Reheat_VariableSpeedFan ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowTerm_AvailSchedName_optional SimFlowTerm_AvailSchedName_;
        SimFlowTerm_AirOutNodeName_optional SimFlowTerm_AirOutNodeName_;
        SimFlowTerm_AirInNodeName_optional SimFlowTerm_AirInNodeName_;
        SimFlowTerm_ZoneMinAirFlowFract_optional SimFlowTerm_ZoneMinAirFlowFract_;
        SimFlowTerm_HotWaterOrSteamInletNodeName_optional SimFlowTerm_HotWaterOrSteamInletNodeName_;
        SimFlowTerm_MaxHotWaterOrSteamFlowRate_optional SimFlowTerm_MaxHotWaterOrSteamFlowRate_;
        SimFlowTerm_MinHotWaterOrSteamFlowRate_optional SimFlowTerm_MinHotWaterOrSteamFlowRate_;
        SimFlowTerm_MaxCoolAirFlowRate_optional SimFlowTerm_MaxCoolAirFlowRate_;
        SimFlowTerm_MaxHeatingAirFlowRate_optional SimFlowTerm_MaxHeatingAirFlowRate_;
        SimFlowTerm_HeatingCoilAirInletNodeName_optional SimFlowTerm_HeatingCoilAirInletNodeName_;
        SimFlowTerm_FanObjType_optional SimFlowTerm_FanObjType_;
        SimFlowTerm_FanName_optional SimFlowTerm_FanName_;
        SimFlowTerm_HeatingCoilObjType_optional SimFlowTerm_HeatingCoilObjType_;
        SimFlowTerm_HeatingCoilName_optional SimFlowTerm_HeatingCoilName_;
        SimFlowTerm_HeatingConvergTol_optional SimFlowTerm_HeatingConvergTol_;
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

#endif // SIM_FLOW_TERMINAL_AIR_TERMINAL_VAV_REHEAT_VARIABLE_SPEED_FAN_HXX
