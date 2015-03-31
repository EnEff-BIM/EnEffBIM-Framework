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

#ifndef SIM_DAYLIGHTING_ASSEMBLY_DAYLIGHTING_ASSEMBLY_LIGHT_TUBE_HXX
#define SIM_DAYLIGHTING_ASSEMBLY_DAYLIGHTING_ASSEMBLY_LIGHT_TUBE_HXX

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
      class SimDaylightingAssembly_DaylightingAssembly_LightTube;
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

#include "simdaylightingassembly_daylightingassembly.hxx"

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
      class SimDaylightingAssembly_DaylightingAssembly_LightTube: public ::namespaces::Sim::BuildingModel::SimDaylightingAssembly_DaylightingAssembly
      {
        public:
        // SimDaylightingAssembly_ConstructionName
        //
        typedef ::xml_schema::idref SimDaylightingAssembly_ConstructionName_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_ConstructionName_type > SimDaylightingAssembly_ConstructionName_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_ConstructionName_type, char > SimDaylightingAssembly_ConstructionName_traits;

        const SimDaylightingAssembly_ConstructionName_optional&
        SimDaylightingAssembly_ConstructionName () const;

        SimDaylightingAssembly_ConstructionName_optional&
        SimDaylightingAssembly_ConstructionName ();

        void
        SimDaylightingAssembly_ConstructionName (const SimDaylightingAssembly_ConstructionName_type& x);

        void
        SimDaylightingAssembly_ConstructionName (const SimDaylightingAssembly_ConstructionName_optional& x);

        void
        SimDaylightingAssembly_ConstructionName (::std::auto_ptr< SimDaylightingAssembly_ConstructionName_type > p);

        // SimDaylightingAssembly_DomeName
        //
        typedef ::xml_schema::idref SimDaylightingAssembly_DomeName_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_DomeName_type > SimDaylightingAssembly_DomeName_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_DomeName_type, char > SimDaylightingAssembly_DomeName_traits;

        const SimDaylightingAssembly_DomeName_optional&
        SimDaylightingAssembly_DomeName () const;

        SimDaylightingAssembly_DomeName_optional&
        SimDaylightingAssembly_DomeName ();

        void
        SimDaylightingAssembly_DomeName (const SimDaylightingAssembly_DomeName_type& x);

        void
        SimDaylightingAssembly_DomeName (const SimDaylightingAssembly_DomeName_optional& x);

        void
        SimDaylightingAssembly_DomeName (::std::auto_ptr< SimDaylightingAssembly_DomeName_type > p);

        // SimDaylightingAssembly_DiffuserName
        //
        typedef ::xml_schema::idref SimDaylightingAssembly_DiffuserName_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_DiffuserName_type > SimDaylightingAssembly_DiffuserName_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_DiffuserName_type, char > SimDaylightingAssembly_DiffuserName_traits;

        const SimDaylightingAssembly_DiffuserName_optional&
        SimDaylightingAssembly_DiffuserName () const;

        SimDaylightingAssembly_DiffuserName_optional&
        SimDaylightingAssembly_DiffuserName ();

        void
        SimDaylightingAssembly_DiffuserName (const SimDaylightingAssembly_DiffuserName_type& x);

        void
        SimDaylightingAssembly_DiffuserName (const SimDaylightingAssembly_DiffuserName_optional& x);

        void
        SimDaylightingAssembly_DiffuserName (::std::auto_ptr< SimDaylightingAssembly_DiffuserName_type > p);

        // SimDaylightingAssembly_Diam
        //
        typedef ::xml_schema::double_ SimDaylightingAssembly_Diam_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_Diam_type > SimDaylightingAssembly_Diam_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_Diam_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDaylightingAssembly_Diam_traits;

        const SimDaylightingAssembly_Diam_optional&
        SimDaylightingAssembly_Diam () const;

        SimDaylightingAssembly_Diam_optional&
        SimDaylightingAssembly_Diam ();

        void
        SimDaylightingAssembly_Diam (const SimDaylightingAssembly_Diam_type& x);

        void
        SimDaylightingAssembly_Diam (const SimDaylightingAssembly_Diam_optional& x);

        // SimDaylightingAssembly_TotalLength
        //
        typedef ::xml_schema::double_ SimDaylightingAssembly_TotalLength_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_TotalLength_type > SimDaylightingAssembly_TotalLength_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_TotalLength_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDaylightingAssembly_TotalLength_traits;

        const SimDaylightingAssembly_TotalLength_optional&
        SimDaylightingAssembly_TotalLength () const;

        SimDaylightingAssembly_TotalLength_optional&
        SimDaylightingAssembly_TotalLength ();

        void
        SimDaylightingAssembly_TotalLength (const SimDaylightingAssembly_TotalLength_type& x);

        void
        SimDaylightingAssembly_TotalLength (const SimDaylightingAssembly_TotalLength_optional& x);

        // SimDaylightingAssembly_EffecThermalResist
        //
        typedef ::xml_schema::double_ SimDaylightingAssembly_EffecThermalResist_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_EffecThermalResist_type > SimDaylightingAssembly_EffecThermalResist_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_EffecThermalResist_type, char, ::xsd::cxx::tree::schema_type::double_ > SimDaylightingAssembly_EffecThermalResist_traits;

        const SimDaylightingAssembly_EffecThermalResist_optional&
        SimDaylightingAssembly_EffecThermalResist () const;

        SimDaylightingAssembly_EffecThermalResist_optional&
        SimDaylightingAssembly_EffecThermalResist ();

        void
        SimDaylightingAssembly_EffecThermalResist (const SimDaylightingAssembly_EffecThermalResist_type& x);

        void
        SimDaylightingAssembly_EffecThermalResist (const SimDaylightingAssembly_EffecThermalResist_optional& x);

        // SimDaylightingAssembly_TransitionZoneName_1_4
        //
        typedef ::xml_schema::idrefs SimDaylightingAssembly_TransitionZoneName_1_4_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_TransitionZoneName_1_4_type > SimDaylightingAssembly_TransitionZoneName_1_4_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_TransitionZoneName_1_4_type, char > SimDaylightingAssembly_TransitionZoneName_1_4_traits;

        const SimDaylightingAssembly_TransitionZoneName_1_4_optional&
        SimDaylightingAssembly_TransitionZoneName_1_4 () const;

        SimDaylightingAssembly_TransitionZoneName_1_4_optional&
        SimDaylightingAssembly_TransitionZoneName_1_4 ();

        void
        SimDaylightingAssembly_TransitionZoneName_1_4 (const SimDaylightingAssembly_TransitionZoneName_1_4_type& x);

        void
        SimDaylightingAssembly_TransitionZoneName_1_4 (const SimDaylightingAssembly_TransitionZoneName_1_4_optional& x);

        void
        SimDaylightingAssembly_TransitionZoneName_1_4 (::std::auto_ptr< SimDaylightingAssembly_TransitionZoneName_1_4_type > p);

        // SimDaylightingAssembly_TransitionZoneLength_1_4
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimDaylightingAssembly_TransitionZoneLength_1_4_type;
        typedef ::xsd::cxx::tree::optional< SimDaylightingAssembly_TransitionZoneLength_1_4_type > SimDaylightingAssembly_TransitionZoneLength_1_4_optional;
        typedef ::xsd::cxx::tree::traits< SimDaylightingAssembly_TransitionZoneLength_1_4_type, char > SimDaylightingAssembly_TransitionZoneLength_1_4_traits;

        const SimDaylightingAssembly_TransitionZoneLength_1_4_optional&
        SimDaylightingAssembly_TransitionZoneLength_1_4 () const;

        SimDaylightingAssembly_TransitionZoneLength_1_4_optional&
        SimDaylightingAssembly_TransitionZoneLength_1_4 ();

        void
        SimDaylightingAssembly_TransitionZoneLength_1_4 (const SimDaylightingAssembly_TransitionZoneLength_1_4_type& x);

        void
        SimDaylightingAssembly_TransitionZoneLength_1_4 (const SimDaylightingAssembly_TransitionZoneLength_1_4_optional& x);

        void
        SimDaylightingAssembly_TransitionZoneLength_1_4 (::std::auto_ptr< SimDaylightingAssembly_TransitionZoneLength_1_4_type > p);

        // Constructors.
        //
        SimDaylightingAssembly_DaylightingAssembly_LightTube (const RefId_type&);

        SimDaylightingAssembly_DaylightingAssembly_LightTube (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f = 0,
                                                              ::xml_schema::container* c = 0);

        SimDaylightingAssembly_DaylightingAssembly_LightTube (const SimDaylightingAssembly_DaylightingAssembly_LightTube& x,
                                                              ::xml_schema::flags f = 0,
                                                              ::xml_schema::container* c = 0);

        virtual SimDaylightingAssembly_DaylightingAssembly_LightTube*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimDaylightingAssembly_DaylightingAssembly_LightTube&
        operator= (const SimDaylightingAssembly_DaylightingAssembly_LightTube& x);

        virtual 
        ~SimDaylightingAssembly_DaylightingAssembly_LightTube ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimDaylightingAssembly_ConstructionName_optional SimDaylightingAssembly_ConstructionName_;
        SimDaylightingAssembly_DomeName_optional SimDaylightingAssembly_DomeName_;
        SimDaylightingAssembly_DiffuserName_optional SimDaylightingAssembly_DiffuserName_;
        SimDaylightingAssembly_Diam_optional SimDaylightingAssembly_Diam_;
        SimDaylightingAssembly_TotalLength_optional SimDaylightingAssembly_TotalLength_;
        SimDaylightingAssembly_EffecThermalResist_optional SimDaylightingAssembly_EffecThermalResist_;
        SimDaylightingAssembly_TransitionZoneName_1_4_optional SimDaylightingAssembly_TransitionZoneName_1_4_;
        SimDaylightingAssembly_TransitionZoneLength_1_4_optional SimDaylightingAssembly_TransitionZoneLength_1_4_;
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

#endif // SIM_DAYLIGHTING_ASSEMBLY_DAYLIGHTING_ASSEMBLY_LIGHT_TUBE_HXX