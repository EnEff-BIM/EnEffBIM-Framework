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

#ifndef SIM_SYSTEM_AIR_FLOW_NETWORK_HXX
#define SIM_SYSTEM_AIR_FLOW_NETWORK_HXX

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
      class SimSystem_AirFlowNetwork;
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

#include "simsystem.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSystem_AirFlowNetwork: public ::namespaces::Sim::BuildingModel::SimSystem
      {
        public:
        // SimSys_AirflowNetCont
        //
        typedef ::xml_schema::string SimSys_AirflowNetCont_type;
        typedef ::xsd::cxx::tree::optional< SimSys_AirflowNetCont_type > SimSys_AirflowNetCont_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_AirflowNetCont_type, char > SimSys_AirflowNetCont_traits;

        const SimSys_AirflowNetCont_optional&
        SimSys_AirflowNetCont () const;

        SimSys_AirflowNetCont_optional&
        SimSys_AirflowNetCont ();

        void
        SimSys_AirflowNetCont (const SimSys_AirflowNetCont_type& x);

        void
        SimSys_AirflowNetCont (const SimSys_AirflowNetCont_optional& x);

        void
        SimSys_AirflowNetCont (::std::auto_ptr< SimSys_AirflowNetCont_type > p);

        // SimSys_WindPresCoeffType
        //
        typedef ::xml_schema::string SimSys_WindPresCoeffType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_WindPresCoeffType_type > SimSys_WindPresCoeffType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_WindPresCoeffType_type, char > SimSys_WindPresCoeffType_traits;

        const SimSys_WindPresCoeffType_optional&
        SimSys_WindPresCoeffType () const;

        SimSys_WindPresCoeffType_optional&
        SimSys_WindPresCoeffType ();

        void
        SimSys_WindPresCoeffType (const SimSys_WindPresCoeffType_type& x);

        void
        SimSys_WindPresCoeffType (const SimSys_WindPresCoeffType_optional& x);

        void
        SimSys_WindPresCoeffType (::std::auto_ptr< SimSys_WindPresCoeffType_type > p);

        // SimSys_AirflowNetWindPresCoeffArrayName
        //
        typedef ::xml_schema::idref SimSys_AirflowNetWindPresCoeffArrayName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_AirflowNetWindPresCoeffArrayName_type > SimSys_AirflowNetWindPresCoeffArrayName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_AirflowNetWindPresCoeffArrayName_type, char > SimSys_AirflowNetWindPresCoeffArrayName_traits;

        const SimSys_AirflowNetWindPresCoeffArrayName_optional&
        SimSys_AirflowNetWindPresCoeffArrayName () const;

        SimSys_AirflowNetWindPresCoeffArrayName_optional&
        SimSys_AirflowNetWindPresCoeffArrayName ();

        void
        SimSys_AirflowNetWindPresCoeffArrayName (const SimSys_AirflowNetWindPresCoeffArrayName_type& x);

        void
        SimSys_AirflowNetWindPresCoeffArrayName (const SimSys_AirflowNetWindPresCoeffArrayName_optional& x);

        void
        SimSys_AirflowNetWindPresCoeffArrayName (::std::auto_ptr< SimSys_AirflowNetWindPresCoeffArrayName_type > p);

        // SimSys_HtSelectLocalWindSpdCalc
        //
        typedef ::xml_schema::string SimSys_HtSelectLocalWindSpdCalc_type;
        typedef ::xsd::cxx::tree::optional< SimSys_HtSelectLocalWindSpdCalc_type > SimSys_HtSelectLocalWindSpdCalc_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_HtSelectLocalWindSpdCalc_type, char > SimSys_HtSelectLocalWindSpdCalc_traits;

        const SimSys_HtSelectLocalWindSpdCalc_optional&
        SimSys_HtSelectLocalWindSpdCalc () const;

        SimSys_HtSelectLocalWindSpdCalc_optional&
        SimSys_HtSelectLocalWindSpdCalc ();

        void
        SimSys_HtSelectLocalWindSpdCalc (const SimSys_HtSelectLocalWindSpdCalc_type& x);

        void
        SimSys_HtSelectLocalWindSpdCalc (const SimSys_HtSelectLocalWindSpdCalc_optional& x);

        void
        SimSys_HtSelectLocalWindSpdCalc (::std::auto_ptr< SimSys_HtSelectLocalWindSpdCalc_type > p);

        // SimSys_BldgType
        //
        typedef ::xml_schema::string SimSys_BldgType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_BldgType_type > SimSys_BldgType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_BldgType_type, char > SimSys_BldgType_traits;

        const SimSys_BldgType_optional&
        SimSys_BldgType () const;

        SimSys_BldgType_optional&
        SimSys_BldgType ();

        void
        SimSys_BldgType (const SimSys_BldgType_type& x);

        void
        SimSys_BldgType (const SimSys_BldgType_optional& x);

        void
        SimSys_BldgType (::std::auto_ptr< SimSys_BldgType_type > p);

        // SimSys_MaxNumbIterations
        //
        typedef ::xml_schema::int_ SimSys_MaxNumbIterations_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MaxNumbIterations_type > SimSys_MaxNumbIterations_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MaxNumbIterations_type, char > SimSys_MaxNumbIterations_traits;

        const SimSys_MaxNumbIterations_optional&
        SimSys_MaxNumbIterations () const;

        SimSys_MaxNumbIterations_optional&
        SimSys_MaxNumbIterations ();

        void
        SimSys_MaxNumbIterations (const SimSys_MaxNumbIterations_type& x);

        void
        SimSys_MaxNumbIterations (const SimSys_MaxNumbIterations_optional& x);

        // SimSys_InitType
        //
        typedef ::xml_schema::string SimSys_InitType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_InitType_type > SimSys_InitType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_InitType_type, char > SimSys_InitType_traits;

        const SimSys_InitType_optional&
        SimSys_InitType () const;

        SimSys_InitType_optional&
        SimSys_InitType ();

        void
        SimSys_InitType (const SimSys_InitType_type& x);

        void
        SimSys_InitType (const SimSys_InitType_optional& x);

        void
        SimSys_InitType (::std::auto_ptr< SimSys_InitType_type > p);

        // SimSys_RelAirflowConvergTol
        //
        typedef ::xml_schema::double_ SimSys_RelAirflowConvergTol_type;
        typedef ::xsd::cxx::tree::optional< SimSys_RelAirflowConvergTol_type > SimSys_RelAirflowConvergTol_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_RelAirflowConvergTol_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_RelAirflowConvergTol_traits;

        const SimSys_RelAirflowConvergTol_optional&
        SimSys_RelAirflowConvergTol () const;

        SimSys_RelAirflowConvergTol_optional&
        SimSys_RelAirflowConvergTol ();

        void
        SimSys_RelAirflowConvergTol (const SimSys_RelAirflowConvergTol_type& x);

        void
        SimSys_RelAirflowConvergTol (const SimSys_RelAirflowConvergTol_optional& x);

        // SimSys_AbsAirflwConveTol
        //
        typedef ::xml_schema::double_ SimSys_AbsAirflwConveTol_type;
        typedef ::xsd::cxx::tree::optional< SimSys_AbsAirflwConveTol_type > SimSys_AbsAirflwConveTol_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_AbsAirflwConveTol_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_AbsAirflwConveTol_traits;

        const SimSys_AbsAirflwConveTol_optional&
        SimSys_AbsAirflwConveTol () const;

        SimSys_AbsAirflwConveTol_optional&
        SimSys_AbsAirflwConveTol ();

        void
        SimSys_AbsAirflwConveTol (const SimSys_AbsAirflwConveTol_type& x);

        void
        SimSys_AbsAirflwConveTol (const SimSys_AbsAirflwConveTol_optional& x);

        // SimSys_ConvergAccelLimit
        //
        typedef ::xml_schema::double_ SimSys_ConvergAccelLimit_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ConvergAccelLimit_type > SimSys_ConvergAccelLimit_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ConvergAccelLimit_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_ConvergAccelLimit_traits;

        const SimSys_ConvergAccelLimit_optional&
        SimSys_ConvergAccelLimit () const;

        SimSys_ConvergAccelLimit_optional&
        SimSys_ConvergAccelLimit ();

        void
        SimSys_ConvergAccelLimit (const SimSys_ConvergAccelLimit_type& x);

        void
        SimSys_ConvergAccelLimit (const SimSys_ConvergAccelLimit_optional& x);

        // SimSys_AzimuthAngLongAxisBldg
        //
        typedef ::xml_schema::double_ SimSys_AzimuthAngLongAxisBldg_type;
        typedef ::xsd::cxx::tree::optional< SimSys_AzimuthAngLongAxisBldg_type > SimSys_AzimuthAngLongAxisBldg_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_AzimuthAngLongAxisBldg_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_AzimuthAngLongAxisBldg_traits;

        const SimSys_AzimuthAngLongAxisBldg_optional&
        SimSys_AzimuthAngLongAxisBldg () const;

        SimSys_AzimuthAngLongAxisBldg_optional&
        SimSys_AzimuthAngLongAxisBldg ();

        void
        SimSys_AzimuthAngLongAxisBldg (const SimSys_AzimuthAngLongAxisBldg_type& x);

        void
        SimSys_AzimuthAngLongAxisBldg (const SimSys_AzimuthAngLongAxisBldg_optional& x);

        // SimSys_RatioBldgWidthShortToLongAxis
        //
        typedef ::xml_schema::double_ SimSys_RatioBldgWidthShortToLongAxis_type;
        typedef ::xsd::cxx::tree::optional< SimSys_RatioBldgWidthShortToLongAxis_type > SimSys_RatioBldgWidthShortToLongAxis_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_RatioBldgWidthShortToLongAxis_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_RatioBldgWidthShortToLongAxis_traits;

        const SimSys_RatioBldgWidthShortToLongAxis_optional&
        SimSys_RatioBldgWidthShortToLongAxis () const;

        SimSys_RatioBldgWidthShortToLongAxis_optional&
        SimSys_RatioBldgWidthShortToLongAxis ();

        void
        SimSys_RatioBldgWidthShortToLongAxis (const SimSys_RatioBldgWidthShortToLongAxis_type& x);

        void
        SimSys_RatioBldgWidthShortToLongAxis (const SimSys_RatioBldgWidthShortToLongAxis_optional& x);

        // Constructors.
        //
        SimSystem_AirFlowNetwork (const RefId_type&);

        SimSystem_AirFlowNetwork (const ::xercesc::DOMElement& e,
                                  ::xml_schema::flags f = 0,
                                  ::xml_schema::container* c = 0);

        SimSystem_AirFlowNetwork (const SimSystem_AirFlowNetwork& x,
                                  ::xml_schema::flags f = 0,
                                  ::xml_schema::container* c = 0);

        virtual SimSystem_AirFlowNetwork*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSystem_AirFlowNetwork&
        operator= (const SimSystem_AirFlowNetwork& x);

        virtual 
        ~SimSystem_AirFlowNetwork ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSys_AirflowNetCont_optional SimSys_AirflowNetCont_;
        SimSys_WindPresCoeffType_optional SimSys_WindPresCoeffType_;
        SimSys_AirflowNetWindPresCoeffArrayName_optional SimSys_AirflowNetWindPresCoeffArrayName_;
        SimSys_HtSelectLocalWindSpdCalc_optional SimSys_HtSelectLocalWindSpdCalc_;
        SimSys_BldgType_optional SimSys_BldgType_;
        SimSys_MaxNumbIterations_optional SimSys_MaxNumbIterations_;
        SimSys_InitType_optional SimSys_InitType_;
        SimSys_RelAirflowConvergTol_optional SimSys_RelAirflowConvergTol_;
        SimSys_AbsAirflwConveTol_optional SimSys_AbsAirflwConveTol_;
        SimSys_ConvergAccelLimit_optional SimSys_ConvergAccelLimit_;
        SimSys_AzimuthAngLongAxisBldg_optional SimSys_AzimuthAngLongAxisBldg_;
        SimSys_RatioBldgWidthShortToLongAxis_optional SimSys_RatioBldgWidthShortToLongAxis_;
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

#endif // SIM_SYSTEM_AIR_FLOW_NETWORK_HXX
