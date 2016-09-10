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

#ifndef SIM_MATERIAL_GLAZING_MATERIAL_COMPLEX_SHADE_HXX
#define SIM_MATERIAL_GLAZING_MATERIAL_COMPLEX_SHADE_HXX

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
      class SimMaterial_GlazingMaterial_ComplexShade;
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

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimMaterial_GlazingMaterial_ComplexShade: public ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial
      {
        public:
        // SimMaterial_Thick
        //
        typedef ::xml_schema::double_ SimMaterial_Thick_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_Thick_type > SimMaterial_Thick_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_Thick_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_Thick_traits;

        const SimMaterial_Thick_optional&
        SimMaterial_Thick () const;

        SimMaterial_Thick_optional&
        SimMaterial_Thick ();

        void
        SimMaterial_Thick (const SimMaterial_Thick_type& x);

        void
        SimMaterial_Thick (const SimMaterial_Thick_optional& x);

        // SimMaterial_Cond
        //
        typedef ::xml_schema::double_ SimMaterial_Cond_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_Cond_type > SimMaterial_Cond_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_Cond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_Cond_traits;

        const SimMaterial_Cond_optional&
        SimMaterial_Cond () const;

        SimMaterial_Cond_optional&
        SimMaterial_Cond ();

        void
        SimMaterial_Cond (const SimMaterial_Cond_type& x);

        void
        SimMaterial_Cond (const SimMaterial_Cond_optional& x);

        // SimMaterial_TopOpngMult
        //
        typedef ::xml_schema::double_ SimMaterial_TopOpngMult_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_TopOpngMult_type > SimMaterial_TopOpngMult_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_TopOpngMult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_TopOpngMult_traits;

        const SimMaterial_TopOpngMult_optional&
        SimMaterial_TopOpngMult () const;

        SimMaterial_TopOpngMult_optional&
        SimMaterial_TopOpngMult ();

        void
        SimMaterial_TopOpngMult (const SimMaterial_TopOpngMult_type& x);

        void
        SimMaterial_TopOpngMult (const SimMaterial_TopOpngMult_optional& x);

        // SimMaterial_BotOpngMult
        //
        typedef ::xml_schema::double_ SimMaterial_BotOpngMult_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BotOpngMult_type > SimMaterial_BotOpngMult_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BotOpngMult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BotOpngMult_traits;

        const SimMaterial_BotOpngMult_optional&
        SimMaterial_BotOpngMult () const;

        SimMaterial_BotOpngMult_optional&
        SimMaterial_BotOpngMult ();

        void
        SimMaterial_BotOpngMult (const SimMaterial_BotOpngMult_type& x);

        void
        SimMaterial_BotOpngMult (const SimMaterial_BotOpngMult_optional& x);

        // SimMaterial_LayerType
        //
        typedef ::xml_schema::string SimMaterial_LayerType_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_LayerType_type > SimMaterial_LayerType_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_LayerType_type, char > SimMaterial_LayerType_traits;

        const SimMaterial_LayerType_optional&
        SimMaterial_LayerType () const;

        SimMaterial_LayerType_optional&
        SimMaterial_LayerType ();

        void
        SimMaterial_LayerType (const SimMaterial_LayerType_type& x);

        void
        SimMaterial_LayerType (const SimMaterial_LayerType_optional& x);

        void
        SimMaterial_LayerType (::std::auto_ptr< SimMaterial_LayerType_type > p);

        // SimMaterial_IRTransmit
        //
        typedef ::xml_schema::double_ SimMaterial_IRTransmit_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_IRTransmit_type > SimMaterial_IRTransmit_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_IRTransmit_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_IRTransmit_traits;

        const SimMaterial_IRTransmit_optional&
        SimMaterial_IRTransmit () const;

        SimMaterial_IRTransmit_optional&
        SimMaterial_IRTransmit ();

        void
        SimMaterial_IRTransmit (const SimMaterial_IRTransmit_type& x);

        void
        SimMaterial_IRTransmit (const SimMaterial_IRTransmit_optional& x);

        // SimMaterial_FrontEmissivity
        //
        typedef ::xml_schema::double_ SimMaterial_FrontEmissivity_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontEmissivity_type > SimMaterial_FrontEmissivity_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontEmissivity_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontEmissivity_traits;

        const SimMaterial_FrontEmissivity_optional&
        SimMaterial_FrontEmissivity () const;

        SimMaterial_FrontEmissivity_optional&
        SimMaterial_FrontEmissivity ();

        void
        SimMaterial_FrontEmissivity (const SimMaterial_FrontEmissivity_type& x);

        void
        SimMaterial_FrontEmissivity (const SimMaterial_FrontEmissivity_optional& x);

        // SimMaterial_BackEmissivity
        //
        typedef ::xml_schema::double_ SimMaterial_BackEmissivity_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_BackEmissivity_type > SimMaterial_BackEmissivity_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_BackEmissivity_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_BackEmissivity_traits;

        const SimMaterial_BackEmissivity_optional&
        SimMaterial_BackEmissivity () const;

        SimMaterial_BackEmissivity_optional&
        SimMaterial_BackEmissivity ();

        void
        SimMaterial_BackEmissivity (const SimMaterial_BackEmissivity_type& x);

        void
        SimMaterial_BackEmissivity (const SimMaterial_BackEmissivity_optional& x);

        // SimMaterial_LeftSideOpngMult_1
        //
        typedef ::xml_schema::double_ SimMaterial_LeftSideOpngMult_1_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_LeftSideOpngMult_1_type > SimMaterial_LeftSideOpngMult_1_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_LeftSideOpngMult_1_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_LeftSideOpngMult_1_traits;

        const SimMaterial_LeftSideOpngMult_1_optional&
        SimMaterial_LeftSideOpngMult_1 () const;

        SimMaterial_LeftSideOpngMult_1_optional&
        SimMaterial_LeftSideOpngMult_1 ();

        void
        SimMaterial_LeftSideOpngMult_1 (const SimMaterial_LeftSideOpngMult_1_type& x);

        void
        SimMaterial_LeftSideOpngMult_1 (const SimMaterial_LeftSideOpngMult_1_optional& x);

        // SimMaterial_RightSideOpngMult_1
        //
        typedef ::xml_schema::double_ SimMaterial_RightSideOpngMult_1_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_RightSideOpngMult_1_type > SimMaterial_RightSideOpngMult_1_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_RightSideOpngMult_1_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_RightSideOpngMult_1_traits;

        const SimMaterial_RightSideOpngMult_1_optional&
        SimMaterial_RightSideOpngMult_1 () const;

        SimMaterial_RightSideOpngMult_1_optional&
        SimMaterial_RightSideOpngMult_1 ();

        void
        SimMaterial_RightSideOpngMult_1 (const SimMaterial_RightSideOpngMult_1_type& x);

        void
        SimMaterial_RightSideOpngMult_1 (const SimMaterial_RightSideOpngMult_1_optional& x);

        // SimMaterial_FrontOpeningMultiplier
        //
        typedef ::xml_schema::double_ SimMaterial_FrontOpeningMultiplier_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_FrontOpeningMultiplier_type > SimMaterial_FrontOpeningMultiplier_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_FrontOpeningMultiplier_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_FrontOpeningMultiplier_traits;

        const SimMaterial_FrontOpeningMultiplier_optional&
        SimMaterial_FrontOpeningMultiplier () const;

        SimMaterial_FrontOpeningMultiplier_optional&
        SimMaterial_FrontOpeningMultiplier ();

        void
        SimMaterial_FrontOpeningMultiplier (const SimMaterial_FrontOpeningMultiplier_type& x);

        void
        SimMaterial_FrontOpeningMultiplier (const SimMaterial_FrontOpeningMultiplier_optional& x);

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

        // SimMaterial_SlatSpacing
        //
        typedef ::xml_schema::double_ SimMaterial_SlatSpacing_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatSpacing_type > SimMaterial_SlatSpacing_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatSpacing_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatSpacing_traits;

        const SimMaterial_SlatSpacing_optional&
        SimMaterial_SlatSpacing () const;

        SimMaterial_SlatSpacing_optional&
        SimMaterial_SlatSpacing ();

        void
        SimMaterial_SlatSpacing (const SimMaterial_SlatSpacing_type& x);

        void
        SimMaterial_SlatSpacing (const SimMaterial_SlatSpacing_optional& x);

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

        // SimMaterial_SlatCurve
        //
        typedef ::xml_schema::double_ SimMaterial_SlatCurve_type;
        typedef ::xsd::cxx::tree::optional< SimMaterial_SlatCurve_type > SimMaterial_SlatCurve_optional;
        typedef ::xsd::cxx::tree::traits< SimMaterial_SlatCurve_type, char, ::xsd::cxx::tree::schema_type::double_ > SimMaterial_SlatCurve_traits;

        const SimMaterial_SlatCurve_optional&
        SimMaterial_SlatCurve () const;

        SimMaterial_SlatCurve_optional&
        SimMaterial_SlatCurve ();

        void
        SimMaterial_SlatCurve (const SimMaterial_SlatCurve_type& x);

        void
        SimMaterial_SlatCurve (const SimMaterial_SlatCurve_optional& x);

        // Constructors.
        //
        SimMaterial_GlazingMaterial_ComplexShade ();

        SimMaterial_GlazingMaterial_ComplexShade (const RefId_type&);

        SimMaterial_GlazingMaterial_ComplexShade (const ::xercesc::DOMElement& e,
                                                  ::xml_schema::flags f = 0,
                                                  ::xml_schema::container* c = 0);

        SimMaterial_GlazingMaterial_ComplexShade (const SimMaterial_GlazingMaterial_ComplexShade& x,
                                                  ::xml_schema::flags f = 0,
                                                  ::xml_schema::container* c = 0);

        virtual SimMaterial_GlazingMaterial_ComplexShade*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimMaterial_GlazingMaterial_ComplexShade&
        operator= (const SimMaterial_GlazingMaterial_ComplexShade& x);

        virtual 
        ~SimMaterial_GlazingMaterial_ComplexShade ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimMaterial_Thick_optional SimMaterial_Thick_;
        SimMaterial_Cond_optional SimMaterial_Cond_;
        SimMaterial_TopOpngMult_optional SimMaterial_TopOpngMult_;
        SimMaterial_BotOpngMult_optional SimMaterial_BotOpngMult_;
        SimMaterial_LayerType_optional SimMaterial_LayerType_;
        SimMaterial_IRTransmit_optional SimMaterial_IRTransmit_;
        SimMaterial_FrontEmissivity_optional SimMaterial_FrontEmissivity_;
        SimMaterial_BackEmissivity_optional SimMaterial_BackEmissivity_;
        SimMaterial_LeftSideOpngMult_1_optional SimMaterial_LeftSideOpngMult_1_;
        SimMaterial_RightSideOpngMult_1_optional SimMaterial_RightSideOpngMult_1_;
        SimMaterial_FrontOpeningMultiplier_optional SimMaterial_FrontOpeningMultiplier_;
        SimMaterial_SlatWidth_optional SimMaterial_SlatWidth_;
        SimMaterial_SlatSpacing_optional SimMaterial_SlatSpacing_;
        SimMaterial_SlatThick_optional SimMaterial_SlatThick_;
        SimMaterial_SlatAngle_optional SimMaterial_SlatAngle_;
        SimMaterial_SlatCond_optional SimMaterial_SlatCond_;
        SimMaterial_SlatCurve_optional SimMaterial_SlatCurve_;
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

#endif // SIM_MATERIAL_GLAZING_MATERIAL_COMPLEX_SHADE_HXX
