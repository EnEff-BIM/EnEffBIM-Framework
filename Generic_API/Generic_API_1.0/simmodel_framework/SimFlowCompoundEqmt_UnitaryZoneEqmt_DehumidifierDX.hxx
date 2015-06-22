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

#ifndef SIM_FLOW_COMPOUND_EQMT_UNITARY_ZONE_EQMT_DEHUMIDIFIER_DX_HXX
#define SIM_FLOW_COMPOUND_EQMT_UNITARY_ZONE_EQMT_DEHUMIDIFIER_DX_HXX

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
    namespace MepModel
    {
      class SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX;
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

#include "simflowcompoundeqmt_unitaryzoneeqmt.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      class SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX: public ::namespaces::Sim::MepModel::SimFlowCompoundEqmt_UnitaryZoneEqmt
      {
        public:
        // SimFlowCompEqmt_AvailSchedName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_AvailSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AvailSchedName_type > SimFlowCompEqmt_AvailSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AvailSchedName_type, char > SimFlowCompEqmt_AvailSchedName_traits;

        const SimFlowCompEqmt_AvailSchedName_optional&
        SimFlowCompEqmt_AvailSchedName () const;

        SimFlowCompEqmt_AvailSchedName_optional&
        SimFlowCompEqmt_AvailSchedName ();

        void
        SimFlowCompEqmt_AvailSchedName (const SimFlowCompEqmt_AvailSchedName_type& x);

        void
        SimFlowCompEqmt_AvailSchedName (const SimFlowCompEqmt_AvailSchedName_optional& x);

        void
        SimFlowCompEqmt_AvailSchedName (::std::auto_ptr< SimFlowCompEqmt_AvailSchedName_type > p);

        // SimFlowCompEqmt_AirInNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_AirInNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AirInNodeName_type > SimFlowCompEqmt_AirInNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AirInNodeName_type, char > SimFlowCompEqmt_AirInNodeName_traits;

        const SimFlowCompEqmt_AirInNodeName_optional&
        SimFlowCompEqmt_AirInNodeName () const;

        SimFlowCompEqmt_AirInNodeName_optional&
        SimFlowCompEqmt_AirInNodeName ();

        void
        SimFlowCompEqmt_AirInNodeName (const SimFlowCompEqmt_AirInNodeName_type& x);

        void
        SimFlowCompEqmt_AirInNodeName (const SimFlowCompEqmt_AirInNodeName_optional& x);

        void
        SimFlowCompEqmt_AirInNodeName (::std::auto_ptr< SimFlowCompEqmt_AirInNodeName_type > p);

        // SimFlowCompEqmt_AirOutNodeName
        //
        typedef ::xml_schema::string SimFlowCompEqmt_AirOutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_AirOutNodeName_type > SimFlowCompEqmt_AirOutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_AirOutNodeName_type, char > SimFlowCompEqmt_AirOutNodeName_traits;

        const SimFlowCompEqmt_AirOutNodeName_optional&
        SimFlowCompEqmt_AirOutNodeName () const;

        SimFlowCompEqmt_AirOutNodeName_optional&
        SimFlowCompEqmt_AirOutNodeName ();

        void
        SimFlowCompEqmt_AirOutNodeName (const SimFlowCompEqmt_AirOutNodeName_type& x);

        void
        SimFlowCompEqmt_AirOutNodeName (const SimFlowCompEqmt_AirOutNodeName_optional& x);

        void
        SimFlowCompEqmt_AirOutNodeName (::std::auto_ptr< SimFlowCompEqmt_AirOutNodeName_type > p);

        // SimFlowCompEqmt_RatedWaterRemov
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_RatedWaterRemov_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_RatedWaterRemov_type > SimFlowCompEqmt_RatedWaterRemov_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_RatedWaterRemov_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_RatedWaterRemov_traits;

        const SimFlowCompEqmt_RatedWaterRemov_optional&
        SimFlowCompEqmt_RatedWaterRemov () const;

        SimFlowCompEqmt_RatedWaterRemov_optional&
        SimFlowCompEqmt_RatedWaterRemov ();

        void
        SimFlowCompEqmt_RatedWaterRemov (const SimFlowCompEqmt_RatedWaterRemov_type& x);

        void
        SimFlowCompEqmt_RatedWaterRemov (const SimFlowCompEqmt_RatedWaterRemov_optional& x);

        // SimFlowCompEqmt_RatedEnergyFactor
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_RatedEnergyFactor_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_RatedEnergyFactor_type > SimFlowCompEqmt_RatedEnergyFactor_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_RatedEnergyFactor_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_RatedEnergyFactor_traits;

        const SimFlowCompEqmt_RatedEnergyFactor_optional&
        SimFlowCompEqmt_RatedEnergyFactor () const;

        SimFlowCompEqmt_RatedEnergyFactor_optional&
        SimFlowCompEqmt_RatedEnergyFactor ();

        void
        SimFlowCompEqmt_RatedEnergyFactor (const SimFlowCompEqmt_RatedEnergyFactor_type& x);

        void
        SimFlowCompEqmt_RatedEnergyFactor (const SimFlowCompEqmt_RatedEnergyFactor_optional& x);

        // SimFlowCompEqmt_RatedAirFlowRate
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_RatedAirFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_RatedAirFlowRate_type > SimFlowCompEqmt_RatedAirFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_RatedAirFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_RatedAirFlowRate_traits;

        const SimFlowCompEqmt_RatedAirFlowRate_optional&
        SimFlowCompEqmt_RatedAirFlowRate () const;

        SimFlowCompEqmt_RatedAirFlowRate_optional&
        SimFlowCompEqmt_RatedAirFlowRate ();

        void
        SimFlowCompEqmt_RatedAirFlowRate (const SimFlowCompEqmt_RatedAirFlowRate_type& x);

        void
        SimFlowCompEqmt_RatedAirFlowRate (const SimFlowCompEqmt_RatedAirFlowRate_optional& x);

        // SimFlowCompEqmt_WaterRemovCurveName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_WaterRemovCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_WaterRemovCurveName_type > SimFlowCompEqmt_WaterRemovCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_WaterRemovCurveName_type, char > SimFlowCompEqmt_WaterRemovCurveName_traits;

        const SimFlowCompEqmt_WaterRemovCurveName_optional&
        SimFlowCompEqmt_WaterRemovCurveName () const;

        SimFlowCompEqmt_WaterRemovCurveName_optional&
        SimFlowCompEqmt_WaterRemovCurveName ();

        void
        SimFlowCompEqmt_WaterRemovCurveName (const SimFlowCompEqmt_WaterRemovCurveName_type& x);

        void
        SimFlowCompEqmt_WaterRemovCurveName (const SimFlowCompEqmt_WaterRemovCurveName_optional& x);

        void
        SimFlowCompEqmt_WaterRemovCurveName (::std::auto_ptr< SimFlowCompEqmt_WaterRemovCurveName_type > p);

        // SimFlowCompEqmt_EnergyFactorCurveName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_EnergyFactorCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_EnergyFactorCurveName_type > SimFlowCompEqmt_EnergyFactorCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_EnergyFactorCurveName_type, char > SimFlowCompEqmt_EnergyFactorCurveName_traits;

        const SimFlowCompEqmt_EnergyFactorCurveName_optional&
        SimFlowCompEqmt_EnergyFactorCurveName () const;

        SimFlowCompEqmt_EnergyFactorCurveName_optional&
        SimFlowCompEqmt_EnergyFactorCurveName ();

        void
        SimFlowCompEqmt_EnergyFactorCurveName (const SimFlowCompEqmt_EnergyFactorCurveName_type& x);

        void
        SimFlowCompEqmt_EnergyFactorCurveName (const SimFlowCompEqmt_EnergyFactorCurveName_optional& x);

        void
        SimFlowCompEqmt_EnergyFactorCurveName (::std::auto_ptr< SimFlowCompEqmt_EnergyFactorCurveName_type > p);

        // SimFlowCompEqmt_PartLoadFractCorrelCurveName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_PartLoadFractCorrelCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_PartLoadFractCorrelCurveName_type > SimFlowCompEqmt_PartLoadFractCorrelCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_PartLoadFractCorrelCurveName_type, char > SimFlowCompEqmt_PartLoadFractCorrelCurveName_traits;

        const SimFlowCompEqmt_PartLoadFractCorrelCurveName_optional&
        SimFlowCompEqmt_PartLoadFractCorrelCurveName () const;

        SimFlowCompEqmt_PartLoadFractCorrelCurveName_optional&
        SimFlowCompEqmt_PartLoadFractCorrelCurveName ();

        void
        SimFlowCompEqmt_PartLoadFractCorrelCurveName (const SimFlowCompEqmt_PartLoadFractCorrelCurveName_type& x);

        void
        SimFlowCompEqmt_PartLoadFractCorrelCurveName (const SimFlowCompEqmt_PartLoadFractCorrelCurveName_optional& x);

        void
        SimFlowCompEqmt_PartLoadFractCorrelCurveName (::std::auto_ptr< SimFlowCompEqmt_PartLoadFractCorrelCurveName_type > p);

        // SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_type > SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_traits;

        const SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_optional&
        SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp () const;

        SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_optional&
        SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp ();

        void
        SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp (const SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_type& x);

        void
        SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp (const SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_optional& x);

        // SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_type > SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_traits;

        const SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_optional&
        SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp () const;

        SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_optional&
        SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp ();

        void
        SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp (const SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_type& x);

        void
        SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp (const SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_optional& x);

        // SimFlowCompEqmt_fCycleParasiticElecLoad
        //
        typedef ::xml_schema::double_ SimFlowCompEqmt_fCycleParasiticElecLoad_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_fCycleParasiticElecLoad_type > SimFlowCompEqmt_fCycleParasiticElecLoad_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_fCycleParasiticElecLoad_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowCompEqmt_fCycleParasiticElecLoad_traits;

        const SimFlowCompEqmt_fCycleParasiticElecLoad_optional&
        SimFlowCompEqmt_fCycleParasiticElecLoad () const;

        SimFlowCompEqmt_fCycleParasiticElecLoad_optional&
        SimFlowCompEqmt_fCycleParasiticElecLoad ();

        void
        SimFlowCompEqmt_fCycleParasiticElecLoad (const SimFlowCompEqmt_fCycleParasiticElecLoad_type& x);

        void
        SimFlowCompEqmt_fCycleParasiticElecLoad (const SimFlowCompEqmt_fCycleParasiticElecLoad_optional& x);

        // SimFlowCompEqmt_CondsCollectionWaterStorageTankName
        //
        typedef ::xml_schema::idref SimFlowCompEqmt_CondsCollectionWaterStorageTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowCompEqmt_CondsCollectionWaterStorageTankName_type > SimFlowCompEqmt_CondsCollectionWaterStorageTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowCompEqmt_CondsCollectionWaterStorageTankName_type, char > SimFlowCompEqmt_CondsCollectionWaterStorageTankName_traits;

        const SimFlowCompEqmt_CondsCollectionWaterStorageTankName_optional&
        SimFlowCompEqmt_CondsCollectionWaterStorageTankName () const;

        SimFlowCompEqmt_CondsCollectionWaterStorageTankName_optional&
        SimFlowCompEqmt_CondsCollectionWaterStorageTankName ();

        void
        SimFlowCompEqmt_CondsCollectionWaterStorageTankName (const SimFlowCompEqmt_CondsCollectionWaterStorageTankName_type& x);

        void
        SimFlowCompEqmt_CondsCollectionWaterStorageTankName (const SimFlowCompEqmt_CondsCollectionWaterStorageTankName_optional& x);

        void
        SimFlowCompEqmt_CondsCollectionWaterStorageTankName (::std::auto_ptr< SimFlowCompEqmt_CondsCollectionWaterStorageTankName_type > p);

        // Constructors.
        //
        SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX (const RefId_type&);

        SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX (const ::xercesc::DOMElement& e,
                                                            ::xml_schema::flags f = 0,
                                                            ::xml_schema::container* c = 0);

        SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX (const SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX& x,
                                                            ::xml_schema::flags f = 0,
                                                            ::xml_schema::container* c = 0);

        virtual SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX&
        operator= (const SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX& x);

        virtual 
        ~SimFlowCompoundEqmt_UnitaryZoneEqmt_DehumidifierDX ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowCompEqmt_AvailSchedName_optional SimFlowCompEqmt_AvailSchedName_;
        SimFlowCompEqmt_AirInNodeName_optional SimFlowCompEqmt_AirInNodeName_;
        SimFlowCompEqmt_AirOutNodeName_optional SimFlowCompEqmt_AirOutNodeName_;
        SimFlowCompEqmt_RatedWaterRemov_optional SimFlowCompEqmt_RatedWaterRemov_;
        SimFlowCompEqmt_RatedEnergyFactor_optional SimFlowCompEqmt_RatedEnergyFactor_;
        SimFlowCompEqmt_RatedAirFlowRate_optional SimFlowCompEqmt_RatedAirFlowRate_;
        SimFlowCompEqmt_WaterRemovCurveName_optional SimFlowCompEqmt_WaterRemovCurveName_;
        SimFlowCompEqmt_EnergyFactorCurveName_optional SimFlowCompEqmt_EnergyFactorCurveName_;
        SimFlowCompEqmt_PartLoadFractCorrelCurveName_optional SimFlowCompEqmt_PartLoadFractCorrelCurveName_;
        SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_optional SimFlowCompEqmt_MinDryBulbTempForDehumidifierOp_;
        SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_optional SimFlowCompEqmt_MaxDryBulbTempForDehumidifierOp_;
        SimFlowCompEqmt_fCycleParasiticElecLoad_optional SimFlowCompEqmt_fCycleParasiticElecLoad_;
        SimFlowCompEqmt_CondsCollectionWaterStorageTankName_optional SimFlowCompEqmt_CondsCollectionWaterStorageTankName_;
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

#endif // SIM_FLOW_COMPOUND_EQMT_UNITARY_ZONE_EQMT_DEHUMIDIFIER_DX_HXX