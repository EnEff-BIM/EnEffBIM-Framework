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

#ifndef SIM_TEMPLATE_DAYLIGHTING_HXX
#define SIM_TEMPLATE_DAYLIGHTING_HXX

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
      class SimTemplateDaylighting;
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

#include "simtemplate.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimTemplateDaylighting: public ::schema::simxml::SimModelCore::SimTemplate
      {
        public:
        // TemplateDaylightingController
        //
        typedef ::xml_schema::idref TemplateDaylightingController_type;
        typedef ::xsd::cxx::tree::optional< TemplateDaylightingController_type > TemplateDaylightingController_optional;
        typedef ::xsd::cxx::tree::traits< TemplateDaylightingController_type, char > TemplateDaylightingController_traits;

        const TemplateDaylightingController_optional&
        TemplateDaylightingController () const;

        TemplateDaylightingController_optional&
        TemplateDaylightingController ();

        void
        TemplateDaylightingController (const TemplateDaylightingController_type& x);

        void
        TemplateDaylightingController (const TemplateDaylightingController_optional& x);

        void
        TemplateDaylightingController (::std::auto_ptr< TemplateDaylightingController_type > p);

        // TemplateNumberOfSensors
        //
        typedef ::xml_schema::int_ TemplateNumberOfSensors_type;
        typedef ::xsd::cxx::tree::optional< TemplateNumberOfSensors_type > TemplateNumberOfSensors_optional;
        typedef ::xsd::cxx::tree::traits< TemplateNumberOfSensors_type, char > TemplateNumberOfSensors_traits;

        const TemplateNumberOfSensors_optional&
        TemplateNumberOfSensors () const;

        TemplateNumberOfSensors_optional&
        TemplateNumberOfSensors ();

        void
        TemplateNumberOfSensors (const TemplateNumberOfSensors_type& x);

        void
        TemplateNumberOfSensors (const TemplateNumberOfSensors_optional& x);

        // TemplateFractionCntrlSensor1
        //
        typedef ::xml_schema::double_ TemplateFractionCntrlSensor1_type;
        typedef ::xsd::cxx::tree::optional< TemplateFractionCntrlSensor1_type > TemplateFractionCntrlSensor1_optional;
        typedef ::xsd::cxx::tree::traits< TemplateFractionCntrlSensor1_type, char, ::xsd::cxx::tree::schema_type::double_ > TemplateFractionCntrlSensor1_traits;

        const TemplateFractionCntrlSensor1_optional&
        TemplateFractionCntrlSensor1 () const;

        TemplateFractionCntrlSensor1_optional&
        TemplateFractionCntrlSensor1 ();

        void
        TemplateFractionCntrlSensor1 (const TemplateFractionCntrlSensor1_type& x);

        void
        TemplateFractionCntrlSensor1 (const TemplateFractionCntrlSensor1_optional& x);

        // TemplateFractionCntrlSensor2
        //
        typedef ::xml_schema::double_ TemplateFractionCntrlSensor2_type;
        typedef ::xsd::cxx::tree::optional< TemplateFractionCntrlSensor2_type > TemplateFractionCntrlSensor2_optional;
        typedef ::xsd::cxx::tree::traits< TemplateFractionCntrlSensor2_type, char, ::xsd::cxx::tree::schema_type::double_ > TemplateFractionCntrlSensor2_traits;

        const TemplateFractionCntrlSensor2_optional&
        TemplateFractionCntrlSensor2 () const;

        TemplateFractionCntrlSensor2_optional&
        TemplateFractionCntrlSensor2 ();

        void
        TemplateFractionCntrlSensor2 (const TemplateFractionCntrlSensor2_type& x);

        void
        TemplateFractionCntrlSensor2 (const TemplateFractionCntrlSensor2_optional& x);

        // TemplateIlluminanceSetpoint1
        //
        typedef ::xml_schema::double_ TemplateIlluminanceSetpoint1_type;
        typedef ::xsd::cxx::tree::optional< TemplateIlluminanceSetpoint1_type > TemplateIlluminanceSetpoint1_optional;
        typedef ::xsd::cxx::tree::traits< TemplateIlluminanceSetpoint1_type, char, ::xsd::cxx::tree::schema_type::double_ > TemplateIlluminanceSetpoint1_traits;

        const TemplateIlluminanceSetpoint1_optional&
        TemplateIlluminanceSetpoint1 () const;

        TemplateIlluminanceSetpoint1_optional&
        TemplateIlluminanceSetpoint1 ();

        void
        TemplateIlluminanceSetpoint1 (const TemplateIlluminanceSetpoint1_type& x);

        void
        TemplateIlluminanceSetpoint1 (const TemplateIlluminanceSetpoint1_optional& x);

        // TemplateIlluminanceSetpoint2
        //
        typedef ::xml_schema::double_ TemplateIlluminanceSetpoint2_type;
        typedef ::xsd::cxx::tree::optional< TemplateIlluminanceSetpoint2_type > TemplateIlluminanceSetpoint2_optional;
        typedef ::xsd::cxx::tree::traits< TemplateIlluminanceSetpoint2_type, char, ::xsd::cxx::tree::schema_type::double_ > TemplateIlluminanceSetpoint2_traits;

        const TemplateIlluminanceSetpoint2_optional&
        TemplateIlluminanceSetpoint2 () const;

        TemplateIlluminanceSetpoint2_optional&
        TemplateIlluminanceSetpoint2 ();

        void
        TemplateIlluminanceSetpoint2 (const TemplateIlluminanceSetpoint2_type& x);

        void
        TemplateIlluminanceSetpoint2 (const TemplateIlluminanceSetpoint2_optional& x);

        // TemplateLuxSensor1
        //
        typedef ::xml_schema::idref TemplateLuxSensor1_type;
        typedef ::xsd::cxx::tree::optional< TemplateLuxSensor1_type > TemplateLuxSensor1_optional;
        typedef ::xsd::cxx::tree::traits< TemplateLuxSensor1_type, char > TemplateLuxSensor1_traits;

        const TemplateLuxSensor1_optional&
        TemplateLuxSensor1 () const;

        TemplateLuxSensor1_optional&
        TemplateLuxSensor1 ();

        void
        TemplateLuxSensor1 (const TemplateLuxSensor1_type& x);

        void
        TemplateLuxSensor1 (const TemplateLuxSensor1_optional& x);

        void
        TemplateLuxSensor1 (::std::auto_ptr< TemplateLuxSensor1_type > p);

        // TemplateSensorType1
        //
        typedef ::xml_schema::string TemplateSensorType1_type;
        typedef ::xsd::cxx::tree::optional< TemplateSensorType1_type > TemplateSensorType1_optional;
        typedef ::xsd::cxx::tree::traits< TemplateSensorType1_type, char > TemplateSensorType1_traits;

        const TemplateSensorType1_optional&
        TemplateSensorType1 () const;

        TemplateSensorType1_optional&
        TemplateSensorType1 ();

        void
        TemplateSensorType1 (const TemplateSensorType1_type& x);

        void
        TemplateSensorType1 (const TemplateSensorType1_optional& x);

        void
        TemplateSensorType1 (::std::auto_ptr< TemplateSensorType1_type > p);

        // Sensor1_LocAlongWindows
        //
        typedef ::xml_schema::string Sensor1_LocAlongWindows_type;
        typedef ::xsd::cxx::tree::optional< Sensor1_LocAlongWindows_type > Sensor1_LocAlongWindows_optional;
        typedef ::xsd::cxx::tree::traits< Sensor1_LocAlongWindows_type, char > Sensor1_LocAlongWindows_traits;

        const Sensor1_LocAlongWindows_optional&
        Sensor1_LocAlongWindows () const;

        Sensor1_LocAlongWindows_optional&
        Sensor1_LocAlongWindows ();

        void
        Sensor1_LocAlongWindows (const Sensor1_LocAlongWindows_type& x);

        void
        Sensor1_LocAlongWindows (const Sensor1_LocAlongWindows_optional& x);

        void
        Sensor1_LocAlongWindows (::std::auto_ptr< Sensor1_LocAlongWindows_type > p);

        // Sensor1_LocWindowsOffset
        //
        typedef ::xml_schema::double_ Sensor1_LocWindowsOffset_type;
        typedef ::xsd::cxx::tree::optional< Sensor1_LocWindowsOffset_type > Sensor1_LocWindowsOffset_optional;
        typedef ::xsd::cxx::tree::traits< Sensor1_LocWindowsOffset_type, char, ::xsd::cxx::tree::schema_type::double_ > Sensor1_LocWindowsOffset_traits;

        const Sensor1_LocWindowsOffset_optional&
        Sensor1_LocWindowsOffset () const;

        Sensor1_LocWindowsOffset_optional&
        Sensor1_LocWindowsOffset ();

        void
        Sensor1_LocWindowsOffset (const Sensor1_LocWindowsOffset_type& x);

        void
        Sensor1_LocWindowsOffset (const Sensor1_LocWindowsOffset_optional& x);

        // Sensor1_LocHeightAboveFloor
        //
        typedef ::xml_schema::double_ Sensor1_LocHeightAboveFloor_type;
        typedef ::xsd::cxx::tree::optional< Sensor1_LocHeightAboveFloor_type > Sensor1_LocHeightAboveFloor_optional;
        typedef ::xsd::cxx::tree::traits< Sensor1_LocHeightAboveFloor_type, char, ::xsd::cxx::tree::schema_type::double_ > Sensor1_LocHeightAboveFloor_traits;

        const Sensor1_LocHeightAboveFloor_optional&
        Sensor1_LocHeightAboveFloor () const;

        Sensor1_LocHeightAboveFloor_optional&
        Sensor1_LocHeightAboveFloor ();

        void
        Sensor1_LocHeightAboveFloor (const Sensor1_LocHeightAboveFloor_type& x);

        void
        Sensor1_LocHeightAboveFloor (const Sensor1_LocHeightAboveFloor_optional& x);

        // TemplateLuxSensor2
        //
        typedef ::xml_schema::idref TemplateLuxSensor2_type;
        typedef ::xsd::cxx::tree::optional< TemplateLuxSensor2_type > TemplateLuxSensor2_optional;
        typedef ::xsd::cxx::tree::traits< TemplateLuxSensor2_type, char > TemplateLuxSensor2_traits;

        const TemplateLuxSensor2_optional&
        TemplateLuxSensor2 () const;

        TemplateLuxSensor2_optional&
        TemplateLuxSensor2 ();

        void
        TemplateLuxSensor2 (const TemplateLuxSensor2_type& x);

        void
        TemplateLuxSensor2 (const TemplateLuxSensor2_optional& x);

        void
        TemplateLuxSensor2 (::std::auto_ptr< TemplateLuxSensor2_type > p);

        // TemplateSensorType2
        //
        typedef ::xml_schema::string TemplateSensorType2_type;
        typedef ::xsd::cxx::tree::optional< TemplateSensorType2_type > TemplateSensorType2_optional;
        typedef ::xsd::cxx::tree::traits< TemplateSensorType2_type, char > TemplateSensorType2_traits;

        const TemplateSensorType2_optional&
        TemplateSensorType2 () const;

        TemplateSensorType2_optional&
        TemplateSensorType2 ();

        void
        TemplateSensorType2 (const TemplateSensorType2_type& x);

        void
        TemplateSensorType2 (const TemplateSensorType2_optional& x);

        void
        TemplateSensorType2 (::std::auto_ptr< TemplateSensorType2_type > p);

        // Sensor2_LocAlongWindows
        //
        typedef ::xml_schema::string Sensor2_LocAlongWindows_type;
        typedef ::xsd::cxx::tree::optional< Sensor2_LocAlongWindows_type > Sensor2_LocAlongWindows_optional;
        typedef ::xsd::cxx::tree::traits< Sensor2_LocAlongWindows_type, char > Sensor2_LocAlongWindows_traits;

        const Sensor2_LocAlongWindows_optional&
        Sensor2_LocAlongWindows () const;

        Sensor2_LocAlongWindows_optional&
        Sensor2_LocAlongWindows ();

        void
        Sensor2_LocAlongWindows (const Sensor2_LocAlongWindows_type& x);

        void
        Sensor2_LocAlongWindows (const Sensor2_LocAlongWindows_optional& x);

        void
        Sensor2_LocAlongWindows (::std::auto_ptr< Sensor2_LocAlongWindows_type > p);

        // Sensor2_LocWindowsOffset
        //
        typedef ::xml_schema::double_ Sensor2_LocWindowsOffset_type;
        typedef ::xsd::cxx::tree::optional< Sensor2_LocWindowsOffset_type > Sensor2_LocWindowsOffset_optional;
        typedef ::xsd::cxx::tree::traits< Sensor2_LocWindowsOffset_type, char, ::xsd::cxx::tree::schema_type::double_ > Sensor2_LocWindowsOffset_traits;

        const Sensor2_LocWindowsOffset_optional&
        Sensor2_LocWindowsOffset () const;

        Sensor2_LocWindowsOffset_optional&
        Sensor2_LocWindowsOffset ();

        void
        Sensor2_LocWindowsOffset (const Sensor2_LocWindowsOffset_type& x);

        void
        Sensor2_LocWindowsOffset (const Sensor2_LocWindowsOffset_optional& x);

        // Sensor2_LocHeightAboveFloor
        //
        typedef ::xml_schema::double_ Sensor2_LocHeightAboveFloor_type;
        typedef ::xsd::cxx::tree::optional< Sensor2_LocHeightAboveFloor_type > Sensor2_LocHeightAboveFloor_optional;
        typedef ::xsd::cxx::tree::traits< Sensor2_LocHeightAboveFloor_type, char, ::xsd::cxx::tree::schema_type::double_ > Sensor2_LocHeightAboveFloor_traits;

        const Sensor2_LocHeightAboveFloor_optional&
        Sensor2_LocHeightAboveFloor () const;

        Sensor2_LocHeightAboveFloor_optional&
        Sensor2_LocHeightAboveFloor ();

        void
        Sensor2_LocHeightAboveFloor (const Sensor2_LocHeightAboveFloor_type& x);

        void
        Sensor2_LocHeightAboveFloor (const Sensor2_LocHeightAboveFloor_optional& x);

        // Constructors.
        //
        SimTemplateDaylighting ();

        SimTemplateDaylighting (const RefId_type&);

        SimTemplateDaylighting (const ::xercesc::DOMElement& e,
                                ::xml_schema::flags f = 0,
                                ::xml_schema::container* c = 0);

        SimTemplateDaylighting (const SimTemplateDaylighting& x,
                                ::xml_schema::flags f = 0,
                                ::xml_schema::container* c = 0);

        virtual SimTemplateDaylighting*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimTemplateDaylighting&
        operator= (const SimTemplateDaylighting& x);

        virtual 
        ~SimTemplateDaylighting ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        TemplateDaylightingController_optional TemplateDaylightingController_;
        TemplateNumberOfSensors_optional TemplateNumberOfSensors_;
        TemplateFractionCntrlSensor1_optional TemplateFractionCntrlSensor1_;
        TemplateFractionCntrlSensor2_optional TemplateFractionCntrlSensor2_;
        TemplateIlluminanceSetpoint1_optional TemplateIlluminanceSetpoint1_;
        TemplateIlluminanceSetpoint2_optional TemplateIlluminanceSetpoint2_;
        TemplateLuxSensor1_optional TemplateLuxSensor1_;
        TemplateSensorType1_optional TemplateSensorType1_;
        Sensor1_LocAlongWindows_optional Sensor1_LocAlongWindows_;
        Sensor1_LocWindowsOffset_optional Sensor1_LocWindowsOffset_;
        Sensor1_LocHeightAboveFloor_optional Sensor1_LocHeightAboveFloor_;
        TemplateLuxSensor2_optional TemplateLuxSensor2_;
        TemplateSensorType2_optional TemplateSensorType2_;
        Sensor2_LocAlongWindows_optional Sensor2_LocAlongWindows_;
        Sensor2_LocWindowsOffset_optional Sensor2_LocWindowsOffset_;
        Sensor2_LocHeightAboveFloor_optional Sensor2_LocHeightAboveFloor_;
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

#endif // SIM_TEMPLATE_DAYLIGHTING_HXX