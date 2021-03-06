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

#ifndef SIM_FLOW_ENERGY_TRANSFER_COIL_HXX
#define SIM_FLOW_ENERGY_TRANSFER_COIL_HXX

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
      class SimFlowEnergyTransfer_Coil;
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

#include "simflowenergytransfer.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTrans_AirConn_1_2_InletNodeName;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTrans_AirConn_1_2_OutletNodeName;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowEnergyTransfer_Coil: public ::schema::simxml::MepModel::SimFlowEnergyTransfer
      {
        public:
        // SimFlowEnergyTrans_Name
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_Name_type > SimFlowEnergyTrans_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_Name_type, char > SimFlowEnergyTrans_Name_traits;

        const SimFlowEnergyTrans_Name_optional&
        SimFlowEnergyTrans_Name () const;

        SimFlowEnergyTrans_Name_optional&
        SimFlowEnergyTrans_Name ();

        void
        SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_type& x);

        void
        SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_optional& x);

        void
        SimFlowEnergyTrans_Name (::std::auto_ptr< SimFlowEnergyTrans_Name_type > p);

        // SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_type > SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_type, char > SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_traits;

        const SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_optional&
        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName () const;

        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_optional&
        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName ();

        void
        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName (const SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_type& x);

        void
        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName (const SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_optional& x);

        void
        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName (::std::auto_ptr< SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_type > p);

        // SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_type > SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_type, char > SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_traits;

        const SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_optional&
        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName () const;

        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_optional&
        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName ();

        void
        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName (const SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_type& x);

        void
        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName (const SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_optional& x);

        void
        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName (::std::auto_ptr< SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_type > p);

        // SimFlowEnergyTrans_NumberOfAirConns
        //
        typedef ::xml_schema::int_ SimFlowEnergyTrans_NumberOfAirConns_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_NumberOfAirConns_type > SimFlowEnergyTrans_NumberOfAirConns_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_NumberOfAirConns_type, char > SimFlowEnergyTrans_NumberOfAirConns_traits;

        const SimFlowEnergyTrans_NumberOfAirConns_optional&
        SimFlowEnergyTrans_NumberOfAirConns () const;

        SimFlowEnergyTrans_NumberOfAirConns_optional&
        SimFlowEnergyTrans_NumberOfAirConns ();

        void
        SimFlowEnergyTrans_NumberOfAirConns (const SimFlowEnergyTrans_NumberOfAirConns_type& x);

        void
        SimFlowEnergyTrans_NumberOfAirConns (const SimFlowEnergyTrans_NumberOfAirConns_optional& x);

        // SimFlowEnergyTrans_AirConn_1_2_InletNodeName
        //
        typedef ::schema::simxml::MepModel::SimFlowEnergyTrans_AirConn_1_2_InletNodeName SimFlowEnergyTrans_AirConn_1_2_InletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AirConn_1_2_InletNodeName_type > SimFlowEnergyTrans_AirConn_1_2_InletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AirConn_1_2_InletNodeName_type, char > SimFlowEnergyTrans_AirConn_1_2_InletNodeName_traits;

        const SimFlowEnergyTrans_AirConn_1_2_InletNodeName_optional&
        SimFlowEnergyTrans_AirConn_1_2_InletNodeName () const;

        SimFlowEnergyTrans_AirConn_1_2_InletNodeName_optional&
        SimFlowEnergyTrans_AirConn_1_2_InletNodeName ();

        void
        SimFlowEnergyTrans_AirConn_1_2_InletNodeName (const SimFlowEnergyTrans_AirConn_1_2_InletNodeName_type& x);

        void
        SimFlowEnergyTrans_AirConn_1_2_InletNodeName (const SimFlowEnergyTrans_AirConn_1_2_InletNodeName_optional& x);

        void
        SimFlowEnergyTrans_AirConn_1_2_InletNodeName (::std::auto_ptr< SimFlowEnergyTrans_AirConn_1_2_InletNodeName_type > p);

        // SimFlowEnergyTrans_AirConn_1_2_OutletNodeName
        //
        typedef ::schema::simxml::MepModel::SimFlowEnergyTrans_AirConn_1_2_OutletNodeName SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_type > SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_type, char > SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_traits;

        const SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_optional&
        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName () const;

        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_optional&
        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName ();

        void
        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName (const SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_type& x);

        void
        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName (const SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_type > p);

        // SimFlowEnergyTrans_PlantConnIsUsed
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_PlantConnIsUsed_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PlantConnIsUsed_type > SimFlowEnergyTrans_PlantConnIsUsed_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PlantConnIsUsed_type, char > SimFlowEnergyTrans_PlantConnIsUsed_traits;

        const SimFlowEnergyTrans_PlantConnIsUsed_optional&
        SimFlowEnergyTrans_PlantConnIsUsed () const;

        SimFlowEnergyTrans_PlantConnIsUsed_optional&
        SimFlowEnergyTrans_PlantConnIsUsed ();

        void
        SimFlowEnergyTrans_PlantConnIsUsed (const SimFlowEnergyTrans_PlantConnIsUsed_type& x);

        void
        SimFlowEnergyTrans_PlantConnIsUsed (const SimFlowEnergyTrans_PlantConnIsUsed_optional& x);

        void
        SimFlowEnergyTrans_PlantConnIsUsed (::std::auto_ptr< SimFlowEnergyTrans_PlantConnIsUsed_type > p);

        // SimFlowEnergyTrans_PlantConnInletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_PlantConnInletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PlantConnInletNodeName_type > SimFlowEnergyTrans_PlantConnInletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PlantConnInletNodeName_type, char > SimFlowEnergyTrans_PlantConnInletNodeName_traits;

        const SimFlowEnergyTrans_PlantConnInletNodeName_optional&
        SimFlowEnergyTrans_PlantConnInletNodeName () const;

        SimFlowEnergyTrans_PlantConnInletNodeName_optional&
        SimFlowEnergyTrans_PlantConnInletNodeName ();

        void
        SimFlowEnergyTrans_PlantConnInletNodeName (const SimFlowEnergyTrans_PlantConnInletNodeName_type& x);

        void
        SimFlowEnergyTrans_PlantConnInletNodeName (const SimFlowEnergyTrans_PlantConnInletNodeName_optional& x);

        void
        SimFlowEnergyTrans_PlantConnInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_PlantConnInletNodeName_type > p);

        // SimFlowEnergyTrans_PlantConnOutletNodeName
        //
        typedef ::xml_schema::string SimFlowEnergyTrans_PlantConnOutletNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_PlantConnOutletNodeName_type > SimFlowEnergyTrans_PlantConnOutletNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_PlantConnOutletNodeName_type, char > SimFlowEnergyTrans_PlantConnOutletNodeName_traits;

        const SimFlowEnergyTrans_PlantConnOutletNodeName_optional&
        SimFlowEnergyTrans_PlantConnOutletNodeName () const;

        SimFlowEnergyTrans_PlantConnOutletNodeName_optional&
        SimFlowEnergyTrans_PlantConnOutletNodeName ();

        void
        SimFlowEnergyTrans_PlantConnOutletNodeName (const SimFlowEnergyTrans_PlantConnOutletNodeName_type& x);

        void
        SimFlowEnergyTrans_PlantConnOutletNodeName (const SimFlowEnergyTrans_PlantConnOutletNodeName_optional& x);

        void
        SimFlowEnergyTrans_PlantConnOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_PlantConnOutletNodeName_type > p);

        // SimFlowEnergyTrans_SupplyInletWaterStorageTankName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_SupplyInletWaterStorageTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_SupplyInletWaterStorageTankName_type > SimFlowEnergyTrans_SupplyInletWaterStorageTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_SupplyInletWaterStorageTankName_type, char > SimFlowEnergyTrans_SupplyInletWaterStorageTankName_traits;

        const SimFlowEnergyTrans_SupplyInletWaterStorageTankName_optional&
        SimFlowEnergyTrans_SupplyInletWaterStorageTankName () const;

        SimFlowEnergyTrans_SupplyInletWaterStorageTankName_optional&
        SimFlowEnergyTrans_SupplyInletWaterStorageTankName ();

        void
        SimFlowEnergyTrans_SupplyInletWaterStorageTankName (const SimFlowEnergyTrans_SupplyInletWaterStorageTankName_type& x);

        void
        SimFlowEnergyTrans_SupplyInletWaterStorageTankName (const SimFlowEnergyTrans_SupplyInletWaterStorageTankName_optional& x);

        void
        SimFlowEnergyTrans_SupplyInletWaterStorageTankName (::std::auto_ptr< SimFlowEnergyTrans_SupplyInletWaterStorageTankName_type > p);

        // SimFlowEnergyTrans_CollectionOutletWaterStorageTankName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_type > SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_type, char > SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_traits;

        const SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_optional&
        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName () const;

        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_optional&
        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName ();

        void
        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName (const SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_type& x);

        void
        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName (const SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_optional& x);

        void
        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName (::std::auto_ptr< SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_type > p);

        // SimFlowEnergyTrans_AmbientZoneName
        //
        typedef ::xml_schema::idref SimFlowEnergyTrans_AmbientZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowEnergyTrans_AmbientZoneName_type > SimFlowEnergyTrans_AmbientZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowEnergyTrans_AmbientZoneName_type, char > SimFlowEnergyTrans_AmbientZoneName_traits;

        const SimFlowEnergyTrans_AmbientZoneName_optional&
        SimFlowEnergyTrans_AmbientZoneName () const;

        SimFlowEnergyTrans_AmbientZoneName_optional&
        SimFlowEnergyTrans_AmbientZoneName ();

        void
        SimFlowEnergyTrans_AmbientZoneName (const SimFlowEnergyTrans_AmbientZoneName_type& x);

        void
        SimFlowEnergyTrans_AmbientZoneName (const SimFlowEnergyTrans_AmbientZoneName_optional& x);

        void
        SimFlowEnergyTrans_AmbientZoneName (::std::auto_ptr< SimFlowEnergyTrans_AmbientZoneName_type > p);

        // Constructors.
        //
        SimFlowEnergyTransfer_Coil ();

        SimFlowEnergyTransfer_Coil (const RefId_type&);

        SimFlowEnergyTransfer_Coil (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f = 0,
                                    ::xml_schema::container* c = 0);

        SimFlowEnergyTransfer_Coil (const SimFlowEnergyTransfer_Coil& x,
                                    ::xml_schema::flags f = 0,
                                    ::xml_schema::container* c = 0);

        virtual SimFlowEnergyTransfer_Coil*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowEnergyTransfer_Coil&
        operator= (const SimFlowEnergyTransfer_Coil& x);

        virtual 
        ~SimFlowEnergyTransfer_Coil ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowEnergyTrans_Name_optional SimFlowEnergyTrans_Name_;
        SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_optional SimFlowEnergyTrans_OverallMdlSimulationProgCallingMngrName_;
        SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_optional SimFlowEnergyTrans_MdlSetupandSizingProgCallingMngrName_;
        SimFlowEnergyTrans_NumberOfAirConns_optional SimFlowEnergyTrans_NumberOfAirConns_;
        SimFlowEnergyTrans_AirConn_1_2_InletNodeName_optional SimFlowEnergyTrans_AirConn_1_2_InletNodeName_;
        SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_optional SimFlowEnergyTrans_AirConn_1_2_OutletNodeName_;
        SimFlowEnergyTrans_PlantConnIsUsed_optional SimFlowEnergyTrans_PlantConnIsUsed_;
        SimFlowEnergyTrans_PlantConnInletNodeName_optional SimFlowEnergyTrans_PlantConnInletNodeName_;
        SimFlowEnergyTrans_PlantConnOutletNodeName_optional SimFlowEnergyTrans_PlantConnOutletNodeName_;
        SimFlowEnergyTrans_SupplyInletWaterStorageTankName_optional SimFlowEnergyTrans_SupplyInletWaterStorageTankName_;
        SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_optional SimFlowEnergyTrans_CollectionOutletWaterStorageTankName_;
        SimFlowEnergyTrans_AmbientZoneName_optional SimFlowEnergyTrans_AmbientZoneName_;
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

#endif // SIM_FLOW_ENERGY_TRANSFER_COIL_HXX
