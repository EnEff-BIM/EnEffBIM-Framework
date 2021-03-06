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

#ifndef SIM_VALIDATION_RESULTS_WATER_HXX
#define SIM_VALIDATION_RESULTS_WATER_HXX

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
      class SimValidationResultsWater;
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

#include "simvalidationresults.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimValidationResultsWater: public ::schema::simxml::ResourcesGeneral::SimValidationResults
      {
        public:
        // PlantLoopType
        //
        typedef ::xml_schema::string PlantLoopType_type;
        typedef ::xsd::cxx::tree::optional< PlantLoopType_type > PlantLoopType_optional;
        typedef ::xsd::cxx::tree::traits< PlantLoopType_type, char > PlantLoopType_traits;

        const PlantLoopType_optional&
        PlantLoopType () const;

        PlantLoopType_optional&
        PlantLoopType ();

        void
        PlantLoopType (const PlantLoopType_type& x);

        void
        PlantLoopType (const PlantLoopType_optional& x);

        void
        PlantLoopType (::std::auto_ptr< PlantLoopType_type > p);

        // WaterLoopConfig
        //
        typedef ::xml_schema::string WaterLoopConfig_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopConfig_type > WaterLoopConfig_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopConfig_type, char > WaterLoopConfig_traits;

        const WaterLoopConfig_optional&
        WaterLoopConfig () const;

        WaterLoopConfig_optional&
        WaterLoopConfig ();

        void
        WaterLoopConfig (const WaterLoopConfig_type& x);

        void
        WaterLoopConfig (const WaterLoopConfig_optional& x);

        void
        WaterLoopConfig (::std::auto_ptr< WaterLoopConfig_type > p);

        // TESTankType
        //
        typedef ::xml_schema::string TESTankType_type;
        typedef ::xsd::cxx::tree::optional< TESTankType_type > TESTankType_optional;
        typedef ::xsd::cxx::tree::traits< TESTankType_type, char > TESTankType_traits;

        const TESTankType_optional&
        TESTankType () const;

        TESTankType_optional&
        TESTankType ();

        void
        TESTankType (const TESTankType_type& x);

        void
        TESTankType (const TESTankType_optional& x);

        void
        TESTankType (::std::auto_ptr< TESTankType_type > p);

        // SupplySideLoopPumpFound
        //
        typedef ::xml_schema::boolean SupplySideLoopPumpFound_type;
        typedef ::xsd::cxx::tree::optional< SupplySideLoopPumpFound_type > SupplySideLoopPumpFound_optional;
        typedef ::xsd::cxx::tree::traits< SupplySideLoopPumpFound_type, char > SupplySideLoopPumpFound_traits;

        const SupplySideLoopPumpFound_optional&
        SupplySideLoopPumpFound () const;

        SupplySideLoopPumpFound_optional&
        SupplySideLoopPumpFound ();

        void
        SupplySideLoopPumpFound (const SupplySideLoopPumpFound_type& x);

        void
        SupplySideLoopPumpFound (const SupplySideLoopPumpFound_optional& x);

        // DemandSideLoopPumpFound
        //
        typedef ::xml_schema::boolean DemandSideLoopPumpFound_type;
        typedef ::xsd::cxx::tree::optional< DemandSideLoopPumpFound_type > DemandSideLoopPumpFound_optional;
        typedef ::xsd::cxx::tree::traits< DemandSideLoopPumpFound_type, char > DemandSideLoopPumpFound_traits;

        const DemandSideLoopPumpFound_optional&
        DemandSideLoopPumpFound () const;

        DemandSideLoopPumpFound_optional&
        DemandSideLoopPumpFound ();

        void
        DemandSideLoopPumpFound (const DemandSideLoopPumpFound_type& x);

        void
        DemandSideLoopPumpFound (const DemandSideLoopPumpFound_optional& x);

        // TemperingValvePresent
        //
        typedef ::xml_schema::boolean TemperingValvePresent_type;
        typedef ::xsd::cxx::tree::optional< TemperingValvePresent_type > TemperingValvePresent_optional;
        typedef ::xsd::cxx::tree::traits< TemperingValvePresent_type, char > TemperingValvePresent_traits;

        const TemperingValvePresent_optional&
        TemperingValvePresent () const;

        TemperingValvePresent_optional&
        TemperingValvePresent ();

        void
        TemperingValvePresent (const TemperingValvePresent_type& x);

        void
        TemperingValvePresent (const TemperingValvePresent_optional& x);

        // TemperingValveID
        //
        typedef ::xml_schema::boolean TemperingValveID_type;
        typedef ::xsd::cxx::tree::optional< TemperingValveID_type > TemperingValveID_optional;
        typedef ::xsd::cxx::tree::traits< TemperingValveID_type, char > TemperingValveID_traits;

        const TemperingValveID_optional&
        TemperingValveID () const;

        TemperingValveID_optional&
        TemperingValveID ();

        void
        TemperingValveID (const TemperingValveID_type& x);

        void
        TemperingValveID (const TemperingValveID_optional& x);

        // WaterLoopNbcs
        //
        typedef ::xml_schema::int_ WaterLoopNbcs_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbcs_type > WaterLoopNbcs_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbcs_type, char > WaterLoopNbcs_traits;

        const WaterLoopNbcs_optional&
        WaterLoopNbcs () const;

        WaterLoopNbcs_optional&
        WaterLoopNbcs ();

        void
        WaterLoopNbcs (const WaterLoopNbcs_type& x);

        void
        WaterLoopNbcs (const WaterLoopNbcs_optional& x);

        // WaterLoopNbed
        //
        typedef ::xml_schema::int_ WaterLoopNbed_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbed_type > WaterLoopNbed_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbed_type, char > WaterLoopNbed_traits;

        const WaterLoopNbed_optional&
        WaterLoopNbed () const;

        WaterLoopNbed_optional&
        WaterLoopNbed ();

        void
        WaterLoopNbed (const WaterLoopNbed_type& x);

        void
        WaterLoopNbed (const WaterLoopNbed_optional& x);

        // WaterLoopNbes
        //
        typedef ::xml_schema::int_ WaterLoopNbes_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbes_type > WaterLoopNbes_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbes_type, char > WaterLoopNbes_traits;

        const WaterLoopNbes_optional&
        WaterLoopNbes () const;

        WaterLoopNbes_optional&
        WaterLoopNbes ();

        void
        WaterLoopNbes (const WaterLoopNbes_type& x);

        void
        WaterLoopNbes (const WaterLoopNbes_optional& x);

        // WaterLoopNbis
        //
        typedef ::xml_schema::int_ WaterLoopNbis_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbis_type > WaterLoopNbis_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbis_type, char > WaterLoopNbis_traits;

        const WaterLoopNbis_optional&
        WaterLoopNbis () const;

        WaterLoopNbis_optional&
        WaterLoopNbis ();

        void
        WaterLoopNbis (const WaterLoopNbis_type& x);

        void
        WaterLoopNbis (const WaterLoopNbis_optional& x);

        // WaterLoopNbod
        //
        typedef ::xml_schema::int_ WaterLoopNbod_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbod_type > WaterLoopNbod_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbod_type, char > WaterLoopNbod_traits;

        const WaterLoopNbod_optional&
        WaterLoopNbod () const;

        WaterLoopNbod_optional&
        WaterLoopNbod ();

        void
        WaterLoopNbod (const WaterLoopNbod_type& x);

        void
        WaterLoopNbod (const WaterLoopNbod_optional& x);

        // WaterLoopNbos
        //
        typedef ::xml_schema::int_ WaterLoopNbos_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbos_type > WaterLoopNbos_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbos_type, char > WaterLoopNbos_traits;

        const WaterLoopNbos_optional&
        WaterLoopNbos () const;

        WaterLoopNbos_optional&
        WaterLoopNbos ();

        void
        WaterLoopNbos (const WaterLoopNbos_type& x);

        void
        WaterLoopNbos (const WaterLoopNbos_optional& x);

        // WaterLoopNbpd
        //
        typedef ::xml_schema::int_ WaterLoopNbpd_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbpd_type > WaterLoopNbpd_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbpd_type, char > WaterLoopNbpd_traits;

        const WaterLoopNbpd_optional&
        WaterLoopNbpd () const;

        WaterLoopNbpd_optional&
        WaterLoopNbpd ();

        void
        WaterLoopNbpd (const WaterLoopNbpd_type& x);

        void
        WaterLoopNbpd (const WaterLoopNbpd_optional& x);

        // WaterLoopNbps
        //
        typedef ::xml_schema::int_ WaterLoopNbps_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbps_type > WaterLoopNbps_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbps_type, char > WaterLoopNbps_traits;

        const WaterLoopNbps_optional&
        WaterLoopNbps () const;

        WaterLoopNbps_optional&
        WaterLoopNbps ();

        void
        WaterLoopNbps (const WaterLoopNbps_type& x);

        void
        WaterLoopNbps (const WaterLoopNbps_optional& x);

        // WaterLoopNbtd
        //
        typedef ::xml_schema::int_ WaterLoopNbtd_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbtd_type > WaterLoopNbtd_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbtd_type, char > WaterLoopNbtd_traits;

        const WaterLoopNbtd_optional&
        WaterLoopNbtd () const;

        WaterLoopNbtd_optional&
        WaterLoopNbtd ();

        void
        WaterLoopNbtd (const WaterLoopNbtd_type& x);

        void
        WaterLoopNbtd (const WaterLoopNbtd_optional& x);

        // WaterLoopNbws
        //
        typedef ::xml_schema::int_ WaterLoopNbws_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbws_type > WaterLoopNbws_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbws_type, char > WaterLoopNbws_traits;

        const WaterLoopNbws_optional&
        WaterLoopNbws () const;

        WaterLoopNbws_optional&
        WaterLoopNbws ();

        void
        WaterLoopNbws (const WaterLoopNbws_type& x);

        void
        WaterLoopNbws (const WaterLoopNbws_optional& x);

        // WaterLoopNbxd
        //
        typedef ::xml_schema::int_ WaterLoopNbxd_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbxd_type > WaterLoopNbxd_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbxd_type, char > WaterLoopNbxd_traits;

        const WaterLoopNbxd_optional&
        WaterLoopNbxd () const;

        WaterLoopNbxd_optional&
        WaterLoopNbxd ();

        void
        WaterLoopNbxd (const WaterLoopNbxd_type& x);

        void
        WaterLoopNbxd (const WaterLoopNbxd_optional& x);

        // WaterLoopNbxs
        //
        typedef ::xml_schema::int_ WaterLoopNbxs_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNbxs_type > WaterLoopNbxs_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNbxs_type, char > WaterLoopNbxs_traits;

        const WaterLoopNbxs_optional&
        WaterLoopNbxs () const;

        WaterLoopNbxs_optional&
        WaterLoopNbxs ();

        void
        WaterLoopNbxs (const WaterLoopNbxs_type& x);

        void
        WaterLoopNbxs (const WaterLoopNbxs_optional& x);

        // WaterLoopNped
        //
        typedef ::xml_schema::int_ WaterLoopNped_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNped_type > WaterLoopNped_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNped_type, char > WaterLoopNped_traits;

        const WaterLoopNped_optional&
        WaterLoopNped () const;

        WaterLoopNped_optional&
        WaterLoopNped ();

        void
        WaterLoopNped (const WaterLoopNped_type& x);

        void
        WaterLoopNped (const WaterLoopNped_optional& x);

        // WaterLoopNpes
        //
        typedef ::xml_schema::int_ WaterLoopNpes_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNpes_type > WaterLoopNpes_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNpes_type, char > WaterLoopNpes_traits;

        const WaterLoopNpes_optional&
        WaterLoopNpes () const;

        WaterLoopNpes_optional&
        WaterLoopNpes ();

        void
        WaterLoopNpes (const WaterLoopNpes_type& x);

        void
        WaterLoopNpes (const WaterLoopNpes_optional& x);

        // WaterLoopNpod
        //
        typedef ::xml_schema::int_ WaterLoopNpod_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNpod_type > WaterLoopNpod_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNpod_type, char > WaterLoopNpod_traits;

        const WaterLoopNpod_optional&
        WaterLoopNpod () const;

        WaterLoopNpod_optional&
        WaterLoopNpod ();

        void
        WaterLoopNpod (const WaterLoopNpod_type& x);

        void
        WaterLoopNpod (const WaterLoopNpod_optional& x);

        // WaterLoopNpos
        //
        typedef ::xml_schema::int_ WaterLoopNpos_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNpos_type > WaterLoopNpos_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNpos_type, char > WaterLoopNpos_traits;

        const WaterLoopNpos_optional&
        WaterLoopNpos () const;

        WaterLoopNpos_optional&
        WaterLoopNpos ();

        void
        WaterLoopNpos (const WaterLoopNpos_type& x);

        void
        WaterLoopNpos (const WaterLoopNpos_optional& x);

        // WaterLoopNppd
        //
        typedef ::xml_schema::int_ WaterLoopNppd_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNppd_type > WaterLoopNppd_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNppd_type, char > WaterLoopNppd_traits;

        const WaterLoopNppd_optional&
        WaterLoopNppd () const;

        WaterLoopNppd_optional&
        WaterLoopNppd ();

        void
        WaterLoopNppd (const WaterLoopNppd_type& x);

        void
        WaterLoopNppd (const WaterLoopNppd_optional& x);

        // WaterLoopNpps
        //
        typedef ::xml_schema::int_ WaterLoopNpps_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNpps_type > WaterLoopNpps_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNpps_type, char > WaterLoopNpps_traits;

        const WaterLoopNpps_optional&
        WaterLoopNpps () const;

        WaterLoopNpps_optional&
        WaterLoopNpps ();

        void
        WaterLoopNpps (const WaterLoopNpps_type& x);

        void
        WaterLoopNpps (const WaterLoopNpps_optional& x);

        // WaterLoopNpxd
        //
        typedef ::xml_schema::int_ WaterLoopNpxd_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNpxd_type > WaterLoopNpxd_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNpxd_type, char > WaterLoopNpxd_traits;

        const WaterLoopNpxd_optional&
        WaterLoopNpxd () const;

        WaterLoopNpxd_optional&
        WaterLoopNpxd ();

        void
        WaterLoopNpxd (const WaterLoopNpxd_type& x);

        void
        WaterLoopNpxd (const WaterLoopNpxd_optional& x);

        // WaterLoopNpxs
        //
        typedef ::xml_schema::int_ WaterLoopNpxs_type;
        typedef ::xsd::cxx::tree::optional< WaterLoopNpxs_type > WaterLoopNpxs_optional;
        typedef ::xsd::cxx::tree::traits< WaterLoopNpxs_type, char > WaterLoopNpxs_traits;

        const WaterLoopNpxs_optional&
        WaterLoopNpxs () const;

        WaterLoopNpxs_optional&
        WaterLoopNpxs ();

        void
        WaterLoopNpxs (const WaterLoopNpxs_type& x);

        void
        WaterLoopNpxs (const WaterLoopNpxs_optional& x);

        // NodeStartSupplyInletBranch
        //
        typedef ::xml_schema::idref NodeStartSupplyInletBranch_type;
        typedef ::xsd::cxx::tree::optional< NodeStartSupplyInletBranch_type > NodeStartSupplyInletBranch_optional;
        typedef ::xsd::cxx::tree::traits< NodeStartSupplyInletBranch_type, char > NodeStartSupplyInletBranch_traits;

        const NodeStartSupplyInletBranch_optional&
        NodeStartSupplyInletBranch () const;

        NodeStartSupplyInletBranch_optional&
        NodeStartSupplyInletBranch ();

        void
        NodeStartSupplyInletBranch (const NodeStartSupplyInletBranch_type& x);

        void
        NodeStartSupplyInletBranch (const NodeStartSupplyInletBranch_optional& x);

        void
        NodeStartSupplyInletBranch (::std::auto_ptr< NodeStartSupplyInletBranch_type > p);

        // NodeEndSupplyInletBranch
        //
        typedef ::xml_schema::idref NodeEndSupplyInletBranch_type;
        typedef ::xsd::cxx::tree::optional< NodeEndSupplyInletBranch_type > NodeEndSupplyInletBranch_optional;
        typedef ::xsd::cxx::tree::traits< NodeEndSupplyInletBranch_type, char > NodeEndSupplyInletBranch_traits;

        const NodeEndSupplyInletBranch_optional&
        NodeEndSupplyInletBranch () const;

        NodeEndSupplyInletBranch_optional&
        NodeEndSupplyInletBranch ();

        void
        NodeEndSupplyInletBranch (const NodeEndSupplyInletBranch_type& x);

        void
        NodeEndSupplyInletBranch (const NodeEndSupplyInletBranch_optional& x);

        void
        NodeEndSupplyInletBranch (::std::auto_ptr< NodeEndSupplyInletBranch_type > p);

        // NodeStartDemandInletBranch
        //
        typedef ::xml_schema::idref NodeStartDemandInletBranch_type;
        typedef ::xsd::cxx::tree::optional< NodeStartDemandInletBranch_type > NodeStartDemandInletBranch_optional;
        typedef ::xsd::cxx::tree::traits< NodeStartDemandInletBranch_type, char > NodeStartDemandInletBranch_traits;

        const NodeStartDemandInletBranch_optional&
        NodeStartDemandInletBranch () const;

        NodeStartDemandInletBranch_optional&
        NodeStartDemandInletBranch ();

        void
        NodeStartDemandInletBranch (const NodeStartDemandInletBranch_type& x);

        void
        NodeStartDemandInletBranch (const NodeStartDemandInletBranch_optional& x);

        void
        NodeStartDemandInletBranch (::std::auto_ptr< NodeStartDemandInletBranch_type > p);

        // NodeEndDemandInletBranch
        //
        typedef ::xml_schema::idref NodeEndDemandInletBranch_type;
        typedef ::xsd::cxx::tree::optional< NodeEndDemandInletBranch_type > NodeEndDemandInletBranch_optional;
        typedef ::xsd::cxx::tree::traits< NodeEndDemandInletBranch_type, char > NodeEndDemandInletBranch_traits;

        const NodeEndDemandInletBranch_optional&
        NodeEndDemandInletBranch () const;

        NodeEndDemandInletBranch_optional&
        NodeEndDemandInletBranch ();

        void
        NodeEndDemandInletBranch (const NodeEndDemandInletBranch_type& x);

        void
        NodeEndDemandInletBranch (const NodeEndDemandInletBranch_optional& x);

        void
        NodeEndDemandInletBranch (::std::auto_ptr< NodeEndDemandInletBranch_type > p);

        // NodeStartSupplySubLoop
        //
        typedef ::xml_schema::idref NodeStartSupplySubLoop_type;
        typedef ::xsd::cxx::tree::optional< NodeStartSupplySubLoop_type > NodeStartSupplySubLoop_optional;
        typedef ::xsd::cxx::tree::traits< NodeStartSupplySubLoop_type, char > NodeStartSupplySubLoop_traits;

        const NodeStartSupplySubLoop_optional&
        NodeStartSupplySubLoop () const;

        NodeStartSupplySubLoop_optional&
        NodeStartSupplySubLoop ();

        void
        NodeStartSupplySubLoop (const NodeStartSupplySubLoop_type& x);

        void
        NodeStartSupplySubLoop (const NodeStartSupplySubLoop_optional& x);

        void
        NodeStartSupplySubLoop (::std::auto_ptr< NodeStartSupplySubLoop_type > p);

        // NodeStartDemandSubLoop
        //
        typedef ::xml_schema::idref NodeStartDemandSubLoop_type;
        typedef ::xsd::cxx::tree::optional< NodeStartDemandSubLoop_type > NodeStartDemandSubLoop_optional;
        typedef ::xsd::cxx::tree::traits< NodeStartDemandSubLoop_type, char > NodeStartDemandSubLoop_traits;

        const NodeStartDemandSubLoop_optional&
        NodeStartDemandSubLoop () const;

        NodeStartDemandSubLoop_optional&
        NodeStartDemandSubLoop ();

        void
        NodeStartDemandSubLoop (const NodeStartDemandSubLoop_type& x);

        void
        NodeStartDemandSubLoop (const NodeStartDemandSubLoop_optional& x);

        void
        NodeStartDemandSubLoop (::std::auto_ptr< NodeStartDemandSubLoop_type > p);

        // NodeEndSupplySubLoop
        //
        typedef ::xml_schema::idref NodeEndSupplySubLoop_type;
        typedef ::xsd::cxx::tree::optional< NodeEndSupplySubLoop_type > NodeEndSupplySubLoop_optional;
        typedef ::xsd::cxx::tree::traits< NodeEndSupplySubLoop_type, char > NodeEndSupplySubLoop_traits;

        const NodeEndSupplySubLoop_optional&
        NodeEndSupplySubLoop () const;

        NodeEndSupplySubLoop_optional&
        NodeEndSupplySubLoop ();

        void
        NodeEndSupplySubLoop (const NodeEndSupplySubLoop_type& x);

        void
        NodeEndSupplySubLoop (const NodeEndSupplySubLoop_optional& x);

        void
        NodeEndSupplySubLoop (::std::auto_ptr< NodeEndSupplySubLoop_type > p);

        // NodeStartSupplyOutletBranch
        //
        typedef ::xml_schema::idref NodeStartSupplyOutletBranch_type;
        typedef ::xsd::cxx::tree::optional< NodeStartSupplyOutletBranch_type > NodeStartSupplyOutletBranch_optional;
        typedef ::xsd::cxx::tree::traits< NodeStartSupplyOutletBranch_type, char > NodeStartSupplyOutletBranch_traits;

        const NodeStartSupplyOutletBranch_optional&
        NodeStartSupplyOutletBranch () const;

        NodeStartSupplyOutletBranch_optional&
        NodeStartSupplyOutletBranch ();

        void
        NodeStartSupplyOutletBranch (const NodeStartSupplyOutletBranch_type& x);

        void
        NodeStartSupplyOutletBranch (const NodeStartSupplyOutletBranch_optional& x);

        void
        NodeStartSupplyOutletBranch (::std::auto_ptr< NodeStartSupplyOutletBranch_type > p);

        // NodeEndDemandSubLoop
        //
        typedef ::xml_schema::idref NodeEndDemandSubLoop_type;
        typedef ::xsd::cxx::tree::optional< NodeEndDemandSubLoop_type > NodeEndDemandSubLoop_optional;
        typedef ::xsd::cxx::tree::traits< NodeEndDemandSubLoop_type, char > NodeEndDemandSubLoop_traits;

        const NodeEndDemandSubLoop_optional&
        NodeEndDemandSubLoop () const;

        NodeEndDemandSubLoop_optional&
        NodeEndDemandSubLoop ();

        void
        NodeEndDemandSubLoop (const NodeEndDemandSubLoop_type& x);

        void
        NodeEndDemandSubLoop (const NodeEndDemandSubLoop_optional& x);

        void
        NodeEndDemandSubLoop (::std::auto_ptr< NodeEndDemandSubLoop_type > p);

        // NodeStartDemandOutletBranch
        //
        typedef ::xml_schema::idref NodeStartDemandOutletBranch_type;
        typedef ::xsd::cxx::tree::optional< NodeStartDemandOutletBranch_type > NodeStartDemandOutletBranch_optional;
        typedef ::xsd::cxx::tree::traits< NodeStartDemandOutletBranch_type, char > NodeStartDemandOutletBranch_traits;

        const NodeStartDemandOutletBranch_optional&
        NodeStartDemandOutletBranch () const;

        NodeStartDemandOutletBranch_optional&
        NodeStartDemandOutletBranch ();

        void
        NodeStartDemandOutletBranch (const NodeStartDemandOutletBranch_type& x);

        void
        NodeStartDemandOutletBranch (const NodeStartDemandOutletBranch_optional& x);

        void
        NodeStartDemandOutletBranch (::std::auto_ptr< NodeStartDemandOutletBranch_type > p);

        // Constructors.
        //
        SimValidationResultsWater ();

        SimValidationResultsWater (const RefId_type&);

        SimValidationResultsWater (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f = 0,
                                   ::xml_schema::container* c = 0);

        SimValidationResultsWater (const SimValidationResultsWater& x,
                                   ::xml_schema::flags f = 0,
                                   ::xml_schema::container* c = 0);

        virtual SimValidationResultsWater*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimValidationResultsWater&
        operator= (const SimValidationResultsWater& x);

        virtual 
        ~SimValidationResultsWater ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        PlantLoopType_optional PlantLoopType_;
        WaterLoopConfig_optional WaterLoopConfig_;
        TESTankType_optional TESTankType_;
        SupplySideLoopPumpFound_optional SupplySideLoopPumpFound_;
        DemandSideLoopPumpFound_optional DemandSideLoopPumpFound_;
        TemperingValvePresent_optional TemperingValvePresent_;
        TemperingValveID_optional TemperingValveID_;
        WaterLoopNbcs_optional WaterLoopNbcs_;
        WaterLoopNbed_optional WaterLoopNbed_;
        WaterLoopNbes_optional WaterLoopNbes_;
        WaterLoopNbis_optional WaterLoopNbis_;
        WaterLoopNbod_optional WaterLoopNbod_;
        WaterLoopNbos_optional WaterLoopNbos_;
        WaterLoopNbpd_optional WaterLoopNbpd_;
        WaterLoopNbps_optional WaterLoopNbps_;
        WaterLoopNbtd_optional WaterLoopNbtd_;
        WaterLoopNbws_optional WaterLoopNbws_;
        WaterLoopNbxd_optional WaterLoopNbxd_;
        WaterLoopNbxs_optional WaterLoopNbxs_;
        WaterLoopNped_optional WaterLoopNped_;
        WaterLoopNpes_optional WaterLoopNpes_;
        WaterLoopNpod_optional WaterLoopNpod_;
        WaterLoopNpos_optional WaterLoopNpos_;
        WaterLoopNppd_optional WaterLoopNppd_;
        WaterLoopNpps_optional WaterLoopNpps_;
        WaterLoopNpxd_optional WaterLoopNpxd_;
        WaterLoopNpxs_optional WaterLoopNpxs_;
        NodeStartSupplyInletBranch_optional NodeStartSupplyInletBranch_;
        NodeEndSupplyInletBranch_optional NodeEndSupplyInletBranch_;
        NodeStartDemandInletBranch_optional NodeStartDemandInletBranch_;
        NodeEndDemandInletBranch_optional NodeEndDemandInletBranch_;
        NodeStartSupplySubLoop_optional NodeStartSupplySubLoop_;
        NodeStartDemandSubLoop_optional NodeStartDemandSubLoop_;
        NodeEndSupplySubLoop_optional NodeEndSupplySubLoop_;
        NodeStartSupplyOutletBranch_optional NodeStartSupplyOutletBranch_;
        NodeEndDemandSubLoop_optional NodeEndDemandSubLoop_;
        NodeStartDemandOutletBranch_optional NodeStartDemandOutletBranch_;
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

#endif // SIM_VALIDATION_RESULTS_WATER_HXX
