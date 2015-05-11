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

#ifndef SIM_MATERIAL_GLAZING_MATERIAL_BLIND_HXX
#define SIM_MATERIAL_GLAZING_MATERIAL_BLIND_HXX

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
      class SimMaterial_GlazingMaterial_Blind;
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

#include "simmaterial_glazingmaterial.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      class SimMaterial_GlazingMaterial_Blind: public ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial
      {
        public:
        // SimMaterial_SlatWidth
        //
        typedef ::xml_schema::double_ SimMaterial_SlatWidth_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatWidth_type > SimMaterial_SlatWidth_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatWidth_traits;

        const SimMaterial_SlatWidth_optional&
        SimMaterial_SlatWidth () const;

        SimMaterial_SlatWidth_optional&
        SimMaterial_SlatWidth ();

        void
        SimMaterial_SlatWidth (const SimMaterial_SlatWidth_type& x);

        void
        SimMaterial_SlatWidth (const SimMaterial_SlatWidth_optional& x);

        // SimMaterial_SlatThick
        //
        typedef ::xml_schema::double_ SimMaterial_SlatThick_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatThick_type > SimMaterial_SlatThick_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatThick_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatThick_traits;

        const SimMaterial_SlatThick_optional&
        SimMaterial_SlatThick () const;

        SimMaterial_SlatThick_optional&
        SimMaterial_SlatThick ();

        void
        SimMaterial_SlatThick (const SimMaterial_SlatThick_type& x);

        void
        SimMaterial_SlatThick (const SimMaterial_SlatThick_optional& x);

        // SimMaterial_SlatAngle
        //
        typedef ::xml_schema::double_ SimMaterial_SlatAngle_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatAngle_type > SimMaterial_SlatAngle_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatAngle_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatAngle_traits;

        const SimMaterial_SlatAngle_optional&
        SimMaterial_SlatAngle () const;

        SimMaterial_SlatAngle_optional&
        SimMaterial_SlatAngle ();

        void
        SimMaterial_SlatAngle (const SimMaterial_SlatAngle_type& x);

        void
        SimMaterial_SlatAngle (const SimMaterial_SlatAngle_optional& x);

        // SimMaterial_SlatCond
        //
        typedef ::xml_schema::double_ SimMaterial_SlatCond_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatCond_type > SimMaterial_SlatCond_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatCond_traits;

        const SimMaterial_SlatCond_optional&
        SimMaterial_SlatCond () const;

        SimMaterial_SlatCond_optional&
        SimMaterial_SlatCond ();

        void
        SimMaterial_SlatCond (const SimMaterial_SlatCond_type& x);

        void
        SimMaterial_SlatCond (const SimMaterial_SlatCond_optional& x);

        // SimMaterial_SlatOrientation
        //
        typedef ::xml_schema::string SimMaterial_SlatOrientation_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatOrientation_type > SimMaterial_SlatOrientation_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatOrientation_type, char > SimMaterial_SlatOrientation_traits;

        const SimMaterial_SlatOrientation_optional&
        SimMaterial_SlatOrientation () const;

        SimMaterial_SlatOrientation_optional&
        SimMaterial_SlatOrientation ();

        void
        SimMaterial_SlatOrientation (const SimMaterial_SlatOrientation_type& x);

        void
        SimMaterial_SlatOrientation (const SimMaterial_SlatOrientation_optional& x);

        void
        SimMaterial_SlatOrientation (::std::auto_ptr< SimMaterial_SlatOrientation_type > p);

        // SimMaterial_SlatSeparation
        //
        typedef ::xml_schema::double_ SimMaterial_SlatSeparation_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatSeparation_type > SimMaterial_SlatSeparation_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatSeparation_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatSeparation_traits;

        const SimMaterial_SlatSeparation_optional&
        SimMaterial_SlatSeparation () const;

        SimMaterial_SlatSeparation_optional&
        SimMaterial_SlatSeparation ();

        void
        SimMaterial_SlatSeparation (const SimMaterial_SlatSeparation_type& x);

        void
        SimMaterial_SlatSeparation (const SimMaterial_SlatSeparation_optional& x);

        // SimMaterial_SlatBeamSolarTrans
        //
        typedef ::xml_schema::double_ SimMaterial_SlatBeamSolarTrans_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatBeamSolarTrans_type > SimMaterial_SlatBeamSolarTrans_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatBeamSolarTrans_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatBeamSolarTrans_traits;

        const SimMaterial_SlatBeamSolarTrans_optional&
        SimMaterial_SlatBeamSolarTrans () const;

        SimMaterial_SlatBeamSolarTrans_optional&
        SimMaterial_SlatBeamSolarTrans ();

        void
        SimMaterial_SlatBeamSolarTrans (const SimMaterial_SlatBeamSolarTrans_type& x);

        void
        SimMaterial_SlatBeamSolarTrans (const SimMaterial_SlatBeamSolarTrans_optional& x);

        // SimMaterial_FrontSideSlatBeamSolarReflect
        //
        typedef ::xml_schema::double_ SimMaterial_FrontSideSlatBeamSolarReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontSideSlatBeamSolarReflect_type > SimMaterial_FrontSideSlatBeamSolarReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontSideSlatBeamSolarReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontSideSlatBeamSolarReflect_traits;

        const SimMaterial_FrontSideSlatBeamSolarReflect_optional&
        SimMaterial_FrontSideSlatBeamSolarReflect () const;

        SimMaterial_FrontSideSlatBeamSolarReflect_optional&
        SimMaterial_FrontSideSlatBeamSolarReflect ();

        void
        SimMaterial_FrontSideSlatBeamSolarReflect (const SimMaterial_FrontSideSlatBeamSolarReflect_type& x);

        void
        SimMaterial_FrontSideSlatBeamSolarReflect (const SimMaterial_FrontSideSlatBeamSolarReflect_optional& x);

        // SimMaterial_BackSideSlatBeamSolarReflect
        //
        typedef ::xml_schema::double_ SimMaterial_BackSideSlatBeamSolarReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BackSideSlatBeamSolarReflect_type > SimMaterial_BackSideSlatBeamSolarReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BackSideSlatBeamSolarReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BackSideSlatBeamSolarReflect_traits;

        const SimMaterial_BackSideSlatBeamSolarReflect_optional&
        SimMaterial_BackSideSlatBeamSolarReflect () const;

        SimMaterial_BackSideSlatBeamSolarReflect_optional&
        SimMaterial_BackSideSlatBeamSolarReflect ();

        void
        SimMaterial_BackSideSlatBeamSolarReflect (const SimMaterial_BackSideSlatBeamSolarReflect_type& x);

        void
        SimMaterial_BackSideSlatBeamSolarReflect (const SimMaterial_BackSideSlatBeamSolarReflect_optional& x);

        // SimMaterial_SlatDiffuseSolarTrans
        //
        typedef ::xml_schema::double_ SimMaterial_SlatDiffuseSolarTrans_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatDiffuseSolarTrans_type > SimMaterial_SlatDiffuseSolarTrans_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatDiffuseSolarTrans_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatDiffuseSolarTrans_traits;

        const SimMaterial_SlatDiffuseSolarTrans_optional&
        SimMaterial_SlatDiffuseSolarTrans () const;

        SimMaterial_SlatDiffuseSolarTrans_optional&
        SimMaterial_SlatDiffuseSolarTrans ();

        void
        SimMaterial_SlatDiffuseSolarTrans (const SimMaterial_SlatDiffuseSolarTrans_type& x);

        void
        SimMaterial_SlatDiffuseSolarTrans (const SimMaterial_SlatDiffuseSolarTrans_optional& x);

        // SimMaterial_FrontSideSlatDiffuseSolarReflect
        //
        typedef ::xml_schema::double_ SimMaterial_FrontSideSlatDiffuseSolarReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontSideSlatDiffuseSolarReflect_type > SimMaterial_FrontSideSlatDiffuseSolarReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontSideSlatDiffuseSolarReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontSideSlatDiffuseSolarReflect_traits;

        const SimMaterial_FrontSideSlatDiffuseSolarReflect_optional&
        SimMaterial_FrontSideSlatDiffuseSolarReflect () const;

        SimMaterial_FrontSideSlatDiffuseSolarReflect_optional&
        SimMaterial_FrontSideSlatDiffuseSolarReflect ();

        void
        SimMaterial_FrontSideSlatDiffuseSolarReflect (const SimMaterial_FrontSideSlatDiffuseSolarReflect_type& x);

        void
        SimMaterial_FrontSideSlatDiffuseSolarReflect (const SimMaterial_FrontSideSlatDiffuseSolarReflect_optional& x);

        // SimMaterial_BackSideSlatDiffuseSolarReflect
        //
        typedef ::xml_schema::double_ SimMaterial_BackSideSlatDiffuseSolarReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BackSideSlatDiffuseSolarReflect_type > SimMaterial_BackSideSlatDiffuseSolarReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BackSideSlatDiffuseSolarReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BackSideSlatDiffuseSolarReflect_traits;

        const SimMaterial_BackSideSlatDiffuseSolarReflect_optional&
        SimMaterial_BackSideSlatDiffuseSolarReflect () const;

        SimMaterial_BackSideSlatDiffuseSolarReflect_optional&
        SimMaterial_BackSideSlatDiffuseSolarReflect ();

        void
        SimMaterial_BackSideSlatDiffuseSolarReflect (const SimMaterial_BackSideSlatDiffuseSolarReflect_type& x);

        void
        SimMaterial_BackSideSlatDiffuseSolarReflect (const SimMaterial_BackSideSlatDiffuseSolarReflect_optional& x);

        // SimMaterial_SlatBeamVisTrans
        //
        typedef ::xml_schema::double_ SimMaterial_SlatBeamVisTrans_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatBeamVisTrans_type > SimMaterial_SlatBeamVisTrans_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatBeamVisTrans_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatBeamVisTrans_traits;

        const SimMaterial_SlatBeamVisTrans_optional&
        SimMaterial_SlatBeamVisTrans () const;

        SimMaterial_SlatBeamVisTrans_optional&
        SimMaterial_SlatBeamVisTrans ();

        void
        SimMaterial_SlatBeamVisTrans (const SimMaterial_SlatBeamVisTrans_type& x);

        void
        SimMaterial_SlatBeamVisTrans (const SimMaterial_SlatBeamVisTrans_optional& x);

        // SimMaterial_FrontSideSlatBeamVisReflect
        //
        typedef ::xml_schema::double_ SimMaterial_FrontSideSlatBeamVisReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontSideSlatBeamVisReflect_type > SimMaterial_FrontSideSlatBeamVisReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontSideSlatBeamVisReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontSideSlatBeamVisReflect_traits;

        const SimMaterial_FrontSideSlatBeamVisReflect_optional&
        SimMaterial_FrontSideSlatBeamVisReflect () const;

        SimMaterial_FrontSideSlatBeamVisReflect_optional&
        SimMaterial_FrontSideSlatBeamVisReflect ();

        void
        SimMaterial_FrontSideSlatBeamVisReflect (const SimMaterial_FrontSideSlatBeamVisReflect_type& x);

        void
        SimMaterial_FrontSideSlatBeamVisReflect (const SimMaterial_FrontSideSlatBeamVisReflect_optional& x);

        // SimMaterial_BackSideSlatBeamVisReflect
        //
        typedef ::xml_schema::double_ SimMaterial_BackSideSlatBeamVisReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BackSideSlatBeamVisReflect_type > SimMaterial_BackSideSlatBeamVisReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BackSideSlatBeamVisReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BackSideSlatBeamVisReflect_traits;

        const SimMaterial_BackSideSlatBeamVisReflect_optional&
        SimMaterial_BackSideSlatBeamVisReflect () const;

        SimMaterial_BackSideSlatBeamVisReflect_optional&
        SimMaterial_BackSideSlatBeamVisReflect ();

        void
        SimMaterial_BackSideSlatBeamVisReflect (const SimMaterial_BackSideSlatBeamVisReflect_type& x);

        void
        SimMaterial_BackSideSlatBeamVisReflect (const SimMaterial_BackSideSlatBeamVisReflect_optional& x);

        // SimMaterial_SlatDiffuseVisTrans
        //
        typedef ::xml_schema::double_ SimMaterial_SlatDiffuseVisTrans_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatDiffuseVisTrans_type > SimMaterial_SlatDiffuseVisTrans_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatDiffuseVisTrans_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatDiffuseVisTrans_traits;

        const SimMaterial_SlatDiffuseVisTrans_optional&
        SimMaterial_SlatDiffuseVisTrans () const;

        SimMaterial_SlatDiffuseVisTrans_optional&
        SimMaterial_SlatDiffuseVisTrans ();

        void
        SimMaterial_SlatDiffuseVisTrans (const SimMaterial_SlatDiffuseVisTrans_type& x);

        void
        SimMaterial_SlatDiffuseVisTrans (const SimMaterial_SlatDiffuseVisTrans_optional& x);

        // SimMaterial_FrontSideSlatDiffuseVisReflect
        //
        typedef ::xml_schema::double_ SimMaterial_FrontSideSlatDiffuseVisReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontSideSlatDiffuseVisReflect_type > SimMaterial_FrontSideSlatDiffuseVisReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontSideSlatDiffuseVisReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontSideSlatDiffuseVisReflect_traits;

        const SimMaterial_FrontSideSlatDiffuseVisReflect_optional&
        SimMaterial_FrontSideSlatDiffuseVisReflect () const;

        SimMaterial_FrontSideSlatDiffuseVisReflect_optional&
        SimMaterial_FrontSideSlatDiffuseVisReflect ();

        void
        SimMaterial_FrontSideSlatDiffuseVisReflect (const SimMaterial_FrontSideSlatDiffuseVisReflect_type& x);

        void
        SimMaterial_FrontSideSlatDiffuseVisReflect (const SimMaterial_FrontSideSlatDiffuseVisReflect_optional& x);

        // SimMaterial_BackSideSlatDiffuseVisReflect
        //
        typedef ::xml_schema::double_ SimMaterial_BackSideSlatDiffuseVisReflect_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BackSideSlatDiffuseVisReflect_type > SimMaterial_BackSideSlatDiffuseVisReflect_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BackSideSlatDiffuseVisReflect_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BackSideSlatDiffuseVisReflect_traits;

        const SimMaterial_BackSideSlatDiffuseVisReflect_optional&
        SimMaterial_BackSideSlatDiffuseVisReflect () const;

        SimMaterial_BackSideSlatDiffuseVisReflect_optional&
        SimMaterial_BackSideSlatDiffuseVisReflect ();

        void
        SimMaterial_BackSideSlatDiffuseVisReflect (const SimMaterial_BackSideSlatDiffuseVisReflect_type& x);

        void
        SimMaterial_BackSideSlatDiffuseVisReflect (const SimMaterial_BackSideSlatDiffuseVisReflect_optional& x);

        // SimMaterial_SlatInfraredHemisphTrans
        //
        typedef ::xml_schema::double_ SimMaterial_SlatInfraredHemisphTrans_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatInfraredHemisphTrans_type > SimMaterial_SlatInfraredHemisphTrans_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatInfraredHemisphTrans_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatInfraredHemisphTrans_traits;

        const SimMaterial_SlatInfraredHemisphTrans_optional&
        SimMaterial_SlatInfraredHemisphTrans () const;

        SimMaterial_SlatInfraredHemisphTrans_optional&
        SimMaterial_SlatInfraredHemisphTrans ();

        void
        SimMaterial_SlatInfraredHemisphTrans (const SimMaterial_SlatInfraredHemisphTrans_type& x);

        void
        SimMaterial_SlatInfraredHemisphTrans (const SimMaterial_SlatInfraredHemisphTrans_optional& x);

        // SimMaterial_FrontSideSlatInfraredHemisphEmis
        //
        typedef ::xml_schema::double_ SimMaterial_FrontSideSlatInfraredHemisphEmis_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontSideSlatInfraredHemisphEmis_type > SimMaterial_FrontSideSlatInfraredHemisphEmis_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontSideSlatInfraredHemisphEmis_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontSideSlatInfraredHemisphEmis_traits;

        const SimMaterial_FrontSideSlatInfraredHemisphEmis_optional&
        SimMaterial_FrontSideSlatInfraredHemisphEmis () const;

        SimMaterial_FrontSideSlatInfraredHemisphEmis_optional&
        SimMaterial_FrontSideSlatInfraredHemisphEmis ();

        void
        SimMaterial_FrontSideSlatInfraredHemisphEmis (const SimMaterial_FrontSideSlatInfraredHemisphEmis_type& x);

        void
        SimMaterial_FrontSideSlatInfraredHemisphEmis (const SimMaterial_FrontSideSlatInfraredHemisphEmis_optional& x);

        // SimMaterial_BackSideSlatInfraredHemisphEmis
        //
        typedef ::xml_schema::double_ SimMaterial_BackSideSlatInfraredHemisphEmis_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BackSideSlatInfraredHemisphEmis_type > SimMaterial_BackSideSlatInfraredHemisphEmis_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BackSideSlatInfraredHemisphEmis_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BackSideSlatInfraredHemisphEmis_traits;

        const SimMaterial_BackSideSlatInfraredHemisphEmis_optional&
        SimMaterial_BackSideSlatInfraredHemisphEmis () const;

        SimMaterial_BackSideSlatInfraredHemisphEmis_optional&
        SimMaterial_BackSideSlatInfraredHemisphEmis ();

        void
        SimMaterial_BackSideSlatInfraredHemisphEmis (const SimMaterial_BackSideSlatInfraredHemisphEmis_type& x);

        void
        SimMaterial_BackSideSlatInfraredHemisphEmis (const SimMaterial_BackSideSlatInfraredHemisphEmis_optional& x);

        // SimMaterial_BlindToGlassDist
        //
        typedef ::xml_schema::double_ SimMaterial_BlindToGlassDist_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BlindToGlassDist_type > SimMaterial_BlindToGlassDist_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BlindToGlassDist_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BlindToGlassDist_traits;

        const SimMaterial_BlindToGlassDist_optional&
        SimMaterial_BlindToGlassDist () const;

        SimMaterial_BlindToGlassDist_optional&
        SimMaterial_BlindToGlassDist ();

        void
        SimMaterial_BlindToGlassDist (const SimMaterial_BlindToGlassDist_type& x);

        void
        SimMaterial_BlindToGlassDist (const SimMaterial_BlindToGlassDist_optional& x);

        // SimMaterial_BlindTopOpngMult
        //
        typedef ::xml_schema::double_ SimMaterial_BlindTopOpngMult_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BlindTopOpngMult_type > SimMaterial_BlindTopOpngMult_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BlindTopOpngMult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BlindTopOpngMult_traits;

        const SimMaterial_BlindTopOpngMult_optional&
        SimMaterial_BlindTopOpngMult () const;

        SimMaterial_BlindTopOpngMult_optional&
        SimMaterial_BlindTopOpngMult ();

        void
        SimMaterial_BlindTopOpngMult (const SimMaterial_BlindTopOpngMult_type& x);

        void
        SimMaterial_BlindTopOpngMult (const SimMaterial_BlindTopOpngMult_optional& x);

        // SimMaterial_BlindBotOpngMult
        //
        typedef ::xml_schema::double_ SimMaterial_BlindBotOpngMult_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BlindBotOpngMult_type > SimMaterial_BlindBotOpngMult_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BlindBotOpngMult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BlindBotOpngMult_traits;

        const SimMaterial_BlindBotOpngMult_optional&
        SimMaterial_BlindBotOpngMult () const;

        SimMaterial_BlindBotOpngMult_optional&
        SimMaterial_BlindBotOpngMult ();

        void
        SimMaterial_BlindBotOpngMult (const SimMaterial_BlindBotOpngMult_type& x);

        void
        SimMaterial_BlindBotOpngMult (const SimMaterial_BlindBotOpngMult_optional& x);

        // SimMaterial_BlindLeftSideOpngMult
        //
        typedef ::xml_schema::double_ SimMaterial_BlindLeftSideOpngMult_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BlindLeftSideOpngMult_type > SimMaterial_BlindLeftSideOpngMult_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BlindLeftSideOpngMult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BlindLeftSideOpngMult_traits;

        const SimMaterial_BlindLeftSideOpngMult_optional&
        SimMaterial_BlindLeftSideOpngMult () const;

        SimMaterial_BlindLeftSideOpngMult_optional&
        SimMaterial_BlindLeftSideOpngMult ();

        void
        SimMaterial_BlindLeftSideOpngMult (const SimMaterial_BlindLeftSideOpngMult_type& x);

        void
        SimMaterial_BlindLeftSideOpngMult (const SimMaterial_BlindLeftSideOpngMult_optional& x);

        // SimMaterial_BlindRightSideOpngMult
        //
        typedef ::xml_schema::double_ SimMaterial_BlindRightSideOpngMult_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BlindRightSideOpngMult_type > SimMaterial_BlindRightSideOpngMult_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BlindRightSideOpngMult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BlindRightSideOpngMult_traits;

        const SimMaterial_BlindRightSideOpngMult_optional&
        SimMaterial_BlindRightSideOpngMult () const;

        SimMaterial_BlindRightSideOpngMult_optional&
        SimMaterial_BlindRightSideOpngMult ();

        void
        SimMaterial_BlindRightSideOpngMult (const SimMaterial_BlindRightSideOpngMult_type& x);

        void
        SimMaterial_BlindRightSideOpngMult (const SimMaterial_BlindRightSideOpngMult_optional& x);

        // SimMaterial_MinSlatAngle
        //
        typedef ::xml_schema::double_ SimMaterial_MinSlatAngle_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_MinSlatAngle_type > SimMaterial_MinSlatAngle_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_MinSlatAngle_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_MinSlatAngle_traits;

        const SimMaterial_MinSlatAngle_optional&
        SimMaterial_MinSlatAngle () const;

        SimMaterial_MinSlatAngle_optional&
        SimMaterial_MinSlatAngle ();

        void
        SimMaterial_MinSlatAngle (const SimMaterial_MinSlatAngle_type& x);

        void
        SimMaterial_MinSlatAngle (const SimMaterial_MinSlatAngle_optional& x);

        // SimMaterial_MaxSlatAngle
        //
        typedef ::xml_schema::double_ SimMaterial_MaxSlatAngle_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_MaxSlatAngle_type > SimMaterial_MaxSlatAngle_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_MaxSlatAngle_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_MaxSlatAngle_traits;

        const SimMaterial_MaxSlatAngle_optional&
        SimMaterial_MaxSlatAngle () const;

        SimMaterial_MaxSlatAngle_optional&
        SimMaterial_MaxSlatAngle ();

        void
        SimMaterial_MaxSlatAngle (const SimMaterial_MaxSlatAngle_type& x);

        void
        SimMaterial_MaxSlatAngle (const SimMaterial_MaxSlatAngle_optional& x);

        // Constructors.
        //
        SimMaterial_GlazingMaterial_Blind (const RefId_type&);

        SimMaterial_GlazingMaterial_Blind (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f = 0,
                                           ::xml_schema::container* c = 0);

        SimMaterial_GlazingMaterial_Blind (const SimMaterial_GlazingMaterial_Blind& x,
                                           ::xml_schema::flags f = 0,
                                           ::xml_schema::container* c = 0);

        virtual SimMaterial_GlazingMaterial_Blind*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimMaterial_GlazingMaterial_Blind&
        operator= (const SimMaterial_GlazingMaterial_Blind& x);

        virtual 
        ~SimMaterial_GlazingMaterial_Blind ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimMaterial_SlatWidth_optional SimMaterial_SlatWidth_;
        SimMaterial_SlatThick_optional SimMaterial_SlatThick_;
        SimMaterial_SlatAngle_optional SimMaterial_SlatAngle_;
        SimMaterial_SlatCond_optional SimMaterial_SlatCond_;
        SimMaterial_SlatOrientation_optional SimMaterial_SlatOrientation_;
        SimMaterial_SlatSeparation_optional SimMaterial_SlatSeparation_;
        SimMaterial_SlatBeamSolarTrans_optional SimMaterial_SlatBeamSolarTrans_;
        SimMaterial_FrontSideSlatBeamSolarReflect_optional SimMaterial_FrontSideSlatBeamSolarReflect_;
        SimMaterial_BackSideSlatBeamSolarReflect_optional SimMaterial_BackSideSlatBeamSolarReflect_;
        SimMaterial_SlatDiffuseSolarTrans_optional SimMaterial_SlatDiffuseSolarTrans_;
        SimMaterial_FrontSideSlatDiffuseSolarReflect_optional SimMaterial_FrontSideSlatDiffuseSolarReflect_;
        SimMaterial_BackSideSlatDiffuseSolarReflect_optional SimMaterial_BackSideSlatDiffuseSolarReflect_;
        SimMaterial_SlatBeamVisTrans_optional SimMaterial_SlatBeamVisTrans_;
        SimMaterial_FrontSideSlatBeamVisReflect_optional SimMaterial_FrontSideSlatBeamVisReflect_;
        SimMaterial_BackSideSlatBeamVisReflect_optional SimMaterial_BackSideSlatBeamVisReflect_;
        SimMaterial_SlatDiffuseVisTrans_optional SimMaterial_SlatDiffuseVisTrans_;
        SimMaterial_FrontSideSlatDiffuseVisReflect_optional SimMaterial_FrontSideSlatDiffuseVisReflect_;
        SimMaterial_BackSideSlatDiffuseVisReflect_optional SimMaterial_BackSideSlatDiffuseVisReflect_;
        SimMaterial_SlatInfraredHemisphTrans_optional SimMaterial_SlatInfraredHemisphTrans_;
        SimMaterial_FrontSideSlatInfraredHemisphEmis_optional SimMaterial_FrontSideSlatInfraredHemisphEmis_;
        SimMaterial_BackSideSlatInfraredHemisphEmis_optional SimMaterial_BackSideSlatInfraredHemisphEmis_;
        SimMaterial_BlindToGlassDist_optional SimMaterial_BlindToGlassDist_;
        SimMaterial_BlindTopOpngMult_optional SimMaterial_BlindTopOpngMult_;
        SimMaterial_BlindBotOpngMult_optional SimMaterial_BlindBotOpngMult_;
        SimMaterial_BlindLeftSideOpngMult_optional SimMaterial_BlindLeftSideOpngMult_;
        SimMaterial_BlindRightSideOpngMult_optional SimMaterial_BlindRightSideOpngMult_;
        SimMaterial_MinSlatAngle_optional SimMaterial_MinSlatAngle_;
        SimMaterial_MaxSlatAngle_optional SimMaterial_MaxSlatAngle_;
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

#endif // SIM_MATERIAL_GLAZING_MATERIAL_BLIND_HXX
