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

#ifndef SIM_WALL_PARAMS_HXX
#define SIM_WALL_PARAMS_HXX

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
    namespace ResourcesGeneral
    {
      class SimWallParams;
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

#include "simbldgmodelparams.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class __declspec(dllexport) SimWallParams: public ::schema::simxml::SimModelCore::SimBldgModelParams
      {
        public:
        // Thickness
        //
        typedef ::xml_schema::double_ Thickness_type;
        typedef ::xsd::cxx::tree::optional< Thickness_type, true > Thickness_optional;
        typedef ::xsd::cxx::tree::traits< Thickness_type, char, ::xsd::cxx::tree::schema_type::double_ > Thickness_traits;

        const Thickness_optional&
        Thickness () const;

        Thickness_optional&
        Thickness ();

        void
        Thickness (const Thickness_type& x);

        void
        Thickness (const Thickness_optional& x);

        // Length
        //
        typedef ::xml_schema::double_ Length_type;
        typedef ::xsd::cxx::tree::optional< Length_type, true > Length_optional;
        typedef ::xsd::cxx::tree::traits< Length_type, char, ::xsd::cxx::tree::schema_type::double_ > Length_traits;

        const Length_optional&
        Length () const;

        Length_optional&
        Length ();

        void
        Length (const Length_type& x);

        void
        Length (const Length_optional& x);

        // Height
        //
        typedef ::xml_schema::double_ Height_type;
        typedef ::xsd::cxx::tree::optional< Height_type, true > Height_optional;
        typedef ::xsd::cxx::tree::traits< Height_type, char, ::xsd::cxx::tree::schema_type::double_ > Height_traits;

        const Height_optional&
        Height () const;

        Height_optional&
        Height ();

        void
        Height (const Height_type& x);

        void
        Height (const Height_optional& x);

        // BaseElevation
        //
        typedef ::xml_schema::double_ BaseElevation_type;
        typedef ::xsd::cxx::tree::optional< BaseElevation_type, true > BaseElevation_optional;
        typedef ::xsd::cxx::tree::traits< BaseElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > BaseElevation_traits;

        const BaseElevation_optional&
        BaseElevation () const;

        BaseElevation_optional&
        BaseElevation ();

        void
        BaseElevation (const BaseElevation_type& x);

        void
        BaseElevation (const BaseElevation_optional& x);

        // RefLinePosition
        //
        typedef ::xml_schema::string RefLinePosition_type;
        typedef ::xsd::cxx::tree::optional< RefLinePosition_type, false > RefLinePosition_optional;
        typedef ::xsd::cxx::tree::traits< RefLinePosition_type, char > RefLinePosition_traits;

        const RefLinePosition_optional&
        RefLinePosition () const;

        RefLinePosition_optional&
        RefLinePosition ();

        void
        RefLinePosition (const RefLinePosition_type& x);

        void
        RefLinePosition (const RefLinePosition_optional& x);

        void
        RefLinePosition (::std::auto_ptr< RefLinePosition_type > p);

        // RefLinePath
        //
        typedef ::xml_schema::idref RefLinePath_type;
        typedef ::xsd::cxx::tree::optional< RefLinePath_type, false > RefLinePath_optional;
        typedef ::xsd::cxx::tree::traits< RefLinePath_type, char > RefLinePath_traits;

        const RefLinePath_optional&
        RefLinePath () const;

        RefLinePath_optional&
        RefLinePath ();

        void
        RefLinePath (const RefLinePath_type& x);

        void
        RefLinePath (const RefLinePath_optional& x);

        void
        RefLinePath (::std::auto_ptr< RefLinePath_type > p);

        // DegreeOfNormal
        //
        typedef ::xml_schema::double_ DegreeOfNormal_type;
        typedef ::xsd::cxx::tree::optional< DegreeOfNormal_type, true > DegreeOfNormal_optional;
        typedef ::xsd::cxx::tree::traits< DegreeOfNormal_type, char, ::xsd::cxx::tree::schema_type::double_ > DegreeOfNormal_traits;

        const DegreeOfNormal_optional&
        DegreeOfNormal () const;

        DegreeOfNormal_optional&
        DegreeOfNormal ();

        void
        DegreeOfNormal (const DegreeOfNormal_type& x);

        void
        DegreeOfNormal (const DegreeOfNormal_optional& x);

        // CompassNsewDirection
        //
        typedef ::xml_schema::string CompassNsewDirection_type;
        typedef ::xsd::cxx::tree::optional< CompassNsewDirection_type, false > CompassNsewDirection_optional;
        typedef ::xsd::cxx::tree::traits< CompassNsewDirection_type, char > CompassNsewDirection_traits;

        const CompassNsewDirection_optional&
        CompassNsewDirection () const;

        CompassNsewDirection_optional&
        CompassNsewDirection ();

        void
        CompassNsewDirection (const CompassNsewDirection_type& x);

        void
        CompassNsewDirection (const CompassNsewDirection_optional& x);

        void
        CompassNsewDirection (::std::auto_ptr< CompassNsewDirection_type > p);

        // WallIsExternal
        //
        typedef ::xml_schema::boolean WallIsExternal_type;
        typedef ::xsd::cxx::tree::optional< WallIsExternal_type > WallIsExternal_optional;
        typedef ::xsd::cxx::tree::traits< WallIsExternal_type, char > WallIsExternal_traits;

        const WallIsExternal_optional&
        WallIsExternal () const;

        WallIsExternal_optional&
        WallIsExternal ();

        void
        WallIsExternal (const WallIsExternal_type& x);

        void
        WallIsExternal (const WallIsExternal_optional& x);

        // Justify
        //
        typedef ::xml_schema::int_ Justify_type;
        typedef ::xsd::cxx::tree::optional< Justify_type, true > Justify_optional;
        typedef ::xsd::cxx::tree::traits< Justify_type, char > Justify_traits;

        const Justify_optional&
        Justify () const;

        Justify_optional&
        Justify ();

        void
        Justify (const Justify_type& x);

        void
        Justify (const Justify_optional& x);

        // ContainedWinArrayParams
        //
        typedef ::xml_schema::idrefs ContainedWinArrayParams_type;
        typedef ::xsd::cxx::tree::optional< ContainedWinArrayParams_type > ContainedWinArrayParams_optional;
        typedef ::xsd::cxx::tree::traits< ContainedWinArrayParams_type, char > ContainedWinArrayParams_traits;

        const ContainedWinArrayParams_optional&
        ContainedWinArrayParams () const;

        ContainedWinArrayParams_optional&
        ContainedWinArrayParams ();

        void
        ContainedWinArrayParams (const ContainedWinArrayParams_type& x);

        void
        ContainedWinArrayParams (const ContainedWinArrayParams_optional& x);

        void
        ContainedWinArrayParams (::std::auto_ptr< ContainedWinArrayParams_type > p);

        // ContainedWindowParams
        //
        typedef ::xml_schema::idrefs ContainedWindowParams_type;
        typedef ::xsd::cxx::tree::optional< ContainedWindowParams_type > ContainedWindowParams_optional;
        typedef ::xsd::cxx::tree::traits< ContainedWindowParams_type, char > ContainedWindowParams_traits;

        const ContainedWindowParams_optional&
        ContainedWindowParams () const;

        ContainedWindowParams_optional&
        ContainedWindowParams ();

        void
        ContainedWindowParams (const ContainedWindowParams_type& x);

        void
        ContainedWindowParams (const ContainedWindowParams_optional& x);

        void
        ContainedWindowParams (::std::auto_ptr< ContainedWindowParams_type > p);

        // ContainedDoorArrayParams
        //
        typedef ::xml_schema::idrefs ContainedDoorArrayParams_type;
        typedef ::xsd::cxx::tree::optional< ContainedDoorArrayParams_type > ContainedDoorArrayParams_optional;
        typedef ::xsd::cxx::tree::traits< ContainedDoorArrayParams_type, char > ContainedDoorArrayParams_traits;

        const ContainedDoorArrayParams_optional&
        ContainedDoorArrayParams () const;

        ContainedDoorArrayParams_optional&
        ContainedDoorArrayParams ();

        void
        ContainedDoorArrayParams (const ContainedDoorArrayParams_type& x);

        void
        ContainedDoorArrayParams (const ContainedDoorArrayParams_optional& x);

        void
        ContainedDoorArrayParams (::std::auto_ptr< ContainedDoorArrayParams_type > p);

        // ContainedDoorParams
        //
        typedef ::xml_schema::idrefs ContainedDoorParams_type;
        typedef ::xsd::cxx::tree::optional< ContainedDoorParams_type > ContainedDoorParams_optional;
        typedef ::xsd::cxx::tree::traits< ContainedDoorParams_type, char > ContainedDoorParams_traits;

        const ContainedDoorParams_optional&
        ContainedDoorParams () const;

        ContainedDoorParams_optional&
        ContainedDoorParams ();

        void
        ContainedDoorParams (const ContainedDoorParams_type& x);

        void
        ContainedDoorParams (const ContainedDoorParams_optional& x);

        void
        ContainedDoorParams (::std::auto_ptr< ContainedDoorParams_type > p);

        // ProfilePath
        //
        typedef ::xml_schema::idref ProfilePath_type;
        typedef ::xsd::cxx::tree::optional< ProfilePath_type, false > ProfilePath_optional;
        typedef ::xsd::cxx::tree::traits< ProfilePath_type, char > ProfilePath_traits;

        const ProfilePath_optional&
        ProfilePath () const;

        ProfilePath_optional&
        ProfilePath ();

        void
        ProfilePath (const ProfilePath_type& x);

        void
        ProfilePath (const ProfilePath_optional& x);

        void
        ProfilePath (::std::auto_ptr< ProfilePath_type > p);

        // Constructors.
        //
        SimWallParams ();

        SimWallParams (const RefId_type&);

        SimWallParams (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

        SimWallParams (const SimWallParams& x,
                       ::xml_schema::flags f = 0,
                       ::xml_schema::container* c = 0);

        virtual SimWallParams*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimWallParams&
        operator= (const SimWallParams& x);

        virtual 
        ~SimWallParams ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Thickness_optional Thickness_;
        Length_optional Length_;
        Height_optional Height_;
        BaseElevation_optional BaseElevation_;
        RefLinePosition_optional RefLinePosition_;
        RefLinePath_optional RefLinePath_;
        DegreeOfNormal_optional DegreeOfNormal_;
        CompassNsewDirection_optional CompassNsewDirection_;
        WallIsExternal_optional WallIsExternal_;
        Justify_optional Justify_;
        ContainedWinArrayParams_optional ContainedWinArrayParams_;
        ContainedWindowParams_optional ContainedWindowParams_;
        ContainedDoorArrayParams_optional ContainedDoorArrayParams_;
        ContainedDoorParams_optional ContainedDoorParams_;
        ProfilePath_optional ProfilePath_;
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

#endif // SIM_WALL_PARAMS_HXX
