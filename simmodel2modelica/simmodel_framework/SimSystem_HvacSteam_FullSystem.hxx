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

#ifndef SIM_SYSTEM_HVAC_STEAM_FULL_SYSTEM_HXX
#define SIM_SYSTEM_HVAC_STEAM_FULL_SYSTEM_HXX

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
      class SimSystem_HvacSteam_FullSystem;
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

#include "simsystem_hvacsteam.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSystem_HvacSteam_FullSystem: public ::namespaces::Sim::BuildingModel::SimSystem_HvacSteam
      {
        public:
        // SimSys_AvailMngrListName
        //
        typedef ::xml_schema::idref SimSys_AvailMngrListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_AvailMngrListName_type > SimSys_AvailMngrListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_AvailMngrListName_type, char > SimSys_AvailMngrListName_traits;

        const SimSys_AvailMngrListName_optional&
        SimSys_AvailMngrListName () const;

        SimSys_AvailMngrListName_optional&
        SimSys_AvailMngrListName ();

        void
        SimSys_AvailMngrListName (const SimSys_AvailMngrListName_type& x);

        void
        SimSys_AvailMngrListName (const SimSys_AvailMngrListName_optional& x);

        void
        SimSys_AvailMngrListName (::std::auto_ptr< SimSys_AvailMngrListName_type > p);

        // SimSys_DemandSideOutNodeName
        //
        typedef ::xml_schema::string SimSys_DemandSideOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DemandSideOutNodeName_type > SimSys_DemandSideOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DemandSideOutNodeName_type, char > SimSys_DemandSideOutNodeName_traits;

        const SimSys_DemandSideOutNodeName_optional&
        SimSys_DemandSideOutNodeName () const;

        SimSys_DemandSideOutNodeName_optional&
        SimSys_DemandSideOutNodeName ();

        void
        SimSys_DemandSideOutNodeName (const SimSys_DemandSideOutNodeName_type& x);

        void
        SimSys_DemandSideOutNodeName (const SimSys_DemandSideOutNodeName_optional& x);

        void
        SimSys_DemandSideOutNodeName (::std::auto_ptr< SimSys_DemandSideOutNodeName_type > p);

        // SimSys_FluidType
        //
        typedef ::xml_schema::string SimSys_FluidType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_FluidType_type > SimSys_FluidType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_FluidType_type, char > SimSys_FluidType_traits;

        const SimSys_FluidType_optional&
        SimSys_FluidType () const;

        SimSys_FluidType_optional&
        SimSys_FluidType ();

        void
        SimSys_FluidType (const SimSys_FluidType_type& x);

        void
        SimSys_FluidType (const SimSys_FluidType_optional& x);

        void
        SimSys_FluidType (::std::auto_ptr< SimSys_FluidType_type > p);

        // SimSys_UserDefFluidType
        //
        typedef ::xml_schema::idref SimSys_UserDefFluidType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_UserDefFluidType_type > SimSys_UserDefFluidType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_UserDefFluidType_type, char > SimSys_UserDefFluidType_traits;

        const SimSys_UserDefFluidType_optional&
        SimSys_UserDefFluidType () const;

        SimSys_UserDefFluidType_optional&
        SimSys_UserDefFluidType ();

        void
        SimSys_UserDefFluidType (const SimSys_UserDefFluidType_type& x);

        void
        SimSys_UserDefFluidType (const SimSys_UserDefFluidType_optional& x);

        void
        SimSys_UserDefFluidType (::std::auto_ptr< SimSys_UserDefFluidType_type > p);

        // SimSys_PlantEqmtOpSchemeName
        //
        typedef ::xml_schema::idref SimSys_PlantEqmtOpSchemeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantEqmtOpSchemeName_type > SimSys_PlantEqmtOpSchemeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantEqmtOpSchemeName_type, char > SimSys_PlantEqmtOpSchemeName_traits;

        const SimSys_PlantEqmtOpSchemeName_optional&
        SimSys_PlantEqmtOpSchemeName () const;

        SimSys_PlantEqmtOpSchemeName_optional&
        SimSys_PlantEqmtOpSchemeName ();

        void
        SimSys_PlantEqmtOpSchemeName (const SimSys_PlantEqmtOpSchemeName_type& x);

        void
        SimSys_PlantEqmtOpSchemeName (const SimSys_PlantEqmtOpSchemeName_optional& x);

        void
        SimSys_PlantEqmtOpSchemeName (::std::auto_ptr< SimSys_PlantEqmtOpSchemeName_type > p);

        // SimSys_LoopTempSetpntNodeName
        //
        typedef ::xml_schema::string SimSys_LoopTempSetpntNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_LoopTempSetpntNodeName_type > SimSys_LoopTempSetpntNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_LoopTempSetpntNodeName_type, char > SimSys_LoopTempSetpntNodeName_traits;

        const SimSys_LoopTempSetpntNodeName_optional&
        SimSys_LoopTempSetpntNodeName () const;

        SimSys_LoopTempSetpntNodeName_optional&
        SimSys_LoopTempSetpntNodeName ();

        void
        SimSys_LoopTempSetpntNodeName (const SimSys_LoopTempSetpntNodeName_type& x);

        void
        SimSys_LoopTempSetpntNodeName (const SimSys_LoopTempSetpntNodeName_optional& x);

        void
        SimSys_LoopTempSetpntNodeName (::std::auto_ptr< SimSys_LoopTempSetpntNodeName_type > p);

        // SimSys_MaxLoopTemp
        //
        typedef ::xml_schema::double_ SimSys_MaxLoopTemp_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MaxLoopTemp_type > SimSys_MaxLoopTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MaxLoopTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_MaxLoopTemp_traits;

        const SimSys_MaxLoopTemp_optional&
        SimSys_MaxLoopTemp () const;

        SimSys_MaxLoopTemp_optional&
        SimSys_MaxLoopTemp ();

        void
        SimSys_MaxLoopTemp (const SimSys_MaxLoopTemp_type& x);

        void
        SimSys_MaxLoopTemp (const SimSys_MaxLoopTemp_optional& x);

        // SimSys_MinLoopTemp
        //
        typedef ::xml_schema::double_ SimSys_MinLoopTemp_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MinLoopTemp_type > SimSys_MinLoopTemp_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MinLoopTemp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_MinLoopTemp_traits;

        const SimSys_MinLoopTemp_optional&
        SimSys_MinLoopTemp () const;

        SimSys_MinLoopTemp_optional&
        SimSys_MinLoopTemp ();

        void
        SimSys_MinLoopTemp (const SimSys_MinLoopTemp_type& x);

        void
        SimSys_MinLoopTemp (const SimSys_MinLoopTemp_optional& x);

        // SimSys_MaxLoopFlowRate
        //
        typedef ::xml_schema::double_ SimSys_MaxLoopFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MaxLoopFlowRate_type > SimSys_MaxLoopFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MaxLoopFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_MaxLoopFlowRate_traits;

        const SimSys_MaxLoopFlowRate_optional&
        SimSys_MaxLoopFlowRate () const;

        SimSys_MaxLoopFlowRate_optional&
        SimSys_MaxLoopFlowRate ();

        void
        SimSys_MaxLoopFlowRate (const SimSys_MaxLoopFlowRate_type& x);

        void
        SimSys_MaxLoopFlowRate (const SimSys_MaxLoopFlowRate_optional& x);

        // SimSys_MinLoopFlowRate
        //
        typedef ::xml_schema::double_ SimSys_MinLoopFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MinLoopFlowRate_type > SimSys_MinLoopFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MinLoopFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_MinLoopFlowRate_traits;

        const SimSys_MinLoopFlowRate_optional&
        SimSys_MinLoopFlowRate () const;

        SimSys_MinLoopFlowRate_optional&
        SimSys_MinLoopFlowRate ();

        void
        SimSys_MinLoopFlowRate (const SimSys_MinLoopFlowRate_type& x);

        void
        SimSys_MinLoopFlowRate (const SimSys_MinLoopFlowRate_optional& x);

        // SimSys_PlantLoopVolume
        //
        typedef ::xml_schema::double_ SimSys_PlantLoopVolume_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantLoopVolume_type > SimSys_PlantLoopVolume_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantLoopVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_PlantLoopVolume_traits;

        const SimSys_PlantLoopVolume_optional&
        SimSys_PlantLoopVolume () const;

        SimSys_PlantLoopVolume_optional&
        SimSys_PlantLoopVolume ();

        void
        SimSys_PlantLoopVolume (const SimSys_PlantLoopVolume_type& x);

        void
        SimSys_PlantLoopVolume (const SimSys_PlantLoopVolume_optional& x);

        // SimSys_PlantSideInNodeName
        //
        typedef ::xml_schema::string SimSys_PlantSideInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantSideInNodeName_type > SimSys_PlantSideInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantSideInNodeName_type, char > SimSys_PlantSideInNodeName_traits;

        const SimSys_PlantSideInNodeName_optional&
        SimSys_PlantSideInNodeName () const;

        SimSys_PlantSideInNodeName_optional&
        SimSys_PlantSideInNodeName ();

        void
        SimSys_PlantSideInNodeName (const SimSys_PlantSideInNodeName_type& x);

        void
        SimSys_PlantSideInNodeName (const SimSys_PlantSideInNodeName_optional& x);

        void
        SimSys_PlantSideInNodeName (::std::auto_ptr< SimSys_PlantSideInNodeName_type > p);

        // SimSys_PlantSideOutNodeName
        //
        typedef ::xml_schema::string SimSys_PlantSideOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantSideOutNodeName_type > SimSys_PlantSideOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantSideOutNodeName_type, char > SimSys_PlantSideOutNodeName_traits;

        const SimSys_PlantSideOutNodeName_optional&
        SimSys_PlantSideOutNodeName () const;

        SimSys_PlantSideOutNodeName_optional&
        SimSys_PlantSideOutNodeName ();

        void
        SimSys_PlantSideOutNodeName (const SimSys_PlantSideOutNodeName_type& x);

        void
        SimSys_PlantSideOutNodeName (const SimSys_PlantSideOutNodeName_optional& x);

        void
        SimSys_PlantSideOutNodeName (::std::auto_ptr< SimSys_PlantSideOutNodeName_type > p);

        // SimSys_PlantSideBranchListName
        //
        typedef ::xml_schema::idref SimSys_PlantSideBranchListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantSideBranchListName_type > SimSys_PlantSideBranchListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantSideBranchListName_type, char > SimSys_PlantSideBranchListName_traits;

        const SimSys_PlantSideBranchListName_optional&
        SimSys_PlantSideBranchListName () const;

        SimSys_PlantSideBranchListName_optional&
        SimSys_PlantSideBranchListName ();

        void
        SimSys_PlantSideBranchListName (const SimSys_PlantSideBranchListName_type& x);

        void
        SimSys_PlantSideBranchListName (const SimSys_PlantSideBranchListName_optional& x);

        void
        SimSys_PlantSideBranchListName (::std::auto_ptr< SimSys_PlantSideBranchListName_type > p);

        // SimSys_PlantSideConnListName
        //
        typedef ::xml_schema::idref SimSys_PlantSideConnListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantSideConnListName_type > SimSys_PlantSideConnListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantSideConnListName_type, char > SimSys_PlantSideConnListName_traits;

        const SimSys_PlantSideConnListName_optional&
        SimSys_PlantSideConnListName () const;

        SimSys_PlantSideConnListName_optional&
        SimSys_PlantSideConnListName ();

        void
        SimSys_PlantSideConnListName (const SimSys_PlantSideConnListName_type& x);

        void
        SimSys_PlantSideConnListName (const SimSys_PlantSideConnListName_optional& x);

        void
        SimSys_PlantSideConnListName (::std::auto_ptr< SimSys_PlantSideConnListName_type > p);

        // SimSys_DemandSideInNodeName
        //
        typedef ::xml_schema::string SimSys_DemandSideInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DemandSideInNodeName_type > SimSys_DemandSideInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DemandSideInNodeName_type, char > SimSys_DemandSideInNodeName_traits;

        const SimSys_DemandSideInNodeName_optional&
        SimSys_DemandSideInNodeName () const;

        SimSys_DemandSideInNodeName_optional&
        SimSys_DemandSideInNodeName ();

        void
        SimSys_DemandSideInNodeName (const SimSys_DemandSideInNodeName_type& x);

        void
        SimSys_DemandSideInNodeName (const SimSys_DemandSideInNodeName_optional& x);

        void
        SimSys_DemandSideInNodeName (::std::auto_ptr< SimSys_DemandSideInNodeName_type > p);

        // SimSys_DemandSideBranchListName
        //
        typedef ::xml_schema::idref SimSys_DemandSideBranchListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DemandSideBranchListName_type > SimSys_DemandSideBranchListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DemandSideBranchListName_type, char > SimSys_DemandSideBranchListName_traits;

        const SimSys_DemandSideBranchListName_optional&
        SimSys_DemandSideBranchListName () const;

        SimSys_DemandSideBranchListName_optional&
        SimSys_DemandSideBranchListName ();

        void
        SimSys_DemandSideBranchListName (const SimSys_DemandSideBranchListName_type& x);

        void
        SimSys_DemandSideBranchListName (const SimSys_DemandSideBranchListName_optional& x);

        void
        SimSys_DemandSideBranchListName (::std::auto_ptr< SimSys_DemandSideBranchListName_type > p);

        // SimSys_DemandSideConnListName
        //
        typedef ::xml_schema::idref SimSys_DemandSideConnListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_DemandSideConnListName_type > SimSys_DemandSideConnListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_DemandSideConnListName_type, char > SimSys_DemandSideConnListName_traits;

        const SimSys_DemandSideConnListName_optional&
        SimSys_DemandSideConnListName () const;

        SimSys_DemandSideConnListName_optional&
        SimSys_DemandSideConnListName ();

        void
        SimSys_DemandSideConnListName (const SimSys_DemandSideConnListName_type& x);

        void
        SimSys_DemandSideConnListName (const SimSys_DemandSideConnListName_optional& x);

        void
        SimSys_DemandSideConnListName (::std::auto_ptr< SimSys_DemandSideConnListName_type > p);

        // SimSys_LoadDistScheme
        //
        typedef ::xml_schema::string SimSys_LoadDistScheme_type;
        typedef ::xsd::cxx::tree::optional< SimSys_LoadDistScheme_type > SimSys_LoadDistScheme_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_LoadDistScheme_type, char > SimSys_LoadDistScheme_traits;

        const SimSys_LoadDistScheme_optional&
        SimSys_LoadDistScheme () const;

        SimSys_LoadDistScheme_optional&
        SimSys_LoadDistScheme ();

        void
        SimSys_LoadDistScheme (const SimSys_LoadDistScheme_type& x);

        void
        SimSys_LoadDistScheme (const SimSys_LoadDistScheme_optional& x);

        void
        SimSys_LoadDistScheme (::std::auto_ptr< SimSys_LoadDistScheme_type > p);

        // SimSys_PlantLoopDemandCalcScheme
        //
        typedef ::xml_schema::string SimSys_PlantLoopDemandCalcScheme_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PlantLoopDemandCalcScheme_type > SimSys_PlantLoopDemandCalcScheme_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PlantLoopDemandCalcScheme_type, char > SimSys_PlantLoopDemandCalcScheme_traits;

        const SimSys_PlantLoopDemandCalcScheme_optional&
        SimSys_PlantLoopDemandCalcScheme () const;

        SimSys_PlantLoopDemandCalcScheme_optional&
        SimSys_PlantLoopDemandCalcScheme ();

        void
        SimSys_PlantLoopDemandCalcScheme (const SimSys_PlantLoopDemandCalcScheme_type& x);

        void
        SimSys_PlantLoopDemandCalcScheme (const SimSys_PlantLoopDemandCalcScheme_optional& x);

        void
        SimSys_PlantLoopDemandCalcScheme (::std::auto_ptr< SimSys_PlantLoopDemandCalcScheme_type > p);

        // SimSys_CommonPipeSim
        //
        typedef ::xml_schema::string SimSys_CommonPipeSim_type;
        typedef ::xsd::cxx::tree::optional< SimSys_CommonPipeSim_type > SimSys_CommonPipeSim_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_CommonPipeSim_type, char > SimSys_CommonPipeSim_traits;

        const SimSys_CommonPipeSim_optional&
        SimSys_CommonPipeSim () const;

        SimSys_CommonPipeSim_optional&
        SimSys_CommonPipeSim ();

        void
        SimSys_CommonPipeSim (const SimSys_CommonPipeSim_type& x);

        void
        SimSys_CommonPipeSim (const SimSys_CommonPipeSim_optional& x);

        void
        SimSys_CommonPipeSim (::std::auto_ptr< SimSys_CommonPipeSim_type > p);

        // SimSys_PresSimType
        //
        typedef ::xml_schema::string SimSys_PresSimType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_PresSimType_type > SimSys_PresSimType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_PresSimType_type, char > SimSys_PresSimType_traits;

        const SimSys_PresSimType_optional&
        SimSys_PresSimType () const;

        SimSys_PresSimType_optional&
        SimSys_PresSimType ();

        void
        SimSys_PresSimType (const SimSys_PresSimType_type& x);

        void
        SimSys_PresSimType (const SimSys_PresSimType_optional& x);

        void
        SimSys_PresSimType (::std::auto_ptr< SimSys_PresSimType_type > p);

        // Constructors.
        //
        SimSystem_HvacSteam_FullSystem (const RefId_type&);

        SimSystem_HvacSteam_FullSystem (const ::xercesc::DOMElement& e,
                                        ::xml_schema::flags f = 0,
                                        ::xml_schema::container* c = 0);

        SimSystem_HvacSteam_FullSystem (const SimSystem_HvacSteam_FullSystem& x,
                                        ::xml_schema::flags f = 0,
                                        ::xml_schema::container* c = 0);

        virtual SimSystem_HvacSteam_FullSystem*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSystem_HvacSteam_FullSystem&
        operator= (const SimSystem_HvacSteam_FullSystem& x);

        virtual 
        ~SimSystem_HvacSteam_FullSystem ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSys_AvailMngrListName_optional SimSys_AvailMngrListName_;
        SimSys_DemandSideOutNodeName_optional SimSys_DemandSideOutNodeName_;
        SimSys_FluidType_optional SimSys_FluidType_;
        SimSys_UserDefFluidType_optional SimSys_UserDefFluidType_;
        SimSys_PlantEqmtOpSchemeName_optional SimSys_PlantEqmtOpSchemeName_;
        SimSys_LoopTempSetpntNodeName_optional SimSys_LoopTempSetpntNodeName_;
        SimSys_MaxLoopTemp_optional SimSys_MaxLoopTemp_;
        SimSys_MinLoopTemp_optional SimSys_MinLoopTemp_;
        SimSys_MaxLoopFlowRate_optional SimSys_MaxLoopFlowRate_;
        SimSys_MinLoopFlowRate_optional SimSys_MinLoopFlowRate_;
        SimSys_PlantLoopVolume_optional SimSys_PlantLoopVolume_;
        SimSys_PlantSideInNodeName_optional SimSys_PlantSideInNodeName_;
        SimSys_PlantSideOutNodeName_optional SimSys_PlantSideOutNodeName_;
        SimSys_PlantSideBranchListName_optional SimSys_PlantSideBranchListName_;
        SimSys_PlantSideConnListName_optional SimSys_PlantSideConnListName_;
        SimSys_DemandSideInNodeName_optional SimSys_DemandSideInNodeName_;
        SimSys_DemandSideBranchListName_optional SimSys_DemandSideBranchListName_;
        SimSys_DemandSideConnListName_optional SimSys_DemandSideConnListName_;
        SimSys_LoadDistScheme_optional SimSys_LoadDistScheme_;
        SimSys_PlantLoopDemandCalcScheme_optional SimSys_PlantLoopDemandCalcScheme_;
        SimSys_CommonPipeSim_optional SimSys_CommonPipeSim_;
        SimSys_PresSimType_optional SimSys_PresSimType_;
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

#endif // SIM_SYSTEM_HVAC_STEAM_FULL_SYSTEM_HXX
