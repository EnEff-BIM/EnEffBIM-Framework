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

#ifndef SIM_CONNECTION_ZONE_AIR_FLOW_ZONE_MIXING_HXX
#define SIM_CONNECTION_ZONE_AIR_FLOW_ZONE_MIXING_HXX

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
      class SimConnection_ZoneAirFlow_ZoneMixing;
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

#include "simconnection_zoneairflow.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimConnection_ZoneAirFlow_ZoneMixing: public ::schema::simxml::ResourcesGeneral::SimConnection_ZoneAirFlow
      {
        public:
        // SimConnect_Name
        //
        typedef ::xml_schema::string SimConnect_Name_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_Name_type > SimConnect_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_Name_type, char > SimConnect_Name_traits;

        const SimConnect_Name_optional&
        SimConnect_Name () const;

        SimConnect_Name_optional&
        SimConnect_Name ();

        void
        SimConnect_Name (const SimConnect_Name_type& x);

        void
        SimConnect_Name (const SimConnect_Name_optional& x);

        void
        SimConnect_Name (::std::auto_ptr< SimConnect_Name_type > p);

        // SimConnect_ZoneName
        //
        typedef ::xml_schema::idref SimConnect_ZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_ZoneName_type > SimConnect_ZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_ZoneName_type, char > SimConnect_ZoneName_traits;

        const SimConnect_ZoneName_optional&
        SimConnect_ZoneName () const;

        SimConnect_ZoneName_optional&
        SimConnect_ZoneName ();

        void
        SimConnect_ZoneName (const SimConnect_ZoneName_type& x);

        void
        SimConnect_ZoneName (const SimConnect_ZoneName_optional& x);

        void
        SimConnect_ZoneName (::std::auto_ptr< SimConnect_ZoneName_type > p);

        // SimConnect_SchedName
        //
        typedef ::xml_schema::idref SimConnect_SchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_SchedName_type > SimConnect_SchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_SchedName_type, char > SimConnect_SchedName_traits;

        const SimConnect_SchedName_optional&
        SimConnect_SchedName () const;

        SimConnect_SchedName_optional&
        SimConnect_SchedName ();

        void
        SimConnect_SchedName (const SimConnect_SchedName_type& x);

        void
        SimConnect_SchedName (const SimConnect_SchedName_optional& x);

        void
        SimConnect_SchedName (::std::auto_ptr< SimConnect_SchedName_type > p);

        // SimConnect_DesignFlowRateCalcMeth
        //
        typedef ::xml_schema::string SimConnect_DesignFlowRateCalcMeth_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_DesignFlowRateCalcMeth_type > SimConnect_DesignFlowRateCalcMeth_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_DesignFlowRateCalcMeth_type, char > SimConnect_DesignFlowRateCalcMeth_traits;

        const SimConnect_DesignFlowRateCalcMeth_optional&
        SimConnect_DesignFlowRateCalcMeth () const;

        SimConnect_DesignFlowRateCalcMeth_optional&
        SimConnect_DesignFlowRateCalcMeth ();

        void
        SimConnect_DesignFlowRateCalcMeth (const SimConnect_DesignFlowRateCalcMeth_type& x);

        void
        SimConnect_DesignFlowRateCalcMeth (const SimConnect_DesignFlowRateCalcMeth_optional& x);

        void
        SimConnect_DesignFlowRateCalcMeth (::std::auto_ptr< SimConnect_DesignFlowRateCalcMeth_type > p);

        // SimConnect_DesignFlowRate
        //
        typedef ::xml_schema::double_ SimConnect_DesignFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_DesignFlowRate_type > SimConnect_DesignFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_DesignFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimConnect_DesignFlowRate_traits;

        const SimConnect_DesignFlowRate_optional&
        SimConnect_DesignFlowRate () const;

        SimConnect_DesignFlowRate_optional&
        SimConnect_DesignFlowRate ();

        void
        SimConnect_DesignFlowRate (const SimConnect_DesignFlowRate_type& x);

        void
        SimConnect_DesignFlowRate (const SimConnect_DesignFlowRate_optional& x);

        // SimConnect_FlowRatePerZoneFlrArea
        //
        typedef ::xml_schema::double_ SimConnect_FlowRatePerZoneFlrArea_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_FlowRatePerZoneFlrArea_type > SimConnect_FlowRatePerZoneFlrArea_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_FlowRatePerZoneFlrArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimConnect_FlowRatePerZoneFlrArea_traits;

        const SimConnect_FlowRatePerZoneFlrArea_optional&
        SimConnect_FlowRatePerZoneFlrArea () const;

        SimConnect_FlowRatePerZoneFlrArea_optional&
        SimConnect_FlowRatePerZoneFlrArea ();

        void
        SimConnect_FlowRatePerZoneFlrArea (const SimConnect_FlowRatePerZoneFlrArea_type& x);

        void
        SimConnect_FlowRatePerZoneFlrArea (const SimConnect_FlowRatePerZoneFlrArea_optional& x);

        // SimConnect_FlowRatePerPerson
        //
        typedef ::xml_schema::double_ SimConnect_FlowRatePerPerson_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_FlowRatePerPerson_type > SimConnect_FlowRatePerPerson_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_FlowRatePerPerson_type, char, ::xsd::cxx::tree::schema_type::double_ > SimConnect_FlowRatePerPerson_traits;

        const SimConnect_FlowRatePerPerson_optional&
        SimConnect_FlowRatePerPerson () const;

        SimConnect_FlowRatePerPerson_optional&
        SimConnect_FlowRatePerPerson ();

        void
        SimConnect_FlowRatePerPerson (const SimConnect_FlowRatePerPerson_type& x);

        void
        SimConnect_FlowRatePerPerson (const SimConnect_FlowRatePerPerson_optional& x);

        // SimConnect_AirChngPerHour
        //
        typedef ::xml_schema::double_ SimConnect_AirChngPerHour_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_AirChngPerHour_type > SimConnect_AirChngPerHour_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_AirChngPerHour_type, char, ::xsd::cxx::tree::schema_type::double_ > SimConnect_AirChngPerHour_traits;

        const SimConnect_AirChngPerHour_optional&
        SimConnect_AirChngPerHour () const;

        SimConnect_AirChngPerHour_optional&
        SimConnect_AirChngPerHour ();

        void
        SimConnect_AirChngPerHour (const SimConnect_AirChngPerHour_type& x);

        void
        SimConnect_AirChngPerHour (const SimConnect_AirChngPerHour_optional& x);

        // SimConnect_SrcZoneName
        //
        typedef ::xml_schema::idref SimConnect_SrcZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_SrcZoneName_type > SimConnect_SrcZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_SrcZoneName_type, char > SimConnect_SrcZoneName_traits;

        const SimConnect_SrcZoneName_optional&
        SimConnect_SrcZoneName () const;

        SimConnect_SrcZoneName_optional&
        SimConnect_SrcZoneName ();

        void
        SimConnect_SrcZoneName (const SimConnect_SrcZoneName_type& x);

        void
        SimConnect_SrcZoneName (const SimConnect_SrcZoneName_optional& x);

        void
        SimConnect_SrcZoneName (::std::auto_ptr< SimConnect_SrcZoneName_type > p);

        // SimConnect_DeltaTemp
        //
        typedef ::xml_schema::double_ SimConnect_DeltaTemp_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_DeltaTemp_type > SimConnect_DeltaTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_DeltaTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimConnect_DeltaTemp_traits;

        const SimConnect_DeltaTemp_optional&
        SimConnect_DeltaTemp () const;

        SimConnect_DeltaTemp_optional&
        SimConnect_DeltaTemp ();

        void
        SimConnect_DeltaTemp (const SimConnect_DeltaTemp_type& x);

        void
        SimConnect_DeltaTemp (const SimConnect_DeltaTemp_optional& x);

        // SimConnect_DeltaTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_DeltaTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_DeltaTempSchedName_type > SimConnect_DeltaTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_DeltaTempSchedName_type, char > SimConnect_DeltaTempSchedName_traits;

        const SimConnect_DeltaTempSchedName_optional&
        SimConnect_DeltaTempSchedName () const;

        SimConnect_DeltaTempSchedName_optional&
        SimConnect_DeltaTempSchedName ();

        void
        SimConnect_DeltaTempSchedName (const SimConnect_DeltaTempSchedName_type& x);

        void
        SimConnect_DeltaTempSchedName (const SimConnect_DeltaTempSchedName_optional& x);

        void
        SimConnect_DeltaTempSchedName (::std::auto_ptr< SimConnect_DeltaTempSchedName_type > p);

        // SimConnect_MinZoneTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_MinZoneTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_MinZoneTempSchedName_type > SimConnect_MinZoneTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_MinZoneTempSchedName_type, char > SimConnect_MinZoneTempSchedName_traits;

        const SimConnect_MinZoneTempSchedName_optional&
        SimConnect_MinZoneTempSchedName () const;

        SimConnect_MinZoneTempSchedName_optional&
        SimConnect_MinZoneTempSchedName ();

        void
        SimConnect_MinZoneTempSchedName (const SimConnect_MinZoneTempSchedName_type& x);

        void
        SimConnect_MinZoneTempSchedName (const SimConnect_MinZoneTempSchedName_optional& x);

        void
        SimConnect_MinZoneTempSchedName (::std::auto_ptr< SimConnect_MinZoneTempSchedName_type > p);

        // SimConnect_MaxZoneTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_MaxZoneTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_MaxZoneTempSchedName_type > SimConnect_MaxZoneTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_MaxZoneTempSchedName_type, char > SimConnect_MaxZoneTempSchedName_traits;

        const SimConnect_MaxZoneTempSchedName_optional&
        SimConnect_MaxZoneTempSchedName () const;

        SimConnect_MaxZoneTempSchedName_optional&
        SimConnect_MaxZoneTempSchedName ();

        void
        SimConnect_MaxZoneTempSchedName (const SimConnect_MaxZoneTempSchedName_type& x);

        void
        SimConnect_MaxZoneTempSchedName (const SimConnect_MaxZoneTempSchedName_optional& x);

        void
        SimConnect_MaxZoneTempSchedName (::std::auto_ptr< SimConnect_MaxZoneTempSchedName_type > p);

        // SimConnect_MinSrcZoneTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_MinSrcZoneTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_MinSrcZoneTempSchedName_type > SimConnect_MinSrcZoneTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_MinSrcZoneTempSchedName_type, char > SimConnect_MinSrcZoneTempSchedName_traits;

        const SimConnect_MinSrcZoneTempSchedName_optional&
        SimConnect_MinSrcZoneTempSchedName () const;

        SimConnect_MinSrcZoneTempSchedName_optional&
        SimConnect_MinSrcZoneTempSchedName ();

        void
        SimConnect_MinSrcZoneTempSchedName (const SimConnect_MinSrcZoneTempSchedName_type& x);

        void
        SimConnect_MinSrcZoneTempSchedName (const SimConnect_MinSrcZoneTempSchedName_optional& x);

        void
        SimConnect_MinSrcZoneTempSchedName (::std::auto_ptr< SimConnect_MinSrcZoneTempSchedName_type > p);

        // SimConnect_MaxSrcZoneTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_MaxSrcZoneTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_MaxSrcZoneTempSchedName_type > SimConnect_MaxSrcZoneTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_MaxSrcZoneTempSchedName_type, char > SimConnect_MaxSrcZoneTempSchedName_traits;

        const SimConnect_MaxSrcZoneTempSchedName_optional&
        SimConnect_MaxSrcZoneTempSchedName () const;

        SimConnect_MaxSrcZoneTempSchedName_optional&
        SimConnect_MaxSrcZoneTempSchedName ();

        void
        SimConnect_MaxSrcZoneTempSchedName (const SimConnect_MaxSrcZoneTempSchedName_type& x);

        void
        SimConnect_MaxSrcZoneTempSchedName (const SimConnect_MaxSrcZoneTempSchedName_optional& x);

        void
        SimConnect_MaxSrcZoneTempSchedName (::std::auto_ptr< SimConnect_MaxSrcZoneTempSchedName_type > p);

        // SimConnect_MinOutdrTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_MinOutdrTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_MinOutdrTempSchedName_type > SimConnect_MinOutdrTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_MinOutdrTempSchedName_type, char > SimConnect_MinOutdrTempSchedName_traits;

        const SimConnect_MinOutdrTempSchedName_optional&
        SimConnect_MinOutdrTempSchedName () const;

        SimConnect_MinOutdrTempSchedName_optional&
        SimConnect_MinOutdrTempSchedName ();

        void
        SimConnect_MinOutdrTempSchedName (const SimConnect_MinOutdrTempSchedName_type& x);

        void
        SimConnect_MinOutdrTempSchedName (const SimConnect_MinOutdrTempSchedName_optional& x);

        void
        SimConnect_MinOutdrTempSchedName (::std::auto_ptr< SimConnect_MinOutdrTempSchedName_type > p);

        // SimConnect_MaxOutdrTempSchedName
        //
        typedef ::xml_schema::idref SimConnect_MaxOutdrTempSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimConnect_MaxOutdrTempSchedName_type > SimConnect_MaxOutdrTempSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimConnect_MaxOutdrTempSchedName_type, char > SimConnect_MaxOutdrTempSchedName_traits;

        const SimConnect_MaxOutdrTempSchedName_optional&
        SimConnect_MaxOutdrTempSchedName () const;

        SimConnect_MaxOutdrTempSchedName_optional&
        SimConnect_MaxOutdrTempSchedName ();

        void
        SimConnect_MaxOutdrTempSchedName (const SimConnect_MaxOutdrTempSchedName_type& x);

        void
        SimConnect_MaxOutdrTempSchedName (const SimConnect_MaxOutdrTempSchedName_optional& x);

        void
        SimConnect_MaxOutdrTempSchedName (::std::auto_ptr< SimConnect_MaxOutdrTempSchedName_type > p);

        // Constructors.
        //
        SimConnection_ZoneAirFlow_ZoneMixing ();

        SimConnection_ZoneAirFlow_ZoneMixing (const RefId_type&);

        SimConnection_ZoneAirFlow_ZoneMixing (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        SimConnection_ZoneAirFlow_ZoneMixing (const SimConnection_ZoneAirFlow_ZoneMixing& x,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        virtual SimConnection_ZoneAirFlow_ZoneMixing*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimConnection_ZoneAirFlow_ZoneMixing&
        operator= (const SimConnection_ZoneAirFlow_ZoneMixing& x);

        virtual 
        ~SimConnection_ZoneAirFlow_ZoneMixing ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimConnect_Name_optional SimConnect_Name_;
        SimConnect_ZoneName_optional SimConnect_ZoneName_;
        SimConnect_SchedName_optional SimConnect_SchedName_;
        SimConnect_DesignFlowRateCalcMeth_optional SimConnect_DesignFlowRateCalcMeth_;
        SimConnect_DesignFlowRate_optional SimConnect_DesignFlowRate_;
        SimConnect_FlowRatePerZoneFlrArea_optional SimConnect_FlowRatePerZoneFlrArea_;
        SimConnect_FlowRatePerPerson_optional SimConnect_FlowRatePerPerson_;
        SimConnect_AirChngPerHour_optional SimConnect_AirChngPerHour_;
        SimConnect_SrcZoneName_optional SimConnect_SrcZoneName_;
        SimConnect_DeltaTemp_optional SimConnect_DeltaTemp_;
        SimConnect_DeltaTempSchedName_optional SimConnect_DeltaTempSchedName_;
        SimConnect_MinZoneTempSchedName_optional SimConnect_MinZoneTempSchedName_;
        SimConnect_MaxZoneTempSchedName_optional SimConnect_MaxZoneTempSchedName_;
        SimConnect_MinSrcZoneTempSchedName_optional SimConnect_MinSrcZoneTempSchedName_;
        SimConnect_MaxSrcZoneTempSchedName_optional SimConnect_MaxSrcZoneTempSchedName_;
        SimConnect_MinOutdrTempSchedName_optional SimConnect_MinOutdrTempSchedName_;
        SimConnect_MaxOutdrTempSchedName_optional SimConnect_MaxOutdrTempSchedName_;
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

#endif // SIM_CONNECTION_ZONE_AIR_FLOW_ZONE_MIXING_HXX
