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

#ifndef SIM_SIMULATION_OUTPUT_REQUEST_STANDARD_REPORTS_TABLE_TIME_BINS_HXX
#define SIM_SIMULATION_OUTPUT_REQUEST_STANDARD_REPORTS_TABLE_TIME_BINS_HXX

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
    namespace ResourcesGeneral
    {
      class SimSimulationOutputRequest_StandardReports_TableTimeBins;
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

#include "simsimulationoutputrequest_standardreports.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimSimulationOutputRequest_StandardReports_TableTimeBins: public ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_StandardReports
      {
        public:
        // SimSimulaOutputRequest_KeyValue
        //
        typedef ::xml_schema::string SimSimulaOutputRequest_KeyValue_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_KeyValue_type > SimSimulaOutputRequest_KeyValue_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_KeyValue_type, char > SimSimulaOutputRequest_KeyValue_traits;

        const SimSimulaOutputRequest_KeyValue_optional&
        SimSimulaOutputRequest_KeyValue () const;

        SimSimulaOutputRequest_KeyValue_optional&
        SimSimulaOutputRequest_KeyValue ();

        void
        SimSimulaOutputRequest_KeyValue (const SimSimulaOutputRequest_KeyValue_type& x);

        void
        SimSimulaOutputRequest_KeyValue (const SimSimulaOutputRequest_KeyValue_optional& x);

        void
        SimSimulaOutputRequest_KeyValue (::std::auto_ptr< SimSimulaOutputRequest_KeyValue_type > p);

        // SimSimulaOutputRequest_VarName
        //
        typedef ::xml_schema::string SimSimulaOutputRequest_VarName_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_VarName_type > SimSimulaOutputRequest_VarName_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_VarName_type, char > SimSimulaOutputRequest_VarName_traits;

        const SimSimulaOutputRequest_VarName_optional&
        SimSimulaOutputRequest_VarName () const;

        SimSimulaOutputRequest_VarName_optional&
        SimSimulaOutputRequest_VarName ();

        void
        SimSimulaOutputRequest_VarName (const SimSimulaOutputRequest_VarName_type& x);

        void
        SimSimulaOutputRequest_VarName (const SimSimulaOutputRequest_VarName_optional& x);

        void
        SimSimulaOutputRequest_VarName (::std::auto_ptr< SimSimulaOutputRequest_VarName_type > p);

        // SimSimulaOutputRequest_IntervalStart
        //
        typedef ::xml_schema::double_ SimSimulaOutputRequest_IntervalStart_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_IntervalStart_type > SimSimulaOutputRequest_IntervalStart_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_IntervalStart_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimulaOutputRequest_IntervalStart_traits;

        const SimSimulaOutputRequest_IntervalStart_optional&
        SimSimulaOutputRequest_IntervalStart () const;

        SimSimulaOutputRequest_IntervalStart_optional&
        SimSimulaOutputRequest_IntervalStart ();

        void
        SimSimulaOutputRequest_IntervalStart (const SimSimulaOutputRequest_IntervalStart_type& x);

        void
        SimSimulaOutputRequest_IntervalStart (const SimSimulaOutputRequest_IntervalStart_optional& x);

        // SimSimulaOutputRequest_IntervalSize
        //
        typedef ::xml_schema::double_ SimSimulaOutputRequest_IntervalSize_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_IntervalSize_type > SimSimulaOutputRequest_IntervalSize_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_IntervalSize_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSimulaOutputRequest_IntervalSize_traits;

        const SimSimulaOutputRequest_IntervalSize_optional&
        SimSimulaOutputRequest_IntervalSize () const;

        SimSimulaOutputRequest_IntervalSize_optional&
        SimSimulaOutputRequest_IntervalSize ();

        void
        SimSimulaOutputRequest_IntervalSize (const SimSimulaOutputRequest_IntervalSize_type& x);

        void
        SimSimulaOutputRequest_IntervalSize (const SimSimulaOutputRequest_IntervalSize_optional& x);

        // SimSimulaOutputRequest_IntervalCount
        //
        typedef ::xml_schema::int_ SimSimulaOutputRequest_IntervalCount_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_IntervalCount_type > SimSimulaOutputRequest_IntervalCount_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_IntervalCount_type, char > SimSimulaOutputRequest_IntervalCount_traits;

        const SimSimulaOutputRequest_IntervalCount_optional&
        SimSimulaOutputRequest_IntervalCount () const;

        SimSimulaOutputRequest_IntervalCount_optional&
        SimSimulaOutputRequest_IntervalCount ();

        void
        SimSimulaOutputRequest_IntervalCount (const SimSimulaOutputRequest_IntervalCount_type& x);

        void
        SimSimulaOutputRequest_IntervalCount (const SimSimulaOutputRequest_IntervalCount_optional& x);

        // SimSimulaOutputRequest_SchedName
        //
        typedef ::xml_schema::idref SimSimulaOutputRequest_SchedName_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_SchedName_type > SimSimulaOutputRequest_SchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_SchedName_type, char > SimSimulaOutputRequest_SchedName_traits;

        const SimSimulaOutputRequest_SchedName_optional&
        SimSimulaOutputRequest_SchedName () const;

        SimSimulaOutputRequest_SchedName_optional&
        SimSimulaOutputRequest_SchedName ();

        void
        SimSimulaOutputRequest_SchedName (const SimSimulaOutputRequest_SchedName_type& x);

        void
        SimSimulaOutputRequest_SchedName (const SimSimulaOutputRequest_SchedName_optional& x);

        void
        SimSimulaOutputRequest_SchedName (::std::auto_ptr< SimSimulaOutputRequest_SchedName_type > p);

        // SimSimulaOutputRequest_VarType
        //
        typedef ::xml_schema::string SimSimulaOutputRequest_VarType_type;
        typedef ::xsd::cxx::tree::optional< SimSimulaOutputRequest_VarType_type > SimSimulaOutputRequest_VarType_optional;
        typedef ::xsd::cxx::tree::traits< SimSimulaOutputRequest_VarType_type, char > SimSimulaOutputRequest_VarType_traits;

        const SimSimulaOutputRequest_VarType_optional&
        SimSimulaOutputRequest_VarType () const;

        SimSimulaOutputRequest_VarType_optional&
        SimSimulaOutputRequest_VarType ();

        void
        SimSimulaOutputRequest_VarType (const SimSimulaOutputRequest_VarType_type& x);

        void
        SimSimulaOutputRequest_VarType (const SimSimulaOutputRequest_VarType_optional& x);

        void
        SimSimulaOutputRequest_VarType (::std::auto_ptr< SimSimulaOutputRequest_VarType_type > p);

        // Constructors.
        //
        SimSimulationOutputRequest_StandardReports_TableTimeBins ();

        SimSimulationOutputRequest_StandardReports_TableTimeBins (const RefId_type&);

        SimSimulationOutputRequest_StandardReports_TableTimeBins (const ::xercesc::DOMElement& e,
                                                                  ::xml_schema::flags f = 0,
                                                                  ::xml_schema::container* c = 0);

        SimSimulationOutputRequest_StandardReports_TableTimeBins (const SimSimulationOutputRequest_StandardReports_TableTimeBins& x,
                                                                  ::xml_schema::flags f = 0,
                                                                  ::xml_schema::container* c = 0);

        virtual SimSimulationOutputRequest_StandardReports_TableTimeBins*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSimulationOutputRequest_StandardReports_TableTimeBins&
        operator= (const SimSimulationOutputRequest_StandardReports_TableTimeBins& x);

        virtual 
        ~SimSimulationOutputRequest_StandardReports_TableTimeBins ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSimulaOutputRequest_KeyValue_optional SimSimulaOutputRequest_KeyValue_;
        SimSimulaOutputRequest_VarName_optional SimSimulaOutputRequest_VarName_;
        SimSimulaOutputRequest_IntervalStart_optional SimSimulaOutputRequest_IntervalStart_;
        SimSimulaOutputRequest_IntervalSize_optional SimSimulaOutputRequest_IntervalSize_;
        SimSimulaOutputRequest_IntervalCount_optional SimSimulaOutputRequest_IntervalCount_;
        SimSimulaOutputRequest_SchedName_optional SimSimulaOutputRequest_SchedName_;
        SimSimulaOutputRequest_VarType_optional SimSimulaOutputRequest_VarType_;
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
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_SIMULATION_OUTPUT_REQUEST_STANDARD_REPORTS_TABLE_TIME_BINS_HXX
