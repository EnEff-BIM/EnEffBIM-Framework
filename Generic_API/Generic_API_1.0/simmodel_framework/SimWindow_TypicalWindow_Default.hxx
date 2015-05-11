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

#ifndef SIM_WINDOW_TYPICAL_WINDOW_DEFAULT_HXX
#define SIM_WINDOW_TYPICAL_WINDOW_DEFAULT_HXX

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
      class SimWindow_TypicalWindow_Default;
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

#include "simwindow_typicalwindow.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimWindow_TypicalWindow_Default: public ::namespaces::Sim::BuildingModel::SimWindow_TypicalWindow
      {
        public:
        // OverallHeight
        //
        typedef ::xml_schema::double_ OverallHeight_type;
        typedef ::xsd::cxx::tree::optional< OverallHeight_type > OverallHeight_optional;
        typedef ::xsd::cxx::tree::traits< OverallHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > OverallHeight_traits;

        const OverallHeight_optional&
        OverallHeight () const;

        OverallHeight_optional&
        OverallHeight ();

        void
        OverallHeight (const OverallHeight_type& x);

        void
        OverallHeight (const OverallHeight_optional& x);

        // OverallWidth
        //
        typedef ::xml_schema::double_ OverallWidth_type;
        typedef ::xsd::cxx::tree::optional< OverallWidth_type > OverallWidth_optional;
        typedef ::xsd::cxx::tree::traits< OverallWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > OverallWidth_traits;

        const OverallWidth_optional&
        OverallWidth () const;

        OverallWidth_optional&
        OverallWidth ();

        void
        OverallWidth (const OverallWidth_type& x);

        void
        OverallWidth (const OverallWidth_optional& x);

        // WindowTypeTag
        //
        typedef ::xml_schema::string WindowTypeTag_type;
        typedef ::xsd::cxx::tree::optional< WindowTypeTag_type > WindowTypeTag_optional;
        typedef ::xsd::cxx::tree::traits< WindowTypeTag_type, char > WindowTypeTag_traits;

        const WindowTypeTag_optional&
        WindowTypeTag () const;

        WindowTypeTag_optional&
        WindowTypeTag ();

        void
        WindowTypeTag (const WindowTypeTag_type& x);

        void
        WindowTypeTag (const WindowTypeTag_optional& x);

        void
        WindowTypeTag (::std::auto_ptr< WindowTypeTag_type > p);

        // WindowOperationType
        //
        typedef ::xml_schema::string WindowOperationType_type;
        typedef ::xsd::cxx::tree::optional< WindowOperationType_type > WindowOperationType_optional;
        typedef ::xsd::cxx::tree::traits< WindowOperationType_type, char > WindowOperationType_traits;

        const WindowOperationType_optional&
        WindowOperationType () const;

        WindowOperationType_optional&
        WindowOperationType ();

        void
        WindowOperationType (const WindowOperationType_type& x);

        void
        WindowOperationType (const WindowOperationType_optional& x);

        void
        WindowOperationType (::std::auto_ptr< WindowOperationType_type > p);

        // WindowConstructionType
        //
        typedef ::xml_schema::string WindowConstructionType_type;
        typedef ::xsd::cxx::tree::optional< WindowConstructionType_type > WindowConstructionType_optional;
        typedef ::xsd::cxx::tree::traits< WindowConstructionType_type, char > WindowConstructionType_traits;

        const WindowConstructionType_optional&
        WindowConstructionType () const;

        WindowConstructionType_optional&
        WindowConstructionType ();

        void
        WindowConstructionType (const WindowConstructionType_type& x);

        void
        WindowConstructionType (const WindowConstructionType_optional& x);

        void
        WindowConstructionType (::std::auto_ptr< WindowConstructionType_type > p);

        // WindowIsExternal
        //
        typedef ::xml_schema::boolean WindowIsExternal_type;
        typedef ::xsd::cxx::tree::optional< WindowIsExternal_type > WindowIsExternal_optional;
        typedef ::xsd::cxx::tree::traits< WindowIsExternal_type, char > WindowIsExternal_traits;

        const WindowIsExternal_optional&
        WindowIsExternal () const;

        WindowIsExternal_optional&
        WindowIsExternal ();

        void
        WindowIsExternal (const WindowIsExternal_type& x);

        void
        WindowIsExternal (const WindowIsExternal_optional& x);

        // CompositeThermalTransmittance
        //
        typedef ::xml_schema::double_ CompositeThermalTransmittance_type;
        typedef ::xsd::cxx::tree::optional< CompositeThermalTransmittance_type > CompositeThermalTransmittance_optional;
        typedef ::xsd::cxx::tree::traits< CompositeThermalTransmittance_type, char, ::xsd::cxx::tree::schema_type::double_ > CompositeThermalTransmittance_traits;

        const CompositeThermalTransmittance_optional&
        CompositeThermalTransmittance () const;

        CompositeThermalTransmittance_optional&
        CompositeThermalTransmittance ();

        void
        CompositeThermalTransmittance (const CompositeThermalTransmittance_type& x);

        void
        CompositeThermalTransmittance (const CompositeThermalTransmittance_optional& x);

        // WindowHeight
        //
        typedef ::xml_schema::double_ WindowHeight_type;
        typedef ::xsd::cxx::tree::optional< WindowHeight_type > WindowHeight_optional;
        typedef ::xsd::cxx::tree::traits< WindowHeight_type, char, ::xsd::cxx::tree::schema_type::double_ > WindowHeight_traits;

        const WindowHeight_optional&
        WindowHeight () const;

        WindowHeight_optional&
        WindowHeight ();

        void
        WindowHeight (const WindowHeight_type& x);

        void
        WindowHeight (const WindowHeight_optional& x);

        // WindowWidth
        //
        typedef ::xml_schema::double_ WindowWidth_type;
        typedef ::xsd::cxx::tree::optional< WindowWidth_type > WindowWidth_optional;
        typedef ::xsd::cxx::tree::traits< WindowWidth_type, char, ::xsd::cxx::tree::schema_type::double_ > WindowWidth_traits;

        const WindowWidth_optional&
        WindowWidth () const;

        WindowWidth_optional&
        WindowWidth ();

        void
        WindowWidth (const WindowWidth_type& x);

        void
        WindowWidth (const WindowWidth_optional& x);

        // WindowArea
        //
        typedef ::xml_schema::double_ WindowArea_type;
        typedef ::xsd::cxx::tree::optional< WindowArea_type > WindowArea_optional;
        typedef ::xsd::cxx::tree::traits< WindowArea_type, char, ::xsd::cxx::tree::schema_type::double_ > WindowArea_traits;

        const WindowArea_optional&
        WindowArea () const;

        WindowArea_optional&
        WindowArea ();

        void
        WindowArea (const WindowArea_type& x);

        void
        WindowArea (const WindowArea_optional& x);

        // WindowPerimeter
        //
        typedef ::xml_schema::double_ WindowPerimeter_type;
        typedef ::xsd::cxx::tree::optional< WindowPerimeter_type > WindowPerimeter_optional;
        typedef ::xsd::cxx::tree::traits< WindowPerimeter_type, char, ::xsd::cxx::tree::schema_type::double_ > WindowPerimeter_traits;

        const WindowPerimeter_optional&
        WindowPerimeter () const;

        WindowPerimeter_optional&
        WindowPerimeter ();

        void
        WindowPerimeter (const WindowPerimeter_type& x);

        void
        WindowPerimeter (const WindowPerimeter_optional& x);

        // WindowFrameDepth
        //
        typedef ::xml_schema::double_ WindowFrameDepth_type;
        typedef ::xsd::cxx::tree::optional< WindowFrameDepth_type > WindowFrameDepth_optional;
        typedef ::xsd::cxx::tree::traits< WindowFrameDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > WindowFrameDepth_traits;

        const WindowFrameDepth_optional&
        WindowFrameDepth () const;

        WindowFrameDepth_optional&
        WindowFrameDepth ();

        void
        WindowFrameDepth (const WindowFrameDepth_type& x);

        void
        WindowFrameDepth (const WindowFrameDepth_optional& x);

        // WindowFrameThickness
        //
        typedef ::xml_schema::double_ WindowFrameThickness_type;
        typedef ::xsd::cxx::tree::optional< WindowFrameThickness_type > WindowFrameThickness_optional;
        typedef ::xsd::cxx::tree::traits< WindowFrameThickness_type, char, ::xsd::cxx::tree::schema_type::double_ > WindowFrameThickness_traits;

        const WindowFrameThickness_optional&
        WindowFrameThickness () const;

        WindowFrameThickness_optional&
        WindowFrameThickness ();

        void
        WindowFrameThickness (const WindowFrameThickness_type& x);

        void
        WindowFrameThickness (const WindowFrameThickness_optional& x);

        // ClassRef_UniFormat
        //
        typedef ::xml_schema::idref ClassRef_UniFormat_type;
        typedef ::xsd::cxx::tree::optional< ClassRef_UniFormat_type > ClassRef_UniFormat_optional;
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
        typedef ::xsd::cxx::tree::optional< MaterialList_type > MaterialList_optional;
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

        // VoidsInWindow
        //
        typedef ::xml_schema::idrefs VoidsInWindow_type;
        typedef ::xsd::cxx::tree::optional< VoidsInWindow_type > VoidsInWindow_optional;
        typedef ::xsd::cxx::tree::traits< VoidsInWindow_type, char > VoidsInWindow_traits;

        const VoidsInWindow_optional&
        VoidsInWindow () const;

        VoidsInWindow_optional&
        VoidsInWindow ();

        void
        VoidsInWindow (const VoidsInWindow_type& x);

        void
        VoidsInWindow (const VoidsInWindow_optional& x);

        void
        VoidsInWindow (::std::auto_ptr< VoidsInWindow_type > p);

        // OpeningFilledByWindow
        //
        typedef ::xml_schema::idref OpeningFilledByWindow_type;
        typedef ::xsd::cxx::tree::optional< OpeningFilledByWindow_type > OpeningFilledByWindow_optional;
        typedef ::xsd::cxx::tree::traits< OpeningFilledByWindow_type, char > OpeningFilledByWindow_traits;

        const OpeningFilledByWindow_optional&
        OpeningFilledByWindow () const;

        OpeningFilledByWindow_optional&
        OpeningFilledByWindow ();

        void
        OpeningFilledByWindow (const OpeningFilledByWindow_type& x);

        void
        OpeningFilledByWindow (const OpeningFilledByWindow_optional& x);

        void
        OpeningFilledByWindow (::std::auto_ptr< OpeningFilledByWindow_type > p);

        // Constructors.
        //
        SimWindow_TypicalWindow_Default (const RefId_type&);

        SimWindow_TypicalWindow_Default (const ::xercesc::DOMElement& e,
                                         ::xml_schema::flags f = 0,
                                         ::xml_schema::container* c = 0);

        SimWindow_TypicalWindow_Default (const SimWindow_TypicalWindow_Default& x,
                                         ::xml_schema::flags f = 0,
                                         ::xml_schema::container* c = 0);

        virtual SimWindow_TypicalWindow_Default*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimWindow_TypicalWindow_Default&
        operator= (const SimWindow_TypicalWindow_Default& x);

        virtual 
        ~SimWindow_TypicalWindow_Default ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        OverallHeight_optional OverallHeight_;
        OverallWidth_optional OverallWidth_;
        WindowTypeTag_optional WindowTypeTag_;
        WindowOperationType_optional WindowOperationType_;
        WindowConstructionType_optional WindowConstructionType_;
        WindowIsExternal_optional WindowIsExternal_;
        CompositeThermalTransmittance_optional CompositeThermalTransmittance_;
        WindowHeight_optional WindowHeight_;
        WindowWidth_optional WindowWidth_;
        WindowArea_optional WindowArea_;
        WindowPerimeter_optional WindowPerimeter_;
        WindowFrameDepth_optional WindowFrameDepth_;
        WindowFrameThickness_optional WindowFrameThickness_;
        ClassRef_UniFormat_optional ClassRef_UniFormat_;
        MaterialList_optional MaterialList_;
        VoidsInWindow_optional VoidsInWindow_;
        OpeningFilledByWindow_optional OpeningFilledByWindow_;
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

#endif // SIM_WINDOW_TYPICAL_WINDOW_DEFAULT_HXX
