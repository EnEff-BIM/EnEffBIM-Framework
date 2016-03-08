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

#ifndef SIM_BUILDING_ELEMENT_PROXY_SITE_CONTEXT_ELEMENT_SITE_SHADING_HXX
#define SIM_BUILDING_ELEMENT_PROXY_SITE_CONTEXT_ELEMENT_SITE_SHADING_HXX

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
    namespace BuildingModel
    {
      class SimBuildingElementProxy_SiteContextElement_SiteShading;
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

#include "simbuildingelementproxy_sitecontextelement.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimBuildingElementProxy_SiteContextElement_SiteShading: public ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement
      {
        public:
        // SiteContextObjectType
        //
        typedef ::xml_schema::string SiteContextObjectType_type;
        typedef ::xsd::cxx::tree::optional< SiteContextObjectType_type > SiteContextObjectType_optional;
        typedef ::xsd::cxx::tree::traits< SiteContextObjectType_type, char > SiteContextObjectType_traits;

        const SiteContextObjectType_optional&
        SiteContextObjectType () const;

        SiteContextObjectType_optional&
        SiteContextObjectType ();

        void
        SiteContextObjectType (const SiteContextObjectType_type& x);

        void
        SiteContextObjectType (const SiteContextObjectType_optional& x);

        void
        SiteContextObjectType (::std::auto_ptr< SiteContextObjectType_type > p);

        // SimBuildingElementProxy_Name
        //
        typedef ::xml_schema::string SimBuildingElementProxy_Name_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_Name_type > SimBuildingElementProxy_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_Name_type, char > SimBuildingElementProxy_Name_traits;

        const SimBuildingElementProxy_Name_optional&
        SimBuildingElementProxy_Name () const;

        SimBuildingElementProxy_Name_optional&
        SimBuildingElementProxy_Name ();

        void
        SimBuildingElementProxy_Name (const SimBuildingElementProxy_Name_type& x);

        void
        SimBuildingElementProxy_Name (const SimBuildingElementProxy_Name_optional& x);

        void
        SimBuildingElementProxy_Name (::std::auto_ptr< SimBuildingElementProxy_Name_type > p);

        // SimBuildingElementProxy_AzimuthAng
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_AzimuthAng_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_AzimuthAng_type > SimBuildingElementProxy_AzimuthAng_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_AzimuthAng_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_AzimuthAng_traits;

        const SimBuildingElementProxy_AzimuthAng_optional&
        SimBuildingElementProxy_AzimuthAng () const;

        SimBuildingElementProxy_AzimuthAng_optional&
        SimBuildingElementProxy_AzimuthAng ();

        void
        SimBuildingElementProxy_AzimuthAng (const SimBuildingElementProxy_AzimuthAng_type& x);

        void
        SimBuildingElementProxy_AzimuthAng (const SimBuildingElementProxy_AzimuthAng_optional& x);

        // SimBuildingElementProxy_TiltAng
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_TiltAng_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_TiltAng_type > SimBuildingElementProxy_TiltAng_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_TiltAng_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_TiltAng_traits;

        const SimBuildingElementProxy_TiltAng_optional&
        SimBuildingElementProxy_TiltAng () const;

        SimBuildingElementProxy_TiltAng_optional&
        SimBuildingElementProxy_TiltAng ();

        void
        SimBuildingElementProxy_TiltAng (const SimBuildingElementProxy_TiltAng_type& x);

        void
        SimBuildingElementProxy_TiltAng (const SimBuildingElementProxy_TiltAng_optional& x);

        // SimBuildingElementProxy_StartXCoord
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_StartXCoord_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_StartXCoord_type > SimBuildingElementProxy_StartXCoord_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_StartXCoord_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_StartXCoord_traits;

        const SimBuildingElementProxy_StartXCoord_optional&
        SimBuildingElementProxy_StartXCoord () const;

        SimBuildingElementProxy_StartXCoord_optional&
        SimBuildingElementProxy_StartXCoord ();

        void
        SimBuildingElementProxy_StartXCoord (const SimBuildingElementProxy_StartXCoord_type& x);

        void
        SimBuildingElementProxy_StartXCoord (const SimBuildingElementProxy_StartXCoord_optional& x);

        // SimBuildingElementProxy_StartYCoord
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_StartYCoord_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_StartYCoord_type > SimBuildingElementProxy_StartYCoord_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_StartYCoord_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_StartYCoord_traits;

        const SimBuildingElementProxy_StartYCoord_optional&
        SimBuildingElementProxy_StartYCoord () const;

        SimBuildingElementProxy_StartYCoord_optional&
        SimBuildingElementProxy_StartYCoord ();

        void
        SimBuildingElementProxy_StartYCoord (const SimBuildingElementProxy_StartYCoord_type& x);

        void
        SimBuildingElementProxy_StartYCoord (const SimBuildingElementProxy_StartYCoord_optional& x);

        // SimBuildingElementProxy_StartZCoord
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_StartZCoord_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_StartZCoord_type > SimBuildingElementProxy_StartZCoord_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_StartZCoord_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_StartZCoord_traits;

        const SimBuildingElementProxy_StartZCoord_optional&
        SimBuildingElementProxy_StartZCoord () const;

        SimBuildingElementProxy_StartZCoord_optional&
        SimBuildingElementProxy_StartZCoord ();

        void
        SimBuildingElementProxy_StartZCoord (const SimBuildingElementProxy_StartZCoord_type& x);

        void
        SimBuildingElementProxy_StartZCoord (const SimBuildingElementProxy_StartZCoord_optional& x);

        // SimBuildingElementProxy_Length
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_Length_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_Length_type > SimBuildingElementProxy_Length_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_Length_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_Length_traits;

        const SimBuildingElementProxy_Length_optional&
        SimBuildingElementProxy_Length () const;

        SimBuildingElementProxy_Length_optional&
        SimBuildingElementProxy_Length ();

        void
        SimBuildingElementProxy_Length (const SimBuildingElementProxy_Length_type& x);

        void
        SimBuildingElementProxy_Length (const SimBuildingElementProxy_Length_optional& x);

        // SimBuildingElementProxy_Ht
        //
        typedef ::xml_schema::double_ SimBuildingElementProxy_Ht_type;
        typedef ::xsd::cxx::tree::optional< SimBuildingElementProxy_Ht_type > SimBuildingElementProxy_Ht_optional;
        typedef ::xsd::cxx::tree::traits< SimBuildingElementProxy_Ht_type, char, ::xsd::cxx::tree::schema_type::double_ > SimBuildingElementProxy_Ht_traits;

        const SimBuildingElementProxy_Ht_optional&
        SimBuildingElementProxy_Ht () const;

        SimBuildingElementProxy_Ht_optional&
        SimBuildingElementProxy_Ht ();

        void
        SimBuildingElementProxy_Ht (const SimBuildingElementProxy_Ht_type& x);

        void
        SimBuildingElementProxy_Ht (const SimBuildingElementProxy_Ht_optional& x);

        // Constructors.
        //
        SimBuildingElementProxy_SiteContextElement_SiteShading ();

        SimBuildingElementProxy_SiteContextElement_SiteShading (const RefId_type&);

        SimBuildingElementProxy_SiteContextElement_SiteShading (const ::xercesc::DOMElement& e,
                                                                ::xml_schema::flags f = 0,
                                                                ::xml_schema::container* c = 0);

        SimBuildingElementProxy_SiteContextElement_SiteShading (const SimBuildingElementProxy_SiteContextElement_SiteShading& x,
                                                                ::xml_schema::flags f = 0,
                                                                ::xml_schema::container* c = 0);

        virtual SimBuildingElementProxy_SiteContextElement_SiteShading*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimBuildingElementProxy_SiteContextElement_SiteShading&
        operator= (const SimBuildingElementProxy_SiteContextElement_SiteShading& x);

        virtual 
        ~SimBuildingElementProxy_SiteContextElement_SiteShading ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SiteContextObjectType_optional SiteContextObjectType_;
        SimBuildingElementProxy_Name_optional SimBuildingElementProxy_Name_;
        SimBuildingElementProxy_AzimuthAng_optional SimBuildingElementProxy_AzimuthAng_;
        SimBuildingElementProxy_TiltAng_optional SimBuildingElementProxy_TiltAng_;
        SimBuildingElementProxy_StartXCoord_optional SimBuildingElementProxy_StartXCoord_;
        SimBuildingElementProxy_StartYCoord_optional SimBuildingElementProxy_StartYCoord_;
        SimBuildingElementProxy_StartZCoord_optional SimBuildingElementProxy_StartZCoord_;
        SimBuildingElementProxy_Length_optional SimBuildingElementProxy_Length_;
        SimBuildingElementProxy_Ht_optional SimBuildingElementProxy_Ht_;
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

#endif // SIM_BUILDING_ELEMENT_PROXY_SITE_CONTEXT_ELEMENT_SITE_SHADING_HXX
