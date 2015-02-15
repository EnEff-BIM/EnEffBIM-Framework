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

#ifndef SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_AIR_TO_AIR_FLAT_PLATE_HXX
#define SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_AIR_TO_AIR_FLAT_PLATE_HXX

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
      class SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate;
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

#include "simflowenergytransfer_heatexairtoair.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate: public ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatExAirToAir
      {
        public:
        // SimFlowEnergyTrans_SecondAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_SecondAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SecondAirInletNodeName_type > SimFlowEnergyTrans_SecondAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SecondAirInletNodeName_type, char > SimFlowEnergyTrans_SecondAirInletNodeName_traits;

        const SimFlowEnergyTrans_SecondAirInletNodeName_optional&
        SimFlowEnergyTrans_SecondAirInletNodeName () const;

        SimFlowEnergyTrans_SecondAirInletNodeName_optional&
        SimFlowEnergyTrans_SecondAirInletNodeName ();

        void
        SimFlowEnergyTrans_SecondAirInletNodeName (const SimFlowEnergyTrans_SecondAirInletNodeName_type& x);

        void
        SimFlowEnergyTrans_SecondAirInletNodeName (const SimFlowEnergyTrans_SecondAirInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_SecondAirInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_SecondAirInletNodeName_type > p);

        // SimFlowEnergyTrans_FlowArrangementType
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_FlowArrangementType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_FlowArrangementType_type > SimFlowEnergyTrans_FlowArrangementType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_FlowArrangementType_type, char > SimFlowEnergyTrans_FlowArrangementType_traits;

        const SimFlowEnergyTrans_FlowArrangementType_optional&
        SimFlowEnergyTrans_FlowArrangementType () const;

        SimFlowEnergyTrans_FlowArrangementType_optional&
        SimFlowEnergyTrans_FlowArrangementType ();

        void
        SimFlowEnergyTrans_FlowArrangementType (const SimFlowEnergyTrans_FlowArrangementType_type& x);

        void
        SimFlowEnergyTrans_FlowArrangementType (const SimFlowEnergyTrans_FlowArrangementType_optional& x);

        void
        SimFlowEnergyTrans_FlowArrangementType (::std::auto_ptr< SimFlowEnergyTrans_FlowArrangementType_type > p);

        // SimFlowEnergyTrans_RatioSupplyToSecondHAVal
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_RatioSupplyToSecondHAVal_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_RatioSupplyToSecondHAVal_type > SimFlowEnergyTrans_RatioSupplyToSecondHAVal_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_RatioSupplyToSecondHAVal_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_RatioSupplyToSecondHAVal_traits;

        const SimFlowEnergyTrans_RatioSupplyToSecondHAVal_optional&
        SimFlowEnergyTrans_RatioSupplyToSecondHAVal () const;

        SimFlowEnergyTrans_RatioSupplyToSecondHAVal_optional&
        SimFlowEnergyTrans_RatioSupplyToSecondHAVal ();

        void
        SimFlowEnergyTrans_RatioSupplyToSecondHAVal (const SimFlowEnergyTrans_RatioSupplyToSecondHAVal_type& x);

        void
        SimFlowEnergyTrans_RatioSupplyToSecondHAVal (const SimFlowEnergyTrans_RatioSupplyToSecondHAVal_optional& x);

        // SimFlowEnergyTrans_NomSupplyAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NomSupplyAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NomSupplyAirFlowRate_type > SimFlowEnergyTrans_NomSupplyAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NomSupplyAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NomSupplyAirFlowRate_traits;

        const SimFlowEnergyTrans_NomSupplyAirFlowRate_optional&
        SimFlowEnergyTrans_NomSupplyAirFlowRate () const;

        SimFlowEnergyTrans_NomSupplyAirFlowRate_optional&
        SimFlowEnergyTrans_NomSupplyAirFlowRate ();

        void
        SimFlowEnergyTrans_NomSupplyAirFlowRate (const SimFlowEnergyTrans_NomSupplyAirFlowRate_type& x);

        void
        SimFlowEnergyTrans_NomSupplyAirFlowRate (const SimFlowEnergyTrans_NomSupplyAirFlowRate_optional& x);

        // SimFlowEnergyTrans_NomSupplyAirInletTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NomSupplyAirInletTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NomSupplyAirInletTemp_type > SimFlowEnergyTrans_NomSupplyAirInletTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NomSupplyAirInletTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NomSupplyAirInletTemp_traits;

        const SimFlowEnergyTrans_NomSupplyAirInletTemp_optional&
        SimFlowEnergyTrans_NomSupplyAirInletTemp () const;

        SimFlowEnergyTrans_NomSupplyAirInletTemp_optional&
        SimFlowEnergyTrans_NomSupplyAirInletTemp ();

        void
        SimFlowEnergyTrans_NomSupplyAirInletTemp (const SimFlowEnergyTrans_NomSupplyAirInletTemp_type& x);

        void
        SimFlowEnergyTrans_NomSupplyAirInletTemp (const SimFlowEnergyTrans_NomSupplyAirInletTemp_optional& x);

        // SimFlowEnergyTrans_NomSupplyAirOutletTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NomSupplyAirOutletTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NomSupplyAirOutletTemp_type > SimFlowEnergyTrans_NomSupplyAirOutletTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NomSupplyAirOutletTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NomSupplyAirOutletTemp_traits;

        const SimFlowEnergyTrans_NomSupplyAirOutletTemp_optional&
        SimFlowEnergyTrans_NomSupplyAirOutletTemp () const;

        SimFlowEnergyTrans_NomSupplyAirOutletTemp_optional&
        SimFlowEnergyTrans_NomSupplyAirOutletTemp ();

        void
        SimFlowEnergyTrans_NomSupplyAirOutletTemp (const SimFlowEnergyTrans_NomSupplyAirOutletTemp_type& x);

        void
        SimFlowEnergyTrans_NomSupplyAirOutletTemp (const SimFlowEnergyTrans_NomSupplyAirOutletTemp_optional& x);

        // SimFlowEnergyTrans_NomSecondAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NomSecondAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NomSecondAirFlowRate_type > SimFlowEnergyTrans_NomSecondAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NomSecondAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NomSecondAirFlowRate_traits;

        const SimFlowEnergyTrans_NomSecondAirFlowRate_optional&
        SimFlowEnergyTrans_NomSecondAirFlowRate () const;

        SimFlowEnergyTrans_NomSecondAirFlowRate_optional&
        SimFlowEnergyTrans_NomSecondAirFlowRate ();

        void
        SimFlowEnergyTrans_NomSecondAirFlowRate (const SimFlowEnergyTrans_NomSecondAirFlowRate_type& x);

        void
        SimFlowEnergyTrans_NomSecondAirFlowRate (const SimFlowEnergyTrans_NomSecondAirFlowRate_optional& x);

        // SimFlowEnergyTrans_NomSecondAirInletTemp
        //
        typedef ::xml_schema::double_ SimFlowEnergyTrans_NomSecondAirInletTemp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NomSecondAirInletTemp_type > SimFlowEnergyTrans_NomSecondAirInletTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NomSecondAirInletTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowEnergyTrans_NomSecondAirInletTemp_traits;

        const SimFlowEnergyTrans_NomSecondAirInletTemp_optional&
        SimFlowEnergyTrans_NomSecondAirInletTemp () const;

        SimFlowEnergyTrans_NomSecondAirInletTemp_optional&
        SimFlowEnergyTrans_NomSecondAirInletTemp ();

        void
        SimFlowEnergyTrans_NomSecondAirInletTemp (const SimFlowEnergyTrans_NomSecondAirInletTemp_type& x);

        void
        SimFlowEnergyTrans_NomSecondAirInletTemp (const SimFlowEnergyTrans_NomSecondAirInletTemp_optional& x);

        // SimFlowEnergyTrans_SupplyAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_SupplyAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SupplyAirInletNodeName_type > SimFlowEnergyTrans_SupplyAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SupplyAirInletNodeName_type, char > SimFlowEnergyTrans_SupplyAirInletNodeName_traits;

        const SimFlowEnergyTrans_SupplyAirInletNodeName_optional&
        SimFlowEnergyTrans_SupplyAirInletNodeName () const;

        SimFlowEnergyTrans_SupplyAirInletNodeName_optional&
        SimFlowEnergyTrans_SupplyAirInletNodeName ();

        void
        SimFlowEnergyTrans_SupplyAirInletNodeName (const SimFlowEnergyTrans_SupplyAirInletNodeName_type& x);

        void
        SimFlowEnergyTrans_SupplyAirInletNodeName (const SimFlowEnergyTrans_SupplyAirInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_SupplyAirInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_SupplyAirInletNodeName_type > p);

        // SimFlowEnergyTrans_SupplyAirOutletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_SupplyAirOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SupplyAirOutletNodeName_type > SimFlowEnergyTrans_SupplyAirOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SupplyAirOutletNodeName_type, char > SimFlowEnergyTrans_SupplyAirOutletNodeName_traits;

        const SimFlowEnergyTrans_SupplyAirOutletNodeName_optional&
        SimFlowEnergyTrans_SupplyAirOutletNodeName () const;

        SimFlowEnergyTrans_SupplyAirOutletNodeName_optional&
        SimFlowEnergyTrans_SupplyAirOutletNodeName ();

        void
        SimFlowEnergyTrans_SupplyAirOutletNodeName (const SimFlowEnergyTrans_SupplyAirOutletNodeName_type& x);

        void
        SimFlowEnergyTrans_SupplyAirOutletNodeName (const SimFlowEnergyTrans_SupplyAirOutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_SupplyAirOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_SupplyAirOutletNodeName_type > p);

        // SimFlowEnergyTrans_SecondAirOutletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_SecondAirOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SecondAirOutletNodeName_type > SimFlowEnergyTrans_SecondAirOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SecondAirOutletNodeName_type, char > SimFlowEnergyTrans_SecondAirOutletNodeName_traits;

        const SimFlowEnergyTrans_SecondAirOutletNodeName_optional&
        SimFlowEnergyTrans_SecondAirOutletNodeName () const;

        SimFlowEnergyTrans_SecondAirOutletNodeName_optional&
        SimFlowEnergyTrans_SecondAirOutletNodeName ();

        void
        SimFlowEnergyTrans_SecondAirOutletNodeName (const SimFlowEnergyTrans_SecondAirOutletNodeName_type& x);

        void
        SimFlowEnergyTrans_SecondAirOutletNodeName (const SimFlowEnergyTrans_SecondAirOutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_SecondAirOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_SecondAirOutletNodeName_type > p);

        // Constructors.
        //
        SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate (const RefId_type&);

        SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate (const ::xercesc::DOMElement& e,
                                                        ::xml_schema::flags f = 0,
                                                        ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate (const SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate& x,
                                                        ::xml_schema::flags f = 0,
                                                        ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate&
        operator= (const SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate& x);

        virtual 
        ~SimFlowEnergyTransfer_HeatExAirToAir_FlatPlate ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_SecondAirInletNodeName_optional SimFlowEnergyTrans_SecondAirInletNodeName_;
        SimFlowEnergyTrans_FlowArrangementType_optional SimFlowEnergyTrans_FlowArrangementType_;
        SimFlowEnergyTrans_RatioSupplyToSecondHAVal_optional SimFlowEnergyTrans_RatioSupplyToSecondHAVal_;
        SimFlowEnergyTrans_NomSupplyAirFlowRate_optional SimFlowEnergyTrans_NomSupplyAirFlowRate_;
        SimFlowEnergyTrans_NomSupplyAirInletTemp_optional SimFlowEnergyTrans_NomSupplyAirInletTemp_;
        SimFlowEnergyTrans_NomSupplyAirOutletTemp_optional SimFlowEnergyTrans_NomSupplyAirOutletTemp_;
        SimFlowEnergyTrans_NomSecondAirFlowRate_optional SimFlowEnergyTrans_NomSecondAirFlowRate_;
        SimFlowEnergyTrans_NomSecondAirInletTemp_optional SimFlowEnergyTrans_NomSecondAirInletTemp_;
        SimFlowEnergyTrans_SupplyAirInletNodeName_optional SimFlowEnergyTrans_SupplyAirInletNodeName_;
        SimFlowEnergyTrans_SupplyAirOutletNodeName_optional SimFlowEnergyTrans_SupplyAirOutletNodeName_;
        SimFlowEnergyTrans_SecondAirOutletNodeName_optional SimFlowEnergyTrans_SecondAirOutletNodeName_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_HEAT_EX_AIR_TO_AIR_FLAT_PLATE_HXX
