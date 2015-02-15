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

#ifndef SIM_FEATURE_ELEMENT_SUBTRACTION_VOID_HXX
#define SIM_FEATURE_ELEMENT_SUBTRACTION_VOID_HXX

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
      class SimFeatureElementSubtraction_Void;
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

#include "simfeatureelementsubtraction.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      class SimFeatureElementSubtraction_Void: public ::namespaces::Sim::ResourcesGeometry::SimFeatureElementSubtraction
      {
        public:
        // Name
        //
        typedef ::xml_schema::string Name_type;
        typedef ::xsd::cxx::tree::optional< Name_type > Name_optional;
        typedef ::xsd::cxx::tree::traits< Name_type, char > Name_traits;

        const Name_optional&
        Name () const;

        Name_optional&
        Name ();

        void
        Name (const Name_type& x);

        void
        Name (const Name_optional& x);

        void
        Name (::std::auto_ptr< Name_type > p);

        // ObjectType
        //
        typedef ::xml_schema::string ObjectType_type;
        typedef ::xsd::cxx::tree::optional< ObjectType_type > ObjectType_optional;
        typedef ::xsd::cxx::tree::traits< ObjectType_type, char > ObjectType_traits;

        const ObjectType_optional&
        ObjectType () const;

        ObjectType_optional&
        ObjectType ();

        void
        ObjectType (const ObjectType_type& x);

        void
        ObjectType (const ObjectType_optional& x);

        void
        ObjectType (::std::auto_ptr< ObjectType_type > p);

        // Representation
        //
        typedef ::xml_schema::idref Representation_type;
        typedef ::xsd::cxx::tree::optional< Representation_type > Representation_optional;
        typedef ::xsd::cxx::tree::traits< Representation_type, char > Representation_traits;

        const Representation_optional&
        Representation () const;

        Representation_optional&
        Representation ();

        void
        Representation (const Representation_type& x);

        void
        Representation (const Representation_optional& x);

        void
        Representation (::std::auto_ptr< Representation_type > p);

        // Tag
        //
        typedef ::xml_schema::string Tag_type;
        typedef ::xsd::cxx::tree::optional< Tag_type > Tag_optional;
        typedef ::xsd::cxx::tree::traits< Tag_type, char > Tag_traits;

        const Tag_optional&
        Tag () const;

        Tag_optional&
        Tag ();

        void
        Tag (const Tag_type& x);

        void
        Tag (const Tag_optional& x);

        void
        Tag (::std::auto_ptr< Tag_type > p);

        // IfcGlobalID
        //
        typedef ::xml_schema::string IfcGlobalID_type;
        typedef ::xsd::cxx::tree::optional< IfcGlobalID_type > IfcGlobalID_optional;
        typedef ::xsd::cxx::tree::traits< IfcGlobalID_type, char > IfcGlobalID_traits;

        const IfcGlobalID_optional&
        IfcGlobalID () const;

        IfcGlobalID_optional&
        IfcGlobalID ();

        void
        IfcGlobalID (const IfcGlobalID_type& x);

        void
        IfcGlobalID (const IfcGlobalID_optional& x);

        void
        IfcGlobalID (::std::auto_ptr< IfcGlobalID_type > p);

        // ObjectOwnerHistory
        //
        typedef ::xml_schema::idref ObjectOwnerHistory_type;
        typedef ::xsd::cxx::tree::optional< ObjectOwnerHistory_type > ObjectOwnerHistory_optional;
        typedef ::xsd::cxx::tree::traits< ObjectOwnerHistory_type, char > ObjectOwnerHistory_traits;

        const ObjectOwnerHistory_optional&
        ObjectOwnerHistory () const;

        ObjectOwnerHistory_optional&
        ObjectOwnerHistory ();

        void
        ObjectOwnerHistory (const ObjectOwnerHistory_type& x);

        void
        ObjectOwnerHistory (const ObjectOwnerHistory_optional& x);

        void
        ObjectOwnerHistory (::std::auto_ptr< ObjectOwnerHistory_type > p);

        // OpeningHeight
        //
        typedef ::xml_schema::double_ OpeningHeight_type;
        typedef ::xsd::cxx::tree::optional< OpeningHeight_type > OpeningHeight_optional;
        typedef ::xsd::cxx::tree::traits< OpeningHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > OpeningHeight_traits;

        const OpeningHeight_optional&
        OpeningHeight () const;

        OpeningHeight_optional&
        OpeningHeight ();

        void
        OpeningHeight (const OpeningHeight_type& x);

        void
        OpeningHeight (const OpeningHeight_optional& x);

        // OpeningWidth
        //
        typedef ::xml_schema::double_ OpeningWidth_type;
        typedef ::xsd::cxx::tree::optional< OpeningWidth_type > OpeningWidth_optional;
        typedef ::xsd::cxx::tree::traits< OpeningWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > OpeningWidth_traits;

        const OpeningWidth_optional&
        OpeningWidth () const;

        OpeningWidth_optional&
        OpeningWidth ();

        void
        OpeningWidth (const OpeningWidth_type& x);

        void
        OpeningWidth (const OpeningWidth_optional& x);

        // OpeningDepth
        //
        typedef ::xml_schema::double_ OpeningDepth_type;
        typedef ::xsd::cxx::tree::optional< OpeningDepth_type > OpeningDepth_optional;
        typedef ::xsd::cxx::tree::traits< OpeningDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > OpeningDepth_traits;

        const OpeningDepth_optional&
        OpeningDepth () const;

        OpeningDepth_optional&
        OpeningDepth ();

        void
        OpeningDepth (const OpeningDepth_type& x);

        void
        OpeningDepth (const OpeningDepth_optional& x);

        // OpeningPerimeter
        //
        typedef ::xml_schema::double_ OpeningPerimeter_type;
        typedef ::xsd::cxx::tree::optional< OpeningPerimeter_type > OpeningPerimeter_optional;
        typedef ::xsd::cxx::tree::traits< OpeningPerimeter_type, char, ::xsd::cxx::tree::schema_type::double_ > OpeningPerimeter_traits;

        const OpeningPerimeter_optional&
        OpeningPerimeter () const;

        OpeningPerimeter_optional&
        OpeningPerimeter ();

        void
        OpeningPerimeter (const OpeningPerimeter_type& x);

        void
        OpeningPerimeter (const OpeningPerimeter_optional& x);

        // OpeningArea
        //
        typedef ::xml_schema::double_ OpeningArea_type;
        typedef ::xsd::cxx::tree::optional< OpeningArea_type > OpeningArea_optional;
        typedef ::xsd::cxx::tree::traits< OpeningArea_type, char, ::xsd::cxx::tree::schema_type::double_ > OpeningArea_traits;

        const OpeningArea_optional&
        OpeningArea () const;

        OpeningArea_optional&
        OpeningArea ();

        void
        OpeningArea (const OpeningArea_type& x);

        void
        OpeningArea (const OpeningArea_optional& x);

        // OpeningVolume
        //
        typedef ::xml_schema::double_ OpeningVolume_type;
        typedef ::xsd::cxx::tree::optional< OpeningVolume_type > OpeningVolume_optional;
        typedef ::xsd::cxx::tree::traits< OpeningVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > OpeningVolume_traits;

        const OpeningVolume_optional&
        OpeningVolume () const;

        OpeningVolume_optional&
        OpeningVolume ();

        void
        OpeningVolume (const OpeningVolume_type& x);

        void
        OpeningVolume (const OpeningVolume_optional& x);

        // TypeDefinition
        //
        typedef ::xml_schema::idref TypeDefinition_type;
        typedef ::xsd::cxx::tree::optional< TypeDefinition_type > TypeDefinition_optional;
        typedef ::xsd::cxx::tree::traits< TypeDefinition_type, char > TypeDefinition_traits;

        const TypeDefinition_optional&
        TypeDefinition () const;

        TypeDefinition_optional&
        TypeDefinition ();

        void
        TypeDefinition (const TypeDefinition_type& x);

        void
        TypeDefinition (const TypeDefinition_optional& x);

        void
        TypeDefinition (::std::auto_ptr< TypeDefinition_type > p);

        // Placement
        //
        typedef ::xml_schema::idref Placement_type;
        typedef ::xsd::cxx::tree::optional< Placement_type > Placement_optional;
        typedef ::xsd::cxx::tree::traits< Placement_type, char > Placement_traits;

        const Placement_optional&
        Placement () const;

        Placement_optional&
        Placement ();

        void
        Placement (const Placement_type& x);

        void
        Placement (const Placement_optional& x);

        void
        Placement (::std::auto_ptr< Placement_type > p);

        // GeometricRepresentations
        //
        typedef ::xml_schema::idrefs GeometricRepresentations_type;
        typedef ::xsd::cxx::tree::optional< GeometricRepresentations_type > GeometricRepresentations_optional;
        typedef ::xsd::cxx::tree::traits< GeometricRepresentations_type, char > GeometricRepresentations_traits;

        const GeometricRepresentations_optional&
        GeometricRepresentations () const;

        GeometricRepresentations_optional&
        GeometricRepresentations ();

        void
        GeometricRepresentations (const GeometricRepresentations_type& x);

        void
        GeometricRepresentations (const GeometricRepresentations_optional& x);

        void
        GeometricRepresentations (::std::auto_ptr< GeometricRepresentations_type > p);

        // VoidedBldgElement
        //
        typedef ::xml_schema::idref VoidedBldgElement_type;
        typedef ::xsd::cxx::tree::optional< VoidedBldgElement_type > VoidedBldgElement_optional;
        typedef ::xsd::cxx::tree::traits< VoidedBldgElement_type, char > VoidedBldgElement_traits;

        const VoidedBldgElement_optional&
        VoidedBldgElement () const;

        VoidedBldgElement_optional&
        VoidedBldgElement ();

        void
        VoidedBldgElement (const VoidedBldgElement_type& x);

        void
        VoidedBldgElement (const VoidedBldgElement_optional& x);

        void
        VoidedBldgElement (::std::auto_ptr< VoidedBldgElement_type > p);

        // Constructors.
        //
        SimFeatureElementSubtraction_Void (const RefId_type&);

        SimFeatureElementSubtraction_Void (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f = 0,
                                           ::xml_schema::container* c = 0);

        SimFeatureElementSubtraction_Void (const SimFeatureElementSubtraction_Void& x,
                                           ::xml_schema::flags f = 0,
                                           ::xml_schema::container* c = 0);

        virtual SimFeatureElementSubtraction_Void*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFeatureElementSubtraction_Void&
        operator= (const SimFeatureElementSubtraction_Void& x);

        virtual 
        ~SimFeatureElementSubtraction_Void ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Name_optional Name_;
        ObjectType_optional ObjectType_;
        Representation_optional Representation_;
        Tag_optional Tag_;
        IfcGlobalID_optional IfcGlobalID_;
        ObjectOwnerHistory_optional ObjectOwnerHistory_;
        OpeningHeight_optional OpeningHeight_;
        OpeningWidth_optional OpeningWidth_;
        OpeningDepth_optional OpeningDepth_;
        OpeningPerimeter_optional OpeningPerimeter_;
        OpeningArea_optional OpeningArea_;
        OpeningVolume_optional OpeningVolume_;
        TypeDefinition_optional TypeDefinition_;
        Placement_optional Placement_;
        GeometricRepresentations_optional GeometricRepresentations_;
        VoidedBldgElement_optional VoidedBldgElement_;
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

#endif // SIM_FEATURE_ELEMENT_SUBTRACTION_VOID_HXX
