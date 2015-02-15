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

#ifndef SIM_FLOW_PLANT_CHILLER_CHILLER_VAPOR_COMPRESSION_ELECTRIC_REFORMULATED_EIR_HXX
#define SIM_FLOW_PLANT_CHILLER_CHILLER_VAPOR_COMPRESSION_ELECTRIC_REFORMULATED_EIR_HXX

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
      class SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR;
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

#include "simflowplant_chiller.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR: public ::namespaces::Sim::MepModel::SimFlowPlant_Chiller
      {
        public:
        // SimFlowPlant_MinPartLoadRatio
        //
        typedef ::xml_schema::double_ SimFlowPlant_MinPartLoadRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_MinPartLoadRatio_type > SimFlowPlant_MinPartLoadRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_MinPartLoadRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_MinPartLoadRatio_traits;

        const SimFlowPlant_MinPartLoadRatio_optional&
        SimFlowPlant_MinPartLoadRatio () const;

        SimFlowPlant_MinPartLoadRatio_optional&
        SimFlowPlant_MinPartLoadRatio ();

        void
        SimFlowPlant_MinPartLoadRatio (const SimFlowPlant_MinPartLoadRatio_type& x);

        void
        SimFlowPlant_MinPartLoadRatio (const SimFlowPlant_MinPartLoadRatio_optional& x);

        // SimFlowPlant_MaxPartLoadRatio
        //
        typedef ::xml_schema::double_ SimFlowPlant_MaxPartLoadRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_MaxPartLoadRatio_type > SimFlowPlant_MaxPartLoadRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_MaxPartLoadRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_MaxPartLoadRatio_traits;

        const SimFlowPlant_MaxPartLoadRatio_optional&
        SimFlowPlant_MaxPartLoadRatio () const;

        SimFlowPlant_MaxPartLoadRatio_optional&
        SimFlowPlant_MaxPartLoadRatio ();

        void
        SimFlowPlant_MaxPartLoadRatio (const SimFlowPlant_MaxPartLoadRatio_type& x);

        void
        SimFlowPlant_MaxPartLoadRatio (const SimFlowPlant_MaxPartLoadRatio_optional& x);

        // SimFlowPlant_OptimumPartLoadRatio
        //
        typedef ::xml_schema::double_ SimFlowPlant_OptimumPartLoadRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_OptimumPartLoadRatio_type > SimFlowPlant_OptimumPartLoadRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_OptimumPartLoadRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_OptimumPartLoadRatio_traits;

        const SimFlowPlant_OptimumPartLoadRatio_optional&
        SimFlowPlant_OptimumPartLoadRatio () const;

        SimFlowPlant_OptimumPartLoadRatio_optional&
        SimFlowPlant_OptimumPartLoadRatio ();

        void
        SimFlowPlant_OptimumPartLoadRatio (const SimFlowPlant_OptimumPartLoadRatio_type& x);

        void
        SimFlowPlant_OptimumPartLoadRatio (const SimFlowPlant_OptimumPartLoadRatio_optional& x);

        // SimFlowPlant_SizingFactor
        //
        typedef ::xml_schema::double_ SimFlowPlant_SizingFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SizingFactor_type > SimFlowPlant_SizingFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SizingFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_SizingFactor_traits;

        const SimFlowPlant_SizingFactor_optional&
        SimFlowPlant_SizingFactor () const;

        SimFlowPlant_SizingFactor_optional&
        SimFlowPlant_SizingFactor ();

        void
        SimFlowPlant_SizingFactor (const SimFlowPlant_SizingFactor_type& x);

        void
        SimFlowPlant_SizingFactor (const SimFlowPlant_SizingFactor_optional& x);

        // SimFlowPlant_RefCap
        //
        typedef ::xml_schema::double_ SimFlowPlant_RefCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RefCap_type > SimFlowPlant_RefCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RefCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RefCap_traits;

        const SimFlowPlant_RefCap_optional&
        SimFlowPlant_RefCap () const;

        SimFlowPlant_RefCap_optional&
        SimFlowPlant_RefCap ();

        void
        SimFlowPlant_RefCap (const SimFlowPlant_RefCap_type& x);

        void
        SimFlowPlant_RefCap (const SimFlowPlant_RefCap_optional& x);

        // SimFlowPlant_RefCOP
        //
        typedef ::xml_schema::double_ SimFlowPlant_RefCOP_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RefCOP_type > SimFlowPlant_RefCOP_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RefCOP_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RefCOP_traits;

        const SimFlowPlant_RefCOP_optional&
        SimFlowPlant_RefCOP () const;

        SimFlowPlant_RefCOP_optional&
        SimFlowPlant_RefCOP ();

        void
        SimFlowPlant_RefCOP (const SimFlowPlant_RefCOP_type& x);

        void
        SimFlowPlant_RefCOP (const SimFlowPlant_RefCOP_optional& x);

        // SimFlowPlant_RefLeavChilledWaterTemp
        //
        typedef ::xml_schema::double_ SimFlowPlant_RefLeavChilledWaterTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RefLeavChilledWaterTemp_type > SimFlowPlant_RefLeavChilledWaterTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RefLeavChilledWaterTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RefLeavChilledWaterTemp_traits;

        const SimFlowPlant_RefLeavChilledWaterTemp_optional&
        SimFlowPlant_RefLeavChilledWaterTemp () const;

        SimFlowPlant_RefLeavChilledWaterTemp_optional&
        SimFlowPlant_RefLeavChilledWaterTemp ();

        void
        SimFlowPlant_RefLeavChilledWaterTemp (const SimFlowPlant_RefLeavChilledWaterTemp_type& x);

        void
        SimFlowPlant_RefLeavChilledWaterTemp (const SimFlowPlant_RefLeavChilledWaterTemp_optional& x);

        // SimFlowPlant_RefChilledWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowPlant_RefChilledWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RefChilledWaterFlowRate_type > SimFlowPlant_RefChilledWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RefChilledWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RefChilledWaterFlowRate_traits;

        const SimFlowPlant_RefChilledWaterFlowRate_optional&
        SimFlowPlant_RefChilledWaterFlowRate () const;

        SimFlowPlant_RefChilledWaterFlowRate_optional&
        SimFlowPlant_RefChilledWaterFlowRate ();

        void
        SimFlowPlant_RefChilledWaterFlowRate (const SimFlowPlant_RefChilledWaterFlowRate_type& x);

        void
        SimFlowPlant_RefChilledWaterFlowRate (const SimFlowPlant_RefChilledWaterFlowRate_optional& x);

        // SimFlowPlant_CoolingCapFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_CoolingCapFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CoolingCapFuncTempCurveName_type > SimFlowPlant_CoolingCapFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CoolingCapFuncTempCurveName_type, char > SimFlowPlant_CoolingCapFuncTempCurveName_traits;

        const SimFlowPlant_CoolingCapFuncTempCurveName_optional&
        SimFlowPlant_CoolingCapFuncTempCurveName () const;

        SimFlowPlant_CoolingCapFuncTempCurveName_optional&
        SimFlowPlant_CoolingCapFuncTempCurveName ();

        void
        SimFlowPlant_CoolingCapFuncTempCurveName (const SimFlowPlant_CoolingCapFuncTempCurveName_type& x);

        void
        SimFlowPlant_CoolingCapFuncTempCurveName (const SimFlowPlant_CoolingCapFuncTempCurveName_optional& x);

        void
        SimFlowPlant_CoolingCapFuncTempCurveName (::std::auto_ptr< SimFlowPlant_CoolingCapFuncTempCurveName_type > p);

        // SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_type > SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_type, char > SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_traits;

        const SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_optional&
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName () const;

        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_optional&
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName ();

        void
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName (const SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_type& x);

        void
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName (const SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_optional& x);

        void
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName (::std::auto_ptr< SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_type > p);

        // SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName
        //
        typedef ::xml_schema::idref SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_type > SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_type, char > SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_traits;

        const SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_optional&
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName () const;

        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_optional&
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName ();

        void
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName (const SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_type& x);

        void
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName (const SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_optional& x);

        void
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName (::std::auto_ptr< SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_type > p);

        // SimFlowPlant_MinUnloadingRatio
        //
        typedef ::xml_schema::double_ SimFlowPlant_MinUnloadingRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_MinUnloadingRatio_type > SimFlowPlant_MinUnloadingRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_MinUnloadingRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_MinUnloadingRatio_traits;

        const SimFlowPlant_MinUnloadingRatio_optional&
        SimFlowPlant_MinUnloadingRatio () const;

        SimFlowPlant_MinUnloadingRatio_optional&
        SimFlowPlant_MinUnloadingRatio ();

        void
        SimFlowPlant_MinUnloadingRatio (const SimFlowPlant_MinUnloadingRatio_type& x);

        void
        SimFlowPlant_MinUnloadingRatio (const SimFlowPlant_MinUnloadingRatio_optional& x);

        // SimFlowPlant_ChilledWaterInletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_ChilledWaterInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ChilledWaterInletNodeName_type > SimFlowPlant_ChilledWaterInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ChilledWaterInletNodeName_type, char > SimFlowPlant_ChilledWaterInletNodeName_traits;

        const SimFlowPlant_ChilledWaterInletNodeName_optional&
        SimFlowPlant_ChilledWaterInletNodeName () const;

        SimFlowPlant_ChilledWaterInletNodeName_optional&
        SimFlowPlant_ChilledWaterInletNodeName ();

        void
        SimFlowPlant_ChilledWaterInletNodeName (const SimFlowPlant_ChilledWaterInletNodeName_type& x);

        void
        SimFlowPlant_ChilledWaterInletNodeName (const SimFlowPlant_ChilledWaterInletNodeName_optional& x);

        void
        SimFlowPlant_ChilledWaterInletNodeName (::std::auto_ptr< SimFlowPlant_ChilledWaterInletNodeName_type > p);

        // SimFlowPlant_ChilledWaterOutletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_ChilledWaterOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ChilledWaterOutletNodeName_type > SimFlowPlant_ChilledWaterOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ChilledWaterOutletNodeName_type, char > SimFlowPlant_ChilledWaterOutletNodeName_traits;

        const SimFlowPlant_ChilledWaterOutletNodeName_optional&
        SimFlowPlant_ChilledWaterOutletNodeName () const;

        SimFlowPlant_ChilledWaterOutletNodeName_optional&
        SimFlowPlant_ChilledWaterOutletNodeName ();

        void
        SimFlowPlant_ChilledWaterOutletNodeName (const SimFlowPlant_ChilledWaterOutletNodeName_type& x);

        void
        SimFlowPlant_ChilledWaterOutletNodeName (const SimFlowPlant_ChilledWaterOutletNodeName_optional& x);

        void
        SimFlowPlant_ChilledWaterOutletNodeName (::std::auto_ptr< SimFlowPlant_ChilledWaterOutletNodeName_type > p);

        // SimFlowPlant_CondInletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_CondInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CondInletNodeName_type > SimFlowPlant_CondInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CondInletNodeName_type, char > SimFlowPlant_CondInletNodeName_traits;

        const SimFlowPlant_CondInletNodeName_optional&
        SimFlowPlant_CondInletNodeName () const;

        SimFlowPlant_CondInletNodeName_optional&
        SimFlowPlant_CondInletNodeName ();

        void
        SimFlowPlant_CondInletNodeName (const SimFlowPlant_CondInletNodeName_type& x);

        void
        SimFlowPlant_CondInletNodeName (const SimFlowPlant_CondInletNodeName_optional& x);

        void
        SimFlowPlant_CondInletNodeName (::std::auto_ptr< SimFlowPlant_CondInletNodeName_type > p);

        // SimFlowPlant_CondOutletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_CondOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CondOutletNodeName_type > SimFlowPlant_CondOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CondOutletNodeName_type, char > SimFlowPlant_CondOutletNodeName_traits;

        const SimFlowPlant_CondOutletNodeName_optional&
        SimFlowPlant_CondOutletNodeName () const;

        SimFlowPlant_CondOutletNodeName_optional&
        SimFlowPlant_CondOutletNodeName ();

        void
        SimFlowPlant_CondOutletNodeName (const SimFlowPlant_CondOutletNodeName_type& x);

        void
        SimFlowPlant_CondOutletNodeName (const SimFlowPlant_CondOutletNodeName_optional& x);

        void
        SimFlowPlant_CondOutletNodeName (::std::auto_ptr< SimFlowPlant_CondOutletNodeName_type > p);

        // SimFlowPlant_CompMotorEff
        //
        typedef ::xml_schema::double_ SimFlowPlant_CompMotorEff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CompMotorEff_type > SimFlowPlant_CompMotorEff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CompMotorEff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_CompMotorEff_traits;

        const SimFlowPlant_CompMotorEff_optional&
        SimFlowPlant_CompMotorEff () const;

        SimFlowPlant_CompMotorEff_optional&
        SimFlowPlant_CompMotorEff ();

        void
        SimFlowPlant_CompMotorEff (const SimFlowPlant_CompMotorEff_type& x);

        void
        SimFlowPlant_CompMotorEff (const SimFlowPlant_CompMotorEff_optional& x);

        // SimFlowPlant_LeavChilledWaterLowTempLimit
        //
        typedef ::xml_schema::double_ SimFlowPlant_LeavChilledWaterLowTempLimit_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_LeavChilledWaterLowTempLimit_type > SimFlowPlant_LeavChilledWaterLowTempLimit_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_LeavChilledWaterLowTempLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_LeavChilledWaterLowTempLimit_traits;

        const SimFlowPlant_LeavChilledWaterLowTempLimit_optional&
        SimFlowPlant_LeavChilledWaterLowTempLimit () const;

        SimFlowPlant_LeavChilledWaterLowTempLimit_optional&
        SimFlowPlant_LeavChilledWaterLowTempLimit ();

        void
        SimFlowPlant_LeavChilledWaterLowTempLimit (const SimFlowPlant_LeavChilledWaterLowTempLimit_type& x);

        void
        SimFlowPlant_LeavChilledWaterLowTempLimit (const SimFlowPlant_LeavChilledWaterLowTempLimit_optional& x);

        // SimFlowPlant_DesignHeatRecovWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowPlant_DesignHeatRecovWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_DesignHeatRecovWaterFlowRate_type > SimFlowPlant_DesignHeatRecovWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_DesignHeatRecovWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_DesignHeatRecovWaterFlowRate_traits;

        const SimFlowPlant_DesignHeatRecovWaterFlowRate_optional&
        SimFlowPlant_DesignHeatRecovWaterFlowRate () const;

        SimFlowPlant_DesignHeatRecovWaterFlowRate_optional&
        SimFlowPlant_DesignHeatRecovWaterFlowRate ();

        void
        SimFlowPlant_DesignHeatRecovWaterFlowRate (const SimFlowPlant_DesignHeatRecovWaterFlowRate_type& x);

        void
        SimFlowPlant_DesignHeatRecovWaterFlowRate (const SimFlowPlant_DesignHeatRecovWaterFlowRate_optional& x);

        // SimFlowPlant_HeatRecovInletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_HeatRecovInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_HeatRecovInletNodeName_type > SimFlowPlant_HeatRecovInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_HeatRecovInletNodeName_type, char > SimFlowPlant_HeatRecovInletNodeName_traits;

        const SimFlowPlant_HeatRecovInletNodeName_optional&
        SimFlowPlant_HeatRecovInletNodeName () const;

        SimFlowPlant_HeatRecovInletNodeName_optional&
        SimFlowPlant_HeatRecovInletNodeName ();

        void
        SimFlowPlant_HeatRecovInletNodeName (const SimFlowPlant_HeatRecovInletNodeName_type& x);

        void
        SimFlowPlant_HeatRecovInletNodeName (const SimFlowPlant_HeatRecovInletNodeName_optional& x);

        void
        SimFlowPlant_HeatRecovInletNodeName (::std::auto_ptr< SimFlowPlant_HeatRecovInletNodeName_type > p);

        // SimFlowPlant_HeatRecovOutletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_HeatRecovOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_HeatRecovOutletNodeName_type > SimFlowPlant_HeatRecovOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_HeatRecovOutletNodeName_type, char > SimFlowPlant_HeatRecovOutletNodeName_traits;

        const SimFlowPlant_HeatRecovOutletNodeName_optional&
        SimFlowPlant_HeatRecovOutletNodeName () const;

        SimFlowPlant_HeatRecovOutletNodeName_optional&
        SimFlowPlant_HeatRecovOutletNodeName ();

        void
        SimFlowPlant_HeatRecovOutletNodeName (const SimFlowPlant_HeatRecovOutletNodeName_type& x);

        void
        SimFlowPlant_HeatRecovOutletNodeName (const SimFlowPlant_HeatRecovOutletNodeName_optional& x);

        void
        SimFlowPlant_HeatRecovOutletNodeName (::std::auto_ptr< SimFlowPlant_HeatRecovOutletNodeName_type > p);

        // SimFlowPlant_RefLeavCondWaterTemp
        //
        typedef ::xml_schema::double_ SimFlowPlant_RefLeavCondWaterTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RefLeavCondWaterTemp_type > SimFlowPlant_RefLeavCondWaterTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RefLeavCondWaterTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RefLeavCondWaterTemp_traits;

        const SimFlowPlant_RefLeavCondWaterTemp_optional&
        SimFlowPlant_RefLeavCondWaterTemp () const;

        SimFlowPlant_RefLeavCondWaterTemp_optional&
        SimFlowPlant_RefLeavCondWaterTemp ();

        void
        SimFlowPlant_RefLeavCondWaterTemp (const SimFlowPlant_RefLeavCondWaterTemp_type& x);

        void
        SimFlowPlant_RefLeavCondWaterTemp (const SimFlowPlant_RefLeavCondWaterTemp_optional& x);

        // SimFlowPlant_RefCondWaterFlowRate
        //
        typedef ::xml_schema::double_ SimFlowPlant_RefCondWaterFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_RefCondWaterFlowRate_type > SimFlowPlant_RefCondWaterFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_RefCondWaterFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_RefCondWaterFlowRate_traits;

        const SimFlowPlant_RefCondWaterFlowRate_optional&
        SimFlowPlant_RefCondWaterFlowRate () const;

        SimFlowPlant_RefCondWaterFlowRate_optional&
        SimFlowPlant_RefCondWaterFlowRate ();

        void
        SimFlowPlant_RefCondWaterFlowRate (const SimFlowPlant_RefCondWaterFlowRate_type& x);

        void
        SimFlowPlant_RefCondWaterFlowRate (const SimFlowPlant_RefCondWaterFlowRate_optional& x);

        // SimFlowPlant_ChillerFlowModeType
        //
        typedef ::xml_schema::string SimFlowPlant_ChillerFlowModeType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ChillerFlowModeType_type > SimFlowPlant_ChillerFlowModeType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ChillerFlowModeType_type, char > SimFlowPlant_ChillerFlowModeType_traits;

        const SimFlowPlant_ChillerFlowModeType_optional&
        SimFlowPlant_ChillerFlowModeType () const;

        SimFlowPlant_ChillerFlowModeType_optional&
        SimFlowPlant_ChillerFlowModeType ();

        void
        SimFlowPlant_ChillerFlowModeType (const SimFlowPlant_ChillerFlowModeType_type& x);

        void
        SimFlowPlant_ChillerFlowModeType (const SimFlowPlant_ChillerFlowModeType_optional& x);

        void
        SimFlowPlant_ChillerFlowModeType (::std::auto_ptr< SimFlowPlant_ChillerFlowModeType_type > p);

        // Constructors.
        //
        SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR (const RefId_type&);

        SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR (const ::xercesc::DOMElement& e,
                                                                              ::xml_schema::flags f = 0,
                                                                              ::xml_schema::container* c = 0);

        SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR (const SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR& x,
                                                                              ::xml_schema::flags f = 0,
                                                                              ::xml_schema::container* c = 0);

        virtual SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR&
        operator= (const SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR& x);

        virtual 
        ~SimFlowPlant_Chiller_ChillerVaporCompressionElectric_ReformulatedEIR ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowPlant_MinPartLoadRatio_optional SimFlowPlant_MinPartLoadRatio_;
        SimFlowPlant_MaxPartLoadRatio_optional SimFlowPlant_MaxPartLoadRatio_;
        SimFlowPlant_OptimumPartLoadRatio_optional SimFlowPlant_OptimumPartLoadRatio_;
        SimFlowPlant_SizingFactor_optional SimFlowPlant_SizingFactor_;
        SimFlowPlant_RefCap_optional SimFlowPlant_RefCap_;
        SimFlowPlant_RefCOP_optional SimFlowPlant_RefCOP_;
        SimFlowPlant_RefLeavChilledWaterTemp_optional SimFlowPlant_RefLeavChilledWaterTemp_;
        SimFlowPlant_RefChilledWaterFlowRate_optional SimFlowPlant_RefChilledWaterFlowRate_;
        SimFlowPlant_CoolingCapFuncTempCurveName_optional SimFlowPlant_CoolingCapFuncTempCurveName_;
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_optional SimFlowPlant_ElecInputToCoolingOutputRatioFuncTempCurveName_;
        SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_optional SimFlowPlant_ElecInputToCoolingOutputRatioFuncPartLoadRatioCurveName_;
        SimFlowPlant_MinUnloadingRatio_optional SimFlowPlant_MinUnloadingRatio_;
        SimFlowPlant_ChilledWaterInletNodeName_optional SimFlowPlant_ChilledWaterInletNodeName_;
        SimFlowPlant_ChilledWaterOutletNodeName_optional SimFlowPlant_ChilledWaterOutletNodeName_;
        SimFlowPlant_CondInletNodeName_optional SimFlowPlant_CondInletNodeName_;
        SimFlowPlant_CondOutletNodeName_optional SimFlowPlant_CondOutletNodeName_;
        SimFlowPlant_CompMotorEff_optional SimFlowPlant_CompMotorEff_;
        SimFlowPlant_LeavChilledWaterLowTempLimit_optional SimFlowPlant_LeavChilledWaterLowTempLimit_;
        SimFlowPlant_DesignHeatRecovWaterFlowRate_optional SimFlowPlant_DesignHeatRecovWaterFlowRate_;
        SimFlowPlant_HeatRecovInletNodeName_optional SimFlowPlant_HeatRecovInletNodeName_;
        SimFlowPlant_HeatRecovOutletNodeName_optional SimFlowPlant_HeatRecovOutletNodeName_;
        SimFlowPlant_RefLeavCondWaterTemp_optional SimFlowPlant_RefLeavCondWaterTemp_;
        SimFlowPlant_RefCondWaterFlowRate_optional SimFlowPlant_RefCondWaterFlowRate_;
        SimFlowPlant_ChillerFlowModeType_optional SimFlowPlant_ChillerFlowModeType_;
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

#endif // SIM_FLOW_PLANT_CHILLER_CHILLER_VAPOR_COMPRESSION_ELECTRIC_REFORMULATED_EIR_HXX
