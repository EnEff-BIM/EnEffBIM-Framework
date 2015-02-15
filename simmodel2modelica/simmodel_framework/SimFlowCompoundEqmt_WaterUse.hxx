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

#ifndef SIM_FLOW_COMPOUND_EQMT_WATER_USE_HXX
#define SIM_FLOW_COMPOUND_EQMT_WATER_USE_HXX

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
      class SimFlowCompoundEqmt_WaterUse;
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

#include "simflowcompoundeqmt.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowCompoundEqmt_WaterUse: public ::namespaces::Sim::MepModel::SimFlowCompoundEqmt
      {
        public:
        // SimFlowCompEqmt_InNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_InNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_InNodeName_type > SimFlowCompEqmt_InNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_InNodeName_type, char > SimFlowCompEqmt_InNodeName_traits;

        const SimFlowCompEqmt_InNodeName_optional&
        SimFlowCompEqmt_InNodeName () const;

        SimFlowCompEqmt_InNodeName_optional&
        SimFlowCompEqmt_InNodeName ();

        void
        SimFlowCompEqmt_InNodeName (const SimFlowCompEqmt_InNodeName_type& x);

        void
        SimFlowCompEqmt_InNodeName (const SimFlowCompEqmt_InNodeName_optional& x);

        void
        SimFlowCompEqmt_InNodeName (::std::auto_ptr< SimFlowCompEqmt_InNodeName_type > p);

        // SimFlowCompEqmt_OutNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_OutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_OutNodeName_type > SimFlowCompEqmt_OutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_OutNodeName_type, char > SimFlowCompEqmt_OutNodeName_traits;

        const SimFlowCompEqmt_OutNodeName_optional&
        SimFlowCompEqmt_OutNodeName () const;

        SimFlowCompEqmt_OutNodeName_optional&
        SimFlowCompEqmt_OutNodeName ();

        void
        SimFlowCompEqmt_OutNodeName (const SimFlowCompEqmt_OutNodeName_type& x);

        void
        SimFlowCompEqmt_OutNodeName (const SimFlowCompEqmt_OutNodeName_optional& x);

        void
        SimFlowCompEqmt_OutNodeName (::std::auto_ptr< SimFlowCompEqmt_OutNodeName_type > p);

        // SimFlowCompEqmt_SupWaterStoTankName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_SupWaterStoTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_SupWaterStoTankName_type > SimFlowCompEqmt_SupWaterStoTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_SupWaterStoTankName_type, char > SimFlowCompEqmt_SupWaterStoTankName_traits;

        const SimFlowCompEqmt_SupWaterStoTankName_optional&
        SimFlowCompEqmt_SupWaterStoTankName () const;

        SimFlowCompEqmt_SupWaterStoTankName_optional&
        SimFlowCompEqmt_SupWaterStoTankName ();

        void
        SimFlowCompEqmt_SupWaterStoTankName (const SimFlowCompEqmt_SupWaterStoTankName_type& x);

        void
        SimFlowCompEqmt_SupWaterStoTankName (const SimFlowCompEqmt_SupWaterStoTankName_optional& x);

        void
        SimFlowCompEqmt_SupWaterStoTankName (::std::auto_ptr< SimFlowCompEqmt_SupWaterStoTankName_type > p);

        // SimFlowCompEqmt_ReclamWaterStoTankName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_ReclamWaterStoTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_ReclamWaterStoTankName_type > SimFlowCompEqmt_ReclamWaterStoTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_ReclamWaterStoTankName_type, char > SimFlowCompEqmt_ReclamWaterStoTankName_traits;

        const SimFlowCompEqmt_ReclamWaterStoTankName_optional&
        SimFlowCompEqmt_ReclamWaterStoTankName () const;

        SimFlowCompEqmt_ReclamWaterStoTankName_optional&
        SimFlowCompEqmt_ReclamWaterStoTankName ();

        void
        SimFlowCompEqmt_ReclamWaterStoTankName (const SimFlowCompEqmt_ReclamWaterStoTankName_type& x);

        void
        SimFlowCompEqmt_ReclamWaterStoTankName (const SimFlowCompEqmt_ReclamWaterStoTankName_optional& x);

        void
        SimFlowCompEqmt_ReclamWaterStoTankName (::std::auto_ptr< SimFlowCompEqmt_ReclamWaterStoTankName_type > p);

        // SimFlowCompEqmt_HotWaterSupTempSchedName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_HotWaterSupTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_HotWaterSupTempSchedName_type > SimFlowCompEqmt_HotWaterSupTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_HotWaterSupTempSchedName_type, char > SimFlowCompEqmt_HotWaterSupTempSchedName_traits;

        const SimFlowCompEqmt_HotWaterSupTempSchedName_optional&
        SimFlowCompEqmt_HotWaterSupTempSchedName () const;

        SimFlowCompEqmt_HotWaterSupTempSchedName_optional&
        SimFlowCompEqmt_HotWaterSupTempSchedName ();

        void
        SimFlowCompEqmt_HotWaterSupTempSchedName (const SimFlowCompEqmt_HotWaterSupTempSchedName_type& x);

        void
        SimFlowCompEqmt_HotWaterSupTempSchedName (const SimFlowCompEqmt_HotWaterSupTempSchedName_optional& x);

        void
        SimFlowCompEqmt_HotWaterSupTempSchedName (::std::auto_ptr< SimFlowCompEqmt_HotWaterSupTempSchedName_type > p);

        // SimFlowCompEqmt_ColdWaterSupTempSchedName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_ColdWaterSupTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_ColdWaterSupTempSchedName_type > SimFlowCompEqmt_ColdWaterSupTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_ColdWaterSupTempSchedName_type, char > SimFlowCompEqmt_ColdWaterSupTempSchedName_traits;

        const SimFlowCompEqmt_ColdWaterSupTempSchedName_optional&
        SimFlowCompEqmt_ColdWaterSupTempSchedName () const;

        SimFlowCompEqmt_ColdWaterSupTempSchedName_optional&
        SimFlowCompEqmt_ColdWaterSupTempSchedName ();

        void
        SimFlowCompEqmt_ColdWaterSupTempSchedName (const SimFlowCompEqmt_ColdWaterSupTempSchedName_type& x);

        void
        SimFlowCompEqmt_ColdWaterSupTempSchedName (const SimFlowCompEqmt_ColdWaterSupTempSchedName_optional& x);

        void
        SimFlowCompEqmt_ColdWaterSupTempSchedName (::std::auto_ptr< SimFlowCompEqmt_ColdWaterSupTempSchedName_type > p);

        // SimFlowCompEqmt_DrainWaterHeatExchType
        //
        typedef ::xml_schema::string SimFlowCompEqmt_DrainWaterHeatExchType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_DrainWaterHeatExchType_type > SimFlowCompEqmt_DrainWaterHeatExchType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_DrainWaterHeatExchType_type, char > SimFlowCompEqmt_DrainWaterHeatExchType_traits;

        const SimFlowCompEqmt_DrainWaterHeatExchType_optional&
        SimFlowCompEqmt_DrainWaterHeatExchType () const;

        SimFlowCompEqmt_DrainWaterHeatExchType_optional&
        SimFlowCompEqmt_DrainWaterHeatExchType ();

        void
        SimFlowCompEqmt_DrainWaterHeatExchType (const SimFlowCompEqmt_DrainWaterHeatExchType_type& x);

        void
        SimFlowCompEqmt_DrainWaterHeatExchType (const SimFlowCompEqmt_DrainWaterHeatExchType_optional& x);

        void
        SimFlowCompEqmt_DrainWaterHeatExchType (::std::auto_ptr< SimFlowCompEqmt_DrainWaterHeatExchType_type > p);

        // SimFlowCompEqmt_DrainWaterHeatExchDest
        //
        typedef ::xml_schema::string SimFlowCompEqmt_DrainWaterHeatExchDest_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_DrainWaterHeatExchDest_type > SimFlowCompEqmt_DrainWaterHeatExchDest_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_DrainWaterHeatExchDest_type, char > SimFlowCompEqmt_DrainWaterHeatExchDest_traits;

        const SimFlowCompEqmt_DrainWaterHeatExchDest_optional&
        SimFlowCompEqmt_DrainWaterHeatExchDest () const;

        SimFlowCompEqmt_DrainWaterHeatExchDest_optional&
        SimFlowCompEqmt_DrainWaterHeatExchDest ();

        void
        SimFlowCompEqmt_DrainWaterHeatExchDest (const SimFlowCompEqmt_DrainWaterHeatExchDest_type& x);

        void
        SimFlowCompEqmt_DrainWaterHeatExchDest (const SimFlowCompEqmt_DrainWaterHeatExchDest_optional& x);

        void
        SimFlowCompEqmt_DrainWaterHeatExchDest (::std::auto_ptr< SimFlowCompEqmt_DrainWaterHeatExchDest_type > p);

        // SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_type > SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_traits;

        const SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_optional&
        SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea () const;

        SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_optional&
        SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea ();

        void
        SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea (const SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_type& x);

        void
        SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea (const SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_optional& x);

        // SimFlowCompEqmt_WaterUseEqmtName_1_10
        //
        typedef ::xml_schema::idrefs SimFlowCompEqmt_WaterUseEqmtName_1_10_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_WaterUseEqmtName_1_10_type > SimFlowCompEqmt_WaterUseEqmtName_1_10_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_WaterUseEqmtName_1_10_type, char > SimFlowCompEqmt_WaterUseEqmtName_1_10_traits;

        const SimFlowCompEqmt_WaterUseEqmtName_1_10_optional&
        SimFlowCompEqmt_WaterUseEqmtName_1_10 () const;

        SimFlowCompEqmt_WaterUseEqmtName_1_10_optional&
        SimFlowCompEqmt_WaterUseEqmtName_1_10 ();

        void
        SimFlowCompEqmt_WaterUseEqmtName_1_10 (const SimFlowCompEqmt_WaterUseEqmtName_1_10_type& x);

        void
        SimFlowCompEqmt_WaterUseEqmtName_1_10 (const SimFlowCompEqmt_WaterUseEqmtName_1_10_optional& x);

        void
        SimFlowCompEqmt_WaterUseEqmtName_1_10 (::std::auto_ptr< SimFlowCompEqmt_WaterUseEqmtName_1_10_type > p);

        // Constructors.
        //
        SimFlowCompoundEqmt_WaterUse (const RefId_type&);

        SimFlowCompoundEqmt_WaterUse (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f = 0,
                                      ::xml_schema::container* c = 0);

        SimFlowCompoundEqmt_WaterUse (const SimFlowCompoundEqmt_WaterUse& x,
                                      ::xml_schema::flags f = 0,
                                      ::xml_schema::container* c = 0);

        virtual SimFlowCompoundEqmt_WaterUse*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowCompoundEqmt_WaterUse&
        operator= (const SimFlowCompoundEqmt_WaterUse& x);

        virtual 
        ~SimFlowCompoundEqmt_WaterUse ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowCompEqmt_InNodeName_optional SimFlowCompEqmt_InNodeName_;
        SimFlowCompEqmt_OutNodeName_optional SimFlowCompEqmt_OutNodeName_;
        SimFlowCompEqmt_SupWaterStoTankName_optional SimFlowCompEqmt_SupWaterStoTankName_;
        SimFlowCompEqmt_ReclamWaterStoTankName_optional SimFlowCompEqmt_ReclamWaterStoTankName_;
        SimFlowCompEqmt_HotWaterSupTempSchedName_optional SimFlowCompEqmt_HotWaterSupTempSchedName_;
        SimFlowCompEqmt_ColdWaterSupTempSchedName_optional SimFlowCompEqmt_ColdWaterSupTempSchedName_;
        SimFlowCompEqmt_DrainWaterHeatExchType_optional SimFlowCompEqmt_DrainWaterHeatExchType_;
        SimFlowCompEqmt_DrainWaterHeatExchDest_optional SimFlowCompEqmt_DrainWaterHeatExchDest_;
        SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_optional SimFlowCompEqmt_DrainWaterHeatExchUFactTimesArea_;
        SimFlowCompEqmt_WaterUseEqmtName_1_10_optional SimFlowCompEqmt_WaterUseEqmtName_1_10_;
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

#endif // SIM_FLOW_COMPOUND_EQMT_WATER_USE_HXX
