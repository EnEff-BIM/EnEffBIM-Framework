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

#ifndef SIM_WALL_TYPICAL_WALL_EXTERIOR_ABOVE_GRADE_DETAILED_HXX
#define SIM_WALL_TYPICAL_WALL_EXTERIOR_ABOVE_GRADE_DETAILED_HXX

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
      class SimWall_TypicalWall_ExteriorAboveGradeDetailed;
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

#include "simwall_typicalwall.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace SimModelCore
    {
      class doubleList;
    }
  }
}

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimWall_TypicalWall_ExteriorAboveGradeDetailed: public ::namespaces::Sim::BuildingModel::SimWall_TypicalWall
      {
        public:
        // SimWall_ConstructionName
        //
        typedef ::xml_schema::idref SimWall_ConstructionName_type;
        typedef ::xsd::cxx::tree::optional< SimWall_ConstructionName_type > SimWall_ConstructionName_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_ConstructionName_type, char > SimWall_ConstructionName_traits;

        const SimWall_ConstructionName_optional&
        SimWall_ConstructionName () const;

        SimWall_ConstructionName_optional&
        SimWall_ConstructionName ();

        void
        SimWall_ConstructionName (const SimWall_ConstructionName_type& x);

        void
        SimWall_ConstructionName (const SimWall_ConstructionName_optional& x);

        void
        SimWall_ConstructionName (::std::auto_ptr< SimWall_ConstructionName_type > p);

        // SimWall_ZoneName
        //
        typedef ::xml_schema::idref SimWall_ZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimWall_ZoneName_type > SimWall_ZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_ZoneName_type, char > SimWall_ZoneName_traits;

        const SimWall_ZoneName_optional&
        SimWall_ZoneName () const;

        SimWall_ZoneName_optional&
        SimWall_ZoneName ();

        void
        SimWall_ZoneName (const SimWall_ZoneName_type& x);

        void
        SimWall_ZoneName (const SimWall_ZoneName_optional& x);

        void
        SimWall_ZoneName (::std::auto_ptr< SimWall_ZoneName_type > p);

        // SimWall_OutsdBndCond
        //
        typedef ::xml_schema::string SimWall_OutsdBndCond_type;
        typedef ::xsd::cxx::tree::optional< SimWall_OutsdBndCond_type > SimWall_OutsdBndCond_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_OutsdBndCond_type, char > SimWall_OutsdBndCond_traits;

        const SimWall_OutsdBndCond_optional&
        SimWall_OutsdBndCond () const;

        SimWall_OutsdBndCond_optional&
        SimWall_OutsdBndCond ();

        void
        SimWall_OutsdBndCond (const SimWall_OutsdBndCond_type& x);

        void
        SimWall_OutsdBndCond (const SimWall_OutsdBndCond_optional& x);

        void
        SimWall_OutsdBndCond (::std::auto_ptr< SimWall_OutsdBndCond_type > p);

        // SimWall_OutsdBndCondObject
        //
        typedef ::xml_schema::idref SimWall_OutsdBndCondObject_type;
        typedef ::xsd::cxx::tree::optional< SimWall_OutsdBndCondObject_type > SimWall_OutsdBndCondObject_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_OutsdBndCondObject_type, char > SimWall_OutsdBndCondObject_traits;

        const SimWall_OutsdBndCondObject_optional&
        SimWall_OutsdBndCondObject () const;

        SimWall_OutsdBndCondObject_optional&
        SimWall_OutsdBndCondObject ();

        void
        SimWall_OutsdBndCondObject (const SimWall_OutsdBndCondObject_type& x);

        void
        SimWall_OutsdBndCondObject (const SimWall_OutsdBndCondObject_optional& x);

        void
        SimWall_OutsdBndCondObject (::std::auto_ptr< SimWall_OutsdBndCondObject_type > p);

        // SimWall_SunExposure
        //
        typedef ::xml_schema::string SimWall_SunExposure_type;
        typedef ::xsd::cxx::tree::optional< SimWall_SunExposure_type > SimWall_SunExposure_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_SunExposure_type, char > SimWall_SunExposure_traits;

        const SimWall_SunExposure_optional&
        SimWall_SunExposure () const;

        SimWall_SunExposure_optional&
        SimWall_SunExposure ();

        void
        SimWall_SunExposure (const SimWall_SunExposure_type& x);

        void
        SimWall_SunExposure (const SimWall_SunExposure_optional& x);

        void
        SimWall_SunExposure (::std::auto_ptr< SimWall_SunExposure_type > p);

        // SimWall_WindExposure
        //
        typedef ::xml_schema::string SimWall_WindExposure_type;
        typedef ::xsd::cxx::tree::optional< SimWall_WindExposure_type > SimWall_WindExposure_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_WindExposure_type, char > SimWall_WindExposure_traits;

        const SimWall_WindExposure_optional&
        SimWall_WindExposure () const;

        SimWall_WindExposure_optional&
        SimWall_WindExposure ();

        void
        SimWall_WindExposure (const SimWall_WindExposure_type& x);

        void
        SimWall_WindExposure (const SimWall_WindExposure_optional& x);

        void
        SimWall_WindExposure (::std::auto_ptr< SimWall_WindExposure_type > p);

        // SimWall_ViewFactToGnd
        //
        typedef ::xml_schema::double_ SimWall_ViewFactToGnd_type;
        typedef ::xsd::cxx::tree::optional< SimWall_ViewFactToGnd_type > SimWall_ViewFactToGnd_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_ViewFactToGnd_type, char, ::xsd::cxx::tree::schema_type::double_ > SimWall_ViewFactToGnd_traits;

        const SimWall_ViewFactToGnd_optional&
        SimWall_ViewFactToGnd () const;

        SimWall_ViewFactToGnd_optional&
        SimWall_ViewFactToGnd ();

        void
        SimWall_ViewFactToGnd (const SimWall_ViewFactToGnd_type& x);

        void
        SimWall_ViewFactToGnd (const SimWall_ViewFactToGnd_optional& x);

        // SimWall_NumbVerts
        //
        typedef ::xml_schema::double_ SimWall_NumbVerts_type;
        typedef ::xsd::cxx::tree::optional< SimWall_NumbVerts_type > SimWall_NumbVerts_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_NumbVerts_type, char, ::xsd::cxx::tree::schema_type::double_ > SimWall_NumbVerts_traits;

        const SimWall_NumbVerts_optional&
        SimWall_NumbVerts () const;

        SimWall_NumbVerts_optional&
        SimWall_NumbVerts ();

        void
        SimWall_NumbVerts (const SimWall_NumbVerts_type& x);

        void
        SimWall_NumbVerts (const SimWall_NumbVerts_optional& x);

        // SimWall_VertexXCoord_1_10
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimWall_VertexXCoord_1_10_type;
        typedef ::xsd::cxx::tree::optional< SimWall_VertexXCoord_1_10_type > SimWall_VertexXCoord_1_10_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_VertexXCoord_1_10_type, char > SimWall_VertexXCoord_1_10_traits;

        const SimWall_VertexXCoord_1_10_optional&
        SimWall_VertexXCoord_1_10 () const;

        SimWall_VertexXCoord_1_10_optional&
        SimWall_VertexXCoord_1_10 ();

        void
        SimWall_VertexXCoord_1_10 (const SimWall_VertexXCoord_1_10_type& x);

        void
        SimWall_VertexXCoord_1_10 (const SimWall_VertexXCoord_1_10_optional& x);

        void
        SimWall_VertexXCoord_1_10 (::std::auto_ptr< SimWall_VertexXCoord_1_10_type > p);

        // SimWall_VertexYCoord_1_10
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimWall_VertexYCoord_1_10_type;
        typedef ::xsd::cxx::tree::optional< SimWall_VertexYCoord_1_10_type > SimWall_VertexYCoord_1_10_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_VertexYCoord_1_10_type, char > SimWall_VertexYCoord_1_10_traits;

        const SimWall_VertexYCoord_1_10_optional&
        SimWall_VertexYCoord_1_10 () const;

        SimWall_VertexYCoord_1_10_optional&
        SimWall_VertexYCoord_1_10 ();

        void
        SimWall_VertexYCoord_1_10 (const SimWall_VertexYCoord_1_10_type& x);

        void
        SimWall_VertexYCoord_1_10 (const SimWall_VertexYCoord_1_10_optional& x);

        void
        SimWall_VertexYCoord_1_10 (::std::auto_ptr< SimWall_VertexYCoord_1_10_type > p);

        // SimWall_VertexZCoord_1_10
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimWall_VertexZCoord_1_10_type;
        typedef ::xsd::cxx::tree::optional< SimWall_VertexZCoord_1_10_type > SimWall_VertexZCoord_1_10_optional;
        typedef ::xsd::cxx::tree::traits< SimWall_VertexZCoord_1_10_type, char > SimWall_VertexZCoord_1_10_traits;

        const SimWall_VertexZCoord_1_10_optional&
        SimWall_VertexZCoord_1_10 () const;

        SimWall_VertexZCoord_1_10_optional&
        SimWall_VertexZCoord_1_10 ();

        void
        SimWall_VertexZCoord_1_10 (const SimWall_VertexZCoord_1_10_type& x);

        void
        SimWall_VertexZCoord_1_10 (const SimWall_VertexZCoord_1_10_optional& x);

        void
        SimWall_VertexZCoord_1_10 (::std::auto_ptr< SimWall_VertexZCoord_1_10_type > p);

        // SurfProp_HeatTransAlg_MultSurf_SurfType
        //
        typedef ::xml_schema::string SurfProp_HeatTransAlg_MultSurf_SurfType_type;
        typedef ::xsd::cxx::tree::optional< SurfProp_HeatTransAlg_MultSurf_SurfType_type > SurfProp_HeatTransAlg_MultSurf_SurfType_optional;
        typedef ::xsd::cxx::tree::traits< SurfProp_HeatTransAlg_MultSurf_SurfType_type, char > SurfProp_HeatTransAlg_MultSurf_SurfType_traits;

        const SurfProp_HeatTransAlg_MultSurf_SurfType_optional&
        SurfProp_HeatTransAlg_MultSurf_SurfType () const;

        SurfProp_HeatTransAlg_MultSurf_SurfType_optional&
        SurfProp_HeatTransAlg_MultSurf_SurfType ();

        void
        SurfProp_HeatTransAlg_MultSurf_SurfType (const SurfProp_HeatTransAlg_MultSurf_SurfType_type& x);

        void
        SurfProp_HeatTransAlg_MultSurf_SurfType (const SurfProp_HeatTransAlg_MultSurf_SurfType_optional& x);

        void
        SurfProp_HeatTransAlg_MultSurf_SurfType (::std::auto_ptr< SurfProp_HeatTransAlg_MultSurf_SurfType_type > p);

        // Constructors.
        //
        SimWall_TypicalWall_ExteriorAboveGradeDetailed (const RefId_type&);

        SimWall_TypicalWall_ExteriorAboveGradeDetailed (const ::xercesc::DOMElement& e,
                                                        ::xml_schema::flags f = 0,
                                                        ::xml_schema::container* c = 0);

        SimWall_TypicalWall_ExteriorAboveGradeDetailed (const SimWall_TypicalWall_ExteriorAboveGradeDetailed& x,
                                                        ::xml_schema::flags f = 0,
                                                        ::xml_schema::container* c = 0);

        virtual SimWall_TypicalWall_ExteriorAboveGradeDetailed*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimWall_TypicalWall_ExteriorAboveGradeDetailed&
        operator= (const SimWall_TypicalWall_ExteriorAboveGradeDetailed& x);

        virtual 
        ~SimWall_TypicalWall_ExteriorAboveGradeDetailed ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimWall_ConstructionName_optional SimWall_ConstructionName_;
        SimWall_ZoneName_optional SimWall_ZoneName_;
        SimWall_OutsdBndCond_optional SimWall_OutsdBndCond_;
        SimWall_OutsdBndCondObject_optional SimWall_OutsdBndCondObject_;
        SimWall_SunExposure_optional SimWall_SunExposure_;
        SimWall_WindExposure_optional SimWall_WindExposure_;
        SimWall_ViewFactToGnd_optional SimWall_ViewFactToGnd_;
        SimWall_NumbVerts_optional SimWall_NumbVerts_;
        SimWall_VertexXCoord_1_10_optional SimWall_VertexXCoord_1_10_;
        SimWall_VertexYCoord_1_10_optional SimWall_VertexYCoord_1_10_;
        SimWall_VertexZCoord_1_10_optional SimWall_VertexZCoord_1_10_;
        SurfProp_HeatTransAlg_MultSurf_SurfType_optional SurfProp_HeatTransAlg_MultSurf_SurfType_;
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

#endif // SIM_WALL_TYPICAL_WALL_EXTERIOR_ABOVE_GRADE_DETAILED_HXX