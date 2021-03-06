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

#ifndef SIM_SYSTEM_REFRIGERATION_TRANSCRITICAL_FULL_SYSTEM_HXX
#define SIM_SYSTEM_REFRIGERATION_TRANSCRITICAL_FULL_SYSTEM_HXX

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
    namespace BuildingModel
    {
      class SimSystem_RefrigerationTranscritical_FullSystem;
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

#include "simsystem_refrigerationtranscritical.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimSystem_RefrigerationTranscritical_FullSystem: public ::schema::simxml::BuildingModel::SimSystem_RefrigerationTranscritical
      {
        public:
        // SimSys_RefrigSysWorkingFluidType
        //
        typedef ::xml_schema::idref SimSys_RefrigSysWorkingFluidType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_RefrigSysWorkingFluidType_type > SimSys_RefrigSysWorkingFluidType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_RefrigSysWorkingFluidType_type, char > SimSys_RefrigSysWorkingFluidType_traits;

        const SimSys_RefrigSysWorkingFluidType_optional&
        SimSys_RefrigSysWorkingFluidType () const;

        SimSys_RefrigSysWorkingFluidType_optional&
        SimSys_RefrigSysWorkingFluidType ();

        void
        SimSys_RefrigSysWorkingFluidType (const SimSys_RefrigSysWorkingFluidType_type& x);

        void
        SimSys_RefrigSysWorkingFluidType (const SimSys_RefrigSysWorkingFluidType_optional& x);

        void
        SimSys_RefrigSysWorkingFluidType (::std::auto_ptr< SimSys_RefrigSysWorkingFluidType_type > p);

        // SimSys_EndUseSubCat
        //
        typedef ::xml_schema::string SimSys_EndUseSubCat_type;
        typedef ::xsd::cxx::tree::optional< SimSys_EndUseSubCat_type > SimSys_EndUseSubCat_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_EndUseSubCat_type, char > SimSys_EndUseSubCat_traits;

        const SimSys_EndUseSubCat_optional&
        SimSys_EndUseSubCat () const;

        SimSys_EndUseSubCat_optional&
        SimSys_EndUseSubCat ();

        void
        SimSys_EndUseSubCat (const SimSys_EndUseSubCat_type& x);

        void
        SimSys_EndUseSubCat (const SimSys_EndUseSubCat_optional& x);

        void
        SimSys_EndUseSubCat (::std::auto_ptr< SimSys_EndUseSubCat_type > p);

        // SimSys_SystemType
        //
        typedef ::xml_schema::string SimSys_SystemType_type;
        typedef ::xsd::cxx::tree::optional< SimSys_SystemType_type > SimSys_SystemType_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_SystemType_type, char > SimSys_SystemType_traits;

        const SimSys_SystemType_optional&
        SimSys_SystemType () const;

        SimSys_SystemType_optional&
        SimSys_SystemType ();

        void
        SimSys_SystemType (const SimSys_SystemType_type& x);

        void
        SimSys_SystemType (const SimSys_SystemType_optional& x);

        void
        SimSys_SystemType (::std::auto_ptr< SimSys_SystemType_type > p);

        // SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName
        //
        typedef ::xml_schema::idref SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_type > SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_type, char > SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_traits;

        const SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional&
        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName () const;

        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional&
        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName ();

        void
        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName (const SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_type& x);

        void
        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName (const SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional& x);

        void
        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName (::std::auto_ptr< SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_type > p);

        // SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName
        //
        typedef ::xml_schema::idref SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_type > SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_type, char > SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_traits;

        const SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional&
        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName () const;

        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional&
        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName ();

        void
        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName (const SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_type& x);

        void
        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName (const SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional& x);

        void
        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName (::std::auto_ptr< SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_type > p);

        // SimSys_RefrigerationGasCoolerName
        //
        typedef ::xml_schema::idref SimSys_RefrigerationGasCoolerName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_RefrigerationGasCoolerName_type > SimSys_RefrigerationGasCoolerName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_RefrigerationGasCoolerName_type, char > SimSys_RefrigerationGasCoolerName_traits;

        const SimSys_RefrigerationGasCoolerName_optional&
        SimSys_RefrigerationGasCoolerName () const;

        SimSys_RefrigerationGasCoolerName_optional&
        SimSys_RefrigerationGasCoolerName ();

        void
        SimSys_RefrigerationGasCoolerName (const SimSys_RefrigerationGasCoolerName_type& x);

        void
        SimSys_RefrigerationGasCoolerName (const SimSys_RefrigerationGasCoolerName_optional& x);

        void
        SimSys_RefrigerationGasCoolerName (::std::auto_ptr< SimSys_RefrigerationGasCoolerName_type > p);

        // SimSys_HighPressCompressOrCompressListName
        //
        typedef ::xml_schema::idref SimSys_HighPressCompressOrCompressListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_HighPressCompressOrCompressListName_type > SimSys_HighPressCompressOrCompressListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_HighPressCompressOrCompressListName_type, char > SimSys_HighPressCompressOrCompressListName_traits;

        const SimSys_HighPressCompressOrCompressListName_optional&
        SimSys_HighPressCompressOrCompressListName () const;

        SimSys_HighPressCompressOrCompressListName_optional&
        SimSys_HighPressCompressOrCompressListName ();

        void
        SimSys_HighPressCompressOrCompressListName (const SimSys_HighPressCompressOrCompressListName_type& x);

        void
        SimSys_HighPressCompressOrCompressListName (const SimSys_HighPressCompressOrCompressListName_optional& x);

        void
        SimSys_HighPressCompressOrCompressListName (::std::auto_ptr< SimSys_HighPressCompressOrCompressListName_type > p);

        // SimSys_LowPressureCompressOrCompressListName
        //
        typedef ::xml_schema::idref SimSys_LowPressureCompressOrCompressListName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_LowPressureCompressOrCompressListName_type > SimSys_LowPressureCompressOrCompressListName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_LowPressureCompressOrCompressListName_type, char > SimSys_LowPressureCompressOrCompressListName_traits;

        const SimSys_LowPressureCompressOrCompressListName_optional&
        SimSys_LowPressureCompressOrCompressListName () const;

        SimSys_LowPressureCompressOrCompressListName_optional&
        SimSys_LowPressureCompressOrCompressListName ();

        void
        SimSys_LowPressureCompressOrCompressListName (const SimSys_LowPressureCompressOrCompressListName_type& x);

        void
        SimSys_LowPressureCompressOrCompressListName (const SimSys_LowPressureCompressOrCompressListName_optional& x);

        void
        SimSys_LowPressureCompressOrCompressListName (::std::auto_ptr< SimSys_LowPressureCompressOrCompressListName_type > p);

        // SimSys_ReceiverPressure
        //
        typedef ::xml_schema::double_ SimSys_ReceiverPressure_type;
        typedef ::xsd::cxx::tree::optional< SimSys_ReceiverPressure_type > SimSys_ReceiverPressure_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_ReceiverPressure_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_ReceiverPressure_traits;

        const SimSys_ReceiverPressure_optional&
        SimSys_ReceiverPressure () const;

        SimSys_ReceiverPressure_optional&
        SimSys_ReceiverPressure ();

        void
        SimSys_ReceiverPressure (const SimSys_ReceiverPressure_type& x);

        void
        SimSys_ReceiverPressure (const SimSys_ReceiverPressure_optional& x);

        // SimSys_SubcoolerEffectiveness
        //
        typedef ::xml_schema::double_ SimSys_SubcoolerEffectiveness_type;
        typedef ::xsd::cxx::tree::optional< SimSys_SubcoolerEffectiveness_type > SimSys_SubcoolerEffectiveness_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_SubcoolerEffectiveness_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_SubcoolerEffectiveness_traits;

        const SimSys_SubcoolerEffectiveness_optional&
        SimSys_SubcoolerEffectiveness () const;

        SimSys_SubcoolerEffectiveness_optional&
        SimSys_SubcoolerEffectiveness ();

        void
        SimSys_SubcoolerEffectiveness (const SimSys_SubcoolerEffectiveness_type& x);

        void
        SimSys_SubcoolerEffectiveness (const SimSys_SubcoolerEffectiveness_optional& x);

        // SimSys_SumUASuctionPipingforMediumTempLoads
        //
        typedef ::xml_schema::double_ SimSys_SumUASuctionPipingforMediumTempLoads_type;
        typedef ::xsd::cxx::tree::optional< SimSys_SumUASuctionPipingforMediumTempLoads_type > SimSys_SumUASuctionPipingforMediumTempLoads_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_SumUASuctionPipingforMediumTempLoads_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_SumUASuctionPipingforMediumTempLoads_traits;

        const SimSys_SumUASuctionPipingforMediumTempLoads_optional&
        SimSys_SumUASuctionPipingforMediumTempLoads () const;

        SimSys_SumUASuctionPipingforMediumTempLoads_optional&
        SimSys_SumUASuctionPipingforMediumTempLoads ();

        void
        SimSys_SumUASuctionPipingforMediumTempLoads (const SimSys_SumUASuctionPipingforMediumTempLoads_type& x);

        void
        SimSys_SumUASuctionPipingforMediumTempLoads (const SimSys_SumUASuctionPipingforMediumTempLoads_optional& x);

        // SimSys_MediumTempSuctionPipingZoneName
        //
        typedef ::xml_schema::idref SimSys_MediumTempSuctionPipingZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_MediumTempSuctionPipingZoneName_type > SimSys_MediumTempSuctionPipingZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_MediumTempSuctionPipingZoneName_type, char > SimSys_MediumTempSuctionPipingZoneName_traits;

        const SimSys_MediumTempSuctionPipingZoneName_optional&
        SimSys_MediumTempSuctionPipingZoneName () const;

        SimSys_MediumTempSuctionPipingZoneName_optional&
        SimSys_MediumTempSuctionPipingZoneName ();

        void
        SimSys_MediumTempSuctionPipingZoneName (const SimSys_MediumTempSuctionPipingZoneName_type& x);

        void
        SimSys_MediumTempSuctionPipingZoneName (const SimSys_MediumTempSuctionPipingZoneName_optional& x);

        void
        SimSys_MediumTempSuctionPipingZoneName (::std::auto_ptr< SimSys_MediumTempSuctionPipingZoneName_type > p);

        // SimSys_SumUASuctionPipingforLowTempLoads
        //
        typedef ::xml_schema::double_ SimSys_SumUASuctionPipingforLowTempLoads_type;
        typedef ::xsd::cxx::tree::optional< SimSys_SumUASuctionPipingforLowTempLoads_type > SimSys_SumUASuctionPipingforLowTempLoads_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_SumUASuctionPipingforLowTempLoads_type, char, ::xsd::cxx::tree::schema_type::double_ > SimSys_SumUASuctionPipingforLowTempLoads_traits;

        const SimSys_SumUASuctionPipingforLowTempLoads_optional&
        SimSys_SumUASuctionPipingforLowTempLoads () const;

        SimSys_SumUASuctionPipingforLowTempLoads_optional&
        SimSys_SumUASuctionPipingforLowTempLoads ();

        void
        SimSys_SumUASuctionPipingforLowTempLoads (const SimSys_SumUASuctionPipingforLowTempLoads_type& x);

        void
        SimSys_SumUASuctionPipingforLowTempLoads (const SimSys_SumUASuctionPipingforLowTempLoads_optional& x);

        // SimSys_LowTempSuctionPipingZoneName
        //
        typedef ::xml_schema::idref SimSys_LowTempSuctionPipingZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimSys_LowTempSuctionPipingZoneName_type > SimSys_LowTempSuctionPipingZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimSys_LowTempSuctionPipingZoneName_type, char > SimSys_LowTempSuctionPipingZoneName_traits;

        const SimSys_LowTempSuctionPipingZoneName_optional&
        SimSys_LowTempSuctionPipingZoneName () const;

        SimSys_LowTempSuctionPipingZoneName_optional&
        SimSys_LowTempSuctionPipingZoneName ();

        void
        SimSys_LowTempSuctionPipingZoneName (const SimSys_LowTempSuctionPipingZoneName_type& x);

        void
        SimSys_LowTempSuctionPipingZoneName (const SimSys_LowTempSuctionPipingZoneName_optional& x);

        void
        SimSys_LowTempSuctionPipingZoneName (::std::auto_ptr< SimSys_LowTempSuctionPipingZoneName_type > p);

        // Constructors.
        //
        SimSystem_RefrigerationTranscritical_FullSystem ();

        SimSystem_RefrigerationTranscritical_FullSystem (const RefId_type&);

        SimSystem_RefrigerationTranscritical_FullSystem (const ::xercesc::DOMElement& e,
                                                         ::xml_schema::flags f = 0,
                                                         ::xml_schema::container* c = 0);

        SimSystem_RefrigerationTranscritical_FullSystem (const SimSystem_RefrigerationTranscritical_FullSystem& x,
                                                         ::xml_schema::flags f = 0,
                                                         ::xml_schema::container* c = 0);

        virtual SimSystem_RefrigerationTranscritical_FullSystem*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSystem_RefrigerationTranscritical_FullSystem&
        operator= (const SimSystem_RefrigerationTranscritical_FullSystem& x);

        virtual 
        ~SimSystem_RefrigerationTranscritical_FullSystem ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimSys_RefrigSysWorkingFluidType_optional SimSys_RefrigSysWorkingFluidType_;
        SimSys_EndUseSubCat_optional SimSys_EndUseSubCat_;
        SimSys_SystemType_optional SimSys_SystemType_;
        SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional SimSys_MediumTempRefrigCaseorWalkinOrCaseAndWalkInListName_;
        SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_optional SimSys_LowTempRefrigCaseorWalkinOrCaseAndWalkInListName_;
        SimSys_RefrigerationGasCoolerName_optional SimSys_RefrigerationGasCoolerName_;
        SimSys_HighPressCompressOrCompressListName_optional SimSys_HighPressCompressOrCompressListName_;
        SimSys_LowPressureCompressOrCompressListName_optional SimSys_LowPressureCompressOrCompressListName_;
        SimSys_ReceiverPressure_optional SimSys_ReceiverPressure_;
        SimSys_SubcoolerEffectiveness_optional SimSys_SubcoolerEffectiveness_;
        SimSys_SumUASuctionPipingforMediumTempLoads_optional SimSys_SumUASuctionPipingforMediumTempLoads_;
        SimSys_MediumTempSuctionPipingZoneName_optional SimSys_MediumTempSuctionPipingZoneName_;
        SimSys_SumUASuctionPipingforLowTempLoads_optional SimSys_SumUASuctionPipingforLowTempLoads_;
        SimSys_LowTempSuctionPipingZoneName_optional SimSys_LowTempSuctionPipingZoneName_;
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

#endif // SIM_SYSTEM_REFRIGERATION_TRANSCRITICAL_FULL_SYSTEM_HXX
