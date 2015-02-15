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

#ifndef SIM_DOOR_GLAZED_DOOR_FRAME_AND_DIVIDER_HXX
#define SIM_DOOR_GLAZED_DOOR_FRAME_AND_DIVIDER_HXX

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
    namespace BuildingModel
    {
      class SimDoor_GlazedDoor_FrameAndDivider;
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

#include "simdoor_glazeddoor.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimDoor_GlazedDoor_FrameAndDivider: public ::namespaces::Sim::BuildingModel::SimDoor_GlazedDoor
      {
        public:
        // SimDoor_FrmWidth
        //
        typedef ::xml_schema::double_ SimDoor_FrmWidth_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmWidth_type > SimDoor_FrmWidth_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmWidth_traits;

        const SimDoor_FrmWidth_optional&
        SimDoor_FrmWidth () const;

        SimDoor_FrmWidth_optional&
        SimDoor_FrmWidth ();

        void
        SimDoor_FrmWidth (const SimDoor_FrmWidth_type& x);

        void
        SimDoor_FrmWidth (const SimDoor_FrmWidth_optional& x);

        // SimDoor_FrmOutsdProject
        //
        typedef ::xml_schema::double_ SimDoor_FrmOutsdProject_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmOutsdProject_type > SimDoor_FrmOutsdProject_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmOutsdProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmOutsdProject_traits;

        const SimDoor_FrmOutsdProject_optional&
        SimDoor_FrmOutsdProject () const;

        SimDoor_FrmOutsdProject_optional&
        SimDoor_FrmOutsdProject ();

        void
        SimDoor_FrmOutsdProject (const SimDoor_FrmOutsdProject_type& x);

        void
        SimDoor_FrmOutsdProject (const SimDoor_FrmOutsdProject_optional& x);

        // SimDoor_FrmInsideProject
        //
        typedef ::xml_schema::double_ SimDoor_FrmInsideProject_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmInsideProject_type > SimDoor_FrmInsideProject_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmInsideProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmInsideProject_traits;

        const SimDoor_FrmInsideProject_optional&
        SimDoor_FrmInsideProject () const;

        SimDoor_FrmInsideProject_optional&
        SimDoor_FrmInsideProject ();

        void
        SimDoor_FrmInsideProject (const SimDoor_FrmInsideProject_type& x);

        void
        SimDoor_FrmInsideProject (const SimDoor_FrmInsideProject_optional& x);

        // SimDoor_FrmCond
        //
        typedef ::xml_schema::double_ SimDoor_FrmCond_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmCond_type > SimDoor_FrmCond_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmCond_traits;

        const SimDoor_FrmCond_optional&
        SimDoor_FrmCond () const;

        SimDoor_FrmCond_optional&
        SimDoor_FrmCond ();

        void
        SimDoor_FrmCond (const SimDoor_FrmCond_type& x);

        void
        SimDoor_FrmCond (const SimDoor_FrmCond_optional& x);

        // SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond
        //
        typedef ::xml_schema::double_ SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_type > SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_traits;

        const SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_optional&
        SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond () const;

        SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_optional&
        SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond ();

        void
        SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond (const SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_type& x);

        void
        SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond (const SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_optional& x);

        // SimDoor_FrmSolarAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_FrmSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmSolarAbsorp_type > SimDoor_FrmSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmSolarAbsorp_traits;

        const SimDoor_FrmSolarAbsorp_optional&
        SimDoor_FrmSolarAbsorp () const;

        SimDoor_FrmSolarAbsorp_optional&
        SimDoor_FrmSolarAbsorp ();

        void
        SimDoor_FrmSolarAbsorp (const SimDoor_FrmSolarAbsorp_type& x);

        void
        SimDoor_FrmSolarAbsorp (const SimDoor_FrmSolarAbsorp_optional& x);

        // SimDoor_FrmVisibleAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_FrmVisibleAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmVisibleAbsorp_type > SimDoor_FrmVisibleAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmVisibleAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmVisibleAbsorp_traits;

        const SimDoor_FrmVisibleAbsorp_optional&
        SimDoor_FrmVisibleAbsorp () const;

        SimDoor_FrmVisibleAbsorp_optional&
        SimDoor_FrmVisibleAbsorp ();

        void
        SimDoor_FrmVisibleAbsorp (const SimDoor_FrmVisibleAbsorp_type& x);

        void
        SimDoor_FrmVisibleAbsorp (const SimDoor_FrmVisibleAbsorp_optional& x);

        // SimDoor_FrmThermHemisEmiss
        //
        typedef ::xml_schema::double_ SimDoor_FrmThermHemisEmiss_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_FrmThermHemisEmiss_type > SimDoor_FrmThermHemisEmiss_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_FrmThermHemisEmiss_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_FrmThermHemisEmiss_traits;

        const SimDoor_FrmThermHemisEmiss_optional&
        SimDoor_FrmThermHemisEmiss () const;

        SimDoor_FrmThermHemisEmiss_optional&
        SimDoor_FrmThermHemisEmiss ();

        void
        SimDoor_FrmThermHemisEmiss (const SimDoor_FrmThermHemisEmiss_type& x);

        void
        SimDoor_FrmThermHemisEmiss (const SimDoor_FrmThermHemisEmiss_optional& x);

        // SimDoor_DivType
        //
        typedef ::xml_schema::string SimDoor_DivType_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivType_type > SimDoor_DivType_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivType_type, char > SimDoor_DivType_traits;

        const SimDoor_DivType_optional&
        SimDoor_DivType () const;

        SimDoor_DivType_optional&
        SimDoor_DivType ();

        void
        SimDoor_DivType (const SimDoor_DivType_type& x);

        void
        SimDoor_DivType (const SimDoor_DivType_optional& x);

        void
        SimDoor_DivType (::std::auto_ptr< SimDoor_DivType_type > p);

        // SimDoor_DivWidth
        //
        typedef ::xml_schema::double_ SimDoor_DivWidth_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivWidth_type > SimDoor_DivWidth_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivWidth_traits;

        const SimDoor_DivWidth_optional&
        SimDoor_DivWidth () const;

        SimDoor_DivWidth_optional&
        SimDoor_DivWidth ();

        void
        SimDoor_DivWidth (const SimDoor_DivWidth_type& x);

        void
        SimDoor_DivWidth (const SimDoor_DivWidth_optional& x);

        // SimDoor_NumbHorzDivs
        //
        typedef ::xml_schema::double_ SimDoor_NumbHorzDivs_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_NumbHorzDivs_type > SimDoor_NumbHorzDivs_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_NumbHorzDivs_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_NumbHorzDivs_traits;

        const SimDoor_NumbHorzDivs_optional&
        SimDoor_NumbHorzDivs () const;

        SimDoor_NumbHorzDivs_optional&
        SimDoor_NumbHorzDivs ();

        void
        SimDoor_NumbHorzDivs (const SimDoor_NumbHorzDivs_type& x);

        void
        SimDoor_NumbHorzDivs (const SimDoor_NumbHorzDivs_optional& x);

        // SimDoor_NumbVertlDivs
        //
        typedef ::xml_schema::double_ SimDoor_NumbVertlDivs_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_NumbVertlDivs_type > SimDoor_NumbVertlDivs_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_NumbVertlDivs_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_NumbVertlDivs_traits;

        const SimDoor_NumbVertlDivs_optional&
        SimDoor_NumbVertlDivs () const;

        SimDoor_NumbVertlDivs_optional&
        SimDoor_NumbVertlDivs ();

        void
        SimDoor_NumbVertlDivs (const SimDoor_NumbVertlDivs_type& x);

        void
        SimDoor_NumbVertlDivs (const SimDoor_NumbVertlDivs_optional& x);

        // SimDoor_DivOutsdProject
        //
        typedef ::xml_schema::double_ SimDoor_DivOutsdProject_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivOutsdProject_type > SimDoor_DivOutsdProject_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivOutsdProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivOutsdProject_traits;

        const SimDoor_DivOutsdProject_optional&
        SimDoor_DivOutsdProject () const;

        SimDoor_DivOutsdProject_optional&
        SimDoor_DivOutsdProject ();

        void
        SimDoor_DivOutsdProject (const SimDoor_DivOutsdProject_type& x);

        void
        SimDoor_DivOutsdProject (const SimDoor_DivOutsdProject_optional& x);

        // SimDoor_DivInsideProject
        //
        typedef ::xml_schema::double_ SimDoor_DivInsideProject_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivInsideProject_type > SimDoor_DivInsideProject_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivInsideProject_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivInsideProject_traits;

        const SimDoor_DivInsideProject_optional&
        SimDoor_DivInsideProject () const;

        SimDoor_DivInsideProject_optional&
        SimDoor_DivInsideProject ();

        void
        SimDoor_DivInsideProject (const SimDoor_DivInsideProject_type& x);

        void
        SimDoor_DivInsideProject (const SimDoor_DivInsideProject_optional& x);

        // SimDoor_DivCond
        //
        typedef ::xml_schema::double_ SimDoor_DivCond_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivCond_type > SimDoor_DivCond_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivCond_traits;

        const SimDoor_DivCond_optional&
        SimDoor_DivCond () const;

        SimDoor_DivCond_optional&
        SimDoor_DivCond ();

        void
        SimDoor_DivCond (const SimDoor_DivCond_type& x);

        void
        SimDoor_DivCond (const SimDoor_DivCond_optional& x);

        // SimDoor_RatioDivEdgeGlassCondToCntrGlassCond
        //
        typedef ::xml_schema::double_ SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_type > SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_traits;

        const SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_optional&
        SimDoor_RatioDivEdgeGlassCondToCntrGlassCond () const;

        SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_optional&
        SimDoor_RatioDivEdgeGlassCondToCntrGlassCond ();

        void
        SimDoor_RatioDivEdgeGlassCondToCntrGlassCond (const SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_type& x);

        void
        SimDoor_RatioDivEdgeGlassCondToCntrGlassCond (const SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_optional& x);

        // SimDoor_DivSolarAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_DivSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivSolarAbsorp_type > SimDoor_DivSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivSolarAbsorp_traits;

        const SimDoor_DivSolarAbsorp_optional&
        SimDoor_DivSolarAbsorp () const;

        SimDoor_DivSolarAbsorp_optional&
        SimDoor_DivSolarAbsorp ();

        void
        SimDoor_DivSolarAbsorp (const SimDoor_DivSolarAbsorp_type& x);

        void
        SimDoor_DivSolarAbsorp (const SimDoor_DivSolarAbsorp_optional& x);

        // SimDoor_DivVisibleAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_DivVisibleAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivVisibleAbsorp_type > SimDoor_DivVisibleAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivVisibleAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivVisibleAbsorp_traits;

        const SimDoor_DivVisibleAbsorp_optional&
        SimDoor_DivVisibleAbsorp () const;

        SimDoor_DivVisibleAbsorp_optional&
        SimDoor_DivVisibleAbsorp ();

        void
        SimDoor_DivVisibleAbsorp (const SimDoor_DivVisibleAbsorp_type& x);

        void
        SimDoor_DivVisibleAbsorp (const SimDoor_DivVisibleAbsorp_optional& x);

        // SimDoor_DivThermHemisEmiss
        //
        typedef ::xml_schema::double_ SimDoor_DivThermHemisEmiss_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_DivThermHemisEmiss_type > SimDoor_DivThermHemisEmiss_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_DivThermHemisEmiss_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_DivThermHemisEmiss_traits;

        const SimDoor_DivThermHemisEmiss_optional&
        SimDoor_DivThermHemisEmiss () const;

        SimDoor_DivThermHemisEmiss_optional&
        SimDoor_DivThermHemisEmiss ();

        void
        SimDoor_DivThermHemisEmiss (const SimDoor_DivThermHemisEmiss_type& x);

        void
        SimDoor_DivThermHemisEmiss (const SimDoor_DivThermHemisEmiss_optional& x);

        // SimDoor_OutsdRevealSolarAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_OutsdRevealSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_OutsdRevealSolarAbsorp_type > SimDoor_OutsdRevealSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_OutsdRevealSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_OutsdRevealSolarAbsorp_traits;

        const SimDoor_OutsdRevealSolarAbsorp_optional&
        SimDoor_OutsdRevealSolarAbsorp () const;

        SimDoor_OutsdRevealSolarAbsorp_optional&
        SimDoor_OutsdRevealSolarAbsorp ();

        void
        SimDoor_OutsdRevealSolarAbsorp (const SimDoor_OutsdRevealSolarAbsorp_type& x);

        void
        SimDoor_OutsdRevealSolarAbsorp (const SimDoor_OutsdRevealSolarAbsorp_optional& x);

        // SimDoor_InsideSillDepth
        //
        typedef ::xml_schema::double_ SimDoor_InsideSillDepth_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_InsideSillDepth_type > SimDoor_InsideSillDepth_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_InsideSillDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_InsideSillDepth_traits;

        const SimDoor_InsideSillDepth_optional&
        SimDoor_InsideSillDepth () const;

        SimDoor_InsideSillDepth_optional&
        SimDoor_InsideSillDepth ();

        void
        SimDoor_InsideSillDepth (const SimDoor_InsideSillDepth_type& x);

        void
        SimDoor_InsideSillDepth (const SimDoor_InsideSillDepth_optional& x);

        // SimDoor_InsideSillSolarAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_InsideSillSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_InsideSillSolarAbsorp_type > SimDoor_InsideSillSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_InsideSillSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_InsideSillSolarAbsorp_traits;

        const SimDoor_InsideSillSolarAbsorp_optional&
        SimDoor_InsideSillSolarAbsorp () const;

        SimDoor_InsideSillSolarAbsorp_optional&
        SimDoor_InsideSillSolarAbsorp ();

        void
        SimDoor_InsideSillSolarAbsorp (const SimDoor_InsideSillSolarAbsorp_type& x);

        void
        SimDoor_InsideSillSolarAbsorp (const SimDoor_InsideSillSolarAbsorp_optional& x);

        // SimDoor_InsideRevealDepth
        //
        typedef ::xml_schema::double_ SimDoor_InsideRevealDepth_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_InsideRevealDepth_type > SimDoor_InsideRevealDepth_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_InsideRevealDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_InsideRevealDepth_traits;

        const SimDoor_InsideRevealDepth_optional&
        SimDoor_InsideRevealDepth () const;

        SimDoor_InsideRevealDepth_optional&
        SimDoor_InsideRevealDepth ();

        void
        SimDoor_InsideRevealDepth (const SimDoor_InsideRevealDepth_type& x);

        void
        SimDoor_InsideRevealDepth (const SimDoor_InsideRevealDepth_optional& x);

        // SimDoor_InsideRevealSolarAbsorp
        //
        typedef ::xml_schema::double_ SimDoor_InsideRevealSolarAbsorp_type;
        typedef ::xsd::cxx::tree::optional< SimDoor_InsideRevealSolarAbsorp_type > SimDoor_InsideRevealSolarAbsorp_optional;
        typedef ::xsd::cxx::tree::traits< SimDoor_InsideRevealSolarAbsorp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDoor_InsideRevealSolarAbsorp_traits;

        const SimDoor_InsideRevealSolarAbsorp_optional&
        SimDoor_InsideRevealSolarAbsorp () const;

        SimDoor_InsideRevealSolarAbsorp_optional&
        SimDoor_InsideRevealSolarAbsorp ();

        void
        SimDoor_InsideRevealSolarAbsorp (const SimDoor_InsideRevealSolarAbsorp_type& x);

        void
        SimDoor_InsideRevealSolarAbsorp (const SimDoor_InsideRevealSolarAbsorp_optional& x);

        // Constructors.
        //
        SimDoor_GlazedDoor_FrameAndDivider (const RefId_type&);

        SimDoor_GlazedDoor_FrameAndDivider (const ::xercesc::DOMElement& e,
                                            ::xml_schema::flags f = 0,
                                            ::xml_schema::container* c = 0);

        SimDoor_GlazedDoor_FrameAndDivider (const SimDoor_GlazedDoor_FrameAndDivider& x,
                                            ::xml_schema::flags f = 0,
                                            ::xml_schema::container* c = 0);

        virtual SimDoor_GlazedDoor_FrameAndDivider*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimDoor_GlazedDoor_FrameAndDivider&
        operator= (const SimDoor_GlazedDoor_FrameAndDivider& x);

        virtual 
        ~SimDoor_GlazedDoor_FrameAndDivider ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimDoor_FrmWidth_optional SimDoor_FrmWidth_;
        SimDoor_FrmOutsdProject_optional SimDoor_FrmOutsdProject_;
        SimDoor_FrmInsideProject_optional SimDoor_FrmInsideProject_;
        SimDoor_FrmCond_optional SimDoor_FrmCond_;
        SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_optional SimDoor_RatioFrmEdgeGlassCondToCntrGlassCond_;
        SimDoor_FrmSolarAbsorp_optional SimDoor_FrmSolarAbsorp_;
        SimDoor_FrmVisibleAbsorp_optional SimDoor_FrmVisibleAbsorp_;
        SimDoor_FrmThermHemisEmiss_optional SimDoor_FrmThermHemisEmiss_;
        SimDoor_DivType_optional SimDoor_DivType_;
        SimDoor_DivWidth_optional SimDoor_DivWidth_;
        SimDoor_NumbHorzDivs_optional SimDoor_NumbHorzDivs_;
        SimDoor_NumbVertlDivs_optional SimDoor_NumbVertlDivs_;
        SimDoor_DivOutsdProject_optional SimDoor_DivOutsdProject_;
        SimDoor_DivInsideProject_optional SimDoor_DivInsideProject_;
        SimDoor_DivCond_optional SimDoor_DivCond_;
        SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_optional SimDoor_RatioDivEdgeGlassCondToCntrGlassCond_;
        SimDoor_DivSolarAbsorp_optional SimDoor_DivSolarAbsorp_;
        SimDoor_DivVisibleAbsorp_optional SimDoor_DivVisibleAbsorp_;
        SimDoor_DivThermHemisEmiss_optional SimDoor_DivThermHemisEmiss_;
        SimDoor_OutsdRevealSolarAbsorp_optional SimDoor_OutsdRevealSolarAbsorp_;
        SimDoor_InsideSillDepth_optional SimDoor_InsideSillDepth_;
        SimDoor_InsideSillSolarAbsorp_optional SimDoor_InsideSillSolarAbsorp_;
        SimDoor_InsideRevealDepth_optional SimDoor_InsideRevealDepth_;
        SimDoor_InsideRevealSolarAbsorp_optional SimDoor_InsideRevealSolarAbsorp_;
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

#endif // SIM_DOOR_GLAZED_DOOR_FRAME_AND_DIVIDER_HXX
