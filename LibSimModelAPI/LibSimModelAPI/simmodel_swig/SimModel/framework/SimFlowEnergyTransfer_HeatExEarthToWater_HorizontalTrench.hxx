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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_EARTH_TO_WATER_HORIZONTAL_TRENCH_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_EARTH_TO_WATER_HORIZONTAL_TRENCH_HXX

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
      class SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench;
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
    namespace MepModel
    {
      class SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_HeatExEarthToWater
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

        // SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_type > SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_traits;

        const SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_optional&
        SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec () const;

        SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_optional&
        SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec ();

        void
        SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec (const SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_type& x);

        void
        SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec (const SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_optional& x);

        // SimFlowEnergyTrans_NumofTrenches
        //
        typedef ::xml_schema::int_ SimFlowEnergyTrans_NumofTrenches_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NumofTrenches_type > SimFlowEnergyTrans_NumofTrenches_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NumofTrenches_type, char > SimFlowEnergyTrans_NumofTrenches_traits;

        const SimFlowEnergyTrans_NumofTrenches_optional&
        SimFlowEnergyTrans_NumofTrenches () const;

        SimFlowEnergyTrans_NumofTrenches_optional&
        SimFlowEnergyTrans_NumofTrenches ();

        void
        SimFlowEnergyTrans_NumofTrenches (const SimFlowEnergyTrans_NumofTrenches_type& x);

        void
        SimFlowEnergyTrans_NumofTrenches (const SimFlowEnergyTrans_NumofTrenches_optional& x);

        // SimFlowEnergyTrans_HorizontalSpacingBtwnPipes
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_type > SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_traits;

        const SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_optional&
        SimFlowEnergyTrans_HorizontalSpacingBtwnPipes () const;

        SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_optional&
        SimFlowEnergyTrans_HorizontalSpacingBtwnPipes ();

        void
        SimFlowEnergyTrans_HorizontalSpacingBtwnPipes (const SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_type& x);

        void
        SimFlowEnergyTrans_HorizontalSpacingBtwnPipes (const SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_optional& x);

        // SimFlowEnergyTrans_PipeInnerDiameter
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeInnerDiameter_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeInnerDiameter_type > SimFlowEnergyTrans_PipeInnerDiameter_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeInnerDiameter_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeInnerDiameter_traits;

        const SimFlowEnergyTrans_PipeInnerDiameter_optional&
        SimFlowEnergyTrans_PipeInnerDiameter () const;

        SimFlowEnergyTrans_PipeInnerDiameter_optional&
        SimFlowEnergyTrans_PipeInnerDiameter ();

        void
        SimFlowEnergyTrans_PipeInnerDiameter (const SimFlowEnergyTrans_PipeInnerDiameter_type& x);

        void
        SimFlowEnergyTrans_PipeInnerDiameter (const SimFlowEnergyTrans_PipeInnerDiameter_optional& x);

        // SimFlowEnergyTrans_PipeOuterDiameter
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeOuterDiameter_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeOuterDiameter_type > SimFlowEnergyTrans_PipeOuterDiameter_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeOuterDiameter_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeOuterDiameter_traits;

        const SimFlowEnergyTrans_PipeOuterDiameter_optional&
        SimFlowEnergyTrans_PipeOuterDiameter () const;

        SimFlowEnergyTrans_PipeOuterDiameter_optional&
        SimFlowEnergyTrans_PipeOuterDiameter ();

        void
        SimFlowEnergyTrans_PipeOuterDiameter (const SimFlowEnergyTrans_PipeOuterDiameter_type& x);

        void
        SimFlowEnergyTrans_PipeOuterDiameter (const SimFlowEnergyTrans_PipeOuterDiameter_optional& x);

        // SimFlowEnergyTrans_BurialDepth
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_BurialDepth_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_BurialDepth_type > SimFlowEnergyTrans_BurialDepth_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_BurialDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_BurialDepth_traits;

        const SimFlowEnergyTrans_BurialDepth_optional&
        SimFlowEnergyTrans_BurialDepth () const;

        SimFlowEnergyTrans_BurialDepth_optional&
        SimFlowEnergyTrans_BurialDepth ();

        void
        SimFlowEnergyTrans_BurialDepth (const SimFlowEnergyTrans_BurialDepth_type& x);

        void
        SimFlowEnergyTrans_BurialDepth (const SimFlowEnergyTrans_BurialDepth_optional& x);

        // SimFlowEnergyTrans_SoilThermalCond
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SoilThermalCond_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SoilThermalCond_type > SimFlowEnergyTrans_SoilThermalCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SoilThermalCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SoilThermalCond_traits;

        const SimFlowEnergyTrans_SoilThermalCond_optional&
        SimFlowEnergyTrans_SoilThermalCond () const;

        SimFlowEnergyTrans_SoilThermalCond_optional&
        SimFlowEnergyTrans_SoilThermalCond ();

        void
        SimFlowEnergyTrans_SoilThermalCond (const SimFlowEnergyTrans_SoilThermalCond_type& x);

        void
        SimFlowEnergyTrans_SoilThermalCond (const SimFlowEnergyTrans_SoilThermalCond_optional& x);

        // SimFlowEnergyTrans_SoilDens
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SoilDens_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SoilDens_type > SimFlowEnergyTrans_SoilDens_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SoilDens_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SoilDens_traits;

        const SimFlowEnergyTrans_SoilDens_optional&
        SimFlowEnergyTrans_SoilDens () const;

        SimFlowEnergyTrans_SoilDens_optional&
        SimFlowEnergyTrans_SoilDens ();

        void
        SimFlowEnergyTrans_SoilDens (const SimFlowEnergyTrans_SoilDens_type& x);

        void
        SimFlowEnergyTrans_SoilDens (const SimFlowEnergyTrans_SoilDens_optional& x);

        // SimFlowEnergyTrans_SoilSpecificHeat
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SoilSpecificHeat_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SoilSpecificHeat_type > SimFlowEnergyTrans_SoilSpecificHeat_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SoilSpecificHeat_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SoilSpecificHeat_traits;

        const SimFlowEnergyTrans_SoilSpecificHeat_optional&
        SimFlowEnergyTrans_SoilSpecificHeat () const;

        SimFlowEnergyTrans_SoilSpecificHeat_optional&
        SimFlowEnergyTrans_SoilSpecificHeat ();

        void
        SimFlowEnergyTrans_SoilSpecificHeat (const SimFlowEnergyTrans_SoilSpecificHeat_type& x);

        void
        SimFlowEnergyTrans_SoilSpecificHeat (const SimFlowEnergyTrans_SoilSpecificHeat_optional& x);

        // SimFlowEnergyTrans_PipeDensity
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeDensity_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeDensity_type > SimFlowEnergyTrans_PipeDensity_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeDensity_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeDensity_traits;

        const SimFlowEnergyTrans_PipeDensity_optional&
        SimFlowEnergyTrans_PipeDensity () const;

        SimFlowEnergyTrans_PipeDensity_optional&
        SimFlowEnergyTrans_PipeDensity ();

        void
        SimFlowEnergyTrans_PipeDensity (const SimFlowEnergyTrans_PipeDensity_type& x);

        void
        SimFlowEnergyTrans_PipeDensity (const SimFlowEnergyTrans_PipeDensity_optional& x);

        // SimFlowEnergyTrans_PipeSpecificHeat
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_PipeSpecificHeat_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PipeSpecificHeat_type > SimFlowEnergyTrans_PipeSpecificHeat_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PipeSpecificHeat_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_PipeSpecificHeat_traits;

        const SimFlowEnergyTrans_PipeSpecificHeat_optional&
        SimFlowEnergyTrans_PipeSpecificHeat () const;

        SimFlowEnergyTrans_PipeSpecificHeat_optional&
        SimFlowEnergyTrans_PipeSpecificHeat ();

        void
        SimFlowEnergyTrans_PipeSpecificHeat (const SimFlowEnergyTrans_PipeSpecificHeat_type& x);

        void
        SimFlowEnergyTrans_PipeSpecificHeat (const SimFlowEnergyTrans_PipeSpecificHeat_optional& x);

        // SimFlowEnergyTrans_SoilMoisContentPercent
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SoilMoisContentPercent_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SoilMoisContentPercent_type > SimFlowEnergyTrans_SoilMoisContentPercent_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SoilMoisContentPercent_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SoilMoisContentPercent_traits;

        const SimFlowEnergyTrans_SoilMoisContentPercent_optional&
        SimFlowEnergyTrans_SoilMoisContentPercent () const;

        SimFlowEnergyTrans_SoilMoisContentPercent_optional&
        SimFlowEnergyTrans_SoilMoisContentPercent ();

        void
        SimFlowEnergyTrans_SoilMoisContentPercent (const SimFlowEnergyTrans_SoilMoisContentPercent_type& x);

        void
        SimFlowEnergyTrans_SoilMoisContentPercent (const SimFlowEnergyTrans_SoilMoisContentPercent_optional& x);

        // SimFlowEnergyTrans_SoilMoisContentPercentatSaturation
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_type > SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_traits;

        const SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_optional&
        SimFlowEnergyTrans_SoilMoisContentPercentatSaturation () const;

        SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_optional&
        SimFlowEnergyTrans_SoilMoisContentPercentatSaturation ();

        void
        SimFlowEnergyTrans_SoilMoisContentPercentatSaturation (const SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_type& x);

        void
        SimFlowEnergyTrans_SoilMoisContentPercentatSaturation (const SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_optional& x);

        // SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_type > SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_traits;

        const SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_optional&
        SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp () const;

        SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_optional&
        SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp ();

        void
        SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp (const SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_type& x);

        void
        SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp (const SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_optional& x);

        // SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_type > SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_traits;

        const SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_optional&
        SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp () const;

        SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_optional&
        SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp ();

        void
        SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp (const SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_type& x);

        void
        SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp (const SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_optional& x);

        // SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_type > SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_traits;

        const SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_optional&
        SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp () const;

        SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_optional&
        SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp ();

        void
        SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp (const SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_type& x);

        void
        SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp (const SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_optional& x);

        // SimFlowEnergyTrans_EvapotranspirationGroundCoverParam
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_type > SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_traits;

        const SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_optional&
        SimFlowEnergyTrans_EvapotranspirationGroundCoverParam () const;

        SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_optional&
        SimFlowEnergyTrans_EvapotranspirationGroundCoverParam ();

        void
        SimFlowEnergyTrans_EvapotranspirationGroundCoverParam (const SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_type& x);

        void
        SimFlowEnergyTrans_EvapotranspirationGroundCoverParam (const SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_optional& x);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench ();

        SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench (const RefId_type&);

        SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench (const ::xercesc::DOMElement& e,
                                                                   ::xml_schema::flags f = 0,
                                                                   ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench (const SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench& x,
                                                                   ::xml_schema::flags f = 0,
                                                                   ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench&
        operator= (const SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatExEarthToWater_HorizontalTrench ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_InNodeName_optional SimFlowEnergyTrans_InNodeName_;
        SimFlowEnergyTrans_OutNodeName_optional SimFlowEnergyTrans_OutNodeName_;
        SimFlowEnergyTrans_DesignFlowRate_optional SimFlowEnergyTrans_DesignFlowRate_;
        SimFlowEnergyTrans_PipeThermalCond_optional SimFlowEnergyTrans_PipeThermalCond_;
        SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_optional SimFlowEnergyTrans_TrenchLengthnPipeAxialDirec_;
        SimFlowEnergyTrans_NumofTrenches_optional SimFlowEnergyTrans_NumofTrenches_;
        SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_optional SimFlowEnergyTrans_HorizontalSpacingBtwnPipes_;
        SimFlowEnergyTrans_PipeInnerDiameter_optional SimFlowEnergyTrans_PipeInnerDiameter_;
        SimFlowEnergyTrans_PipeOuterDiameter_optional SimFlowEnergyTrans_PipeOuterDiameter_;
        SimFlowEnergyTrans_BurialDepth_optional SimFlowEnergyTrans_BurialDepth_;
        SimFlowEnergyTrans_SoilThermalCond_optional SimFlowEnergyTrans_SoilThermalCond_;
        SimFlowEnergyTrans_SoilDens_optional SimFlowEnergyTrans_SoilDens_;
        SimFlowEnergyTrans_SoilSpecificHeat_optional SimFlowEnergyTrans_SoilSpecificHeat_;
        SimFlowEnergyTrans_PipeDensity_optional SimFlowEnergyTrans_PipeDensity_;
        SimFlowEnergyTrans_PipeSpecificHeat_optional SimFlowEnergyTrans_PipeSpecificHeat_;
        SimFlowEnergyTrans_SoilMoisContentPercent_optional SimFlowEnergyTrans_SoilMoisContentPercent_;
        SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_optional SimFlowEnergyTrans_SoilMoisContentPercentatSaturation_;
        SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_optional SimFlowEnergyTrans_Kusuda_AchenbachAverageSurfaceTemp_;
        SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_optional SimFlowEnergyTrans_Kusuda_AchenbachAverageAmplitudeSurfaceTemp_;
        SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_optional SimFlowEnergyTrans_Kusuda_AchenbachPhaseShiftMinSurfaceTemp_;
        SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_optional SimFlowEnergyTrans_EvapotranspirationGroundCoverParam_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_EARTH_TO_WATER_HORIZONTAL_TRENCH_HXX