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

#ifndef SIM_WINDOW_PARAMS_HXX
#define SIM_WINDOW_PARAMS_HXX

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
      class SimWindowParams;
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
      class SimWindowParams: public ::schema::simxml::SimModelCore::SimBldgModelParams
      {
        public:
        // WindowType
        //
        typedef ::xml_schema::idref WindowType_type;
        typedef ::xsd::cxx::tree::optional< WindowType_type, false > WindowType_optional;
        typedef ::xsd::cxx::tree::traits< WindowType_type, char > WindowType_traits;

        const WindowType_optional&
        WindowType () const;

        WindowType_optional&
        WindowType ();

        void
        WindowType (const WindowType_type& x);

        void
        WindowType (const WindowType_optional& x);

        void
        WindowType (::std::auto_ptr< WindowType_type > p);

        // TemplateLibEntryOrMLS
        //
        typedef ::xml_schema::idref TemplateLibEntryOrMLS_type;
        typedef ::xsd::cxx::tree::optional< TemplateLibEntryOrMLS_type, false > TemplateLibEntryOrMLS_optional;
        typedef ::xsd::cxx::tree::traits< TemplateLibEntryOrMLS_type, char > TemplateLibEntryOrMLS_traits;

        const TemplateLibEntryOrMLS_optional&
        TemplateLibEntryOrMLS () const;

        TemplateLibEntryOrMLS_optional&
        TemplateLibEntryOrMLS ();

        void
        TemplateLibEntryOrMLS (const TemplateLibEntryOrMLS_type& x);

        void
        TemplateLibEntryOrMLS (const TemplateLibEntryOrMLS_optional& x);

        void
        TemplateLibEntryOrMLS (::std::auto_ptr< TemplateLibEntryOrMLS_type > p);

        // WinTopElevation
        //
        typedef ::xml_schema::double_ WinTopElevation_type;
        typedef ::xsd::cxx::tree::optional< WinTopElevation_type, true > WinTopElevation_optional;
        typedef ::xsd::cxx::tree::traits< WinTopElevation_type, char, ::xsd::cxx::tree::schema_type::double_ > WinTopElevation_traits;

        const WinTopElevation_optional&
        WinTopElevation () const;

        WinTopElevation_optional&
        WinTopElevation ();

        void
        WinTopElevation (const WinTopElevation_type& x);

        void
        WinTopElevation (const WinTopElevation_optional& x);

        // WinHeight
        //
        typedef ::xml_schema::double_ WinHeight_type;
        typedef ::xsd::cxx::tree::optional< WinHeight_type, true > WinHeight_optional;
        typedef ::xsd::cxx::tree::traits< WinHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > WinHeight_traits;

        const WinHeight_optional&
        WinHeight () const;

        WinHeight_optional&
        WinHeight ();

        void
        WinHeight (const WinHeight_type& x);

        void
        WinHeight (const WinHeight_optional& x);

        // WinWidth
        //
        typedef ::xml_schema::double_ WinWidth_type;
        typedef ::xsd::cxx::tree::optional< WinWidth_type, true > WinWidth_optional;
        typedef ::xsd::cxx::tree::traits< WinWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > WinWidth_traits;

        const WinWidth_optional&
        WinWidth () const;

        WinWidth_optional&
        WinWidth ();

        void
        WinWidth (const WinWidth_type& x);

        void
        WinWidth (const WinWidth_optional& x);

        // GlassThickness
        //
        typedef ::xml_schema::double_ GlassThickness_type;
        typedef ::xsd::cxx::tree::optional< GlassThickness_type, true > GlassThickness_optional;
        typedef ::xsd::cxx::tree::traits< GlassThickness_type, char, ::xsd::cxx::tree::schema_type::double_ > GlassThickness_traits;

        const GlassThickness_optional&
        GlassThickness () const;

        GlassThickness_optional&
        GlassThickness ();

        void
        GlassThickness (const GlassThickness_type& x);

        void
        GlassThickness (const GlassThickness_optional& x);

        // FrameThickness
        //
        typedef ::xml_schema::double_ FrameThickness_type;
        typedef ::xsd::cxx::tree::optional< FrameThickness_type, true > FrameThickness_optional;
        typedef ::xsd::cxx::tree::traits< FrameThickness_type, char, ::xsd::cxx::tree::schema_type::double_ > FrameThickness_traits;

        const FrameThickness_optional&
        FrameThickness () const;

        FrameThickness_optional&
        FrameThickness ();

        void
        FrameThickness (const FrameThickness_type& x);

        void
        FrameThickness (const FrameThickness_optional& x);

        // FrameDepth
        //
        typedef ::xml_schema::double_ FrameDepth_type;
        typedef ::xsd::cxx::tree::optional< FrameDepth_type, true > FrameDepth_optional;
        typedef ::xsd::cxx::tree::traits< FrameDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > FrameDepth_traits;

        const FrameDepth_optional&
        FrameDepth () const;

        FrameDepth_optional&
        FrameDepth ();

        void
        FrameDepth (const FrameDepth_type& x);

        void
        FrameDepth (const FrameDepth_optional& x);

        // WinPanelProfiles
        //
        typedef ::xml_schema::idrefs WinPanelProfiles_type;
        typedef ::xsd::cxx::tree::optional< WinPanelProfiles_type > WinPanelProfiles_optional;
        typedef ::xsd::cxx::tree::traits< WinPanelProfiles_type, char > WinPanelProfiles_traits;

        const WinPanelProfiles_optional&
        WinPanelProfiles () const;

        WinPanelProfiles_optional&
        WinPanelProfiles ();

        void
        WinPanelProfiles (const WinPanelProfiles_type& x);

        void
        WinPanelProfiles (const WinPanelProfiles_optional& x);

        void
        WinPanelProfiles (::std::auto_ptr< WinPanelProfiles_type > p);

        // WinFrameProfiles
        //
        typedef ::xml_schema::idrefs WinFrameProfiles_type;
        typedef ::xsd::cxx::tree::optional< WinFrameProfiles_type > WinFrameProfiles_optional;
        typedef ::xsd::cxx::tree::traits< WinFrameProfiles_type, char > WinFrameProfiles_traits;

        const WinFrameProfiles_optional&
        WinFrameProfiles () const;

        WinFrameProfiles_optional&
        WinFrameProfiles ();

        void
        WinFrameProfiles (const WinFrameProfiles_type& x);

        void
        WinFrameProfiles (const WinFrameProfiles_optional& x);

        void
        WinFrameProfiles (::std::auto_ptr< WinFrameProfiles_type > p);

        // OpeningProfilePath
        //
        typedef ::xml_schema::idref OpeningProfilePath_type;
        typedef ::xsd::cxx::tree::optional< OpeningProfilePath_type, false > OpeningProfilePath_optional;
        typedef ::xsd::cxx::tree::traits< OpeningProfilePath_type, char > OpeningProfilePath_traits;

        const OpeningProfilePath_optional&
        OpeningProfilePath () const;

        OpeningProfilePath_optional&
        OpeningProfilePath ();

        void
        OpeningProfilePath (const OpeningProfilePath_type& x);

        void
        OpeningProfilePath (const OpeningProfilePath_optional& x);

        void
        OpeningProfilePath (::std::auto_ptr< OpeningProfilePath_type > p);

        // Constructors.
        //
        SimWindowParams ();

        SimWindowParams (const RefId_type&);

        SimWindowParams (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f = 0,
                         ::xml_schema::container* c = 0);

        SimWindowParams (const SimWindowParams& x,
                         ::xml_schema::flags f = 0,
                         ::xml_schema::container* c = 0);

        virtual SimWindowParams*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimWindowParams&
        operator= (const SimWindowParams& x);

        virtual 
        ~SimWindowParams ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        WindowType_optional WindowType_;
        TemplateLibEntryOrMLS_optional TemplateLibEntryOrMLS_;
        WinTopElevation_optional WinTopElevation_;
        WinHeight_optional WinHeight_;
        WinWidth_optional WinWidth_;
        GlassThickness_optional GlassThickness_;
        FrameThickness_optional FrameThickness_;
        FrameDepth_optional FrameDepth_;
        WinPanelProfiles_optional WinPanelProfiles_;
        WinFrameProfiles_optional WinFrameProfiles_;
        OpeningProfilePath_optional OpeningProfilePath_;
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

#endif // SIM_WINDOW_PARAMS_HXX
