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

#ifndef SIM_SYSTEM_HVAC_HOT_WATER_WATER_BRANCH_HXX
#define SIM_SYSTEM_HVAC_HOT_WATER_WATER_BRANCH_HXX

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
      class SimSystem_HvacHotWater_WaterBranch;
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

#include "simsystem_hvachotwater.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSys_ComponentObjectType_1_11;
    }
  }
}

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSys_ComponentInNodeName_1_11;
    }
  }
}

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSys_ComponentOutNodeName_1_11;
    }
  }
}

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSys_ComponentBranchContType_1_11;
    }
  }
}

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSystem_HvacHotWater_WaterBranch: public ::namespaces::Sim::BuildingModel::SimSystem_HvacHotWater
      {
        public:
        // SimSys_MaxFlowRate
        //
        typedef ::xml_schema::double_ SimSys_MaxFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MaxFlowRate_type > SimSys_MaxFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MaxFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_MaxFlowRate_traits;

        const SimSys_MaxFlowRate_optional&
        SimSys_MaxFlowRate () const;

        SimSys_MaxFlowRate_optional&
        SimSys_MaxFlowRate ();

        void
        SimSys_MaxFlowRate (const SimSys_MaxFlowRate_type& x);

        void
        SimSys_MaxFlowRate (const SimSys_MaxFlowRate_optional& x);

        // SimSys_PresDropCurveName
        //
        typedef ::xml_schema::idref SimSys_PresDropCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PresDropCurveName_type > SimSys_PresDropCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PresDropCurveName_type, char > SimSys_PresDropCurveName_traits;

        const SimSys_PresDropCurveName_optional&
        SimSys_PresDropCurveName () const;

        SimSys_PresDropCurveName_optional&
        SimSys_PresDropCurveName ();

        void
        SimSys_PresDropCurveName (const SimSys_PresDropCurveName_type& x);

        void
        SimSys_PresDropCurveName (const SimSys_PresDropCurveName_optional& x);

        void
        SimSys_PresDropCurveName (::std::auto_ptr< SimSys_PresDropCurveName_type > p);

        // SimSys_ComponentObjectType_1_11
        //
        typedef ::namespaces::Sim::BuildingModel::SimSys_ComponentObjectType_1_11 SimSys_ComponentObjectType_1_11_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ComponentObjectType_1_11_type > SimSys_ComponentObjectType_1_11_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ComponentObjectType_1_11_type, char > SimSys_ComponentObjectType_1_11_traits;

        const SimSys_ComponentObjectType_1_11_optional&
        SimSys_ComponentObjectType_1_11 () const;

        SimSys_ComponentObjectType_1_11_optional&
        SimSys_ComponentObjectType_1_11 ();

        void
        SimSys_ComponentObjectType_1_11 (const SimSys_ComponentObjectType_1_11_type& x);

        void
        SimSys_ComponentObjectType_1_11 (const SimSys_ComponentObjectType_1_11_optional& x);

        void
        SimSys_ComponentObjectType_1_11 (::std::auto_ptr< SimSys_ComponentObjectType_1_11_type > p);

        // SimSys_ComponentName_1_11
        //
        typedef ::xml_schema::idrefs SimSys_ComponentName_1_11_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ComponentName_1_11_type > SimSys_ComponentName_1_11_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ComponentName_1_11_type, char > SimSys_ComponentName_1_11_traits;

        const SimSys_ComponentName_1_11_optional&
        SimSys_ComponentName_1_11 () const;

        SimSys_ComponentName_1_11_optional&
        SimSys_ComponentName_1_11 ();

        void
        SimSys_ComponentName_1_11 (const SimSys_ComponentName_1_11_type& x);

        void
        SimSys_ComponentName_1_11 (const SimSys_ComponentName_1_11_optional& x);

        void
        SimSys_ComponentName_1_11 (::std::auto_ptr< SimSys_ComponentName_1_11_type > p);

        // SimSys_ComponentInNodeName_1_11
        //
        typedef ::namespaces::Sim::BuildingModel::SimSys_ComponentInNodeName_1_11 SimSys_ComponentInNodeName_1_11_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ComponentInNodeName_1_11_type > SimSys_ComponentInNodeName_1_11_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ComponentInNodeName_1_11_type, char > SimSys_ComponentInNodeName_1_11_traits;

        const SimSys_ComponentInNodeName_1_11_optional&
        SimSys_ComponentInNodeName_1_11 () const;

        SimSys_ComponentInNodeName_1_11_optional&
        SimSys_ComponentInNodeName_1_11 ();

        void
        SimSys_ComponentInNodeName_1_11 (const SimSys_ComponentInNodeName_1_11_type& x);

        void
        SimSys_ComponentInNodeName_1_11 (const SimSys_ComponentInNodeName_1_11_optional& x);

        void
        SimSys_ComponentInNodeName_1_11 (::std::auto_ptr< SimSys_ComponentInNodeName_1_11_type > p);

        // SimSys_ComponentOutNodeName_1_11
        //
        typedef ::namespaces::Sim::BuildingModel::SimSys_ComponentOutNodeName_1_11 SimSys_ComponentOutNodeName_1_11_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ComponentOutNodeName_1_11_type > SimSys_ComponentOutNodeName_1_11_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ComponentOutNodeName_1_11_type, char > SimSys_ComponentOutNodeName_1_11_traits;

        const SimSys_ComponentOutNodeName_1_11_optional&
        SimSys_ComponentOutNodeName_1_11 () const;

        SimSys_ComponentOutNodeName_1_11_optional&
        SimSys_ComponentOutNodeName_1_11 ();

        void
        SimSys_ComponentOutNodeName_1_11 (const SimSys_ComponentOutNodeName_1_11_type& x);

        void
        SimSys_ComponentOutNodeName_1_11 (const SimSys_ComponentOutNodeName_1_11_optional& x);

        void
        SimSys_ComponentOutNodeName_1_11 (::std::auto_ptr< SimSys_ComponentOutNodeName_1_11_type > p);

        // SimSys_ComponentBranchContType_1_11
        //
        typedef ::namespaces::Sim::BuildingModel::SimSys_ComponentBranchContType_1_11 SimSys_ComponentBranchContType_1_11_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ComponentBranchContType_1_11_type > SimSys_ComponentBranchContType_1_11_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ComponentBranchContType_1_11_type, char > SimSys_ComponentBranchContType_1_11_traits;

        const SimSys_ComponentBranchContType_1_11_optional&
        SimSys_ComponentBranchContType_1_11 () const;

        SimSys_ComponentBranchContType_1_11_optional&
        SimSys_ComponentBranchContType_1_11 ();

        void
        SimSys_ComponentBranchContType_1_11 (const SimSys_ComponentBranchContType_1_11_type& x);

        void
        SimSys_ComponentBranchContType_1_11 (const SimSys_ComponentBranchContType_1_11_optional& x);

        void
        SimSys_ComponentBranchContType_1_11 (::std::auto_ptr< SimSys_ComponentBranchContType_1_11_type > p);

        // Constructors.
        //
        SimSystem_HvacHotWater_WaterBranch (const RefId_type&);

        SimSystem_HvacHotWater_WaterBranch (const ::xercesc::DOMElement& e,
                                            ::xml_schema::flags f = 0,
                                            ::xml_schema::container* c = 0);

        SimSystem_HvacHotWater_WaterBranch (const SimSystem_HvacHotWater_WaterBranch& x,
                                            ::xml_schema::flags f = 0,
                                            ::xml_schema::container* c = 0);

        virtual SimSystem_HvacHotWater_WaterBranch*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSystem_HvacHotWater_WaterBranch&
        operator= (const SimSystem_HvacHotWater_WaterBranch& x);

        virtual 
        ~SimSystem_HvacHotWater_WaterBranch ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSys_MaxFlowRate_optional SimSys_MaxFlowRate_;
        SimSys_PresDropCurveName_optional SimSys_PresDropCurveName_;
        SimSys_ComponentObjectType_1_11_optional SimSys_ComponentObjectType_1_11_;
        SimSys_ComponentName_1_11_optional SimSys_ComponentName_1_11_;
        SimSys_ComponentInNodeName_1_11_optional SimSys_ComponentInNodeName_1_11_;
        SimSys_ComponentOutNodeName_1_11_optional SimSys_ComponentOutNodeName_1_11_;
        SimSys_ComponentBranchContType_1_11_optional SimSys_ComponentBranchContType_1_11_;
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

#endif // SIM_SYSTEM_HVAC_HOT_WATER_WATER_BRANCH_HXX
