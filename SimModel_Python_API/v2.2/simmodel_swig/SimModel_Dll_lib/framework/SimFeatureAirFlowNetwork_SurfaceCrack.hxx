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

#ifndef SIM_FEATURE_AIR_FLOW_NETWORK_SURFACE_CRACK_HXX
#define SIM_FEATURE_AIR_FLOW_NETWORK_SURFACE_CRACK_HXX

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
    namespace ResourcesGeometry
    {
      class SimFeatureAirFlowNetwork_SurfaceCrack;
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

#include "simfeatureairflownetwork.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      class SimFeatureAirFlowNetwork_SurfaceCrack: public ::schema::simxml::ResourcesGeometry::SimFeatureAirFlowNetwork
      {
        public:
        // SimFeatureAirFlowNetwk_Name
        //
        typedef ::xml_schema::string SimFeatureAirFlowNetwk_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFeatureAirFlowNetwk_Name_type > SimFeatureAirFlowNetwk_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFeatureAirFlowNetwk_Name_type, char > SimFeatureAirFlowNetwk_Name_traits;

        const SimFeatureAirFlowNetwk_Name_optional&
        SimFeatureAirFlowNetwk_Name () const;

        SimFeatureAirFlowNetwk_Name_optional&
        SimFeatureAirFlowNetwk_Name ();

        void
        SimFeatureAirFlowNetwk_Name (const SimFeatureAirFlowNetwk_Name_type& x);

        void
        SimFeatureAirFlowNetwk_Name (const SimFeatureAirFlowNetwk_Name_optional& x);

        void
        SimFeatureAirFlowNetwk_Name (::std::auto_ptr< SimFeatureAirFlowNetwk_Name_type > p);

        // SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond
        //
        typedef ::xml_schema::double_ SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_type;
        typedef ::xsd::cxx::tree::optional< SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_type > SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_traits;

        const SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_optional&
        SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond () const;

        SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_optional&
        SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond ();

        void
        SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond (const SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_type& x);

        void
        SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond (const SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_optional& x);

        // SimFeatureAirFlowNetwk_AirMassFlowExp
        //
        typedef ::xml_schema::double_ SimFeatureAirFlowNetwk_AirMassFlowExp_type;
        typedef ::xsd::cxx::tree::optional< SimFeatureAirFlowNetwk_AirMassFlowExp_type > SimFeatureAirFlowNetwk_AirMassFlowExp_optional;
        typedef ::xsd::cxx::tree::traits< SimFeatureAirFlowNetwk_AirMassFlowExp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFeatureAirFlowNetwk_AirMassFlowExp_traits;

        const SimFeatureAirFlowNetwk_AirMassFlowExp_optional&
        SimFeatureAirFlowNetwk_AirMassFlowExp () const;

        SimFeatureAirFlowNetwk_AirMassFlowExp_optional&
        SimFeatureAirFlowNetwk_AirMassFlowExp ();

        void
        SimFeatureAirFlowNetwk_AirMassFlowExp (const SimFeatureAirFlowNetwk_AirMassFlowExp_type& x);

        void
        SimFeatureAirFlowNetwk_AirMassFlowExp (const SimFeatureAirFlowNetwk_AirMassFlowExp_optional& x);

        // SimFeatureAirFlowNetwk_RefCrackCond
        //
        typedef ::xml_schema::idref SimFeatureAirFlowNetwk_RefCrackCond_type;
        typedef ::xsd::cxx::tree::optional< SimFeatureAirFlowNetwk_RefCrackCond_type > SimFeatureAirFlowNetwk_RefCrackCond_optional;
        typedef ::xsd::cxx::tree::traits< SimFeatureAirFlowNetwk_RefCrackCond_type, char > SimFeatureAirFlowNetwk_RefCrackCond_traits;

        const SimFeatureAirFlowNetwk_RefCrackCond_optional&
        SimFeatureAirFlowNetwk_RefCrackCond () const;

        SimFeatureAirFlowNetwk_RefCrackCond_optional&
        SimFeatureAirFlowNetwk_RefCrackCond ();

        void
        SimFeatureAirFlowNetwk_RefCrackCond (const SimFeatureAirFlowNetwk_RefCrackCond_type& x);

        void
        SimFeatureAirFlowNetwk_RefCrackCond (const SimFeatureAirFlowNetwk_RefCrackCond_optional& x);

        void
        SimFeatureAirFlowNetwk_RefCrackCond (::std::auto_ptr< SimFeatureAirFlowNetwk_RefCrackCond_type > p);

        // Airflow_MZone_RefCrackCond_Name
        //
        typedef ::xml_schema::string Airflow_MZone_RefCrackCond_Name_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_RefCrackCond_Name_type > Airflow_MZone_RefCrackCond_Name_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_RefCrackCond_Name_type, char > Airflow_MZone_RefCrackCond_Name_traits;

        const Airflow_MZone_RefCrackCond_Name_optional&
        Airflow_MZone_RefCrackCond_Name () const;

        Airflow_MZone_RefCrackCond_Name_optional&
        Airflow_MZone_RefCrackCond_Name ();

        void
        Airflow_MZone_RefCrackCond_Name (const Airflow_MZone_RefCrackCond_Name_type& x);

        void
        Airflow_MZone_RefCrackCond_Name (const Airflow_MZone_RefCrackCond_Name_optional& x);

        void
        Airflow_MZone_RefCrackCond_Name (::std::auto_ptr< Airflow_MZone_RefCrackCond_Name_type > p);

        // Airflow_MZone_RefCrackCond_RefTemp
        //
        typedef ::xml_schema::double_ Airflow_MZone_RefCrackCond_RefTemp_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_RefCrackCond_RefTemp_type > Airflow_MZone_RefCrackCond_RefTemp_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_RefCrackCond_RefTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_RefCrackCond_RefTemp_traits;

        const Airflow_MZone_RefCrackCond_RefTemp_optional&
        Airflow_MZone_RefCrackCond_RefTemp () const;

        Airflow_MZone_RefCrackCond_RefTemp_optional&
        Airflow_MZone_RefCrackCond_RefTemp ();

        void
        Airflow_MZone_RefCrackCond_RefTemp (const Airflow_MZone_RefCrackCond_RefTemp_type& x);

        void
        Airflow_MZone_RefCrackCond_RefTemp (const Airflow_MZone_RefCrackCond_RefTemp_optional& x);

        // Airflow_MZone_RefCrackCond_RefBarometricPressure
        //
        typedef ::xml_schema::double_ Airflow_MZone_RefCrackCond_RefBarometricPressure_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_RefCrackCond_RefBarometricPressure_type > Airflow_MZone_RefCrackCond_RefBarometricPressure_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_RefCrackCond_RefBarometricPressure_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_RefCrackCond_RefBarometricPressure_traits;

        const Airflow_MZone_RefCrackCond_RefBarometricPressure_optional&
        Airflow_MZone_RefCrackCond_RefBarometricPressure () const;

        Airflow_MZone_RefCrackCond_RefBarometricPressure_optional&
        Airflow_MZone_RefCrackCond_RefBarometricPressure ();

        void
        Airflow_MZone_RefCrackCond_RefBarometricPressure (const Airflow_MZone_RefCrackCond_RefBarometricPressure_type& x);

        void
        Airflow_MZone_RefCrackCond_RefBarometricPressure (const Airflow_MZone_RefCrackCond_RefBarometricPressure_optional& x);

        // Airflow_MZone_RefCrackCond_RefHumidRatio
        //
        typedef ::xml_schema::double_ Airflow_MZone_RefCrackCond_RefHumidRatio_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_RefCrackCond_RefHumidRatio_type > Airflow_MZone_RefCrackCond_RefHumidRatio_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_RefCrackCond_RefHumidRatio_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_RefCrackCond_RefHumidRatio_traits;

        const Airflow_MZone_RefCrackCond_RefHumidRatio_optional&
        Airflow_MZone_RefCrackCond_RefHumidRatio () const;

        Airflow_MZone_RefCrackCond_RefHumidRatio_optional&
        Airflow_MZone_RefCrackCond_RefHumidRatio ();

        void
        Airflow_MZone_RefCrackCond_RefHumidRatio (const Airflow_MZone_RefCrackCond_RefHumidRatio_type& x);

        void
        Airflow_MZone_RefCrackCond_RefHumidRatio (const Airflow_MZone_RefCrackCond_RefHumidRatio_optional& x);

        // Constructors.
        //
        SimFeatureAirFlowNetwork_SurfaceCrack ();

        SimFeatureAirFlowNetwork_SurfaceCrack (const RefId_type&);

        SimFeatureAirFlowNetwork_SurfaceCrack (const ::xercesc::DOMElement& e,
                                               ::xml_schema::flags f = 0,
                                               ::xml_schema::container* c = 0);

        SimFeatureAirFlowNetwork_SurfaceCrack (const SimFeatureAirFlowNetwork_SurfaceCrack& x,
                                               ::xml_schema::flags f = 0,
                                               ::xml_schema::container* c = 0);

        virtual SimFeatureAirFlowNetwork_SurfaceCrack*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFeatureAirFlowNetwork_SurfaceCrack&
        operator= (const SimFeatureAirFlowNetwork_SurfaceCrack& x);

        virtual 
        ~SimFeatureAirFlowNetwork_SurfaceCrack ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFeatureAirFlowNetwk_Name_optional SimFeatureAirFlowNetwk_Name_;
        SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_optional SimFeatureAirFlowNetwk_AirMassFlowCoefAtRefCond_;
        SimFeatureAirFlowNetwk_AirMassFlowExp_optional SimFeatureAirFlowNetwk_AirMassFlowExp_;
        SimFeatureAirFlowNetwk_RefCrackCond_optional SimFeatureAirFlowNetwk_RefCrackCond_;
        Airflow_MZone_RefCrackCond_Name_optional Airflow_MZone_RefCrackCond_Name_;
        Airflow_MZone_RefCrackCond_RefTemp_optional Airflow_MZone_RefCrackCond_RefTemp_;
        Airflow_MZone_RefCrackCond_RefBarometricPressure_optional Airflow_MZone_RefCrackCond_RefBarometricPressure_;
        Airflow_MZone_RefCrackCond_RefHumidRatio_optional Airflow_MZone_RefCrackCond_RefHumidRatio_;
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

#endif // SIM_FEATURE_AIR_FLOW_NETWORK_SURFACE_CRACK_HXX
