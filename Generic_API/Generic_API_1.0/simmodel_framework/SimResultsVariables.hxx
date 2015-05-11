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

#ifndef SIM_RESULTS_VARIABLES_HXX
#define SIM_RESULTS_VARIABLES_HXX

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
    namespace ResourcesGeneral
    {
      class SimResultsVariables;
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

#include "simresultsvisualization.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      class SimResultsVariables: public ::namespaces::Sim::ResourcesGeneral::SimResultsVisualization
      {
        public:
        // VariableName
        //
        typedef ::xml_schema::string VariableName_type;
        typedef ::xsd::cxx::tree::optional< VariableName_type > VariableName_optional;
        typedef ::xsd::cxx::tree::traits< VariableName_type, char > VariableName_traits;

        const VariableName_optional&
        VariableName () const;

        VariableName_optional&
        VariableName ();

        void
        VariableName (const VariableName_type& x);

        void
        VariableName (const VariableName_optional& x);

        void
        VariableName (::std::auto_ptr< VariableName_type > p);

        // VariableType
        //
        typedef ::xml_schema::string VariableType_type;
        typedef ::xsd::cxx::tree::optional< VariableType_type > VariableType_optional;
        typedef ::xsd::cxx::tree::traits< VariableType_type, char > VariableType_traits;

        const VariableType_optional&
        VariableType () const;

        VariableType_optional&
        VariableType ();

        void
        VariableType (const VariableType_type& x);

        void
        VariableType (const VariableType_optional& x);

        void
        VariableType (::std::auto_ptr< VariableType_type > p);

        // LegendName
        //
        typedef ::xml_schema::string LegendName_type;
        typedef ::xsd::cxx::tree::optional< LegendName_type > LegendName_optional;
        typedef ::xsd::cxx::tree::traits< LegendName_type, char > LegendName_traits;

        const LegendName_optional&
        LegendName () const;

        LegendName_optional&
        LegendName ();

        void
        LegendName (const LegendName_type& x);

        void
        LegendName (const LegendName_optional& x);

        void
        LegendName (::std::auto_ptr< LegendName_type > p);

        // SimulationRun
        //
        typedef ::xml_schema::idref SimulationRun_type;
        typedef ::xsd::cxx::tree::optional< SimulationRun_type > SimulationRun_optional;
        typedef ::xsd::cxx::tree::traits< SimulationRun_type, char > SimulationRun_traits;

        const SimulationRun_optional&
        SimulationRun () const;

        SimulationRun_optional&
        SimulationRun ();

        void
        SimulationRun (const SimulationRun_type& x);

        void
        SimulationRun (const SimulationRun_optional& x);

        void
        SimulationRun (::std::auto_ptr< SimulationRun_type > p);

        // KeyValue
        //
        typedef ::xml_schema::string KeyValue_type;
        typedef ::xsd::cxx::tree::optional< KeyValue_type > KeyValue_optional;
        typedef ::xsd::cxx::tree::traits< KeyValue_type, char > KeyValue_traits;

        const KeyValue_optional&
        KeyValue () const;

        KeyValue_optional&
        KeyValue ();

        void
        KeyValue (const KeyValue_type& x);

        void
        KeyValue (const KeyValue_optional& x);

        void
        KeyValue (::std::auto_ptr< KeyValue_type > p);

        // ReportVariableDDIndex
        //
        typedef ::xml_schema::int_ ReportVariableDDIndex_type;
        typedef ::xsd::cxx::tree::optional< ReportVariableDDIndex_type > ReportVariableDDIndex_optional;
        typedef ::xsd::cxx::tree::traits< ReportVariableDDIndex_type, char > ReportVariableDDIndex_traits;

        const ReportVariableDDIndex_optional&
        ReportVariableDDIndex () const;

        ReportVariableDDIndex_optional&
        ReportVariableDDIndex ();

        void
        ReportVariableDDIndex (const ReportVariableDDIndex_type& x);

        void
        ReportVariableDDIndex (const ReportVariableDDIndex_optional& x);

        // FillColor
        //
        typedef ::xml_schema::string FillColor_type;
        typedef ::xsd::cxx::tree::optional< FillColor_type > FillColor_optional;
        typedef ::xsd::cxx::tree::traits< FillColor_type, char > FillColor_traits;

        const FillColor_optional&
        FillColor () const;

        FillColor_optional&
        FillColor ();

        void
        FillColor (const FillColor_type& x);

        void
        FillColor (const FillColor_optional& x);

        void
        FillColor (::std::auto_ptr< FillColor_type > p);

        // FillColorTransparency
        //
        typedef ::xml_schema::int_ FillColorTransparency_type;
        typedef ::xsd::cxx::tree::optional< FillColorTransparency_type > FillColorTransparency_optional;
        typedef ::xsd::cxx::tree::traits< FillColorTransparency_type, char > FillColorTransparency_traits;

        const FillColorTransparency_optional&
        FillColorTransparency () const;

        FillColorTransparency_optional&
        FillColorTransparency ();

        void
        FillColorTransparency (const FillColorTransparency_type& x);

        void
        FillColorTransparency (const FillColorTransparency_optional& x);

        // BorderColor
        //
        typedef ::xml_schema::string BorderColor_type;
        typedef ::xsd::cxx::tree::optional< BorderColor_type > BorderColor_optional;
        typedef ::xsd::cxx::tree::traits< BorderColor_type, char > BorderColor_traits;

        const BorderColor_optional&
        BorderColor () const;

        BorderColor_optional&
        BorderColor ();

        void
        BorderColor (const BorderColor_type& x);

        void
        BorderColor (const BorderColor_optional& x);

        void
        BorderColor (::std::auto_ptr< BorderColor_type > p);

        // ShowLabels
        //
        typedef ::xml_schema::boolean ShowLabels_type;
        typedef ::xsd::cxx::tree::optional< ShowLabels_type > ShowLabels_optional;
        typedef ::xsd::cxx::tree::traits< ShowLabels_type, char > ShowLabels_traits;

        const ShowLabels_optional&
        ShowLabels () const;

        ShowLabels_optional&
        ShowLabels ();

        void
        ShowLabels (const ShowLabels_type& x);

        void
        ShowLabels (const ShowLabels_optional& x);

        // Environment
        //
        typedef ::xml_schema::string Environment_type;
        typedef ::xsd::cxx::tree::optional< Environment_type > Environment_optional;
        typedef ::xsd::cxx::tree::traits< Environment_type, char > Environment_traits;

        const Environment_optional&
        Environment () const;

        Environment_optional&
        Environment ();

        void
        Environment (const Environment_type& x);

        void
        Environment (const Environment_optional& x);

        void
        Environment (::std::auto_ptr< Environment_type > p);

        // AlternativeName
        //
        typedef ::xml_schema::string AlternativeName_type;
        typedef ::xsd::cxx::tree::optional< AlternativeName_type > AlternativeName_optional;
        typedef ::xsd::cxx::tree::traits< AlternativeName_type, char > AlternativeName_traits;

        const AlternativeName_optional&
        AlternativeName () const;

        AlternativeName_optional&
        AlternativeName ();

        void
        AlternativeName (const AlternativeName_type& x);

        void
        AlternativeName (const AlternativeName_optional& x);

        void
        AlternativeName (::std::auto_ptr< AlternativeName_type > p);

        // ConfigurationName
        //
        typedef ::xml_schema::string ConfigurationName_type;
        typedef ::xsd::cxx::tree::optional< ConfigurationName_type > ConfigurationName_optional;
        typedef ::xsd::cxx::tree::traits< ConfigurationName_type, char > ConfigurationName_traits;

        const ConfigurationName_optional&
        ConfigurationName () const;

        ConfigurationName_optional&
        ConfigurationName ();

        void
        ConfigurationName (const ConfigurationName_type& x);

        void
        ConfigurationName (const ConfigurationName_optional& x);

        void
        ConfigurationName (::std::auto_ptr< ConfigurationName_type > p);

        // RunName
        //
        typedef ::xml_schema::string RunName_type;
        typedef ::xsd::cxx::tree::optional< RunName_type > RunName_optional;
        typedef ::xsd::cxx::tree::traits< RunName_type, char > RunName_traits;

        const RunName_optional&
        RunName () const;

        RunName_optional&
        RunName ();

        void
        RunName (const RunName_type& x);

        void
        RunName (const RunName_optional& x);

        void
        RunName (::std::auto_ptr< RunName_type > p);

        // Unit
        //
        typedef ::xml_schema::idref Unit_type;
        typedef ::xsd::cxx::tree::optional< Unit_type > Unit_optional;
        typedef ::xsd::cxx::tree::traits< Unit_type, char > Unit_traits;

        const Unit_optional&
        Unit () const;

        Unit_optional&
        Unit ();

        void
        Unit (const Unit_type& x);

        void
        Unit (const Unit_optional& x);

        void
        Unit (::std::auto_ptr< Unit_type > p);

        // LegendText
        //
        typedef ::xml_schema::string LegendText_type;
        typedef ::xsd::cxx::tree::optional< LegendText_type > LegendText_optional;
        typedef ::xsd::cxx::tree::traits< LegendText_type, char > LegendText_traits;

        const LegendText_optional&
        LegendText () const;

        LegendText_optional&
        LegendText ();

        void
        LegendText (const LegendText_type& x);

        void
        LegendText (const LegendText_optional& x);

        void
        LegendText (::std::auto_ptr< LegendText_type > p);

        // Area
        //
        typedef ::xml_schema::string Area_type;
        typedef ::xsd::cxx::tree::optional< Area_type > Area_optional;
        typedef ::xsd::cxx::tree::traits< Area_type, char > Area_traits;

        const Area_optional&
        Area () const;

        Area_optional&
        Area ();

        void
        Area (const Area_type& x);

        void
        Area (const Area_optional& x);

        void
        Area (::std::auto_ptr< Area_type > p);

        // TimeStep
        //
        typedef ::xml_schema::double_ TimeStep_type;
        typedef ::xsd::cxx::tree::optional< TimeStep_type > TimeStep_optional;
        typedef ::xsd::cxx::tree::traits< TimeStep_type, char, ::xsd::cxx::tree::schema_type::double_ > TimeStep_traits;

        const TimeStep_optional&
        TimeStep () const;

        TimeStep_optional&
        TimeStep ();

        void
        TimeStep (const TimeStep_type& x);

        void
        TimeStep (const TimeStep_optional& x);

        // Constructors.
        //
        SimResultsVariables (const RefId_type&);

        SimResultsVariables (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f = 0,
                             ::xml_schema::container* c = 0);

        SimResultsVariables (const SimResultsVariables& x,
                             ::xml_schema::flags f = 0,
                             ::xml_schema::container* c = 0);

        virtual SimResultsVariables*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimResultsVariables&
        operator= (const SimResultsVariables& x);

        virtual 
        ~SimResultsVariables ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        VariableName_optional VariableName_;
        VariableType_optional VariableType_;
        LegendName_optional LegendName_;
        SimulationRun_optional SimulationRun_;
        KeyValue_optional KeyValue_;
        ReportVariableDDIndex_optional ReportVariableDDIndex_;
        FillColor_optional FillColor_;
        FillColorTransparency_optional FillColorTransparency_;
        BorderColor_optional BorderColor_;
        ShowLabels_optional ShowLabels_;
        Environment_optional Environment_;
        AlternativeName_optional AlternativeName_;
        ConfigurationName_optional ConfigurationName_;
        RunName_optional RunName_;
        Unit_optional Unit_;
        LegendText_optional LegendText_;
        Area_optional Area_;
        TimeStep_optional TimeStep_;
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

#endif // SIM_RESULTS_VARIABLES_HXX
