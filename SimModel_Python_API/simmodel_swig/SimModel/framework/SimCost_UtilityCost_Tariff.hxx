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

#ifndef SIM_COST_UTILITY_COST_TARIFF_HXX
#define SIM_COST_UTILITY_COST_TARIFF_HXX

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
    namespace ResourcesGeneral
    {
      class SimCost_UtilityCost_Tariff;
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

#include "simcost_utilitycost.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class UtilCost_Comp_ComputeStep_1_30;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimCost_UtilityCost_Tariff: public ::schema::simxml::ResourcesGeneral::SimCost_UtilityCost
      {
        public:
        // SimCost_Name
        //
        typedef ::xml_schema::string SimCost_Name_type;
        typedef ::xsd::cxx::tree::optional< SimCost_Name_type > SimCost_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_Name_type, char > SimCost_Name_traits;

        const SimCost_Name_optional&
        SimCost_Name () const;

        SimCost_Name_optional&
        SimCost_Name ();

        void
        SimCost_Name (const SimCost_Name_type& x);

        void
        SimCost_Name (const SimCost_Name_optional& x);

        void
        SimCost_Name (::std::auto_ptr< SimCost_Name_type > p);

        // SimCost_OutputMeterName
        //
        typedef ::xml_schema::idref SimCost_OutputMeterName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_OutputMeterName_type > SimCost_OutputMeterName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_OutputMeterName_type, char > SimCost_OutputMeterName_traits;

        const SimCost_OutputMeterName_optional&
        SimCost_OutputMeterName () const;

        SimCost_OutputMeterName_optional&
        SimCost_OutputMeterName ();

        void
        SimCost_OutputMeterName (const SimCost_OutputMeterName_type& x);

        void
        SimCost_OutputMeterName (const SimCost_OutputMeterName_optional& x);

        void
        SimCost_OutputMeterName (::std::auto_ptr< SimCost_OutputMeterName_type > p);

        // SimCost_ConvFactorChoice
        //
        typedef ::xml_schema::string SimCost_ConvFactorChoice_type;
        typedef ::xsd::cxx::tree::optional< SimCost_ConvFactorChoice_type > SimCost_ConvFactorChoice_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_ConvFactorChoice_type, char > SimCost_ConvFactorChoice_traits;

        const SimCost_ConvFactorChoice_optional&
        SimCost_ConvFactorChoice () const;

        SimCost_ConvFactorChoice_optional&
        SimCost_ConvFactorChoice ();

        void
        SimCost_ConvFactorChoice (const SimCost_ConvFactorChoice_type& x);

        void
        SimCost_ConvFactorChoice (const SimCost_ConvFactorChoice_optional& x);

        void
        SimCost_ConvFactorChoice (::std::auto_ptr< SimCost_ConvFactorChoice_type > p);

        // SimCost_EnergyConvFactor
        //
        typedef ::xml_schema::double_ SimCost_EnergyConvFactor_type;
        typedef ::xsd::cxx::tree::optional< SimCost_EnergyConvFactor_type > SimCost_EnergyConvFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_EnergyConvFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimCost_EnergyConvFactor_traits;

        const SimCost_EnergyConvFactor_optional&
        SimCost_EnergyConvFactor () const;

        SimCost_EnergyConvFactor_optional&
        SimCost_EnergyConvFactor ();

        void
        SimCost_EnergyConvFactor (const SimCost_EnergyConvFactor_type& x);

        void
        SimCost_EnergyConvFactor (const SimCost_EnergyConvFactor_optional& x);

        // SimCost_DemandConvFactor
        //
        typedef ::xml_schema::double_ SimCost_DemandConvFactor_type;
        typedef ::xsd::cxx::tree::optional< SimCost_DemandConvFactor_type > SimCost_DemandConvFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_DemandConvFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimCost_DemandConvFactor_traits;

        const SimCost_DemandConvFactor_optional&
        SimCost_DemandConvFactor () const;

        SimCost_DemandConvFactor_optional&
        SimCost_DemandConvFactor ();

        void
        SimCost_DemandConvFactor (const SimCost_DemandConvFactor_type& x);

        void
        SimCost_DemandConvFactor (const SimCost_DemandConvFactor_optional& x);

        // SimCost_TimeUsePeriodSchedName
        //
        typedef ::xml_schema::idref SimCost_TimeUsePeriodSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_TimeUsePeriodSchedName_type > SimCost_TimeUsePeriodSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_TimeUsePeriodSchedName_type, char > SimCost_TimeUsePeriodSchedName_traits;

        const SimCost_TimeUsePeriodSchedName_optional&
        SimCost_TimeUsePeriodSchedName () const;

        SimCost_TimeUsePeriodSchedName_optional&
        SimCost_TimeUsePeriodSchedName ();

        void
        SimCost_TimeUsePeriodSchedName (const SimCost_TimeUsePeriodSchedName_type& x);

        void
        SimCost_TimeUsePeriodSchedName (const SimCost_TimeUsePeriodSchedName_optional& x);

        void
        SimCost_TimeUsePeriodSchedName (::std::auto_ptr< SimCost_TimeUsePeriodSchedName_type > p);

        // SimCost_SeasonSchedName
        //
        typedef ::xml_schema::idref SimCost_SeasonSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_SeasonSchedName_type > SimCost_SeasonSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_SeasonSchedName_type, char > SimCost_SeasonSchedName_traits;

        const SimCost_SeasonSchedName_optional&
        SimCost_SeasonSchedName () const;

        SimCost_SeasonSchedName_optional&
        SimCost_SeasonSchedName ();

        void
        SimCost_SeasonSchedName (const SimCost_SeasonSchedName_type& x);

        void
        SimCost_SeasonSchedName (const SimCost_SeasonSchedName_optional& x);

        void
        SimCost_SeasonSchedName (::std::auto_ptr< SimCost_SeasonSchedName_type > p);

        // SimCost_MonthSchedName
        //
        typedef ::xml_schema::idref SimCost_MonthSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_MonthSchedName_type > SimCost_MonthSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_MonthSchedName_type, char > SimCost_MonthSchedName_traits;

        const SimCost_MonthSchedName_optional&
        SimCost_MonthSchedName () const;

        SimCost_MonthSchedName_optional&
        SimCost_MonthSchedName ();

        void
        SimCost_MonthSchedName (const SimCost_MonthSchedName_type& x);

        void
        SimCost_MonthSchedName (const SimCost_MonthSchedName_optional& x);

        void
        SimCost_MonthSchedName (::std::auto_ptr< SimCost_MonthSchedName_type > p);

        // SimCost_DemandWindLength
        //
        typedef ::xml_schema::string SimCost_DemandWindLength_type;
        typedef ::xsd::cxx::tree::optional< SimCost_DemandWindLength_type > SimCost_DemandWindLength_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_DemandWindLength_type, char > SimCost_DemandWindLength_traits;

        const SimCost_DemandWindLength_optional&
        SimCost_DemandWindLength () const;

        SimCost_DemandWindLength_optional&
        SimCost_DemandWindLength ();

        void
        SimCost_DemandWindLength (const SimCost_DemandWindLength_type& x);

        void
        SimCost_DemandWindLength (const SimCost_DemandWindLength_optional& x);

        void
        SimCost_DemandWindLength (::std::auto_ptr< SimCost_DemandWindLength_type > p);

        // SimCost_MonthlyChargeVarName
        //
        typedef ::xml_schema::idref SimCost_MonthlyChargeVarName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_MonthlyChargeVarName_type > SimCost_MonthlyChargeVarName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_MonthlyChargeVarName_type, char > SimCost_MonthlyChargeVarName_traits;

        const SimCost_MonthlyChargeVarName_optional&
        SimCost_MonthlyChargeVarName () const;

        SimCost_MonthlyChargeVarName_optional&
        SimCost_MonthlyChargeVarName ();

        void
        SimCost_MonthlyChargeVarName (const SimCost_MonthlyChargeVarName_type& x);

        void
        SimCost_MonthlyChargeVarName (const SimCost_MonthlyChargeVarName_optional& x);

        void
        SimCost_MonthlyChargeVarName (::std::auto_ptr< SimCost_MonthlyChargeVarName_type > p);

        // SimCost_MinMonthlyChargeVarName
        //
        typedef ::xml_schema::idref SimCost_MinMonthlyChargeVarName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_MinMonthlyChargeVarName_type > SimCost_MinMonthlyChargeVarName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_MinMonthlyChargeVarName_type, char > SimCost_MinMonthlyChargeVarName_traits;

        const SimCost_MinMonthlyChargeVarName_optional&
        SimCost_MinMonthlyChargeVarName () const;

        SimCost_MinMonthlyChargeVarName_optional&
        SimCost_MinMonthlyChargeVarName ();

        void
        SimCost_MinMonthlyChargeVarName (const SimCost_MinMonthlyChargeVarName_type& x);

        void
        SimCost_MinMonthlyChargeVarName (const SimCost_MinMonthlyChargeVarName_optional& x);

        void
        SimCost_MinMonthlyChargeVarName (::std::auto_ptr< SimCost_MinMonthlyChargeVarName_type > p);

        // SimCost_RealTimePricingChargeSchedName
        //
        typedef ::xml_schema::idref SimCost_RealTimePricingChargeSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_RealTimePricingChargeSchedName_type > SimCost_RealTimePricingChargeSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_RealTimePricingChargeSchedName_type, char > SimCost_RealTimePricingChargeSchedName_traits;

        const SimCost_RealTimePricingChargeSchedName_optional&
        SimCost_RealTimePricingChargeSchedName () const;

        SimCost_RealTimePricingChargeSchedName_optional&
        SimCost_RealTimePricingChargeSchedName ();

        void
        SimCost_RealTimePricingChargeSchedName (const SimCost_RealTimePricingChargeSchedName_type& x);

        void
        SimCost_RealTimePricingChargeSchedName (const SimCost_RealTimePricingChargeSchedName_optional& x);

        void
        SimCost_RealTimePricingChargeSchedName (::std::auto_ptr< SimCost_RealTimePricingChargeSchedName_type > p);

        // SimCost_CustomerBaselineLoadSchedName
        //
        typedef ::xml_schema::idref SimCost_CustomerBaselineLoadSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_CustomerBaselineLoadSchedName_type > SimCost_CustomerBaselineLoadSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_CustomerBaselineLoadSchedName_type, char > SimCost_CustomerBaselineLoadSchedName_traits;

        const SimCost_CustomerBaselineLoadSchedName_optional&
        SimCost_CustomerBaselineLoadSchedName () const;

        SimCost_CustomerBaselineLoadSchedName_optional&
        SimCost_CustomerBaselineLoadSchedName ();

        void
        SimCost_CustomerBaselineLoadSchedName (const SimCost_CustomerBaselineLoadSchedName_type& x);

        void
        SimCost_CustomerBaselineLoadSchedName (const SimCost_CustomerBaselineLoadSchedName_optional& x);

        void
        SimCost_CustomerBaselineLoadSchedName (::std::auto_ptr< SimCost_CustomerBaselineLoadSchedName_type > p);

        // SimCost_GroupName
        //
        typedef ::xml_schema::string SimCost_GroupName_type;
        typedef ::xsd::cxx::tree::optional< SimCost_GroupName_type > SimCost_GroupName_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_GroupName_type, char > SimCost_GroupName_traits;

        const SimCost_GroupName_optional&
        SimCost_GroupName () const;

        SimCost_GroupName_optional&
        SimCost_GroupName ();

        void
        SimCost_GroupName (const SimCost_GroupName_type& x);

        void
        SimCost_GroupName (const SimCost_GroupName_optional& x);

        void
        SimCost_GroupName (::std::auto_ptr< SimCost_GroupName_type > p);

        // SimCost_BuyOrSell
        //
        typedef ::xml_schema::string SimCost_BuyOrSell_type;
        typedef ::xsd::cxx::tree::optional< SimCost_BuyOrSell_type > SimCost_BuyOrSell_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_BuyOrSell_type, char > SimCost_BuyOrSell_traits;

        const SimCost_BuyOrSell_optional&
        SimCost_BuyOrSell () const;

        SimCost_BuyOrSell_optional&
        SimCost_BuyOrSell ();

        void
        SimCost_BuyOrSell (const SimCost_BuyOrSell_type& x);

        void
        SimCost_BuyOrSell (const SimCost_BuyOrSell_optional& x);

        void
        SimCost_BuyOrSell (::std::auto_ptr< SimCost_BuyOrSell_type > p);

        // UtilCost_Comp_Name
        //
        typedef ::xml_schema::string UtilCost_Comp_Name_type;
        typedef ::xsd::cxx::tree::optional< UtilCost_Comp_Name_type > UtilCost_Comp_Name_optional;
        typedef ::xsd::cxx::tree::traits< UtilCost_Comp_Name_type, char > UtilCost_Comp_Name_traits;

        const UtilCost_Comp_Name_optional&
        UtilCost_Comp_Name () const;

        UtilCost_Comp_Name_optional&
        UtilCost_Comp_Name ();

        void
        UtilCost_Comp_Name (const UtilCost_Comp_Name_type& x);

        void
        UtilCost_Comp_Name (const UtilCost_Comp_Name_optional& x);

        void
        UtilCost_Comp_Name (::std::auto_ptr< UtilCost_Comp_Name_type > p);

        // UtilCost_Comp_TariffName
        //
        typedef ::xml_schema::idref UtilCost_Comp_TariffName_type;
        typedef ::xsd::cxx::tree::optional< UtilCost_Comp_TariffName_type > UtilCost_Comp_TariffName_optional;
        typedef ::xsd::cxx::tree::traits< UtilCost_Comp_TariffName_type, char > UtilCost_Comp_TariffName_traits;

        const UtilCost_Comp_TariffName_optional&
        UtilCost_Comp_TariffName () const;

        UtilCost_Comp_TariffName_optional&
        UtilCost_Comp_TariffName ();

        void
        UtilCost_Comp_TariffName (const UtilCost_Comp_TariffName_type& x);

        void
        UtilCost_Comp_TariffName (const UtilCost_Comp_TariffName_optional& x);

        void
        UtilCost_Comp_TariffName (::std::auto_ptr< UtilCost_Comp_TariffName_type > p);

        // UtilCost_Comp_ComputeStep_1_30
        //
        typedef ::schema::simxml::ResourcesGeneral::UtilCost_Comp_ComputeStep_1_30 UtilCost_Comp_ComputeStep_1_30_type;
        typedef ::xsd::cxx::tree::optional< UtilCost_Comp_ComputeStep_1_30_type > UtilCost_Comp_ComputeStep_1_30_optional;
        typedef ::xsd::cxx::tree::traits< UtilCost_Comp_ComputeStep_1_30_type, char > UtilCost_Comp_ComputeStep_1_30_traits;

        const UtilCost_Comp_ComputeStep_1_30_optional&
        UtilCost_Comp_ComputeStep_1_30 () const;

        UtilCost_Comp_ComputeStep_1_30_optional&
        UtilCost_Comp_ComputeStep_1_30 ();

        void
        UtilCost_Comp_ComputeStep_1_30 (const UtilCost_Comp_ComputeStep_1_30_type& x);

        void
        UtilCost_Comp_ComputeStep_1_30 (const UtilCost_Comp_ComputeStep_1_30_optional& x);

        void
        UtilCost_Comp_ComputeStep_1_30 (::std::auto_ptr< UtilCost_Comp_ComputeStep_1_30_type > p);

        // Constructors.
        //
        SimCost_UtilityCost_Tariff ();

        SimCost_UtilityCost_Tariff (const RefId_type&);

        SimCost_UtilityCost_Tariff (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f = 0,
                                    ::xml_schema::container* c = 0);

        SimCost_UtilityCost_Tariff (const SimCost_UtilityCost_Tariff& x,
                                    ::xml_schema::flags f = 0,
                                    ::xml_schema::container* c = 0);

        virtual SimCost_UtilityCost_Tariff*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimCost_UtilityCost_Tariff&
        operator= (const SimCost_UtilityCost_Tariff& x);

        virtual 
        ~SimCost_UtilityCost_Tariff ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimCost_Name_optional SimCost_Name_;
        SimCost_OutputMeterName_optional SimCost_OutputMeterName_;
        SimCost_ConvFactorChoice_optional SimCost_ConvFactorChoice_;
        SimCost_EnergyConvFactor_optional SimCost_EnergyConvFactor_;
        SimCost_DemandConvFactor_optional SimCost_DemandConvFactor_;
        SimCost_TimeUsePeriodSchedName_optional SimCost_TimeUsePeriodSchedName_;
        SimCost_SeasonSchedName_optional SimCost_SeasonSchedName_;
        SimCost_MonthSchedName_optional SimCost_MonthSchedName_;
        SimCost_DemandWindLength_optional SimCost_DemandWindLength_;
        SimCost_MonthlyChargeVarName_optional SimCost_MonthlyChargeVarName_;
        SimCost_MinMonthlyChargeVarName_optional SimCost_MinMonthlyChargeVarName_;
        SimCost_RealTimePricingChargeSchedName_optional SimCost_RealTimePricingChargeSchedName_;
        SimCost_CustomerBaselineLoadSchedName_optional SimCost_CustomerBaselineLoadSchedName_;
        SimCost_GroupName_optional SimCost_GroupName_;
        SimCost_BuyOrSell_optional SimCost_BuyOrSell_;
        UtilCost_Comp_Name_optional UtilCost_Comp_Name_;
        UtilCost_Comp_TariffName_optional UtilCost_Comp_TariffName_;
        UtilCost_Comp_ComputeStep_1_30_optional UtilCost_Comp_ComputeStep_1_30_;
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
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_COST_UTILITY_COST_TARIFF_HXX
