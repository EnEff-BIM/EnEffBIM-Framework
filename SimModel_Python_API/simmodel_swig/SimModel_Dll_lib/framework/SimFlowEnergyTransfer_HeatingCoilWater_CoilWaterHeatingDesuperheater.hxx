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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_WATER_COIL_WATER_HEATING_DESUPERHEATER_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_WATER_COIL_WATER_HEATING_DESUPERHEATER_HXX

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
      class SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater;
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

#include "simflowenergytransfer_heatingcoilwater.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_HeatingCoilWater
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

        // SimFlowEnergyTrans_WaterInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_WaterInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_WaterInletNodeName_type > SimFlowEnergyTrans_WaterInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_WaterInletNodeName_type, char > SimFlowEnergyTrans_WaterInletNodeName_traits;

        const SimFlowEnergyTrans_WaterInletNodeName_optional&
        SimFlowEnergyTrans_WaterInletNodeName () const;

        SimFlowEnergyTrans_WaterInletNodeName_optional&
        SimFlowEnergyTrans_WaterInletNodeName ();

        void
        SimFlowEnergyTrans_WaterInletNodeName (const SimFlowEnergyTrans_WaterInletNodeName_type& x);

        void
        SimFlowEnergyTrans_WaterInletNodeName (const SimFlowEnergyTrans_WaterInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_WaterInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_WaterInletNodeName_type > p);

        // SimFlowEnergyTrans_WaterOutletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_WaterOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_WaterOutletNodeName_type > SimFlowEnergyTrans_WaterOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_WaterOutletNodeName_type, char > SimFlowEnergyTrans_WaterOutletNodeName_traits;

        const SimFlowEnergyTrans_WaterOutletNodeName_optional&
        SimFlowEnergyTrans_WaterOutletNodeName () const;

        SimFlowEnergyTrans_WaterOutletNodeName_optional&
        SimFlowEnergyTrans_WaterOutletNodeName ();

        void
        SimFlowEnergyTrans_WaterOutletNodeName (const SimFlowEnergyTrans_WaterOutletNodeName_type& x);

        void
        SimFlowEnergyTrans_WaterOutletNodeName (const SimFlowEnergyTrans_WaterOutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_WaterOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_WaterOutletNodeName_type > p);

        // SimFlowEnergyTrans_RatedInletWaterTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedInletWaterTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedInletWaterTemp_type > SimFlowEnergyTrans_RatedInletWaterTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedInletWaterTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedInletWaterTemp_traits;

        const SimFlowEnergyTrans_RatedInletWaterTemp_optional&
        SimFlowEnergyTrans_RatedInletWaterTemp () const;

        SimFlowEnergyTrans_RatedInletWaterTemp_optional&
        SimFlowEnergyTrans_RatedInletWaterTemp ();

        void
        SimFlowEnergyTrans_RatedInletWaterTemp (const SimFlowEnergyTrans_RatedInletWaterTemp_type& x);

        void
        SimFlowEnergyTrans_RatedInletWaterTemp (const SimFlowEnergyTrans_RatedInletWaterTemp_optional& x);

        // SimFlowEnergyTrans_HeatingSrcObjType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_HeatingSrcObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatingSrcObjType_type > SimFlowEnergyTrans_HeatingSrcObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatingSrcObjType_type, char > SimFlowEnergyTrans_HeatingSrcObjType_traits;

        const SimFlowEnergyTrans_HeatingSrcObjType_optional&
        SimFlowEnergyTrans_HeatingSrcObjType () const;

        SimFlowEnergyTrans_HeatingSrcObjType_optional&
        SimFlowEnergyTrans_HeatingSrcObjType ();

        void
        SimFlowEnergyTrans_HeatingSrcObjType (const SimFlowEnergyTrans_HeatingSrcObjType_type& x);

        void
        SimFlowEnergyTrans_HeatingSrcObjType (const SimFlowEnergyTrans_HeatingSrcObjType_optional& x);

        void
        SimFlowEnergyTrans_HeatingSrcObjType (::std::auto_ptr< SimFlowEnergyTrans_HeatingSrcObjType_type > p);

        // SimFlowEnergyTrans_HeatingSrcName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_HeatingSrcName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatingSrcName_type > SimFlowEnergyTrans_HeatingSrcName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatingSrcName_type, char > SimFlowEnergyTrans_HeatingSrcName_traits;

        const SimFlowEnergyTrans_HeatingSrcName_optional&
        SimFlowEnergyTrans_HeatingSrcName () const;

        SimFlowEnergyTrans_HeatingSrcName_optional&
        SimFlowEnergyTrans_HeatingSrcName ();

        void
        SimFlowEnergyTrans_HeatingSrcName (const SimFlowEnergyTrans_HeatingSrcName_type& x);

        void
        SimFlowEnergyTrans_HeatingSrcName (const SimFlowEnergyTrans_HeatingSrcName_optional& x);

        void
        SimFlowEnergyTrans_HeatingSrcName (::std::auto_ptr< SimFlowEnergyTrans_HeatingSrcName_type > p);

        // SimFlowEnergyTrans_SetpointTempSchedName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_SetpointTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SetpointTempSchedName_type > SimFlowEnergyTrans_SetpointTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SetpointTempSchedName_type, char > SimFlowEnergyTrans_SetpointTempSchedName_traits;

        const SimFlowEnergyTrans_SetpointTempSchedName_optional&
        SimFlowEnergyTrans_SetpointTempSchedName () const;

        SimFlowEnergyTrans_SetpointTempSchedName_optional&
        SimFlowEnergyTrans_SetpointTempSchedName ();

        void
        SimFlowEnergyTrans_SetpointTempSchedName (const SimFlowEnergyTrans_SetpointTempSchedName_type& x);

        void
        SimFlowEnergyTrans_SetpointTempSchedName (const SimFlowEnergyTrans_SetpointTempSchedName_optional& x);

        void
        SimFlowEnergyTrans_SetpointTempSchedName (::std::auto_ptr< SimFlowEnergyTrans_SetpointTempSchedName_type > p);

        // SimFlowEnergyTrans_DeadBandTempDiff
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_DeadBandTempDiff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DeadBandTempDiff_type > SimFlowEnergyTrans_DeadBandTempDiff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DeadBandTempDiff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_DeadBandTempDiff_traits;

        const SimFlowEnergyTrans_DeadBandTempDiff_optional&
        SimFlowEnergyTrans_DeadBandTempDiff () const;

        SimFlowEnergyTrans_DeadBandTempDiff_optional&
        SimFlowEnergyTrans_DeadBandTempDiff ();

        void
        SimFlowEnergyTrans_DeadBandTempDiff (const SimFlowEnergyTrans_DeadBandTempDiff_type& x);

        void
        SimFlowEnergyTrans_DeadBandTempDiff (const SimFlowEnergyTrans_DeadBandTempDiff_optional& x);

        // SimFlowEnergyTrans_RatedHeatReclaimRecovEff
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedHeatReclaimRecovEff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedHeatReclaimRecovEff_type > SimFlowEnergyTrans_RatedHeatReclaimRecovEff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedHeatReclaimRecovEff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedHeatReclaimRecovEff_traits;

        const SimFlowEnergyTrans_RatedHeatReclaimRecovEff_optional&
        SimFlowEnergyTrans_RatedHeatReclaimRecovEff () const;

        SimFlowEnergyTrans_RatedHeatReclaimRecovEff_optional&
        SimFlowEnergyTrans_RatedHeatReclaimRecovEff ();

        void
        SimFlowEnergyTrans_RatedHeatReclaimRecovEff (const SimFlowEnergyTrans_RatedHeatReclaimRecovEff_type& x);

        void
        SimFlowEnergyTrans_RatedHeatReclaimRecovEff (const SimFlowEnergyTrans_RatedHeatReclaimRecovEff_optional& x);

        // SimFlowEnergyTrans_RatedOutdrAirTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedOutdrAirTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedOutdrAirTemp_type > SimFlowEnergyTrans_RatedOutdrAirTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedOutdrAirTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedOutdrAirTemp_traits;

        const SimFlowEnergyTrans_RatedOutdrAirTemp_optional&
        SimFlowEnergyTrans_RatedOutdrAirTemp () const;

        SimFlowEnergyTrans_RatedOutdrAirTemp_optional&
        SimFlowEnergyTrans_RatedOutdrAirTemp ();

        void
        SimFlowEnergyTrans_RatedOutdrAirTemp (const SimFlowEnergyTrans_RatedOutdrAirTemp_type& x);

        void
        SimFlowEnergyTrans_RatedOutdrAirTemp (const SimFlowEnergyTrans_RatedOutdrAirTemp_optional& x);

        // SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_type > SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_traits;

        const SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_optional&
        SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim () const;

        SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_optional&
        SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim ();

        void
        SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim (const SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_type& x);

        void
        SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim (const SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_optional& x);

        // SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_type > SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_type, char > SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_traits;

        const SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_optional&
        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName () const;

        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_optional&
        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName ();

        void
        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName (const SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_type& x);

        void
        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName (const SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_optional& x);

        void
        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName (::std::auto_ptr< SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_type > p);

        // SimFlowEnergyTrans_TankObjType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_TankObjType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_TankObjType_type > SimFlowEnergyTrans_TankObjType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_TankObjType_type, char > SimFlowEnergyTrans_TankObjType_traits;

        const SimFlowEnergyTrans_TankObjType_optional&
        SimFlowEnergyTrans_TankObjType () const;

        SimFlowEnergyTrans_TankObjType_optional&
        SimFlowEnergyTrans_TankObjType ();

        void
        SimFlowEnergyTrans_TankObjType (const SimFlowEnergyTrans_TankObjType_type& x);

        void
        SimFlowEnergyTrans_TankObjType (const SimFlowEnergyTrans_TankObjType_optional& x);

        void
        SimFlowEnergyTrans_TankObjType (::std::auto_ptr< SimFlowEnergyTrans_TankObjType_type > p);

        // SimFlowEnergyTrans_TankName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_TankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_TankName_type > SimFlowEnergyTrans_TankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_TankName_type, char > SimFlowEnergyTrans_TankName_traits;

        const SimFlowEnergyTrans_TankName_optional&
        SimFlowEnergyTrans_TankName () const;

        SimFlowEnergyTrans_TankName_optional&
        SimFlowEnergyTrans_TankName ();

        void
        SimFlowEnergyTrans_TankName (const SimFlowEnergyTrans_TankName_type& x);

        void
        SimFlowEnergyTrans_TankName (const SimFlowEnergyTrans_TankName_optional& x);

        void
        SimFlowEnergyTrans_TankName (::std::auto_ptr< SimFlowEnergyTrans_TankName_type > p);

        // SimFlowEnergyTrans_WaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_WaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_WaterFlowRate_type > SimFlowEnergyTrans_WaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_WaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_WaterFlowRate_traits;

        const SimFlowEnergyTrans_WaterFlowRate_optional&
        SimFlowEnergyTrans_WaterFlowRate () const;

        SimFlowEnergyTrans_WaterFlowRate_optional&
        SimFlowEnergyTrans_WaterFlowRate ();

        void
        SimFlowEnergyTrans_WaterFlowRate (const SimFlowEnergyTrans_WaterFlowRate_type& x);

        void
        SimFlowEnergyTrans_WaterFlowRate (const SimFlowEnergyTrans_WaterFlowRate_optional& x);

        // SimFlowEnergyTrans_WaterPumpPwr
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_WaterPumpPwr_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_WaterPumpPwr_type > SimFlowEnergyTrans_WaterPumpPwr_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_WaterPumpPwr_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_WaterPumpPwr_traits;

        const SimFlowEnergyTrans_WaterPumpPwr_optional&
        SimFlowEnergyTrans_WaterPumpPwr () const;

        SimFlowEnergyTrans_WaterPumpPwr_optional&
        SimFlowEnergyTrans_WaterPumpPwr ();

        void
        SimFlowEnergyTrans_WaterPumpPwr (const SimFlowEnergyTrans_WaterPumpPwr_type& x);

        void
        SimFlowEnergyTrans_WaterPumpPwr (const SimFlowEnergyTrans_WaterPumpPwr_optional& x);

        // SimFlowEnergyTrans_FractPumpHeatToWater
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_FractPumpHeatToWater_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_FractPumpHeatToWater_type > SimFlowEnergyTrans_FractPumpHeatToWater_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_FractPumpHeatToWater_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_FractPumpHeatToWater_traits;

        const SimFlowEnergyTrans_FractPumpHeatToWater_optional&
        SimFlowEnergyTrans_FractPumpHeatToWater () const;

        SimFlowEnergyTrans_FractPumpHeatToWater_optional&
        SimFlowEnergyTrans_FractPumpHeatToWater ();

        void
        SimFlowEnergyTrans_FractPumpHeatToWater (const SimFlowEnergyTrans_FractPumpHeatToWater_type& x);

        void
        SimFlowEnergyTrans_FractPumpHeatToWater (const SimFlowEnergyTrans_FractPumpHeatToWater_optional& x);

        // SimFlowEnergyTrans_OnCycleParasiticElecLoad
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_OnCycleParasiticElecLoad_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_OnCycleParasiticElecLoad_type > SimFlowEnergyTrans_OnCycleParasiticElecLoad_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_OnCycleParasiticElecLoad_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_OnCycleParasiticElecLoad_traits;

        const SimFlowEnergyTrans_OnCycleParasiticElecLoad_optional&
        SimFlowEnergyTrans_OnCycleParasiticElecLoad () const;

        SimFlowEnergyTrans_OnCycleParasiticElecLoad_optional&
        SimFlowEnergyTrans_OnCycleParasiticElecLoad ();

        void
        SimFlowEnergyTrans_OnCycleParasiticElecLoad (const SimFlowEnergyTrans_OnCycleParasiticElecLoad_type& x);

        void
        SimFlowEnergyTrans_OnCycleParasiticElecLoad (const SimFlowEnergyTrans_OnCycleParasiticElecLoad_optional& x);

        // SimFlowEnergyTrans_fCycleParasiticElecLoad
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_fCycleParasiticElecLoad_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_fCycleParasiticElecLoad_type > SimFlowEnergyTrans_fCycleParasiticElecLoad_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_fCycleParasiticElecLoad_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_fCycleParasiticElecLoad_traits;

        const SimFlowEnergyTrans_fCycleParasiticElecLoad_optional&
        SimFlowEnergyTrans_fCycleParasiticElecLoad () const;

        SimFlowEnergyTrans_fCycleParasiticElecLoad_optional&
        SimFlowEnergyTrans_fCycleParasiticElecLoad ();

        void
        SimFlowEnergyTrans_fCycleParasiticElecLoad (const SimFlowEnergyTrans_fCycleParasiticElecLoad_type& x);

        void
        SimFlowEnergyTrans_fCycleParasiticElecLoad (const SimFlowEnergyTrans_fCycleParasiticElecLoad_optional& x);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater ();

        SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater (const RefId_type&);

        SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater (const ::xercesc::DOMElement& e,
                                                                              ::xml_schema::flags f = 0,
                                                                              ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater (const SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater& x,
                                                                              ::xml_schema::flags f = 0,
                                                                              ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater&
        operator= (const SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatingCoilWater_CoilWaterHeatingDesuperheater ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_AvailSchedName_optional SimFlowEnergyTrans_AvailSchedName_;
        SimFlowEnergyTrans_WaterInletNodeName_optional SimFlowEnergyTrans_WaterInletNodeName_;
        SimFlowEnergyTrans_WaterOutletNodeName_optional SimFlowEnergyTrans_WaterOutletNodeName_;
        SimFlowEnergyTrans_RatedInletWaterTemp_optional SimFlowEnergyTrans_RatedInletWaterTemp_;
        SimFlowEnergyTrans_HeatingSrcObjType_optional SimFlowEnergyTrans_HeatingSrcObjType_;
        SimFlowEnergyTrans_HeatingSrcName_optional SimFlowEnergyTrans_HeatingSrcName_;
        SimFlowEnergyTrans_SetpointTempSchedName_optional SimFlowEnergyTrans_SetpointTempSchedName_;
        SimFlowEnergyTrans_DeadBandTempDiff_optional SimFlowEnergyTrans_DeadBandTempDiff_;
        SimFlowEnergyTrans_RatedHeatReclaimRecovEff_optional SimFlowEnergyTrans_RatedHeatReclaimRecovEff_;
        SimFlowEnergyTrans_RatedOutdrAirTemp_optional SimFlowEnergyTrans_RatedOutdrAirTemp_;
        SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_optional SimFlowEnergyTrans_MaxInletWaterTempForHeatReclaim_;
        SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_optional SimFlowEnergyTrans_HeatReclaimEffFuncTempCurveName_;
        SimFlowEnergyTrans_TankObjType_optional SimFlowEnergyTrans_TankObjType_;
        SimFlowEnergyTrans_TankName_optional SimFlowEnergyTrans_TankName_;
        SimFlowEnergyTrans_WaterFlowRate_optional SimFlowEnergyTrans_WaterFlowRate_;
        SimFlowEnergyTrans_WaterPumpPwr_optional SimFlowEnergyTrans_WaterPumpPwr_;
        SimFlowEnergyTrans_FractPumpHeatToWater_optional SimFlowEnergyTrans_FractPumpHeatToWater_;
        SimFlowEnergyTrans_OnCycleParasiticElecLoad_optional SimFlowEnergyTrans_OnCycleParasiticElecLoad_;
        SimFlowEnergyTrans_fCycleParasiticElecLoad_optional SimFlowEnergyTrans_fCycleParasiticElecLoad_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_WATER_COIL_WATER_HEATING_DESUPERHEATER_HXX
