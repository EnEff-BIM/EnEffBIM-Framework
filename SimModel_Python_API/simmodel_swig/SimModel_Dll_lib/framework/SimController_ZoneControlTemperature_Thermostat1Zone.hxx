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

#ifndef SIM_CONTROLLER_ZONE_CONTROL_TEMPERATURE_THERMOSTAT1ZONE_HXX
#define SIM_CONTROLLER_ZONE_CONTROL_TEMPERATURE_THERMOSTAT1ZONE_HXX

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
      class SimController_ZoneControlTemperature_Thermostat1Zone;
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

#include "simcontroller_zonecontroltemperature.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimCntrl_Control_1_4_ObjectType;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimController_ZoneControlTemperature_Thermostat1Zone: public ::schema::simxml::MepModel::SimController_ZoneControlTemperature
      {
        public:
        // SimCntrl_ControlTypeScheduleName
        //
        typedef ::xml_schema::idref SimCntrl_ControlTypeScheduleName_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_ControlTypeScheduleName_type > SimCntrl_ControlTypeScheduleName_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_ControlTypeScheduleName_type, char > SimCntrl_ControlTypeScheduleName_traits;

        const SimCntrl_ControlTypeScheduleName_optional&
        SimCntrl_ControlTypeScheduleName () const;

        SimCntrl_ControlTypeScheduleName_optional&
        SimCntrl_ControlTypeScheduleName ();

        void
        SimCntrl_ControlTypeScheduleName (const SimCntrl_ControlTypeScheduleName_type& x);

        void
        SimCntrl_ControlTypeScheduleName (const SimCntrl_ControlTypeScheduleName_optional& x);

        void
        SimCntrl_ControlTypeScheduleName (::std::auto_ptr< SimCntrl_ControlTypeScheduleName_type > p);

        // SimCntrl_Control_1_4_ObjectType
        //
        typedef ::schema::simxml::MepModel::SimCntrl_Control_1_4_ObjectType SimCntrl_Control_1_4_ObjectType_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_Control_1_4_ObjectType_type > SimCntrl_Control_1_4_ObjectType_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_Control_1_4_ObjectType_type, char > SimCntrl_Control_1_4_ObjectType_traits;

        const SimCntrl_Control_1_4_ObjectType_optional&
        SimCntrl_Control_1_4_ObjectType () const;

        SimCntrl_Control_1_4_ObjectType_optional&
        SimCntrl_Control_1_4_ObjectType ();

        void
        SimCntrl_Control_1_4_ObjectType (const SimCntrl_Control_1_4_ObjectType_type& x);

        void
        SimCntrl_Control_1_4_ObjectType (const SimCntrl_Control_1_4_ObjectType_optional& x);

        void
        SimCntrl_Control_1_4_ObjectType (::std::auto_ptr< SimCntrl_Control_1_4_ObjectType_type > p);

        // SimCntrl_Control_1_4_Name
        //
        typedef ::xml_schema::idrefs SimCntrl_Control_1_4_Name_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_Control_1_4_Name_type > SimCntrl_Control_1_4_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_Control_1_4_Name_type, char > SimCntrl_Control_1_4_Name_traits;

        const SimCntrl_Control_1_4_Name_optional&
        SimCntrl_Control_1_4_Name () const;

        SimCntrl_Control_1_4_Name_optional&
        SimCntrl_Control_1_4_Name ();

        void
        SimCntrl_Control_1_4_Name (const SimCntrl_Control_1_4_Name_type& x);

        void
        SimCntrl_Control_1_4_Name (const SimCntrl_Control_1_4_Name_optional& x);

        void
        SimCntrl_Control_1_4_Name (::std::auto_ptr< SimCntrl_Control_1_4_Name_type > p);

        // ZoneCont_Tstat_OperativeTemp_ThermostatName
        //
        typedef ::xml_schema::idref ZoneCont_Tstat_OperativeTemp_ThermostatName_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_OperativeTemp_ThermostatName_type > ZoneCont_Tstat_OperativeTemp_ThermostatName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_OperativeTemp_ThermostatName_type, char > ZoneCont_Tstat_OperativeTemp_ThermostatName_traits;

        const ZoneCont_Tstat_OperativeTemp_ThermostatName_optional&
        ZoneCont_Tstat_OperativeTemp_ThermostatName () const;

        ZoneCont_Tstat_OperativeTemp_ThermostatName_optional&
        ZoneCont_Tstat_OperativeTemp_ThermostatName ();

        void
        ZoneCont_Tstat_OperativeTemp_ThermostatName (const ZoneCont_Tstat_OperativeTemp_ThermostatName_type& x);

        void
        ZoneCont_Tstat_OperativeTemp_ThermostatName (const ZoneCont_Tstat_OperativeTemp_ThermostatName_optional& x);

        void
        ZoneCont_Tstat_OperativeTemp_ThermostatName (::std::auto_ptr< ZoneCont_Tstat_OperativeTemp_ThermostatName_type > p);

        // ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode
        //
        typedef ::xml_schema::string ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_type > ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_type, char > ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_traits;

        const ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_optional&
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode () const;

        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_optional&
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode ();

        void
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode (const ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_type& x);

        void
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode (const ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_optional& x);

        void
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode (::std::auto_ptr< ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_type > p);

        // ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction
        //
        typedef ::xml_schema::double_ ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_type > ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_traits;

        const ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_optional&
        ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction () const;

        ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_optional&
        ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction ();

        void
        ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction (const ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_type& x);

        void
        ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction (const ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_optional& x);

        // ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName
        //
        typedef ::xml_schema::idref ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_type > ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_type, char > ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_traits;

        const ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_optional&
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName () const;

        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_optional&
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName ();

        void
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName (const ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_type& x);

        void
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName (const ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_optional& x);

        void
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName (::std::auto_ptr< ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_type > p);

        // ZoneCont_Tstat_TempAndHumid_ThermostatName
        //
        typedef ::xml_schema::idref ZoneCont_Tstat_TempAndHumid_ThermostatName_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_ThermostatName_type > ZoneCont_Tstat_TempAndHumid_ThermostatName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_ThermostatName_type, char > ZoneCont_Tstat_TempAndHumid_ThermostatName_traits;

        const ZoneCont_Tstat_TempAndHumid_ThermostatName_optional&
        ZoneCont_Tstat_TempAndHumid_ThermostatName () const;

        ZoneCont_Tstat_TempAndHumid_ThermostatName_optional&
        ZoneCont_Tstat_TempAndHumid_ThermostatName ();

        void
        ZoneCont_Tstat_TempAndHumid_ThermostatName (const ZoneCont_Tstat_TempAndHumid_ThermostatName_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_ThermostatName (const ZoneCont_Tstat_TempAndHumid_ThermostatName_optional& x);

        void
        ZoneCont_Tstat_TempAndHumid_ThermostatName (::std::auto_ptr< ZoneCont_Tstat_TempAndHumid_ThermostatName_type > p);

        // ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName
        //
        typedef ::xml_schema::idref ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_type > ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_type, char > ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_traits;

        const ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_optional&
        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName () const;

        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_optional&
        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName ();

        void
        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName (const ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName (const ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_optional& x);

        void
        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName (::std::auto_ptr< ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_type > p);

        // ZoneCont_Tstat_TempAndHumid_DehumidCntlType
        //
        typedef ::xml_schema::string ZoneCont_Tstat_TempAndHumid_DehumidCntlType_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_DehumidCntlType_type > ZoneCont_Tstat_TempAndHumid_DehumidCntlType_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_DehumidCntlType_type, char > ZoneCont_Tstat_TempAndHumid_DehumidCntlType_traits;

        const ZoneCont_Tstat_TempAndHumid_DehumidCntlType_optional&
        ZoneCont_Tstat_TempAndHumid_DehumidCntlType () const;

        ZoneCont_Tstat_TempAndHumid_DehumidCntlType_optional&
        ZoneCont_Tstat_TempAndHumid_DehumidCntlType ();

        void
        ZoneCont_Tstat_TempAndHumid_DehumidCntlType (const ZoneCont_Tstat_TempAndHumid_DehumidCntlType_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_DehumidCntlType (const ZoneCont_Tstat_TempAndHumid_DehumidCntlType_optional& x);

        void
        ZoneCont_Tstat_TempAndHumid_DehumidCntlType (::std::auto_ptr< ZoneCont_Tstat_TempAndHumid_DehumidCntlType_type > p);

        // ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod
        //
        typedef ::xml_schema::string ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_type > ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_type, char > ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_traits;

        const ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod () const;

        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod ();

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod (const ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod (const ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_optional& x);

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod (::std::auto_ptr< ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_type > p);

        // ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange
        //
        typedef ::xml_schema::double_ ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_type > ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_traits;

        const ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange () const;

        ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange ();

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange (const ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange (const ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_optional& x);

        // ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName
        //
        typedef ::xml_schema::idref ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_type > ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_type, char > ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_traits;

        const ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName () const;

        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName ();

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName (const ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName (const ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_optional& x);

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName (::std::auto_ptr< ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_type > p);

        // ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio
        //
        typedef ::xml_schema::double_ ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_type;
        typedef ::xsd::cxx::tree::optional< ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_type > ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_optional;
        typedef ::xsd::cxx::tree::traits< ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_traits;

        const ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio () const;

        ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_optional&
        ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio ();

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio (const ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_type& x);

        void
        ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio (const ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_optional& x);

        // Constructors.
        //
        SimController_ZoneControlTemperature_Thermostat1Zone ();

        SimController_ZoneControlTemperature_Thermostat1Zone (const RefId_type&);

        SimController_ZoneControlTemperature_Thermostat1Zone (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f = 0,
                                                              ::xml_schema::container* c = 0);

        SimController_ZoneControlTemperature_Thermostat1Zone (const SimController_ZoneControlTemperature_Thermostat1Zone& x,
                                                              ::xml_schema::flags f = 0,
                                                              ::xml_schema::container* c = 0);

        virtual SimController_ZoneControlTemperature_Thermostat1Zone*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimController_ZoneControlTemperature_Thermostat1Zone&
        operator= (const SimController_ZoneControlTemperature_Thermostat1Zone& x);

        virtual 
        ~SimController_ZoneControlTemperature_Thermostat1Zone ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimCntrl_ControlTypeScheduleName_optional SimCntrl_ControlTypeScheduleName_;
        SimCntrl_Control_1_4_ObjectType_optional SimCntrl_Control_1_4_ObjectType_;
        SimCntrl_Control_1_4_Name_optional SimCntrl_Control_1_4_Name_;
        ZoneCont_Tstat_OperativeTemp_ThermostatName_optional ZoneCont_Tstat_OperativeTemp_ThermostatName_;
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_optional ZoneCont_Tstat_OperativeTemp_RadiativeFractionInputMode_;
        ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_optional ZoneCont_Tstat_OperativeTemp_FixedRadiativeFraction_;
        ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_optional ZoneCont_Tstat_OperativeTemp_RadiativeFractionScheduleName_;
        ZoneCont_Tstat_TempAndHumid_ThermostatName_optional ZoneCont_Tstat_TempAndHumid_ThermostatName_;
        ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_optional ZoneCont_Tstat_TempAndHumid_DehumidifyingRelativeHumiditySetpointScheduleName_;
        ZoneCont_Tstat_TempAndHumid_DehumidCntlType_optional ZoneCont_Tstat_TempAndHumid_DehumidCntlType_;
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_optional ZoneCont_Tstat_TempAndHumid_OvercoolRangeInputMethod_;
        ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_optional ZoneCont_Tstat_TempAndHumid_OvercoolConstantRange_;
        ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_optional ZoneCont_Tstat_TempAndHumid_OvercoolRangeSchedName_;
        ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_optional ZoneCont_Tstat_TempAndHumid_OvercoolCtrlRatio_;
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

#endif // SIM_CONTROLLER_ZONE_CONTROL_TEMPERATURE_THERMOSTAT1ZONE_HXX
