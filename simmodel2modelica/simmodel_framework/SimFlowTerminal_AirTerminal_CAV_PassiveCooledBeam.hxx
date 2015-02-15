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

#ifndef SIM_FLOW_TERMINAL_AIR_TERMINAL_CAV_PASSIVE_COOLED_BEAM_HXX
#define SIM_FLOW_TERMINAL_AIR_TERMINAL_CAV_PASSIVE_COOLED_BEAM_HXX

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
      class SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam;
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

#include "simflowterminal_airterminal.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam: public ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal
      {
        public:
        // SimFlowTerm_AvailSchedName
        //
        typedef ::xml_schema::idref SimFlowTerm_AvailSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_AvailSchedName_type > SimFlowTerm_AvailSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_AvailSchedName_type, char > SimFlowTerm_AvailSchedName_traits;

        const SimFlowTerm_AvailSchedName_optional&
        SimFlowTerm_AvailSchedName () const;

        SimFlowTerm_AvailSchedName_optional&
        SimFlowTerm_AvailSchedName ();

        void
        SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_type& x);

        void
        SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_optional& x);

        void
        SimFlowTerm_AvailSchedName (::std::auto_ptr< SimFlowTerm_AvailSchedName_type > p);

        // SimFlowTerm_SupplyAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_SupplyAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_SupplyAirInletNodeName_type > SimFlowTerm_SupplyAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_SupplyAirInletNodeName_type, char > SimFlowTerm_SupplyAirInletNodeName_traits;

        const SimFlowTerm_SupplyAirInletNodeName_optional&
        SimFlowTerm_SupplyAirInletNodeName () const;

        SimFlowTerm_SupplyAirInletNodeName_optional&
        SimFlowTerm_SupplyAirInletNodeName ();

        void
        SimFlowTerm_SupplyAirInletNodeName (const SimFlowTerm_SupplyAirInletNodeName_type& x);

        void
        SimFlowTerm_SupplyAirInletNodeName (const SimFlowTerm_SupplyAirInletNodeName_optional& x);

        void
        SimFlowTerm_SupplyAirInletNodeName (::std::auto_ptr< SimFlowTerm_SupplyAirInletNodeName_type > p);

        // SimFlowTerm_CoolBeamType
        //
        typedef ::xml_schema::string SimFlowTerm_CoolBeamType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_CoolBeamType_type > SimFlowTerm_CoolBeamType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_CoolBeamType_type, char > SimFlowTerm_CoolBeamType_traits;

        const SimFlowTerm_CoolBeamType_optional&
        SimFlowTerm_CoolBeamType () const;

        SimFlowTerm_CoolBeamType_optional&
        SimFlowTerm_CoolBeamType ();

        void
        SimFlowTerm_CoolBeamType (const SimFlowTerm_CoolBeamType_type& x);

        void
        SimFlowTerm_CoolBeamType (const SimFlowTerm_CoolBeamType_optional& x);

        void
        SimFlowTerm_CoolBeamType (::std::auto_ptr< SimFlowTerm_CoolBeamType_type > p);

        // SimFlowTerm_SupplyAirOutletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_SupplyAirOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_SupplyAirOutletNodeName_type > SimFlowTerm_SupplyAirOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_SupplyAirOutletNodeName_type, char > SimFlowTerm_SupplyAirOutletNodeName_traits;

        const SimFlowTerm_SupplyAirOutletNodeName_optional&
        SimFlowTerm_SupplyAirOutletNodeName () const;

        SimFlowTerm_SupplyAirOutletNodeName_optional&
        SimFlowTerm_SupplyAirOutletNodeName ();

        void
        SimFlowTerm_SupplyAirOutletNodeName (const SimFlowTerm_SupplyAirOutletNodeName_type& x);

        void
        SimFlowTerm_SupplyAirOutletNodeName (const SimFlowTerm_SupplyAirOutletNodeName_optional& x);

        void
        SimFlowTerm_SupplyAirOutletNodeName (::std::auto_ptr< SimFlowTerm_SupplyAirOutletNodeName_type > p);

        // SimFlowTerm_ChilledWaterInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_ChilledWaterInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ChilledWaterInletNodeName_type > SimFlowTerm_ChilledWaterInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ChilledWaterInletNodeName_type, char > SimFlowTerm_ChilledWaterInletNodeName_traits;

        const SimFlowTerm_ChilledWaterInletNodeName_optional&
        SimFlowTerm_ChilledWaterInletNodeName () const;

        SimFlowTerm_ChilledWaterInletNodeName_optional&
        SimFlowTerm_ChilledWaterInletNodeName ();

        void
        SimFlowTerm_ChilledWaterInletNodeName (const SimFlowTerm_ChilledWaterInletNodeName_type& x);

        void
        SimFlowTerm_ChilledWaterInletNodeName (const SimFlowTerm_ChilledWaterInletNodeName_optional& x);

        void
        SimFlowTerm_ChilledWaterInletNodeName (::std::auto_ptr< SimFlowTerm_ChilledWaterInletNodeName_type > p);

        // SimFlowTerm_ChilledWaterOutletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_ChilledWaterOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ChilledWaterOutletNodeName_type > SimFlowTerm_ChilledWaterOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ChilledWaterOutletNodeName_type, char > SimFlowTerm_ChilledWaterOutletNodeName_traits;

        const SimFlowTerm_ChilledWaterOutletNodeName_optional&
        SimFlowTerm_ChilledWaterOutletNodeName () const;

        SimFlowTerm_ChilledWaterOutletNodeName_optional&
        SimFlowTerm_ChilledWaterOutletNodeName ();

        void
        SimFlowTerm_ChilledWaterOutletNodeName (const SimFlowTerm_ChilledWaterOutletNodeName_type& x);

        void
        SimFlowTerm_ChilledWaterOutletNodeName (const SimFlowTerm_ChilledWaterOutletNodeName_optional& x);

        void
        SimFlowTerm_ChilledWaterOutletNodeName (::std::auto_ptr< SimFlowTerm_ChilledWaterOutletNodeName_type > p);

        // SimFlowTerm_SupplyAirVolFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_SupplyAirVolFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_SupplyAirVolFlowRate_type > SimFlowTerm_SupplyAirVolFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_SupplyAirVolFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_SupplyAirVolFlowRate_traits;

        const SimFlowTerm_SupplyAirVolFlowRate_optional&
        SimFlowTerm_SupplyAirVolFlowRate () const;

        SimFlowTerm_SupplyAirVolFlowRate_optional&
        SimFlowTerm_SupplyAirVolFlowRate ();

        void
        SimFlowTerm_SupplyAirVolFlowRate (const SimFlowTerm_SupplyAirVolFlowRate_type& x);

        void
        SimFlowTerm_SupplyAirVolFlowRate (const SimFlowTerm_SupplyAirVolFlowRate_optional& x);

        // SimFlowTerm_MaxTotalChilledWaterVolFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxTotalChilledWaterVolFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxTotalChilledWaterVolFlowRate_type > SimFlowTerm_MaxTotalChilledWaterVolFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxTotalChilledWaterVolFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxTotalChilledWaterVolFlowRate_traits;

        const SimFlowTerm_MaxTotalChilledWaterVolFlowRate_optional&
        SimFlowTerm_MaxTotalChilledWaterVolFlowRate () const;

        SimFlowTerm_MaxTotalChilledWaterVolFlowRate_optional&
        SimFlowTerm_MaxTotalChilledWaterVolFlowRate ();

        void
        SimFlowTerm_MaxTotalChilledWaterVolFlowRate (const SimFlowTerm_MaxTotalChilledWaterVolFlowRate_type& x);

        void
        SimFlowTerm_MaxTotalChilledWaterVolFlowRate (const SimFlowTerm_MaxTotalChilledWaterVolFlowRate_optional& x);

        // SimFlowTerm_NumBeams
        //
        typedef ::xml_schema::int_ SimFlowTerm_NumBeams_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_NumBeams_type > SimFlowTerm_NumBeams_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_NumBeams_type, char > SimFlowTerm_NumBeams_traits;

        const SimFlowTerm_NumBeams_optional&
        SimFlowTerm_NumBeams () const;

        SimFlowTerm_NumBeams_optional&
        SimFlowTerm_NumBeams ();

        void
        SimFlowTerm_NumBeams (const SimFlowTerm_NumBeams_type& x);

        void
        SimFlowTerm_NumBeams (const SimFlowTerm_NumBeams_optional& x);

        // SimFlowTerm_BeamLength
        //
        typedef ::xml_schema::double_ SimFlowTerm_BeamLength_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_BeamLength_type > SimFlowTerm_BeamLength_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_BeamLength_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_BeamLength_traits;

        const SimFlowTerm_BeamLength_optional&
        SimFlowTerm_BeamLength () const;

        SimFlowTerm_BeamLength_optional&
        SimFlowTerm_BeamLength ();

        void
        SimFlowTerm_BeamLength (const SimFlowTerm_BeamLength_type& x);

        void
        SimFlowTerm_BeamLength (const SimFlowTerm_BeamLength_optional& x);

        // SimFlowTerm_DesignInletWaterTemp
        //
        typedef ::xml_schema::double_ SimFlowTerm_DesignInletWaterTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_DesignInletWaterTemp_type > SimFlowTerm_DesignInletWaterTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_DesignInletWaterTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_DesignInletWaterTemp_traits;

        const SimFlowTerm_DesignInletWaterTemp_optional&
        SimFlowTerm_DesignInletWaterTemp () const;

        SimFlowTerm_DesignInletWaterTemp_optional&
        SimFlowTerm_DesignInletWaterTemp ();

        void
        SimFlowTerm_DesignInletWaterTemp (const SimFlowTerm_DesignInletWaterTemp_type& x);

        void
        SimFlowTerm_DesignInletWaterTemp (const SimFlowTerm_DesignInletWaterTemp_optional& x);

        // SimFlowTerm_DesignOutletWaterTemp
        //
        typedef ::xml_schema::double_ SimFlowTerm_DesignOutletWaterTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_DesignOutletWaterTemp_type > SimFlowTerm_DesignOutletWaterTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_DesignOutletWaterTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_DesignOutletWaterTemp_traits;

        const SimFlowTerm_DesignOutletWaterTemp_optional&
        SimFlowTerm_DesignOutletWaterTemp () const;

        SimFlowTerm_DesignOutletWaterTemp_optional&
        SimFlowTerm_DesignOutletWaterTemp ();

        void
        SimFlowTerm_DesignOutletWaterTemp (const SimFlowTerm_DesignOutletWaterTemp_type& x);

        void
        SimFlowTerm_DesignOutletWaterTemp (const SimFlowTerm_DesignOutletWaterTemp_optional& x);

        // SimFlowTerm_CoilSurfAreaPerCoilLength
        //
        typedef ::xml_schema::double_ SimFlowTerm_CoilSurfAreaPerCoilLength_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_CoilSurfAreaPerCoilLength_type > SimFlowTerm_CoilSurfAreaPerCoilLength_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_CoilSurfAreaPerCoilLength_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_CoilSurfAreaPerCoilLength_traits;

        const SimFlowTerm_CoilSurfAreaPerCoilLength_optional&
        SimFlowTerm_CoilSurfAreaPerCoilLength () const;

        SimFlowTerm_CoilSurfAreaPerCoilLength_optional&
        SimFlowTerm_CoilSurfAreaPerCoilLength ();

        void
        SimFlowTerm_CoilSurfAreaPerCoilLength (const SimFlowTerm_CoilSurfAreaPerCoilLength_type& x);

        void
        SimFlowTerm_CoilSurfAreaPerCoilLength (const SimFlowTerm_CoilSurfAreaPerCoilLength_optional& x);

        // SimFlowTerm_ModelParamA
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamA_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamA_type > SimFlowTerm_ModelParamA_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamA_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamA_traits;

        const SimFlowTerm_ModelParamA_optional&
        SimFlowTerm_ModelParamA () const;

        SimFlowTerm_ModelParamA_optional&
        SimFlowTerm_ModelParamA ();

        void
        SimFlowTerm_ModelParamA (const SimFlowTerm_ModelParamA_type& x);

        void
        SimFlowTerm_ModelParamA (const SimFlowTerm_ModelParamA_optional& x);

        // SimFlowTerm_ModelParamN1
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamN1_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamN1_type > SimFlowTerm_ModelParamN1_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamN1_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamN1_traits;

        const SimFlowTerm_ModelParamN1_optional&
        SimFlowTerm_ModelParamN1 () const;

        SimFlowTerm_ModelParamN1_optional&
        SimFlowTerm_ModelParamN1 ();

        void
        SimFlowTerm_ModelParamN1 (const SimFlowTerm_ModelParamN1_type& x);

        void
        SimFlowTerm_ModelParamN1 (const SimFlowTerm_ModelParamN1_optional& x);

        // SimFlowTerm_ModelParamn2
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamn2_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamn2_type > SimFlowTerm_ModelParamn2_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamn2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamn2_traits;

        const SimFlowTerm_ModelParamn2_optional&
        SimFlowTerm_ModelParamn2 () const;

        SimFlowTerm_ModelParamn2_optional&
        SimFlowTerm_ModelParamn2 ();

        void
        SimFlowTerm_ModelParamn2 (const SimFlowTerm_ModelParamn2_type& x);

        void
        SimFlowTerm_ModelParamn2 (const SimFlowTerm_ModelParamn2_optional& x);

        // SimFlowTerm_ModelParamn3
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamn3_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamn3_type > SimFlowTerm_ModelParamn3_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamn3_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamn3_traits;

        const SimFlowTerm_ModelParamn3_optional&
        SimFlowTerm_ModelParamn3 () const;

        SimFlowTerm_ModelParamn3_optional&
        SimFlowTerm_ModelParamn3 ();

        void
        SimFlowTerm_ModelParamn3 (const SimFlowTerm_ModelParamn3_type& x);

        void
        SimFlowTerm_ModelParamn3 (const SimFlowTerm_ModelParamn3_optional& x);

        // SimFlowTerm_ModelParamA0
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamA0_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamA0_type > SimFlowTerm_ModelParamA0_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamA0_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamA0_traits;

        const SimFlowTerm_ModelParamA0_optional&
        SimFlowTerm_ModelParamA0 () const;

        SimFlowTerm_ModelParamA0_optional&
        SimFlowTerm_ModelParamA0 ();

        void
        SimFlowTerm_ModelParamA0 (const SimFlowTerm_ModelParamA0_type& x);

        void
        SimFlowTerm_ModelParamA0 (const SimFlowTerm_ModelParamA0_optional& x);

        // SimFlowTerm_ModelParamK1
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamK1_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamK1_type > SimFlowTerm_ModelParamK1_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamK1_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamK1_traits;

        const SimFlowTerm_ModelParamK1_optional&
        SimFlowTerm_ModelParamK1 () const;

        SimFlowTerm_ModelParamK1_optional&
        SimFlowTerm_ModelParamK1 ();

        void
        SimFlowTerm_ModelParamK1 (const SimFlowTerm_ModelParamK1_type& x);

        void
        SimFlowTerm_ModelParamK1 (const SimFlowTerm_ModelParamK1_optional& x);

        // SimFlowTerm_ModelParamN
        //
        typedef ::xml_schema::double_ SimFlowTerm_ModelParamN_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ModelParamN_type > SimFlowTerm_ModelParamN_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ModelParamN_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_ModelParamN_traits;

        const SimFlowTerm_ModelParamN_optional&
        SimFlowTerm_ModelParamN () const;

        SimFlowTerm_ModelParamN_optional&
        SimFlowTerm_ModelParamN ();

        void
        SimFlowTerm_ModelParamN (const SimFlowTerm_ModelParamN_type& x);

        void
        SimFlowTerm_ModelParamN (const SimFlowTerm_ModelParamN_optional& x);

        // SimFlowTerm_CoeffInductionKin
        //
        typedef ::xml_schema::double_ SimFlowTerm_CoeffInductionKin_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_CoeffInductionKin_type > SimFlowTerm_CoeffInductionKin_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_CoeffInductionKin_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_CoeffInductionKin_traits;

        const SimFlowTerm_CoeffInductionKin_optional&
        SimFlowTerm_CoeffInductionKin () const;

        SimFlowTerm_CoeffInductionKin_optional&
        SimFlowTerm_CoeffInductionKin ();

        void
        SimFlowTerm_CoeffInductionKin (const SimFlowTerm_CoeffInductionKin_type& x);

        void
        SimFlowTerm_CoeffInductionKin (const SimFlowTerm_CoeffInductionKin_optional& x);

        // SimFlowTerm_LeavPipesideDiam
        //
        typedef ::xml_schema::double_ SimFlowTerm_LeavPipesideDiam_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_LeavPipesideDiam_type > SimFlowTerm_LeavPipesideDiam_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_LeavPipesideDiam_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_LeavPipesideDiam_traits;

        const SimFlowTerm_LeavPipesideDiam_optional&
        SimFlowTerm_LeavPipesideDiam () const;

        SimFlowTerm_LeavPipesideDiam_optional&
        SimFlowTerm_LeavPipesideDiam ();

        void
        SimFlowTerm_LeavPipesideDiam (const SimFlowTerm_LeavPipesideDiam_type& x);

        void
        SimFlowTerm_LeavPipesideDiam (const SimFlowTerm_LeavPipesideDiam_optional& x);

        // Constructors.
        //
        SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam (const RefId_type&);

        SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam (const ::xercesc::DOMElement& e,
                                                           ::xml_schema::flags f = 0,
                                                           ::xml_schema::container* c = 0);

        SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam (const SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam& x,
                                                           ::xml_schema::flags f = 0,
                                                           ::xml_schema::container* c = 0);

        virtual SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam&
        operator= (const SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam& x);

        virtual 
        ~SimFlowTerminal_AirTerminal_CAV_PassiveCooledBeam ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowTerm_AvailSchedName_optional SimFlowTerm_AvailSchedName_;
        SimFlowTerm_SupplyAirInletNodeName_optional SimFlowTerm_SupplyAirInletNodeName_;
        SimFlowTerm_CoolBeamType_optional SimFlowTerm_CoolBeamType_;
        SimFlowTerm_SupplyAirOutletNodeName_optional SimFlowTerm_SupplyAirOutletNodeName_;
        SimFlowTerm_ChilledWaterInletNodeName_optional SimFlowTerm_ChilledWaterInletNodeName_;
        SimFlowTerm_ChilledWaterOutletNodeName_optional SimFlowTerm_ChilledWaterOutletNodeName_;
        SimFlowTerm_SupplyAirVolFlowRate_optional SimFlowTerm_SupplyAirVolFlowRate_;
        SimFlowTerm_MaxTotalChilledWaterVolFlowRate_optional SimFlowTerm_MaxTotalChilledWaterVolFlowRate_;
        SimFlowTerm_NumBeams_optional SimFlowTerm_NumBeams_;
        SimFlowTerm_BeamLength_optional SimFlowTerm_BeamLength_;
        SimFlowTerm_DesignInletWaterTemp_optional SimFlowTerm_DesignInletWaterTemp_;
        SimFlowTerm_DesignOutletWaterTemp_optional SimFlowTerm_DesignOutletWaterTemp_;
        SimFlowTerm_CoilSurfAreaPerCoilLength_optional SimFlowTerm_CoilSurfAreaPerCoilLength_;
        SimFlowTerm_ModelParamA_optional SimFlowTerm_ModelParamA_;
        SimFlowTerm_ModelParamN1_optional SimFlowTerm_ModelParamN1_;
        SimFlowTerm_ModelParamn2_optional SimFlowTerm_ModelParamn2_;
        SimFlowTerm_ModelParamn3_optional SimFlowTerm_ModelParamn3_;
        SimFlowTerm_ModelParamA0_optional SimFlowTerm_ModelParamA0_;
        SimFlowTerm_ModelParamK1_optional SimFlowTerm_ModelParamK1_;
        SimFlowTerm_ModelParamN_optional SimFlowTerm_ModelParamN_;
        SimFlowTerm_CoeffInductionKin_optional SimFlowTerm_CoeffInductionKin_;
        SimFlowTerm_LeavPipesideDiam_optional SimFlowTerm_LeavPipesideDiam_;
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

#endif // SIM_FLOW_TERMINAL_AIR_TERMINAL_CAV_PASSIVE_COOLED_BEAM_HXX
