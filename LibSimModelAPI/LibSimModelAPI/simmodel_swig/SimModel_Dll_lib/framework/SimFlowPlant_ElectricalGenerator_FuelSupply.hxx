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

#ifndef SIM_FLOW_PLANT_ELECTRICAL_GENERATOR_FUEL_SUPPLY_HXX
#define SIM_FLOW_PLANT_ELECTRICAL_GENERATOR_FUEL_SUPPLY_HXX

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
      class SimFlowPlant_ElectricalGenerator_FuelSupply;
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
      class SimFlowPlant_ConstName_1_12;
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
      class SimFlowPlant_ElectricalGenerator_FuelSupply: public ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator
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

        // SimFlowPlant_FuelType
        //
        typedef ::xml_schema::string SimFlowPlant_FuelType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_FuelType_type > SimFlowPlant_FuelType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_FuelType_type, char > SimFlowPlant_FuelType_traits;

        const SimFlowPlant_FuelType_optional&
        SimFlowPlant_FuelType () const;

        SimFlowPlant_FuelType_optional&
        SimFlowPlant_FuelType ();

        void
        SimFlowPlant_FuelType (const SimFlowPlant_FuelType_type& x);

        void
        SimFlowPlant_FuelType (const SimFlowPlant_FuelType_optional& x);

        void
        SimFlowPlant_FuelType (::std::auto_ptr< SimFlowPlant_FuelType_type > p);

        // SimFlowPlant_FuelTempModelingMode
        //
        typedef ::xml_schema::string SimFlowPlant_FuelTempModelingMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_FuelTempModelingMode_type > SimFlowPlant_FuelTempModelingMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_FuelTempModelingMode_type, char > SimFlowPlant_FuelTempModelingMode_traits;

        const SimFlowPlant_FuelTempModelingMode_optional&
        SimFlowPlant_FuelTempModelingMode () const;

        SimFlowPlant_FuelTempModelingMode_optional&
        SimFlowPlant_FuelTempModelingMode ();

        void
        SimFlowPlant_FuelTempModelingMode (const SimFlowPlant_FuelTempModelingMode_type& x);

        void
        SimFlowPlant_FuelTempModelingMode (const SimFlowPlant_FuelTempModelingMode_optional& x);

        void
        SimFlowPlant_FuelTempModelingMode (::std::auto_ptr< SimFlowPlant_FuelTempModelingMode_type > p);

        // SimFlowPlant_FuelTempRefNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_FuelTempRefNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_FuelTempRefNodeName_type > SimFlowPlant_FuelTempRefNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_FuelTempRefNodeName_type, char > SimFlowPlant_FuelTempRefNodeName_traits;

        const SimFlowPlant_FuelTempRefNodeName_optional&
        SimFlowPlant_FuelTempRefNodeName () const;

        SimFlowPlant_FuelTempRefNodeName_optional&
        SimFlowPlant_FuelTempRefNodeName ();

        void
        SimFlowPlant_FuelTempRefNodeName (const SimFlowPlant_FuelTempRefNodeName_type& x);

        void
        SimFlowPlant_FuelTempRefNodeName (const SimFlowPlant_FuelTempRefNodeName_optional& x);

        void
        SimFlowPlant_FuelTempRefNodeName (::std::auto_ptr< SimFlowPlant_FuelTempRefNodeName_type > p);

        // SimFlowPlant_FuelTempSchedName
        //
        typedef ::xml_schema::idref SimFlowPlant_FuelTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_FuelTempSchedName_type > SimFlowPlant_FuelTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_FuelTempSchedName_type, char > SimFlowPlant_FuelTempSchedName_traits;

        const SimFlowPlant_FuelTempSchedName_optional&
        SimFlowPlant_FuelTempSchedName () const;

        SimFlowPlant_FuelTempSchedName_optional&
        SimFlowPlant_FuelTempSchedName ();

        void
        SimFlowPlant_FuelTempSchedName (const SimFlowPlant_FuelTempSchedName_type& x);

        void
        SimFlowPlant_FuelTempSchedName (const SimFlowPlant_FuelTempSchedName_optional& x);

        void
        SimFlowPlant_FuelTempSchedName (::std::auto_ptr< SimFlowPlant_FuelTempSchedName_type > p);

        // SimFlowPlant_CompPwrFuncFuelRateCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_CompPwrFuncFuelRateCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CompPwrFuncFuelRateCurveName_type > SimFlowPlant_CompPwrFuncFuelRateCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CompPwrFuncFuelRateCurveName_type, char > SimFlowPlant_CompPwrFuncFuelRateCurveName_traits;

        const SimFlowPlant_CompPwrFuncFuelRateCurveName_optional&
        SimFlowPlant_CompPwrFuncFuelRateCurveName () const;

        SimFlowPlant_CompPwrFuncFuelRateCurveName_optional&
        SimFlowPlant_CompPwrFuncFuelRateCurveName ();

        void
        SimFlowPlant_CompPwrFuncFuelRateCurveName (const SimFlowPlant_CompPwrFuncFuelRateCurveName_type& x);

        void
        SimFlowPlant_CompPwrFuncFuelRateCurveName (const SimFlowPlant_CompPwrFuncFuelRateCurveName_optional& x);

        void
        SimFlowPlant_CompPwrFuncFuelRateCurveName (::std::auto_ptr< SimFlowPlant_CompPwrFuncFuelRateCurveName_type > p);

        // SimFlowPlant_CompHeatLossFactor
        //
        typedef ::xml_schema::double_ SimFlowPlant_CompHeatLossFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CompHeatLossFactor_type > SimFlowPlant_CompHeatLossFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CompHeatLossFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_CompHeatLossFactor_traits;

        const SimFlowPlant_CompHeatLossFactor_optional&
        SimFlowPlant_CompHeatLossFactor () const;

        SimFlowPlant_CompHeatLossFactor_optional&
        SimFlowPlant_CompHeatLossFactor ();

        void
        SimFlowPlant_CompHeatLossFactor (const SimFlowPlant_CompHeatLossFactor_type& x);

        void
        SimFlowPlant_CompHeatLossFactor (const SimFlowPlant_CompHeatLossFactor_optional& x);

        // SimFlowPlant_LiqGenericFuelLowHeatingVal
        //
        typedef ::xml_schema::double_ SimFlowPlant_LiqGenericFuelLowHeatingVal_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_LiqGenericFuelLowHeatingVal_type > SimFlowPlant_LiqGenericFuelLowHeatingVal_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_LiqGenericFuelLowHeatingVal_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_LiqGenericFuelLowHeatingVal_traits;

        const SimFlowPlant_LiqGenericFuelLowHeatingVal_optional&
        SimFlowPlant_LiqGenericFuelLowHeatingVal () const;

        SimFlowPlant_LiqGenericFuelLowHeatingVal_optional&
        SimFlowPlant_LiqGenericFuelLowHeatingVal ();

        void
        SimFlowPlant_LiqGenericFuelLowHeatingVal (const SimFlowPlant_LiqGenericFuelLowHeatingVal_type& x);

        void
        SimFlowPlant_LiqGenericFuelLowHeatingVal (const SimFlowPlant_LiqGenericFuelLowHeatingVal_optional& x);

        // SimFlowPlant_LiqGenericFuelHigherHeatingVal
        //
        typedef ::xml_schema::double_ SimFlowPlant_LiqGenericFuelHigherHeatingVal_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_LiqGenericFuelHigherHeatingVal_type > SimFlowPlant_LiqGenericFuelHigherHeatingVal_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_LiqGenericFuelHigherHeatingVal_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_LiqGenericFuelHigherHeatingVal_traits;

        const SimFlowPlant_LiqGenericFuelHigherHeatingVal_optional&
        SimFlowPlant_LiqGenericFuelHigherHeatingVal () const;

        SimFlowPlant_LiqGenericFuelHigherHeatingVal_optional&
        SimFlowPlant_LiqGenericFuelHigherHeatingVal ();

        void
        SimFlowPlant_LiqGenericFuelHigherHeatingVal (const SimFlowPlant_LiqGenericFuelHigherHeatingVal_type& x);

        void
        SimFlowPlant_LiqGenericFuelHigherHeatingVal (const SimFlowPlant_LiqGenericFuelHigherHeatingVal_optional& x);

        // SimFlowPlant_LiqGenericFuelMolecularWeight
        //
        typedef ::xml_schema::double_ SimFlowPlant_LiqGenericFuelMolecularWeight_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_LiqGenericFuelMolecularWeight_type > SimFlowPlant_LiqGenericFuelMolecularWeight_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_LiqGenericFuelMolecularWeight_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_LiqGenericFuelMolecularWeight_traits;

        const SimFlowPlant_LiqGenericFuelMolecularWeight_optional&
        SimFlowPlant_LiqGenericFuelMolecularWeight () const;

        SimFlowPlant_LiqGenericFuelMolecularWeight_optional&
        SimFlowPlant_LiqGenericFuelMolecularWeight ();

        void
        SimFlowPlant_LiqGenericFuelMolecularWeight (const SimFlowPlant_LiqGenericFuelMolecularWeight_type& x);

        void
        SimFlowPlant_LiqGenericFuelMolecularWeight (const SimFlowPlant_LiqGenericFuelMolecularWeight_optional& x);

        // SimFlowPlant_LiqGenericFuelCO2EmissionFactor
        //
        typedef ::xml_schema::double_ SimFlowPlant_LiqGenericFuelCO2EmissionFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_LiqGenericFuelCO2EmissionFactor_type > SimFlowPlant_LiqGenericFuelCO2EmissionFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_LiqGenericFuelCO2EmissionFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_LiqGenericFuelCO2EmissionFactor_traits;

        const SimFlowPlant_LiqGenericFuelCO2EmissionFactor_optional&
        SimFlowPlant_LiqGenericFuelCO2EmissionFactor () const;

        SimFlowPlant_LiqGenericFuelCO2EmissionFactor_optional&
        SimFlowPlant_LiqGenericFuelCO2EmissionFactor ();

        void
        SimFlowPlant_LiqGenericFuelCO2EmissionFactor (const SimFlowPlant_LiqGenericFuelCO2EmissionFactor_type& x);

        void
        SimFlowPlant_LiqGenericFuelCO2EmissionFactor (const SimFlowPlant_LiqGenericFuelCO2EmissionFactor_optional& x);

        // SimFlowPlant_NumConstsGaseousConstFuelSupply
        //
        typedef ::xml_schema::double_ SimFlowPlant_NumConstsGaseousConstFuelSupply_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_NumConstsGaseousConstFuelSupply_type > SimFlowPlant_NumConstsGaseousConstFuelSupply_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_NumConstsGaseousConstFuelSupply_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_NumConstsGaseousConstFuelSupply_traits;

        const SimFlowPlant_NumConstsGaseousConstFuelSupply_optional&
        SimFlowPlant_NumConstsGaseousConstFuelSupply () const;

        SimFlowPlant_NumConstsGaseousConstFuelSupply_optional&
        SimFlowPlant_NumConstsGaseousConstFuelSupply ();

        void
        SimFlowPlant_NumConstsGaseousConstFuelSupply (const SimFlowPlant_NumConstsGaseousConstFuelSupply_type& x);

        void
        SimFlowPlant_NumConstsGaseousConstFuelSupply (const SimFlowPlant_NumConstsGaseousConstFuelSupply_optional& x);

        // SimFlowPlant_ConstName_1_12
        //
        typedef ::schema::simxml::MepModel::SimFlowPlant_ConstName_1_12 SimFlowPlant_ConstName_1_12_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ConstName_1_12_type > SimFlowPlant_ConstName_1_12_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ConstName_1_12_type, char > SimFlowPlant_ConstName_1_12_traits;

        const SimFlowPlant_ConstName_1_12_optional&
        SimFlowPlant_ConstName_1_12 () const;

        SimFlowPlant_ConstName_1_12_optional&
        SimFlowPlant_ConstName_1_12 ();

        void
        SimFlowPlant_ConstName_1_12 (const SimFlowPlant_ConstName_1_12_type& x);

        void
        SimFlowPlant_ConstName_1_12 (const SimFlowPlant_ConstName_1_12_optional& x);

        void
        SimFlowPlant_ConstName_1_12 (::std::auto_ptr< SimFlowPlant_ConstName_1_12_type > p);

        // SimFlowPlant_ConstMolarFract_1_12
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowPlant_ConstMolarFract_1_12_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ConstMolarFract_1_12_type > SimFlowPlant_ConstMolarFract_1_12_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ConstMolarFract_1_12_type, char > SimFlowPlant_ConstMolarFract_1_12_traits;

        const SimFlowPlant_ConstMolarFract_1_12_optional&
        SimFlowPlant_ConstMolarFract_1_12 () const;

        SimFlowPlant_ConstMolarFract_1_12_optional&
        SimFlowPlant_ConstMolarFract_1_12 ();

        void
        SimFlowPlant_ConstMolarFract_1_12 (const SimFlowPlant_ConstMolarFract_1_12_type& x);

        void
        SimFlowPlant_ConstMolarFract_1_12 (const SimFlowPlant_ConstMolarFract_1_12_optional& x);

        void
        SimFlowPlant_ConstMolarFract_1_12 (::std::auto_ptr< SimFlowPlant_ConstMolarFract_1_12_type > p);

        // Constructors.
        //
        SimFlowPlant_ElectricalGenerator_FuelSupply ();

        SimFlowPlant_ElectricalGenerator_FuelSupply (const RefId_type&);

        SimFlowPlant_ElectricalGenerator_FuelSupply (const ::xercesc::DOMElement& e,
                                                     ::xml_schema::flags f = 0,
                                                     ::xml_schema::container* c = 0);

        SimFlowPlant_ElectricalGenerator_FuelSupply (const SimFlowPlant_ElectricalGenerator_FuelSupply& x,
                                                     ::xml_schema::flags f = 0,
                                                     ::xml_schema::container* c = 0);

        virtual SimFlowPlant_ElectricalGenerator_FuelSupply*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowPlant_ElectricalGenerator_FuelSupply&
        operator= (const SimFlowPlant_ElectricalGenerator_FuelSupply& x);

        virtual 
        ~SimFlowPlant_ElectricalGenerator_FuelSupply ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowPlant_Name_optional SimFlowPlant_Name_;
        SimFlowPlant_FuelType_optional SimFlowPlant_FuelType_;
        SimFlowPlant_FuelTempModelingMode_optional SimFlowPlant_FuelTempModelingMode_;
        SimFlowPlant_FuelTempRefNodeName_optional SimFlowPlant_FuelTempRefNodeName_;
        SimFlowPlant_FuelTempSchedName_optional SimFlowPlant_FuelTempSchedName_;
        SimFlowPlant_CompPwrFuncFuelRateCurveName_optional SimFlowPlant_CompPwrFuncFuelRateCurveName_;
        SimFlowPlant_CompHeatLossFactor_optional SimFlowPlant_CompHeatLossFactor_;
        SimFlowPlant_LiqGenericFuelLowHeatingVal_optional SimFlowPlant_LiqGenericFuelLowHeatingVal_;
        SimFlowPlant_LiqGenericFuelHigherHeatingVal_optional SimFlowPlant_LiqGenericFuelHigherHeatingVal_;
        SimFlowPlant_LiqGenericFuelMolecularWeight_optional SimFlowPlant_LiqGenericFuelMolecularWeight_;
        SimFlowPlant_LiqGenericFuelCO2EmissionFactor_optional SimFlowPlant_LiqGenericFuelCO2EmissionFactor_;
        SimFlowPlant_NumConstsGaseousConstFuelSupply_optional SimFlowPlant_NumConstsGaseousConstFuelSupply_;
        SimFlowPlant_ConstName_1_12_optional SimFlowPlant_ConstName_1_12_;
        SimFlowPlant_ConstMolarFract_1_12_optional SimFlowPlant_ConstMolarFract_1_12_;
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

#endif // SIM_FLOW_PLANT_ELECTRICAL_GENERATOR_FUEL_SUPPLY_HXX