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

#ifndef SIM_FLOW_ENERGY_TRANSFER_COOLING_COIL_WATER_COIL_AIR_COOLING_WATER_TO_AIR_HEAT_PUMP_EQUATION_FIT_HXX
#define SIM_FLOW_ENERGY_TRANSFER_COOLING_COIL_WATER_COIL_AIR_COOLING_WATER_TO_AIR_HEAT_PUMP_EQUATION_FIT_HXX

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
      class SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit;
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

#include "simflowenergytransfer_coolingcoilwater.hxx"

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      class doubleList;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_CoolingCoilWater
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

        // SimFlowEnergyTrans_GrossRatedTotalCoolCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GrossRatedTotalCoolCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GrossRatedTotalCoolCap_type > SimFlowEnergyTrans_GrossRatedTotalCoolCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GrossRatedTotalCoolCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GrossRatedTotalCoolCap_traits;

        const SimFlowEnergyTrans_GrossRatedTotalCoolCap_optional&
        SimFlowEnergyTrans_GrossRatedTotalCoolCap () const;

        SimFlowEnergyTrans_GrossRatedTotalCoolCap_optional&
        SimFlowEnergyTrans_GrossRatedTotalCoolCap ();

        void
        SimFlowEnergyTrans_GrossRatedTotalCoolCap (const SimFlowEnergyTrans_GrossRatedTotalCoolCap_type& x);

        void
        SimFlowEnergyTrans_GrossRatedTotalCoolCap (const SimFlowEnergyTrans_GrossRatedTotalCoolCap_optional& x);

        // SimFlowEnergyTrans_GrossRatedCoolCOP
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GrossRatedCoolCOP_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GrossRatedCoolCOP_type > SimFlowEnergyTrans_GrossRatedCoolCOP_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GrossRatedCoolCOP_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GrossRatedCoolCOP_traits;

        const SimFlowEnergyTrans_GrossRatedCoolCOP_optional&
        SimFlowEnergyTrans_GrossRatedCoolCOP () const;

        SimFlowEnergyTrans_GrossRatedCoolCOP_optional&
        SimFlowEnergyTrans_GrossRatedCoolCOP ();

        void
        SimFlowEnergyTrans_GrossRatedCoolCOP (const SimFlowEnergyTrans_GrossRatedCoolCOP_type& x);

        void
        SimFlowEnergyTrans_GrossRatedCoolCOP (const SimFlowEnergyTrans_GrossRatedCoolCOP_optional& x);

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

        // SimFlowEnergyTrans_NomTimeForCondsRemovToBegin
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_type > SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_traits;

        const SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_optional&
        SimFlowEnergyTrans_NomTimeForCondsRemovToBegin () const;

        SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_optional&
        SimFlowEnergyTrans_NomTimeForCondsRemovToBegin ();

        void
        SimFlowEnergyTrans_NomTimeForCondsRemovToBegin (const SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_type& x);

        void
        SimFlowEnergyTrans_NomTimeForCondsRemovToBegin (const SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_optional& x);

        // SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_type > SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_traits;

        const SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_optional&
        SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap () const;

        SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_optional&
        SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap ();

        void
        SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap (const SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_type& x);

        void
        SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap (const SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_optional& x);

        // SimFlowEnergyTrans_RatedWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatedWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatedWaterFlowRate_type > SimFlowEnergyTrans_RatedWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatedWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatedWaterFlowRate_traits;

        const SimFlowEnergyTrans_RatedWaterFlowRate_optional&
        SimFlowEnergyTrans_RatedWaterFlowRate () const;

        SimFlowEnergyTrans_RatedWaterFlowRate_optional&
        SimFlowEnergyTrans_RatedWaterFlowRate ();

        void
        SimFlowEnergyTrans_RatedWaterFlowRate (const SimFlowEnergyTrans_RatedWaterFlowRate_type& x);

        void
        SimFlowEnergyTrans_RatedWaterFlowRate (const SimFlowEnergyTrans_RatedWaterFlowRate_optional& x);

        // SimFlowEnergyTrans_GrossRatedSensCoolCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GrossRatedSensCoolCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GrossRatedSensCoolCap_type > SimFlowEnergyTrans_GrossRatedSensCoolCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GrossRatedSensCoolCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GrossRatedSensCoolCap_traits;

        const SimFlowEnergyTrans_GrossRatedSensCoolCap_optional&
        SimFlowEnergyTrans_GrossRatedSensCoolCap () const;

        SimFlowEnergyTrans_GrossRatedSensCoolCap_optional&
        SimFlowEnergyTrans_GrossRatedSensCoolCap ();

        void
        SimFlowEnergyTrans_GrossRatedSensCoolCap (const SimFlowEnergyTrans_GrossRatedSensCoolCap_type& x);

        void
        SimFlowEnergyTrans_GrossRatedSensCoolCap (const SimFlowEnergyTrans_GrossRatedSensCoolCap_optional& x);

        // SimFlowEnergyTrans_TotalCoolingCapCoef_1_5
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_type > SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_type, char > SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_traits;

        const SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_optional&
        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5 () const;

        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_optional&
        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5 ();

        void
        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5 (const SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_type& x);

        void
        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5 (const SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_optional& x);

        void
        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5 (::std::auto_ptr< SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_type > p);

        // SimFlowEnergyTrans_SensCoolingCapCoef_1_6
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowEnergyTrans_SensCoolingCapCoef_1_6_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SensCoolingCapCoef_1_6_type > SimFlowEnergyTrans_SensCoolingCapCoef_1_6_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SensCoolingCapCoef_1_6_type, char > SimFlowEnergyTrans_SensCoolingCapCoef_1_6_traits;

        const SimFlowEnergyTrans_SensCoolingCapCoef_1_6_optional&
        SimFlowEnergyTrans_SensCoolingCapCoef_1_6 () const;

        SimFlowEnergyTrans_SensCoolingCapCoef_1_6_optional&
        SimFlowEnergyTrans_SensCoolingCapCoef_1_6 ();

        void
        SimFlowEnergyTrans_SensCoolingCapCoef_1_6 (const SimFlowEnergyTrans_SensCoolingCapCoef_1_6_type& x);

        void
        SimFlowEnergyTrans_SensCoolingCapCoef_1_6 (const SimFlowEnergyTrans_SensCoolingCapCoef_1_6_optional& x);

        void
        SimFlowEnergyTrans_SensCoolingCapCoef_1_6 (::std::auto_ptr< SimFlowEnergyTrans_SensCoolingCapCoef_1_6_type > p);

        // SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_type > SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_type, char > SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_traits;

        const SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_optional&
        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5 () const;

        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_optional&
        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5 ();

        void
        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5 (const SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_type& x);

        void
        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5 (const SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_optional& x);

        void
        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5 (::std::auto_ptr< SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_type > p);

        // T24FuelSrc
        //
        typedef ::xml_schema::string T24FuelSrc_type;
        typedef ::xsd::cxx::tree::optional< T24FuelSrc_type > T24FuelSrc_optional;
        typedef ::xsd::cxx::tree::traits< T24FuelSrc_type, char > T24FuelSrc_traits;

        const T24FuelSrc_optional&
        T24FuelSrc () const;

        T24FuelSrc_optional&
        T24FuelSrc ();

        void
        T24FuelSrc (const T24FuelSrc_type& x);

        void
        T24FuelSrc (const T24FuelSrc_optional& x);

        void
        T24FuelSrc (::std::auto_ptr< T24FuelSrc_type > p);

        // Constructors.
        //
        SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit ();

        SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit (const RefId_type&);

        SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit (const ::xercesc::DOMElement& e,
                                                                                            ::xml_schema::flags f = 0,
                                                                                            ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit (const SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit& x,
                                                                                            ::xml_schema::flags f = 0,
                                                                                            ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit&
        operator= (const SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit& x);

        virtual 
        ~SimFlowEnergyTransfer_CoolingCoilWater_CoilAirCoolingWaterToAirHeatPumpEquationFit ();

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
        SimFlowEnergyTrans_GrossRatedTotalCoolCap_optional SimFlowEnergyTrans_GrossRatedTotalCoolCap_;
        SimFlowEnergyTrans_GrossRatedCoolCOP_optional SimFlowEnergyTrans_GrossRatedCoolCOP_;
        SimFlowEnergyTrans_RatedAirFlowRate_optional SimFlowEnergyTrans_RatedAirFlowRate_;
        SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_optional SimFlowEnergyTrans_NomTimeForCondsRemovToBegin_;
        SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_optional SimFlowEnergyTrans_RatioInitMoistEvapRate_SteadyStateLatentCap_;
        SimFlowEnergyTrans_RatedWaterFlowRate_optional SimFlowEnergyTrans_RatedWaterFlowRate_;
        SimFlowEnergyTrans_GrossRatedSensCoolCap_optional SimFlowEnergyTrans_GrossRatedSensCoolCap_;
        SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_optional SimFlowEnergyTrans_TotalCoolingCapCoef_1_5_;
        SimFlowEnergyTrans_SensCoolingCapCoef_1_6_optional SimFlowEnergyTrans_SensCoolingCapCoef_1_6_;
        SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_optional SimFlowEnergyTrans_CoolingPwrConsumpCoef_1_5_;
        T24FuelSrc_optional T24FuelSrc_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_COOLING_COIL_WATER_COIL_AIR_COOLING_WATER_TO_AIR_HEAT_PUMP_EQUATION_FIT_HXX