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

#ifndef SIM_FLOW_COMPOUND_EQMT_VAV_SUBSYSTEMS_HXX
#define SIM_FLOW_COMPOUND_EQMT_VAV_SUBSYSTEMS_HXX

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
      class SimFlowCompoundEqmt_VavSubsystems;
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

#include "simflowcompoundeqmt.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowCompoundEqmt_VavSubsystems: public ::schema::simxml::MepModel::SimFlowCompoundEqmt
      {
        public:
        // SimFlowCompEqmt_Name
        //
        typedef ::xml_schema::string SimFlowCompEqmt_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_Name_type > SimFlowCompEqmt_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_Name_type, char > SimFlowCompEqmt_Name_traits;

        const SimFlowCompEqmt_Name_optional&
        SimFlowCompEqmt_Name () const;

        SimFlowCompEqmt_Name_optional&
        SimFlowCompEqmt_Name ();

        void
        SimFlowCompEqmt_Name (const SimFlowCompEqmt_Name_type& x);

        void
        SimFlowCompEqmt_Name (const SimFlowCompEqmt_Name_optional& x);

        void
        SimFlowCompEqmt_Name (::std::auto_ptr< SimFlowCompEqmt_Name_type > p);

        // SimFlowCompEqmt_AvailSchedName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_AvailSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AvailSchedName_type > SimFlowCompEqmt_AvailSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AvailSchedName_type, char > SimFlowCompEqmt_AvailSchedName_traits;

        const SimFlowCompEqmt_AvailSchedName_optional&
        SimFlowCompEqmt_AvailSchedName () const;

        SimFlowCompEqmt_AvailSchedName_optional&
        SimFlowCompEqmt_AvailSchedName ();

        void
        SimFlowCompEqmt_AvailSchedName (const SimFlowCompEqmt_AvailSchedName_type& x);

        void
        SimFlowCompEqmt_AvailSchedName (const SimFlowCompEqmt_AvailSchedName_optional& x);

        void
        SimFlowCompEqmt_AvailSchedName (::std::auto_ptr< SimFlowCompEqmt_AvailSchedName_type > p);

        // SimFlowCompEqmt_DehumidCntlType
        //
        typedef ::xml_schema::string SimFlowCompEqmt_DehumidCntlType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_DehumidCntlType_type > SimFlowCompEqmt_DehumidCntlType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_DehumidCntlType_type, char > SimFlowCompEqmt_DehumidCntlType_traits;

        const SimFlowCompEqmt_DehumidCntlType_optional&
        SimFlowCompEqmt_DehumidCntlType () const;

        SimFlowCompEqmt_DehumidCntlType_optional&
        SimFlowCompEqmt_DehumidCntlType ();

        void
        SimFlowCompEqmt_DehumidCntlType (const SimFlowCompEqmt_DehumidCntlType_type& x);

        void
        SimFlowCompEqmt_DehumidCntlType (const SimFlowCompEqmt_DehumidCntlType_optional& x);

        void
        SimFlowCompEqmt_DehumidCntlType (::std::auto_ptr< SimFlowCompEqmt_DehumidCntlType_type > p);

        // SimFlowCompEqmt_AirInNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_AirInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AirInNodeName_type > SimFlowCompEqmt_AirInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AirInNodeName_type, char > SimFlowCompEqmt_AirInNodeName_traits;

        const SimFlowCompEqmt_AirInNodeName_optional&
        SimFlowCompEqmt_AirInNodeName () const;

        SimFlowCompEqmt_AirInNodeName_optional&
        SimFlowCompEqmt_AirInNodeName ();

        void
        SimFlowCompEqmt_AirInNodeName (const SimFlowCompEqmt_AirInNodeName_type& x);

        void
        SimFlowCompEqmt_AirInNodeName (const SimFlowCompEqmt_AirInNodeName_optional& x);

        void
        SimFlowCompEqmt_AirInNodeName (::std::auto_ptr< SimFlowCompEqmt_AirInNodeName_type > p);

        // SimFlowCompEqmt_AirOutNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_AirOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AirOutNodeName_type > SimFlowCompEqmt_AirOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AirOutNodeName_type, char > SimFlowCompEqmt_AirOutNodeName_traits;

        const SimFlowCompEqmt_AirOutNodeName_optional&
        SimFlowCompEqmt_AirOutNodeName () const;

        SimFlowCompEqmt_AirOutNodeName_optional&
        SimFlowCompEqmt_AirOutNodeName ();

        void
        SimFlowCompEqmt_AirOutNodeName (const SimFlowCompEqmt_AirOutNodeName_type& x);

        void
        SimFlowCompEqmt_AirOutNodeName (const SimFlowCompEqmt_AirOutNodeName_optional& x);

        void
        SimFlowCompEqmt_AirOutNodeName (::std::auto_ptr< SimFlowCompEqmt_AirOutNodeName_type > p);

        // SimFlowCompEqmt_OutdoorAirMixerObjType
        //
        typedef ::xml_schema::string SimFlowCompEqmt_OutdoorAirMixerObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutdoorAirMixerObjType_type > SimFlowCompEqmt_OutdoorAirMixerObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutdoorAirMixerObjType_type, char > SimFlowCompEqmt_OutdoorAirMixerObjType_traits;

        const SimFlowCompEqmt_OutdoorAirMixerObjType_optional&
        SimFlowCompEqmt_OutdoorAirMixerObjType () const;

        SimFlowCompEqmt_OutdoorAirMixerObjType_optional&
        SimFlowCompEqmt_OutdoorAirMixerObjType ();

        void
        SimFlowCompEqmt_OutdoorAirMixerObjType (const SimFlowCompEqmt_OutdoorAirMixerObjType_type& x);

        void
        SimFlowCompEqmt_OutdoorAirMixerObjType (const SimFlowCompEqmt_OutdoorAirMixerObjType_optional& x);

        void
        SimFlowCompEqmt_OutdoorAirMixerObjType (::std::auto_ptr< SimFlowCompEqmt_OutdoorAirMixerObjType_type > p);

        // SimFlowCompEqmt_OutdrAirMixerName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_OutdrAirMixerName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutdrAirMixerName_type > SimFlowCompEqmt_OutdrAirMixerName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutdrAirMixerName_type, char > SimFlowCompEqmt_OutdrAirMixerName_traits;

        const SimFlowCompEqmt_OutdrAirMixerName_optional&
        SimFlowCompEqmt_OutdrAirMixerName () const;

        SimFlowCompEqmt_OutdrAirMixerName_optional&
        SimFlowCompEqmt_OutdrAirMixerName ();

        void
        SimFlowCompEqmt_OutdrAirMixerName (const SimFlowCompEqmt_OutdrAirMixerName_type& x);

        void
        SimFlowCompEqmt_OutdrAirMixerName (const SimFlowCompEqmt_OutdrAirMixerName_optional& x);

        void
        SimFlowCompEqmt_OutdrAirMixerName (::std::auto_ptr< SimFlowCompEqmt_OutdrAirMixerName_type > p);

        // SimFlowCompEqmt_SupplyAirFanObjType
        //
        typedef ::xml_schema::string SimFlowCompEqmt_SupplyAirFanObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SupplyAirFanObjType_type > SimFlowCompEqmt_SupplyAirFanObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SupplyAirFanObjType_type, char > SimFlowCompEqmt_SupplyAirFanObjType_traits;

        const SimFlowCompEqmt_SupplyAirFanObjType_optional&
        SimFlowCompEqmt_SupplyAirFanObjType () const;

        SimFlowCompEqmt_SupplyAirFanObjType_optional&
        SimFlowCompEqmt_SupplyAirFanObjType ();

        void
        SimFlowCompEqmt_SupplyAirFanObjType (const SimFlowCompEqmt_SupplyAirFanObjType_type& x);

        void
        SimFlowCompEqmt_SupplyAirFanObjType (const SimFlowCompEqmt_SupplyAirFanObjType_optional& x);

        void
        SimFlowCompEqmt_SupplyAirFanObjType (::std::auto_ptr< SimFlowCompEqmt_SupplyAirFanObjType_type > p);

        // SimFlowCompEqmt_SupplyAirFanName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_SupplyAirFanName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SupplyAirFanName_type > SimFlowCompEqmt_SupplyAirFanName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SupplyAirFanName_type, char > SimFlowCompEqmt_SupplyAirFanName_traits;

        const SimFlowCompEqmt_SupplyAirFanName_optional&
        SimFlowCompEqmt_SupplyAirFanName () const;

        SimFlowCompEqmt_SupplyAirFanName_optional&
        SimFlowCompEqmt_SupplyAirFanName ();

        void
        SimFlowCompEqmt_SupplyAirFanName (const SimFlowCompEqmt_SupplyAirFanName_type& x);

        void
        SimFlowCompEqmt_SupplyAirFanName (const SimFlowCompEqmt_SupplyAirFanName_optional& x);

        void
        SimFlowCompEqmt_SupplyAirFanName (::std::auto_ptr< SimFlowCompEqmt_SupplyAirFanName_type > p);

        // SimFlowCompEqmt_CoolingCoilObjType
        //
        typedef ::xml_schema::string SimFlowCompEqmt_CoolingCoilObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_CoolingCoilObjType_type > SimFlowCompEqmt_CoolingCoilObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_CoolingCoilObjType_type, char > SimFlowCompEqmt_CoolingCoilObjType_traits;

        const SimFlowCompEqmt_CoolingCoilObjType_optional&
        SimFlowCompEqmt_CoolingCoilObjType () const;

        SimFlowCompEqmt_CoolingCoilObjType_optional&
        SimFlowCompEqmt_CoolingCoilObjType ();

        void
        SimFlowCompEqmt_CoolingCoilObjType (const SimFlowCompEqmt_CoolingCoilObjType_type& x);

        void
        SimFlowCompEqmt_CoolingCoilObjType (const SimFlowCompEqmt_CoolingCoilObjType_optional& x);

        void
        SimFlowCompEqmt_CoolingCoilObjType (::std::auto_ptr< SimFlowCompEqmt_CoolingCoilObjType_type > p);

        // SimFlowCompEqmt_CoolingCoilName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_CoolingCoilName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_CoolingCoilName_type > SimFlowCompEqmt_CoolingCoilName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_CoolingCoilName_type, char > SimFlowCompEqmt_CoolingCoilName_traits;

        const SimFlowCompEqmt_CoolingCoilName_optional&
        SimFlowCompEqmt_CoolingCoilName () const;

        SimFlowCompEqmt_CoolingCoilName_optional&
        SimFlowCompEqmt_CoolingCoilName ();

        void
        SimFlowCompEqmt_CoolingCoilName (const SimFlowCompEqmt_CoolingCoilName_type& x);

        void
        SimFlowCompEqmt_CoolingCoilName (const SimFlowCompEqmt_CoolingCoilName_optional& x);

        void
        SimFlowCompEqmt_CoolingCoilName (::std::auto_ptr< SimFlowCompEqmt_CoolingCoilName_type > p);

        // SimFlowCompEqmt_HeatingCoilObjType
        //
        typedef ::xml_schema::string SimFlowCompEqmt_HeatingCoilObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_HeatingCoilObjType_type > SimFlowCompEqmt_HeatingCoilObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_HeatingCoilObjType_type, char > SimFlowCompEqmt_HeatingCoilObjType_traits;

        const SimFlowCompEqmt_HeatingCoilObjType_optional&
        SimFlowCompEqmt_HeatingCoilObjType () const;

        SimFlowCompEqmt_HeatingCoilObjType_optional&
        SimFlowCompEqmt_HeatingCoilObjType ();

        void
        SimFlowCompEqmt_HeatingCoilObjType (const SimFlowCompEqmt_HeatingCoilObjType_type& x);

        void
        SimFlowCompEqmt_HeatingCoilObjType (const SimFlowCompEqmt_HeatingCoilObjType_optional& x);

        void
        SimFlowCompEqmt_HeatingCoilObjType (::std::auto_ptr< SimFlowCompEqmt_HeatingCoilObjType_type > p);

        // SimFlowCompEqmt_HeatingCoilName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_HeatingCoilName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_HeatingCoilName_type > SimFlowCompEqmt_HeatingCoilName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_HeatingCoilName_type, char > SimFlowCompEqmt_HeatingCoilName_traits;

        const SimFlowCompEqmt_HeatingCoilName_optional&
        SimFlowCompEqmt_HeatingCoilName () const;

        SimFlowCompEqmt_HeatingCoilName_optional&
        SimFlowCompEqmt_HeatingCoilName ();

        void
        SimFlowCompEqmt_HeatingCoilName (const SimFlowCompEqmt_HeatingCoilName_type& x);

        void
        SimFlowCompEqmt_HeatingCoilName (const SimFlowCompEqmt_HeatingCoilName_optional& x);

        void
        SimFlowCompEqmt_HeatingCoilName (::std::auto_ptr< SimFlowCompEqmt_HeatingCoilName_type > p);

        // SimFlowCompEqmt_SupplyAirFanOperatModeSchedName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_type > SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_type, char > SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_traits;

        const SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_optional&
        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName () const;

        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_optional&
        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName ();

        void
        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName (const SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_type& x);

        void
        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName (const SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_optional& x);

        void
        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName (::std::auto_ptr< SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_type > p);

        // SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_type > SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_traits;

        const SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_optional&
        SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp () const;

        SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_optional&
        SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp ();

        void
        SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp (const SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_type& x);

        void
        SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp (const SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_optional& x);

        // SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_type > SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_traits;

        const SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_optional&
        SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp () const;

        SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_optional&
        SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp ();

        void
        SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp (const SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_type& x);

        void
        SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp (const SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_optional& x);

        // SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_type > SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_traits;

        const SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_optional&
        SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded () const;

        SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_optional&
        SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded ();

        void
        SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded (const SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_type& x);

        void
        SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded (const SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_optional& x);

        // SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_type > SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_traits;

        const SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_optional&
        SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp () const;

        SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_optional&
        SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp ();

        void
        SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp (const SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_type& x);

        void
        SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp (const SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_optional& x);

        // SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_type > SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_traits;

        const SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_optional&
        SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp () const;

        SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_optional&
        SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp ();

        void
        SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp (const SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_type& x);

        void
        SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp (const SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_optional& x);

        // SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_type > SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_traits;

        const SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_optional&
        SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded () const;

        SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_optional&
        SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded ();

        void
        SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded (const SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_type& x);

        void
        SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded (const SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_optional& x);

        // SimFlowCompEqmt_OutdrAirFlowRateMultSchedName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_type > SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_type, char > SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_traits;

        const SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_optional&
        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName () const;

        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_optional&
        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName ();

        void
        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName (const SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_type& x);

        void
        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName (const SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_optional& x);

        void
        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName (::std::auto_ptr< SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_type > p);

        // SimFlowCompEqmt_BypassDuctMixerNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_BypassDuctMixerNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_BypassDuctMixerNodeName_type > SimFlowCompEqmt_BypassDuctMixerNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_BypassDuctMixerNodeName_type, char > SimFlowCompEqmt_BypassDuctMixerNodeName_traits;

        const SimFlowCompEqmt_BypassDuctMixerNodeName_optional&
        SimFlowCompEqmt_BypassDuctMixerNodeName () const;

        SimFlowCompEqmt_BypassDuctMixerNodeName_optional&
        SimFlowCompEqmt_BypassDuctMixerNodeName ();

        void
        SimFlowCompEqmt_BypassDuctMixerNodeName (const SimFlowCompEqmt_BypassDuctMixerNodeName_type& x);

        void
        SimFlowCompEqmt_BypassDuctMixerNodeName (const SimFlowCompEqmt_BypassDuctMixerNodeName_optional& x);

        void
        SimFlowCompEqmt_BypassDuctMixerNodeName (::std::auto_ptr< SimFlowCompEqmt_BypassDuctMixerNodeName_type > p);

        // SimFlowCompEqmt_BypassDuctSplitterNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_BypassDuctSplitterNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_BypassDuctSplitterNodeName_type > SimFlowCompEqmt_BypassDuctSplitterNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_BypassDuctSplitterNodeName_type, char > SimFlowCompEqmt_BypassDuctSplitterNodeName_traits;

        const SimFlowCompEqmt_BypassDuctSplitterNodeName_optional&
        SimFlowCompEqmt_BypassDuctSplitterNodeName () const;

        SimFlowCompEqmt_BypassDuctSplitterNodeName_optional&
        SimFlowCompEqmt_BypassDuctSplitterNodeName ();

        void
        SimFlowCompEqmt_BypassDuctSplitterNodeName (const SimFlowCompEqmt_BypassDuctSplitterNodeName_type& x);

        void
        SimFlowCompEqmt_BypassDuctSplitterNodeName (const SimFlowCompEqmt_BypassDuctSplitterNodeName_optional& x);

        void
        SimFlowCompEqmt_BypassDuctSplitterNodeName (::std::auto_ptr< SimFlowCompEqmt_BypassDuctSplitterNodeName_type > p);

        // SimFlowCompEqmt_SupplyAirFanPlacement
        //
        typedef ::xml_schema::string SimFlowCompEqmt_SupplyAirFanPlacement_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SupplyAirFanPlacement_type > SimFlowCompEqmt_SupplyAirFanPlacement_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SupplyAirFanPlacement_type, char > SimFlowCompEqmt_SupplyAirFanPlacement_traits;

        const SimFlowCompEqmt_SupplyAirFanPlacement_optional&
        SimFlowCompEqmt_SupplyAirFanPlacement () const;

        SimFlowCompEqmt_SupplyAirFanPlacement_optional&
        SimFlowCompEqmt_SupplyAirFanPlacement ();

        void
        SimFlowCompEqmt_SupplyAirFanPlacement (const SimFlowCompEqmt_SupplyAirFanPlacement_type& x);

        void
        SimFlowCompEqmt_SupplyAirFanPlacement (const SimFlowCompEqmt_SupplyAirFanPlacement_optional& x);

        void
        SimFlowCompEqmt_SupplyAirFanPlacement (::std::auto_ptr< SimFlowCompEqmt_SupplyAirFanPlacement_type > p);

        // SimFlowCompEqmt_PriorityCntlMode
        //
        typedef ::xml_schema::string SimFlowCompEqmt_PriorityCntlMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_PriorityCntlMode_type > SimFlowCompEqmt_PriorityCntlMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_PriorityCntlMode_type, char > SimFlowCompEqmt_PriorityCntlMode_traits;

        const SimFlowCompEqmt_PriorityCntlMode_optional&
        SimFlowCompEqmt_PriorityCntlMode () const;

        SimFlowCompEqmt_PriorityCntlMode_optional&
        SimFlowCompEqmt_PriorityCntlMode ();

        void
        SimFlowCompEqmt_PriorityCntlMode (const SimFlowCompEqmt_PriorityCntlMode_type& x);

        void
        SimFlowCompEqmt_PriorityCntlMode (const SimFlowCompEqmt_PriorityCntlMode_optional& x);

        void
        SimFlowCompEqmt_PriorityCntlMode (::std::auto_ptr< SimFlowCompEqmt_PriorityCntlMode_type > p);

        // SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_type > SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_traits;

        const SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_optional&
        SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp () const;

        SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_optional&
        SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp ();

        void
        SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp (const SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_type& x);

        void
        SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp (const SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_optional& x);

        // SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_type > SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_traits;

        const SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_optional&
        SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp () const;

        SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_optional&
        SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp ();

        void
        SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp (const SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_type& x);

        void
        SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp (const SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_optional& x);

        // Constructors.
        //
        SimFlowCompoundEqmt_VavSubsystems ();

        SimFlowCompoundEqmt_VavSubsystems (const RefId_type&);

        SimFlowCompoundEqmt_VavSubsystems (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f = 0,
                                           ::xml_schema::container* c = 0);

        SimFlowCompoundEqmt_VavSubsystems (const SimFlowCompoundEqmt_VavSubsystems& x,
                                           ::xml_schema::flags f = 0,
                                           ::xml_schema::container* c = 0);

        virtual SimFlowCompoundEqmt_VavSubsystems*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowCompoundEqmt_VavSubsystems&
        operator= (const SimFlowCompoundEqmt_VavSubsystems& x);

        virtual 
        ~SimFlowCompoundEqmt_VavSubsystems ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowCompEqmt_Name_optional SimFlowCompEqmt_Name_;
        SimFlowCompEqmt_AvailSchedName_optional SimFlowCompEqmt_AvailSchedName_;
        SimFlowCompEqmt_DehumidCntlType_optional SimFlowCompEqmt_DehumidCntlType_;
        SimFlowCompEqmt_AirInNodeName_optional SimFlowCompEqmt_AirInNodeName_;
        SimFlowCompEqmt_AirOutNodeName_optional SimFlowCompEqmt_AirOutNodeName_;
        SimFlowCompEqmt_OutdoorAirMixerObjType_optional SimFlowCompEqmt_OutdoorAirMixerObjType_;
        SimFlowCompEqmt_OutdrAirMixerName_optional SimFlowCompEqmt_OutdrAirMixerName_;
        SimFlowCompEqmt_SupplyAirFanObjType_optional SimFlowCompEqmt_SupplyAirFanObjType_;
        SimFlowCompEqmt_SupplyAirFanName_optional SimFlowCompEqmt_SupplyAirFanName_;
        SimFlowCompEqmt_CoolingCoilObjType_optional SimFlowCompEqmt_CoolingCoilObjType_;
        SimFlowCompEqmt_CoolingCoilName_optional SimFlowCompEqmt_CoolingCoilName_;
        SimFlowCompEqmt_HeatingCoilObjType_optional SimFlowCompEqmt_HeatingCoilObjType_;
        SimFlowCompEqmt_HeatingCoilName_optional SimFlowCompEqmt_HeatingCoilName_;
        SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_optional SimFlowCompEqmt_SupplyAirFanOperatModeSchedName_;
        SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_optional SimFlowCompEqmt_OutdrAirFlowRateDuringCoolingOp_;
        SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_optional SimFlowCompEqmt_OutdrAirFlowRateDuringHeatingOp_;
        SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_optional SimFlowCompEqmt_OutdrAirFlowRateWhenNoCoolingOrHeatingNeeded_;
        SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_optional SimFlowCompEqmt_SysAirFlowRateDuringCoolingOp_;
        SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_optional SimFlowCompEqmt_SysAirFlowRateDuringHeatingOp_;
        SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_optional SimFlowCompEqmt_SysAirFlowRateWhenNoCoolingOrHeatingNeeded_;
        SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_optional SimFlowCompEqmt_OutdrAirFlowRateMultSchedName_;
        SimFlowCompEqmt_BypassDuctMixerNodeName_optional SimFlowCompEqmt_BypassDuctMixerNodeName_;
        SimFlowCompEqmt_BypassDuctSplitterNodeName_optional SimFlowCompEqmt_BypassDuctSplitterNodeName_;
        SimFlowCompEqmt_SupplyAirFanPlacement_optional SimFlowCompEqmt_SupplyAirFanPlacement_;
        SimFlowCompEqmt_PriorityCntlMode_optional SimFlowCompEqmt_PriorityCntlMode_;
        SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_optional SimFlowCompEqmt_MinOutletAirTempDuringCoolingOp_;
        SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_optional SimFlowCompEqmt_MaxOutletAirTempDuringHeatingOp_;
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

#endif // SIM_FLOW_COMPOUND_EQMT_VAV_SUBSYSTEMS_HXX
