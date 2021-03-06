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

#ifndef SIM_SOLAR_SHADE_HXX
#define SIM_SOLAR_SHADE_HXX

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
      class SimSolarShade;
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

#include "simbuildingelement.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class __declspec(dllexport) SimSolarShade: public ::schema::simxml::SimModelCore::SimBuildingElement
      {
        public:
        // Name
        //
        typedef ::xml_schema::string Name_type;
        typedef ::xsd::cxx::tree::optional< Name_type, false > Name_optional;
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

        // SolarShadeObjectType
        //
        typedef ::xml_schema::string SolarShadeObjectType_type;
        typedef ::xsd::cxx::tree::optional< SolarShadeObjectType_type, false > SolarShadeObjectType_optional;
        typedef ::xsd::cxx::tree::traits< SolarShadeObjectType_type, char > SolarShadeObjectType_traits;

        const SolarShadeObjectType_optional&
        SolarShadeObjectType () const;

        SolarShadeObjectType_optional&
        SolarShadeObjectType ();

        void
        SolarShadeObjectType (const SolarShadeObjectType_type& x);

        void
        SolarShadeObjectType (const SolarShadeObjectType_optional& x);

        void
        SolarShadeObjectType (::std::auto_ptr< SolarShadeObjectType_type > p);

        // ShadingDeviceType
        //
        typedef ::xml_schema::string ShadingDeviceType_type;
        typedef ::xsd::cxx::tree::optional< ShadingDeviceType_type, false > ShadingDeviceType_optional;
        typedef ::xsd::cxx::tree::traits< ShadingDeviceType_type, char > ShadingDeviceType_traits;

        const ShadingDeviceType_optional&
        ShadingDeviceType () const;

        ShadingDeviceType_optional&
        ShadingDeviceType ();

        void
        ShadingDeviceType (const ShadingDeviceType_type& x);

        void
        ShadingDeviceType (const ShadingDeviceType_optional& x);

        void
        ShadingDeviceType (::std::auto_ptr< ShadingDeviceType_type > p);

        // Azimuth
        //
        typedef ::xml_schema::double_ Azimuth_type;
        typedef ::xsd::cxx::tree::optional< Azimuth_type, true > Azimuth_optional;
        typedef ::xsd::cxx::tree::traits< Azimuth_type, char, ::xsd::cxx::tree::schema_type::double_ > Azimuth_traits;

        const Azimuth_optional&
        Azimuth () const;

        Azimuth_optional&
        Azimuth ();

        void
        Azimuth (const Azimuth_type& x);

        void
        Azimuth (const Azimuth_optional& x);

        // Inclination_MeasureValue
        //
        typedef ::xml_schema::double_ Inclination_MeasureValue_type;
        typedef ::xsd::cxx::tree::optional< Inclination_MeasureValue_type, true > Inclination_MeasureValue_optional;
        typedef ::xsd::cxx::tree::traits< Inclination_MeasureValue_type, char, ::xsd::cxx::tree::schema_type::double_ > Inclination_MeasureValue_traits;

        const Inclination_MeasureValue_optional&
        Inclination_MeasureValue () const;

        Inclination_MeasureValue_optional&
        Inclination_MeasureValue ();

        void
        Inclination_MeasureValue (const Inclination_MeasureValue_type& x);

        void
        Inclination_MeasureValue (const Inclination_MeasureValue_optional& x);

        // TiltRange_MeasureValue
        //
        typedef ::xml_schema::double_ TiltRange_MeasureValue_type;
        typedef ::xsd::cxx::tree::optional< TiltRange_MeasureValue_type, true > TiltRange_MeasureValue_optional;
        typedef ::xsd::cxx::tree::traits< TiltRange_MeasureValue_type, char, ::xsd::cxx::tree::schema_type::double_ > TiltRange_MeasureValue_traits;

        const TiltRange_MeasureValue_optional&
        TiltRange_MeasureValue () const;

        TiltRange_MeasureValue_optional&
        TiltRange_MeasureValue ();

        void
        TiltRange_MeasureValue (const TiltRange_MeasureValue_type& x);

        void
        TiltRange_MeasureValue (const TiltRange_MeasureValue_optional& x);

        // AverageSolarTransmittance
        //
        typedef ::xml_schema::double_ AverageSolarTransmittance_type;
        typedef ::xsd::cxx::tree::optional< AverageSolarTransmittance_type, true > AverageSolarTransmittance_optional;
        typedef ::xsd::cxx::tree::traits< AverageSolarTransmittance_type, char, ::xsd::cxx::tree::schema_type::double_ > AverageSolarTransmittance_traits;

        const AverageSolarTransmittance_optional&
        AverageSolarTransmittance () const;

        AverageSolarTransmittance_optional&
        AverageSolarTransmittance ();

        void
        AverageSolarTransmittance (const AverageSolarTransmittance_type& x);

        void
        AverageSolarTransmittance (const AverageSolarTransmittance_optional& x);

        // AverageVisibleTransmittance
        //
        typedef ::xml_schema::double_ AverageVisibleTransmittance_type;
        typedef ::xsd::cxx::tree::optional< AverageVisibleTransmittance_type, true > AverageVisibleTransmittance_optional;
        typedef ::xsd::cxx::tree::traits< AverageVisibleTransmittance_type, char, ::xsd::cxx::tree::schema_type::double_ > AverageVisibleTransmittance_traits;

        const AverageVisibleTransmittance_optional&
        AverageVisibleTransmittance () const;

        AverageVisibleTransmittance_optional&
        AverageVisibleTransmittance ();

        void
        AverageVisibleTransmittance (const AverageVisibleTransmittance_type& x);

        void
        AverageVisibleTransmittance (const AverageVisibleTransmittance_optional& x);

        // Reflectance
        //
        typedef ::xml_schema::double_ Reflectance_type;
        typedef ::xsd::cxx::tree::optional< Reflectance_type, true > Reflectance_optional;
        typedef ::xsd::cxx::tree::traits< Reflectance_type, char, ::xsd::cxx::tree::schema_type::double_ > Reflectance_traits;

        const Reflectance_optional&
        Reflectance () const;

        Reflectance_optional&
        Reflectance ();

        void
        Reflectance (const Reflectance_type& x);

        void
        Reflectance (const Reflectance_optional& x);

        // Roughness_MeasureValue
        //
        typedef ::xml_schema::double_ Roughness_MeasureValue_type;
        typedef ::xsd::cxx::tree::optional< Roughness_MeasureValue_type, true > Roughness_MeasureValue_optional;
        typedef ::xsd::cxx::tree::traits< Roughness_MeasureValue_type, char, ::xsd::cxx::tree::schema_type::double_ > Roughness_MeasureValue_traits;

        const Roughness_MeasureValue_optional&
        Roughness_MeasureValue () const;

        Roughness_MeasureValue_optional&
        Roughness_MeasureValue ();

        void
        Roughness_MeasureValue (const Roughness_MeasureValue_type& x);

        void
        Roughness_MeasureValue (const Roughness_MeasureValue_optional& x);

        // Color
        //
        typedef ::xml_schema::string Color_type;
        typedef ::xsd::cxx::tree::optional< Color_type, false > Color_optional;
        typedef ::xsd::cxx::tree::traits< Color_type, char > Color_traits;

        const Color_optional&
        Color () const;

        Color_optional&
        Color ();

        void
        Color (const Color_type& x);

        void
        Color (const Color_optional& x);

        void
        Color (::std::auto_ptr< Color_type > p);

        // ClassRef_UniFormat
        //
        typedef ::xml_schema::idref ClassRef_UniFormat_type;
        typedef ::xsd::cxx::tree::optional< ClassRef_UniFormat_type, false > ClassRef_UniFormat_optional;
        typedef ::xsd::cxx::tree::traits< ClassRef_UniFormat_type, char > ClassRef_UniFormat_traits;

        const ClassRef_UniFormat_optional&
        ClassRef_UniFormat () const;

        ClassRef_UniFormat_optional&
        ClassRef_UniFormat ();

        void
        ClassRef_UniFormat (const ClassRef_UniFormat_type& x);

        void
        ClassRef_UniFormat (const ClassRef_UniFormat_optional& x);

        void
        ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > p);

        // MaterialList
        //
        typedef ::xml_schema::idref MaterialList_type;
        typedef ::xsd::cxx::tree::optional< MaterialList_type, false > MaterialList_optional;
        typedef ::xsd::cxx::tree::traits< MaterialList_type, char > MaterialList_traits;

        const MaterialList_optional&
        MaterialList () const;

        MaterialList_optional&
        MaterialList ();

        void
        MaterialList (const MaterialList_type& x);

        void
        MaterialList (const MaterialList_optional& x);

        void
        MaterialList (::std::auto_ptr< MaterialList_type > p);

        // Representation
        //
        typedef ::xml_schema::idref Representation_type;
        typedef ::xsd::cxx::tree::optional< Representation_type, false > Representation_optional;
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

        // CompositionType
        //
        typedef ::xml_schema::string CompositionType_type;
        typedef ::xsd::cxx::tree::optional< CompositionType_type, false > CompositionType_optional;
        typedef ::xsd::cxx::tree::traits< CompositionType_type, char > CompositionType_traits;

        const CompositionType_optional&
        CompositionType () const;

        CompositionType_optional&
        CompositionType ();

        void
        CompositionType (const CompositionType_type& x);

        void
        CompositionType (const CompositionType_optional& x);

        void
        CompositionType (::std::auto_ptr< CompositionType_type > p);

        // ShadedElement
        //
        typedef ::xml_schema::idref ShadedElement_type;
        typedef ::xsd::cxx::tree::optional< ShadedElement_type, false > ShadedElement_optional;
        typedef ::xsd::cxx::tree::traits< ShadedElement_type, char > ShadedElement_traits;

        const ShadedElement_optional&
        ShadedElement () const;

        ShadedElement_optional&
        ShadedElement ();

        void
        ShadedElement (const ShadedElement_type& x);

        void
        ShadedElement (const ShadedElement_optional& x);

        void
        ShadedElement (::std::auto_ptr< ShadedElement_type > p);

        // Constructors.
        //
        SimSolarShade ();

        SimSolarShade (const RefId_type&);

        SimSolarShade (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

        SimSolarShade (const SimSolarShade& x,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

        virtual SimSolarShade*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSolarShade&
        operator= (const SimSolarShade& x);

        virtual 
        ~SimSolarShade ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Name_optional Name_;
        SolarShadeObjectType_optional SolarShadeObjectType_;
        ShadingDeviceType_optional ShadingDeviceType_;
        Azimuth_optional Azimuth_;
        Inclination_MeasureValue_optional Inclination_MeasureValue_;
        TiltRange_MeasureValue_optional TiltRange_MeasureValue_;
        AverageSolarTransmittance_optional AverageSolarTransmittance_;
        AverageVisibleTransmittance_optional AverageVisibleTransmittance_;
        Reflectance_optional Reflectance_;
        Roughness_MeasureValue_optional Roughness_MeasureValue_;
        Color_optional Color_;
        ClassRef_UniFormat_optional ClassRef_UniFormat_;
        MaterialList_optional MaterialList_;
        Representation_optional Representation_;
        CompositionType_optional CompositionType_;
        ShadedElement_optional ShadedElement_;
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

#endif // SIM_SOLAR_SHADE_HXX
