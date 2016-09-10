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

#ifndef SIM_MATERIAL_LAYER_SET_OPAQUE_LAYER_SET_LANDING_HXX
#define SIM_MATERIAL_LAYER_SET_OPAQUE_LAYER_SET_LANDING_HXX

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
      class SimMaterialLayerSet_OpaqueLayerSet_Landing;
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

#include "simmateriallayerset_opaquelayerset.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimMaterialLayerSet_OpaqueLayerSet_Landing: public ::schema::simxml::ResourcesGeneral::SimMaterialLayerSet_OpaqueLayerSet
      {
        public:
        // SimMatLayerSet_OutsideLayer
        //
        typedef ::xml_schema::idref SimMatLayerSet_OutsideLayer_type;
        typedef ::xsd::cxx::tree::optional< SimMatLayerSet_OutsideLayer_type > SimMatLayerSet_OutsideLayer_optional;
        typedef ::xsd::cxx::tree::traits< SimMatLayerSet_OutsideLayer_type, char > SimMatLayerSet_OutsideLayer_traits;

        const SimMatLayerSet_OutsideLayer_optional&
        SimMatLayerSet_OutsideLayer () const;

        SimMatLayerSet_OutsideLayer_optional&
        SimMatLayerSet_OutsideLayer ();

        void
        SimMatLayerSet_OutsideLayer (const SimMatLayerSet_OutsideLayer_type& x);

        void
        SimMatLayerSet_OutsideLayer (const SimMatLayerSet_OutsideLayer_optional& x);

        void
        SimMatLayerSet_OutsideLayer (::std::auto_ptr< SimMatLayerSet_OutsideLayer_type > p);

        // SimMatLayerSet_Layer_2_10
        //
        typedef ::xml_schema::idrefs SimMatLayerSet_Layer_2_10_type;
        typedef ::xsd::cxx::tree::optional< SimMatLayerSet_Layer_2_10_type > SimMatLayerSet_Layer_2_10_optional;
        typedef ::xsd::cxx::tree::traits< SimMatLayerSet_Layer_2_10_type, char > SimMatLayerSet_Layer_2_10_traits;

        const SimMatLayerSet_Layer_2_10_optional&
        SimMatLayerSet_Layer_2_10 () const;

        SimMatLayerSet_Layer_2_10_optional&
        SimMatLayerSet_Layer_2_10 ();

        void
        SimMatLayerSet_Layer_2_10 (const SimMatLayerSet_Layer_2_10_type& x);

        void
        SimMatLayerSet_Layer_2_10 (const SimMatLayerSet_Layer_2_10_optional& x);

        void
        SimMatLayerSet_Layer_2_10 (::std::auto_ptr< SimMatLayerSet_Layer_2_10_type > p);

        // T24ConsAssmNotes
        //
        typedef ::xml_schema::string T24ConsAssmNotes_type;
        typedef ::xsd::cxx::tree::optional< T24ConsAssmNotes_type > T24ConsAssmNotes_optional;
        typedef ::xsd::cxx::tree::traits< T24ConsAssmNotes_type, char > T24ConsAssmNotes_traits;

        const T24ConsAssmNotes_optional&
        T24ConsAssmNotes () const;

        T24ConsAssmNotes_optional&
        T24ConsAssmNotes ();

        void
        T24ConsAssmNotes (const T24ConsAssmNotes_type& x);

        void
        T24ConsAssmNotes (const T24ConsAssmNotes_optional& x);

        void
        T24ConsAssmNotes (::std::auto_ptr< T24ConsAssmNotes_type > p);

        // T24CrrcAgedEmittance
        //
        typedef ::xml_schema::double_ T24CrrcAgedEmittance_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcAgedEmittance_type > T24CrrcAgedEmittance_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcAgedEmittance_type, char, ::xsd::cxx::tree::schema_type::double_ > T24CrrcAgedEmittance_traits;

        const T24CrrcAgedEmittance_optional&
        T24CrrcAgedEmittance () const;

        T24CrrcAgedEmittance_optional&
        T24CrrcAgedEmittance ();

        void
        T24CrrcAgedEmittance (const T24CrrcAgedEmittance_type& x);

        void
        T24CrrcAgedEmittance (const T24CrrcAgedEmittance_optional& x);

        // T24CrrcAgedReflectance
        //
        typedef ::xml_schema::double_ T24CrrcAgedReflectance_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcAgedReflectance_type > T24CrrcAgedReflectance_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcAgedReflectance_type, char, ::xsd::cxx::tree::schema_type::double_ > T24CrrcAgedReflectance_traits;

        const T24CrrcAgedReflectance_optional&
        T24CrrcAgedReflectance () const;

        T24CrrcAgedReflectance_optional&
        T24CrrcAgedReflectance ();

        void
        T24CrrcAgedReflectance (const T24CrrcAgedReflectance_type& x);

        void
        T24CrrcAgedReflectance (const T24CrrcAgedReflectance_optional& x);

        // T24CrrcAgedSRI
        //
        typedef ::xml_schema::int_ T24CrrcAgedSRI_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcAgedSRI_type > T24CrrcAgedSRI_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcAgedSRI_type, char > T24CrrcAgedSRI_traits;

        const T24CrrcAgedSRI_optional&
        T24CrrcAgedSRI () const;

        T24CrrcAgedSRI_optional&
        T24CrrcAgedSRI ();

        void
        T24CrrcAgedSRI (const T24CrrcAgedSRI_type& x);

        void
        T24CrrcAgedSRI (const T24CrrcAgedSRI_optional& x);

        // T24CrrcInitialEmitance
        //
        typedef ::xml_schema::double_ T24CrrcInitialEmitance_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcInitialEmitance_type > T24CrrcInitialEmitance_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcInitialEmitance_type, char, ::xsd::cxx::tree::schema_type::double_ > T24CrrcInitialEmitance_traits;

        const T24CrrcInitialEmitance_optional&
        T24CrrcInitialEmitance () const;

        T24CrrcInitialEmitance_optional&
        T24CrrcInitialEmitance ();

        void
        T24CrrcInitialEmitance (const T24CrrcInitialEmitance_type& x);

        void
        T24CrrcInitialEmitance (const T24CrrcInitialEmitance_optional& x);

        // T24CrrcInitialReflectance
        //
        typedef ::xml_schema::double_ T24CrrcInitialReflectance_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcInitialReflectance_type > T24CrrcInitialReflectance_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcInitialReflectance_type, char, ::xsd::cxx::tree::schema_type::double_ > T24CrrcInitialReflectance_traits;

        const T24CrrcInitialReflectance_optional&
        T24CrrcInitialReflectance () const;

        T24CrrcInitialReflectance_optional&
        T24CrrcInitialReflectance ();

        void
        T24CrrcInitialReflectance (const T24CrrcInitialReflectance_type& x);

        void
        T24CrrcInitialReflectance (const T24CrrcInitialReflectance_optional& x);

        // T24CrrcInitialSRI
        //
        typedef ::xml_schema::int_ T24CrrcInitialSRI_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcInitialSRI_type > T24CrrcInitialSRI_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcInitialSRI_type, char > T24CrrcInitialSRI_traits;

        const T24CrrcInitialSRI_optional&
        T24CrrcInitialSRI () const;

        T24CrrcInitialSRI_optional&
        T24CrrcInitialSRI ();

        void
        T24CrrcInitialSRI (const T24CrrcInitialSRI_type& x);

        void
        T24CrrcInitialSRI (const T24CrrcInitialSRI_optional& x);

        // T24CrrcProductID
        //
        typedef ::xml_schema::string T24CrrcProductID_type;
        typedef ::xsd::cxx::tree::optional< T24CrrcProductID_type > T24CrrcProductID_optional;
        typedef ::xsd::cxx::tree::traits< T24CrrcProductID_type, char > T24CrrcProductID_traits;

        const T24CrrcProductID_optional&
        T24CrrcProductID () const;

        T24CrrcProductID_optional&
        T24CrrcProductID ();

        void
        T24CrrcProductID (const T24CrrcProductID_type& x);

        void
        T24CrrcProductID (const T24CrrcProductID_optional& x);

        void
        T24CrrcProductID (::std::auto_ptr< T24CrrcProductID_type > p);

        // T24FieldAppliedCoating
        //
        typedef ::xml_schema::int_ T24FieldAppliedCoating_type;
        typedef ::xsd::cxx::tree::optional< T24FieldAppliedCoating_type > T24FieldAppliedCoating_optional;
        typedef ::xsd::cxx::tree::traits< T24FieldAppliedCoating_type, char > T24FieldAppliedCoating_traits;

        const T24FieldAppliedCoating_optional&
        T24FieldAppliedCoating () const;

        T24FieldAppliedCoating_optional&
        T24FieldAppliedCoating ();

        void
        T24FieldAppliedCoating (const T24FieldAppliedCoating_type& x);

        void
        T24FieldAppliedCoating (const T24FieldAppliedCoating_optional& x);

        // T24RoofDensity
        //
        typedef ::xml_schema::int_ T24RoofDensity_type;
        typedef ::xsd::cxx::tree::optional< T24RoofDensity_type > T24RoofDensity_optional;
        typedef ::xsd::cxx::tree::traits< T24RoofDensity_type, char > T24RoofDensity_traits;

        const T24RoofDensity_optional&
        T24RoofDensity () const;

        T24RoofDensity_optional&
        T24RoofDensity ();

        void
        T24RoofDensity (const T24RoofDensity_type& x);

        void
        T24RoofDensity (const T24RoofDensity_optional& x);

        // T24ConstructInsulOrient
        //
        typedef ::xml_schema::string T24ConstructInsulOrient_type;
        typedef ::xsd::cxx::tree::optional< T24ConstructInsulOrient_type > T24ConstructInsulOrient_optional;
        typedef ::xsd::cxx::tree::traits< T24ConstructInsulOrient_type, char > T24ConstructInsulOrient_traits;

        const T24ConstructInsulOrient_optional&
        T24ConstructInsulOrient () const;

        T24ConstructInsulOrient_optional&
        T24ConstructInsulOrient ();

        void
        T24ConstructInsulOrient (const T24ConstructInsulOrient_type& x);

        void
        T24ConstructInsulOrient (const T24ConstructInsulOrient_optional& x);

        void
        T24ConstructInsulOrient (::std::auto_ptr< T24ConstructInsulOrient_type > p);

        // T24SlabInsulThermResist
        //
        typedef ::xml_schema::string T24SlabInsulThermResist_type;
        typedef ::xsd::cxx::tree::optional< T24SlabInsulThermResist_type > T24SlabInsulThermResist_optional;
        typedef ::xsd::cxx::tree::traits< T24SlabInsulThermResist_type, char > T24SlabInsulThermResist_traits;

        const T24SlabInsulThermResist_optional&
        T24SlabInsulThermResist () const;

        T24SlabInsulThermResist_optional&
        T24SlabInsulThermResist ();

        void
        T24SlabInsulThermResist (const T24SlabInsulThermResist_type& x);

        void
        T24SlabInsulThermResist (const T24SlabInsulThermResist_optional& x);

        void
        T24SlabInsulThermResist (::std::auto_ptr< T24SlabInsulThermResist_type > p);

        // T24SlabType
        //
        typedef ::xml_schema::string T24SlabType_type;
        typedef ::xsd::cxx::tree::optional< T24SlabType_type > T24SlabType_optional;
        typedef ::xsd::cxx::tree::traits< T24SlabType_type, char > T24SlabType_traits;

        const T24SlabType_optional&
        T24SlabType () const;

        T24SlabType_optional&
        T24SlabType ();

        void
        T24SlabType (const T24SlabType_type& x);

        void
        T24SlabType (const T24SlabType_optional& x);

        void
        T24SlabType (::std::auto_ptr< T24SlabType_type > p);

        // T24SolarReflectanceASTMCertification
        //
        typedef ::xml_schema::int_ T24SolarReflectanceASTMCertification_type;
        typedef ::xsd::cxx::tree::optional< T24SolarReflectanceASTMCertification_type > T24SolarReflectanceASTMCertification_optional;
        typedef ::xsd::cxx::tree::traits< T24SolarReflectanceASTMCertification_type, char > T24SolarReflectanceASTMCertification_traits;

        const T24SolarReflectanceASTMCertification_optional&
        T24SolarReflectanceASTMCertification () const;

        T24SolarReflectanceASTMCertification_optional&
        T24SolarReflectanceASTMCertification ();

        void
        T24SolarReflectanceASTMCertification (const T24SolarReflectanceASTMCertification_type& x);

        void
        T24SolarReflectanceASTMCertification (const T24SolarReflectanceASTMCertification_optional& x);

        // T24ThermalEmittanceASTMCertification
        //
        typedef ::xml_schema::int_ T24ThermalEmittanceASTMCertification_type;
        typedef ::xsd::cxx::tree::optional< T24ThermalEmittanceASTMCertification_type > T24ThermalEmittanceASTMCertification_optional;
        typedef ::xsd::cxx::tree::traits< T24ThermalEmittanceASTMCertification_type, char > T24ThermalEmittanceASTMCertification_traits;

        const T24ThermalEmittanceASTMCertification_optional&
        T24ThermalEmittanceASTMCertification () const;

        T24ThermalEmittanceASTMCertification_optional&
        T24ThermalEmittanceASTMCertification ();

        void
        T24ThermalEmittanceASTMCertification (const T24ThermalEmittanceASTMCertification_type& x);

        void
        T24ThermalEmittanceASTMCertification (const T24ThermalEmittanceASTMCertification_optional& x);

        // Constructors.
        //
        SimMaterialLayerSet_OpaqueLayerSet_Landing ();

        SimMaterialLayerSet_OpaqueLayerSet_Landing (const RefId_type&);

        SimMaterialLayerSet_OpaqueLayerSet_Landing (const ::xercesc::DOMElement& e,
                                                    ::xml_schema::flags f = 0,
                                                    ::xml_schema::container* c = 0);

        SimMaterialLayerSet_OpaqueLayerSet_Landing (const SimMaterialLayerSet_OpaqueLayerSet_Landing& x,
                                                    ::xml_schema::flags f = 0,
                                                    ::xml_schema::container* c = 0);

        virtual SimMaterialLayerSet_OpaqueLayerSet_Landing*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimMaterialLayerSet_OpaqueLayerSet_Landing&
        operator= (const SimMaterialLayerSet_OpaqueLayerSet_Landing& x);

        virtual 
        ~SimMaterialLayerSet_OpaqueLayerSet_Landing ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimMatLayerSet_OutsideLayer_optional SimMatLayerSet_OutsideLayer_;
        SimMatLayerSet_Layer_2_10_optional SimMatLayerSet_Layer_2_10_;
        T24ConsAssmNotes_optional T24ConsAssmNotes_;
        T24CrrcAgedEmittance_optional T24CrrcAgedEmittance_;
        T24CrrcAgedReflectance_optional T24CrrcAgedReflectance_;
        T24CrrcAgedSRI_optional T24CrrcAgedSRI_;
        T24CrrcInitialEmitance_optional T24CrrcInitialEmitance_;
        T24CrrcInitialReflectance_optional T24CrrcInitialReflectance_;
        T24CrrcInitialSRI_optional T24CrrcInitialSRI_;
        T24CrrcProductID_optional T24CrrcProductID_;
        T24FieldAppliedCoating_optional T24FieldAppliedCoating_;
        T24RoofDensity_optional T24RoofDensity_;
        T24ConstructInsulOrient_optional T24ConstructInsulOrient_;
        T24SlabInsulThermResist_optional T24SlabInsulThermResist_;
        T24SlabType_optional T24SlabType_;
        T24SolarReflectanceASTMCertification_optional T24SolarReflectanceASTMCertification_;
        T24ThermalEmittanceASTMCertification_optional T24ThermalEmittanceASTMCertification_;
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

#endif // SIM_MATERIAL_LAYER_SET_OPAQUE_LAYER_SET_LANDING_HXX
