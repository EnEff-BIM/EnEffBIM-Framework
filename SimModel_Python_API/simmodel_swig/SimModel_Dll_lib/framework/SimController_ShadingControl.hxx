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

#ifndef SIM_CONTROLLER_SHADING_CONTROL_HXX
#define SIM_CONTROLLER_SHADING_CONTROL_HXX

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
    namespace MepModel
    {
      class SimController_ShadingControl;
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

#include "simcontroller.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimController_ShadingControl: public ::schema::simxml::MepModel::SimController
      {
        public:
        // SimCntrl_Name
        //
        typedef ::xml_schema::string SimCntrl_Name_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_Name_type > SimCntrl_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_Name_type, char > SimCntrl_Name_traits;

        const SimCntrl_Name_optional&
        SimCntrl_Name () const;

        SimCntrl_Name_optional&
        SimCntrl_Name ();

        void
        SimCntrl_Name (const SimCntrl_Name_type& x);

        void
        SimCntrl_Name (const SimCntrl_Name_optional& x);

        void
        SimCntrl_Name (::std::auto_ptr< SimCntrl_Name_type > p);

        // SimCntrl_ShadingType
        //
        typedef ::xml_schema::string SimCntrl_ShadingType_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_ShadingType_type > SimCntrl_ShadingType_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_ShadingType_type, char > SimCntrl_ShadingType_traits;

        const SimCntrl_ShadingType_optional&
        SimCntrl_ShadingType () const;

        SimCntrl_ShadingType_optional&
        SimCntrl_ShadingType ();

        void
        SimCntrl_ShadingType (const SimCntrl_ShadingType_type& x);

        void
        SimCntrl_ShadingType (const SimCntrl_ShadingType_optional& x);

        void
        SimCntrl_ShadingType (::std::auto_ptr< SimCntrl_ShadingType_type > p);

        // SimCntrl_ConstwithShadingName
        //
        typedef ::xml_schema::idref SimCntrl_ConstwithShadingName_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_ConstwithShadingName_type > SimCntrl_ConstwithShadingName_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_ConstwithShadingName_type, char > SimCntrl_ConstwithShadingName_traits;

        const SimCntrl_ConstwithShadingName_optional&
        SimCntrl_ConstwithShadingName () const;

        SimCntrl_ConstwithShadingName_optional&
        SimCntrl_ConstwithShadingName ();

        void
        SimCntrl_ConstwithShadingName (const SimCntrl_ConstwithShadingName_type& x);

        void
        SimCntrl_ConstwithShadingName (const SimCntrl_ConstwithShadingName_optional& x);

        void
        SimCntrl_ConstwithShadingName (::std::auto_ptr< SimCntrl_ConstwithShadingName_type > p);

        // SimCntrl_ShadingCntlType
        //
        typedef ::xml_schema::string SimCntrl_ShadingCntlType_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_ShadingCntlType_type > SimCntrl_ShadingCntlType_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_ShadingCntlType_type, char > SimCntrl_ShadingCntlType_traits;

        const SimCntrl_ShadingCntlType_optional&
        SimCntrl_ShadingCntlType () const;

        SimCntrl_ShadingCntlType_optional&
        SimCntrl_ShadingCntlType ();

        void
        SimCntrl_ShadingCntlType (const SimCntrl_ShadingCntlType_type& x);

        void
        SimCntrl_ShadingCntlType (const SimCntrl_ShadingCntlType_optional& x);

        void
        SimCntrl_ShadingCntlType (::std::auto_ptr< SimCntrl_ShadingCntlType_type > p);

        // SimCntrl_SchedName
        //
        typedef ::xml_schema::idref SimCntrl_SchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_SchedName_type > SimCntrl_SchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_SchedName_type, char > SimCntrl_SchedName_traits;

        const SimCntrl_SchedName_optional&
        SimCntrl_SchedName () const;

        SimCntrl_SchedName_optional&
        SimCntrl_SchedName ();

        void
        SimCntrl_SchedName (const SimCntrl_SchedName_type& x);

        void
        SimCntrl_SchedName (const SimCntrl_SchedName_optional& x);

        void
        SimCntrl_SchedName (::std::auto_ptr< SimCntrl_SchedName_type > p);

        // SimCntrl_Setpoint
        //
        typedef ::xml_schema::double_ SimCntrl_Setpoint_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_Setpoint_type > SimCntrl_Setpoint_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_Setpoint_type, char, ::xsd::cxx::tree::schema_type::double_ > SimCntrl_Setpoint_traits;

        const SimCntrl_Setpoint_optional&
        SimCntrl_Setpoint () const;

        SimCntrl_Setpoint_optional&
        SimCntrl_Setpoint ();

        void
        SimCntrl_Setpoint (const SimCntrl_Setpoint_type& x);

        void
        SimCntrl_Setpoint (const SimCntrl_Setpoint_optional& x);

        // SimCntrl_ShadingCntlSchedd
        //
        typedef ::xml_schema::string SimCntrl_ShadingCntlSchedd_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_ShadingCntlSchedd_type > SimCntrl_ShadingCntlSchedd_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_ShadingCntlSchedd_type, char > SimCntrl_ShadingCntlSchedd_traits;

        const SimCntrl_ShadingCntlSchedd_optional&
        SimCntrl_ShadingCntlSchedd () const;

        SimCntrl_ShadingCntlSchedd_optional&
        SimCntrl_ShadingCntlSchedd ();

        void
        SimCntrl_ShadingCntlSchedd (const SimCntrl_ShadingCntlSchedd_type& x);

        void
        SimCntrl_ShadingCntlSchedd (const SimCntrl_ShadingCntlSchedd_optional& x);

        void
        SimCntrl_ShadingCntlSchedd (::std::auto_ptr< SimCntrl_ShadingCntlSchedd_type > p);

        // SimCntrl_GlareCntlActive
        //
        typedef ::xml_schema::string SimCntrl_GlareCntlActive_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_GlareCntlActive_type > SimCntrl_GlareCntlActive_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_GlareCntlActive_type, char > SimCntrl_GlareCntlActive_traits;

        const SimCntrl_GlareCntlActive_optional&
        SimCntrl_GlareCntlActive () const;

        SimCntrl_GlareCntlActive_optional&
        SimCntrl_GlareCntlActive ();

        void
        SimCntrl_GlareCntlActive (const SimCntrl_GlareCntlActive_type& x);

        void
        SimCntrl_GlareCntlActive (const SimCntrl_GlareCntlActive_optional& x);

        void
        SimCntrl_GlareCntlActive (::std::auto_ptr< SimCntrl_GlareCntlActive_type > p);

        // SimCntrl_ShadingDeviceMatlName
        //
        typedef ::xml_schema::idref SimCntrl_ShadingDeviceMatlName_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_ShadingDeviceMatlName_type > SimCntrl_ShadingDeviceMatlName_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_ShadingDeviceMatlName_type, char > SimCntrl_ShadingDeviceMatlName_traits;

        const SimCntrl_ShadingDeviceMatlName_optional&
        SimCntrl_ShadingDeviceMatlName () const;

        SimCntrl_ShadingDeviceMatlName_optional&
        SimCntrl_ShadingDeviceMatlName ();

        void
        SimCntrl_ShadingDeviceMatlName (const SimCntrl_ShadingDeviceMatlName_type& x);

        void
        SimCntrl_ShadingDeviceMatlName (const SimCntrl_ShadingDeviceMatlName_optional& x);

        void
        SimCntrl_ShadingDeviceMatlName (::std::auto_ptr< SimCntrl_ShadingDeviceMatlName_type > p);

        // SimCntrl_TypeSlatAngleCntlForBlinds
        //
        typedef ::xml_schema::string SimCntrl_TypeSlatAngleCntlForBlinds_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_TypeSlatAngleCntlForBlinds_type > SimCntrl_TypeSlatAngleCntlForBlinds_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_TypeSlatAngleCntlForBlinds_type, char > SimCntrl_TypeSlatAngleCntlForBlinds_traits;

        const SimCntrl_TypeSlatAngleCntlForBlinds_optional&
        SimCntrl_TypeSlatAngleCntlForBlinds () const;

        SimCntrl_TypeSlatAngleCntlForBlinds_optional&
        SimCntrl_TypeSlatAngleCntlForBlinds ();

        void
        SimCntrl_TypeSlatAngleCntlForBlinds (const SimCntrl_TypeSlatAngleCntlForBlinds_type& x);

        void
        SimCntrl_TypeSlatAngleCntlForBlinds (const SimCntrl_TypeSlatAngleCntlForBlinds_optional& x);

        void
        SimCntrl_TypeSlatAngleCntlForBlinds (::std::auto_ptr< SimCntrl_TypeSlatAngleCntlForBlinds_type > p);

        // SimCntrl_SlatAngleSchedName
        //
        typedef ::xml_schema::idref SimCntrl_SlatAngleSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_SlatAngleSchedName_type > SimCntrl_SlatAngleSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_SlatAngleSchedName_type, char > SimCntrl_SlatAngleSchedName_traits;

        const SimCntrl_SlatAngleSchedName_optional&
        SimCntrl_SlatAngleSchedName () const;

        SimCntrl_SlatAngleSchedName_optional&
        SimCntrl_SlatAngleSchedName ();

        void
        SimCntrl_SlatAngleSchedName (const SimCntrl_SlatAngleSchedName_type& x);

        void
        SimCntrl_SlatAngleSchedName (const SimCntrl_SlatAngleSchedName_optional& x);

        void
        SimCntrl_SlatAngleSchedName (::std::auto_ptr< SimCntrl_SlatAngleSchedName_type > p);

        // SimCntrl_Setpoint2
        //
        typedef ::xml_schema::double_ SimCntrl_Setpoint2_type;
        typedef ::xsd::cxx::tree::optional< SimCntrl_Setpoint2_type > SimCntrl_Setpoint2_optional;
        typedef ::xsd::cxx::tree::traits< SimCntrl_Setpoint2_type, char, ::xsd::cxx::tree::schema_type::double_ > SimCntrl_Setpoint2_traits;

        const SimCntrl_Setpoint2_optional&
        SimCntrl_Setpoint2 () const;

        SimCntrl_Setpoint2_optional&
        SimCntrl_Setpoint2 ();

        void
        SimCntrl_Setpoint2 (const SimCntrl_Setpoint2_type& x);

        void
        SimCntrl_Setpoint2 (const SimCntrl_Setpoint2_optional& x);

        // Constructors.
        //
        SimController_ShadingControl ();

        SimController_ShadingControl (const RefId_type&);

        SimController_ShadingControl (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f = 0,
                                      ::xml_schema::container* c = 0);

        SimController_ShadingControl (const SimController_ShadingControl& x,
                                      ::xml_schema::flags f = 0,
                                      ::xml_schema::container* c = 0);

        virtual SimController_ShadingControl*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimController_ShadingControl&
        operator= (const SimController_ShadingControl& x);

        virtual 
        ~SimController_ShadingControl ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimCntrl_Name_optional SimCntrl_Name_;
        SimCntrl_ShadingType_optional SimCntrl_ShadingType_;
        SimCntrl_ConstwithShadingName_optional SimCntrl_ConstwithShadingName_;
        SimCntrl_ShadingCntlType_optional SimCntrl_ShadingCntlType_;
        SimCntrl_SchedName_optional SimCntrl_SchedName_;
        SimCntrl_Setpoint_optional SimCntrl_Setpoint_;
        SimCntrl_ShadingCntlSchedd_optional SimCntrl_ShadingCntlSchedd_;
        SimCntrl_GlareCntlActive_optional SimCntrl_GlareCntlActive_;
        SimCntrl_ShadingDeviceMatlName_optional SimCntrl_ShadingDeviceMatlName_;
        SimCntrl_TypeSlatAngleCntlForBlinds_optional SimCntrl_TypeSlatAngleCntlForBlinds_;
        SimCntrl_SlatAngleSchedName_optional SimCntrl_SlatAngleSchedName_;
        SimCntrl_Setpoint2_optional SimCntrl_Setpoint2_;
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
    namespace MepModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SIM_CONTROLLER_SHADING_CONTROL_HXX
