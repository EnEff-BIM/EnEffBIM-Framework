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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_DX_COIL_AIR_HEATING_DXSINGLE_SPEED_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_DX_COIL_AIR_HEATING_DXSINGLE_SPEED_HXX

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
      class SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed;
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

#include "simflowenergytransfer_heatingcoildx.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed: public ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatingCoilDX
      {
        public:
        // SimFlowEnergyTrans_AvailSchedName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_AvailSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AvailSchedName_type > SimFlowEnergyTrans_AvailSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AvailSchedName_type, char > SimFlowEnergyTrans_AvailSchedName_traits;

        const SimFlowEnergyTrans_AvailSchedName_optional&
        SimFlowEnergyTrans_AvailSchedName () const;

        SimFlowEnergyTrans_AvailSchedName_optional&
        SimFlowEnergyTrans_AvailSchedName ();

        void
        SimFlowEnergyTrans_AvailSchedName (const SimFlowEnergyTrans_AvailSchedName_type& x);

        void
        SimFlowEnergyTrans_AvailSchedName (const SimFlowEnergyTrans_AvailSchedName_optional& x);

        void
        SimFlowEnergyTrans_AvailSchedName (::std::auto_ptr< SimFlowEnergyTrans_AvailSchedName_type > p);

        // SimFlowEnergyTrans_AirInNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_AirInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AirInNodeName_type > SimFlowEnergyTrans_AirInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AirInNodeName_type, char > SimFlowEnergyTrans_AirInNodeName_traits;

        const SimFlowEnergyTrans_AirInNodeName_optional&
        SimFlowEnergyTrans_AirInNodeName () const;

        SimFlowEnergyTrans_AirInNodeName_optional&
        SimFlowEnergyTrans_AirInNodeName ();

        void
        SimFlowEnergyTrans_AirInNodeName (const SimFlowEnergyTrans_AirInNodeName_type& x);

        void
        SimFlowEnergyTrans_AirInNodeName (const SimFlowEnergyTrans_AirInNodeName_optional& x);

        void
        SimFlowEnergyTrans_AirInNodeName (::std::auto_ptr< SimFlowEnergyTrans_AirInNodeName_type > p);

        // SimFlowEnergyTrans_AirOutNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_AirOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AirOutNodeName_type > SimFlowEnergyTrans_AirOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AirOutNodeName_type, char > SimFlowEnergyTrans_AirOutNodeName_traits;

        const SimFlowEnergyTrans_AirOutNodeName_optional&
        SimFlowEnergyTrans_AirOutNodeName () const;

        SimFlowEnergyTrans_AirOutNodeName_optional&
        SimFlowEnergyTrans_AirOutNodeName ();

        void
        SimFlowEnergyTrans_AirOutNodeName (const SimFlowEnergyTrans_AirOutNodeName_type& x);

        void
        SimFlowEnergyTrans_AirOutNodeName (const SimFlowEnergyTrans_AirOutNodeName_optional& x);

        void
        SimFlowEnergyTrans_AirOutNodeName (::std::auto_ptr< SimFlowEnergyTrans_AirOutNodeName_type > p);

        // SimFlowEnergyTrans_RatedCOP
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedCOP_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedCOP_type > SimFlowEnergyTrans_RatedCOP_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedCOP_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedCOP_traits;

        const SimFlowEnergyTrans_RatedCOP_optional&
        SimFlowEnergyTrans_RatedCOP () const;

        SimFlowEnergyTrans_RatedCOP_optional&
        SimFlowEnergyTrans_RatedCOP ();

        void
        SimFlowEnergyTrans_RatedCOP (const SimFlowEnergyTrans_RatedCOP_type& x);

        void
        SimFlowEnergyTrans_RatedCOP (const SimFlowEnergyTrans_RatedCOP_optional& x);

        // SimFlowEnergyTrans_RatedAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedAirFlowRate_type > SimFlowEnergyTrans_RatedAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedAirFlowRate_traits;

        const SimFlowEnergyTrans_RatedAirFlowRate_optional&
        SimFlowEnergyTrans_RatedAirFlowRate () const;

        SimFlowEnergyTrans_RatedAirFlowRate_optional&
        SimFlowEnergyTrans_RatedAirFlowRate ();

        void
        SimFlowEnergyTrans_RatedAirFlowRate (const SimFlowEnergyTrans_RatedAirFlowRate_type& x);

        void
        SimFlowEnergyTrans_RatedAirFlowRate (const SimFlowEnergyTrans_RatedAirFlowRate_optional& x);

        // SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_type > SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_traits;

        const SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_optional&
        SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate () const;

        SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_optional&
        SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate ();

        void
        SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate (const SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_type& x);

        void
        SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate (const SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_optional& x);

        // SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_type > SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_type, char > SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_traits;

        const SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_optional&
        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName () const;

        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_optional&
        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName ();

        void
        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName (const SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_type& x);

        void
        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName (const SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_optional& x);

        void
        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName (::std::auto_ptr< SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_type > p);

        // SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_type > SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_type, char > SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_traits;

        const SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_optional&
        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName () const;

        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_optional&
        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName ();

        void
        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName (const SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_type& x);

        void
        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName (const SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_optional& x);

        void
        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName (::std::auto_ptr< SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_type > p);

        // SimFlowEnergyTrans_PartLoadFractCorrelCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_PartLoadFractCorrelCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PartLoadFractCorrelCurveName_type > SimFlowEnergyTrans_PartLoadFractCorrelCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PartLoadFractCorrelCurveName_type, char > SimFlowEnergyTrans_PartLoadFractCorrelCurveName_traits;

        const SimFlowEnergyTrans_PartLoadFractCorrelCurveName_optional&
        SimFlowEnergyTrans_PartLoadFractCorrelCurveName () const;

        SimFlowEnergyTrans_PartLoadFractCorrelCurveName_optional&
        SimFlowEnergyTrans_PartLoadFractCorrelCurveName ();

        void
        SimFlowEnergyTrans_PartLoadFractCorrelCurveName (const SimFlowEnergyTrans_PartLoadFractCorrelCurveName_type& x);

        void
        SimFlowEnergyTrans_PartLoadFractCorrelCurveName (const SimFlowEnergyTrans_PartLoadFractCorrelCurveName_optional& x);

        void
        SimFlowEnergyTrans_PartLoadFractCorrelCurveName (::std::auto_ptr< SimFlowEnergyTrans_PartLoadFractCorrelCurveName_type > p);

        // SimFlowEnergyTrans_CrankcaseHeatCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_CrankcaseHeatCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CrankcaseHeatCap_type > SimFlowEnergyTrans_CrankcaseHeatCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CrankcaseHeatCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_CrankcaseHeatCap_traits;

        const SimFlowEnergyTrans_CrankcaseHeatCap_optional&
        SimFlowEnergyTrans_CrankcaseHeatCap () const;

        SimFlowEnergyTrans_CrankcaseHeatCap_optional&
        SimFlowEnergyTrans_CrankcaseHeatCap ();

        void
        SimFlowEnergyTrans_CrankcaseHeatCap (const SimFlowEnergyTrans_CrankcaseHeatCap_type& x);

        void
        SimFlowEnergyTrans_CrankcaseHeatCap (const SimFlowEnergyTrans_CrankcaseHeatCap_optional& x);

        // SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_type > SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_traits;

        const SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_optional&
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp () const;

        SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_optional&
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp ();

        void
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp (const SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_type& x);

        void
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp (const SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_optional& x);

        // SimFlowEnergyTrans_RatedTotalHeatingCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedTotalHeatingCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedTotalHeatingCap_type > SimFlowEnergyTrans_RatedTotalHeatingCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedTotalHeatingCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedTotalHeatingCap_traits;

        const SimFlowEnergyTrans_RatedTotalHeatingCap_optional&
        SimFlowEnergyTrans_RatedTotalHeatingCap () const;

        SimFlowEnergyTrans_RatedTotalHeatingCap_optional&
        SimFlowEnergyTrans_RatedTotalHeatingCap ();

        void
        SimFlowEnergyTrans_RatedTotalHeatingCap (const SimFlowEnergyTrans_RatedTotalHeatingCap_type& x);

        void
        SimFlowEnergyTrans_RatedTotalHeatingCap (const SimFlowEnergyTrans_RatedTotalHeatingCap_optional& x);

        // SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_type > SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_type, char > SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_traits;

        const SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_optional&
        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName () const;

        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_optional&
        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName ();

        void
        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName (const SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_type& x);

        void
        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName (const SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_optional& x);

        void
        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName (::std::auto_ptr< SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_type > p);

        // SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_type > SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_type, char > SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_traits;

        const SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_optional&
        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName () const;

        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_optional&
        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName ();

        void
        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName (const SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_type& x);

        void
        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName (const SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_optional& x);

        void
        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName (::std::auto_ptr< SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_type > p);

        // SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_type > SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_type, char > SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_traits;

        const SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_optional&
        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName () const;

        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_optional&
        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName ();

        void
        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName (const SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_type& x);

        void
        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName (const SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_optional& x);

        void
        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName (::std::auto_ptr< SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_type > p);

        // SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_type > SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_traits;

        const SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_optional&
        SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp () const;

        SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_optional&
        SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp ();

        void
        SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp (const SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_type& x);

        void
        SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp (const SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_optional& x);

        // SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_type > SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_traits;

        const SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_optional&
        SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress () const;

        SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_optional&
        SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress ();

        void
        SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress (const SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_type& x);

        void
        SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress (const SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_optional& x);

        // SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_type > SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_traits;

        const SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_optional&
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp () const;

        SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_optional&
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp ();

        void
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp (const SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_type& x);

        void
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp (const SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_optional& x);

        // SimFlowEnergyTrans_DefrostStrategy
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_DefrostStrategy_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DefrostStrategy_type > SimFlowEnergyTrans_DefrostStrategy_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DefrostStrategy_type, char > SimFlowEnergyTrans_DefrostStrategy_traits;

        const SimFlowEnergyTrans_DefrostStrategy_optional&
        SimFlowEnergyTrans_DefrostStrategy () const;

        SimFlowEnergyTrans_DefrostStrategy_optional&
        SimFlowEnergyTrans_DefrostStrategy ();

        void
        SimFlowEnergyTrans_DefrostStrategy (const SimFlowEnergyTrans_DefrostStrategy_type& x);

        void
        SimFlowEnergyTrans_DefrostStrategy (const SimFlowEnergyTrans_DefrostStrategy_optional& x);

        void
        SimFlowEnergyTrans_DefrostStrategy (::std::auto_ptr< SimFlowEnergyTrans_DefrostStrategy_type > p);

        // SimFlowEnergyTrans_DefrostCntl
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_DefrostCntl_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DefrostCntl_type > SimFlowEnergyTrans_DefrostCntl_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DefrostCntl_type, char > SimFlowEnergyTrans_DefrostCntl_traits;

        const SimFlowEnergyTrans_DefrostCntl_optional&
        SimFlowEnergyTrans_DefrostCntl () const;

        SimFlowEnergyTrans_DefrostCntl_optional&
        SimFlowEnergyTrans_DefrostCntl ();

        void
        SimFlowEnergyTrans_DefrostCntl (const SimFlowEnergyTrans_DefrostCntl_type& x);

        void
        SimFlowEnergyTrans_DefrostCntl (const SimFlowEnergyTrans_DefrostCntl_optional& x);

        void
        SimFlowEnergyTrans_DefrostCntl (::std::auto_ptr< SimFlowEnergyTrans_DefrostCntl_type > p);

        // SimFlowEnergyTrans_DefrostTimePeriodFract
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_DefrostTimePeriodFract_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DefrostTimePeriodFract_type > SimFlowEnergyTrans_DefrostTimePeriodFract_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DefrostTimePeriodFract_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_DefrostTimePeriodFract_traits;

        const SimFlowEnergyTrans_DefrostTimePeriodFract_optional&
        SimFlowEnergyTrans_DefrostTimePeriodFract () const;

        SimFlowEnergyTrans_DefrostTimePeriodFract_optional&
        SimFlowEnergyTrans_DefrostTimePeriodFract ();

        void
        SimFlowEnergyTrans_DefrostTimePeriodFract (const SimFlowEnergyTrans_DefrostTimePeriodFract_type& x);

        void
        SimFlowEnergyTrans_DefrostTimePeriodFract (const SimFlowEnergyTrans_DefrostTimePeriodFract_optional& x);

        // SimFlowEnergyTrans_ResistDefrostHeatCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_ResistDefrostHeatCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_ResistDefrostHeatCap_type > SimFlowEnergyTrans_ResistDefrostHeatCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_ResistDefrostHeatCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_ResistDefrostHeatCap_traits;

        const SimFlowEnergyTrans_ResistDefrostHeatCap_optional&
        SimFlowEnergyTrans_ResistDefrostHeatCap () const;

        SimFlowEnergyTrans_ResistDefrostHeatCap_optional&
        SimFlowEnergyTrans_ResistDefrostHeatCap ();

        void
        SimFlowEnergyTrans_ResistDefrostHeatCap (const SimFlowEnergyTrans_ResistDefrostHeatCap_type& x);

        void
        SimFlowEnergyTrans_ResistDefrostHeatCap (const SimFlowEnergyTrans_ResistDefrostHeatCap_optional& x);

        // SimFlowEnergyTrans_RegionnumberforcalculatingHSPF
        //
        typedef ::xml_schema::int_ SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_type > SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_type, char > SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_traits;

        const SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_optional&
        SimFlowEnergyTrans_RegionnumberforcalculatingHSPF () const;

        SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_optional&
        SimFlowEnergyTrans_RegionnumberforcalculatingHSPF ();

        void
        SimFlowEnergyTrans_RegionnumberforcalculatingHSPF (const SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_type& x);

        void
        SimFlowEnergyTrans_RegionnumberforcalculatingHSPF (const SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_optional& x);

        // SimFlowEnergyTrans_EvapAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_EvapAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_EvapAirInletNodeName_type > SimFlowEnergyTrans_EvapAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_EvapAirInletNodeName_type, char > SimFlowEnergyTrans_EvapAirInletNodeName_traits;

        const SimFlowEnergyTrans_EvapAirInletNodeName_optional&
        SimFlowEnergyTrans_EvapAirInletNodeName () const;

        SimFlowEnergyTrans_EvapAirInletNodeName_optional&
        SimFlowEnergyTrans_EvapAirInletNodeName ();

        void
        SimFlowEnergyTrans_EvapAirInletNodeName (const SimFlowEnergyTrans_EvapAirInletNodeName_type& x);

        void
        SimFlowEnergyTrans_EvapAirInletNodeName (const SimFlowEnergyTrans_EvapAirInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_EvapAirInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_EvapAirInletNodeName_type > p);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed (const RefId_type&);

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed (const ::xercesc::DOMElement& e,
                                                                         ::xml_schema::flags f = 0,
                                                                         ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed (const SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed& x,
                                                                         ::xml_schema::flags f = 0,
                                                                         ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed&
        operator= (const SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDXSingleSpeed ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_AvailSchedName_optional SimFlowEnergyTrans_AvailSchedName_;
        SimFlowEnergyTrans_AirInNodeName_optional SimFlowEnergyTrans_AirInNodeName_;
        SimFlowEnergyTrans_AirOutNodeName_optional SimFlowEnergyTrans_AirOutNodeName_;
        SimFlowEnergyTrans_RatedCOP_optional SimFlowEnergyTrans_RatedCOP_;
        SimFlowEnergyTrans_RatedAirFlowRate_optional SimFlowEnergyTrans_RatedAirFlowRate_;
        SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_optional SimFlowEnergyTrans_RatedEvapFanPwrPerVolFlowRate_;
        SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_optional SimFlowEnergyTrans_EnergyInputRatioFuncTempCurveName_;
        SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_optional SimFlowEnergyTrans_EnergyInputRatioFuncFlowFractCurveName_;
        SimFlowEnergyTrans_PartLoadFractCorrelCurveName_optional SimFlowEnergyTrans_PartLoadFractCorrelCurveName_;
        SimFlowEnergyTrans_CrankcaseHeatCap_optional SimFlowEnergyTrans_CrankcaseHeatCap_;
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_optional SimFlowEnergyTrans_MaxOutdrDryBulbTempForCrankcaseHeatOp_;
        SimFlowEnergyTrans_RatedTotalHeatingCap_optional SimFlowEnergyTrans_RatedTotalHeatingCap_;
        SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_optional SimFlowEnergyTrans_TotalHeatingCapFuncTempCurveName_;
        SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_optional SimFlowEnergyTrans_TotalHeatingCapFuncFlowFractCurveName_;
        SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_optional SimFlowEnergyTrans_DefrostEnergyInputRatioFuncTempCurveName_;
        SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_optional SimFlowEnergyTrans_MinOutdrDryBulbTempForCompOp_;
        SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_optional SimFlowEnergyTrans_OutdoorDry_BulbTemptoTurnOnCompress_;
        SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_optional SimFlowEnergyTrans_MaxOutdrDryBulbTempForDefrostOp_;
        SimFlowEnergyTrans_DefrostStrategy_optional SimFlowEnergyTrans_DefrostStrategy_;
        SimFlowEnergyTrans_DefrostCntl_optional SimFlowEnergyTrans_DefrostCntl_;
        SimFlowEnergyTrans_DefrostTimePeriodFract_optional SimFlowEnergyTrans_DefrostTimePeriodFract_;
        SimFlowEnergyTrans_ResistDefrostHeatCap_optional SimFlowEnergyTrans_ResistDefrostHeatCap_;
        SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_optional SimFlowEnergyTrans_RegionnumberforcalculatingHSPF_;
        SimFlowEnergyTrans_EvapAirInletNodeName_optional SimFlowEnergyTrans_EvapAirInletNodeName_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_DX_COIL_AIR_HEATING_DXSINGLE_SPEED_HXX