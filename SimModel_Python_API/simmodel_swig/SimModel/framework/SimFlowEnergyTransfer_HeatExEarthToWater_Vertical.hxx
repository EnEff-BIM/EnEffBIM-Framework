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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_EARTH_TO_WATER_VERTICAL_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_EARTH_TO_WATER_VERTICAL_HXX

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
      class SimFlowEnergyTransfer_HeatExEarthToWater_Vertical;
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

#include "simflowenergytransfer_heatexearthtowater.hxx"

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
      class SimFlowEnergyTransfer_HeatExEarthToWater_Vertical: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_HeatExEarthToWater
      {
        public:
        // SimFlowEnergyTrans_InNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_InNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_InNodeName_type > SimFlowEnergyTrans_InNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_InNodeName_type, char > SimFlowEnergyTrans_InNodeName_traits;

        const SimFlowEnergyTrans_InNodeName_optional&
        SimFlowEnergyTrans_InNodeName () const;

        SimFlowEnergyTrans_InNodeName_optional&
        SimFlowEnergyTrans_InNodeName ();

        void
        SimFlowEnergyTrans_InNodeName (const SimFlowEnergyTrans_InNodeName_type& x);

        void
        SimFlowEnergyTrans_InNodeName (const SimFlowEnergyTrans_InNodeName_optional& x);

        void
        SimFlowEnergyTrans_InNodeName (::std::auto_ptr< SimFlowEnergyTrans_InNodeName_type > p);

        // SimFlowEnergyTrans_OutNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_OutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_OutNodeName_type > SimFlowEnergyTrans_OutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_OutNodeName_type, char > SimFlowEnergyTrans_OutNodeName_traits;

        const SimFlowEnergyTrans_OutNodeName_optional&
        SimFlowEnergyTrans_OutNodeName () const;

        SimFlowEnergyTrans_OutNodeName_optional&
        SimFlowEnergyTrans_OutNodeName ();

        void
        SimFlowEnergyTrans_OutNodeName (const SimFlowEnergyTrans_OutNodeName_type& x);

        void
        SimFlowEnergyTrans_OutNodeName (const SimFlowEnergyTrans_OutNodeName_optional& x);

        void
        SimFlowEnergyTrans_OutNodeName (::std::auto_ptr< SimFlowEnergyTrans_OutNodeName_type > p);

        // SimFlowEnergyTrans_MaxFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MaxFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MaxFlowRate_type > SimFlowEnergyTrans_MaxFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MaxFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MaxFlowRate_traits;

        const SimFlowEnergyTrans_MaxFlowRate_optional&
        SimFlowEnergyTrans_MaxFlowRate () const;

        SimFlowEnergyTrans_MaxFlowRate_optional&
        SimFlowEnergyTrans_MaxFlowRate ();

        void
        SimFlowEnergyTrans_MaxFlowRate (const SimFlowEnergyTrans_MaxFlowRate_type& x);

        void
        SimFlowEnergyTrans_MaxFlowRate (const SimFlowEnergyTrans_MaxFlowRate_optional& x);

        // SimFlowEnergyTrans_NumBoreHoles
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NumBoreHoles_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NumBoreHoles_type > SimFlowEnergyTrans_NumBoreHoles_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NumBoreHoles_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NumBoreHoles_traits;

        const SimFlowEnergyTrans_NumBoreHoles_optional&
        SimFlowEnergyTrans_NumBoreHoles () const;

        SimFlowEnergyTrans_NumBoreHoles_optional&
        SimFlowEnergyTrans_NumBoreHoles ();

        void
        SimFlowEnergyTrans_NumBoreHoles (const SimFlowEnergyTrans_NumBoreHoles_type& x);

        void
        SimFlowEnergyTrans_NumBoreHoles (const SimFlowEnergyTrans_NumBoreHoles_optional& x);

        // SimFlowEnergyTrans_BoreHoleLength
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_BoreHoleLength_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_BoreHoleLength_type > SimFlowEnergyTrans_BoreHoleLength_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_BoreHoleLength_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_BoreHoleLength_traits;

        const SimFlowEnergyTrans_BoreHoleLength_optional&
        SimFlowEnergyTrans_BoreHoleLength () const;

        SimFlowEnergyTrans_BoreHoleLength_optional&
        SimFlowEnergyTrans_BoreHoleLength ();

        void
        SimFlowEnergyTrans_BoreHoleLength (const SimFlowEnergyTrans_BoreHoleLength_type& x);

        void
        SimFlowEnergyTrans_BoreHoleLength (const SimFlowEnergyTrans_BoreHoleLength_optional& x);

        // SimFlowEnergyTrans_BoreHoleRadius
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_BoreHoleRadius_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_BoreHoleRadius_type > SimFlowEnergyTrans_BoreHoleRadius_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_BoreHoleRadius_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_BoreHoleRadius_traits;

        const SimFlowEnergyTrans_BoreHoleRadius_optional&
        SimFlowEnergyTrans_BoreHoleRadius () const;

        SimFlowEnergyTrans_BoreHoleRadius_optional&
        SimFlowEnergyTrans_BoreHoleRadius ();

        void
        SimFlowEnergyTrans_BoreHoleRadius (const SimFlowEnergyTrans_BoreHoleRadius_type& x);

        void
        SimFlowEnergyTrans_BoreHoleRadius (const SimFlowEnergyTrans_BoreHoleRadius_optional& x);

        // SimFlowEnergyTrans_GroundThermalCond
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GroundThermalCond_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GroundThermalCond_type > SimFlowEnergyTrans_GroundThermalCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GroundThermalCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GroundThermalCond_traits;

        const SimFlowEnergyTrans_GroundThermalCond_optional&
        SimFlowEnergyTrans_GroundThermalCond () const;

        SimFlowEnergyTrans_GroundThermalCond_optional&
        SimFlowEnergyTrans_GroundThermalCond ();

        void
        SimFlowEnergyTrans_GroundThermalCond (const SimFlowEnergyTrans_GroundThermalCond_type& x);

        void
        SimFlowEnergyTrans_GroundThermalCond (const SimFlowEnergyTrans_GroundThermalCond_optional& x);

        // SimFlowEnergyTrans_GroundThermalHeatCap
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GroundThermalHeatCap_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GroundThermalHeatCap_type > SimFlowEnergyTrans_GroundThermalHeatCap_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GroundThermalHeatCap_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GroundThermalHeatCap_traits;

        const SimFlowEnergyTrans_GroundThermalHeatCap_optional&
        SimFlowEnergyTrans_GroundThermalHeatCap () const;

        SimFlowEnergyTrans_GroundThermalHeatCap_optional&
        SimFlowEnergyTrans_GroundThermalHeatCap ();

        void
        SimFlowEnergyTrans_GroundThermalHeatCap (const SimFlowEnergyTrans_GroundThermalHeatCap_type& x);

        void
        SimFlowEnergyTrans_GroundThermalHeatCap (const SimFlowEnergyTrans_GroundThermalHeatCap_optional& x);

        // SimFlowEnergyTrans_GroundTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GroundTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GroundTemp_type > SimFlowEnergyTrans_GroundTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GroundTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GroundTemp_traits;

        const SimFlowEnergyTrans_GroundTemp_optional&
        SimFlowEnergyTrans_GroundTemp () const;

        SimFlowEnergyTrans_GroundTemp_optional&
        SimFlowEnergyTrans_GroundTemp ();

        void
        SimFlowEnergyTrans_GroundTemp (const SimFlowEnergyTrans_GroundTemp_type& x);

        void
        SimFlowEnergyTrans_GroundTemp (const SimFlowEnergyTrans_GroundTemp_optional& x);

        // SimFlowEnergyTrans_DesignFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_DesignFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_DesignFlowRate_type > SimFlowEnergyTrans_DesignFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_DesignFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_DesignFlowRate_traits;

        const SimFlowEnergyTrans_DesignFlowRate_optional&
        SimFlowEnergyTrans_DesignFlowRate () const;

        SimFlowEnergyTrans_DesignFlowRate_optional&
        SimFlowEnergyTrans_DesignFlowRate ();

        void
        SimFlowEnergyTrans_DesignFlowRate (const SimFlowEnergyTrans_DesignFlowRate_type& x);

        void
        SimFlowEnergyTrans_DesignFlowRate (const SimFlowEnergyTrans_DesignFlowRate_optional& x);

        // SimFlowEnergyTrans_GroutThermalCond
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GroutThermalCond_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GroutThermalCond_type > SimFlowEnergyTrans_GroutThermalCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GroutThermalCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GroutThermalCond_traits;

        const SimFlowEnergyTrans_GroutThermalCond_optional&
        SimFlowEnergyTrans_GroutThermalCond () const;

        SimFlowEnergyTrans_GroutThermalCond_optional&
        SimFlowEnergyTrans_GroutThermalCond ();

        void
        SimFlowEnergyTrans_GroutThermalCond (const SimFlowEnergyTrans_GroutThermalCond_type& x);

        void
        SimFlowEnergyTrans_GroutThermalCond (const SimFlowEnergyTrans_GroutThermalCond_optional& x);

        // SimFlowEnergyTrans_PipeThermalCond
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeThermalCond_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeThermalCond_type > SimFlowEnergyTrans_PipeThermalCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeThermalCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeThermalCond_traits;

        const SimFlowEnergyTrans_PipeThermalCond_optional&
        SimFlowEnergyTrans_PipeThermalCond () const;

        SimFlowEnergyTrans_PipeThermalCond_optional&
        SimFlowEnergyTrans_PipeThermalCond ();

        void
        SimFlowEnergyTrans_PipeThermalCond (const SimFlowEnergyTrans_PipeThermalCond_type& x);

        void
        SimFlowEnergyTrans_PipeThermalCond (const SimFlowEnergyTrans_PipeThermalCond_optional& x);

        // SimFlowEnergyTrans_PipeOutDiam
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeOutDiam_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeOutDiam_type > SimFlowEnergyTrans_PipeOutDiam_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeOutDiam_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeOutDiam_traits;

        const SimFlowEnergyTrans_PipeOutDiam_optional&
        SimFlowEnergyTrans_PipeOutDiam () const;

        SimFlowEnergyTrans_PipeOutDiam_optional&
        SimFlowEnergyTrans_PipeOutDiam ();

        void
        SimFlowEnergyTrans_PipeOutDiam (const SimFlowEnergyTrans_PipeOutDiam_type& x);

        void
        SimFlowEnergyTrans_PipeOutDiam (const SimFlowEnergyTrans_PipeOutDiam_optional& x);

        // SimFlowEnergyTrans_UTubeDist
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_UTubeDist_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_UTubeDist_type > SimFlowEnergyTrans_UTubeDist_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_UTubeDist_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_UTubeDist_traits;

        const SimFlowEnergyTrans_UTubeDist_optional&
        SimFlowEnergyTrans_UTubeDist () const;

        SimFlowEnergyTrans_UTubeDist_optional&
        SimFlowEnergyTrans_UTubeDist ();

        void
        SimFlowEnergyTrans_UTubeDist (const SimFlowEnergyTrans_UTubeDist_type& x);

        void
        SimFlowEnergyTrans_UTubeDist (const SimFlowEnergyTrans_UTubeDist_optional& x);

        // SimFlowEnergyTrans_PipeThick
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeThick_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeThick_type > SimFlowEnergyTrans_PipeThick_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeThick_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeThick_traits;

        const SimFlowEnergyTrans_PipeThick_optional&
        SimFlowEnergyTrans_PipeThick () const;

        SimFlowEnergyTrans_PipeThick_optional&
        SimFlowEnergyTrans_PipeThick ();

        void
        SimFlowEnergyTrans_PipeThick (const SimFlowEnergyTrans_PipeThick_type& x);

        void
        SimFlowEnergyTrans_PipeThick (const SimFlowEnergyTrans_PipeThick_optional& x);

        // SimFlowEnergyTrans_MaxLengthSim
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_MaxLengthSim_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MaxLengthSim_type > SimFlowEnergyTrans_MaxLengthSim_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MaxLengthSim_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_MaxLengthSim_traits;

        const SimFlowEnergyTrans_MaxLengthSim_optional&
        SimFlowEnergyTrans_MaxLengthSim () const;

        SimFlowEnergyTrans_MaxLengthSim_optional&
        SimFlowEnergyTrans_MaxLengthSim ();

        void
        SimFlowEnergyTrans_MaxLengthSim (const SimFlowEnergyTrans_MaxLengthSim_type& x);

        void
        SimFlowEnergyTrans_MaxLengthSim (const SimFlowEnergyTrans_MaxLengthSim_optional& x);

        // SimFlowEnergyTrans_GFuncRefRatio
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_GFuncRefRatio_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GFuncRefRatio_type > SimFlowEnergyTrans_GFuncRefRatio_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GFuncRefRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_GFuncRefRatio_traits;

        const SimFlowEnergyTrans_GFuncRefRatio_optional&
        SimFlowEnergyTrans_GFuncRefRatio () const;

        SimFlowEnergyTrans_GFuncRefRatio_optional&
        SimFlowEnergyTrans_GFuncRefRatio ();

        void
        SimFlowEnergyTrans_GFuncRefRatio (const SimFlowEnergyTrans_GFuncRefRatio_type& x);

        void
        SimFlowEnergyTrans_GFuncRefRatio (const SimFlowEnergyTrans_GFuncRefRatio_optional& x);

        // SimFlowEnergyTrans_NumDataPairsTheGFunc
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NumDataPairsTheGFunc_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NumDataPairsTheGFunc_type > SimFlowEnergyTrans_NumDataPairsTheGFunc_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NumDataPairsTheGFunc_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NumDataPairsTheGFunc_traits;

        const SimFlowEnergyTrans_NumDataPairsTheGFunc_optional&
        SimFlowEnergyTrans_NumDataPairsTheGFunc () const;

        SimFlowEnergyTrans_NumDataPairsTheGFunc_optional&
        SimFlowEnergyTrans_NumDataPairsTheGFunc ();

        void
        SimFlowEnergyTrans_NumDataPairsTheGFunc (const SimFlowEnergyTrans_NumDataPairsTheGFunc_type& x);

        void
        SimFlowEnergyTrans_NumDataPairsTheGFunc (const SimFlowEnergyTrans_NumDataPairsTheGFunc_optional& x);

        // SimFlowEnergyTrans_GFuncLnTTsVal_1_100
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowEnergyTrans_GFuncLnTTsVal_1_100_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GFuncLnTTsVal_1_100_type > SimFlowEnergyTrans_GFuncLnTTsVal_1_100_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GFuncLnTTsVal_1_100_type, char > SimFlowEnergyTrans_GFuncLnTTsVal_1_100_traits;

        const SimFlowEnergyTrans_GFuncLnTTsVal_1_100_optional&
        SimFlowEnergyTrans_GFuncLnTTsVal_1_100 () const;

        SimFlowEnergyTrans_GFuncLnTTsVal_1_100_optional&
        SimFlowEnergyTrans_GFuncLnTTsVal_1_100 ();

        void
        SimFlowEnergyTrans_GFuncLnTTsVal_1_100 (const SimFlowEnergyTrans_GFuncLnTTsVal_1_100_type& x);

        void
        SimFlowEnergyTrans_GFuncLnTTsVal_1_100 (const SimFlowEnergyTrans_GFuncLnTTsVal_1_100_optional& x);

        void
        SimFlowEnergyTrans_GFuncLnTTsVal_1_100 (::std::auto_ptr< SimFlowEnergyTrans_GFuncLnTTsVal_1_100_type > p);

        // SimFlowEnergyTrans_GFuncGVal_1_100
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimFlowEnergyTrans_GFuncGVal_1_100_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_GFuncGVal_1_100_type > SimFlowEnergyTrans_GFuncGVal_1_100_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_GFuncGVal_1_100_type, char > SimFlowEnergyTrans_GFuncGVal_1_100_traits;

        const SimFlowEnergyTrans_GFuncGVal_1_100_optional&
        SimFlowEnergyTrans_GFuncGVal_1_100 () const;

        SimFlowEnergyTrans_GFuncGVal_1_100_optional&
        SimFlowEnergyTrans_GFuncGVal_1_100 ();

        void
        SimFlowEnergyTrans_GFuncGVal_1_100 (const SimFlowEnergyTrans_GFuncGVal_1_100_type& x);

        void
        SimFlowEnergyTrans_GFuncGVal_1_100 (const SimFlowEnergyTrans_GFuncGVal_1_100_optional& x);

        void
        SimFlowEnergyTrans_GFuncGVal_1_100 (::std::auto_ptr< SimFlowEnergyTrans_GFuncGVal_1_100_type > p);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatExEarthToWater_Vertical ();

        SimFlowEnergyTransfer_HeatExEarthToWater_Vertical (const RefId_type&);

        SimFlowEnergyTransfer_HeatExEarthToWater_Vertical (const ::xercesc::DOMElement& e,
                                                           ::xml_schema::flags f = 0,
                                                           ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatExEarthToWater_Vertical (const SimFlowEnergyTransfer_HeatExEarthToWater_Vertical& x,
                                                           ::xml_schema::flags f = 0,
                                                           ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatExEarthToWater_Vertical*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatExEarthToWater_Vertical&
        operator= (const SimFlowEnergyTransfer_HeatExEarthToWater_Vertical& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatExEarthToWater_Vertical ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_InNodeName_optional SimFlowEnergyTrans_InNodeName_;
        SimFlowEnergyTrans_OutNodeName_optional SimFlowEnergyTrans_OutNodeName_;
        SimFlowEnergyTrans_MaxFlowRate_optional SimFlowEnergyTrans_MaxFlowRate_;
        SimFlowEnergyTrans_NumBoreHoles_optional SimFlowEnergyTrans_NumBoreHoles_;
        SimFlowEnergyTrans_BoreHoleLength_optional SimFlowEnergyTrans_BoreHoleLength_;
        SimFlowEnergyTrans_BoreHoleRadius_optional SimFlowEnergyTrans_BoreHoleRadius_;
        SimFlowEnergyTrans_GroundThermalCond_optional SimFlowEnergyTrans_GroundThermalCond_;
        SimFlowEnergyTrans_GroundThermalHeatCap_optional SimFlowEnergyTrans_GroundThermalHeatCap_;
        SimFlowEnergyTrans_GroundTemp_optional SimFlowEnergyTrans_GroundTemp_;
        SimFlowEnergyTrans_DesignFlowRate_optional SimFlowEnergyTrans_DesignFlowRate_;
        SimFlowEnergyTrans_GroutThermalCond_optional SimFlowEnergyTrans_GroutThermalCond_;
        SimFlowEnergyTrans_PipeThermalCond_optional SimFlowEnergyTrans_PipeThermalCond_;
        SimFlowEnergyTrans_PipeOutDiam_optional SimFlowEnergyTrans_PipeOutDiam_;
        SimFlowEnergyTrans_UTubeDist_optional SimFlowEnergyTrans_UTubeDist_;
        SimFlowEnergyTrans_PipeThick_optional SimFlowEnergyTrans_PipeThick_;
        SimFlowEnergyTrans_MaxLengthSim_optional SimFlowEnergyTrans_MaxLengthSim_;
        SimFlowEnergyTrans_GFuncRefRatio_optional SimFlowEnergyTrans_GFuncRefRatio_;
        SimFlowEnergyTrans_NumDataPairsTheGFunc_optional SimFlowEnergyTrans_NumDataPairsTheGFunc_;
        SimFlowEnergyTrans_GFuncLnTTsVal_1_100_optional SimFlowEnergyTrans_GFuncLnTTsVal_1_100_;
        SimFlowEnergyTrans_GFuncGVal_1_100_optional SimFlowEnergyTrans_GFuncGVal_1_100_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_EARTH_TO_WATER_VERTICAL_HXX
