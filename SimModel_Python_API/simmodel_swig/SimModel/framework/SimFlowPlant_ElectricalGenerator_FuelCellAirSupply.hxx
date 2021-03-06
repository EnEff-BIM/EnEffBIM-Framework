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

#ifndef SIM_FLOW_PLANT_ELECTRICAL_GENERATOR_FUEL_CELL_AIR_SUPPLY_HXX
#define SIM_FLOW_PLANT_ELECTRICAL_GENERATOR_FUEL_CELL_AIR_SUPPLY_HXX

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
      class SimFlowPlant_ElectricalGenerator_FuelCellAirSupply;
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

#include "simflowplant_electricalgenerator.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowPlant_ConstName_1_5;
    }
  }
}

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
      class SimFlowPlant_ElectricalGenerator_FuelCellAirSupply: public ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator
      {
        public:
        // SimFlowPlant_Name
        //
        typedef ::xml_schema::string SimFlowPlant_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_Name_type > SimFlowPlant_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_Name_type, char > SimFlowPlant_Name_traits;

        const SimFlowPlant_Name_optional&
        SimFlowPlant_Name () const;

        SimFlowPlant_Name_optional&
        SimFlowPlant_Name ();

        void
        SimFlowPlant_Name (const SimFlowPlant_Name_type& x);

        void
        SimFlowPlant_Name (const SimFlowPlant_Name_optional& x);

        void
        SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > p);

        // SimFlowPlant_AirInNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_AirInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirInNodeName_type > SimFlowPlant_AirInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirInNodeName_type, char > SimFlowPlant_AirInNodeName_traits;

        const SimFlowPlant_AirInNodeName_optional&
        SimFlowPlant_AirInNodeName () const;

        SimFlowPlant_AirInNodeName_optional&
        SimFlowPlant_AirInNodeName ();

        void
        SimFlowPlant_AirInNodeName (const SimFlowPlant_AirInNodeName_type& x);

        void
        SimFlowPlant_AirInNodeName (const SimFlowPlant_AirInNodeName_optional& x);

        void
        SimFlowPlant_AirInNodeName (::std::auto_ptr< SimFlowPlant_AirInNodeName_type > p);

        // SimFlowPlant_BlowerPwrCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_BlowerPwrCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_BlowerPwrCurveName_type > SimFlowPlant_BlowerPwrCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_BlowerPwrCurveName_type, char > SimFlowPlant_BlowerPwrCurveName_traits;

        const SimFlowPlant_BlowerPwrCurveName_optional&
        SimFlowPlant_BlowerPwrCurveName () const;

        SimFlowPlant_BlowerPwrCurveName_optional&
        SimFlowPlant_BlowerPwrCurveName ();

        void
        SimFlowPlant_BlowerPwrCurveName (const SimFlowPlant_BlowerPwrCurveName_type& x);

        void
        SimFlowPlant_BlowerPwrCurveName (const SimFlowPlant_BlowerPwrCurveName_optional& x);

        void
        SimFlowPlant_BlowerPwrCurveName (::std::auto_ptr< SimFlowPlant_BlowerPwrCurveName_type > p);

        // SimFlowPlant_BlowerHeatLossFactor
        //
        typedef ::xml_schema::double_ SimFlowPlant_BlowerHeatLossFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_BlowerHeatLossFactor_type > SimFlowPlant_BlowerHeatLossFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_BlowerHeatLossFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_BlowerHeatLossFactor_traits;

        const SimFlowPlant_BlowerHeatLossFactor_optional&
        SimFlowPlant_BlowerHeatLossFactor () const;

        SimFlowPlant_BlowerHeatLossFactor_optional&
        SimFlowPlant_BlowerHeatLossFactor ();

        void
        SimFlowPlant_BlowerHeatLossFactor (const SimFlowPlant_BlowerHeatLossFactor_type& x);

        void
        SimFlowPlant_BlowerHeatLossFactor (const SimFlowPlant_BlowerHeatLossFactor_optional& x);

        // SimFlowPlant_AirSupplyRateCalcMode
        //
        typedef ::xml_schema::string SimFlowPlant_AirSupplyRateCalcMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirSupplyRateCalcMode_type > SimFlowPlant_AirSupplyRateCalcMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirSupplyRateCalcMode_type, char > SimFlowPlant_AirSupplyRateCalcMode_traits;

        const SimFlowPlant_AirSupplyRateCalcMode_optional&
        SimFlowPlant_AirSupplyRateCalcMode () const;

        SimFlowPlant_AirSupplyRateCalcMode_optional&
        SimFlowPlant_AirSupplyRateCalcMode ();

        void
        SimFlowPlant_AirSupplyRateCalcMode (const SimFlowPlant_AirSupplyRateCalcMode_type& x);

        void
        SimFlowPlant_AirSupplyRateCalcMode (const SimFlowPlant_AirSupplyRateCalcMode_optional& x);

        void
        SimFlowPlant_AirSupplyRateCalcMode (::std::auto_ptr< SimFlowPlant_AirSupplyRateCalcMode_type > p);

        // SimFlowPlant_StoichiometricRatio
        //
        typedef ::xml_schema::double_ SimFlowPlant_StoichiometricRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_StoichiometricRatio_type > SimFlowPlant_StoichiometricRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_StoichiometricRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_StoichiometricRatio_traits;

        const SimFlowPlant_StoichiometricRatio_optional&
        SimFlowPlant_StoichiometricRatio () const;

        SimFlowPlant_StoichiometricRatio_optional&
        SimFlowPlant_StoichiometricRatio ();

        void
        SimFlowPlant_StoichiometricRatio (const SimFlowPlant_StoichiometricRatio_type& x);

        void
        SimFlowPlant_StoichiometricRatio (const SimFlowPlant_StoichiometricRatio_optional& x);

        // SimFlowPlant_AirRateFuncElecPwrCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_AirRateFuncElecPwrCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirRateFuncElecPwrCurveName_type > SimFlowPlant_AirRateFuncElecPwrCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirRateFuncElecPwrCurveName_type, char > SimFlowPlant_AirRateFuncElecPwrCurveName_traits;

        const SimFlowPlant_AirRateFuncElecPwrCurveName_optional&
        SimFlowPlant_AirRateFuncElecPwrCurveName () const;

        SimFlowPlant_AirRateFuncElecPwrCurveName_optional&
        SimFlowPlant_AirRateFuncElecPwrCurveName ();

        void
        SimFlowPlant_AirRateFuncElecPwrCurveName (const SimFlowPlant_AirRateFuncElecPwrCurveName_type& x);

        void
        SimFlowPlant_AirRateFuncElecPwrCurveName (const SimFlowPlant_AirRateFuncElecPwrCurveName_optional& x);

        void
        SimFlowPlant_AirRateFuncElecPwrCurveName (::std::auto_ptr< SimFlowPlant_AirRateFuncElecPwrCurveName_type > p);

        // SimFlowPlant_AirRateAirTempCoef
        //
        typedef ::xml_schema::double_ SimFlowPlant_AirRateAirTempCoef_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirRateAirTempCoef_type > SimFlowPlant_AirRateAirTempCoef_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirRateAirTempCoef_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_AirRateAirTempCoef_traits;

        const SimFlowPlant_AirRateAirTempCoef_optional&
        SimFlowPlant_AirRateAirTempCoef () const;

        SimFlowPlant_AirRateAirTempCoef_optional&
        SimFlowPlant_AirRateAirTempCoef ();

        void
        SimFlowPlant_AirRateAirTempCoef (const SimFlowPlant_AirRateAirTempCoef_type& x);

        void
        SimFlowPlant_AirRateAirTempCoef (const SimFlowPlant_AirRateAirTempCoef_optional& x);

        // SimFlowPlant_AirRateFuncFuelRateCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_AirRateFuncFuelRateCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirRateFuncFuelRateCurveName_type > SimFlowPlant_AirRateFuncFuelRateCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirRateFuncFuelRateCurveName_type, char > SimFlowPlant_AirRateFuncFuelRateCurveName_traits;

        const SimFlowPlant_AirRateFuncFuelRateCurveName_optional&
        SimFlowPlant_AirRateFuncFuelRateCurveName () const;

        SimFlowPlant_AirRateFuncFuelRateCurveName_optional&
        SimFlowPlant_AirRateFuncFuelRateCurveName ();

        void
        SimFlowPlant_AirRateFuncFuelRateCurveName (const SimFlowPlant_AirRateFuncFuelRateCurveName_type& x);

        void
        SimFlowPlant_AirRateFuncFuelRateCurveName (const SimFlowPlant_AirRateFuncFuelRateCurveName_optional& x);

        void
        SimFlowPlant_AirRateFuncFuelRateCurveName (::std::auto_ptr< SimFlowPlant_AirRateFuncFuelRateCurveName_type > p);

        // SimFlowPlant_AirtakeHeatRecovMode
        //
        typedef ::xml_schema::string SimFlowPlant_AirtakeHeatRecovMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirtakeHeatRecovMode_type > SimFlowPlant_AirtakeHeatRecovMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirtakeHeatRecovMode_type, char > SimFlowPlant_AirtakeHeatRecovMode_traits;

        const SimFlowPlant_AirtakeHeatRecovMode_optional&
        SimFlowPlant_AirtakeHeatRecovMode () const;

        SimFlowPlant_AirtakeHeatRecovMode_optional&
        SimFlowPlant_AirtakeHeatRecovMode ();

        void
        SimFlowPlant_AirtakeHeatRecovMode (const SimFlowPlant_AirtakeHeatRecovMode_type& x);

        void
        SimFlowPlant_AirtakeHeatRecovMode (const SimFlowPlant_AirtakeHeatRecovMode_optional& x);

        void
        SimFlowPlant_AirtakeHeatRecovMode (::std::auto_ptr< SimFlowPlant_AirtakeHeatRecovMode_type > p);

        // SimFlowPlant_AirSupplyConstMode
        //
        typedef ::xml_schema::string SimFlowPlant_AirSupplyConstMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AirSupplyConstMode_type > SimFlowPlant_AirSupplyConstMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AirSupplyConstMode_type, char > SimFlowPlant_AirSupplyConstMode_traits;

        const SimFlowPlant_AirSupplyConstMode_optional&
        SimFlowPlant_AirSupplyConstMode () const;

        SimFlowPlant_AirSupplyConstMode_optional&
        SimFlowPlant_AirSupplyConstMode ();

        void
        SimFlowPlant_AirSupplyConstMode (const SimFlowPlant_AirSupplyConstMode_type& x);

        void
        SimFlowPlant_AirSupplyConstMode (const SimFlowPlant_AirSupplyConstMode_optional& x);

        void
        SimFlowPlant_AirSupplyConstMode (::std::auto_ptr< SimFlowPlant_AirSupplyConstMode_type > p);

        // SimFlowPlant_NumUserDefinedConsts
        //
        typedef ::xml_schema::double_ SimFlowPlant_NumUserDefinedConsts_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_NumUserDefinedConsts_type > SimFlowPlant_NumUserDefinedConsts_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_NumUserDefinedConsts_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_NumUserDefinedConsts_traits;

        const SimFlowPlant_NumUserDefinedConsts_optional&
        SimFlowPlant_NumUserDefinedConsts () const;

        SimFlowPlant_NumUserDefinedConsts_optional&
        SimFlowPlant_NumUserDefinedConsts ();

        void
        SimFlowPlant_NumUserDefinedConsts (const SimFlowPlant_NumUserDefinedConsts_type& x);

        void
        SimFlowPlant_NumUserDefinedConsts (const SimFlowPlant_NumUserDefinedConsts_optional& x);

        // SimFlowPlant_ConstName_1_5
        //
        typedef ::schema::simxml::MepModel::SimFlowPlant_ConstName_1_5 SimFlowPlant_ConstName_1_5_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ConstName_1_5_type > SimFlowPlant_ConstName_1_5_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ConstName_1_5_type, char > SimFlowPlant_ConstName_1_5_traits;

        const SimFlowPlant_ConstName_1_5_optional&
        SimFlowPlant_ConstName_1_5 () const;

        SimFlowPlant_ConstName_1_5_optional&
        SimFlowPlant_ConstName_1_5 ();

        void
        SimFlowPlant_ConstName_1_5 (const SimFlowPlant_ConstName_1_5_type& x);

        void
        SimFlowPlant_ConstName_1_5 (const SimFlowPlant_ConstName_1_5_optional& x);

        void
        SimFlowPlant_ConstName_1_5 (::std::auto_ptr< SimFlowPlant_ConstName_1_5_type > p);

        // SimFlowPlant_MolarFract_1_5
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowPlant_MolarFract_1_5_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_MolarFract_1_5_type > SimFlowPlant_MolarFract_1_5_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_MolarFract_1_5_type, char > SimFlowPlant_MolarFract_1_5_traits;

        const SimFlowPlant_MolarFract_1_5_optional&
        SimFlowPlant_MolarFract_1_5 () const;

        SimFlowPlant_MolarFract_1_5_optional&
        SimFlowPlant_MolarFract_1_5 ();

        void
        SimFlowPlant_MolarFract_1_5 (const SimFlowPlant_MolarFract_1_5_type& x);

        void
        SimFlowPlant_MolarFract_1_5 (const SimFlowPlant_MolarFract_1_5_optional& x);

        void
        SimFlowPlant_MolarFract_1_5 (::std::auto_ptr< SimFlowPlant_MolarFract_1_5_type > p);

        // Constructors.
        //
        SimFlowPlant_ElectricalGenerator_FuelCellAirSupply ();

        SimFlowPlant_ElectricalGenerator_FuelCellAirSupply (const RefId_type&);

        SimFlowPlant_ElectricalGenerator_FuelCellAirSupply (const ::xercesc::DOMElement& e,
                                                            ::xml_schema::flags f = 0,
                                                            ::xml_schema::container* c = 0);

        SimFlowPlant_ElectricalGenerator_FuelCellAirSupply (const SimFlowPlant_ElectricalGenerator_FuelCellAirSupply& x,
                                                            ::xml_schema::flags f = 0,
                                                            ::xml_schema::container* c = 0);

        virtual SimFlowPlant_ElectricalGenerator_FuelCellAirSupply*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowPlant_ElectricalGenerator_FuelCellAirSupply&
        operator= (const SimFlowPlant_ElectricalGenerator_FuelCellAirSupply& x);

        virtual 
        ~SimFlowPlant_ElectricalGenerator_FuelCellAirSupply ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowPlant_Name_optional SimFlowPlant_Name_;
        SimFlowPlant_AirInNodeName_optional SimFlowPlant_AirInNodeName_;
        SimFlowPlant_BlowerPwrCurveName_optional SimFlowPlant_BlowerPwrCurveName_;
        SimFlowPlant_BlowerHeatLossFactor_optional SimFlowPlant_BlowerHeatLossFactor_;
        SimFlowPlant_AirSupplyRateCalcMode_optional SimFlowPlant_AirSupplyRateCalcMode_;
        SimFlowPlant_StoichiometricRatio_optional SimFlowPlant_StoichiometricRatio_;
        SimFlowPlant_AirRateFuncElecPwrCurveName_optional SimFlowPlant_AirRateFuncElecPwrCurveName_;
        SimFlowPlant_AirRateAirTempCoef_optional SimFlowPlant_AirRateAirTempCoef_;
        SimFlowPlant_AirRateFuncFuelRateCurveName_optional SimFlowPlant_AirRateFuncFuelRateCurveName_;
        SimFlowPlant_AirtakeHeatRecovMode_optional SimFlowPlant_AirtakeHeatRecovMode_;
        SimFlowPlant_AirSupplyConstMode_optional SimFlowPlant_AirSupplyConstMode_;
        SimFlowPlant_NumUserDefinedConsts_optional SimFlowPlant_NumUserDefinedConsts_;
        SimFlowPlant_ConstName_1_5_optional SimFlowPlant_ConstName_1_5_;
        SimFlowPlant_MolarFract_1_5_optional SimFlowPlant_MolarFract_1_5_;
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

#endif // SIM_FLOW_PLANT_ELECTRICAL_GENERATOR_FUEL_CELL_AIR_SUPPLY_HXX
