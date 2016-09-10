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

#ifndef SIM_FLOW_COMPOUND_EQMT_UNITARY_ZONE_EQMT_ENERGY_RECOVERY_VENTILATOR_HXX
#define SIM_FLOW_COMPOUND_EQMT_UNITARY_ZONE_EQMT_ENERGY_RECOVERY_VENTILATOR_HXX

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
      class SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator;
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

#include "simflowcompoundeqmt_unitaryzoneeqmt.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator: public ::schema::simxml::MepModel::SimFlowCompoundEqmt_UnitaryZoneEqmt
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

        // SimFlowCompEqmt_AvailMngrListName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_AvailMngrListName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AvailMngrListName_type > SimFlowCompEqmt_AvailMngrListName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AvailMngrListName_type, char > SimFlowCompEqmt_AvailMngrListName_traits;

        const SimFlowCompEqmt_AvailMngrListName_optional&
        SimFlowCompEqmt_AvailMngrListName () const;

        SimFlowCompEqmt_AvailMngrListName_optional&
        SimFlowCompEqmt_AvailMngrListName ();

        void
        SimFlowCompEqmt_AvailMngrListName (const SimFlowCompEqmt_AvailMngrListName_type& x);

        void
        SimFlowCompEqmt_AvailMngrListName (const SimFlowCompEqmt_AvailMngrListName_optional& x);

        void
        SimFlowCompEqmt_AvailMngrListName (::std::auto_ptr< SimFlowCompEqmt_AvailMngrListName_type > p);

        // SimFlowCompEqmt_HeatExchngName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_HeatExchngName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_HeatExchngName_type > SimFlowCompEqmt_HeatExchngName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_HeatExchngName_type, char > SimFlowCompEqmt_HeatExchngName_traits;

        const SimFlowCompEqmt_HeatExchngName_optional&
        SimFlowCompEqmt_HeatExchngName () const;

        SimFlowCompEqmt_HeatExchngName_optional&
        SimFlowCompEqmt_HeatExchngName ();

        void
        SimFlowCompEqmt_HeatExchngName (const SimFlowCompEqmt_HeatExchngName_type& x);

        void
        SimFlowCompEqmt_HeatExchngName (const SimFlowCompEqmt_HeatExchngName_optional& x);

        void
        SimFlowCompEqmt_HeatExchngName (::std::auto_ptr< SimFlowCompEqmt_HeatExchngName_type > p);

        // SimFlowCompEqmt_SupplyAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_SupplyAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SupplyAirFlowRate_type > SimFlowCompEqmt_SupplyAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SupplyAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_SupplyAirFlowRate_traits;

        const SimFlowCompEqmt_SupplyAirFlowRate_optional&
        SimFlowCompEqmt_SupplyAirFlowRate () const;

        SimFlowCompEqmt_SupplyAirFlowRate_optional&
        SimFlowCompEqmt_SupplyAirFlowRate ();

        void
        SimFlowCompEqmt_SupplyAirFlowRate (const SimFlowCompEqmt_SupplyAirFlowRate_type& x);

        void
        SimFlowCompEqmt_SupplyAirFlowRate (const SimFlowCompEqmt_SupplyAirFlowRate_optional& x);

        // SimFlowCompEqmt_ExhAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_ExhAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_ExhAirFlowRate_type > SimFlowCompEqmt_ExhAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_ExhAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_ExhAirFlowRate_traits;

        const SimFlowCompEqmt_ExhAirFlowRate_optional&
        SimFlowCompEqmt_ExhAirFlowRate () const;

        SimFlowCompEqmt_ExhAirFlowRate_optional&
        SimFlowCompEqmt_ExhAirFlowRate ();

        void
        SimFlowCompEqmt_ExhAirFlowRate (const SimFlowCompEqmt_ExhAirFlowRate_type& x);

        void
        SimFlowCompEqmt_ExhAirFlowRate (const SimFlowCompEqmt_ExhAirFlowRate_optional& x);

        // SimFlowCompEqmt_ExhAirFanName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_ExhAirFanName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_ExhAirFanName_type > SimFlowCompEqmt_ExhAirFanName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_ExhAirFanName_type, char > SimFlowCompEqmt_ExhAirFanName_traits;

        const SimFlowCompEqmt_ExhAirFanName_optional&
        SimFlowCompEqmt_ExhAirFanName () const;

        SimFlowCompEqmt_ExhAirFanName_optional&
        SimFlowCompEqmt_ExhAirFanName ();

        void
        SimFlowCompEqmt_ExhAirFanName (const SimFlowCompEqmt_ExhAirFanName_type& x);

        void
        SimFlowCompEqmt_ExhAirFanName (const SimFlowCompEqmt_ExhAirFanName_optional& x);

        void
        SimFlowCompEqmt_ExhAirFanName (::std::auto_ptr< SimFlowCompEqmt_ExhAirFanName_type > p);

        // SimFlowCompEqmt_CntllerName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_CntllerName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_CntllerName_type > SimFlowCompEqmt_CntllerName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_CntllerName_type, char > SimFlowCompEqmt_CntllerName_traits;

        const SimFlowCompEqmt_CntllerName_optional&
        SimFlowCompEqmt_CntllerName () const;

        SimFlowCompEqmt_CntllerName_optional&
        SimFlowCompEqmt_CntllerName ();

        void
        SimFlowCompEqmt_CntllerName (const SimFlowCompEqmt_CntllerName_type& x);

        void
        SimFlowCompEqmt_CntllerName (const SimFlowCompEqmt_CntllerName_optional& x);

        void
        SimFlowCompEqmt_CntllerName (::std::auto_ptr< SimFlowCompEqmt_CntllerName_type > p);

        // SimFlowCompEqmt_VentRatePerUnitFloorArea
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_VentRatePerUnitFloorArea_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_VentRatePerUnitFloorArea_type > SimFlowCompEqmt_VentRatePerUnitFloorArea_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_VentRatePerUnitFloorArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_VentRatePerUnitFloorArea_traits;

        const SimFlowCompEqmt_VentRatePerUnitFloorArea_optional&
        SimFlowCompEqmt_VentRatePerUnitFloorArea () const;

        SimFlowCompEqmt_VentRatePerUnitFloorArea_optional&
        SimFlowCompEqmt_VentRatePerUnitFloorArea ();

        void
        SimFlowCompEqmt_VentRatePerUnitFloorArea (const SimFlowCompEqmt_VentRatePerUnitFloorArea_type& x);

        void
        SimFlowCompEqmt_VentRatePerUnitFloorArea (const SimFlowCompEqmt_VentRatePerUnitFloorArea_optional& x);

        // SimFlowCompEqmt_VentRatePerOccupant
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_VentRatePerOccupant_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_VentRatePerOccupant_type > SimFlowCompEqmt_VentRatePerOccupant_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_VentRatePerOccupant_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_VentRatePerOccupant_traits;

        const SimFlowCompEqmt_VentRatePerOccupant_optional&
        SimFlowCompEqmt_VentRatePerOccupant () const;

        SimFlowCompEqmt_VentRatePerOccupant_optional&
        SimFlowCompEqmt_VentRatePerOccupant ();

        void
        SimFlowCompEqmt_VentRatePerOccupant (const SimFlowCompEqmt_VentRatePerOccupant_type& x);

        void
        SimFlowCompEqmt_VentRatePerOccupant (const SimFlowCompEqmt_VentRatePerOccupant_optional& x);

        // ZoneHVAC_EnergyRecoveryVentControl_Name
        //
        typedef ::xml_schema::string ZoneHVAC_EnergyRecoveryVentControl_Name_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_Name_type > ZoneHVAC_EnergyRecoveryVentControl_Name_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_Name_type, char > ZoneHVAC_EnergyRecoveryVentControl_Name_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_Name_optional&
        ZoneHVAC_EnergyRecoveryVentControl_Name () const;

        ZoneHVAC_EnergyRecoveryVentControl_Name_optional&
        ZoneHVAC_EnergyRecoveryVentControl_Name ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_Name (const ZoneHVAC_EnergyRecoveryVentControl_Name_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_Name (const ZoneHVAC_EnergyRecoveryVentControl_Name_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_Name (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_Name_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit
        //
        typedef ::xml_schema::double_ ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_type > ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit () const;

        ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit (const ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit (const ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_optional& x);

        // ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit
        //
        typedef ::xml_schema::double_ ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_type > ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit () const;

        ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit (const ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit (const ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_optional& x);

        // ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit
        //
        typedef ::xml_schema::double_ ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_type > ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit () const;

        ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit (const ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit (const ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_optional& x);

        // ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit
        //
        typedef ::xml_schema::double_ ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_type > ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit () const;

        ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit (const ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit (const ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_optional& x);

        // ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName
        //
        typedef ::xml_schema::idref ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_type > ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_type, char > ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_optional&
        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName () const;

        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_optional&
        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName (const ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName (const ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit
        //
        typedef ::xml_schema::string ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_type > ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_type, char > ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit () const;

        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit (const ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit (const ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit
        //
        typedef ::xml_schema::string ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_type > ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_type, char > ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit () const;

        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_optional&
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit (const ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit (const ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName
        //
        typedef ::xml_schema::idref ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_type > ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_type, char > ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_optional&
        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName () const;

        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_optional&
        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName (const ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName (const ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag
        //
        typedef ::xml_schema::string ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_type > ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_type, char > ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_optional&
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag () const;

        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_optional&
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag (const ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag (const ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName
        //
        typedef ::xml_schema::idref ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_type > ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_type, char > ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_optional&
        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName () const;

        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_optional&
        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName (const ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName (const ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_type > p);

        // ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio
        //
        typedef ::xml_schema::double_ ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_type > ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_optional&
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio () const;

        ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_optional&
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio (const ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio (const ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_optional& x);

        // ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio
        //
        typedef ::xml_schema::string ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_type;
        typedef ::xsd::cxx::tree::optional< ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_type > ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_optional;
        typedef ::xsd::cxx::tree::traits< ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_type, char > ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_traits;

        const ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_optional&
        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio () const;

        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_optional&
        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio ();

        void
        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio (const ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_type& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio (const ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_optional& x);

        void
        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio (::std::auto_ptr< ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_type > p);

        // Constructors.
        //
        SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator ();

        SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator (const RefId_type&);

        SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator (const ::xercesc::DOMElement& e,
                                                                      ::xml_schema::flags f = 0,
                                                                      ::xml_schema::container* c = 0);

        SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator (const SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator& x,
                                                                      ::xml_schema::flags f = 0,
                                                                      ::xml_schema::container* c = 0);

        virtual SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator&
        operator= (const SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator& x);

        virtual 
        ~SimFlowCompoundEqmt_UnitaryZoneEqmt_EnergyRecoveryVentilator ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowCompEqmt_Name_optional SimFlowCompEqmt_Name_;
        SimFlowCompEqmt_AvailSchedName_optional SimFlowCompEqmt_AvailSchedName_;
        SimFlowCompEqmt_SupplyAirFanName_optional SimFlowCompEqmt_SupplyAirFanName_;
        SimFlowCompEqmt_AvailMngrListName_optional SimFlowCompEqmt_AvailMngrListName_;
        SimFlowCompEqmt_HeatExchngName_optional SimFlowCompEqmt_HeatExchngName_;
        SimFlowCompEqmt_SupplyAirFlowRate_optional SimFlowCompEqmt_SupplyAirFlowRate_;
        SimFlowCompEqmt_ExhAirFlowRate_optional SimFlowCompEqmt_ExhAirFlowRate_;
        SimFlowCompEqmt_ExhAirFanName_optional SimFlowCompEqmt_ExhAirFanName_;
        SimFlowCompEqmt_CntllerName_optional SimFlowCompEqmt_CntllerName_;
        SimFlowCompEqmt_VentRatePerUnitFloorArea_optional SimFlowCompEqmt_VentRatePerUnitFloorArea_;
        SimFlowCompEqmt_VentRatePerOccupant_optional SimFlowCompEqmt_VentRatePerOccupant_;
        ZoneHVAC_EnergyRecoveryVentControl_Name_optional ZoneHVAC_EnergyRecoveryVentControl_Name_;
        ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_optional ZoneHVAC_EnergyRecoveryVentControl_TempHighLimit_;
        ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_optional ZoneHVAC_EnergyRecoveryVentControl_TempLowLimit_;
        ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_optional ZoneHVAC_EnergyRecoveryVentControl_EnthalpyHighLimit_;
        ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_optional ZoneHVAC_EnergyRecoveryVentControl_DewpointTempLimit_;
        ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_optional ZoneHVAC_EnergyRecoveryVentControl_ElecEnthalpyLimitCurveName_;
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_optional ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirTempLimit_;
        ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_optional ZoneHVAC_EnergyRecoveryVentControl_ExhaustAirEnthalpyLimit_;
        ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_optional ZoneHVAC_EnergyRecoveryVentControl_TimeOfDayEconFlowCntlSchedName_;
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_optional ZoneHVAC_EnergyRecoveryVentControl_HighHumidCntlFlag_;
        ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_optional ZoneHVAC_EnergyRecoveryVentControl_HumidistatCntlZoneName_;
        ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_optional ZoneHVAC_EnergyRecoveryVentControl_HighHumidOutdrAirFlowRatio_;
        ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_optional ZoneHVAC_EnergyRecoveryVentControl_CntlHighIndrHumidBasedOnOutdrHumidRatio_;
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

#endif // SIM_FLOW_COMPOUND_EQMT_UNITARY_ZONE_EQMT_ENERGY_RECOVERY_VENTILATOR_HXX
