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

#ifndef SIM_VIRTUAL_ELEMENT_SLAB_OPENING_FILLER_HXX
#define SIM_VIRTUAL_ELEMENT_SLAB_OPENING_FILLER_HXX

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
      class SimVirtualElement_Slab_OpeningFiller;
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

#include "simvirtualelement_slab.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      class SimVirtualElement_Slab_OpeningFiller: public ::schema::simxml::BuildingModel::SimVirtualElement_Slab
      {
        public:
        // SimVirtualElem_Name
        //
        typedef ::xml_schema::string SimVirtualElem_Name_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_Name_type > SimVirtualElem_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_Name_type, char > SimVirtualElem_Name_traits;

        const SimVirtualElem_Name_optional&
        SimVirtualElem_Name () const;

        SimVirtualElem_Name_optional&
        SimVirtualElem_Name ();

        void
        SimVirtualElem_Name (const SimVirtualElem_Name_type& x);

        void
        SimVirtualElem_Name (const SimVirtualElem_Name_optional& x);

        void
        SimVirtualElem_Name (::std::auto_ptr< SimVirtualElem_Name_type > p);

        // SimVirtualElem_ConstructionName
        //
        typedef ::xml_schema::idref SimVirtualElem_ConstructionName_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_ConstructionName_type > SimVirtualElem_ConstructionName_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_ConstructionName_type, char > SimVirtualElem_ConstructionName_traits;

        const SimVirtualElem_ConstructionName_optional&
        SimVirtualElem_ConstructionName () const;

        SimVirtualElem_ConstructionName_optional&
        SimVirtualElem_ConstructionName ();

        void
        SimVirtualElem_ConstructionName (const SimVirtualElem_ConstructionName_type& x);

        void
        SimVirtualElem_ConstructionName (const SimVirtualElem_ConstructionName_optional& x);

        void
        SimVirtualElem_ConstructionName (::std::auto_ptr< SimVirtualElem_ConstructionName_type > p);

        // SimVirtualElem_BldgSurfName
        //
        typedef ::xml_schema::idref SimVirtualElem_BldgSurfName_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_BldgSurfName_type > SimVirtualElem_BldgSurfName_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_BldgSurfName_type, char > SimVirtualElem_BldgSurfName_traits;

        const SimVirtualElem_BldgSurfName_optional&
        SimVirtualElem_BldgSurfName () const;

        SimVirtualElem_BldgSurfName_optional&
        SimVirtualElem_BldgSurfName ();

        void
        SimVirtualElem_BldgSurfName (const SimVirtualElem_BldgSurfName_type& x);

        void
        SimVirtualElem_BldgSurfName (const SimVirtualElem_BldgSurfName_optional& x);

        void
        SimVirtualElem_BldgSurfName (::std::auto_ptr< SimVirtualElem_BldgSurfName_type > p);

        // SimVirtualElem_OutsdBndCondObject
        //
        typedef ::xml_schema::idref SimVirtualElem_OutsdBndCondObject_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_OutsdBndCondObject_type > SimVirtualElem_OutsdBndCondObject_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_OutsdBndCondObject_type, char > SimVirtualElem_OutsdBndCondObject_traits;

        const SimVirtualElem_OutsdBndCondObject_optional&
        SimVirtualElem_OutsdBndCondObject () const;

        SimVirtualElem_OutsdBndCondObject_optional&
        SimVirtualElem_OutsdBndCondObject ();

        void
        SimVirtualElem_OutsdBndCondObject (const SimVirtualElem_OutsdBndCondObject_type& x);

        void
        SimVirtualElem_OutsdBndCondObject (const SimVirtualElem_OutsdBndCondObject_optional& x);

        void
        SimVirtualElem_OutsdBndCondObject (::std::auto_ptr< SimVirtualElem_OutsdBndCondObject_type > p);

        // SimVirtualElem_Mult
        //
        typedef ::xml_schema::double_ SimVirtualElem_Mult_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_Mult_type > SimVirtualElem_Mult_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_Mult_type, char, ::xsd::cxx::tree::schema_type::double_ > SimVirtualElem_Mult_traits;

        const SimVirtualElem_Mult_optional&
        SimVirtualElem_Mult () const;

        SimVirtualElem_Mult_optional&
        SimVirtualElem_Mult ();

        void
        SimVirtualElem_Mult (const SimVirtualElem_Mult_type& x);

        void
        SimVirtualElem_Mult (const SimVirtualElem_Mult_optional& x);

        // SimVirtualElem_StartXCoord
        //
        typedef ::xml_schema::double_ SimVirtualElem_StartXCoord_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_StartXCoord_type > SimVirtualElem_StartXCoord_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_StartXCoord_type, char, ::xsd::cxx::tree::schema_type::double_ > SimVirtualElem_StartXCoord_traits;

        const SimVirtualElem_StartXCoord_optional&
        SimVirtualElem_StartXCoord () const;

        SimVirtualElem_StartXCoord_optional&
        SimVirtualElem_StartXCoord ();

        void
        SimVirtualElem_StartXCoord (const SimVirtualElem_StartXCoord_type& x);

        void
        SimVirtualElem_StartXCoord (const SimVirtualElem_StartXCoord_optional& x);

        // SimVirtualElem_StartZCoord
        //
        typedef ::xml_schema::double_ SimVirtualElem_StartZCoord_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_StartZCoord_type > SimVirtualElem_StartZCoord_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_StartZCoord_type, char, ::xsd::cxx::tree::schema_type::double_ > SimVirtualElem_StartZCoord_traits;

        const SimVirtualElem_StartZCoord_optional&
        SimVirtualElem_StartZCoord () const;

        SimVirtualElem_StartZCoord_optional&
        SimVirtualElem_StartZCoord ();

        void
        SimVirtualElem_StartZCoord (const SimVirtualElem_StartZCoord_type& x);

        void
        SimVirtualElem_StartZCoord (const SimVirtualElem_StartZCoord_optional& x);

        // SimVirtualElem_Length
        //
        typedef ::xml_schema::double_ SimVirtualElem_Length_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_Length_type > SimVirtualElem_Length_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_Length_type, char, ::xsd::cxx::tree::schema_type::double_ > SimVirtualElem_Length_traits;

        const SimVirtualElem_Length_optional&
        SimVirtualElem_Length () const;

        SimVirtualElem_Length_optional&
        SimVirtualElem_Length ();

        void
        SimVirtualElem_Length (const SimVirtualElem_Length_type& x);

        void
        SimVirtualElem_Length (const SimVirtualElem_Length_optional& x);

        // SimVirtualElem_Ht
        //
        typedef ::xml_schema::double_ SimVirtualElem_Ht_type;
        typedef ::xsd::cxx::tree::optional< SimVirtualElem_Ht_type > SimVirtualElem_Ht_optional;
        typedef ::xsd::cxx::tree::traits< SimVirtualElem_Ht_type, char, ::xsd::cxx::tree::schema_type::double_ > SimVirtualElem_Ht_traits;

        const SimVirtualElem_Ht_optional&
        SimVirtualElem_Ht () const;

        SimVirtualElem_Ht_optional&
        SimVirtualElem_Ht ();

        void
        SimVirtualElem_Ht (const SimVirtualElem_Ht_type& x);

        void
        SimVirtualElem_Ht (const SimVirtualElem_Ht_optional& x);

        // Airflow_MZone_Comp_HorzOpng_Name
        //
        typedef ::xml_schema::string Airflow_MZone_Comp_HorzOpng_Name_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_Comp_HorzOpng_Name_type > Airflow_MZone_Comp_HorzOpng_Name_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_Comp_HorzOpng_Name_type, char > Airflow_MZone_Comp_HorzOpng_Name_traits;

        const Airflow_MZone_Comp_HorzOpng_Name_optional&
        Airflow_MZone_Comp_HorzOpng_Name () const;

        Airflow_MZone_Comp_HorzOpng_Name_optional&
        Airflow_MZone_Comp_HorzOpng_Name ();

        void
        Airflow_MZone_Comp_HorzOpng_Name (const Airflow_MZone_Comp_HorzOpng_Name_type& x);

        void
        Airflow_MZone_Comp_HorzOpng_Name (const Airflow_MZone_Comp_HorzOpng_Name_optional& x);

        void
        Airflow_MZone_Comp_HorzOpng_Name (::std::auto_ptr< Airflow_MZone_Comp_HorzOpng_Name_type > p);

        // Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed
        //
        typedef ::xml_schema::double_ Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_type > Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_traits;

        const Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_optional&
        Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed () const;

        Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_optional&
        Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed ();

        void
        Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed (const Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_type& x);

        void
        Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed (const Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_optional& x);

        // Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed
        //
        typedef ::xml_schema::double_ Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_type > Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_traits;

        const Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_optional&
        Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed () const;

        Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_optional&
        Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed ();

        void
        Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed (const Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_type& x);

        void
        Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed (const Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_optional& x);

        // Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle
        //
        typedef ::xml_schema::double_ Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_type > Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_traits;

        const Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_optional&
        Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle () const;

        Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_optional&
        Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle ();

        void
        Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle (const Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_type& x);

        void
        Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle (const Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_optional& x);

        // Airflow_MZone_Comp_HorzOpng_DischargeCoef
        //
        typedef ::xml_schema::double_ Airflow_MZone_Comp_HorzOpng_DischargeCoef_type;
        typedef ::xsd::cxx::tree::optional< Airflow_MZone_Comp_HorzOpng_DischargeCoef_type > Airflow_MZone_Comp_HorzOpng_DischargeCoef_optional;
        typedef ::xsd::cxx::tree::traits< Airflow_MZone_Comp_HorzOpng_DischargeCoef_type, char, ::xsd::cxx::tree::schema_type::double_ > Airflow_MZone_Comp_HorzOpng_DischargeCoef_traits;

        const Airflow_MZone_Comp_HorzOpng_DischargeCoef_optional&
        Airflow_MZone_Comp_HorzOpng_DischargeCoef () const;

        Airflow_MZone_Comp_HorzOpng_DischargeCoef_optional&
        Airflow_MZone_Comp_HorzOpng_DischargeCoef ();

        void
        Airflow_MZone_Comp_HorzOpng_DischargeCoef (const Airflow_MZone_Comp_HorzOpng_DischargeCoef_type& x);

        void
        Airflow_MZone_Comp_HorzOpng_DischargeCoef (const Airflow_MZone_Comp_HorzOpng_DischargeCoef_optional& x);

        // Constructors.
        //
        SimVirtualElement_Slab_OpeningFiller ();

        SimVirtualElement_Slab_OpeningFiller (const RefId_type&);

        SimVirtualElement_Slab_OpeningFiller (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        SimVirtualElement_Slab_OpeningFiller (const SimVirtualElement_Slab_OpeningFiller& x,
                                              ::xml_schema::flags f = 0,
                                              ::xml_schema::container* c = 0);

        virtual SimVirtualElement_Slab_OpeningFiller*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimVirtualElement_Slab_OpeningFiller&
        operator= (const SimVirtualElement_Slab_OpeningFiller& x);

        virtual 
        ~SimVirtualElement_Slab_OpeningFiller ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimVirtualElem_Name_optional SimVirtualElem_Name_;
        SimVirtualElem_ConstructionName_optional SimVirtualElem_ConstructionName_;
        SimVirtualElem_BldgSurfName_optional SimVirtualElem_BldgSurfName_;
        SimVirtualElem_OutsdBndCondObject_optional SimVirtualElem_OutsdBndCondObject_;
        SimVirtualElem_Mult_optional SimVirtualElem_Mult_;
        SimVirtualElem_StartXCoord_optional SimVirtualElem_StartXCoord_;
        SimVirtualElem_StartZCoord_optional SimVirtualElem_StartZCoord_;
        SimVirtualElem_Length_optional SimVirtualElem_Length_;
        SimVirtualElem_Ht_optional SimVirtualElem_Ht_;
        Airflow_MZone_Comp_HorzOpng_Name_optional Airflow_MZone_Comp_HorzOpng_Name_;
        Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_optional Airflow_MZone_Comp_HorzOpng_AirMassFlowCoefWhenOpngClosed_;
        Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_optional Airflow_MZone_Comp_HorzOpng_AirMassFlowExpWhenOpngClosed_;
        Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_optional Airflow_MZone_Comp_HorzOpng_SlopingPlaneAngle_;
        Airflow_MZone_Comp_HorzOpng_DischargeCoef_optional Airflow_MZone_Comp_HorzOpng_DischargeCoef_;
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

#endif // SIM_VIRTUAL_ELEMENT_SLAB_OPENING_FILLER_HXX