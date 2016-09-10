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

#ifndef SIM_FLOW_PLANT_HEAT_PUMP_CENTRAL_SYSTEM_HXX
#define SIM_FLOW_PLANT_HEAT_PUMP_CENTRAL_SYSTEM_HXX

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
      class SimFlowPlant_HeatPump_CentralSystem;
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

#include "simflowplant_heatpump.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      class integerList;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowPlant_HeatPump_CentralSystem: public ::schema::simxml::MepModel::SimFlowPlant_HeatPump
      {
        public:
        // SimFlowPlant_Name
        //
        typedef ::xml_schema::string SimFlowPlant_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_Name_type > SimFlowPlant_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_Name_type, char > SimFlowPlant_Name_traits;

        const SimFlowPlant_Name_optional&
        SimFlowPlant_Name () const;

        SimFlowPlant_Name_optional&
        SimFlowPlant_Name ();

        void
        SimFlowPlant_Name (const SimFlowPlant_Name_type& x);

        void
        SimFlowPlant_Name (const SimFlowPlant_Name_optional& x);

        void
        SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > p);

        // SimFlowPlant_ControlMethod
        //
        typedef ::xml_schema::string SimFlowPlant_ControlMethod_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ControlMethod_type > SimFlowPlant_ControlMethod_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ControlMethod_type, char > SimFlowPlant_ControlMethod_traits;

        const SimFlowPlant_ControlMethod_optional&
        SimFlowPlant_ControlMethod () const;

        SimFlowPlant_ControlMethod_optional&
        SimFlowPlant_ControlMethod ();

        void
        SimFlowPlant_ControlMethod (const SimFlowPlant_ControlMethod_type& x);

        void
        SimFlowPlant_ControlMethod (const SimFlowPlant_ControlMethod_optional& x);

        void
        SimFlowPlant_ControlMethod (::std::auto_ptr< SimFlowPlant_ControlMethod_type > p);

        // SimFlowPlant_CoolLoopInletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_CoolLoopInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CoolLoopInletNodeName_type > SimFlowPlant_CoolLoopInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CoolLoopInletNodeName_type, char > SimFlowPlant_CoolLoopInletNodeName_traits;

        const SimFlowPlant_CoolLoopInletNodeName_optional&
        SimFlowPlant_CoolLoopInletNodeName () const;

        SimFlowPlant_CoolLoopInletNodeName_optional&
        SimFlowPlant_CoolLoopInletNodeName ();

        void
        SimFlowPlant_CoolLoopInletNodeName (const SimFlowPlant_CoolLoopInletNodeName_type& x);

        void
        SimFlowPlant_CoolLoopInletNodeName (const SimFlowPlant_CoolLoopInletNodeName_optional& x);

        void
        SimFlowPlant_CoolLoopInletNodeName (::std::auto_ptr< SimFlowPlant_CoolLoopInletNodeName_type > p);

        // SimFlowPlant_CoolLoopOutletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_CoolLoopOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_CoolLoopOutletNodeName_type > SimFlowPlant_CoolLoopOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_CoolLoopOutletNodeName_type, char > SimFlowPlant_CoolLoopOutletNodeName_traits;

        const SimFlowPlant_CoolLoopOutletNodeName_optional&
        SimFlowPlant_CoolLoopOutletNodeName () const;

        SimFlowPlant_CoolLoopOutletNodeName_optional&
        SimFlowPlant_CoolLoopOutletNodeName ();

        void
        SimFlowPlant_CoolLoopOutletNodeName (const SimFlowPlant_CoolLoopOutletNodeName_type& x);

        void
        SimFlowPlant_CoolLoopOutletNodeName (const SimFlowPlant_CoolLoopOutletNodeName_optional& x);

        void
        SimFlowPlant_CoolLoopOutletNodeName (::std::auto_ptr< SimFlowPlant_CoolLoopOutletNodeName_type > p);

        // SimFlowPlant_SourceLoopInletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_SourceLoopInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SourceLoopInletNodeName_type > SimFlowPlant_SourceLoopInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SourceLoopInletNodeName_type, char > SimFlowPlant_SourceLoopInletNodeName_traits;

        const SimFlowPlant_SourceLoopInletNodeName_optional&
        SimFlowPlant_SourceLoopInletNodeName () const;

        SimFlowPlant_SourceLoopInletNodeName_optional&
        SimFlowPlant_SourceLoopInletNodeName ();

        void
        SimFlowPlant_SourceLoopInletNodeName (const SimFlowPlant_SourceLoopInletNodeName_type& x);

        void
        SimFlowPlant_SourceLoopInletNodeName (const SimFlowPlant_SourceLoopInletNodeName_optional& x);

        void
        SimFlowPlant_SourceLoopInletNodeName (::std::auto_ptr< SimFlowPlant_SourceLoopInletNodeName_type > p);

        // SimFlowPlant_SourceLoopOutletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_SourceLoopOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_SourceLoopOutletNodeName_type > SimFlowPlant_SourceLoopOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_SourceLoopOutletNodeName_type, char > SimFlowPlant_SourceLoopOutletNodeName_traits;

        const SimFlowPlant_SourceLoopOutletNodeName_optional&
        SimFlowPlant_SourceLoopOutletNodeName () const;

        SimFlowPlant_SourceLoopOutletNodeName_optional&
        SimFlowPlant_SourceLoopOutletNodeName ();

        void
        SimFlowPlant_SourceLoopOutletNodeName (const SimFlowPlant_SourceLoopOutletNodeName_type& x);

        void
        SimFlowPlant_SourceLoopOutletNodeName (const SimFlowPlant_SourceLoopOutletNodeName_optional& x);

        void
        SimFlowPlant_SourceLoopOutletNodeName (::std::auto_ptr< SimFlowPlant_SourceLoopOutletNodeName_type > p);

        // SimFlowPlant_HeatLoopInletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_HeatLoopInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_HeatLoopInletNodeName_type > SimFlowPlant_HeatLoopInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_HeatLoopInletNodeName_type, char > SimFlowPlant_HeatLoopInletNodeName_traits;

        const SimFlowPlant_HeatLoopInletNodeName_optional&
        SimFlowPlant_HeatLoopInletNodeName () const;

        SimFlowPlant_HeatLoopInletNodeName_optional&
        SimFlowPlant_HeatLoopInletNodeName ();

        void
        SimFlowPlant_HeatLoopInletNodeName (const SimFlowPlant_HeatLoopInletNodeName_type& x);

        void
        SimFlowPlant_HeatLoopInletNodeName (const SimFlowPlant_HeatLoopInletNodeName_optional& x);

        void
        SimFlowPlant_HeatLoopInletNodeName (::std::auto_ptr< SimFlowPlant_HeatLoopInletNodeName_type > p);

        // SimFlowPlant_HeatLoopOutletNodeName
        //
        typedef ::xml_schema::string SimFlowPlant_HeatLoopOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_HeatLoopOutletNodeName_type > SimFlowPlant_HeatLoopOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_HeatLoopOutletNodeName_type, char > SimFlowPlant_HeatLoopOutletNodeName_traits;

        const SimFlowPlant_HeatLoopOutletNodeName_optional&
        SimFlowPlant_HeatLoopOutletNodeName () const;

        SimFlowPlant_HeatLoopOutletNodeName_optional&
        SimFlowPlant_HeatLoopOutletNodeName ();

        void
        SimFlowPlant_HeatLoopOutletNodeName (const SimFlowPlant_HeatLoopOutletNodeName_type& x);

        void
        SimFlowPlant_HeatLoopOutletNodeName (const SimFlowPlant_HeatLoopOutletNodeName_optional& x);

        void
        SimFlowPlant_HeatLoopOutletNodeName (::std::auto_ptr< SimFlowPlant_HeatLoopOutletNodeName_type > p);

        // SimFlowPlant_AncilPwr
        //
        typedef ::xml_schema::double_ SimFlowPlant_AncilPwr_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AncilPwr_type > SimFlowPlant_AncilPwr_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AncilPwr_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowPlant_AncilPwr_traits;

        const SimFlowPlant_AncilPwr_optional&
        SimFlowPlant_AncilPwr () const;

        SimFlowPlant_AncilPwr_optional&
        SimFlowPlant_AncilPwr ();

        void
        SimFlowPlant_AncilPwr (const SimFlowPlant_AncilPwr_type& x);

        void
        SimFlowPlant_AncilPwr (const SimFlowPlant_AncilPwr_optional& x);

        // SimFlowPlant_AncillaryOperSchedName
        //
        typedef ::xml_schema::idref SimFlowPlant_AncillaryOperSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_AncillaryOperSchedName_type > SimFlowPlant_AncillaryOperSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_AncillaryOperSchedName_type, char > SimFlowPlant_AncillaryOperSchedName_traits;

        const SimFlowPlant_AncillaryOperSchedName_optional&
        SimFlowPlant_AncillaryOperSchedName () const;

        SimFlowPlant_AncillaryOperSchedName_optional&
        SimFlowPlant_AncillaryOperSchedName ();

        void
        SimFlowPlant_AncillaryOperSchedName (const SimFlowPlant_AncillaryOperSchedName_type& x);

        void
        SimFlowPlant_AncillaryOperSchedName (const SimFlowPlant_AncillaryOperSchedName_optional& x);

        void
        SimFlowPlant_AncillaryOperSchedName (::std::auto_ptr< SimFlowPlant_AncillaryOperSchedName_type > p);

        // SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20
        //
        typedef ::schema::simxml::MepModel::SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20 SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_type > SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_type, char > SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_traits;

        const SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_optional&
        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20 () const;

        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_optional&
        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20 ();

        void
        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20 (const SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_type& x);

        void
        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20 (const SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_optional& x);

        void
        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20 (::std::auto_ptr< SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_type > p);

        // SimFlowPlant_ChillHeatModulesPerfCompName_1_20_
        //
        typedef ::xml_schema::idrefs SimFlowPlant_ChillHeatModulesPerfCompName_1_20__type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ChillHeatModulesPerfCompName_1_20__type > SimFlowPlant_ChillHeatModulesPerfCompName_1_20__optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ChillHeatModulesPerfCompName_1_20__type, char > SimFlowPlant_ChillHeatModulesPerfCompName_1_20__traits;

        const SimFlowPlant_ChillHeatModulesPerfCompName_1_20__optional&
        SimFlowPlant_ChillHeatModulesPerfCompName_1_20_ () const;

        SimFlowPlant_ChillHeatModulesPerfCompName_1_20__optional&
        SimFlowPlant_ChillHeatModulesPerfCompName_1_20_ ();

        void
        SimFlowPlant_ChillHeatModulesPerfCompName_1_20_ (const SimFlowPlant_ChillHeatModulesPerfCompName_1_20__type& x);

        void
        SimFlowPlant_ChillHeatModulesPerfCompName_1_20_ (const SimFlowPlant_ChillHeatModulesPerfCompName_1_20__optional& x);

        void
        SimFlowPlant_ChillHeatModulesPerfCompName_1_20_ (::std::auto_ptr< SimFlowPlant_ChillHeatModulesPerfCompName_1_20__type > p);

        // SimFlowPlant_ChillHeatModulesControlSchedName_1_20
        //
        typedef ::xml_schema::idrefs SimFlowPlant_ChillHeatModulesControlSchedName_1_20_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_ChillHeatModulesControlSchedName_1_20_type > SimFlowPlant_ChillHeatModulesControlSchedName_1_20_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_ChillHeatModulesControlSchedName_1_20_type, char > SimFlowPlant_ChillHeatModulesControlSchedName_1_20_traits;

        const SimFlowPlant_ChillHeatModulesControlSchedName_1_20_optional&
        SimFlowPlant_ChillHeatModulesControlSchedName_1_20 () const;

        SimFlowPlant_ChillHeatModulesControlSchedName_1_20_optional&
        SimFlowPlant_ChillHeatModulesControlSchedName_1_20 ();

        void
        SimFlowPlant_ChillHeatModulesControlSchedName_1_20 (const SimFlowPlant_ChillHeatModulesControlSchedName_1_20_type& x);

        void
        SimFlowPlant_ChillHeatModulesControlSchedName_1_20 (const SimFlowPlant_ChillHeatModulesControlSchedName_1_20_optional& x);

        void
        SimFlowPlant_ChillHeatModulesControlSchedName_1_20 (::std::auto_ptr< SimFlowPlant_ChillHeatModulesControlSchedName_1_20_type > p);

        // SimFlowPlant_NumofChillHeatModules_1_20
        //
        typedef ::schema::simxml::SimModelCore::integerList SimFlowPlant_NumofChillHeatModules_1_20_type;
        typedef ::xsd::cxx::tree::optional< SimFlowPlant_NumofChillHeatModules_1_20_type > SimFlowPlant_NumofChillHeatModules_1_20_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowPlant_NumofChillHeatModules_1_20_type, char > SimFlowPlant_NumofChillHeatModules_1_20_traits;

        const SimFlowPlant_NumofChillHeatModules_1_20_optional&
        SimFlowPlant_NumofChillHeatModules_1_20 () const;

        SimFlowPlant_NumofChillHeatModules_1_20_optional&
        SimFlowPlant_NumofChillHeatModules_1_20 ();

        void
        SimFlowPlant_NumofChillHeatModules_1_20 (const SimFlowPlant_NumofChillHeatModules_1_20_type& x);

        void
        SimFlowPlant_NumofChillHeatModules_1_20 (const SimFlowPlant_NumofChillHeatModules_1_20_optional& x);

        void
        SimFlowPlant_NumofChillHeatModules_1_20 (::std::auto_ptr< SimFlowPlant_NumofChillHeatModules_1_20_type > p);

        // Constructors.
        //
        SimFlowPlant_HeatPump_CentralSystem ();

        SimFlowPlant_HeatPump_CentralSystem (const RefId_type&);

        SimFlowPlant_HeatPump_CentralSystem (const ::xercesc::DOMElement& e,
                                             ::xml_schema::flags f = 0,
                                             ::xml_schema::container* c = 0);

        SimFlowPlant_HeatPump_CentralSystem (const SimFlowPlant_HeatPump_CentralSystem& x,
                                             ::xml_schema::flags f = 0,
                                             ::xml_schema::container* c = 0);

        virtual SimFlowPlant_HeatPump_CentralSystem*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowPlant_HeatPump_CentralSystem&
        operator= (const SimFlowPlant_HeatPump_CentralSystem& x);

        virtual 
        ~SimFlowPlant_HeatPump_CentralSystem ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowPlant_Name_optional SimFlowPlant_Name_;
        SimFlowPlant_ControlMethod_optional SimFlowPlant_ControlMethod_;
        SimFlowPlant_CoolLoopInletNodeName_optional SimFlowPlant_CoolLoopInletNodeName_;
        SimFlowPlant_CoolLoopOutletNodeName_optional SimFlowPlant_CoolLoopOutletNodeName_;
        SimFlowPlant_SourceLoopInletNodeName_optional SimFlowPlant_SourceLoopInletNodeName_;
        SimFlowPlant_SourceLoopOutletNodeName_optional SimFlowPlant_SourceLoopOutletNodeName_;
        SimFlowPlant_HeatLoopInletNodeName_optional SimFlowPlant_HeatLoopInletNodeName_;
        SimFlowPlant_HeatLoopOutletNodeName_optional SimFlowPlant_HeatLoopOutletNodeName_;
        SimFlowPlant_AncilPwr_optional SimFlowPlant_AncilPwr_;
        SimFlowPlant_AncillaryOperSchedName_optional SimFlowPlant_AncillaryOperSchedName_;
        SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_optional SimFlowPlant_ChillHeatModulesPerfCompObjectType_1_20_;
        SimFlowPlant_ChillHeatModulesPerfCompName_1_20__optional SimFlowPlant_ChillHeatModulesPerfCompName_1_20__;
        SimFlowPlant_ChillHeatModulesControlSchedName_1_20_optional SimFlowPlant_ChillHeatModulesControlSchedName_1_20_;
        SimFlowPlant_NumofChillHeatModules_1_20_optional SimFlowPlant_NumofChillHeatModules_1_20_;
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

#endif // SIM_FLOW_PLANT_HEAT_PUMP_CENTRAL_SYSTEM_HXX
