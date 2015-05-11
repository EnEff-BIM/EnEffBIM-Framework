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

#ifndef SIM_PERFORMANCE_CURVE_MATHEMATICAL_TRI_QUADRATIC_HXX
#define SIM_PERFORMANCE_CURVE_MATHEMATICAL_TRI_QUADRATIC_HXX

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
    namespace ResourcesGeometry
    {
      class SimPerformanceCurve_Mathematical_TriQuadratic;
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

#include "simperformancecurve_mathematical.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      class SimPerformanceCurve_Mathematical_TriQuadratic: public ::namespaces::Sim::ResourcesGeometry::SimPerformanceCurve_Mathematical
      {
        public:
        // SimPerfCurve_Coef1Constant
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef1Constant_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef1Constant_type > SimPerfCurve_Coef1Constant_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef1Constant_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef1Constant_traits;

        const SimPerfCurve_Coef1Constant_optional&
        SimPerfCurve_Coef1Constant () const;

        SimPerfCurve_Coef1Constant_optional&
        SimPerfCurve_Coef1Constant ();

        void
        SimPerfCurve_Coef1Constant (const SimPerfCurve_Coef1Constant_type& x);

        void
        SimPerfCurve_Coef1Constant (const SimPerfCurve_Coef1Constant_optional& x);

        // SimPerfCurve_MinValX
        //
        typedef ::xml_schema::double_ SimPerfCurve_MinValX_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_MinValX_type > SimPerfCurve_MinValX_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_MinValX_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_MinValX_traits;

        const SimPerfCurve_MinValX_optional&
        SimPerfCurve_MinValX () const;

        SimPerfCurve_MinValX_optional&
        SimPerfCurve_MinValX ();

        void
        SimPerfCurve_MinValX (const SimPerfCurve_MinValX_type& x);

        void
        SimPerfCurve_MinValX (const SimPerfCurve_MinValX_optional& x);

        // SimPerfCurve_MaxValX
        //
        typedef ::xml_schema::double_ SimPerfCurve_MaxValX_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_MaxValX_type > SimPerfCurve_MaxValX_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_MaxValX_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_MaxValX_traits;

        const SimPerfCurve_MaxValX_optional&
        SimPerfCurve_MaxValX () const;

        SimPerfCurve_MaxValX_optional&
        SimPerfCurve_MaxValX ();

        void
        SimPerfCurve_MaxValX (const SimPerfCurve_MaxValX_type& x);

        void
        SimPerfCurve_MaxValX (const SimPerfCurve_MaxValX_optional& x);

        // SimPerfCurve_InputUnitTypeForX
        //
        typedef ::xml_schema::string SimPerfCurve_InputUnitTypeForX_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_InputUnitTypeForX_type > SimPerfCurve_InputUnitTypeForX_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_InputUnitTypeForX_type, char > SimPerfCurve_InputUnitTypeForX_traits;

        const SimPerfCurve_InputUnitTypeForX_optional&
        SimPerfCurve_InputUnitTypeForX () const;

        SimPerfCurve_InputUnitTypeForX_optional&
        SimPerfCurve_InputUnitTypeForX ();

        void
        SimPerfCurve_InputUnitTypeForX (const SimPerfCurve_InputUnitTypeForX_type& x);

        void
        SimPerfCurve_InputUnitTypeForX (const SimPerfCurve_InputUnitTypeForX_optional& x);

        void
        SimPerfCurve_InputUnitTypeForX (::std::auto_ptr< SimPerfCurve_InputUnitTypeForX_type > p);

        // SimPerfCurve_OutputUnitType
        //
        typedef ::xml_schema::string SimPerfCurve_OutputUnitType_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_OutputUnitType_type > SimPerfCurve_OutputUnitType_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_OutputUnitType_type, char > SimPerfCurve_OutputUnitType_traits;

        const SimPerfCurve_OutputUnitType_optional&
        SimPerfCurve_OutputUnitType () const;

        SimPerfCurve_OutputUnitType_optional&
        SimPerfCurve_OutputUnitType ();

        void
        SimPerfCurve_OutputUnitType (const SimPerfCurve_OutputUnitType_type& x);

        void
        SimPerfCurve_OutputUnitType (const SimPerfCurve_OutputUnitType_optional& x);

        void
        SimPerfCurve_OutputUnitType (::std::auto_ptr< SimPerfCurve_OutputUnitType_type > p);

        // SimPerfCurve_Coef_3_X
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_3_X_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_3_X_type > SimPerfCurve_Coef_3_X_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_3_X_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_3_X_traits;

        const SimPerfCurve_Coef_3_X_optional&
        SimPerfCurve_Coef_3_X () const;

        SimPerfCurve_Coef_3_X_optional&
        SimPerfCurve_Coef_3_X ();

        void
        SimPerfCurve_Coef_3_X (const SimPerfCurve_Coef_3_X_type& x);

        void
        SimPerfCurve_Coef_3_X (const SimPerfCurve_Coef_3_X_optional& x);

        // SimPerfCurve_MinValY
        //
        typedef ::xml_schema::double_ SimPerfCurve_MinValY_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_MinValY_type > SimPerfCurve_MinValY_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_MinValY_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_MinValY_traits;

        const SimPerfCurve_MinValY_optional&
        SimPerfCurve_MinValY () const;

        SimPerfCurve_MinValY_optional&
        SimPerfCurve_MinValY ();

        void
        SimPerfCurve_MinValY (const SimPerfCurve_MinValY_type& x);

        void
        SimPerfCurve_MinValY (const SimPerfCurve_MinValY_optional& x);

        // SimPerfCurve_MaxValY
        //
        typedef ::xml_schema::double_ SimPerfCurve_MaxValY_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_MaxValY_type > SimPerfCurve_MaxValY_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_MaxValY_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_MaxValY_traits;

        const SimPerfCurve_MaxValY_optional&
        SimPerfCurve_MaxValY () const;

        SimPerfCurve_MaxValY_optional&
        SimPerfCurve_MaxValY ();

        void
        SimPerfCurve_MaxValY (const SimPerfCurve_MaxValY_type& x);

        void
        SimPerfCurve_MaxValY (const SimPerfCurve_MaxValY_optional& x);

        // SimPerfCurve_MinValZ
        //
        typedef ::xml_schema::double_ SimPerfCurve_MinValZ_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_MinValZ_type > SimPerfCurve_MinValZ_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_MinValZ_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_MinValZ_traits;

        const SimPerfCurve_MinValZ_optional&
        SimPerfCurve_MinValZ () const;

        SimPerfCurve_MinValZ_optional&
        SimPerfCurve_MinValZ ();

        void
        SimPerfCurve_MinValZ (const SimPerfCurve_MinValZ_type& x);

        void
        SimPerfCurve_MinValZ (const SimPerfCurve_MinValZ_optional& x);

        // SimPerfCurve_MaxValZ
        //
        typedef ::xml_schema::double_ SimPerfCurve_MaxValZ_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_MaxValZ_type > SimPerfCurve_MaxValZ_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_MaxValZ_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_MaxValZ_traits;

        const SimPerfCurve_MaxValZ_optional&
        SimPerfCurve_MaxValZ () const;

        SimPerfCurve_MaxValZ_optional&
        SimPerfCurve_MaxValZ ();

        void
        SimPerfCurve_MaxValZ (const SimPerfCurve_MaxValZ_type& x);

        void
        SimPerfCurve_MaxValZ (const SimPerfCurve_MaxValZ_optional& x);

        // SimPerfCurve_Coeff10_X_y_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff10_X_y_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff10_X_y_2_type > SimPerfCurve_Coeff10_X_y_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff10_X_y_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff10_X_y_2_traits;

        const SimPerfCurve_Coeff10_X_y_2_optional&
        SimPerfCurve_Coeff10_X_y_2 () const;

        SimPerfCurve_Coeff10_X_y_2_optional&
        SimPerfCurve_Coeff10_X_y_2 ();

        void
        SimPerfCurve_Coeff10_X_y_2 (const SimPerfCurve_Coeff10_X_y_2_type& x);

        void
        SimPerfCurve_Coeff10_X_y_2 (const SimPerfCurve_Coeff10_X_y_2_optional& x);

        // SimPerfCurve_Coef_2_X_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_2_X_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_2_X_2_type > SimPerfCurve_Coef_2_X_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_2_X_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_2_X_2_traits;

        const SimPerfCurve_Coef_2_X_2_optional&
        SimPerfCurve_Coef_2_X_2 () const;

        SimPerfCurve_Coef_2_X_2_optional&
        SimPerfCurve_Coef_2_X_2 ();

        void
        SimPerfCurve_Coef_2_X_2 (const SimPerfCurve_Coef_2_X_2_type& x);

        void
        SimPerfCurve_Coef_2_X_2 (const SimPerfCurve_Coef_2_X_2_optional& x);

        // SimPerfCurve_Coef_4_Y_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_4_Y_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_4_Y_2_type > SimPerfCurve_Coef_4_Y_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_4_Y_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_4_Y_2_traits;

        const SimPerfCurve_Coef_4_Y_2_optional&
        SimPerfCurve_Coef_4_Y_2 () const;

        SimPerfCurve_Coef_4_Y_2_optional&
        SimPerfCurve_Coef_4_Y_2 ();

        void
        SimPerfCurve_Coef_4_Y_2 (const SimPerfCurve_Coef_4_Y_2_type& x);

        void
        SimPerfCurve_Coef_4_Y_2 (const SimPerfCurve_Coef_4_Y_2_optional& x);

        // SimPerfCurve_Coeff5_Y
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff5_Y_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff5_Y_type > SimPerfCurve_Coeff5_Y_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff5_Y_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff5_Y_traits;

        const SimPerfCurve_Coeff5_Y_optional&
        SimPerfCurve_Coeff5_Y () const;

        SimPerfCurve_Coeff5_Y_optional&
        SimPerfCurve_Coeff5_Y ();

        void
        SimPerfCurve_Coeff5_Y (const SimPerfCurve_Coeff5_Y_type& x);

        void
        SimPerfCurve_Coeff5_Y (const SimPerfCurve_Coeff5_Y_optional& x);

        // SimPerfCurve_Coeff6_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff6_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff6_Z_2_type > SimPerfCurve_Coeff6_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff6_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff6_Z_2_traits;

        const SimPerfCurve_Coeff6_Z_2_optional&
        SimPerfCurve_Coeff6_Z_2 () const;

        SimPerfCurve_Coeff6_Z_2_optional&
        SimPerfCurve_Coeff6_Z_2 ();

        void
        SimPerfCurve_Coeff6_Z_2 (const SimPerfCurve_Coeff6_Z_2_type& x);

        void
        SimPerfCurve_Coeff6_Z_2 (const SimPerfCurve_Coeff6_Z_2_optional& x);

        // SimPerfCurve_Coeff7_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff7_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff7_Z_type > SimPerfCurve_Coeff7_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff7_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff7_Z_traits;

        const SimPerfCurve_Coeff7_Z_optional&
        SimPerfCurve_Coeff7_Z () const;

        SimPerfCurve_Coeff7_Z_optional&
        SimPerfCurve_Coeff7_Z ();

        void
        SimPerfCurve_Coeff7_Z (const SimPerfCurve_Coeff7_Z_type& x);

        void
        SimPerfCurve_Coeff7_Z (const SimPerfCurve_Coeff7_Z_optional& x);

        // SimPerfCurve_Coeff8_X_2_Y_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff8_X_2_Y_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff8_X_2_Y_2_type > SimPerfCurve_Coeff8_X_2_Y_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff8_X_2_Y_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff8_X_2_Y_2_traits;

        const SimPerfCurve_Coeff8_X_2_Y_2_optional&
        SimPerfCurve_Coeff8_X_2_Y_2 () const;

        SimPerfCurve_Coeff8_X_2_Y_2_optional&
        SimPerfCurve_Coeff8_X_2_Y_2 ();

        void
        SimPerfCurve_Coeff8_X_2_Y_2 (const SimPerfCurve_Coeff8_X_2_Y_2_type& x);

        void
        SimPerfCurve_Coeff8_X_2_Y_2 (const SimPerfCurve_Coeff8_X_2_Y_2_optional& x);

        // SimPerfCurve_Coeff9_X_y
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff9_X_y_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff9_X_y_type > SimPerfCurve_Coeff9_X_y_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff9_X_y_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff9_X_y_traits;

        const SimPerfCurve_Coeff9_X_y_optional&
        SimPerfCurve_Coeff9_X_y () const;

        SimPerfCurve_Coeff9_X_y_optional&
        SimPerfCurve_Coeff9_X_y ();

        void
        SimPerfCurve_Coeff9_X_y (const SimPerfCurve_Coeff9_X_y_type& x);

        void
        SimPerfCurve_Coeff9_X_y (const SimPerfCurve_Coeff9_X_y_optional& x);

        // SimPerfCurve_Coeff11_X_2_Y
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff11_X_2_Y_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff11_X_2_Y_type > SimPerfCurve_Coeff11_X_2_Y_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff11_X_2_Y_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff11_X_2_Y_traits;

        const SimPerfCurve_Coeff11_X_2_Y_optional&
        SimPerfCurve_Coeff11_X_2_Y () const;

        SimPerfCurve_Coeff11_X_2_Y_optional&
        SimPerfCurve_Coeff11_X_2_Y ();

        void
        SimPerfCurve_Coeff11_X_2_Y (const SimPerfCurve_Coeff11_X_2_Y_type& x);

        void
        SimPerfCurve_Coeff11_X_2_Y (const SimPerfCurve_Coeff11_X_2_Y_optional& x);

        // SimPerfCurve_Coeff_2_X_2_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff_2_X_2_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff_2_X_2_Z_2_type > SimPerfCurve_Coeff_2_X_2_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff_2_X_2_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff_2_X_2_Z_2_traits;

        const SimPerfCurve_Coeff_2_X_2_Z_2_optional&
        SimPerfCurve_Coeff_2_X_2_Z_2 () const;

        SimPerfCurve_Coeff_2_X_2_Z_2_optional&
        SimPerfCurve_Coeff_2_X_2_Z_2 ();

        void
        SimPerfCurve_Coeff_2_X_2_Z_2 (const SimPerfCurve_Coeff_2_X_2_Z_2_type& x);

        void
        SimPerfCurve_Coeff_2_X_2_Z_2 (const SimPerfCurve_Coeff_2_X_2_Z_2_optional& x);

        // SimPerfCurve_Coeff_3_X_z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff_3_X_z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff_3_X_z_type > SimPerfCurve_Coeff_3_X_z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff_3_X_z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff_3_X_z_traits;

        const SimPerfCurve_Coeff_3_X_z_optional&
        SimPerfCurve_Coeff_3_X_z () const;

        SimPerfCurve_Coeff_3_X_z_optional&
        SimPerfCurve_Coeff_3_X_z ();

        void
        SimPerfCurve_Coeff_3_X_z (const SimPerfCurve_Coeff_3_X_z_type& x);

        void
        SimPerfCurve_Coeff_3_X_z (const SimPerfCurve_Coeff_3_X_z_optional& x);

        // SimPerfCurve_Coeff_4_X_z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff_4_X_z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff_4_X_z_2_type > SimPerfCurve_Coeff_4_X_z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff_4_X_z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff_4_X_z_2_traits;

        const SimPerfCurve_Coeff_4_X_z_2_optional&
        SimPerfCurve_Coeff_4_X_z_2 () const;

        SimPerfCurve_Coeff_4_X_z_2_optional&
        SimPerfCurve_Coeff_4_X_z_2 ();

        void
        SimPerfCurve_Coeff_4_X_z_2 (const SimPerfCurve_Coeff_4_X_z_2_type& x);

        void
        SimPerfCurve_Coeff_4_X_z_2 (const SimPerfCurve_Coeff_4_X_z_2_optional& x);

        // SimPerfCurve_Coeff15_X_2_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff15_X_2_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff15_X_2_Z_type > SimPerfCurve_Coeff15_X_2_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff15_X_2_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff15_X_2_Z_traits;

        const SimPerfCurve_Coeff15_X_2_Z_optional&
        SimPerfCurve_Coeff15_X_2_Z () const;

        SimPerfCurve_Coeff15_X_2_Z_optional&
        SimPerfCurve_Coeff15_X_2_Z ();

        void
        SimPerfCurve_Coeff15_X_2_Z (const SimPerfCurve_Coeff15_X_2_Z_type& x);

        void
        SimPerfCurve_Coeff15_X_2_Z (const SimPerfCurve_Coeff15_X_2_Z_optional& x);

        // SimPerfCurve_Coeff16_Y_2_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff16_Y_2_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff16_Y_2_Z_2_type > SimPerfCurve_Coeff16_Y_2_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff16_Y_2_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff16_Y_2_Z_2_traits;

        const SimPerfCurve_Coeff16_Y_2_Z_2_optional&
        SimPerfCurve_Coeff16_Y_2_Z_2 () const;

        SimPerfCurve_Coeff16_Y_2_Z_2_optional&
        SimPerfCurve_Coeff16_Y_2_Z_2 ();

        void
        SimPerfCurve_Coeff16_Y_2_Z_2 (const SimPerfCurve_Coeff16_Y_2_Z_2_type& x);

        void
        SimPerfCurve_Coeff16_Y_2_Z_2 (const SimPerfCurve_Coeff16_Y_2_Z_2_optional& x);

        // SimPerfCurve_Coeff17_Y_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff17_Y_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff17_Y_Z_type > SimPerfCurve_Coeff17_Y_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff17_Y_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff17_Y_Z_traits;

        const SimPerfCurve_Coeff17_Y_Z_optional&
        SimPerfCurve_Coeff17_Y_Z () const;

        SimPerfCurve_Coeff17_Y_Z_optional&
        SimPerfCurve_Coeff17_Y_Z ();

        void
        SimPerfCurve_Coeff17_Y_Z (const SimPerfCurve_Coeff17_Y_Z_type& x);

        void
        SimPerfCurve_Coeff17_Y_Z (const SimPerfCurve_Coeff17_Y_Z_optional& x);

        // SimPerfCurve_Coeff18_Y_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff18_Y_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff18_Y_Z_2_type > SimPerfCurve_Coeff18_Y_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff18_Y_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff18_Y_Z_2_traits;

        const SimPerfCurve_Coeff18_Y_Z_2_optional&
        SimPerfCurve_Coeff18_Y_Z_2 () const;

        SimPerfCurve_Coeff18_Y_Z_2_optional&
        SimPerfCurve_Coeff18_Y_Z_2 ();

        void
        SimPerfCurve_Coeff18_Y_Z_2 (const SimPerfCurve_Coeff18_Y_Z_2_type& x);

        void
        SimPerfCurve_Coeff18_Y_Z_2 (const SimPerfCurve_Coeff18_Y_Z_2_optional& x);

        // SimPerfCurve_Coeff19_Y_2_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coeff19_Y_2_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coeff19_Y_2_Z_type > SimPerfCurve_Coeff19_Y_2_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coeff19_Y_2_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coeff19_Y_2_Z_traits;

        const SimPerfCurve_Coeff19_Y_2_Z_optional&
        SimPerfCurve_Coeff19_Y_2_Z () const;

        SimPerfCurve_Coeff19_Y_2_Z_optional&
        SimPerfCurve_Coeff19_Y_2_Z ();

        void
        SimPerfCurve_Coeff19_Y_2_Z (const SimPerfCurve_Coeff19_Y_2_Z_type& x);

        void
        SimPerfCurve_Coeff19_Y_2_Z (const SimPerfCurve_Coeff19_Y_2_Z_optional& x);

        // SimPerfCurve_Coef_20_X_2_Y_2_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_20_X_2_Y_2_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_20_X_2_Y_2_Z_2_type > SimPerfCurve_Coef_20_X_2_Y_2_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_20_X_2_Y_2_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_20_X_2_Y_2_Z_2_traits;

        const SimPerfCurve_Coef_20_X_2_Y_2_Z_2_optional&
        SimPerfCurve_Coef_20_X_2_Y_2_Z_2 () const;

        SimPerfCurve_Coef_20_X_2_Y_2_Z_2_optional&
        SimPerfCurve_Coef_20_X_2_Y_2_Z_2 ();

        void
        SimPerfCurve_Coef_20_X_2_Y_2_Z_2 (const SimPerfCurve_Coef_20_X_2_Y_2_Z_2_type& x);

        void
        SimPerfCurve_Coef_20_X_2_Y_2_Z_2 (const SimPerfCurve_Coef_20_X_2_Y_2_Z_2_optional& x);

        // SimPerfCurve_Coef_21_X_2_Y_2_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_21_X_2_Y_2_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_21_X_2_Y_2_Z_type > SimPerfCurve_Coef_21_X_2_Y_2_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_21_X_2_Y_2_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_21_X_2_Y_2_Z_traits;

        const SimPerfCurve_Coef_21_X_2_Y_2_Z_optional&
        SimPerfCurve_Coef_21_X_2_Y_2_Z () const;

        SimPerfCurve_Coef_21_X_2_Y_2_Z_optional&
        SimPerfCurve_Coef_21_X_2_Y_2_Z ();

        void
        SimPerfCurve_Coef_21_X_2_Y_2_Z (const SimPerfCurve_Coef_21_X_2_Y_2_Z_type& x);

        void
        SimPerfCurve_Coef_21_X_2_Y_2_Z (const SimPerfCurve_Coef_21_X_2_Y_2_Z_optional& x);

        // SimPerfCurve_Coef_22_X_2_Y_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_22_X_2_Y_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_22_X_2_Y_Z_2_type > SimPerfCurve_Coef_22_X_2_Y_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_22_X_2_Y_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_22_X_2_Y_Z_2_traits;

        const SimPerfCurve_Coef_22_X_2_Y_Z_2_optional&
        SimPerfCurve_Coef_22_X_2_Y_Z_2 () const;

        SimPerfCurve_Coef_22_X_2_Y_Z_2_optional&
        SimPerfCurve_Coef_22_X_2_Y_Z_2 ();

        void
        SimPerfCurve_Coef_22_X_2_Y_Z_2 (const SimPerfCurve_Coef_22_X_2_Y_Z_2_type& x);

        void
        SimPerfCurve_Coef_22_X_2_Y_Z_2 (const SimPerfCurve_Coef_22_X_2_Y_Z_2_optional& x);

        // SimPerfCurve_Coef_3_X_y_2_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_3_X_y_2_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_3_X_y_2_Z_2_type > SimPerfCurve_Coef_3_X_y_2_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_3_X_y_2_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_3_X_y_2_Z_2_traits;

        const SimPerfCurve_Coef_3_X_y_2_Z_2_optional&
        SimPerfCurve_Coef_3_X_y_2_Z_2 () const;

        SimPerfCurve_Coef_3_X_y_2_Z_2_optional&
        SimPerfCurve_Coef_3_X_y_2_Z_2 ();

        void
        SimPerfCurve_Coef_3_X_y_2_Z_2 (const SimPerfCurve_Coef_3_X_y_2_Z_2_type& x);

        void
        SimPerfCurve_Coef_3_X_y_2_Z_2 (const SimPerfCurve_Coef_3_X_y_2_Z_2_optional& x);

        // SimPerfCurve_Coef_4_X_2_Y_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_4_X_2_Y_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_4_X_2_Y_Z_type > SimPerfCurve_Coef_4_X_2_Y_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_4_X_2_Y_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_4_X_2_Y_Z_traits;

        const SimPerfCurve_Coef_4_X_2_Y_Z_optional&
        SimPerfCurve_Coef_4_X_2_Y_Z () const;

        SimPerfCurve_Coef_4_X_2_Y_Z_optional&
        SimPerfCurve_Coef_4_X_2_Y_Z ();

        void
        SimPerfCurve_Coef_4_X_2_Y_Z (const SimPerfCurve_Coef_4_X_2_Y_Z_type& x);

        void
        SimPerfCurve_Coef_4_X_2_Y_Z (const SimPerfCurve_Coef_4_X_2_Y_Z_optional& x);

        // SimPerfCurve_Coef_25_X_y_2_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_25_X_y_2_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_25_X_y_2_Z_type > SimPerfCurve_Coef_25_X_y_2_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_25_X_y_2_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_25_X_y_2_Z_traits;

        const SimPerfCurve_Coef_25_X_y_2_Z_optional&
        SimPerfCurve_Coef_25_X_y_2_Z () const;

        SimPerfCurve_Coef_25_X_y_2_Z_optional&
        SimPerfCurve_Coef_25_X_y_2_Z ();

        void
        SimPerfCurve_Coef_25_X_y_2_Z (const SimPerfCurve_Coef_25_X_y_2_Z_type& x);

        void
        SimPerfCurve_Coef_25_X_y_2_Z (const SimPerfCurve_Coef_25_X_y_2_Z_optional& x);

        // SimPerfCurve_Coef_26_X_Y_Z_2
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_26_X_Y_Z_2_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_26_X_Y_Z_2_type > SimPerfCurve_Coef_26_X_Y_Z_2_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_26_X_Y_Z_2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_26_X_Y_Z_2_traits;

        const SimPerfCurve_Coef_26_X_Y_Z_2_optional&
        SimPerfCurve_Coef_26_X_Y_Z_2 () const;

        SimPerfCurve_Coef_26_X_Y_Z_2_optional&
        SimPerfCurve_Coef_26_X_Y_Z_2 ();

        void
        SimPerfCurve_Coef_26_X_Y_Z_2 (const SimPerfCurve_Coef_26_X_Y_Z_2_type& x);

        void
        SimPerfCurve_Coef_26_X_Y_Z_2 (const SimPerfCurve_Coef_26_X_Y_Z_2_optional& x);

        // SimPerfCurve_Coef_27_X_Y_Z
        //
        typedef ::xml_schema::double_ SimPerfCurve_Coef_27_X_Y_Z_type;
        typedef ::xsd::cxx::tree::optional< SimPerfCurve_Coef_27_X_Y_Z_type > SimPerfCurve_Coef_27_X_Y_Z_optional;
        typedef ::xsd::cxx::tree::traits< SimPerfCurve_Coef_27_X_Y_Z_type, char, ::xsd::cxx::tree::schema_type::double_ > SimPerfCurve_Coef_27_X_Y_Z_traits;

        const SimPerfCurve_Coef_27_X_Y_Z_optional&
        SimPerfCurve_Coef_27_X_Y_Z () const;

        SimPerfCurve_Coef_27_X_Y_Z_optional&
        SimPerfCurve_Coef_27_X_Y_Z ();

        void
        SimPerfCurve_Coef_27_X_Y_Z (const SimPerfCurve_Coef_27_X_Y_Z_type& x);

        void
        SimPerfCurve_Coef_27_X_Y_Z (const SimPerfCurve_Coef_27_X_Y_Z_optional& x);

        // Constructors.
        //
        SimPerformanceCurve_Mathematical_TriQuadratic (const RefId_type&);

        SimPerformanceCurve_Mathematical_TriQuadratic (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f = 0,
                                                       ::xml_schema::container* c = 0);

        SimPerformanceCurve_Mathematical_TriQuadratic (const SimPerformanceCurve_Mathematical_TriQuadratic& x,
                                                       ::xml_schema::flags f = 0,
                                                       ::xml_schema::container* c = 0);

        virtual SimPerformanceCurve_Mathematical_TriQuadratic*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimPerformanceCurve_Mathematical_TriQuadratic&
        operator= (const SimPerformanceCurve_Mathematical_TriQuadratic& x);

        virtual 
        ~SimPerformanceCurve_Mathematical_TriQuadratic ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimPerfCurve_Coef1Constant_optional SimPerfCurve_Coef1Constant_;
        SimPerfCurve_MinValX_optional SimPerfCurve_MinValX_;
        SimPerfCurve_MaxValX_optional SimPerfCurve_MaxValX_;
        SimPerfCurve_InputUnitTypeForX_optional SimPerfCurve_InputUnitTypeForX_;
        SimPerfCurve_OutputUnitType_optional SimPerfCurve_OutputUnitType_;
        SimPerfCurve_Coef_3_X_optional SimPerfCurve_Coef_3_X_;
        SimPerfCurve_MinValY_optional SimPerfCurve_MinValY_;
        SimPerfCurve_MaxValY_optional SimPerfCurve_MaxValY_;
        SimPerfCurve_MinValZ_optional SimPerfCurve_MinValZ_;
        SimPerfCurve_MaxValZ_optional SimPerfCurve_MaxValZ_;
        SimPerfCurve_Coeff10_X_y_2_optional SimPerfCurve_Coeff10_X_y_2_;
        SimPerfCurve_Coef_2_X_2_optional SimPerfCurve_Coef_2_X_2_;
        SimPerfCurve_Coef_4_Y_2_optional SimPerfCurve_Coef_4_Y_2_;
        SimPerfCurve_Coeff5_Y_optional SimPerfCurve_Coeff5_Y_;
        SimPerfCurve_Coeff6_Z_2_optional SimPerfCurve_Coeff6_Z_2_;
        SimPerfCurve_Coeff7_Z_optional SimPerfCurve_Coeff7_Z_;
        SimPerfCurve_Coeff8_X_2_Y_2_optional SimPerfCurve_Coeff8_X_2_Y_2_;
        SimPerfCurve_Coeff9_X_y_optional SimPerfCurve_Coeff9_X_y_;
        SimPerfCurve_Coeff11_X_2_Y_optional SimPerfCurve_Coeff11_X_2_Y_;
        SimPerfCurve_Coeff_2_X_2_Z_2_optional SimPerfCurve_Coeff_2_X_2_Z_2_;
        SimPerfCurve_Coeff_3_X_z_optional SimPerfCurve_Coeff_3_X_z_;
        SimPerfCurve_Coeff_4_X_z_2_optional SimPerfCurve_Coeff_4_X_z_2_;
        SimPerfCurve_Coeff15_X_2_Z_optional SimPerfCurve_Coeff15_X_2_Z_;
        SimPerfCurve_Coeff16_Y_2_Z_2_optional SimPerfCurve_Coeff16_Y_2_Z_2_;
        SimPerfCurve_Coeff17_Y_Z_optional SimPerfCurve_Coeff17_Y_Z_;
        SimPerfCurve_Coeff18_Y_Z_2_optional SimPerfCurve_Coeff18_Y_Z_2_;
        SimPerfCurve_Coeff19_Y_2_Z_optional SimPerfCurve_Coeff19_Y_2_Z_;
        SimPerfCurve_Coef_20_X_2_Y_2_Z_2_optional SimPerfCurve_Coef_20_X_2_Y_2_Z_2_;
        SimPerfCurve_Coef_21_X_2_Y_2_Z_optional SimPerfCurve_Coef_21_X_2_Y_2_Z_;
        SimPerfCurve_Coef_22_X_2_Y_Z_2_optional SimPerfCurve_Coef_22_X_2_Y_Z_2_;
        SimPerfCurve_Coef_3_X_y_2_Z_2_optional SimPerfCurve_Coef_3_X_y_2_Z_2_;
        SimPerfCurve_Coef_4_X_2_Y_Z_optional SimPerfCurve_Coef_4_X_2_Y_Z_;
        SimPerfCurve_Coef_25_X_y_2_Z_optional SimPerfCurve_Coef_25_X_y_2_Z_;
        SimPerfCurve_Coef_26_X_Y_Z_2_optional SimPerfCurve_Coef_26_X_Y_Z_2_;
        SimPerfCurve_Coef_27_X_Y_Z_optional SimPerfCurve_Coef_27_X_Y_Z_;
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

#endif // SIM_PERFORMANCE_CURVE_MATHEMATICAL_TRI_QUADRATIC_HXX
