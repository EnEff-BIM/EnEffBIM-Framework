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

#ifndef SIM_FLOW_TERMINAL_PLUMBING_TERMINAL_HOT_WATER_FIXTURE_SET_HXX
#define SIM_FLOW_TERMINAL_PLUMBING_TERMINAL_HOT_WATER_FIXTURE_SET_HXX

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
      class SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet;
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

#include "simflowterminal_plumbingterminal.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet: public ::schema::simxml::MepModel::SimFlowTerminal_PlumbingTerminal
      {
        public:
        // SimFlowTerm_Name
        //
        typedef ::xml_schema::string SimFlowTerm_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_Name_type > SimFlowTerm_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_Name_type, char > SimFlowTerm_Name_traits;

        const SimFlowTerm_Name_optional&
        SimFlowTerm_Name () const;

        SimFlowTerm_Name_optional&
        SimFlowTerm_Name ();

        void
        SimFlowTerm_Name (const SimFlowTerm_Name_type& x);

        void
        SimFlowTerm_Name (const SimFlowTerm_Name_optional& x);

        void
        SimFlowTerm_Name (::std::auto_ptr< SimFlowTerm_Name_type > p);

        // SimFlowTerm_OutNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_OutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_OutNodeName_type > SimFlowTerm_OutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_OutNodeName_type, char > SimFlowTerm_OutNodeName_traits;

        const SimFlowTerm_OutNodeName_optional&
        SimFlowTerm_OutNodeName () const;

        SimFlowTerm_OutNodeName_optional&
        SimFlowTerm_OutNodeName ();

        void
        SimFlowTerm_OutNodeName (const SimFlowTerm_OutNodeName_type& x);

        void
        SimFlowTerm_OutNodeName (const SimFlowTerm_OutNodeName_optional& x);

        void
        SimFlowTerm_OutNodeName (::std::auto_ptr< SimFlowTerm_OutNodeName_type > p);

        // SimFlowTerm_HotWaterSupTempSchedName
        //
        typedef ::xml_schema::idref SimFlowTerm_HotWaterSupTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_HotWaterSupTempSchedName_type > SimFlowTerm_HotWaterSupTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_HotWaterSupTempSchedName_type, char > SimFlowTerm_HotWaterSupTempSchedName_traits;

        const SimFlowTerm_HotWaterSupTempSchedName_optional&
        SimFlowTerm_HotWaterSupTempSchedName () const;

        SimFlowTerm_HotWaterSupTempSchedName_optional&
        SimFlowTerm_HotWaterSupTempSchedName ();

        void
        SimFlowTerm_HotWaterSupTempSchedName (const SimFlowTerm_HotWaterSupTempSchedName_type& x);

        void
        SimFlowTerm_HotWaterSupTempSchedName (const SimFlowTerm_HotWaterSupTempSchedName_optional& x);

        void
        SimFlowTerm_HotWaterSupTempSchedName (::std::auto_ptr< SimFlowTerm_HotWaterSupTempSchedName_type > p);

        // SimFlowTerm_ColdWaterSupTempSchedName
        //
        typedef ::xml_schema::idref SimFlowTerm_ColdWaterSupTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ColdWaterSupTempSchedName_type > SimFlowTerm_ColdWaterSupTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ColdWaterSupTempSchedName_type, char > SimFlowTerm_ColdWaterSupTempSchedName_traits;

        const SimFlowTerm_ColdWaterSupTempSchedName_optional&
        SimFlowTerm_ColdWaterSupTempSchedName () const;

        SimFlowTerm_ColdWaterSupTempSchedName_optional&
        SimFlowTerm_ColdWaterSupTempSchedName ();

        void
        SimFlowTerm_ColdWaterSupTempSchedName (const SimFlowTerm_ColdWaterSupTempSchedName_type& x);

        void
        SimFlowTerm_ColdWaterSupTempSchedName (const SimFlowTerm_ColdWaterSupTempSchedName_optional& x);

        void
        SimFlowTerm_ColdWaterSupTempSchedName (::std::auto_ptr< SimFlowTerm_ColdWaterSupTempSchedName_type > p);

        // SimFlowTerm_InNodeName
        //
        typedef ::xml_schema::string SimFlowTerm_InNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_InNodeName_type > SimFlowTerm_InNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_InNodeName_type, char > SimFlowTerm_InNodeName_traits;

        const SimFlowTerm_InNodeName_optional&
        SimFlowTerm_InNodeName () const;

        SimFlowTerm_InNodeName_optional&
        SimFlowTerm_InNodeName ();

        void
        SimFlowTerm_InNodeName (const SimFlowTerm_InNodeName_type& x);

        void
        SimFlowTerm_InNodeName (const SimFlowTerm_InNodeName_optional& x);

        void
        SimFlowTerm_InNodeName (::std::auto_ptr< SimFlowTerm_InNodeName_type > p);

        // SimFlowTerm_SupWaterStoTankName
        //
        typedef ::xml_schema::idref SimFlowTerm_SupWaterStoTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_SupWaterStoTankName_type > SimFlowTerm_SupWaterStoTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_SupWaterStoTankName_type, char > SimFlowTerm_SupWaterStoTankName_traits;

        const SimFlowTerm_SupWaterStoTankName_optional&
        SimFlowTerm_SupWaterStoTankName () const;

        SimFlowTerm_SupWaterStoTankName_optional&
        SimFlowTerm_SupWaterStoTankName ();

        void
        SimFlowTerm_SupWaterStoTankName (const SimFlowTerm_SupWaterStoTankName_type& x);

        void
        SimFlowTerm_SupWaterStoTankName (const SimFlowTerm_SupWaterStoTankName_optional& x);

        void
        SimFlowTerm_SupWaterStoTankName (::std::auto_ptr< SimFlowTerm_SupWaterStoTankName_type > p);

        // SimFlowTerm_ReclamWaterStoTankName
        //
        typedef ::xml_schema::idref SimFlowTerm_ReclamWaterStoTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_ReclamWaterStoTankName_type > SimFlowTerm_ReclamWaterStoTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_ReclamWaterStoTankName_type, char > SimFlowTerm_ReclamWaterStoTankName_traits;

        const SimFlowTerm_ReclamWaterStoTankName_optional&
        SimFlowTerm_ReclamWaterStoTankName () const;

        SimFlowTerm_ReclamWaterStoTankName_optional&
        SimFlowTerm_ReclamWaterStoTankName ();

        void
        SimFlowTerm_ReclamWaterStoTankName (const SimFlowTerm_ReclamWaterStoTankName_type& x);

        void
        SimFlowTerm_ReclamWaterStoTankName (const SimFlowTerm_ReclamWaterStoTankName_optional& x);

        void
        SimFlowTerm_ReclamWaterStoTankName (::std::auto_ptr< SimFlowTerm_ReclamWaterStoTankName_type > p);

        // SimFlowTerm_DrainWaterHeatExchType
        //
        typedef ::xml_schema::string SimFlowTerm_DrainWaterHeatExchType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_DrainWaterHeatExchType_type > SimFlowTerm_DrainWaterHeatExchType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_DrainWaterHeatExchType_type, char > SimFlowTerm_DrainWaterHeatExchType_traits;

        const SimFlowTerm_DrainWaterHeatExchType_optional&
        SimFlowTerm_DrainWaterHeatExchType () const;

        SimFlowTerm_DrainWaterHeatExchType_optional&
        SimFlowTerm_DrainWaterHeatExchType ();

        void
        SimFlowTerm_DrainWaterHeatExchType (const SimFlowTerm_DrainWaterHeatExchType_type& x);

        void
        SimFlowTerm_DrainWaterHeatExchType (const SimFlowTerm_DrainWaterHeatExchType_optional& x);

        void
        SimFlowTerm_DrainWaterHeatExchType (::std::auto_ptr< SimFlowTerm_DrainWaterHeatExchType_type > p);

        // SimFlowTerm_DrainWaterHeatExchDest
        //
        typedef ::xml_schema::string SimFlowTerm_DrainWaterHeatExchDest_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_DrainWaterHeatExchDest_type > SimFlowTerm_DrainWaterHeatExchDest_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_DrainWaterHeatExchDest_type, char > SimFlowTerm_DrainWaterHeatExchDest_traits;

        const SimFlowTerm_DrainWaterHeatExchDest_optional&
        SimFlowTerm_DrainWaterHeatExchDest () const;

        SimFlowTerm_DrainWaterHeatExchDest_optional&
        SimFlowTerm_DrainWaterHeatExchDest ();

        void
        SimFlowTerm_DrainWaterHeatExchDest (const SimFlowTerm_DrainWaterHeatExchDest_type& x);

        void
        SimFlowTerm_DrainWaterHeatExchDest (const SimFlowTerm_DrainWaterHeatExchDest_optional& x);

        void
        SimFlowTerm_DrainWaterHeatExchDest (::std::auto_ptr< SimFlowTerm_DrainWaterHeatExchDest_type > p);

        // SimFlowTerm_DrainWaterHeatExchUFactTimesArea
        //
        typedef ::xml_schema::double_ SimFlowTerm_DrainWaterHeatExchUFactTimesArea_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_DrainWaterHeatExchUFactTimesArea_type > SimFlowTerm_DrainWaterHeatExchUFactTimesArea_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_DrainWaterHeatExchUFactTimesArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowTerm_DrainWaterHeatExchUFactTimesArea_traits;

        const SimFlowTerm_DrainWaterHeatExchUFactTimesArea_optional&
        SimFlowTerm_DrainWaterHeatExchUFactTimesArea () const;

        SimFlowTerm_DrainWaterHeatExchUFactTimesArea_optional&
        SimFlowTerm_DrainWaterHeatExchUFactTimesArea ();

        void
        SimFlowTerm_DrainWaterHeatExchUFactTimesArea (const SimFlowTerm_DrainWaterHeatExchUFactTimesArea_type& x);

        void
        SimFlowTerm_DrainWaterHeatExchUFactTimesArea (const SimFlowTerm_DrainWaterHeatExchUFactTimesArea_optional& x);

        // SimFlowTerm_WaterUseEqmtName_1_10
        //
        typedef ::xml_schema::idrefs SimFlowTerm_WaterUseEqmtName_1_10_type;
        typedef ::xsd::cxx::tree::optional< SimFlowTerm_WaterUseEqmtName_1_10_type > SimFlowTerm_WaterUseEqmtName_1_10_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowTerm_WaterUseEqmtName_1_10_type, char > SimFlowTerm_WaterUseEqmtName_1_10_traits;

        const SimFlowTerm_WaterUseEqmtName_1_10_optional&
        SimFlowTerm_WaterUseEqmtName_1_10 () const;

        SimFlowTerm_WaterUseEqmtName_1_10_optional&
        SimFlowTerm_WaterUseEqmtName_1_10 ();

        void
        SimFlowTerm_WaterUseEqmtName_1_10 (const SimFlowTerm_WaterUseEqmtName_1_10_type& x);

        void
        SimFlowTerm_WaterUseEqmtName_1_10 (const SimFlowTerm_WaterUseEqmtName_1_10_optional& x);

        void
        SimFlowTerm_WaterUseEqmtName_1_10 (::std::auto_ptr< SimFlowTerm_WaterUseEqmtName_1_10_type > p);

        // Constructors.
        //
        SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet ();

        SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet (const RefId_type&);

        SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet (const ::xercesc::DOMElement& e,
                                                             ::xml_schema::flags f = 0,
                                                             ::xml_schema::container* c = 0);

        SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet (const SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet& x,
                                                             ::xml_schema::flags f = 0,
                                                             ::xml_schema::container* c = 0);

        virtual SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet&
        operator= (const SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet& x);

        virtual 
        ~SimFlowTerminal_PlumbingTerminal_HotWaterFixtureSet ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowTerm_Name_optional SimFlowTerm_Name_;
        SimFlowTerm_OutNodeName_optional SimFlowTerm_OutNodeName_;
        SimFlowTerm_HotWaterSupTempSchedName_optional SimFlowTerm_HotWaterSupTempSchedName_;
        SimFlowTerm_ColdWaterSupTempSchedName_optional SimFlowTerm_ColdWaterSupTempSchedName_;
        SimFlowTerm_InNodeName_optional SimFlowTerm_InNodeName_;
        SimFlowTerm_SupWaterStoTankName_optional SimFlowTerm_SupWaterStoTankName_;
        SimFlowTerm_ReclamWaterStoTankName_optional SimFlowTerm_ReclamWaterStoTankName_;
        SimFlowTerm_DrainWaterHeatExchType_optional SimFlowTerm_DrainWaterHeatExchType_;
        SimFlowTerm_DrainWaterHeatExchDest_optional SimFlowTerm_DrainWaterHeatExchDest_;
        SimFlowTerm_DrainWaterHeatExchUFactTimesArea_optional SimFlowTerm_DrainWaterHeatExchUFactTimesArea_;
        SimFlowTerm_WaterUseEqmtName_1_10_optional SimFlowTerm_WaterUseEqmtName_1_10_;
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

#endif // SIM_FLOW_TERMINAL_PLUMBING_TERMINAL_HOT_WATER_FIXTURE_SET_HXX