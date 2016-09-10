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

#ifndef SIM_PROJECT_PROJECT_DESIGN_ALTERNATIVE_HXX
#define SIM_PROJECT_PROJECT_DESIGN_ALTERNATIVE_HXX

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
//#error XSD runtime version mismatch
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
    namespace BuildingModel
    {
      class SimProject_Project_DesignAlternative;
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

#include "simproject_project.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimProject_Project_DesignAlternative: public ::schema::simxml::BuildingModel::SimProject_Project
      {
        public:
        // ProjectPhase
        //
        typedef ::xml_schema::string ProjectPhase_type;
        typedef ::xsd::cxx::tree::optional< ProjectPhase_type, false > ProjectPhase_optional;
        typedef ::xsd::cxx::tree::traits< ProjectPhase_type, char > ProjectPhase_traits;

        const ProjectPhase_optional&
        ProjectPhase () const;

        ProjectPhase_optional&
        ProjectPhase ();

        void
        ProjectPhase (const ProjectPhase_type& x);

        void
        ProjectPhase (const ProjectPhase_optional& x);

        void
        ProjectPhase (::std::auto_ptr< ProjectPhase_type > p);

        // ProjectClientOwner
        //
        typedef ::xml_schema::idref ProjectClientOwner_type;
        typedef ::xsd::cxx::tree::optional< ProjectClientOwner_type, false > ProjectClientOwner_optional;
        typedef ::xsd::cxx::tree::traits< ProjectClientOwner_type, char > ProjectClientOwner_traits;

        const ProjectClientOwner_optional&
        ProjectClientOwner () const;

        ProjectClientOwner_optional&
        ProjectClientOwner ();

        void
        ProjectClientOwner (const ProjectClientOwner_type& x);

        void
        ProjectClientOwner (const ProjectClientOwner_optional& x);

        void
        ProjectClientOwner (::std::auto_ptr< ProjectClientOwner_type > p);

        // ProjectArchitect
        //
        typedef ::xml_schema::idref ProjectArchitect_type;
        typedef ::xsd::cxx::tree::optional< ProjectArchitect_type, false > ProjectArchitect_optional;
        typedef ::xsd::cxx::tree::traits< ProjectArchitect_type, char > ProjectArchitect_traits;

        const ProjectArchitect_optional&
        ProjectArchitect () const;

        ProjectArchitect_optional&
        ProjectArchitect ();

        void
        ProjectArchitect (const ProjectArchitect_type& x);

        void
        ProjectArchitect (const ProjectArchitect_optional& x);

        void
        ProjectArchitect (::std::auto_ptr< ProjectArchitect_type > p);

        // ProjectUnits
        //
        typedef ::xml_schema::idrefs ProjectUnits_type;
        typedef ::xsd::cxx::tree::optional< ProjectUnits_type > ProjectUnits_optional;
        typedef ::xsd::cxx::tree::traits< ProjectUnits_type, char > ProjectUnits_traits;

        const ProjectUnits_optional&
        ProjectUnits () const;

        ProjectUnits_optional&
        ProjectUnits ();

        void
        ProjectUnits (const ProjectUnits_type& x);

        void
        ProjectUnits (const ProjectUnits_optional& x);

        void
        ProjectUnits (::std::auto_ptr< ProjectUnits_type > p);

        // _3DModelRepresentationContexts
        //
        typedef ::xml_schema::idrefs _3DModelRepresentationContexts_type;
        typedef ::xsd::cxx::tree::optional< _3DModelRepresentationContexts_type > _3DModelRepresentationContexts_optional;
        typedef ::xsd::cxx::tree::traits< _3DModelRepresentationContexts_type, char > _3DModelRepresentationContexts_traits;

        const _3DModelRepresentationContexts_optional&
        _3DModelRepresentationContexts () const;

        _3DModelRepresentationContexts_optional&
        _3DModelRepresentationContexts ();

        void
        _3DModelRepresentationContexts (const _3DModelRepresentationContexts_type& x);

        void
        _3DModelRepresentationContexts (const _3DModelRepresentationContexts_optional& x);

        void
        _3DModelRepresentationContexts (::std::auto_ptr< _3DModelRepresentationContexts_type > p);

        // _2DModelRepresentationContexts
        //
        typedef ::xml_schema::idrefs _2DModelRepresentationContexts_type;
        typedef ::xsd::cxx::tree::optional< _2DModelRepresentationContexts_type > _2DModelRepresentationContexts_optional;
        typedef ::xsd::cxx::tree::traits< _2DModelRepresentationContexts_type, char > _2DModelRepresentationContexts_traits;

        const _2DModelRepresentationContexts_optional&
        _2DModelRepresentationContexts () const;

        _2DModelRepresentationContexts_optional&
        _2DModelRepresentationContexts ();

        void
        _2DModelRepresentationContexts (const _2DModelRepresentationContexts_type& x);

        void
        _2DModelRepresentationContexts (const _2DModelRepresentationContexts_optional& x);

        void
        _2DModelRepresentationContexts (::std::auto_ptr< _2DModelRepresentationContexts_type > p);

        // Constructors.
        //
        SimProject_Project_DesignAlternative ();

        SimProject_Project_DesignAlternative (const RefId_type&);

        SimProject_Project_DesignAlternative (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        SimProject_Project_DesignAlternative (const SimProject_Project_DesignAlternative& x,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        virtual SimProject_Project_DesignAlternative*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimProject_Project_DesignAlternative&
        operator= (const SimProject_Project_DesignAlternative& x);

        virtual 
        ~SimProject_Project_DesignAlternative ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        ProjectPhase_optional ProjectPhase_;
        ProjectClientOwner_optional ProjectClientOwner_;
        ProjectArchitect_optional ProjectArchitect_;
        ProjectUnits_optional ProjectUnits_;
        _3DModelRepresentationContexts_optional _3DModelRepresentationContexts_;
        _2DModelRepresentationContexts_optional _2DModelRepresentationContexts_;
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
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_PROJECT_PROJECT_DESIGN_ALTERNATIVE_HXX
