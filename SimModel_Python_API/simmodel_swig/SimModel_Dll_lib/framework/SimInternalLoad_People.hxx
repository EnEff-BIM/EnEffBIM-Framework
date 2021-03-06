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

#ifndef SIM_INTERNAL_LOAD_PEOPLE_HXX
#define SIM_INTERNAL_LOAD_PEOPLE_HXX

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
//#error XSD runtime version mismatch
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
      class SimInternalLoad_People;
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

#include "siminternalload.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class SimInternalLoad_ThermalComfortModel_1_5_Type;
    }
  }
}

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      class __declspec(dllexport) SimInternalLoad_People: public ::schema::simxml::ResourcesGeneral::SimInternalLoad
      {
        public:
        // SimInternalLoad_Name
        //
        typedef ::xml_schema::string SimInternalLoad_Name_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_Name_type, false > SimInternalLoad_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_Name_type, char > SimInternalLoad_Name_traits;

        const SimInternalLoad_Name_optional&
        SimInternalLoad_Name () const;

        SimInternalLoad_Name_optional&
        SimInternalLoad_Name ();

        void
        SimInternalLoad_Name (const SimInternalLoad_Name_type& x);

        void
        SimInternalLoad_Name (const SimInternalLoad_Name_optional& x);

        void
        SimInternalLoad_Name (::std::auto_ptr< SimInternalLoad_Name_type > p);

        // SimInternalLoad_ZoneOrZoneListName
        //
        typedef ::xml_schema::idref SimInternalLoad_ZoneOrZoneListName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ZoneOrZoneListName_type, false > SimInternalLoad_ZoneOrZoneListName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ZoneOrZoneListName_type, char > SimInternalLoad_ZoneOrZoneListName_traits;

        const SimInternalLoad_ZoneOrZoneListName_optional&
        SimInternalLoad_ZoneOrZoneListName () const;

        SimInternalLoad_ZoneOrZoneListName_optional&
        SimInternalLoad_ZoneOrZoneListName ();

        void
        SimInternalLoad_ZoneOrZoneListName (const SimInternalLoad_ZoneOrZoneListName_type& x);

        void
        SimInternalLoad_ZoneOrZoneListName (const SimInternalLoad_ZoneOrZoneListName_optional& x);

        void
        SimInternalLoad_ZoneOrZoneListName (::std::auto_ptr< SimInternalLoad_ZoneOrZoneListName_type > p);

        // SimInternalLoad_NumbPeopleSchedName
        //
        typedef ::xml_schema::idref SimInternalLoad_NumbPeopleSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_NumbPeopleSchedName_type, false > SimInternalLoad_NumbPeopleSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_NumbPeopleSchedName_type, char > SimInternalLoad_NumbPeopleSchedName_traits;

        const SimInternalLoad_NumbPeopleSchedName_optional&
        SimInternalLoad_NumbPeopleSchedName () const;

        SimInternalLoad_NumbPeopleSchedName_optional&
        SimInternalLoad_NumbPeopleSchedName ();

        void
        SimInternalLoad_NumbPeopleSchedName (const SimInternalLoad_NumbPeopleSchedName_type& x);

        void
        SimInternalLoad_NumbPeopleSchedName (const SimInternalLoad_NumbPeopleSchedName_optional& x);

        void
        SimInternalLoad_NumbPeopleSchedName (::std::auto_ptr< SimInternalLoad_NumbPeopleSchedName_type > p);

        // SimInternalLoad_NumbPeopleCalcMeth
        //
        typedef ::xml_schema::string SimInternalLoad_NumbPeopleCalcMeth_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_NumbPeopleCalcMeth_type, false > SimInternalLoad_NumbPeopleCalcMeth_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_NumbPeopleCalcMeth_type, char > SimInternalLoad_NumbPeopleCalcMeth_traits;

        const SimInternalLoad_NumbPeopleCalcMeth_optional&
        SimInternalLoad_NumbPeopleCalcMeth () const;

        SimInternalLoad_NumbPeopleCalcMeth_optional&
        SimInternalLoad_NumbPeopleCalcMeth ();

        void
        SimInternalLoad_NumbPeopleCalcMeth (const SimInternalLoad_NumbPeopleCalcMeth_type& x);

        void
        SimInternalLoad_NumbPeopleCalcMeth (const SimInternalLoad_NumbPeopleCalcMeth_optional& x);

        void
        SimInternalLoad_NumbPeopleCalcMeth (::std::auto_ptr< SimInternalLoad_NumbPeopleCalcMeth_type > p);

        // SimInternalLoad_NumbPeople
        //
        typedef ::xml_schema::double_ SimInternalLoad_NumbPeople_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_NumbPeople_type, true > SimInternalLoad_NumbPeople_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_NumbPeople_type, char, ::xsd::cxx::tree::schema_type::double_ > SimInternalLoad_NumbPeople_traits;

        const SimInternalLoad_NumbPeople_optional&
        SimInternalLoad_NumbPeople () const;

        SimInternalLoad_NumbPeople_optional&
        SimInternalLoad_NumbPeople ();

        void
        SimInternalLoad_NumbPeople (const SimInternalLoad_NumbPeople_type& x);

        void
        SimInternalLoad_NumbPeople (const SimInternalLoad_NumbPeople_optional& x);

        // SimInternalLoad_PeoplePerZoneFlrArea
        //
        typedef ::xml_schema::double_ SimInternalLoad_PeoplePerZoneFlrArea_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_PeoplePerZoneFlrArea_type, true > SimInternalLoad_PeoplePerZoneFlrArea_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_PeoplePerZoneFlrArea_type, char, ::xsd::cxx::tree::schema_type::double_ > SimInternalLoad_PeoplePerZoneFlrArea_traits;

        const SimInternalLoad_PeoplePerZoneFlrArea_optional&
        SimInternalLoad_PeoplePerZoneFlrArea () const;

        SimInternalLoad_PeoplePerZoneFlrArea_optional&
        SimInternalLoad_PeoplePerZoneFlrArea ();

        void
        SimInternalLoad_PeoplePerZoneFlrArea (const SimInternalLoad_PeoplePerZoneFlrArea_type& x);

        void
        SimInternalLoad_PeoplePerZoneFlrArea (const SimInternalLoad_PeoplePerZoneFlrArea_optional& x);

        // SimInternalLoad_ZoneFlrAreaPerPerson
        //
        typedef ::xml_schema::double_ SimInternalLoad_ZoneFlrAreaPerPerson_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ZoneFlrAreaPerPerson_type, true > SimInternalLoad_ZoneFlrAreaPerPerson_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ZoneFlrAreaPerPerson_type, char, ::xsd::cxx::tree::schema_type::double_ > SimInternalLoad_ZoneFlrAreaPerPerson_traits;

        const SimInternalLoad_ZoneFlrAreaPerPerson_optional&
        SimInternalLoad_ZoneFlrAreaPerPerson () const;

        SimInternalLoad_ZoneFlrAreaPerPerson_optional&
        SimInternalLoad_ZoneFlrAreaPerPerson ();

        void
        SimInternalLoad_ZoneFlrAreaPerPerson (const SimInternalLoad_ZoneFlrAreaPerPerson_type& x);

        void
        SimInternalLoad_ZoneFlrAreaPerPerson (const SimInternalLoad_ZoneFlrAreaPerPerson_optional& x);

        // SimInternalLoad_FracRadiant
        //
        typedef ::xml_schema::double_ SimInternalLoad_FracRadiant_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_FracRadiant_type, true > SimInternalLoad_FracRadiant_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_FracRadiant_type, char, ::xsd::cxx::tree::schema_type::double_ > SimInternalLoad_FracRadiant_traits;

        const SimInternalLoad_FracRadiant_optional&
        SimInternalLoad_FracRadiant () const;

        SimInternalLoad_FracRadiant_optional&
        SimInternalLoad_FracRadiant ();

        void
        SimInternalLoad_FracRadiant (const SimInternalLoad_FracRadiant_type& x);

        void
        SimInternalLoad_FracRadiant (const SimInternalLoad_FracRadiant_optional& x);

        // SimInternalLoad_SensibleHeatFrac
        //
        typedef ::xml_schema::double_ SimInternalLoad_SensibleHeatFrac_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_SensibleHeatFrac_type, true > SimInternalLoad_SensibleHeatFrac_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_SensibleHeatFrac_type, char, ::xsd::cxx::tree::schema_type::double_ > SimInternalLoad_SensibleHeatFrac_traits;

        const SimInternalLoad_SensibleHeatFrac_optional&
        SimInternalLoad_SensibleHeatFrac () const;

        SimInternalLoad_SensibleHeatFrac_optional&
        SimInternalLoad_SensibleHeatFrac ();

        void
        SimInternalLoad_SensibleHeatFrac (const SimInternalLoad_SensibleHeatFrac_type& x);

        void
        SimInternalLoad_SensibleHeatFrac (const SimInternalLoad_SensibleHeatFrac_optional& x);

        // SimInternalLoad_ActLvlSchedName
        //
        typedef ::xml_schema::idref SimInternalLoad_ActLvlSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ActLvlSchedName_type, false > SimInternalLoad_ActLvlSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ActLvlSchedName_type, char > SimInternalLoad_ActLvlSchedName_traits;

        const SimInternalLoad_ActLvlSchedName_optional&
        SimInternalLoad_ActLvlSchedName () const;

        SimInternalLoad_ActLvlSchedName_optional&
        SimInternalLoad_ActLvlSchedName ();

        void
        SimInternalLoad_ActLvlSchedName (const SimInternalLoad_ActLvlSchedName_type& x);

        void
        SimInternalLoad_ActLvlSchedName (const SimInternalLoad_ActLvlSchedName_optional& x);

        void
        SimInternalLoad_ActLvlSchedName (::std::auto_ptr< SimInternalLoad_ActLvlSchedName_type > p);

        // SimInternalLoad_CO2GenerationRate
        //
        typedef ::xml_schema::double_ SimInternalLoad_CO2GenerationRate_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_CO2GenerationRate_type, true > SimInternalLoad_CO2GenerationRate_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_CO2GenerationRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimInternalLoad_CO2GenerationRate_traits;

        const SimInternalLoad_CO2GenerationRate_optional&
        SimInternalLoad_CO2GenerationRate () const;

        SimInternalLoad_CO2GenerationRate_optional&
        SimInternalLoad_CO2GenerationRate ();

        void
        SimInternalLoad_CO2GenerationRate (const SimInternalLoad_CO2GenerationRate_type& x);

        void
        SimInternalLoad_CO2GenerationRate (const SimInternalLoad_CO2GenerationRate_optional& x);

        // SimInternalLoad_EnableASHRAE55ComfWarn
        //
        typedef ::xml_schema::string SimInternalLoad_EnableASHRAE55ComfWarn_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_EnableASHRAE55ComfWarn_type, false > SimInternalLoad_EnableASHRAE55ComfWarn_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_EnableASHRAE55ComfWarn_type, char > SimInternalLoad_EnableASHRAE55ComfWarn_traits;

        const SimInternalLoad_EnableASHRAE55ComfWarn_optional&
        SimInternalLoad_EnableASHRAE55ComfWarn () const;

        SimInternalLoad_EnableASHRAE55ComfWarn_optional&
        SimInternalLoad_EnableASHRAE55ComfWarn ();

        void
        SimInternalLoad_EnableASHRAE55ComfWarn (const SimInternalLoad_EnableASHRAE55ComfWarn_type& x);

        void
        SimInternalLoad_EnableASHRAE55ComfWarn (const SimInternalLoad_EnableASHRAE55ComfWarn_optional& x);

        void
        SimInternalLoad_EnableASHRAE55ComfWarn (::std::auto_ptr< SimInternalLoad_EnableASHRAE55ComfWarn_type > p);

        // SimInternalLoad_MeanRadiantTempCalcType
        //
        typedef ::xml_schema::string SimInternalLoad_MeanRadiantTempCalcType_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_MeanRadiantTempCalcType_type, false > SimInternalLoad_MeanRadiantTempCalcType_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_MeanRadiantTempCalcType_type, char > SimInternalLoad_MeanRadiantTempCalcType_traits;

        const SimInternalLoad_MeanRadiantTempCalcType_optional&
        SimInternalLoad_MeanRadiantTempCalcType () const;

        SimInternalLoad_MeanRadiantTempCalcType_optional&
        SimInternalLoad_MeanRadiantTempCalcType ();

        void
        SimInternalLoad_MeanRadiantTempCalcType (const SimInternalLoad_MeanRadiantTempCalcType_type& x);

        void
        SimInternalLoad_MeanRadiantTempCalcType (const SimInternalLoad_MeanRadiantTempCalcType_optional& x);

        void
        SimInternalLoad_MeanRadiantTempCalcType (::std::auto_ptr< SimInternalLoad_MeanRadiantTempCalcType_type > p);

        // SimInternalLoad_SurfName_AngFactListName
        //
        typedef ::xml_schema::idref SimInternalLoad_SurfName_AngFactListName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_SurfName_AngFactListName_type, false > SimInternalLoad_SurfName_AngFactListName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_SurfName_AngFactListName_type, char > SimInternalLoad_SurfName_AngFactListName_traits;

        const SimInternalLoad_SurfName_AngFactListName_optional&
        SimInternalLoad_SurfName_AngFactListName () const;

        SimInternalLoad_SurfName_AngFactListName_optional&
        SimInternalLoad_SurfName_AngFactListName ();

        void
        SimInternalLoad_SurfName_AngFactListName (const SimInternalLoad_SurfName_AngFactListName_type& x);

        void
        SimInternalLoad_SurfName_AngFactListName (const SimInternalLoad_SurfName_AngFactListName_optional& x);

        void
        SimInternalLoad_SurfName_AngFactListName (::std::auto_ptr< SimInternalLoad_SurfName_AngFactListName_type > p);

        // SimInternalLoad_WorkEffSchedName
        //
        typedef ::xml_schema::idref SimInternalLoad_WorkEffSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_WorkEffSchedName_type, false > SimInternalLoad_WorkEffSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_WorkEffSchedName_type, char > SimInternalLoad_WorkEffSchedName_traits;

        const SimInternalLoad_WorkEffSchedName_optional&
        SimInternalLoad_WorkEffSchedName () const;

        SimInternalLoad_WorkEffSchedName_optional&
        SimInternalLoad_WorkEffSchedName ();

        void
        SimInternalLoad_WorkEffSchedName (const SimInternalLoad_WorkEffSchedName_type& x);

        void
        SimInternalLoad_WorkEffSchedName (const SimInternalLoad_WorkEffSchedName_optional& x);

        void
        SimInternalLoad_WorkEffSchedName (::std::auto_ptr< SimInternalLoad_WorkEffSchedName_type > p);

        // SimInternalLoad_ClothingInsulationCalculationMethod
        //
        typedef ::xml_schema::string SimInternalLoad_ClothingInsulationCalculationMethod_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ClothingInsulationCalculationMethod_type, false > SimInternalLoad_ClothingInsulationCalculationMethod_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ClothingInsulationCalculationMethod_type, char > SimInternalLoad_ClothingInsulationCalculationMethod_traits;

        const SimInternalLoad_ClothingInsulationCalculationMethod_optional&
        SimInternalLoad_ClothingInsulationCalculationMethod () const;

        SimInternalLoad_ClothingInsulationCalculationMethod_optional&
        SimInternalLoad_ClothingInsulationCalculationMethod ();

        void
        SimInternalLoad_ClothingInsulationCalculationMethod (const SimInternalLoad_ClothingInsulationCalculationMethod_type& x);

        void
        SimInternalLoad_ClothingInsulationCalculationMethod (const SimInternalLoad_ClothingInsulationCalculationMethod_optional& x);

        void
        SimInternalLoad_ClothingInsulationCalculationMethod (::std::auto_ptr< SimInternalLoad_ClothingInsulationCalculationMethod_type > p);

        // SimInternalLoad_ClothingInsulationCalculationMethodSchedName
        //
        typedef ::xml_schema::idref SimInternalLoad_ClothingInsulationCalculationMethodSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ClothingInsulationCalculationMethodSchedName_type, false > SimInternalLoad_ClothingInsulationCalculationMethodSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ClothingInsulationCalculationMethodSchedName_type, char > SimInternalLoad_ClothingInsulationCalculationMethodSchedName_traits;

        const SimInternalLoad_ClothingInsulationCalculationMethodSchedName_optional&
        SimInternalLoad_ClothingInsulationCalculationMethodSchedName () const;

        SimInternalLoad_ClothingInsulationCalculationMethodSchedName_optional&
        SimInternalLoad_ClothingInsulationCalculationMethodSchedName ();

        void
        SimInternalLoad_ClothingInsulationCalculationMethodSchedName (const SimInternalLoad_ClothingInsulationCalculationMethodSchedName_type& x);

        void
        SimInternalLoad_ClothingInsulationCalculationMethodSchedName (const SimInternalLoad_ClothingInsulationCalculationMethodSchedName_optional& x);

        void
        SimInternalLoad_ClothingInsulationCalculationMethodSchedName (::std::auto_ptr< SimInternalLoad_ClothingInsulationCalculationMethodSchedName_type > p);

        // SimInternalLoad_ClothingInsulSchedName
        //
        typedef ::xml_schema::idref SimInternalLoad_ClothingInsulSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ClothingInsulSchedName_type, false > SimInternalLoad_ClothingInsulSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ClothingInsulSchedName_type, char > SimInternalLoad_ClothingInsulSchedName_traits;

        const SimInternalLoad_ClothingInsulSchedName_optional&
        SimInternalLoad_ClothingInsulSchedName () const;

        SimInternalLoad_ClothingInsulSchedName_optional&
        SimInternalLoad_ClothingInsulSchedName ();

        void
        SimInternalLoad_ClothingInsulSchedName (const SimInternalLoad_ClothingInsulSchedName_type& x);

        void
        SimInternalLoad_ClothingInsulSchedName (const SimInternalLoad_ClothingInsulSchedName_optional& x);

        void
        SimInternalLoad_ClothingInsulSchedName (::std::auto_ptr< SimInternalLoad_ClothingInsulSchedName_type > p);

        // SimInternalLoad_AirVelSchedName
        //
        typedef ::xml_schema::idref SimInternalLoad_AirVelSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_AirVelSchedName_type, false > SimInternalLoad_AirVelSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_AirVelSchedName_type, char > SimInternalLoad_AirVelSchedName_traits;

        const SimInternalLoad_AirVelSchedName_optional&
        SimInternalLoad_AirVelSchedName () const;

        SimInternalLoad_AirVelSchedName_optional&
        SimInternalLoad_AirVelSchedName ();

        void
        SimInternalLoad_AirVelSchedName (const SimInternalLoad_AirVelSchedName_type& x);

        void
        SimInternalLoad_AirVelSchedName (const SimInternalLoad_AirVelSchedName_optional& x);

        void
        SimInternalLoad_AirVelSchedName (::std::auto_ptr< SimInternalLoad_AirVelSchedName_type > p);

        // SimInternalLoad_ThermalComfortModel_1_5_Type
        //
        typedef ::schema::simxml::ResourcesGeneral::SimInternalLoad_ThermalComfortModel_1_5_Type SimInternalLoad_ThermalComfortModel_1_5_Type_type;
        typedef ::xsd::cxx::tree::optional< SimInternalLoad_ThermalComfortModel_1_5_Type_type > SimInternalLoad_ThermalComfortModel_1_5_Type_optional;
        typedef ::xsd::cxx::tree::traits< SimInternalLoad_ThermalComfortModel_1_5_Type_type, char > SimInternalLoad_ThermalComfortModel_1_5_Type_traits;

        const SimInternalLoad_ThermalComfortModel_1_5_Type_optional&
        SimInternalLoad_ThermalComfortModel_1_5_Type () const;

        SimInternalLoad_ThermalComfortModel_1_5_Type_optional&
        SimInternalLoad_ThermalComfortModel_1_5_Type ();

        void
        SimInternalLoad_ThermalComfortModel_1_5_Type (const SimInternalLoad_ThermalComfortModel_1_5_Type_type& x);

        void
        SimInternalLoad_ThermalComfortModel_1_5_Type (const SimInternalLoad_ThermalComfortModel_1_5_Type_optional& x);

        void
        SimInternalLoad_ThermalComfortModel_1_5_Type (::std::auto_ptr< SimInternalLoad_ThermalComfortModel_1_5_Type_type > p);

        // Constructors.
        //
        SimInternalLoad_People ();

        SimInternalLoad_People (const RefId_type&);

        SimInternalLoad_People (const ::xercesc::DOMElement& e,
                                ::xml_schema::flags f = 0,
                                ::xml_schema::container* c = 0);

        SimInternalLoad_People (const SimInternalLoad_People& x,
                                ::xml_schema::flags f = 0,
                                ::xml_schema::container* c = 0);

        virtual SimInternalLoad_People*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimInternalLoad_People&
        operator= (const SimInternalLoad_People& x);

        virtual 
        ~SimInternalLoad_People ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimInternalLoad_Name_optional SimInternalLoad_Name_;
        SimInternalLoad_ZoneOrZoneListName_optional SimInternalLoad_ZoneOrZoneListName_;
        SimInternalLoad_NumbPeopleSchedName_optional SimInternalLoad_NumbPeopleSchedName_;
        SimInternalLoad_NumbPeopleCalcMeth_optional SimInternalLoad_NumbPeopleCalcMeth_;
        SimInternalLoad_NumbPeople_optional SimInternalLoad_NumbPeople_;
        SimInternalLoad_PeoplePerZoneFlrArea_optional SimInternalLoad_PeoplePerZoneFlrArea_;
        SimInternalLoad_ZoneFlrAreaPerPerson_optional SimInternalLoad_ZoneFlrAreaPerPerson_;
        SimInternalLoad_FracRadiant_optional SimInternalLoad_FracRadiant_;
        SimInternalLoad_SensibleHeatFrac_optional SimInternalLoad_SensibleHeatFrac_;
        SimInternalLoad_ActLvlSchedName_optional SimInternalLoad_ActLvlSchedName_;
        SimInternalLoad_CO2GenerationRate_optional SimInternalLoad_CO2GenerationRate_;
        SimInternalLoad_EnableASHRAE55ComfWarn_optional SimInternalLoad_EnableASHRAE55ComfWarn_;
        SimInternalLoad_MeanRadiantTempCalcType_optional SimInternalLoad_MeanRadiantTempCalcType_;
        SimInternalLoad_SurfName_AngFactListName_optional SimInternalLoad_SurfName_AngFactListName_;
        SimInternalLoad_WorkEffSchedName_optional SimInternalLoad_WorkEffSchedName_;
        SimInternalLoad_ClothingInsulationCalculationMethod_optional SimInternalLoad_ClothingInsulationCalculationMethod_;
        SimInternalLoad_ClothingInsulationCalculationMethodSchedName_optional SimInternalLoad_ClothingInsulationCalculationMethodSchedName_;
        SimInternalLoad_ClothingInsulSchedName_optional SimInternalLoad_ClothingInsulSchedName_;
        SimInternalLoad_AirVelSchedName_optional SimInternalLoad_AirVelSchedName_;
        SimInternalLoad_ThermalComfortModel_1_5_Type_optional SimInternalLoad_ThermalComfortModel_1_5_Type_;
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

#endif // SIM_INTERNAL_LOAD_PEOPLE_HXX
