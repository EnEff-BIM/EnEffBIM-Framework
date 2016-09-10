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

#ifndef SIM_FLUID_HXX
#define SIM_FLUID_HXX

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
      class SimFluid;
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

#include "simresourceobject.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class FlowrateSingleValue;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimFluid: public ::schema::simxml::SimModelCore::SimResourceObject
      {
        public:
        // PropertySource
        //
        typedef ::xml_schema::string PropertySource_type;
        typedef ::xsd::cxx::tree::optional< PropertySource_type > PropertySource_optional;
        typedef ::xsd::cxx::tree::traits< PropertySource_type, char > PropertySource_traits;

        const PropertySource_optional&
        PropertySource () const;

        PropertySource_optional&
        PropertySource ();

        void
        PropertySource (const PropertySource_type& x);

        void
        PropertySource (const PropertySource_optional& x);

        void
        PropertySource (::std::auto_ptr< PropertySource_type > p);

        // FlowConditionTimeSeries
        //
        typedef ::xml_schema::idref FlowConditionTimeSeries_type;
        typedef ::xsd::cxx::tree::optional< FlowConditionTimeSeries_type > FlowConditionTimeSeries_optional;
        typedef ::xsd::cxx::tree::traits< FlowConditionTimeSeries_type, char > FlowConditionTimeSeries_traits;

        const FlowConditionTimeSeries_optional&
        FlowConditionTimeSeries () const;

        FlowConditionTimeSeries_optional&
        FlowConditionTimeSeries ();

        void
        FlowConditionTimeSeries (const FlowConditionTimeSeries_type& x);

        void
        FlowConditionTimeSeries (const FlowConditionTimeSeries_optional& x);

        void
        FlowConditionTimeSeries (::std::auto_ptr< FlowConditionTimeSeries_type > p);

        // VelocityTimeSeries
        //
        typedef ::xml_schema::idref VelocityTimeSeries_type;
        typedef ::xsd::cxx::tree::optional< VelocityTimeSeries_type > VelocityTimeSeries_optional;
        typedef ::xsd::cxx::tree::traits< VelocityTimeSeries_type, char > VelocityTimeSeries_traits;

        const VelocityTimeSeries_optional&
        VelocityTimeSeries () const;

        VelocityTimeSeries_optional&
        VelocityTimeSeries ();

        void
        VelocityTimeSeries (const VelocityTimeSeries_type& x);

        void
        VelocityTimeSeries (const VelocityTimeSeries_optional& x);

        void
        VelocityTimeSeries (::std::auto_ptr< VelocityTimeSeries_type > p);

        // FlowrateTimeSeries
        //
        typedef ::xml_schema::idref FlowrateTimeSeries_type;
        typedef ::xsd::cxx::tree::optional< FlowrateTimeSeries_type > FlowrateTimeSeries_optional;
        typedef ::xsd::cxx::tree::traits< FlowrateTimeSeries_type, char > FlowrateTimeSeries_traits;

        const FlowrateTimeSeries_optional&
        FlowrateTimeSeries () const;

        FlowrateTimeSeries_optional&
        FlowrateTimeSeries ();

        void
        FlowrateTimeSeries (const FlowrateTimeSeries_type& x);

        void
        FlowrateTimeSeries (const FlowrateTimeSeries_optional& x);

        void
        FlowrateTimeSeries (::std::auto_ptr< FlowrateTimeSeries_type > p);

        // Fluid
        //
        typedef ::xml_schema::idref Fluid_type;
        typedef ::xsd::cxx::tree::optional< Fluid_type > Fluid_optional;
        typedef ::xsd::cxx::tree::traits< Fluid_type, char > Fluid_traits;

        const Fluid_optional&
        Fluid () const;

        Fluid_optional&
        Fluid ();

        void
        Fluid (const Fluid_type& x);

        void
        Fluid (const Fluid_optional& x);

        void
        Fluid (::std::auto_ptr< Fluid_type > p);

        // PressureTimeSeries
        //
        typedef ::xml_schema::idref PressureTimeSeries_type;
        typedef ::xsd::cxx::tree::optional< PressureTimeSeries_type > PressureTimeSeries_optional;
        typedef ::xsd::cxx::tree::traits< PressureTimeSeries_type, char > PressureTimeSeries_traits;

        const PressureTimeSeries_optional&
        PressureTimeSeries () const;

        PressureTimeSeries_optional&
        PressureTimeSeries ();

        void
        PressureTimeSeries (const PressureTimeSeries_type& x);

        void
        PressureTimeSeries (const PressureTimeSeries_optional& x);

        void
        PressureTimeSeries (::std::auto_ptr< PressureTimeSeries_type > p);

        // UserDefinedPropertySource
        //
        typedef ::xml_schema::string UserDefinedPropertySource_type;
        typedef ::xsd::cxx::tree::optional< UserDefinedPropertySource_type > UserDefinedPropertySource_optional;
        typedef ::xsd::cxx::tree::traits< UserDefinedPropertySource_type, char > UserDefinedPropertySource_traits;

        const UserDefinedPropertySource_optional&
        UserDefinedPropertySource () const;

        UserDefinedPropertySource_optional&
        UserDefinedPropertySource ();

        void
        UserDefinedPropertySource (const UserDefinedPropertySource_type& x);

        void
        UserDefinedPropertySource (const UserDefinedPropertySource_optional& x);

        void
        UserDefinedPropertySource (::std::auto_ptr< UserDefinedPropertySource_type > p);

        // TemperatureSingleValue
        //
        typedef ::xml_schema::double_ TemperatureSingleValue_type;
        typedef ::xsd::cxx::tree::optional< TemperatureSingleValue_type > TemperatureSingleValue_optional;
        typedef ::xsd::cxx::tree::traits< TemperatureSingleValue_type, char, ::xsd::cxx::tree::schema_type::double_ > TemperatureSingleValue_traits;

        const TemperatureSingleValue_optional&
        TemperatureSingleValue () const;

        TemperatureSingleValue_optional&
        TemperatureSingleValue ();

        void
        TemperatureSingleValue (const TemperatureSingleValue_type& x);

        void
        TemperatureSingleValue (const TemperatureSingleValue_optional& x);

        // WetBulbTemperatureSingleValue
        //
        typedef ::xml_schema::double_ WetBulbTemperatureSingleValue_type;
        typedef ::xsd::cxx::tree::optional< WetBulbTemperatureSingleValue_type > WetBulbTemperatureSingleValue_optional;
        typedef ::xsd::cxx::tree::traits< WetBulbTemperatureSingleValue_type, char, ::xsd::cxx::tree::schema_type::double_ > WetBulbTemperatureSingleValue_traits;

        const WetBulbTemperatureSingleValue_optional&
        WetBulbTemperatureSingleValue () const;

        WetBulbTemperatureSingleValue_optional&
        WetBulbTemperatureSingleValue ();

        void
        WetBulbTemperatureSingleValue (const WetBulbTemperatureSingleValue_type& x);

        void
        WetBulbTemperatureSingleValue (const WetBulbTemperatureSingleValue_optional& x);

        // WetBulbTemperatureTimeSeries
        //
        typedef ::xml_schema::idref WetBulbTemperatureTimeSeries_type;
        typedef ::xsd::cxx::tree::optional< WetBulbTemperatureTimeSeries_type > WetBulbTemperatureTimeSeries_optional;
        typedef ::xsd::cxx::tree::traits< WetBulbTemperatureTimeSeries_type, char > WetBulbTemperatureTimeSeries_traits;

        const WetBulbTemperatureTimeSeries_optional&
        WetBulbTemperatureTimeSeries () const;

        WetBulbTemperatureTimeSeries_optional&
        WetBulbTemperatureTimeSeries ();

        void
        WetBulbTemperatureTimeSeries (const WetBulbTemperatureTimeSeries_type& x);

        void
        WetBulbTemperatureTimeSeries (const WetBulbTemperatureTimeSeries_optional& x);

        void
        WetBulbTemperatureTimeSeries (::std::auto_ptr< WetBulbTemperatureTimeSeries_type > p);

        // TemperatureTimeSeries
        //
        typedef ::xml_schema::idref TemperatureTimeSeries_type;
        typedef ::xsd::cxx::tree::optional< TemperatureTimeSeries_type > TemperatureTimeSeries_optional;
        typedef ::xsd::cxx::tree::traits< TemperatureTimeSeries_type, char > TemperatureTimeSeries_traits;

        const TemperatureTimeSeries_optional&
        TemperatureTimeSeries () const;

        TemperatureTimeSeries_optional&
        TemperatureTimeSeries ();

        void
        TemperatureTimeSeries (const TemperatureTimeSeries_type& x);

        void
        TemperatureTimeSeries (const TemperatureTimeSeries_optional& x);

        void
        TemperatureTimeSeries (::std::auto_ptr< TemperatureTimeSeries_type > p);

        // FlowrateSingleValue
        //
        typedef ::schema::simxml::ResourcesGeneral::FlowrateSingleValue FlowrateSingleValue_type;
        typedef ::xsd::cxx::tree::optional< FlowrateSingleValue_type > FlowrateSingleValue_optional;
        typedef ::xsd::cxx::tree::traits< FlowrateSingleValue_type, char > FlowrateSingleValue_traits;

        const FlowrateSingleValue_optional&
        FlowrateSingleValue () const;

        FlowrateSingleValue_optional&
        FlowrateSingleValue ();

        void
        FlowrateSingleValue (const FlowrateSingleValue_type& x);

        void
        FlowrateSingleValue (const FlowrateSingleValue_optional& x);

        void
        FlowrateSingleValue (::std::auto_ptr< FlowrateSingleValue_type > p);

        // FlowConditionSingleValue
        //
        typedef ::xml_schema::double_ FlowConditionSingleValue_type;
        typedef ::xsd::cxx::tree::optional< FlowConditionSingleValue_type > FlowConditionSingleValue_optional;
        typedef ::xsd::cxx::tree::traits< FlowConditionSingleValue_type, char, ::xsd::cxx::tree::schema_type::double_ > FlowConditionSingleValue_traits;

        const FlowConditionSingleValue_optional&
        FlowConditionSingleValue () const;

        FlowConditionSingleValue_optional&
        FlowConditionSingleValue ();

        void
        FlowConditionSingleValue (const FlowConditionSingleValue_type& x);

        void
        FlowConditionSingleValue (const FlowConditionSingleValue_optional& x);

        // VelocitySingleValue
        //
        typedef ::xml_schema::double_ VelocitySingleValue_type;
        typedef ::xsd::cxx::tree::optional< VelocitySingleValue_type > VelocitySingleValue_optional;
        typedef ::xsd::cxx::tree::traits< VelocitySingleValue_type, char, ::xsd::cxx::tree::schema_type::double_ > VelocitySingleValue_traits;

        const VelocitySingleValue_optional&
        VelocitySingleValue () const;

        VelocitySingleValue_optional&
        VelocitySingleValue ();

        void
        VelocitySingleValue (const VelocitySingleValue_type& x);

        void
        VelocitySingleValue (const VelocitySingleValue_optional& x);

        // PressureSingleValue
        //
        typedef ::xml_schema::double_ PressureSingleValue_type;
        typedef ::xsd::cxx::tree::optional< PressureSingleValue_type > PressureSingleValue_optional;
        typedef ::xsd::cxx::tree::traits< PressureSingleValue_type, char, ::xsd::cxx::tree::schema_type::double_ > PressureSingleValue_traits;

        const PressureSingleValue_optional&
        PressureSingleValue () const;

        PressureSingleValue_optional&
        PressureSingleValue ();

        void
        PressureSingleValue (const PressureSingleValue_type& x);

        void
        PressureSingleValue (const PressureSingleValue_optional& x);

        // Constructors.
        //
        SimFluid ();

        SimFluid (const RefId_type&);

        SimFluid (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

        SimFluid (const SimFluid& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

        virtual SimFluid*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFluid&
        operator= (const SimFluid& x);

        virtual 
        ~SimFluid ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        PropertySource_optional PropertySource_;
        FlowConditionTimeSeries_optional FlowConditionTimeSeries_;
        VelocityTimeSeries_optional VelocityTimeSeries_;
        FlowrateTimeSeries_optional FlowrateTimeSeries_;
        Fluid_optional Fluid_;
        PressureTimeSeries_optional PressureTimeSeries_;
        UserDefinedPropertySource_optional UserDefinedPropertySource_;
        TemperatureSingleValue_optional TemperatureSingleValue_;
        WetBulbTemperatureSingleValue_optional WetBulbTemperatureSingleValue_;
        WetBulbTemperatureTimeSeries_optional WetBulbTemperatureTimeSeries_;
        TemperatureTimeSeries_optional TemperatureTimeSeries_;
        FlowrateSingleValue_optional FlowrateSingleValue_;
        FlowConditionSingleValue_optional FlowConditionSingleValue_;
        VelocitySingleValue_optional VelocitySingleValue_;
        PressureSingleValue_optional PressureSingleValue_;
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

#endif // SIM_FLUID_HXX
