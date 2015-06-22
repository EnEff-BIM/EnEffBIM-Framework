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

#ifndef SIM_CURTAIN_WALL_HXX
#define SIM_CURTAIN_WALL_HXX

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
      class SimCurtainWall;
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

#include "simbuildingelementassembly.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      class SimCurtainWall: public ::namespaces::Sim::BuildingModel::SimBuildingElementAssembly
      {
        public:
        // Name
        //
        typedef ::xml_schema::string Name_type;
        typedef ::xsd::cxx::tree::optional< Name_type > Name_optional;
        typedef ::xsd::cxx::tree::traits< Name_type, char > Name_traits;

        const Name_optional&
        Name () const;

        Name_optional&
        Name ();

        void
        Name (const Name_type& x);

        void
        Name (const Name_optional& x);

        void
        Name (::std::auto_ptr< Name_type > p);

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

        // CurtainWallIsExternal
        //
        typedef ::xml_schema::boolean CurtainWallIsExternal_type;
        typedef ::xsd::cxx::tree::optional< CurtainWallIsExternal_type > CurtainWallIsExternal_optional;
        typedef ::xsd::cxx::tree::traits< CurtainWallIsExternal_type, char > CurtainWallIsExternal_traits;

        const CurtainWallIsExternal_optional&
        CurtainWallIsExternal () const;

        CurtainWallIsExternal_optional&
        CurtainWallIsExternal ();

        void
        CurtainWallIsExternal (const CurtainWallIsExternal_type& x);

        void
        CurtainWallIsExternal (const CurtainWallIsExternal_optional& x);

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

        // Windows6GlazingSystemName
        //
        typedef ::xml_schema::string Windows6GlazingSystemName_type;
        typedef ::xsd::cxx::tree::optional< Windows6GlazingSystemName_type > Windows6GlazingSystemName_optional;
        typedef ::xsd::cxx::tree::traits< Windows6GlazingSystemName_type, char > Windows6GlazingSystemName_traits;

        const Windows6GlazingSystemName_optional&
        Windows6GlazingSystemName () const;

        Windows6GlazingSystemName_optional&
        Windows6GlazingSystemName ();

        void
        Windows6GlazingSystemName (const Windows6GlazingSystemName_type& x);

        void
        Windows6GlazingSystemName (const Windows6GlazingSystemName_optional& x);

        void
        Windows6GlazingSystemName (::std::auto_ptr< Windows6GlazingSystemName_type > p);

        // ExteriorSurfaceColorofGlass
        //
        typedef ::xml_schema::string ExteriorSurfaceColorofGlass_type;
        typedef ::xsd::cxx::tree::optional< ExteriorSurfaceColorofGlass_type > ExteriorSurfaceColorofGlass_optional;
        typedef ::xsd::cxx::tree::traits< ExteriorSurfaceColorofGlass_type, char > ExteriorSurfaceColorofGlass_traits;

        const ExteriorSurfaceColorofGlass_optional&
        ExteriorSurfaceColorofGlass () const;

        ExteriorSurfaceColorofGlass_optional&
        ExteriorSurfaceColorofGlass ();

        void
        ExteriorSurfaceColorofGlass (const ExteriorSurfaceColorofGlass_type& x);

        void
        ExteriorSurfaceColorofGlass (const ExteriorSurfaceColorofGlass_optional& x);

        void
        ExteriorSurfaceColorofGlass (::std::auto_ptr< ExteriorSurfaceColorofGlass_type > p);

        // InteriorSurfaceColorofGlass
        //
        typedef ::xml_schema::string InteriorSurfaceColorofGlass_type;
        typedef ::xsd::cxx::tree::optional< InteriorSurfaceColorofGlass_type > InteriorSurfaceColorofGlass_optional;
        typedef ::xsd::cxx::tree::traits< InteriorSurfaceColorofGlass_type, char > InteriorSurfaceColorofGlass_traits;

        const InteriorSurfaceColorofGlass_optional&
        InteriorSurfaceColorofGlass () const;

        InteriorSurfaceColorofGlass_optional&
        InteriorSurfaceColorofGlass ();

        void
        InteriorSurfaceColorofGlass (const InteriorSurfaceColorofGlass_type& x);

        void
        InteriorSurfaceColorofGlass (const InteriorSurfaceColorofGlass_optional& x);

        void
        InteriorSurfaceColorofGlass (::std::auto_ptr< InteriorSurfaceColorofGlass_type > p);

        // Transmittance_Visible
        //
        typedef ::xml_schema::double_ Transmittance_Visible_type;
        typedef ::xsd::cxx::tree::optional< Transmittance_Visible_type > Transmittance_Visible_optional;
        typedef ::xsd::cxx::tree::traits< Transmittance_Visible_type, char, ::xsd::cxx::tree::schema_type::double_ > Transmittance_Visible_traits;

        const Transmittance_Visible_optional&
        Transmittance_Visible () const;

        Transmittance_Visible_optional&
        Transmittance_Visible ();

        void
        Transmittance_Visible (const Transmittance_Visible_type& x);

        void
        Transmittance_Visible (const Transmittance_Visible_optional& x);

        // Transmittance_Solar
        //
        typedef ::xml_schema::double_ Transmittance_Solar_type;
        typedef ::xsd::cxx::tree::optional< Transmittance_Solar_type > Transmittance_Solar_optional;
        typedef ::xsd::cxx::tree::traits< Transmittance_Solar_type, char, ::xsd::cxx::tree::schema_type::double_ > Transmittance_Solar_traits;

        const Transmittance_Solar_optional&
        Transmittance_Solar () const;

        Transmittance_Solar_optional&
        Transmittance_Solar ();

        void
        Transmittance_Solar (const Transmittance_Solar_type& x);

        void
        Transmittance_Solar (const Transmittance_Solar_optional& x);

        // CompositeThermalTransGlazing
        //
        typedef ::xml_schema::double_ CompositeThermalTransGlazing_type;
        typedef ::xsd::cxx::tree::optional< CompositeThermalTransGlazing_type > CompositeThermalTransGlazing_optional;
        typedef ::xsd::cxx::tree::traits< CompositeThermalTransGlazing_type, char, ::xsd::cxx::tree::schema_type::double_ > CompositeThermalTransGlazing_traits;

        const CompositeThermalTransGlazing_optional&
        CompositeThermalTransGlazing () const;

        CompositeThermalTransGlazing_optional&
        CompositeThermalTransGlazing ();

        void
        CompositeThermalTransGlazing (const CompositeThermalTransGlazing_type& x);

        void
        CompositeThermalTransGlazing (const CompositeThermalTransGlazing_optional& x);

        // ShadingCoefficient_SC
        //
        typedef ::xml_schema::double_ ShadingCoefficient_SC_type;
        typedef ::xsd::cxx::tree::optional< ShadingCoefficient_SC_type > ShadingCoefficient_SC_optional;
        typedef ::xsd::cxx::tree::traits< ShadingCoefficient_SC_type, char, ::xsd::cxx::tree::schema_type::double_ > ShadingCoefficient_SC_traits;

        const ShadingCoefficient_SC_optional&
        ShadingCoefficient_SC () const;

        ShadingCoefficient_SC_optional&
        ShadingCoefficient_SC ();

        void
        ShadingCoefficient_SC (const ShadingCoefficient_SC_type& x);

        void
        ShadingCoefficient_SC (const ShadingCoefficient_SC_optional& x);

        // SolarHeatGainCoefficient_SHGC
        //
        typedef ::xml_schema::double_ SolarHeatGainCoefficient_SHGC_type;
        typedef ::xsd::cxx::tree::optional< SolarHeatGainCoefficient_SHGC_type > SolarHeatGainCoefficient_SHGC_optional;
        typedef ::xsd::cxx::tree::traits< SolarHeatGainCoefficient_SHGC_type, char, ::xsd::cxx::tree::schema_type::double_ > SolarHeatGainCoefficient_SHGC_traits;

        const SolarHeatGainCoefficient_SHGC_optional&
        SolarHeatGainCoefficient_SHGC () const;

        SolarHeatGainCoefficient_SHGC_optional&
        SolarHeatGainCoefficient_SHGC ();

        void
        SolarHeatGainCoefficient_SHGC (const SolarHeatGainCoefficient_SHGC_type& x);

        void
        SolarHeatGainCoefficient_SHGC (const SolarHeatGainCoefficient_SHGC_optional& x);

        // GlazingAssemblyManufacturer
        //
        typedef ::xml_schema::string GlazingAssemblyManufacturer_type;
        typedef ::xsd::cxx::tree::optional< GlazingAssemblyManufacturer_type > GlazingAssemblyManufacturer_optional;
        typedef ::xsd::cxx::tree::traits< GlazingAssemblyManufacturer_type, char > GlazingAssemblyManufacturer_traits;

        const GlazingAssemblyManufacturer_optional&
        GlazingAssemblyManufacturer () const;

        GlazingAssemblyManufacturer_optional&
        GlazingAssemblyManufacturer ();

        void
        GlazingAssemblyManufacturer (const GlazingAssemblyManufacturer_type& x);

        void
        GlazingAssemblyManufacturer (const GlazingAssemblyManufacturer_optional& x);

        void
        GlazingAssemblyManufacturer (::std::auto_ptr< GlazingAssemblyManufacturer_type > p);

        // GlazingProductID
        //
        typedef ::xml_schema::string GlazingProductID_type;
        typedef ::xsd::cxx::tree::optional< GlazingProductID_type > GlazingProductID_optional;
        typedef ::xsd::cxx::tree::traits< GlazingProductID_type, char > GlazingProductID_traits;

        const GlazingProductID_optional&
        GlazingProductID () const;

        GlazingProductID_optional&
        GlazingProductID ();

        void
        GlazingProductID (const GlazingProductID_type& x);

        void
        GlazingProductID (const GlazingProductID_optional& x);

        void
        GlazingProductID (::std::auto_ptr< GlazingProductID_type > p);

        // GrossSideArea
        //
        typedef ::xml_schema::double_ GrossSideArea_type;
        typedef ::xsd::cxx::tree::optional< GrossSideArea_type > GrossSideArea_optional;
        typedef ::xsd::cxx::tree::traits< GrossSideArea_type, char, ::xsd::cxx::tree::schema_type::double_ > GrossSideArea_traits;

        const GrossSideArea_optional&
        GrossSideArea () const;

        GrossSideArea_optional&
        GrossSideArea ();

        void
        GrossSideArea (const GrossSideArea_type& x);

        void
        GrossSideArea (const GrossSideArea_optional& x);

        // FrameDepth
        //
        typedef ::xml_schema::double_ FrameDepth_type;
        typedef ::xsd::cxx::tree::optional< FrameDepth_type > FrameDepth_optional;
        typedef ::xsd::cxx::tree::traits< FrameDepth_type, char, ::xsd::cxx::tree::schema_type::double_ > FrameDepth_traits;

        const FrameDepth_optional&
        FrameDepth () const;

        FrameDepth_optional&
        FrameDepth ();

        void
        FrameDepth (const FrameDepth_type& x);

        void
        FrameDepth (const FrameDepth_optional& x);

        // FrameThickness
        //
        typedef ::xml_schema::double_ FrameThickness_type;
        typedef ::xsd::cxx::tree::optional< FrameThickness_type > FrameThickness_optional;
        typedef ::xsd::cxx::tree::traits< FrameThickness_type, char, ::xsd::cxx::tree::schema_type::double_ > FrameThickness_traits;

        const FrameThickness_optional&
        FrameThickness () const;

        FrameThickness_optional&
        FrameThickness ();

        void
        FrameThickness (const FrameThickness_type& x);

        void
        FrameThickness (const FrameThickness_optional& x);

        // ExternalCornersCount
        //
        typedef ::xml_schema::double_ ExternalCornersCount_type;
        typedef ::xsd::cxx::tree::optional< ExternalCornersCount_type > ExternalCornersCount_optional;
        typedef ::xsd::cxx::tree::traits< ExternalCornersCount_type, char, ::xsd::cxx::tree::schema_type::double_ > ExternalCornersCount_traits;

        const ExternalCornersCount_optional&
        ExternalCornersCount () const;

        ExternalCornersCount_optional&
        ExternalCornersCount ();

        void
        ExternalCornersCount (const ExternalCornersCount_type& x);

        void
        ExternalCornersCount (const ExternalCornersCount_optional& x);

        // InternalCornersCount
        //
        typedef ::xml_schema::double_ InternalCornersCount_type;
        typedef ::xsd::cxx::tree::optional< InternalCornersCount_type > InternalCornersCount_optional;
        typedef ::xsd::cxx::tree::traits< InternalCornersCount_type, char, ::xsd::cxx::tree::schema_type::double_ > InternalCornersCount_traits;

        const InternalCornersCount_optional&
        InternalCornersCount () const;

        InternalCornersCount_optional&
        InternalCornersCount ();

        void
        InternalCornersCount (const InternalCornersCount_type& x);

        void
        InternalCornersCount (const InternalCornersCount_optional& x);

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

        // MaterialList
        //
        typedef ::xml_schema::idref MaterialList_type;
        typedef ::xsd::cxx::tree::optional< MaterialList_type > MaterialList_optional;
        typedef ::xsd::cxx::tree::traits< MaterialList_type, char > MaterialList_traits;

        const MaterialList_optional&
        MaterialList () const;

        MaterialList_optional&
        MaterialList ();

        void
        MaterialList (const MaterialList_type& x);

        void
        MaterialList (const MaterialList_optional& x);

        void
        MaterialList (::std::auto_ptr< MaterialList_type > p);

        // VoidsInCurtainWall
        //
        typedef ::xml_schema::idrefs VoidsInCurtainWall_type;
        typedef ::xsd::cxx::tree::optional< VoidsInCurtainWall_type > VoidsInCurtainWall_optional;
        typedef ::xsd::cxx::tree::traits< VoidsInCurtainWall_type, char > VoidsInCurtainWall_traits;

        const VoidsInCurtainWall_optional&
        VoidsInCurtainWall () const;

        VoidsInCurtainWall_optional&
        VoidsInCurtainWall ();

        void
        VoidsInCurtainWall (const VoidsInCurtainWall_type& x);

        void
        VoidsInCurtainWall (const VoidsInCurtainWall_optional& x);

        void
        VoidsInCurtainWall (::std::auto_ptr< VoidsInCurtainWall_type > p);

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

        // MembersInCurtainWall
        //
        typedef ::xml_schema::idrefs MembersInCurtainWall_type;
        typedef ::xsd::cxx::tree::optional< MembersInCurtainWall_type > MembersInCurtainWall_optional;
        typedef ::xsd::cxx::tree::traits< MembersInCurtainWall_type, char > MembersInCurtainWall_traits;

        const MembersInCurtainWall_optional&
        MembersInCurtainWall () const;

        MembersInCurtainWall_optional&
        MembersInCurtainWall ();

        void
        MembersInCurtainWall (const MembersInCurtainWall_type& x);

        void
        MembersInCurtainWall (const MembersInCurtainWall_optional& x);

        void
        MembersInCurtainWall (::std::auto_ptr< MembersInCurtainWall_type > p);

        // PanelsInCurtainWall
        //
        typedef ::xml_schema::idrefs PanelsInCurtainWall_type;
        typedef ::xsd::cxx::tree::optional< PanelsInCurtainWall_type > PanelsInCurtainWall_optional;
        typedef ::xsd::cxx::tree::traits< PanelsInCurtainWall_type, char > PanelsInCurtainWall_traits;

        const PanelsInCurtainWall_optional&
        PanelsInCurtainWall () const;

        PanelsInCurtainWall_optional&
        PanelsInCurtainWall ();

        void
        PanelsInCurtainWall (const PanelsInCurtainWall_type& x);

        void
        PanelsInCurtainWall (const PanelsInCurtainWall_optional& x);

        void
        PanelsInCurtainWall (::std::auto_ptr< PanelsInCurtainWall_type > p);

        // Representation
        //
        typedef ::xml_schema::idref Representation_type;
        typedef ::xsd::cxx::tree::optional< Representation_type > Representation_optional;
        typedef ::xsd::cxx::tree::traits< Representation_type, char > Representation_traits;

        const Representation_optional&
        Representation () const;

        Representation_optional&
        Representation ();

        void
        Representation (const Representation_type& x);

        void
        Representation (const Representation_optional& x);

        void
        Representation (::std::auto_ptr< Representation_type > p);

        // Constructors.
        //
        SimCurtainWall (const RefId_type&);

        SimCurtainWall (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

        SimCurtainWall (const SimCurtainWall& x,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

        virtual SimCurtainWall*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimCurtainWall&
        operator= (const SimCurtainWall& x);

        virtual 
        ~SimCurtainWall ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        Name_optional Name_;
        ConstructionType_optional ConstructionType_;
        CurtainWallIsExternal_optional CurtainWallIsExternal_;
        CompositeThermalTrans_optional CompositeThermalTrans_;
        Windows6GlazingSystemName_optional Windows6GlazingSystemName_;
        ExteriorSurfaceColorofGlass_optional ExteriorSurfaceColorofGlass_;
        InteriorSurfaceColorofGlass_optional InteriorSurfaceColorofGlass_;
        Transmittance_Visible_optional Transmittance_Visible_;
        Transmittance_Solar_optional Transmittance_Solar_;
        CompositeThermalTransGlazing_optional CompositeThermalTransGlazing_;
        ShadingCoefficient_SC_optional ShadingCoefficient_SC_;
        SolarHeatGainCoefficient_SHGC_optional SolarHeatGainCoefficient_SHGC_;
        GlazingAssemblyManufacturer_optional GlazingAssemblyManufacturer_;
        GlazingProductID_optional GlazingProductID_;
        GrossSideArea_optional GrossSideArea_;
        FrameDepth_optional FrameDepth_;
        FrameThickness_optional FrameThickness_;
        ExternalCornersCount_optional ExternalCornersCount_;
        InternalCornersCount_optional InternalCornersCount_;
        ClassRef_UniFormat_optional ClassRef_UniFormat_;
        MaterialList_optional MaterialList_;
        VoidsInCurtainWall_optional VoidsInCurtainWall_;
        ConnectedWalls_optional ConnectedWalls_;
        ConnectedSlabs_optional ConnectedSlabs_;
        MembersInCurtainWall_optional MembersInCurtainWall_;
        PanelsInCurtainWall_optional PanelsInCurtainWall_;
        Representation_optional Representation_;
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

#endif // SIM_CURTAIN_WALL_HXX