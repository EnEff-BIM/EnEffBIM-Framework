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

#ifndef SIM_PERFORMANCE_TABLE_VARIABLE_TWO_INDEPENDENT_HXX
#define SIM_PERFORMANCE_TABLE_VARIABLE_TWO_INDEPENDENT_HXX

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
    namespace ResourcesGeometry
    {
      class SimPerformanceTable_Variable_TwoIndependent;
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

#include "simperformancetable_variable.hxx"

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
    namespace ResourcesGeometry
    {
      class SimPerformanceTable_Variable_TwoIndependent: public ::schema::simxml::ResourcesGeometry::SimPerformanceTable_Variable
      {
        public:
        // SimPerformanceTable_MinValX
        //
        typedef ::xml_schema::double_ SimPerformanceTable_MinValX_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_MinValX_type > SimPerformanceTable_MinValX_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_MinValX_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerformanceTable_MinValX_traits;

        const SimPerformanceTable_MinValX_optional&
        SimPerformanceTable_MinValX () const;

        SimPerformanceTable_MinValX_optional&
        SimPerformanceTable_MinValX ();

        void
        SimPerformanceTable_MinValX (const SimPerformanceTable_MinValX_type& x);

        void
        SimPerformanceTable_MinValX (const SimPerformanceTable_MinValX_optional& x);

        // SimPerformanceTable_MaxValX
        //
        typedef ::xml_schema::double_ SimPerformanceTable_MaxValX_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_MaxValX_type > SimPerformanceTable_MaxValX_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_MaxValX_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerformanceTable_MaxValX_traits;

        const SimPerformanceTable_MaxValX_optional&
        SimPerformanceTable_MaxValX () const;

        SimPerformanceTable_MaxValX_optional&
        SimPerformanceTable_MaxValX ();

        void
        SimPerformanceTable_MaxValX (const SimPerformanceTable_MaxValX_type& x);

        void
        SimPerformanceTable_MaxValX (const SimPerformanceTable_MaxValX_optional& x);

        // SimPerformanceTable_InputUnitTypeForX
        //
        typedef ::xml_schema::string SimPerformanceTable_InputUnitTypeForX_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_InputUnitTypeForX_type > SimPerformanceTable_InputUnitTypeForX_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_InputUnitTypeForX_type, char > SimPerformanceTable_InputUnitTypeForX_traits;

        const SimPerformanceTable_InputUnitTypeForX_optional&
        SimPerformanceTable_InputUnitTypeForX () const;

        SimPerformanceTable_InputUnitTypeForX_optional&
        SimPerformanceTable_InputUnitTypeForX ();

        void
        SimPerformanceTable_InputUnitTypeForX (const SimPerformanceTable_InputUnitTypeForX_type& x);

        void
        SimPerformanceTable_InputUnitTypeForX (const SimPerformanceTable_InputUnitTypeForX_optional& x);

        void
        SimPerformanceTable_InputUnitTypeForX (::std::auto_ptr< SimPerformanceTable_InputUnitTypeForX_type > p);

        // SimPerformanceTable_MinValY
        //
        typedef ::xml_schema::double_ SimPerformanceTable_MinValY_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_MinValY_type > SimPerformanceTable_MinValY_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_MinValY_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerformanceTable_MinValY_traits;

        const SimPerformanceTable_MinValY_optional&
        SimPerformanceTable_MinValY () const;

        SimPerformanceTable_MinValY_optional&
        SimPerformanceTable_MinValY ();

        void
        SimPerformanceTable_MinValY (const SimPerformanceTable_MinValY_type& x);

        void
        SimPerformanceTable_MinValY (const SimPerformanceTable_MinValY_optional& x);

        // SimPerformanceTable_MaxValY
        //
        typedef ::xml_schema::double_ SimPerformanceTable_MaxValY_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_MaxValY_type > SimPerformanceTable_MaxValY_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_MaxValY_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerformanceTable_MaxValY_traits;

        const SimPerformanceTable_MaxValY_optional&
        SimPerformanceTable_MaxValY () const;

        SimPerformanceTable_MaxValY_optional&
        SimPerformanceTable_MaxValY ();

        void
        SimPerformanceTable_MaxValY (const SimPerformanceTable_MaxValY_type& x);

        void
        SimPerformanceTable_MaxValY (const SimPerformanceTable_MaxValY_optional& x);

        // SimPerformanceTable_InputUnitTypeForY
        //
        typedef ::xml_schema::string SimPerformanceTable_InputUnitTypeForY_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_InputUnitTypeForY_type > SimPerformanceTable_InputUnitTypeForY_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_InputUnitTypeForY_type, char > SimPerformanceTable_InputUnitTypeForY_traits;

        const SimPerformanceTable_InputUnitTypeForY_optional&
        SimPerformanceTable_InputUnitTypeForY () const;

        SimPerformanceTable_InputUnitTypeForY_optional&
        SimPerformanceTable_InputUnitTypeForY ();

        void
        SimPerformanceTable_InputUnitTypeForY (const SimPerformanceTable_InputUnitTypeForY_type& x);

        void
        SimPerformanceTable_InputUnitTypeForY (const SimPerformanceTable_InputUnitTypeForY_optional& x);

        void
        SimPerformanceTable_InputUnitTypeForY (::std::auto_ptr< SimPerformanceTable_InputUnitTypeForY_type > p);

        // SimPerformanceTable_XValue_1_164
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimPerformanceTable_XValue_1_164_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_XValue_1_164_type > SimPerformanceTable_XValue_1_164_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_XValue_1_164_type, char > SimPerformanceTable_XValue_1_164_traits;

        const SimPerformanceTable_XValue_1_164_optional&
        SimPerformanceTable_XValue_1_164 () const;

        SimPerformanceTable_XValue_1_164_optional&
        SimPerformanceTable_XValue_1_164 ();

        void
        SimPerformanceTable_XValue_1_164 (const SimPerformanceTable_XValue_1_164_type& x);

        void
        SimPerformanceTable_XValue_1_164 (const SimPerformanceTable_XValue_1_164_optional& x);

        void
        SimPerformanceTable_XValue_1_164 (::std::auto_ptr< SimPerformanceTable_XValue_1_164_type > p);

        // SimPerformanceTable_YValue_1_164
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimPerformanceTable_YValue_1_164_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_YValue_1_164_type > SimPerformanceTable_YValue_1_164_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_YValue_1_164_type, char > SimPerformanceTable_YValue_1_164_traits;

        const SimPerformanceTable_YValue_1_164_optional&
        SimPerformanceTable_YValue_1_164 () const;

        SimPerformanceTable_YValue_1_164_optional&
        SimPerformanceTable_YValue_1_164 ();

        void
        SimPerformanceTable_YValue_1_164 (const SimPerformanceTable_YValue_1_164_type& x);

        void
        SimPerformanceTable_YValue_1_164 (const SimPerformanceTable_YValue_1_164_optional& x);

        void
        SimPerformanceTable_YValue_1_164 (::std::auto_ptr< SimPerformanceTable_YValue_1_164_type > p);

        // SimPerformanceTable_OutputValue_1_164
        //
        typedef ::schema::simxml::SimModelCore::doubleList SimPerformanceTable_OutputValue_1_164_type;
        typedef ::xsd::cxx::tree::optional< SimPerformanceTable_OutputValue_1_164_type > SimPerformanceTable_OutputValue_1_164_optional;
        typedef ::xsd::cxx::tree::traits< SimPerformanceTable_OutputValue_1_164_type, char > SimPerformanceTable_OutputValue_1_164_traits;

        const SimPerformanceTable_OutputValue_1_164_optional&
        SimPerformanceTable_OutputValue_1_164 () const;

        SimPerformanceTable_OutputValue_1_164_optional&
        SimPerformanceTable_OutputValue_1_164 ();

        void
        SimPerformanceTable_OutputValue_1_164 (const SimPerformanceTable_OutputValue_1_164_type& x);

        void
        SimPerformanceTable_OutputValue_1_164 (const SimPerformanceTable_OutputValue_1_164_optional& x);

        void
        SimPerformanceTable_OutputValue_1_164 (::std::auto_ptr< SimPerformanceTable_OutputValue_1_164_type > p);

        // Constructors.
        //
        SimPerformanceTable_Variable_TwoIndependent ();

        SimPerformanceTable_Variable_TwoIndependent (const RefId_type&);

        SimPerformanceTable_Variable_TwoIndependent (const ::xercesc::DOMElement& e,
                                                     ::xml_schema::flags f = 0,
                                                     ::xml_schema::container* c = 0);

        SimPerformanceTable_Variable_TwoIndependent (const SimPerformanceTable_Variable_TwoIndependent& x,
                                                     ::xml_schema::flags f = 0,
                                                     ::xml_schema::container* c = 0);

        virtual SimPerformanceTable_Variable_TwoIndependent*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimPerformanceTable_Variable_TwoIndependent&
        operator= (const SimPerformanceTable_Variable_TwoIndependent& x);

        virtual 
        ~SimPerformanceTable_Variable_TwoIndependent ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimPerformanceTable_MinValX_optional SimPerformanceTable_MinValX_;
        SimPerformanceTable_MaxValX_optional SimPerformanceTable_MaxValX_;
        SimPerformanceTable_InputUnitTypeForX_optional SimPerformanceTable_InputUnitTypeForX_;
        SimPerformanceTable_MinValY_optional SimPerformanceTable_MinValY_;
        SimPerformanceTable_MaxValY_optional SimPerformanceTable_MaxValY_;
        SimPerformanceTable_InputUnitTypeForY_optional SimPerformanceTable_InputUnitTypeForY_;
        SimPerformanceTable_XValue_1_164_optional SimPerformanceTable_XValue_1_164_;
        SimPerformanceTable_YValue_1_164_optional SimPerformanceTable_YValue_1_164_;
        SimPerformanceTable_OutputValue_1_164_optional SimPerformanceTable_OutputValue_1_164_;
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
    namespace ResourcesGeometry
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_PERFORMANCE_TABLE_VARIABLE_TWO_INDEPENDENT_HXX
