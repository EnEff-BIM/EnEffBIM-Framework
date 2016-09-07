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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_DX_COIL_AIR_HEATING_DX_VARIABLE_REFRIGERANT_FLOW_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_DX_COIL_AIR_HEATING_DX_VARIABLE_REFRIGERANT_FLOW_HXX

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
      class SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow;
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

#include "simflowenergytransfer_heatingcoildx.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow: public ::schema::simxml::MepModel::SimFlowEnergyTransfer_HeatingCoilDX
      {
        public:
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

        // SimFlowEnergyTrans_CoilAirInletNode
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CoilAirInletNode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CoilAirInletNode_type > SimFlowEnergyTrans_CoilAirInletNode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CoilAirInletNode_type, char > SimFlowEnergyTrans_CoilAirInletNode_traits;

        const SimFlowEnergyTrans_CoilAirInletNode_optional&
        SimFlowEnergyTrans_CoilAirInletNode () const;

        SimFlowEnergyTrans_CoilAirInletNode_optional&
        SimFlowEnergyTrans_CoilAirInletNode ();

        void
        SimFlowEnergyTrans_CoilAirInletNode (const SimFlowEnergyTrans_CoilAirInletNode_type& x);

        void
        SimFlowEnergyTrans_CoilAirInletNode (const SimFlowEnergyTrans_CoilAirInletNode_optional& x);

        void
        SimFlowEnergyTrans_CoilAirInletNode (::std::auto_ptr< SimFlowEnergyTrans_CoilAirInletNode_type > p);

        // SimFlowEnergyTrans_CoilAirOutletNode
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_CoilAirOutletNode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CoilAirOutletNode_type > SimFlowEnergyTrans_CoilAirOutletNode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CoilAirOutletNode_type, char > SimFlowEnergyTrans_CoilAirOutletNode_traits;

        const SimFlowEnergyTrans_CoilAirOutletNode_optional&
        SimFlowEnergyTrans_CoilAirOutletNode () const;

        SimFlowEnergyTrans_CoilAirOutletNode_optional&
        SimFlowEnergyTrans_CoilAirOutletNode ();

        void
        SimFlowEnergyTrans_CoilAirOutletNode (const SimFlowEnergyTrans_CoilAirOutletNode_type& x);

        void
        SimFlowEnergyTrans_CoilAirOutletNode (const SimFlowEnergyTrans_CoilAirOutletNode_optional& x);

        void
        SimFlowEnergyTrans_CoilAirOutletNode (::std::auto_ptr< SimFlowEnergyTrans_CoilAirOutletNode_type > p);

        // SimFlowEnergyTrans_AvailSched
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_AvailSched_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AvailSched_type > SimFlowEnergyTrans_AvailSched_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AvailSched_type, char > SimFlowEnergyTrans_AvailSched_traits;

        const SimFlowEnergyTrans_AvailSched_optional&
        SimFlowEnergyTrans_AvailSched () const;

        SimFlowEnergyTrans_AvailSched_optional&
        SimFlowEnergyTrans_AvailSched ();

        void
        SimFlowEnergyTrans_AvailSched (const SimFlowEnergyTrans_AvailSched_type& x);

        void
        SimFlowEnergyTrans_AvailSched (const SimFlowEnergyTrans_AvailSched_optional& x);

        void
        SimFlowEnergyTrans_AvailSched (::std::auto_ptr< SimFlowEnergyTrans_AvailSched_type > p);

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

        // SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_type > SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_type, char > SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_traits;

        const SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_optional&
        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName () const;

        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_optional&
        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName ();

        void
        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName (const SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_type& x);

        void
        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName (const SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_optional& x);

        void
        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName (::std::auto_ptr< SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_type > p);

        // SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_type > SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_type, char > SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_traits;

        const SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_optional&
        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName () const;

        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_optional&
        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName ();

        void
        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName (const SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_type& x);

        void
        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName (const SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_optional& x);

        void
        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName (::std::auto_ptr< SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_type > p);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow ();

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow (const RefId_type&);

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow (const ::xercesc::DOMElement& e,
                                                                                     ::xml_schema::flags f = 0,
                                                                                     ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow (const SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow& x,
                                                                                     ::xml_schema::flags f = 0,
                                                                                     ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow&
        operator= (const SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatingCoilDX_CoilAirHeatingDxVariableRefrigerantFlow ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_RatedAirFlowRate_optional SimFlowEnergyTrans_RatedAirFlowRate_;
        SimFlowEnergyTrans_CoilAirInletNode_optional SimFlowEnergyTrans_CoilAirInletNode_;
        SimFlowEnergyTrans_CoilAirOutletNode_optional SimFlowEnergyTrans_CoilAirOutletNode_;
        SimFlowEnergyTrans_AvailSched_optional SimFlowEnergyTrans_AvailSched_;
        SimFlowEnergyTrans_GrossRatedHeatCap_optional SimFlowEnergyTrans_GrossRatedHeatCap_;
        SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_optional SimFlowEnergyTrans_HeatingCapRatioModifierFuncTempCurveName_;
        SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_optional SimFlowEnergyTrans_HeatingCapModifierFuncFlowFractionCurveName_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEATING_COIL_DX_COIL_AIR_HEATING_DX_VARIABLE_REFRIGERANT_FLOW_HXX
