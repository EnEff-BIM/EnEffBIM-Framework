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

#ifndef SIM_COST_LIFE_CYCLE_COST_RECURRING_COSTS_HXX
#define SIM_COST_LIFE_CYCLE_COST_RECURRING_COSTS_HXX

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
      class SimCost_LifeCycleCost_RecurringCosts;
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

#include "simcost_lifecyclecost.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimCost_LifeCycleCost_RecurringCosts: public ::schema::simxml::ResourcesGeneral::SimCost_LifeCycleCost
      {
        public:
        // SimCost_Category
        //
        typedef ::xml_schema::string SimCost_Category_type;
        typedef ::xsd::cxx::tree::optional< SimCost_Category_type > SimCost_Category_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_Category_type, char > SimCost_Category_traits;

        const SimCost_Category_optional&
        SimCost_Category () const;

        SimCost_Category_optional&
        SimCost_Category ();

        void
        SimCost_Category (const SimCost_Category_type& x);

        void
        SimCost_Category (const SimCost_Category_optional& x);

        void
        SimCost_Category (::std::auto_ptr< SimCost_Category_type > p);

        // SimCost_Cost
        //
        typedef ::xml_schema::double_ SimCost_Cost_type;
        typedef ::xsd::cxx::tree::optional< SimCost_Cost_type > SimCost_Cost_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_Cost_type, char, ::xsd::cxx::tree::schema_type::double_ > SimCost_Cost_traits;

        const SimCost_Cost_optional&
        SimCost_Cost () const;

        SimCost_Cost_optional&
        SimCost_Cost ();

        void
        SimCost_Cost (const SimCost_Cost_type& x);

        void
        SimCost_Cost (const SimCost_Cost_optional& x);

        // SimCost_StartOfCosts
        //
        typedef ::xml_schema::string SimCost_StartOfCosts_type;
        typedef ::xsd::cxx::tree::optional< SimCost_StartOfCosts_type > SimCost_StartOfCosts_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_StartOfCosts_type, char > SimCost_StartOfCosts_traits;

        const SimCost_StartOfCosts_optional&
        SimCost_StartOfCosts () const;

        SimCost_StartOfCosts_optional&
        SimCost_StartOfCosts ();

        void
        SimCost_StartOfCosts (const SimCost_StartOfCosts_type& x);

        void
        SimCost_StartOfCosts (const SimCost_StartOfCosts_optional& x);

        void
        SimCost_StartOfCosts (::std::auto_ptr< SimCost_StartOfCosts_type > p);

        // SimCost_YrsFromStart
        //
        typedef ::xml_schema::int_ SimCost_YrsFromStart_type;
        typedef ::xsd::cxx::tree::optional< SimCost_YrsFromStart_type > SimCost_YrsFromStart_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_YrsFromStart_type, char > SimCost_YrsFromStart_traits;

        const SimCost_YrsFromStart_optional&
        SimCost_YrsFromStart () const;

        SimCost_YrsFromStart_optional&
        SimCost_YrsFromStart ();

        void
        SimCost_YrsFromStart (const SimCost_YrsFromStart_type& x);

        void
        SimCost_YrsFromStart (const SimCost_YrsFromStart_optional& x);

        // SimCost_MonthsFromStart
        //
        typedef ::xml_schema::int_ SimCost_MonthsFromStart_type;
        typedef ::xsd::cxx::tree::optional< SimCost_MonthsFromStart_type > SimCost_MonthsFromStart_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_MonthsFromStart_type, char > SimCost_MonthsFromStart_traits;

        const SimCost_MonthsFromStart_optional&
        SimCost_MonthsFromStart () const;

        SimCost_MonthsFromStart_optional&
        SimCost_MonthsFromStart ();

        void
        SimCost_MonthsFromStart (const SimCost_MonthsFromStart_type& x);

        void
        SimCost_MonthsFromStart (const SimCost_MonthsFromStart_optional& x);

        // SimCost_RepeatPeriodYrs
        //
        typedef ::xml_schema::int_ SimCost_RepeatPeriodYrs_type;
        typedef ::xsd::cxx::tree::optional< SimCost_RepeatPeriodYrs_type > SimCost_RepeatPeriodYrs_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_RepeatPeriodYrs_type, char > SimCost_RepeatPeriodYrs_traits;

        const SimCost_RepeatPeriodYrs_optional&
        SimCost_RepeatPeriodYrs () const;

        SimCost_RepeatPeriodYrs_optional&
        SimCost_RepeatPeriodYrs ();

        void
        SimCost_RepeatPeriodYrs (const SimCost_RepeatPeriodYrs_type& x);

        void
        SimCost_RepeatPeriodYrs (const SimCost_RepeatPeriodYrs_optional& x);

        // SimCost_RepeatPeriodMonths
        //
        typedef ::xml_schema::int_ SimCost_RepeatPeriodMonths_type;
        typedef ::xsd::cxx::tree::optional< SimCost_RepeatPeriodMonths_type > SimCost_RepeatPeriodMonths_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_RepeatPeriodMonths_type, char > SimCost_RepeatPeriodMonths_traits;

        const SimCost_RepeatPeriodMonths_optional&
        SimCost_RepeatPeriodMonths () const;

        SimCost_RepeatPeriodMonths_optional&
        SimCost_RepeatPeriodMonths ();

        void
        SimCost_RepeatPeriodMonths (const SimCost_RepeatPeriodMonths_type& x);

        void
        SimCost_RepeatPeriodMonths (const SimCost_RepeatPeriodMonths_optional& x);

        // SimCost_AnnualEscalatRate
        //
        typedef ::xml_schema::double_ SimCost_AnnualEscalatRate_type;
        typedef ::xsd::cxx::tree::optional< SimCost_AnnualEscalatRate_type > SimCost_AnnualEscalatRate_optional;
        typedef ::xsd::cxx::tree::traits< SimCost_AnnualEscalatRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimCost_AnnualEscalatRate_traits;

        const SimCost_AnnualEscalatRate_optional&
        SimCost_AnnualEscalatRate () const;

        SimCost_AnnualEscalatRate_optional&
        SimCost_AnnualEscalatRate ();

        void
        SimCost_AnnualEscalatRate (const SimCost_AnnualEscalatRate_type& x);

        void
        SimCost_AnnualEscalatRate (const SimCost_AnnualEscalatRate_optional& x);

        // Constructors.
        //
        SimCost_LifeCycleCost_RecurringCosts ();

        SimCost_LifeCycleCost_RecurringCosts (const RefId_type&);

        SimCost_LifeCycleCost_RecurringCosts (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        SimCost_LifeCycleCost_RecurringCosts (const SimCost_LifeCycleCost_RecurringCosts& x,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        virtual SimCost_LifeCycleCost_RecurringCosts*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimCost_LifeCycleCost_RecurringCosts&
        operator= (const SimCost_LifeCycleCost_RecurringCosts& x);

        virtual 
        ~SimCost_LifeCycleCost_RecurringCosts ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimCost_Category_optional SimCost_Category_;
        SimCost_Cost_optional SimCost_Cost_;
        SimCost_StartOfCosts_optional SimCost_StartOfCosts_;
        SimCost_YrsFromStart_optional SimCost_YrsFromStart_;
        SimCost_MonthsFromStart_optional SimCost_MonthsFromStart_;
        SimCost_RepeatPeriodYrs_optional SimCost_RepeatPeriodYrs_;
        SimCost_RepeatPeriodMonths_optional SimCost_RepeatPeriodMonths_;
        SimCost_AnnualEscalatRate_optional SimCost_AnnualEscalatRate_;
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

#endif // SIM_COST_LIFE_CYCLE_COST_RECURRING_COSTS_HXX
