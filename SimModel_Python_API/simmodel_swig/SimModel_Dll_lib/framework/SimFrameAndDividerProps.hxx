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

#ifndef SIM_FRAME_AND_DIVIDER_PROPS_HXX
#define SIM_FRAME_AND_DIVIDER_PROPS_HXX

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
      class SimFrameAndDividerProps;
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

#include "simpropertysetdefinition.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimFrameAndDividerProps: public ::schema::simxml::SimModelCore::SimPropertySetDefinition
      {
        public:
        // SimFrameAndDividerProps_Name
        //
        typedef ::xml_schema::string SimFrameAndDividerProps_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_Name_type > SimFrameAndDividerProps_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_Name_type, char > SimFrameAndDividerProps_Name_traits;

        const SimFrameAndDividerProps_Name_optional&
        SimFrameAndDividerProps_Name () const;

        SimFrameAndDividerProps_Name_optional&
        SimFrameAndDividerProps_Name ();

        void
        SimFrameAndDividerProps_Name (const SimFrameAndDividerProps_Name_type& x);

        void
        SimFrameAndDividerProps_Name (const SimFrameAndDividerProps_Name_optional& x);

        void
        SimFrameAndDividerProps_Name (::std::auto_ptr< SimFrameAndDividerProps_Name_type > p);

        // SimFrameAndDividerProps_FrmWidth
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmWidth_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmWidth_type > SimFrameAndDividerProps_FrmWidth_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmWidth_traits;

        const SimFrameAndDividerProps_FrmWidth_optional&
        SimFrameAndDividerProps_FrmWidth () const;

        SimFrameAndDividerProps_FrmWidth_optional&
        SimFrameAndDividerProps_FrmWidth ();

        void
        SimFrameAndDividerProps_FrmWidth (const SimFrameAndDividerProps_FrmWidth_type& x);

        void
        SimFrameAndDividerProps_FrmWidth (const SimFrameAndDividerProps_FrmWidth_optional& x);

        // SimFrameAndDividerProps_FrmOutsdProject
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmOutsdProject_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmOutsdProject_type > SimFrameAndDividerProps_FrmOutsdProject_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmOutsdProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmOutsdProject_traits;

        const SimFrameAndDividerProps_FrmOutsdProject_optional&
        SimFrameAndDividerProps_FrmOutsdProject () const;

        SimFrameAndDividerProps_FrmOutsdProject_optional&
        SimFrameAndDividerProps_FrmOutsdProject ();

        void
        SimFrameAndDividerProps_FrmOutsdProject (const SimFrameAndDividerProps_FrmOutsdProject_type& x);

        void
        SimFrameAndDividerProps_FrmOutsdProject (const SimFrameAndDividerProps_FrmOutsdProject_optional& x);

        // SimFrameAndDividerProps_FrmInsideProject
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmInsideProject_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmInsideProject_type > SimFrameAndDividerProps_FrmInsideProject_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmInsideProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmInsideProject_traits;

        const SimFrameAndDividerProps_FrmInsideProject_optional&
        SimFrameAndDividerProps_FrmInsideProject () const;

        SimFrameAndDividerProps_FrmInsideProject_optional&
        SimFrameAndDividerProps_FrmInsideProject ();

        void
        SimFrameAndDividerProps_FrmInsideProject (const SimFrameAndDividerProps_FrmInsideProject_type& x);

        void
        SimFrameAndDividerProps_FrmInsideProject (const SimFrameAndDividerProps_FrmInsideProject_optional& x);

        // SimFrameAndDividerProps_FrmCond
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmCond_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmCond_type > SimFrameAndDividerProps_FrmCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmCond_traits;

        const SimFrameAndDividerProps_FrmCond_optional&
        SimFrameAndDividerProps_FrmCond () const;

        SimFrameAndDividerProps_FrmCond_optional&
        SimFrameAndDividerProps_FrmCond ();

        void
        SimFrameAndDividerProps_FrmCond (const SimFrameAndDividerProps_FrmCond_type& x);

        void
        SimFrameAndDividerProps_FrmCond (const SimFrameAndDividerProps_FrmCond_optional& x);

        // SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_type > SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_traits;

        const SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_optional&
        SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond () const;

        SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_optional&
        SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond ();

        void
        SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond (const SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_type& x);

        void
        SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond (const SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_optional& x);

        // SimFrameAndDividerProps_FrmSolarAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmSolarAbsorp_type > SimFrameAndDividerProps_FrmSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmSolarAbsorp_traits;

        const SimFrameAndDividerProps_FrmSolarAbsorp_optional&
        SimFrameAndDividerProps_FrmSolarAbsorp () const;

        SimFrameAndDividerProps_FrmSolarAbsorp_optional&
        SimFrameAndDividerProps_FrmSolarAbsorp ();

        void
        SimFrameAndDividerProps_FrmSolarAbsorp (const SimFrameAndDividerProps_FrmSolarAbsorp_type& x);

        void
        SimFrameAndDividerProps_FrmSolarAbsorp (const SimFrameAndDividerProps_FrmSolarAbsorp_optional& x);

        // SimFrameAndDividerProps_FrmVisibleAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmVisibleAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmVisibleAbsorp_type > SimFrameAndDividerProps_FrmVisibleAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmVisibleAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmVisibleAbsorp_traits;

        const SimFrameAndDividerProps_FrmVisibleAbsorp_optional&
        SimFrameAndDividerProps_FrmVisibleAbsorp () const;

        SimFrameAndDividerProps_FrmVisibleAbsorp_optional&
        SimFrameAndDividerProps_FrmVisibleAbsorp ();

        void
        SimFrameAndDividerProps_FrmVisibleAbsorp (const SimFrameAndDividerProps_FrmVisibleAbsorp_type& x);

        void
        SimFrameAndDividerProps_FrmVisibleAbsorp (const SimFrameAndDividerProps_FrmVisibleAbsorp_optional& x);

        // SimFrameAndDividerProps_FrmThermHemisEmiss
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_FrmThermHemisEmiss_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_FrmThermHemisEmiss_type > SimFrameAndDividerProps_FrmThermHemisEmiss_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_FrmThermHemisEmiss_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_FrmThermHemisEmiss_traits;

        const SimFrameAndDividerProps_FrmThermHemisEmiss_optional&
        SimFrameAndDividerProps_FrmThermHemisEmiss () const;

        SimFrameAndDividerProps_FrmThermHemisEmiss_optional&
        SimFrameAndDividerProps_FrmThermHemisEmiss ();

        void
        SimFrameAndDividerProps_FrmThermHemisEmiss (const SimFrameAndDividerProps_FrmThermHemisEmiss_type& x);

        void
        SimFrameAndDividerProps_FrmThermHemisEmiss (const SimFrameAndDividerProps_FrmThermHemisEmiss_optional& x);

        // SimFrameAndDividerProps_DivType
        //
        typedef ::xml_schema::string SimFrameAndDividerProps_DivType_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivType_type > SimFrameAndDividerProps_DivType_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivType_type, char > SimFrameAndDividerProps_DivType_traits;

        const SimFrameAndDividerProps_DivType_optional&
        SimFrameAndDividerProps_DivType () const;

        SimFrameAndDividerProps_DivType_optional&
        SimFrameAndDividerProps_DivType ();

        void
        SimFrameAndDividerProps_DivType (const SimFrameAndDividerProps_DivType_type& x);

        void
        SimFrameAndDividerProps_DivType (const SimFrameAndDividerProps_DivType_optional& x);

        void
        SimFrameAndDividerProps_DivType (::std::auto_ptr< SimFrameAndDividerProps_DivType_type > p);

        // SimFrameAndDividerProps_DivWidth
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivWidth_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivWidth_type > SimFrameAndDividerProps_DivWidth_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivWidth_traits;

        const SimFrameAndDividerProps_DivWidth_optional&
        SimFrameAndDividerProps_DivWidth () const;

        SimFrameAndDividerProps_DivWidth_optional&
        SimFrameAndDividerProps_DivWidth ();

        void
        SimFrameAndDividerProps_DivWidth (const SimFrameAndDividerProps_DivWidth_type& x);

        void
        SimFrameAndDividerProps_DivWidth (const SimFrameAndDividerProps_DivWidth_optional& x);

        // SimFrameAndDividerProps_NumbHorzDivs
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_NumbHorzDivs_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_NumbHorzDivs_type > SimFrameAndDividerProps_NumbHorzDivs_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_NumbHorzDivs_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_NumbHorzDivs_traits;

        const SimFrameAndDividerProps_NumbHorzDivs_optional&
        SimFrameAndDividerProps_NumbHorzDivs () const;

        SimFrameAndDividerProps_NumbHorzDivs_optional&
        SimFrameAndDividerProps_NumbHorzDivs ();

        void
        SimFrameAndDividerProps_NumbHorzDivs (const SimFrameAndDividerProps_NumbHorzDivs_type& x);

        void
        SimFrameAndDividerProps_NumbHorzDivs (const SimFrameAndDividerProps_NumbHorzDivs_optional& x);

        // SimFrameAndDividerProps_NumbVertlDivs
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_NumbVertlDivs_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_NumbVertlDivs_type > SimFrameAndDividerProps_NumbVertlDivs_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_NumbVertlDivs_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_NumbVertlDivs_traits;

        const SimFrameAndDividerProps_NumbVertlDivs_optional&
        SimFrameAndDividerProps_NumbVertlDivs () const;

        SimFrameAndDividerProps_NumbVertlDivs_optional&
        SimFrameAndDividerProps_NumbVertlDivs ();

        void
        SimFrameAndDividerProps_NumbVertlDivs (const SimFrameAndDividerProps_NumbVertlDivs_type& x);

        void
        SimFrameAndDividerProps_NumbVertlDivs (const SimFrameAndDividerProps_NumbVertlDivs_optional& x);

        // SimFrameAndDividerProps_DivOutsdProject
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivOutsdProject_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivOutsdProject_type > SimFrameAndDividerProps_DivOutsdProject_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivOutsdProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivOutsdProject_traits;

        const SimFrameAndDividerProps_DivOutsdProject_optional&
        SimFrameAndDividerProps_DivOutsdProject () const;

        SimFrameAndDividerProps_DivOutsdProject_optional&
        SimFrameAndDividerProps_DivOutsdProject ();

        void
        SimFrameAndDividerProps_DivOutsdProject (const SimFrameAndDividerProps_DivOutsdProject_type& x);

        void
        SimFrameAndDividerProps_DivOutsdProject (const SimFrameAndDividerProps_DivOutsdProject_optional& x);

        // SimFrameAndDividerProps_DivInsideProject
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivInsideProject_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivInsideProject_type > SimFrameAndDividerProps_DivInsideProject_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivInsideProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivInsideProject_traits;

        const SimFrameAndDividerProps_DivInsideProject_optional&
        SimFrameAndDividerProps_DivInsideProject () const;

        SimFrameAndDividerProps_DivInsideProject_optional&
        SimFrameAndDividerProps_DivInsideProject ();

        void
        SimFrameAndDividerProps_DivInsideProject (const SimFrameAndDividerProps_DivInsideProject_type& x);

        void
        SimFrameAndDividerProps_DivInsideProject (const SimFrameAndDividerProps_DivInsideProject_optional& x);

        // SimFrameAndDividerProps_DivCond
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivCond_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivCond_type > SimFrameAndDividerProps_DivCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivCond_traits;

        const SimFrameAndDividerProps_DivCond_optional&
        SimFrameAndDividerProps_DivCond () const;

        SimFrameAndDividerProps_DivCond_optional&
        SimFrameAndDividerProps_DivCond ();

        void
        SimFrameAndDividerProps_DivCond (const SimFrameAndDividerProps_DivCond_type& x);

        void
        SimFrameAndDividerProps_DivCond (const SimFrameAndDividerProps_DivCond_optional& x);

        // SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_type > SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_traits;

        const SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_optional&
        SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond () const;

        SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_optional&
        SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond ();

        void
        SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond (const SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_type& x);

        void
        SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond (const SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_optional& x);

        // SimFrameAndDividerProps_DivSolarAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivSolarAbsorp_type > SimFrameAndDividerProps_DivSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivSolarAbsorp_traits;

        const SimFrameAndDividerProps_DivSolarAbsorp_optional&
        SimFrameAndDividerProps_DivSolarAbsorp () const;

        SimFrameAndDividerProps_DivSolarAbsorp_optional&
        SimFrameAndDividerProps_DivSolarAbsorp ();

        void
        SimFrameAndDividerProps_DivSolarAbsorp (const SimFrameAndDividerProps_DivSolarAbsorp_type& x);

        void
        SimFrameAndDividerProps_DivSolarAbsorp (const SimFrameAndDividerProps_DivSolarAbsorp_optional& x);

        // SimFrameAndDividerProps_DivVisibleAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivVisibleAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivVisibleAbsorp_type > SimFrameAndDividerProps_DivVisibleAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivVisibleAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivVisibleAbsorp_traits;

        const SimFrameAndDividerProps_DivVisibleAbsorp_optional&
        SimFrameAndDividerProps_DivVisibleAbsorp () const;

        SimFrameAndDividerProps_DivVisibleAbsorp_optional&
        SimFrameAndDividerProps_DivVisibleAbsorp ();

        void
        SimFrameAndDividerProps_DivVisibleAbsorp (const SimFrameAndDividerProps_DivVisibleAbsorp_type& x);

        void
        SimFrameAndDividerProps_DivVisibleAbsorp (const SimFrameAndDividerProps_DivVisibleAbsorp_optional& x);

        // SimFrameAndDividerProps_DivThermHemisEmiss
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_DivThermHemisEmiss_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_DivThermHemisEmiss_type > SimFrameAndDividerProps_DivThermHemisEmiss_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_DivThermHemisEmiss_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_DivThermHemisEmiss_traits;

        const SimFrameAndDividerProps_DivThermHemisEmiss_optional&
        SimFrameAndDividerProps_DivThermHemisEmiss () const;

        SimFrameAndDividerProps_DivThermHemisEmiss_optional&
        SimFrameAndDividerProps_DivThermHemisEmiss ();

        void
        SimFrameAndDividerProps_DivThermHemisEmiss (const SimFrameAndDividerProps_DivThermHemisEmiss_type& x);

        void
        SimFrameAndDividerProps_DivThermHemisEmiss (const SimFrameAndDividerProps_DivThermHemisEmiss_optional& x);

        // SimFrameAndDividerProps_OutsdRevealSolarAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_OutsdRevealSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_OutsdRevealSolarAbsorp_type > SimFrameAndDividerProps_OutsdRevealSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_OutsdRevealSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_OutsdRevealSolarAbsorp_traits;

        const SimFrameAndDividerProps_OutsdRevealSolarAbsorp_optional&
        SimFrameAndDividerProps_OutsdRevealSolarAbsorp () const;

        SimFrameAndDividerProps_OutsdRevealSolarAbsorp_optional&
        SimFrameAndDividerProps_OutsdRevealSolarAbsorp ();

        void
        SimFrameAndDividerProps_OutsdRevealSolarAbsorp (const SimFrameAndDividerProps_OutsdRevealSolarAbsorp_type& x);

        void
        SimFrameAndDividerProps_OutsdRevealSolarAbsorp (const SimFrameAndDividerProps_OutsdRevealSolarAbsorp_optional& x);

        // SimFrameAndDividerProps_InsideSillDepth
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_InsideSillDepth_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_InsideSillDepth_type > SimFrameAndDividerProps_InsideSillDepth_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_InsideSillDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_InsideSillDepth_traits;

        const SimFrameAndDividerProps_InsideSillDepth_optional&
        SimFrameAndDividerProps_InsideSillDepth () const;

        SimFrameAndDividerProps_InsideSillDepth_optional&
        SimFrameAndDividerProps_InsideSillDepth ();

        void
        SimFrameAndDividerProps_InsideSillDepth (const SimFrameAndDividerProps_InsideSillDepth_type& x);

        void
        SimFrameAndDividerProps_InsideSillDepth (const SimFrameAndDividerProps_InsideSillDepth_optional& x);

        // SimFrameAndDividerProps_InsideSillSolarAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_InsideSillSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_InsideSillSolarAbsorp_type > SimFrameAndDividerProps_InsideSillSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_InsideSillSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_InsideSillSolarAbsorp_traits;

        const SimFrameAndDividerProps_InsideSillSolarAbsorp_optional&
        SimFrameAndDividerProps_InsideSillSolarAbsorp () const;

        SimFrameAndDividerProps_InsideSillSolarAbsorp_optional&
        SimFrameAndDividerProps_InsideSillSolarAbsorp ();

        void
        SimFrameAndDividerProps_InsideSillSolarAbsorp (const SimFrameAndDividerProps_InsideSillSolarAbsorp_type& x);

        void
        SimFrameAndDividerProps_InsideSillSolarAbsorp (const SimFrameAndDividerProps_InsideSillSolarAbsorp_optional& x);

        // SimFrameAndDividerProps_InsideRevealDepth
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_InsideRevealDepth_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_InsideRevealDepth_type > SimFrameAndDividerProps_InsideRevealDepth_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_InsideRevealDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_InsideRevealDepth_traits;

        const SimFrameAndDividerProps_InsideRevealDepth_optional&
        SimFrameAndDividerProps_InsideRevealDepth () const;

        SimFrameAndDividerProps_InsideRevealDepth_optional&
        SimFrameAndDividerProps_InsideRevealDepth ();

        void
        SimFrameAndDividerProps_InsideRevealDepth (const SimFrameAndDividerProps_InsideRevealDepth_type& x);

        void
        SimFrameAndDividerProps_InsideRevealDepth (const SimFrameAndDividerProps_InsideRevealDepth_optional& x);

        // SimFrameAndDividerProps_InsideRevealSolarAbsorp
        //
        typedef ::xml_schema::double_ SimFrameAndDividerProps_InsideRevealSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimFrameAndDividerProps_InsideRevealSolarAbsorp_type > SimFrameAndDividerProps_InsideRevealSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimFrameAndDividerProps_InsideRevealSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFrameAndDividerProps_InsideRevealSolarAbsorp_traits;

        const SimFrameAndDividerProps_InsideRevealSolarAbsorp_optional&
        SimFrameAndDividerProps_InsideRevealSolarAbsorp () const;

        SimFrameAndDividerProps_InsideRevealSolarAbsorp_optional&
        SimFrameAndDividerProps_InsideRevealSolarAbsorp ();

        void
        SimFrameAndDividerProps_InsideRevealSolarAbsorp (const SimFrameAndDividerProps_InsideRevealSolarAbsorp_type& x);

        void
        SimFrameAndDividerProps_InsideRevealSolarAbsorp (const SimFrameAndDividerProps_InsideRevealSolarAbsorp_optional& x);

        // Constructors.
        //
        SimFrameAndDividerProps ();

        SimFrameAndDividerProps (const RefId_type&);

        SimFrameAndDividerProps (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f = 0,
                                 ::xml_schema::container* c = 0);

        SimFrameAndDividerProps (const SimFrameAndDividerProps& x,
                                 ::xml_schema::flags f = 0,
                                 ::xml_schema::container* c = 0);

        virtual SimFrameAndDividerProps*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFrameAndDividerProps&
        operator= (const SimFrameAndDividerProps& x);

        virtual 
        ~SimFrameAndDividerProps ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFrameAndDividerProps_Name_optional SimFrameAndDividerProps_Name_;
        SimFrameAndDividerProps_FrmWidth_optional SimFrameAndDividerProps_FrmWidth_;
        SimFrameAndDividerProps_FrmOutsdProject_optional SimFrameAndDividerProps_FrmOutsdProject_;
        SimFrameAndDividerProps_FrmInsideProject_optional SimFrameAndDividerProps_FrmInsideProject_;
        SimFrameAndDividerProps_FrmCond_optional SimFrameAndDividerProps_FrmCond_;
        SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_optional SimFrameAndDividerProps_RatioFrmEdgeGlassCondToCntrGlassCond_;
        SimFrameAndDividerProps_FrmSolarAbsorp_optional SimFrameAndDividerProps_FrmSolarAbsorp_;
        SimFrameAndDividerProps_FrmVisibleAbsorp_optional SimFrameAndDividerProps_FrmVisibleAbsorp_;
        SimFrameAndDividerProps_FrmThermHemisEmiss_optional SimFrameAndDividerProps_FrmThermHemisEmiss_;
        SimFrameAndDividerProps_DivType_optional SimFrameAndDividerProps_DivType_;
        SimFrameAndDividerProps_DivWidth_optional SimFrameAndDividerProps_DivWidth_;
        SimFrameAndDividerProps_NumbHorzDivs_optional SimFrameAndDividerProps_NumbHorzDivs_;
        SimFrameAndDividerProps_NumbVertlDivs_optional SimFrameAndDividerProps_NumbVertlDivs_;
        SimFrameAndDividerProps_DivOutsdProject_optional SimFrameAndDividerProps_DivOutsdProject_;
        SimFrameAndDividerProps_DivInsideProject_optional SimFrameAndDividerProps_DivInsideProject_;
        SimFrameAndDividerProps_DivCond_optional SimFrameAndDividerProps_DivCond_;
        SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_optional SimFrameAndDividerProps_RatioDivEdgeGlassCondToCntrGlassCond_;
        SimFrameAndDividerProps_DivSolarAbsorp_optional SimFrameAndDividerProps_DivSolarAbsorp_;
        SimFrameAndDividerProps_DivVisibleAbsorp_optional SimFrameAndDividerProps_DivVisibleAbsorp_;
        SimFrameAndDividerProps_DivThermHemisEmiss_optional SimFrameAndDividerProps_DivThermHemisEmiss_;
        SimFrameAndDividerProps_OutsdRevealSolarAbsorp_optional SimFrameAndDividerProps_OutsdRevealSolarAbsorp_;
        SimFrameAndDividerProps_InsideSillDepth_optional SimFrameAndDividerProps_InsideSillDepth_;
        SimFrameAndDividerProps_InsideSillSolarAbsorp_optional SimFrameAndDividerProps_InsideSillSolarAbsorp_;
        SimFrameAndDividerProps_InsideRevealDepth_optional SimFrameAndDividerProps_InsideRevealDepth_;
        SimFrameAndDividerProps_InsideRevealSolarAbsorp_optional SimFrameAndDividerProps_InsideRevealSolarAbsorp_;
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

#endif // SIM_FRAME_AND_DIVIDER_PROPS_HXX