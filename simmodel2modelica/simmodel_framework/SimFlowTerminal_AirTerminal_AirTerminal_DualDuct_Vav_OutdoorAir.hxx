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

#ifndef SIM_FLOW_TERMINAL_AIR_TERMINAL_AIR_TERMINAL_DUAL_DUCT_VAV_OUTDOOR_AIR_HXX
#define SIM_FLOW_TERMINAL_AIR_TERMINAL_AIR_TERMINAL_DUAL_DUCT_VAV_OUTDOOR_AIR_HXX

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
      class SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir;
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
      class SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir: public ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal
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

        // SimFlowTerm_AirOutNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_AirOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_AirOutNodeName_type > SimFlowTerm_AirOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_AirOutNodeName_type, char > SimFlowTerm_AirOutNodeName_traits;

        const SimFlowTerm_AirOutNodeName_optional&
        SimFlowTerm_AirOutNodeName () const;

        SimFlowTerm_AirOutNodeName_optional&
        SimFlowTerm_AirOutNodeName ();

        void
        SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_type& x);

        void
        SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_optional& x);

        void
        SimFlowTerm_AirOutNodeName (::std::auto_ptr< SimFlowTerm_AirOutNodeName_type > p);

        // SimFlowTerm_DesignSpecOutdrAirObjName
        //
        typedef ::xml_schema::idref SimFlowTerm_DesignSpecOutdrAirObjName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_DesignSpecOutdrAirObjName_type > SimFlowTerm_DesignSpecOutdrAirObjName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_DesignSpecOutdrAirObjName_type, char > SimFlowTerm_DesignSpecOutdrAirObjName_traits;

        const SimFlowTerm_DesignSpecOutdrAirObjName_optional&
        SimFlowTerm_DesignSpecOutdrAirObjName () const;

        SimFlowTerm_DesignSpecOutdrAirObjName_optional&
        SimFlowTerm_DesignSpecOutdrAirObjName ();

        void
        SimFlowTerm_DesignSpecOutdrAirObjName (const SimFlowTerm_DesignSpecOutdrAirObjName_type& x);

        void
        SimFlowTerm_DesignSpecOutdrAirObjName (const SimFlowTerm_DesignSpecOutdrAirObjName_optional& x);

        void
        SimFlowTerm_DesignSpecOutdrAirObjName (::std::auto_ptr< SimFlowTerm_DesignSpecOutdrAirObjName_type > p);

        // SimFlowTerm_OutdrAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_OutdrAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_OutdrAirInletNodeName_type > SimFlowTerm_OutdrAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_OutdrAirInletNodeName_type, char > SimFlowTerm_OutdrAirInletNodeName_traits;

        const SimFlowTerm_OutdrAirInletNodeName_optional&
        SimFlowTerm_OutdrAirInletNodeName () const;

        SimFlowTerm_OutdrAirInletNodeName_optional&
        SimFlowTerm_OutdrAirInletNodeName ();

        void
        SimFlowTerm_OutdrAirInletNodeName (const SimFlowTerm_OutdrAirInletNodeName_type& x);

        void
        SimFlowTerm_OutdrAirInletNodeName (const SimFlowTerm_OutdrAirInletNodeName_optional& x);

        void
        SimFlowTerm_OutdrAirInletNodeName (::std::auto_ptr< SimFlowTerm_OutdrAirInletNodeName_type > p);

        // SimFlowTerm_RecirculatedAirInletNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_RecirculatedAirInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_RecirculatedAirInletNodeName_type > SimFlowTerm_RecirculatedAirInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_RecirculatedAirInletNodeName_type, char > SimFlowTerm_RecirculatedAirInletNodeName_traits;

        const SimFlowTerm_RecirculatedAirInletNodeName_optional&
        SimFlowTerm_RecirculatedAirInletNodeName () const;

        SimFlowTerm_RecirculatedAirInletNodeName_optional&
        SimFlowTerm_RecirculatedAirInletNodeName ();

        void
        SimFlowTerm_RecirculatedAirInletNodeName (const SimFlowTerm_RecirculatedAirInletNodeName_type& x);

        void
        SimFlowTerm_RecirculatedAirInletNodeName (const SimFlowTerm_RecirculatedAirInletNodeName_optional& x);

        void
        SimFlowTerm_RecirculatedAirInletNodeName (::std::auto_ptr< SimFlowTerm_RecirculatedAirInletNodeName_type > p);

        // SimFlowTerm_MaxTermAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowTerm_MaxTermAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_MaxTermAirFlowRate_type > SimFlowTerm_MaxTermAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_MaxTermAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_MaxTermAirFlowRate_traits;

        const SimFlowTerm_MaxTermAirFlowRate_optional&
        SimFlowTerm_MaxTermAirFlowRate () const;

        SimFlowTerm_MaxTermAirFlowRate_optional&
        SimFlowTerm_MaxTermAirFlowRate ();

        void
        SimFlowTerm_MaxTermAirFlowRate (const SimFlowTerm_MaxTermAirFlowRate_type& x);

        void
        SimFlowTerm_MaxTermAirFlowRate (const SimFlowTerm_MaxTermAirFlowRate_optional& x);

        // SimFlowTerm_PerPersonVentilationRateMode
        //
        typedef ::xml_schema::string SimFlowTerm_PerPersonVentilationRateMode_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_PerPersonVentilationRateMode_type > SimFlowTerm_PerPersonVentilationRateMode_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_PerPersonVentilationRateMode_type, char > SimFlowTerm_PerPersonVentilationRateMode_traits;

        const SimFlowTerm_PerPersonVentilationRateMode_optional&
        SimFlowTerm_PerPersonVentilationRateMode () const;

        SimFlowTerm_PerPersonVentilationRateMode_optional&
        SimFlowTerm_PerPersonVentilationRateMode ();

        void
        SimFlowTerm_PerPersonVentilationRateMode (const SimFlowTerm_PerPersonVentilationRateMode_type& x);

        void
        SimFlowTerm_PerPersonVentilationRateMode (const SimFlowTerm_PerPersonVentilationRateMode_optional& x);

        void
        SimFlowTerm_PerPersonVentilationRateMode (::std::auto_ptr< SimFlowTerm_PerPersonVentilationRateMode_type > p);

        // Constructors.
        //
        SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir (const RefId_type&);

        SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir (const ::xercesc::DOMElement& e,
                                                                         ::xml_schema::flags f = 0,
                                                                         ::xml_schema::container* c = 0);

        SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir (const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir& x,
                                                                         ::xml_schema::flags f = 0,
                                                                         ::xml_schema::container* c = 0);

        virtual SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir&
        operator= (const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir& x);

        virtual 
        ~SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_Vav_OutdoorAir ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowTerm_AvailSchedName_optional SimFlowTerm_AvailSchedName_;
        SimFlowTerm_AirOutNodeName_optional SimFlowTerm_AirOutNodeName_;
        SimFlowTerm_DesignSpecOutdrAirObjName_optional SimFlowTerm_DesignSpecOutdrAirObjName_;
        SimFlowTerm_OutdrAirInletNodeName_optional SimFlowTerm_OutdrAirInletNodeName_;
        SimFlowTerm_RecirculatedAirInletNodeName_optional SimFlowTerm_RecirculatedAirInletNodeName_;
        SimFlowTerm_MaxTermAirFlowRate_optional SimFlowTerm_MaxTermAirFlowRate_;
        SimFlowTerm_PerPersonVentilationRateMode_optional SimFlowTerm_PerPersonVentilationRateMode_;
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

#endif // SIM_FLOW_TERMINAL_AIR_TERMINAL_AIR_TERMINAL_DUAL_DUCT_VAV_OUTDOOR_AIR_HXX
