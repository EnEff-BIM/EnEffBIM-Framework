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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_WATER_COIL_AIR_HEATING_WATER_TO_AIR_HEAT_PUMP_PARAMETER_ESTIMATION_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_WATER_COIL_AIR_HEATING_WATER_TO_AIR_HEAT_PUMP_PARAMETER_ESTIMATION_HXX

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
      class SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation;
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
      class SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_HeatingCoilWater
      {
        public:
        // SimFlowEnergyTrans_Name
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_Name_type > SimFlowEnergyTrans_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_Name_type, char > SimFlowEnergyTrans_Name_traits;

        const SimFlowEnergyTrans_Name_optional&
        SimFlowEnergyTrans_Name () const;

        SimFlowEnergyTrans_Name_optional&
        SimFlowEnergyTrans_Name ();

        void
        SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_type& x);

        void
        SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_optional& x);

        void
        SimFlowEnergyTrans_Name (::std::auto_ptr< SimFlowEnergyTrans_Name_type > p);

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

        // SimFlowEnergyTrans_GrossRatedHeatCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GrossRatedHeatCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GrossRatedHeatCap_type > SimFlowEnergyTrans_GrossRatedHeatCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GrossRatedHeatCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GrossRatedHeatCap_traits;

        const SimFlowEnergyTrans_GrossRatedHeatCap_optional&
        SimFlowEnergyTrans_GrossRatedHeatCap () const;

        SimFlowEnergyTrans_GrossRatedHeatCap_optional&
        SimFlowEnergyTrans_GrossRatedHeatCap ();

        void
        SimFlowEnergyTrans_GrossRatedHeatCap (const SimFlowEnergyTrans_GrossRatedHeatCap_type& x);

        void
        SimFlowEnergyTrans_GrossRatedHeatCap (const SimFlowEnergyTrans_GrossRatedHeatCap_optional& x);

        // SimFlowEnergyTrans_CompType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CompType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompType_type > SimFlowEnergyTrans_CompType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompType_type, char > SimFlowEnergyTrans_CompType_traits;

        const SimFlowEnergyTrans_CompType_optional&
        SimFlowEnergyTrans_CompType () const;

        SimFlowEnergyTrans_CompType_optional&
        SimFlowEnergyTrans_CompType ();

        void
        SimFlowEnergyTrans_CompType (const SimFlowEnergyTrans_CompType_type& x);

        void
        SimFlowEnergyTrans_CompType (const SimFlowEnergyTrans_CompType_optional& x);

        void
        SimFlowEnergyTrans_CompType (::std::auto_ptr< SimFlowEnergyTrans_CompType_type > p);

        // SimFlowEnergyTrans_RefrigType
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_RefrigType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RefrigType_type > SimFlowEnergyTrans_RefrigType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RefrigType_type, char > SimFlowEnergyTrans_RefrigType_traits;

        const SimFlowEnergyTrans_RefrigType_optional&
        SimFlowEnergyTrans_RefrigType () const;

        SimFlowEnergyTrans_RefrigType_optional&
        SimFlowEnergyTrans_RefrigType ();

        void
        SimFlowEnergyTrans_RefrigType (const SimFlowEnergyTrans_RefrigType_type& x);

        void
        SimFlowEnergyTrans_RefrigType (const SimFlowEnergyTrans_RefrigType_optional& x);

        void
        SimFlowEnergyTrans_RefrigType (::std::auto_ptr< SimFlowEnergyTrans_RefrigType_type > p);

        // SimFlowEnergyTrans_DesignSrcSideFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_DesignSrcSideFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DesignSrcSideFlowRate_type > SimFlowEnergyTrans_DesignSrcSideFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DesignSrcSideFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_DesignSrcSideFlowRate_traits;

        const SimFlowEnergyTrans_DesignSrcSideFlowRate_optional&
        SimFlowEnergyTrans_DesignSrcSideFlowRate () const;

        SimFlowEnergyTrans_DesignSrcSideFlowRate_optional&
        SimFlowEnergyTrans_DesignSrcSideFlowRate ();

        void
        SimFlowEnergyTrans_DesignSrcSideFlowRate (const SimFlowEnergyTrans_DesignSrcSideFlowRate_type& x);

        void
        SimFlowEnergyTrans_DesignSrcSideFlowRate (const SimFlowEnergyTrans_DesignSrcSideFlowRate_optional& x);

        // SimFlowEnergyTrans_HighPressureCutoff
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_HighPressureCutoff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HighPressureCutoff_type > SimFlowEnergyTrans_HighPressureCutoff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HighPressureCutoff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_HighPressureCutoff_traits;

        const SimFlowEnergyTrans_HighPressureCutoff_optional&
        SimFlowEnergyTrans_HighPressureCutoff () const;

        SimFlowEnergyTrans_HighPressureCutoff_optional&
        SimFlowEnergyTrans_HighPressureCutoff ();

        void
        SimFlowEnergyTrans_HighPressureCutoff (const SimFlowEnergyTrans_HighPressureCutoff_type& x);

        void
        SimFlowEnergyTrans_HighPressureCutoff (const SimFlowEnergyTrans_HighPressureCutoff_optional& x);

        // SimFlowEnergyTrans_LowPressureCutoff
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_LowPressureCutoff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LowPressureCutoff_type > SimFlowEnergyTrans_LowPressureCutoff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LowPressureCutoff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_LowPressureCutoff_traits;

        const SimFlowEnergyTrans_LowPressureCutoff_optional&
        SimFlowEnergyTrans_LowPressureCutoff () const;

        SimFlowEnergyTrans_LowPressureCutoff_optional&
        SimFlowEnergyTrans_LowPressureCutoff ();

        void
        SimFlowEnergyTrans_LowPressureCutoff (const SimFlowEnergyTrans_LowPressureCutoff_type& x);

        void
        SimFlowEnergyTrans_LowPressureCutoff (const SimFlowEnergyTrans_LowPressureCutoff_optional& x);

        // SimFlowEnergyTrans_LoadSideTotalHeatTransCoef
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_type > SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_traits;

        const SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_optional&
        SimFlowEnergyTrans_LoadSideTotalHeatTransCoef () const;

        SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_optional&
        SimFlowEnergyTrans_LoadSideTotalHeatTransCoef ();

        void
        SimFlowEnergyTrans_LoadSideTotalHeatTransCoef (const SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_type& x);

        void
        SimFlowEnergyTrans_LoadSideTotalHeatTransCoef (const SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_optional& x);

        // SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_type > SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_traits;

        const SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_optional&
        SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet () const;

        SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_optional&
        SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet ();

        void
        SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet (const SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_type& x);

        void
        SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet (const SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_optional& x);

        // SimFlowEnergyTrans_CompPwrLosses
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_CompPwrLosses_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompPwrLosses_type > SimFlowEnergyTrans_CompPwrLosses_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompPwrLosses_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_CompPwrLosses_traits;

        const SimFlowEnergyTrans_CompPwrLosses_optional&
        SimFlowEnergyTrans_CompPwrLosses () const;

        SimFlowEnergyTrans_CompPwrLosses_optional&
        SimFlowEnergyTrans_CompPwrLosses ();

        void
        SimFlowEnergyTrans_CompPwrLosses (const SimFlowEnergyTrans_CompPwrLosses_type& x);

        void
        SimFlowEnergyTrans_CompPwrLosses (const SimFlowEnergyTrans_CompPwrLosses_optional& x);

        // SimFlowEnergyTrans_CompEff
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_CompEff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompEff_type > SimFlowEnergyTrans_CompEff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompEff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_CompEff_traits;

        const SimFlowEnergyTrans_CompEff_optional&
        SimFlowEnergyTrans_CompEff () const;

        SimFlowEnergyTrans_CompEff_optional&
        SimFlowEnergyTrans_CompEff ();

        void
        SimFlowEnergyTrans_CompEff (const SimFlowEnergyTrans_CompEff_type& x);

        void
        SimFlowEnergyTrans_CompEff (const SimFlowEnergyTrans_CompEff_optional& x);

        // SimFlowEnergyTrans_CompPistonDisplacement
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_CompPistonDisplacement_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompPistonDisplacement_type > SimFlowEnergyTrans_CompPistonDisplacement_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompPistonDisplacement_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_CompPistonDisplacement_traits;

        const SimFlowEnergyTrans_CompPistonDisplacement_optional&
        SimFlowEnergyTrans_CompPistonDisplacement () const;

        SimFlowEnergyTrans_CompPistonDisplacement_optional&
        SimFlowEnergyTrans_CompPistonDisplacement ();

        void
        SimFlowEnergyTrans_CompPistonDisplacement (const SimFlowEnergyTrans_CompPistonDisplacement_type& x);

        void
        SimFlowEnergyTrans_CompPistonDisplacement (const SimFlowEnergyTrans_CompPistonDisplacement_optional& x);

        // SimFlowEnergyTrans_CompSuctionDischargePressureDrop
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_CompSuctionDischargePressureDrop_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompSuctionDischargePressureDrop_type > SimFlowEnergyTrans_CompSuctionDischargePressureDrop_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompSuctionDischargePressureDrop_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_CompSuctionDischargePressureDrop_traits;

        const SimFlowEnergyTrans_CompSuctionDischargePressureDrop_optional&
        SimFlowEnergyTrans_CompSuctionDischargePressureDrop () const;

        SimFlowEnergyTrans_CompSuctionDischargePressureDrop_optional&
        SimFlowEnergyTrans_CompSuctionDischargePressureDrop ();

        void
        SimFlowEnergyTrans_CompSuctionDischargePressureDrop (const SimFlowEnergyTrans_CompSuctionDischargePressureDrop_type& x);

        void
        SimFlowEnergyTrans_CompSuctionDischargePressureDrop (const SimFlowEnergyTrans_CompSuctionDischargePressureDrop_optional& x);

        // SimFlowEnergyTrans_CompClearanceFactor
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_CompClearanceFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompClearanceFactor_type > SimFlowEnergyTrans_CompClearanceFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompClearanceFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_CompClearanceFactor_traits;

        const SimFlowEnergyTrans_CompClearanceFactor_optional&
        SimFlowEnergyTrans_CompClearanceFactor () const;

        SimFlowEnergyTrans_CompClearanceFactor_optional&
        SimFlowEnergyTrans_CompClearanceFactor ();

        void
        SimFlowEnergyTrans_CompClearanceFactor (const SimFlowEnergyTrans_CompClearanceFactor_type& x);

        void
        SimFlowEnergyTrans_CompClearanceFactor (const SimFlowEnergyTrans_CompClearanceFactor_optional& x);

        // SimFlowEnergyTrans_RefrigVolFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RefrigVolFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RefrigVolFlowRate_type > SimFlowEnergyTrans_RefrigVolFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RefrigVolFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RefrigVolFlowRate_traits;

        const SimFlowEnergyTrans_RefrigVolFlowRate_optional&
        SimFlowEnergyTrans_RefrigVolFlowRate () const;

        SimFlowEnergyTrans_RefrigVolFlowRate_optional&
        SimFlowEnergyTrans_RefrigVolFlowRate ();

        void
        SimFlowEnergyTrans_RefrigVolFlowRate (const SimFlowEnergyTrans_RefrigVolFlowRate_type& x);

        void
        SimFlowEnergyTrans_RefrigVolFlowRate (const SimFlowEnergyTrans_RefrigVolFlowRate_optional& x);

        // SimFlowEnergyTrans_VolRatio
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_VolRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_VolRatio_type > SimFlowEnergyTrans_VolRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_VolRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_VolRatio_traits;

        const SimFlowEnergyTrans_VolRatio_optional&
        SimFlowEnergyTrans_VolRatio () const;

        SimFlowEnergyTrans_VolRatio_optional&
        SimFlowEnergyTrans_VolRatio ();

        void
        SimFlowEnergyTrans_VolRatio (const SimFlowEnergyTrans_VolRatio_type& x);

        void
        SimFlowEnergyTrans_VolRatio (const SimFlowEnergyTrans_VolRatio_optional& x);

        // SimFlowEnergyTrans_LeakRateCoef
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_LeakRateCoef_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LeakRateCoef_type > SimFlowEnergyTrans_LeakRateCoef_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LeakRateCoef_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_LeakRateCoef_traits;

        const SimFlowEnergyTrans_LeakRateCoef_optional&
        SimFlowEnergyTrans_LeakRateCoef () const;

        SimFlowEnergyTrans_LeakRateCoef_optional&
        SimFlowEnergyTrans_LeakRateCoef ();

        void
        SimFlowEnergyTrans_LeakRateCoef (const SimFlowEnergyTrans_LeakRateCoef_type& x);

        void
        SimFlowEnergyTrans_LeakRateCoef (const SimFlowEnergyTrans_LeakRateCoef_optional& x);

        // SimFlowEnergyTrans_SrcSideHeatTransCoef
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SrcSideHeatTransCoef_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SrcSideHeatTransCoef_type > SimFlowEnergyTrans_SrcSideHeatTransCoef_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SrcSideHeatTransCoef_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SrcSideHeatTransCoef_traits;

        const SimFlowEnergyTrans_SrcSideHeatTransCoef_optional&
        SimFlowEnergyTrans_SrcSideHeatTransCoef () const;

        SimFlowEnergyTrans_SrcSideHeatTransCoef_optional&
        SimFlowEnergyTrans_SrcSideHeatTransCoef ();

        void
        SimFlowEnergyTrans_SrcSideHeatTransCoef (const SimFlowEnergyTrans_SrcSideHeatTransCoef_type& x);

        void
        SimFlowEnergyTrans_SrcSideHeatTransCoef (const SimFlowEnergyTrans_SrcSideHeatTransCoef_optional& x);

        // SimFlowEnergyTrans_SrcSideHeatTransferResist1
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SrcSideHeatTransferResist1_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SrcSideHeatTransferResist1_type > SimFlowEnergyTrans_SrcSideHeatTransferResist1_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SrcSideHeatTransferResist1_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SrcSideHeatTransferResist1_traits;

        const SimFlowEnergyTrans_SrcSideHeatTransferResist1_optional&
        SimFlowEnergyTrans_SrcSideHeatTransferResist1 () const;

        SimFlowEnergyTrans_SrcSideHeatTransferResist1_optional&
        SimFlowEnergyTrans_SrcSideHeatTransferResist1 ();

        void
        SimFlowEnergyTrans_SrcSideHeatTransferResist1 (const SimFlowEnergyTrans_SrcSideHeatTransferResist1_type& x);

        void
        SimFlowEnergyTrans_SrcSideHeatTransferResist1 (const SimFlowEnergyTrans_SrcSideHeatTransferResist1_optional& x);

        // SimFlowEnergyTrans_SrcSideHeatTransferResist2
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SrcSideHeatTransferResist2_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SrcSideHeatTransferResist2_type > SimFlowEnergyTrans_SrcSideHeatTransferResist2_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SrcSideHeatTransferResist2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SrcSideHeatTransferResist2_traits;

        const SimFlowEnergyTrans_SrcSideHeatTransferResist2_optional&
        SimFlowEnergyTrans_SrcSideHeatTransferResist2 () const;

        SimFlowEnergyTrans_SrcSideHeatTransferResist2_optional&
        SimFlowEnergyTrans_SrcSideHeatTransferResist2 ();

        void
        SimFlowEnergyTrans_SrcSideHeatTransferResist2 (const SimFlowEnergyTrans_SrcSideHeatTransferResist2_type& x);

        void
        SimFlowEnergyTrans_SrcSideHeatTransferResist2 (const SimFlowEnergyTrans_SrcSideHeatTransferResist2_optional& x);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation ();

        SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation (const RefId_type&);

        SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation (const ::xercesc::DOMElement& e,
                                                                                                    ::xml_schema::flags f = 0,
                                                                                                    ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation (const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation& x,
                                                                                                    ::xml_schema::flags f = 0,
                                                                                                    ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation&
        operator= (const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpParameterEstimation ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_Name_optional SimFlowEnergyTrans_Name_;
        SimFlowEnergyTrans_WaterInletNodeName_optional SimFlowEnergyTrans_WaterInletNodeName_;
        SimFlowEnergyTrans_WaterOutletNodeName_optional SimFlowEnergyTrans_WaterOutletNodeName_;
        SimFlowEnergyTrans_AirInNodeName_optional SimFlowEnergyTrans_AirInNodeName_;
        SimFlowEnergyTrans_AirOutNodeName_optional SimFlowEnergyTrans_AirOutNodeName_;
        SimFlowEnergyTrans_GrossRatedHeatCap_optional SimFlowEnergyTrans_GrossRatedHeatCap_;
        SimFlowEnergyTrans_CompType_optional SimFlowEnergyTrans_CompType_;
        SimFlowEnergyTrans_RefrigType_optional SimFlowEnergyTrans_RefrigType_;
        SimFlowEnergyTrans_DesignSrcSideFlowRate_optional SimFlowEnergyTrans_DesignSrcSideFlowRate_;
        SimFlowEnergyTrans_HighPressureCutoff_optional SimFlowEnergyTrans_HighPressureCutoff_;
        SimFlowEnergyTrans_LowPressureCutoff_optional SimFlowEnergyTrans_LowPressureCutoff_;
        SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_optional SimFlowEnergyTrans_LoadSideTotalHeatTransCoef_;
        SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_optional SimFlowEnergyTrans_SuperheatTempAtTheEvapOutlet_;
        SimFlowEnergyTrans_CompPwrLosses_optional SimFlowEnergyTrans_CompPwrLosses_;
        SimFlowEnergyTrans_CompEff_optional SimFlowEnergyTrans_CompEff_;
        SimFlowEnergyTrans_CompPistonDisplacement_optional SimFlowEnergyTrans_CompPistonDisplacement_;
        SimFlowEnergyTrans_CompSuctionDischargePressureDrop_optional SimFlowEnergyTrans_CompSuctionDischargePressureDrop_;
        SimFlowEnergyTrans_CompClearanceFactor_optional SimFlowEnergyTrans_CompClearanceFactor_;
        SimFlowEnergyTrans_RefrigVolFlowRate_optional SimFlowEnergyTrans_RefrigVolFlowRate_;
        SimFlowEnergyTrans_VolRatio_optional SimFlowEnergyTrans_VolRatio_;
        SimFlowEnergyTrans_LeakRateCoef_optional SimFlowEnergyTrans_LeakRateCoef_;
        SimFlowEnergyTrans_SrcSideHeatTransCoef_optional SimFlowEnergyTrans_SrcSideHeatTransCoef_;
        SimFlowEnergyTrans_SrcSideHeatTransferResist1_optional SimFlowEnergyTrans_SrcSideHeatTransferResist1_;
        SimFlowEnergyTrans_SrcSideHeatTransferResist2_optional SimFlowEnergyTrans_SrcSideHeatTransferResist2_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_WATER_COIL_AIR_HEATING_WATER_TO_AIR_HEAT_PUMP_PARAMETER_ESTIMATION_HXX
