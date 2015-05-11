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

#ifndef SIM_SLAB_ROOF_SLAB_ROOF_UNDER_EARTH_HXX
#define SIM_SLAB_ROOF_SLAB_ROOF_UNDER_EARTH_HXX

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
      class SimSlab_RoofSlab_RoofUnderEarth;
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

#include "simslab_roofslab.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace SimModelCore
    {
      class doubleList;
    }
  }
}

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimSlab_RoofSlab_RoofUnderEarth: public ::namespaces::Sim::BuildingModel::SimSlab_RoofSlab
      {
        public:
        // PredefinedSlabType
        //
        typedef ::xml_schema::string PredefinedSlabType_type;
        typedef ::xsd::cxx::tree::optional< PredefinedSlabType_type > PredefinedSlabType_optional;
        typedef ::xsd::cxx::tree::traits< PredefinedSlabType_type, char > PredefinedSlabType_traits;

        const PredefinedSlabType_optional&
        PredefinedSlabType () const;

        PredefinedSlabType_optional&
        PredefinedSlabType ();

        void
        PredefinedSlabType (const PredefinedSlabType_type& x);

        void
        PredefinedSlabType (const PredefinedSlabType_optional& x);

        void
        PredefinedSlabType (::std::auto_ptr< PredefinedSlabType_type > p);

        // ConstructionType
        //
        typedef ::xml_schema::string ConstructionType_type;
        typedef ::xsd::cxx::tree::optional< ConstructionType_type > ConstructionType_optional;
        typedef ::xsd::cxx::tree::traits< ConstructionType_type, char > ConstructionType_traits;

        const ConstructionType_optional&
        ConstructionType () const;

        ConstructionType_optional&
        ConstructionType ();

        void
        ConstructionType (const ConstructionType_type& x);

        void
        ConstructionType (const ConstructionType_optional& x);

        void
        ConstructionType (::std::auto_ptr< ConstructionType_type > p);

        // SlabIsExternal
        //
        typedef ::xml_schema::boolean SlabIsExternal_type;
        typedef ::xsd::cxx::tree::optional< SlabIsExternal_type > SlabIsExternal_optional;
        typedef ::xsd::cxx::tree::traits< SlabIsExternal_type, char > SlabIsExternal_traits;

        const SlabIsExternal_optional&
        SlabIsExternal () const;

        SlabIsExternal_optional&
        SlabIsExternal ();

        void
        SlabIsExternal (const SlabIsExternal_type& x);

        void
        SlabIsExternal (const SlabIsExternal_optional& x);

        // CompositeThermalTrans
        //
        typedef ::xml_schema::double_ CompositeThermalTrans_type;
        typedef ::xsd::cxx::tree::optional< CompositeThermalTrans_type > CompositeThermalTrans_optional;
        typedef ::xsd::cxx::tree::traits< CompositeThermalTrans_type, char, ::xsd::cxx::tree::schema_type::double_ > CompositeThermalTrans_traits;

        const CompositeThermalTrans_optional&
        CompositeThermalTrans () const;

        CompositeThermalTrans_optional&
        CompositeThermalTrans ();

        void
        CompositeThermalTrans (const CompositeThermalTrans_type& x);

        void
        CompositeThermalTrans (const CompositeThermalTrans_optional& x);

        // PhotoVotaicArrayOnElement
        //
        typedef ::xml_schema::idref PhotoVotaicArrayOnElement_type;
        typedef ::xsd::cxx::tree::optional< PhotoVotaicArrayOnElement_type > PhotoVotaicArrayOnElement_optional;
        typedef ::xsd::cxx::tree::traits< PhotoVotaicArrayOnElement_type, char > PhotoVotaicArrayOnElement_traits;

        const PhotoVotaicArrayOnElement_optional&
        PhotoVotaicArrayOnElement () const;

        PhotoVotaicArrayOnElement_optional&
        PhotoVotaicArrayOnElement ();

        void
        PhotoVotaicArrayOnElement (const PhotoVotaicArrayOnElement_type& x);

        void
        PhotoVotaicArrayOnElement (const PhotoVotaicArrayOnElement_optional& x);

        void
        PhotoVotaicArrayOnElement (::std::auto_ptr< PhotoVotaicArrayOnElement_type > p);

        // SlabThickness
        //
        typedef ::xml_schema::double_ SlabThickness_type;
        typedef ::xsd::cxx::tree::optional< SlabThickness_type > SlabThickness_optional;
        typedef ::xsd::cxx::tree::traits< SlabThickness_type, char, ::xsd::cxx::tree::schema_type::double_ > SlabThickness_traits;

        const SlabThickness_optional&
        SlabThickness () const;

        SlabThickness_optional&
        SlabThickness ();

        void
        SlabThickness (const SlabThickness_type& x);

        void
        SlabThickness (const SlabThickness_optional& x);

        // SlabPerimeter
        //
        typedef ::xml_schema::double_ SlabPerimeter_type;
        typedef ::xsd::cxx::tree::optional< SlabPerimeter_type > SlabPerimeter_optional;
        typedef ::xsd::cxx::tree::traits< SlabPerimeter_type, char, ::xsd::cxx::tree::schema_type::double_ > SlabPerimeter_traits;

        const SlabPerimeter_optional&
        SlabPerimeter () const;

        SlabPerimeter_optional&
        SlabPerimeter ();

        void
        SlabPerimeter (const SlabPerimeter_type& x);

        void
        SlabPerimeter (const SlabPerimeter_optional& x);

        // SlabGrossArea
        //
        typedef ::xml_schema::double_ SlabGrossArea_type;
        typedef ::xsd::cxx::tree::optional< SlabGrossArea_type > SlabGrossArea_optional;
        typedef ::xsd::cxx::tree::traits< SlabGrossArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SlabGrossArea_traits;

        const SlabGrossArea_optional&
        SlabGrossArea () const;

        SlabGrossArea_optional&
        SlabGrossArea ();

        void
        SlabGrossArea (const SlabGrossArea_type& x);

        void
        SlabGrossArea (const SlabGrossArea_optional& x);

        // SlabNetArea
        //
        typedef ::xml_schema::double_ SlabNetArea_type;
        typedef ::xsd::cxx::tree::optional< SlabNetArea_type > SlabNetArea_optional;
        typedef ::xsd::cxx::tree::traits< SlabNetArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SlabNetArea_traits;

        const SlabNetArea_optional&
        SlabNetArea () const;

        SlabNetArea_optional&
        SlabNetArea ();

        void
        SlabNetArea (const SlabNetArea_type& x);

        void
        SlabNetArea (const SlabNetArea_optional& x);

        // SlabGrossVolume
        //
        typedef ::xml_schema::double_ SlabGrossVolume_type;
        typedef ::xsd::cxx::tree::optional< SlabGrossVolume_type > SlabGrossVolume_optional;
        typedef ::xsd::cxx::tree::traits< SlabGrossVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > SlabGrossVolume_traits;

        const SlabGrossVolume_optional&
        SlabGrossVolume () const;

        SlabGrossVolume_optional&
        SlabGrossVolume ();

        void
        SlabGrossVolume (const SlabGrossVolume_type& x);

        void
        SlabGrossVolume (const SlabGrossVolume_optional& x);

        // SlabNetVolume
        //
        typedef ::xml_schema::double_ SlabNetVolume_type;
        typedef ::xsd::cxx::tree::optional< SlabNetVolume_type > SlabNetVolume_optional;
        typedef ::xsd::cxx::tree::traits< SlabNetVolume_type, char, ::xsd::cxx::tree::schema_type::double_ > SlabNetVolume_traits;

        const SlabNetVolume_optional&
        SlabNetVolume () const;

        SlabNetVolume_optional&
        SlabNetVolume ();

        void
        SlabNetVolume (const SlabNetVolume_type& x);

        void
        SlabNetVolume (const SlabNetVolume_optional& x);

        // ClassRef_UniFormat
        //
        typedef ::xml_schema::idref ClassRef_UniFormat_type;
        typedef ::xsd::cxx::tree::optional< ClassRef_UniFormat_type > ClassRef_UniFormat_optional;
        typedef ::xsd::cxx::tree::traits< ClassRef_UniFormat_type, char > ClassRef_UniFormat_traits;

        const ClassRef_UniFormat_optional&
        ClassRef_UniFormat () const;

        ClassRef_UniFormat_optional&
        ClassRef_UniFormat ();

        void
        ClassRef_UniFormat (const ClassRef_UniFormat_type& x);

        void
        ClassRef_UniFormat (const ClassRef_UniFormat_optional& x);

        void
        ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > p);

        // MaterialLayerSet
        //
        typedef ::xml_schema::idref MaterialLayerSet_type;
        typedef ::xsd::cxx::tree::optional< MaterialLayerSet_type > MaterialLayerSet_optional;
        typedef ::xsd::cxx::tree::traits< MaterialLayerSet_type, char > MaterialLayerSet_traits;

        const MaterialLayerSet_optional&
        MaterialLayerSet () const;

        MaterialLayerSet_optional&
        MaterialLayerSet ();

        void
        MaterialLayerSet (const MaterialLayerSet_type& x);

        void
        MaterialLayerSet (const MaterialLayerSet_optional& x);

        void
        MaterialLayerSet (::std::auto_ptr< MaterialLayerSet_type > p);

        // ConnectedSlabs
        //
        typedef ::xml_schema::idrefs ConnectedSlabs_type;
        typedef ::xsd::cxx::tree::optional< ConnectedSlabs_type > ConnectedSlabs_optional;
        typedef ::xsd::cxx::tree::traits< ConnectedSlabs_type, char > ConnectedSlabs_traits;

        const ConnectedSlabs_optional&
        ConnectedSlabs () const;

        ConnectedSlabs_optional&
        ConnectedSlabs ();

        void
        ConnectedSlabs (const ConnectedSlabs_type& x);

        void
        ConnectedSlabs (const ConnectedSlabs_optional& x);

        void
        ConnectedSlabs (::std::auto_ptr< ConnectedSlabs_type > p);

        // ConnectedWalls
        //
        typedef ::xml_schema::idrefs ConnectedWalls_type;
        typedef ::xsd::cxx::tree::optional< ConnectedWalls_type > ConnectedWalls_optional;
        typedef ::xsd::cxx::tree::traits< ConnectedWalls_type, char > ConnectedWalls_traits;

        const ConnectedWalls_optional&
        ConnectedWalls () const;

        ConnectedWalls_optional&
        ConnectedWalls ();

        void
        ConnectedWalls (const ConnectedWalls_type& x);

        void
        ConnectedWalls (const ConnectedWalls_optional& x);

        void
        ConnectedWalls (::std::auto_ptr< ConnectedWalls_type > p);

        // ConnectedBeams
        //
        typedef ::xml_schema::idrefs ConnectedBeams_type;
        typedef ::xsd::cxx::tree::optional< ConnectedBeams_type > ConnectedBeams_optional;
        typedef ::xsd::cxx::tree::traits< ConnectedBeams_type, char > ConnectedBeams_traits;

        const ConnectedBeams_optional&
        ConnectedBeams () const;

        ConnectedBeams_optional&
        ConnectedBeams ();

        void
        ConnectedBeams (const ConnectedBeams_type& x);

        void
        ConnectedBeams (const ConnectedBeams_optional& x);

        void
        ConnectedBeams (::std::auto_ptr< ConnectedBeams_type > p);

        // ConnectedColumns
        //
        typedef ::xml_schema::idrefs ConnectedColumns_type;
        typedef ::xsd::cxx::tree::optional< ConnectedColumns_type > ConnectedColumns_optional;
        typedef ::xsd::cxx::tree::traits< ConnectedColumns_type, char > ConnectedColumns_traits;

        const ConnectedColumns_optional&
        ConnectedColumns () const;

        ConnectedColumns_optional&
        ConnectedColumns ();

        void
        ConnectedColumns (const ConnectedColumns_type& x);

        void
        ConnectedColumns (const ConnectedColumns_optional& x);

        void
        ConnectedColumns (::std::auto_ptr< ConnectedColumns_type > p);

        // ContainingRamp
        //
        typedef ::xml_schema::idref ContainingRamp_type;
        typedef ::xsd::cxx::tree::optional< ContainingRamp_type > ContainingRamp_optional;
        typedef ::xsd::cxx::tree::traits< ContainingRamp_type, char > ContainingRamp_traits;

        const ContainingRamp_optional&
        ContainingRamp () const;

        ContainingRamp_optional&
        ContainingRamp ();

        void
        ContainingRamp (const ContainingRamp_type& x);

        void
        ContainingRamp (const ContainingRamp_optional& x);

        void
        ContainingRamp (::std::auto_ptr< ContainingRamp_type > p);

        // ContainingStair
        //
        typedef ::xml_schema::idref ContainingStair_type;
        typedef ::xsd::cxx::tree::optional< ContainingStair_type > ContainingStair_optional;
        typedef ::xsd::cxx::tree::traits< ContainingStair_type, char > ContainingStair_traits;

        const ContainingStair_optional&
        ContainingStair () const;

        ContainingStair_optional&
        ContainingStair ();

        void
        ContainingStair (const ContainingStair_type& x);

        void
        ContainingStair (const ContainingStair_optional& x);

        void
        ContainingStair (::std::auto_ptr< ContainingStair_type > p);

        // SimSlab_Vertex_1_120_X_Coord
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimSlab_Vertex_1_120_X_Coord_type;
        typedef ::xsd::cxx::tree::optional< SimSlab_Vertex_1_120_X_Coord_type > SimSlab_Vertex_1_120_X_Coord_optional;
        typedef ::xsd::cxx::tree::traits< SimSlab_Vertex_1_120_X_Coord_type, char > SimSlab_Vertex_1_120_X_Coord_traits;

        const SimSlab_Vertex_1_120_X_Coord_optional&
        SimSlab_Vertex_1_120_X_Coord () const;

        SimSlab_Vertex_1_120_X_Coord_optional&
        SimSlab_Vertex_1_120_X_Coord ();

        void
        SimSlab_Vertex_1_120_X_Coord (const SimSlab_Vertex_1_120_X_Coord_type& x);

        void
        SimSlab_Vertex_1_120_X_Coord (const SimSlab_Vertex_1_120_X_Coord_optional& x);

        void
        SimSlab_Vertex_1_120_X_Coord (::std::auto_ptr< SimSlab_Vertex_1_120_X_Coord_type > p);

        // SimSlab_Vertex_1_120_Y_Coord
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimSlab_Vertex_1_120_Y_Coord_type;
        typedef ::xsd::cxx::tree::optional< SimSlab_Vertex_1_120_Y_Coord_type > SimSlab_Vertex_1_120_Y_Coord_optional;
        typedef ::xsd::cxx::tree::traits< SimSlab_Vertex_1_120_Y_Coord_type, char > SimSlab_Vertex_1_120_Y_Coord_traits;

        const SimSlab_Vertex_1_120_Y_Coord_optional&
        SimSlab_Vertex_1_120_Y_Coord () const;

        SimSlab_Vertex_1_120_Y_Coord_optional&
        SimSlab_Vertex_1_120_Y_Coord ();

        void
        SimSlab_Vertex_1_120_Y_Coord (const SimSlab_Vertex_1_120_Y_Coord_type& x);

        void
        SimSlab_Vertex_1_120_Y_Coord (const SimSlab_Vertex_1_120_Y_Coord_optional& x);

        void
        SimSlab_Vertex_1_120_Y_Coord (::std::auto_ptr< SimSlab_Vertex_1_120_Y_Coord_type > p);

        // SimSlab_Vertex_1_120_Z_Coord
        //
        typedef ::namespaces::Sim::SimModelCore::doubleList SimSlab_Vertex_1_120_Z_Coord_type;
        typedef ::xsd::cxx::tree::optional< SimSlab_Vertex_1_120_Z_Coord_type > SimSlab_Vertex_1_120_Z_Coord_optional;
        typedef ::xsd::cxx::tree::traits< SimSlab_Vertex_1_120_Z_Coord_type, char > SimSlab_Vertex_1_120_Z_Coord_traits;

        const SimSlab_Vertex_1_120_Z_Coord_optional&
        SimSlab_Vertex_1_120_Z_Coord () const;

        SimSlab_Vertex_1_120_Z_Coord_optional&
        SimSlab_Vertex_1_120_Z_Coord ();

        void
        SimSlab_Vertex_1_120_Z_Coord (const SimSlab_Vertex_1_120_Z_Coord_type& x);

        void
        SimSlab_Vertex_1_120_Z_Coord (const SimSlab_Vertex_1_120_Z_Coord_optional& x);

        void
        SimSlab_Vertex_1_120_Z_Coord (::std::auto_ptr< SimSlab_Vertex_1_120_Z_Coord_type > p);

        // Constructors.
        //
        SimSlab_RoofSlab_RoofUnderEarth (const RefId_type&);

        SimSlab_RoofSlab_RoofUnderEarth (const ::xercesc::DOMElement& e,
                                         ::xml_schema::flags f = 0,
                                         ::xml_schema::container* c = 0);

        SimSlab_RoofSlab_RoofUnderEarth (const SimSlab_RoofSlab_RoofUnderEarth& x,
                                         ::xml_schema::flags f = 0,
                                         ::xml_schema::container* c = 0);

        virtual SimSlab_RoofSlab_RoofUnderEarth*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimSlab_RoofSlab_RoofUnderEarth&
        operator= (const SimSlab_RoofSlab_RoofUnderEarth& x);

        virtual 
        ~SimSlab_RoofSlab_RoofUnderEarth ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        PredefinedSlabType_optional PredefinedSlabType_;
        ConstructionType_optional ConstructionType_;
        SlabIsExternal_optional SlabIsExternal_;
        CompositeThermalTrans_optional CompositeThermalTrans_;
        PhotoVotaicArrayOnElement_optional PhotoVotaicArrayOnElement_;
        SlabThickness_optional SlabThickness_;
        SlabPerimeter_optional SlabPerimeter_;
        SlabGrossArea_optional SlabGrossArea_;
        SlabNetArea_optional SlabNetArea_;
        SlabGrossVolume_optional SlabGrossVolume_;
        SlabNetVolume_optional SlabNetVolume_;
        ClassRef_UniFormat_optional ClassRef_UniFormat_;
        MaterialLayerSet_optional MaterialLayerSet_;
        ConnectedSlabs_optional ConnectedSlabs_;
        ConnectedWalls_optional ConnectedWalls_;
        ConnectedBeams_optional ConnectedBeams_;
        ConnectedColumns_optional ConnectedColumns_;
        ContainingRamp_optional ContainingRamp_;
        ContainingStair_optional ContainingStair_;
        SimSlab_Vertex_1_120_X_Coord_optional SimSlab_Vertex_1_120_X_Coord_;
        SimSlab_Vertex_1_120_Y_Coord_optional SimSlab_Vertex_1_120_Y_Coord_;
        SimSlab_Vertex_1_120_Z_Coord_optional SimSlab_Vertex_1_120_Z_Coord_;
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

#endif // SIM_SLAB_ROOF_SLAB_ROOF_UNDER_EARTH_HXX
