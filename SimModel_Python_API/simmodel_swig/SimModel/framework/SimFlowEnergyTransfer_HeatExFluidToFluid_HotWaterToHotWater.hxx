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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_FLUID_TO_FLUID_HOT_WATER_TO_HOT_WATER_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_FLUID_TO_FLUID_HOT_WATER_TO_HOT_WATER_HXX

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
      class SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater;
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

#include "simflowenergytransfer_heatexfluidtofluid.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_HeatExFluidToFluid
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

        // SimFlowEnergyTrans_CntlType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CntlType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CntlType_type > SimFlowEnergyTrans_CntlType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CntlType_type, char > SimFlowEnergyTrans_CntlType_traits;

        const SimFlowEnergyTrans_CntlType_optional&
        SimFlowEnergyTrans_CntlType () const;

        SimFlowEnergyTrans_CntlType_optional&
        SimFlowEnergyTrans_CntlType ();

        void
        SimFlowEnergyTrans_CntlType (const SimFlowEnergyTrans_CntlType_type& x);

        void
        SimFlowEnergyTrans_CntlType (const SimFlowEnergyTrans_CntlType_optional& x);

        void
        SimFlowEnergyTrans_CntlType (::std::auto_ptr< SimFlowEnergyTrans_CntlType_type > p);

        // SimFlowEnergyTrans_SizingFactor
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SizingFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SizingFactor_type > SimFlowEnergyTrans_SizingFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SizingFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SizingFactor_traits;

        const SimFlowEnergyTrans_SizingFactor_optional&
        SimFlowEnergyTrans_SizingFactor () const;

        SimFlowEnergyTrans_SizingFactor_optional&
        SimFlowEnergyTrans_SizingFactor ();

        void
        SimFlowEnergyTrans_SizingFactor (const SimFlowEnergyTrans_SizingFactor_type& x);

        void
        SimFlowEnergyTrans_SizingFactor (const SimFlowEnergyTrans_SizingFactor_optional& x);

        // SimFlowEnergyTrans_LoopDemndSideInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_LoopDemndSideInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoopDemndSideInletNodeName_type > SimFlowEnergyTrans_LoopDemndSideInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoopDemndSideInletNodeName_type, char > SimFlowEnergyTrans_LoopDemndSideInletNodeName_traits;

        const SimFlowEnergyTrans_LoopDemndSideInletNodeName_optional&
        SimFlowEnergyTrans_LoopDemndSideInletNodeName () const;

        SimFlowEnergyTrans_LoopDemndSideInletNodeName_optional&
        SimFlowEnergyTrans_LoopDemndSideInletNodeName ();

        void
        SimFlowEnergyTrans_LoopDemndSideInletNodeName (const SimFlowEnergyTrans_LoopDemndSideInletNodeName_type& x);

        void
        SimFlowEnergyTrans_LoopDemndSideInletNodeName (const SimFlowEnergyTrans_LoopDemndSideInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_LoopDemndSideInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_LoopDemndSideInletNodeName_type > p);

        // SimFlowEnergyTrans_LoopDemndSideOutletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_LoopDemndSideOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoopDemndSideOutletNodeName_type > SimFlowEnergyTrans_LoopDemndSideOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoopDemndSideOutletNodeName_type, char > SimFlowEnergyTrans_LoopDemndSideOutletNodeName_traits;

        const SimFlowEnergyTrans_LoopDemndSideOutletNodeName_optional&
        SimFlowEnergyTrans_LoopDemndSideOutletNodeName () const;

        SimFlowEnergyTrans_LoopDemndSideOutletNodeName_optional&
        SimFlowEnergyTrans_LoopDemndSideOutletNodeName ();

        void
        SimFlowEnergyTrans_LoopDemndSideOutletNodeName (const SimFlowEnergyTrans_LoopDemndSideOutletNodeName_type& x);

        void
        SimFlowEnergyTrans_LoopDemndSideOutletNodeName (const SimFlowEnergyTrans_LoopDemndSideOutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_LoopDemndSideOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_LoopDemndSideOutletNodeName_type > p);

        // SimFlowEnergyTrans_LoopDemndSideDesignFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_type > SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_traits;

        const SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_optional&
        SimFlowEnergyTrans_LoopDemndSideDesignFlowRate () const;

        SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_optional&
        SimFlowEnergyTrans_LoopDemndSideDesignFlowRate ();

        void
        SimFlowEnergyTrans_LoopDemndSideDesignFlowRate (const SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_type& x);

        void
        SimFlowEnergyTrans_LoopDemndSideDesignFlowRate (const SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_optional& x);

        // SimFlowEnergyTrans_LoopSupplySideInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_LoopSupplySideInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoopSupplySideInletNodeName_type > SimFlowEnergyTrans_LoopSupplySideInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoopSupplySideInletNodeName_type, char > SimFlowEnergyTrans_LoopSupplySideInletNodeName_traits;

        const SimFlowEnergyTrans_LoopSupplySideInletNodeName_optional&
        SimFlowEnergyTrans_LoopSupplySideInletNodeName () const;

        SimFlowEnergyTrans_LoopSupplySideInletNodeName_optional&
        SimFlowEnergyTrans_LoopSupplySideInletNodeName ();

        void
        SimFlowEnergyTrans_LoopSupplySideInletNodeName (const SimFlowEnergyTrans_LoopSupplySideInletNodeName_type& x);

        void
        SimFlowEnergyTrans_LoopSupplySideInletNodeName (const SimFlowEnergyTrans_LoopSupplySideInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_LoopSupplySideInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_LoopSupplySideInletNodeName_type > p);

        // SimFlowEnergyTrans_LoopSupplySideOutletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_LoopSupplySideOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoopSupplySideOutletNodeName_type > SimFlowEnergyTrans_LoopSupplySideOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoopSupplySideOutletNodeName_type, char > SimFlowEnergyTrans_LoopSupplySideOutletNodeName_traits;

        const SimFlowEnergyTrans_LoopSupplySideOutletNodeName_optional&
        SimFlowEnergyTrans_LoopSupplySideOutletNodeName () const;

        SimFlowEnergyTrans_LoopSupplySideOutletNodeName_optional&
        SimFlowEnergyTrans_LoopSupplySideOutletNodeName ();

        void
        SimFlowEnergyTrans_LoopSupplySideOutletNodeName (const SimFlowEnergyTrans_LoopSupplySideOutletNodeName_type& x);

        void
        SimFlowEnergyTrans_LoopSupplySideOutletNodeName (const SimFlowEnergyTrans_LoopSupplySideOutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_LoopSupplySideOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_LoopSupplySideOutletNodeName_type > p);

        // SimFlowEnergyTrans_LoopSupplySideDesignFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_type > SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_traits;

        const SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_optional&
        SimFlowEnergyTrans_LoopSupplySideDesignFlowRate () const;

        SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_optional&
        SimFlowEnergyTrans_LoopSupplySideDesignFlowRate ();

        void
        SimFlowEnergyTrans_LoopSupplySideDesignFlowRate (const SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_type& x);

        void
        SimFlowEnergyTrans_LoopSupplySideDesignFlowRate (const SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_optional& x);

        // SimFlowEnergyTrans_HeatExchangeModelType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_HeatExchangeModelType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatExchangeModelType_type > SimFlowEnergyTrans_HeatExchangeModelType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatExchangeModelType_type, char > SimFlowEnergyTrans_HeatExchangeModelType_traits;

        const SimFlowEnergyTrans_HeatExchangeModelType_optional&
        SimFlowEnergyTrans_HeatExchangeModelType () const;

        SimFlowEnergyTrans_HeatExchangeModelType_optional&
        SimFlowEnergyTrans_HeatExchangeModelType ();

        void
        SimFlowEnergyTrans_HeatExchangeModelType (const SimFlowEnergyTrans_HeatExchangeModelType_type& x);

        void
        SimFlowEnergyTrans_HeatExchangeModelType (const SimFlowEnergyTrans_HeatExchangeModelType_optional& x);

        void
        SimFlowEnergyTrans_HeatExchangeModelType (::std::auto_ptr< SimFlowEnergyTrans_HeatExchangeModelType_type > p);

        // SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_type > SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_traits;

        const SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_optional&
        SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal () const;

        SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_optional&
        SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal ();

        void
        SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal (const SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_type& x);

        void
        SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal (const SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_optional& x);

        // SimFlowEnergyTrans_HeatExchangerSetpointNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_HeatExchangerSetpointNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatExchangerSetpointNodeName_type > SimFlowEnergyTrans_HeatExchangerSetpointNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatExchangerSetpointNodeName_type, char > SimFlowEnergyTrans_HeatExchangerSetpointNodeName_traits;

        const SimFlowEnergyTrans_HeatExchangerSetpointNodeName_optional&
        SimFlowEnergyTrans_HeatExchangerSetpointNodeName () const;

        SimFlowEnergyTrans_HeatExchangerSetpointNodeName_optional&
        SimFlowEnergyTrans_HeatExchangerSetpointNodeName ();

        void
        SimFlowEnergyTrans_HeatExchangerSetpointNodeName (const SimFlowEnergyTrans_HeatExchangerSetpointNodeName_type& x);

        void
        SimFlowEnergyTrans_HeatExchangerSetpointNodeName (const SimFlowEnergyTrans_HeatExchangerSetpointNodeName_optional& x);

        void
        SimFlowEnergyTrans_HeatExchangerSetpointNodeName (::std::auto_ptr< SimFlowEnergyTrans_HeatExchangerSetpointNodeName_type > p);

        // SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_type > SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_traits;

        const SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_optional&
        SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng () const;

        SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_optional&
        SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng ();

        void
        SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng (const SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_type& x);

        void
        SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng (const SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_optional& x);

        // SimFlowEnergyTrans_HeatTransferMeteringEndUseType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_HeatTransferMeteringEndUseType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatTransferMeteringEndUseType_type > SimFlowEnergyTrans_HeatTransferMeteringEndUseType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatTransferMeteringEndUseType_type, char > SimFlowEnergyTrans_HeatTransferMeteringEndUseType_traits;

        const SimFlowEnergyTrans_HeatTransferMeteringEndUseType_optional&
        SimFlowEnergyTrans_HeatTransferMeteringEndUseType () const;

        SimFlowEnergyTrans_HeatTransferMeteringEndUseType_optional&
        SimFlowEnergyTrans_HeatTransferMeteringEndUseType ();

        void
        SimFlowEnergyTrans_HeatTransferMeteringEndUseType (const SimFlowEnergyTrans_HeatTransferMeteringEndUseType_type& x);

        void
        SimFlowEnergyTrans_HeatTransferMeteringEndUseType (const SimFlowEnergyTrans_HeatTransferMeteringEndUseType_optional& x);

        void
        SimFlowEnergyTrans_HeatTransferMeteringEndUseType (::std::auto_ptr< SimFlowEnergyTrans_HeatTransferMeteringEndUseType_type > p);

        // SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_type > SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_type, char > SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_traits;

        const SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_optional&
        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName () const;

        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_optional&
        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName ();

        void
        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName (const SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_type& x);

        void
        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName (const SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_type > p);

        // SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_type > SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_type, char > SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_traits;

        const SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_optional&
        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName () const;

        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_optional&
        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName ();

        void
        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName (const SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_type& x);

        void
        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName (const SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_type > p);

        // SimFlowEnergyTrans_CompOverrideCoolControlTempMode
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CompOverrideCoolControlTempMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CompOverrideCoolControlTempMode_type > SimFlowEnergyTrans_CompOverrideCoolControlTempMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CompOverrideCoolControlTempMode_type, char > SimFlowEnergyTrans_CompOverrideCoolControlTempMode_traits;

        const SimFlowEnergyTrans_CompOverrideCoolControlTempMode_optional&
        SimFlowEnergyTrans_CompOverrideCoolControlTempMode () const;

        SimFlowEnergyTrans_CompOverrideCoolControlTempMode_optional&
        SimFlowEnergyTrans_CompOverrideCoolControlTempMode ();

        void
        SimFlowEnergyTrans_CompOverrideCoolControlTempMode (const SimFlowEnergyTrans_CompOverrideCoolControlTempMode_type& x);

        void
        SimFlowEnergyTrans_CompOverrideCoolControlTempMode (const SimFlowEnergyTrans_CompOverrideCoolControlTempMode_optional& x);

        void
        SimFlowEnergyTrans_CompOverrideCoolControlTempMode (::std::auto_ptr< SimFlowEnergyTrans_CompOverrideCoolControlTempMode_type > p);

        // SimFlowEnergyTrans_OperMinTempLimit
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_OperMinTempLimit_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_OperMinTempLimit_type > SimFlowEnergyTrans_OperMinTempLimit_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_OperMinTempLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_OperMinTempLimit_traits;

        const SimFlowEnergyTrans_OperMinTempLimit_optional&
        SimFlowEnergyTrans_OperMinTempLimit () const;

        SimFlowEnergyTrans_OperMinTempLimit_optional&
        SimFlowEnergyTrans_OperMinTempLimit ();

        void
        SimFlowEnergyTrans_OperMinTempLimit (const SimFlowEnergyTrans_OperMinTempLimit_type& x);

        void
        SimFlowEnergyTrans_OperMinTempLimit (const SimFlowEnergyTrans_OperMinTempLimit_optional& x);

        // SimFlowEnergyTrans_OperMaxTempLimit
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_OperMaxTempLimit_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_OperMaxTempLimit_type > SimFlowEnergyTrans_OperMaxTempLimit_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_OperMaxTempLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_OperMaxTempLimit_traits;

        const SimFlowEnergyTrans_OperMaxTempLimit_optional&
        SimFlowEnergyTrans_OperMaxTempLimit () const;

        SimFlowEnergyTrans_OperMaxTempLimit_optional&
        SimFlowEnergyTrans_OperMaxTempLimit ();

        void
        SimFlowEnergyTrans_OperMaxTempLimit (const SimFlowEnergyTrans_OperMaxTempLimit_type& x);

        void
        SimFlowEnergyTrans_OperMaxTempLimit (const SimFlowEnergyTrans_OperMaxTempLimit_optional& x);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater ();

        SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater (const RefId_type&);

        SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater (const ::xercesc::DOMElement& e,
                                                                     ::xml_schema::flags f = 0,
                                                                     ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater (const SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater& x,
                                                                     ::xml_schema::flags f = 0,
                                                                     ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater&
        operator= (const SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatExFluidToFluid_HotWaterToHotWater ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_Name_optional SimFlowEnergyTrans_Name_;
        SimFlowEnergyTrans_AvailSchedName_optional SimFlowEnergyTrans_AvailSchedName_;
        SimFlowEnergyTrans_CntlType_optional SimFlowEnergyTrans_CntlType_;
        SimFlowEnergyTrans_SizingFactor_optional SimFlowEnergyTrans_SizingFactor_;
        SimFlowEnergyTrans_LoopDemndSideInletNodeName_optional SimFlowEnergyTrans_LoopDemndSideInletNodeName_;
        SimFlowEnergyTrans_LoopDemndSideOutletNodeName_optional SimFlowEnergyTrans_LoopDemndSideOutletNodeName_;
        SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_optional SimFlowEnergyTrans_LoopDemndSideDesignFlowRate_;
        SimFlowEnergyTrans_LoopSupplySideInletNodeName_optional SimFlowEnergyTrans_LoopSupplySideInletNodeName_;
        SimFlowEnergyTrans_LoopSupplySideOutletNodeName_optional SimFlowEnergyTrans_LoopSupplySideOutletNodeName_;
        SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_optional SimFlowEnergyTrans_LoopSupplySideDesignFlowRate_;
        SimFlowEnergyTrans_HeatExchangeModelType_optional SimFlowEnergyTrans_HeatExchangeModelType_;
        SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_optional SimFlowEnergyTrans_HeatExchngUFactorTimesAreaVal_;
        SimFlowEnergyTrans_HeatExchangerSetpointNodeName_optional SimFlowEnergyTrans_HeatExchangerSetpointNodeName_;
        SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_optional SimFlowEnergyTrans_MinTempDiffToActivateHeatExchng_;
        SimFlowEnergyTrans_HeatTransferMeteringEndUseType_optional SimFlowEnergyTrans_HeatTransferMeteringEndUseType_;
        SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_optional SimFlowEnergyTrans_CompOverrideLoopSupplySideInletNodeName_;
        SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_optional SimFlowEnergyTrans_CompOverrideLoopDemndSideInletNodeName_;
        SimFlowEnergyTrans_CompOverrideCoolControlTempMode_optional SimFlowEnergyTrans_CompOverrideCoolControlTempMode_;
        SimFlowEnergyTrans_OperMinTempLimit_optional SimFlowEnergyTrans_OperMinTempLimit_;
        SimFlowEnergyTrans_OperMaxTempLimit_optional SimFlowEnergyTrans_OperMaxTempLimit_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_FLUID_TO_FLUID_HOT_WATER_TO_HOT_WATER_HXX
