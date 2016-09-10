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

#ifndef SIM_TEMPLATE_SIMULATION_PARAMETERS_HXX
#define SIM_TEMPLATE_SIMULATION_PARAMETERS_HXX

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
      class SimTemplateSimulationParameters;
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
      class SimTemplateSimulationParameters: public ::schema::simxml::SimModelCore::SimTemplate
      {
        public:
        // TemplateGeneralSimParams
        //
        typedef ::xml_schema::idref TemplateGeneralSimParams_type;
        typedef ::xsd::cxx::tree::optional< TemplateGeneralSimParams_type > TemplateGeneralSimParams_optional;
        typedef ::xsd::cxx::tree::traits< TemplateGeneralSimParams_type, char > TemplateGeneralSimParams_traits;

        const TemplateGeneralSimParams_optional&
        TemplateGeneralSimParams () const;

        TemplateGeneralSimParams_optional&
        TemplateGeneralSimParams ();

        void
        TemplateGeneralSimParams (const TemplateGeneralSimParams_type& x);

        void
        TemplateGeneralSimParams (const TemplateGeneralSimParams_optional& x);

        void
        TemplateGeneralSimParams (::std::auto_ptr< TemplateGeneralSimParams_type > p);

        // TemplateRunPeriod
        //
        typedef ::xml_schema::idref TemplateRunPeriod_type;
        typedef ::xsd::cxx::tree::optional< TemplateRunPeriod_type > TemplateRunPeriod_optional;
        typedef ::xsd::cxx::tree::traits< TemplateRunPeriod_type, char > TemplateRunPeriod_traits;

        const TemplateRunPeriod_optional&
        TemplateRunPeriod () const;

        TemplateRunPeriod_optional&
        TemplateRunPeriod ();

        void
        TemplateRunPeriod (const TemplateRunPeriod_type& x);

        void
        TemplateRunPeriod (const TemplateRunPeriod_optional& x);

        void
        TemplateRunPeriod (::std::auto_ptr< TemplateRunPeriod_type > p);

        // TemplateSpecialDays
        //
        typedef ::xml_schema::idref TemplateSpecialDays_type;
        typedef ::xsd::cxx::tree::optional< TemplateSpecialDays_type > TemplateSpecialDays_optional;
        typedef ::xsd::cxx::tree::traits< TemplateSpecialDays_type, char > TemplateSpecialDays_traits;

        const TemplateSpecialDays_optional&
        TemplateSpecialDays () const;

        TemplateSpecialDays_optional&
        TemplateSpecialDays ();

        void
        TemplateSpecialDays (const TemplateSpecialDays_type& x);

        void
        TemplateSpecialDays (const TemplateSpecialDays_optional& x);

        void
        TemplateSpecialDays (::std::auto_ptr< TemplateSpecialDays_type > p);

        // TemplateDaylightSavings
        //
        typedef ::xml_schema::idref TemplateDaylightSavings_type;
        typedef ::xsd::cxx::tree::optional< TemplateDaylightSavings_type > TemplateDaylightSavings_optional;
        typedef ::xsd::cxx::tree::traits< TemplateDaylightSavings_type, char > TemplateDaylightSavings_traits;

        const TemplateDaylightSavings_optional&
        TemplateDaylightSavings () const;

        TemplateDaylightSavings_optional&
        TemplateDaylightSavings ();

        void
        TemplateDaylightSavings (const TemplateDaylightSavings_type& x);

        void
        TemplateDaylightSavings (const TemplateDaylightSavings_optional& x);

        void
        TemplateDaylightSavings (::std::auto_ptr< TemplateDaylightSavings_type > p);

        // SurfaceConvectionAlgorithmInside
        //
        typedef ::xml_schema::string SurfaceConvectionAlgorithmInside_type;
        typedef ::xsd::cxx::tree::optional< SurfaceConvectionAlgorithmInside_type > SurfaceConvectionAlgorithmInside_optional;
        typedef ::xsd::cxx::tree::traits< SurfaceConvectionAlgorithmInside_type, char > SurfaceConvectionAlgorithmInside_traits;

        const SurfaceConvectionAlgorithmInside_optional&
        SurfaceConvectionAlgorithmInside () const;

        SurfaceConvectionAlgorithmInside_optional&
        SurfaceConvectionAlgorithmInside ();

        void
        SurfaceConvectionAlgorithmInside (const SurfaceConvectionAlgorithmInside_type& x);

        void
        SurfaceConvectionAlgorithmInside (const SurfaceConvectionAlgorithmInside_optional& x);

        void
        SurfaceConvectionAlgorithmInside (::std::auto_ptr< SurfaceConvectionAlgorithmInside_type > p);

        // SurfaceConvectionAlgorithmOutside
        //
        typedef ::xml_schema::string SurfaceConvectionAlgorithmOutside_type;
        typedef ::xsd::cxx::tree::optional< SurfaceConvectionAlgorithmOutside_type > SurfaceConvectionAlgorithmOutside_optional;
        typedef ::xsd::cxx::tree::traits< SurfaceConvectionAlgorithmOutside_type, char > SurfaceConvectionAlgorithmOutside_traits;

        const SurfaceConvectionAlgorithmOutside_optional&
        SurfaceConvectionAlgorithmOutside () const;

        SurfaceConvectionAlgorithmOutside_optional&
        SurfaceConvectionAlgorithmOutside ();

        void
        SurfaceConvectionAlgorithmOutside (const SurfaceConvectionAlgorithmOutside_type& x);

        void
        SurfaceConvectionAlgorithmOutside (const SurfaceConvectionAlgorithmOutside_optional& x);

        void
        SurfaceConvectionAlgorithmOutside (::std::auto_ptr< SurfaceConvectionAlgorithmOutside_type > p);

        // TemplateHeatBalanceAlgorithm
        //
        typedef ::xml_schema::idref TemplateHeatBalanceAlgorithm_type;
        typedef ::xsd::cxx::tree::optional< TemplateHeatBalanceAlgorithm_type > TemplateHeatBalanceAlgorithm_optional;
        typedef ::xsd::cxx::tree::traits< TemplateHeatBalanceAlgorithm_type, char > TemplateHeatBalanceAlgorithm_traits;

        const TemplateHeatBalanceAlgorithm_optional&
        TemplateHeatBalanceAlgorithm () const;

        TemplateHeatBalanceAlgorithm_optional&
        TemplateHeatBalanceAlgorithm ();

        void
        TemplateHeatBalanceAlgorithm (const TemplateHeatBalanceAlgorithm_type& x);

        void
        TemplateHeatBalanceAlgorithm (const TemplateHeatBalanceAlgorithm_optional& x);

        void
        TemplateHeatBalanceAlgorithm (::std::auto_ptr< TemplateHeatBalanceAlgorithm_type > p);

        // TemplateZoneAirHeatBalAlgorithm
        //
        typedef ::xml_schema::idref TemplateZoneAirHeatBalAlgorithm_type;
        typedef ::xsd::cxx::tree::optional< TemplateZoneAirHeatBalAlgorithm_type > TemplateZoneAirHeatBalAlgorithm_optional;
        typedef ::xsd::cxx::tree::traits< TemplateZoneAirHeatBalAlgorithm_type, char > TemplateZoneAirHeatBalAlgorithm_traits;

        const TemplateZoneAirHeatBalAlgorithm_optional&
        TemplateZoneAirHeatBalAlgorithm () const;

        TemplateZoneAirHeatBalAlgorithm_optional&
        TemplateZoneAirHeatBalAlgorithm ();

        void
        TemplateZoneAirHeatBalAlgorithm (const TemplateZoneAirHeatBalAlgorithm_type& x);

        void
        TemplateZoneAirHeatBalAlgorithm (const TemplateZoneAirHeatBalAlgorithm_optional& x);

        void
        TemplateZoneAirHeatBalAlgorithm (::std::auto_ptr< TemplateZoneAirHeatBalAlgorithm_type > p);

        // TemplateGroundHeatTransfer
        //
        typedef ::xml_schema::idref TemplateGroundHeatTransfer_type;
        typedef ::xsd::cxx::tree::optional< TemplateGroundHeatTransfer_type > TemplateGroundHeatTransfer_optional;
        typedef ::xsd::cxx::tree::traits< TemplateGroundHeatTransfer_type, char > TemplateGroundHeatTransfer_traits;

        const TemplateGroundHeatTransfer_optional&
        TemplateGroundHeatTransfer () const;

        TemplateGroundHeatTransfer_optional&
        TemplateGroundHeatTransfer ();

        void
        TemplateGroundHeatTransfer (const TemplateGroundHeatTransfer_type& x);

        void
        TemplateGroundHeatTransfer (const TemplateGroundHeatTransfer_optional& x);

        void
        TemplateGroundHeatTransfer (::std::auto_ptr< TemplateGroundHeatTransfer_type > p);

        // TemplateSurfaceTypeConvCoeff
        //
        typedef ::xml_schema::idref TemplateSurfaceTypeConvCoeff_type;
        typedef ::xsd::cxx::tree::optional< TemplateSurfaceTypeConvCoeff_type > TemplateSurfaceTypeConvCoeff_optional;
        typedef ::xsd::cxx::tree::traits< TemplateSurfaceTypeConvCoeff_type, char > TemplateSurfaceTypeConvCoeff_traits;

        const TemplateSurfaceTypeConvCoeff_optional&
        TemplateSurfaceTypeConvCoeff () const;

        TemplateSurfaceTypeConvCoeff_optional&
        TemplateSurfaceTypeConvCoeff ();

        void
        TemplateSurfaceTypeConvCoeff (const TemplateSurfaceTypeConvCoeff_type& x);

        void
        TemplateSurfaceTypeConvCoeff (const TemplateSurfaceTypeConvCoeff_optional& x);

        void
        TemplateSurfaceTypeConvCoeff (::std::auto_ptr< TemplateSurfaceTypeConvCoeff_type > p);

        // TemplateParametricSetValue
        //
        typedef ::xml_schema::idref TemplateParametricSetValue_type;
        typedef ::xsd::cxx::tree::optional< TemplateParametricSetValue_type > TemplateParametricSetValue_optional;
        typedef ::xsd::cxx::tree::traits< TemplateParametricSetValue_type, char > TemplateParametricSetValue_traits;

        const TemplateParametricSetValue_optional&
        TemplateParametricSetValue () const;

        TemplateParametricSetValue_optional&
        TemplateParametricSetValue ();

        void
        TemplateParametricSetValue (const TemplateParametricSetValue_type& x);

        void
        TemplateParametricSetValue (const TemplateParametricSetValue_optional& x);

        void
        TemplateParametricSetValue (::std::auto_ptr< TemplateParametricSetValue_type > p);

        // TemplateParametricLogic
        //
        typedef ::xml_schema::idref TemplateParametricLogic_type;
        typedef ::xsd::cxx::tree::optional< TemplateParametricLogic_type > TemplateParametricLogic_optional;
        typedef ::xsd::cxx::tree::traits< TemplateParametricLogic_type, char > TemplateParametricLogic_traits;

        const TemplateParametricLogic_optional&
        TemplateParametricLogic () const;

        TemplateParametricLogic_optional&
        TemplateParametricLogic ();

        void
        TemplateParametricLogic (const TemplateParametricLogic_type& x);

        void
        TemplateParametricLogic (const TemplateParametricLogic_optional& x);

        void
        TemplateParametricLogic (::std::auto_ptr< TemplateParametricLogic_type > p);

        // TemplateParametricPerformRun
        //
        typedef ::xml_schema::idref TemplateParametricPerformRun_type;
        typedef ::xsd::cxx::tree::optional< TemplateParametricPerformRun_type > TemplateParametricPerformRun_optional;
        typedef ::xsd::cxx::tree::traits< TemplateParametricPerformRun_type, char > TemplateParametricPerformRun_traits;

        const TemplateParametricPerformRun_optional&
        TemplateParametricPerformRun () const;

        TemplateParametricPerformRun_optional&
        TemplateParametricPerformRun ();

        void
        TemplateParametricPerformRun (const TemplateParametricPerformRun_type& x);

        void
        TemplateParametricPerformRun (const TemplateParametricPerformRun_optional& x);

        void
        TemplateParametricPerformRun (::std::auto_ptr< TemplateParametricPerformRun_type > p);

        // TemplateParametricFileNameSuffix
        //
        typedef ::xml_schema::idref TemplateParametricFileNameSuffix_type;
        typedef ::xsd::cxx::tree::optional< TemplateParametricFileNameSuffix_type > TemplateParametricFileNameSuffix_optional;
        typedef ::xsd::cxx::tree::traits< TemplateParametricFileNameSuffix_type, char > TemplateParametricFileNameSuffix_traits;

        const TemplateParametricFileNameSuffix_optional&
        TemplateParametricFileNameSuffix () const;

        TemplateParametricFileNameSuffix_optional&
        TemplateParametricFileNameSuffix ();

        void
        TemplateParametricFileNameSuffix (const TemplateParametricFileNameSuffix_type& x);

        void
        TemplateParametricFileNameSuffix (const TemplateParametricFileNameSuffix_optional& x);

        void
        TemplateParametricFileNameSuffix (::std::auto_ptr< TemplateParametricFileNameSuffix_type > p);

        // TemplateGlobalSizingParams
        //
        typedef ::xml_schema::idref TemplateGlobalSizingParams_type;
        typedef ::xsd::cxx::tree::optional< TemplateGlobalSizingParams_type > TemplateGlobalSizingParams_optional;
        typedef ::xsd::cxx::tree::traits< TemplateGlobalSizingParams_type, char > TemplateGlobalSizingParams_traits;

        const TemplateGlobalSizingParams_optional&
        TemplateGlobalSizingParams () const;

        TemplateGlobalSizingParams_optional&
        TemplateGlobalSizingParams ();

        void
        TemplateGlobalSizingParams (const TemplateGlobalSizingParams_type& x);

        void
        TemplateGlobalSizingParams (const TemplateGlobalSizingParams_optional& x);

        void
        TemplateGlobalSizingParams (::std::auto_ptr< TemplateGlobalSizingParams_type > p);

        // Constructors.
        //
        SimTemplateSimulationParameters ();

        SimTemplateSimulationParameters (const RefId_type&);

        SimTemplateSimulationParameters (const ::xercesc::DOMElement& e,
                                         ::xml_schema::flags f = 0,
                                         ::xml_schema::container* c = 0);

        SimTemplateSimulationParameters (const SimTemplateSimulationParameters& x,
                                         ::xml_schema::flags f = 0,
                                         ::xml_schema::container* c = 0);

        virtual SimTemplateSimulationParameters*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimTemplateSimulationParameters&
        operator= (const SimTemplateSimulationParameters& x);

        virtual 
        ~SimTemplateSimulationParameters ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        TemplateGeneralSimParams_optional TemplateGeneralSimParams_;
        TemplateRunPeriod_optional TemplateRunPeriod_;
        TemplateSpecialDays_optional TemplateSpecialDays_;
        TemplateDaylightSavings_optional TemplateDaylightSavings_;
        SurfaceConvectionAlgorithmInside_optional SurfaceConvectionAlgorithmInside_;
        SurfaceConvectionAlgorithmOutside_optional SurfaceConvectionAlgorithmOutside_;
        TemplateHeatBalanceAlgorithm_optional TemplateHeatBalanceAlgorithm_;
        TemplateZoneAirHeatBalAlgorithm_optional TemplateZoneAirHeatBalAlgorithm_;
        TemplateGroundHeatTransfer_optional TemplateGroundHeatTransfer_;
        TemplateSurfaceTypeConvCoeff_optional TemplateSurfaceTypeConvCoeff_;
        TemplateParametricSetValue_optional TemplateParametricSetValue_;
        TemplateParametricLogic_optional TemplateParametricLogic_;
        TemplateParametricPerformRun_optional TemplateParametricPerformRun_;
        TemplateParametricFileNameSuffix_optional TemplateParametricFileNameSuffix_;
        TemplateGlobalSizingParams_optional TemplateGlobalSizingParams_;
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

#endif // SIM_TEMPLATE_SIMULATION_PARAMETERS_HXX
