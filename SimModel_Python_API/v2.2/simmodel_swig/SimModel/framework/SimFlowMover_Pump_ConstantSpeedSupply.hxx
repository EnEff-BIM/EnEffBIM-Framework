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

#ifndef SIM_FLOW_MOVER_PUMP_CONSTANT_SPEED_SUPPLY_HXX
#define SIM_FLOW_MOVER_PUMP_CONSTANT_SPEED_SUPPLY_HXX

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
      class SimFlowMover_Pump_ConstantSpeedSupply;
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

#include "simflowmover_pump.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      class SimFlowMover_Pump_ConstantSpeedSupply: public ::schema::simxml::MepModel::SimFlowMover_Pump
      {
        public:
        // SimFlowMover_Name
        //
        typedef ::xml_schema::string SimFlowMover_Name_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_Name_type > SimFlowMover_Name_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_Name_type, char > SimFlowMover_Name_traits;

        const SimFlowMover_Name_optional&
        SimFlowMover_Name () const;

        SimFlowMover_Name_optional&
        SimFlowMover_Name ();

        void
        SimFlowMover_Name (const SimFlowMover_Name_type& x);

        void
        SimFlowMover_Name (const SimFlowMover_Name_optional& x);

        void
        SimFlowMover_Name (::std::auto_ptr< SimFlowMover_Name_type > p);

        // SimFlowMover_MotorEff
        //
        typedef ::xml_schema::double_ SimFlowMover_MotorEff_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_MotorEff_type > SimFlowMover_MotorEff_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_MotorEff_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_MotorEff_traits;

        const SimFlowMover_MotorEff_optional&
        SimFlowMover_MotorEff () const;

        SimFlowMover_MotorEff_optional&
        SimFlowMover_MotorEff ();

        void
        SimFlowMover_MotorEff (const SimFlowMover_MotorEff_type& x);

        void
        SimFlowMover_MotorEff (const SimFlowMover_MotorEff_optional& x);

        // SimFlowMover_InNodeName
        //
        typedef ::xml_schema::string SimFlowMover_InNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_InNodeName_type > SimFlowMover_InNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_InNodeName_type, char > SimFlowMover_InNodeName_traits;

        const SimFlowMover_InNodeName_optional&
        SimFlowMover_InNodeName () const;

        SimFlowMover_InNodeName_optional&
        SimFlowMover_InNodeName ();

        void
        SimFlowMover_InNodeName (const SimFlowMover_InNodeName_type& x);

        void
        SimFlowMover_InNodeName (const SimFlowMover_InNodeName_optional& x);

        void
        SimFlowMover_InNodeName (::std::auto_ptr< SimFlowMover_InNodeName_type > p);

        // SimFlowMover_OutNodeName
        //
        typedef ::xml_schema::string SimFlowMover_OutNodeName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_OutNodeName_type > SimFlowMover_OutNodeName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_OutNodeName_type, char > SimFlowMover_OutNodeName_traits;

        const SimFlowMover_OutNodeName_optional&
        SimFlowMover_OutNodeName () const;

        SimFlowMover_OutNodeName_optional&
        SimFlowMover_OutNodeName ();

        void
        SimFlowMover_OutNodeName (const SimFlowMover_OutNodeName_type& x);

        void
        SimFlowMover_OutNodeName (const SimFlowMover_OutNodeName_optional& x);

        void
        SimFlowMover_OutNodeName (::std::auto_ptr< SimFlowMover_OutNodeName_type > p);

        // SimFlowMover_RatedFlowRate
        //
        typedef ::xml_schema::double_ SimFlowMover_RatedFlowRate_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_RatedFlowRate_type > SimFlowMover_RatedFlowRate_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_RatedFlowRate_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_RatedFlowRate_traits;

        const SimFlowMover_RatedFlowRate_optional&
        SimFlowMover_RatedFlowRate () const;

        SimFlowMover_RatedFlowRate_optional&
        SimFlowMover_RatedFlowRate ();

        void
        SimFlowMover_RatedFlowRate (const SimFlowMover_RatedFlowRate_type& x);

        void
        SimFlowMover_RatedFlowRate (const SimFlowMover_RatedFlowRate_optional& x);

        // SimFlowMover_RatedPumpHead
        //
        typedef ::xml_schema::double_ SimFlowMover_RatedPumpHead_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_RatedPumpHead_type > SimFlowMover_RatedPumpHead_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_RatedPumpHead_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_RatedPumpHead_traits;

        const SimFlowMover_RatedPumpHead_optional&
        SimFlowMover_RatedPumpHead () const;

        SimFlowMover_RatedPumpHead_optional&
        SimFlowMover_RatedPumpHead ();

        void
        SimFlowMover_RatedPumpHead (const SimFlowMover_RatedPumpHead_type& x);

        void
        SimFlowMover_RatedPumpHead (const SimFlowMover_RatedPumpHead_optional& x);

        // SimFlowMover_RatedPowerConsump
        //
        typedef ::xml_schema::double_ SimFlowMover_RatedPowerConsump_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_RatedPowerConsump_type > SimFlowMover_RatedPowerConsump_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_RatedPowerConsump_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_RatedPowerConsump_traits;

        const SimFlowMover_RatedPowerConsump_optional&
        SimFlowMover_RatedPowerConsump () const;

        SimFlowMover_RatedPowerConsump_optional&
        SimFlowMover_RatedPowerConsump ();

        void
        SimFlowMover_RatedPowerConsump (const SimFlowMover_RatedPowerConsump_type& x);

        void
        SimFlowMover_RatedPowerConsump (const SimFlowMover_RatedPowerConsump_optional& x);

        // SimFlowMover_FracMotorInEffToFluidStream
        //
        typedef ::xml_schema::double_ SimFlowMover_FracMotorInEffToFluidStream_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_FracMotorInEffToFluidStream_type > SimFlowMover_FracMotorInEffToFluidStream_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_FracMotorInEffToFluidStream_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_FracMotorInEffToFluidStream_traits;

        const SimFlowMover_FracMotorInEffToFluidStream_optional&
        SimFlowMover_FracMotorInEffToFluidStream () const;

        SimFlowMover_FracMotorInEffToFluidStream_optional&
        SimFlowMover_FracMotorInEffToFluidStream ();

        void
        SimFlowMover_FracMotorInEffToFluidStream (const SimFlowMover_FracMotorInEffToFluidStream_type& x);

        void
        SimFlowMover_FracMotorInEffToFluidStream (const SimFlowMover_FracMotorInEffToFluidStream_optional& x);

        // SimFlowMover_PumpContType
        //
        typedef ::xml_schema::string SimFlowMover_PumpContType_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_PumpContType_type > SimFlowMover_PumpContType_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_PumpContType_type, char > SimFlowMover_PumpContType_traits;

        const SimFlowMover_PumpContType_optional&
        SimFlowMover_PumpContType () const;

        SimFlowMover_PumpContType_optional&
        SimFlowMover_PumpContType ();

        void
        SimFlowMover_PumpContType (const SimFlowMover_PumpContType_type& x);

        void
        SimFlowMover_PumpContType (const SimFlowMover_PumpContType_optional& x);

        void
        SimFlowMover_PumpContType (::std::auto_ptr< SimFlowMover_PumpContType_type > p);

        // SimFlowMover_PumpFlowRateSchedName
        //
        typedef ::xml_schema::idref SimFlowMover_PumpFlowRateSchedName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_PumpFlowRateSchedName_type > SimFlowMover_PumpFlowRateSchedName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_PumpFlowRateSchedName_type, char > SimFlowMover_PumpFlowRateSchedName_traits;

        const SimFlowMover_PumpFlowRateSchedName_optional&
        SimFlowMover_PumpFlowRateSchedName () const;

        SimFlowMover_PumpFlowRateSchedName_optional&
        SimFlowMover_PumpFlowRateSchedName ();

        void
        SimFlowMover_PumpFlowRateSchedName (const SimFlowMover_PumpFlowRateSchedName_type& x);

        void
        SimFlowMover_PumpFlowRateSchedName (const SimFlowMover_PumpFlowRateSchedName_optional& x);

        void
        SimFlowMover_PumpFlowRateSchedName (::std::auto_ptr< SimFlowMover_PumpFlowRateSchedName_type > p);

        // SimFlowMover_PumpCurveName
        //
        typedef ::xml_schema::idref SimFlowMover_PumpCurveName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_PumpCurveName_type > SimFlowMover_PumpCurveName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_PumpCurveName_type, char > SimFlowMover_PumpCurveName_traits;

        const SimFlowMover_PumpCurveName_optional&
        SimFlowMover_PumpCurveName () const;

        SimFlowMover_PumpCurveName_optional&
        SimFlowMover_PumpCurveName ();

        void
        SimFlowMover_PumpCurveName (const SimFlowMover_PumpCurveName_type& x);

        void
        SimFlowMover_PumpCurveName (const SimFlowMover_PumpCurveName_optional& x);

        void
        SimFlowMover_PumpCurveName (::std::auto_ptr< SimFlowMover_PumpCurveName_type > p);

        // SimFlowMover_ImpelDiam
        //
        typedef ::xml_schema::double_ SimFlowMover_ImpelDiam_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_ImpelDiam_type > SimFlowMover_ImpelDiam_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_ImpelDiam_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_ImpelDiam_traits;

        const SimFlowMover_ImpelDiam_optional&
        SimFlowMover_ImpelDiam () const;

        SimFlowMover_ImpelDiam_optional&
        SimFlowMover_ImpelDiam ();

        void
        SimFlowMover_ImpelDiam (const SimFlowMover_ImpelDiam_type& x);

        void
        SimFlowMover_ImpelDiam (const SimFlowMover_ImpelDiam_optional& x);

        // SimFlowMover_ZoneName
        //
        typedef ::xml_schema::idref SimFlowMover_ZoneName_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_ZoneName_type > SimFlowMover_ZoneName_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_ZoneName_type, char > SimFlowMover_ZoneName_traits;

        const SimFlowMover_ZoneName_optional&
        SimFlowMover_ZoneName () const;

        SimFlowMover_ZoneName_optional&
        SimFlowMover_ZoneName ();

        void
        SimFlowMover_ZoneName (const SimFlowMover_ZoneName_type& x);

        void
        SimFlowMover_ZoneName (const SimFlowMover_ZoneName_optional& x);

        void
        SimFlowMover_ZoneName (::std::auto_ptr< SimFlowMover_ZoneName_type > p);

        // SimFlowMover_SkinLossRadiativeFract
        //
        typedef ::xml_schema::double_ SimFlowMover_SkinLossRadiativeFract_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_SkinLossRadiativeFract_type > SimFlowMover_SkinLossRadiativeFract_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_SkinLossRadiativeFract_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_SkinLossRadiativeFract_traits;

        const SimFlowMover_SkinLossRadiativeFract_optional&
        SimFlowMover_SkinLossRadiativeFract () const;

        SimFlowMover_SkinLossRadiativeFract_optional&
        SimFlowMover_SkinLossRadiativeFract ();

        void
        SimFlowMover_SkinLossRadiativeFract (const SimFlowMover_SkinLossRadiativeFract_type& x);

        void
        SimFlowMover_SkinLossRadiativeFract (const SimFlowMover_SkinLossRadiativeFract_optional& x);

        // SimFlowMover_RotationalSpd
        //
        typedef ::xml_schema::double_ SimFlowMover_RotationalSpd_type;
        typedef ::xsd::cxx::tree::optional< SimFlowMover_RotationalSpd_type > SimFlowMover_RotationalSpd_optional;
        typedef ::xsd::cxx::tree::traits< SimFlowMover_RotationalSpd_type, char, ::xsd::cxx::tree::schema_type::double_ > SimFlowMover_RotationalSpd_traits;

        const SimFlowMover_RotationalSpd_optional&
        SimFlowMover_RotationalSpd () const;

        SimFlowMover_RotationalSpd_optional&
        SimFlowMover_RotationalSpd ();

        void
        SimFlowMover_RotationalSpd (const SimFlowMover_RotationalSpd_type& x);

        void
        SimFlowMover_RotationalSpd (const SimFlowMover_RotationalSpd_optional& x);

        // Constructors.
        //
        SimFlowMover_Pump_ConstantSpeedSupply ();

        SimFlowMover_Pump_ConstantSpeedSupply (const RefId_type&);

        SimFlowMover_Pump_ConstantSpeedSupply (const ::xercesc::DOMElement& e,
                                               ::xml_schema::flags f = 0,
                                               ::xml_schema::container* c = 0);

        SimFlowMover_Pump_ConstantSpeedSupply (const SimFlowMover_Pump_ConstantSpeedSupply& x,
                                               ::xml_schema::flags f = 0,
                                               ::xml_schema::container* c = 0);

        virtual SimFlowMover_Pump_ConstantSpeedSupply*
        _clone (::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0) const;

        SimFlowMover_Pump_ConstantSpeedSupply&
        operator= (const SimFlowMover_Pump_ConstantSpeedSupply& x);

        virtual 
        ~SimFlowMover_Pump_ConstantSpeedSupply ();

        // Implementation.
        //
        protected:
        void
        parse (::xsd::cxx::xml::dom::parser< char >&,
               ::xml_schema::flags);

        protected:
        SimFlowMover_Name_optional SimFlowMover_Name_;
        SimFlowMover_MotorEff_optional SimFlowMover_MotorEff_;
        SimFlowMover_InNodeName_optional SimFlowMover_InNodeName_;
        SimFlowMover_OutNodeName_optional SimFlowMover_OutNodeName_;
        SimFlowMover_RatedFlowRate_optional SimFlowMover_RatedFlowRate_;
        SimFlowMover_RatedPumpHead_optional SimFlowMover_RatedPumpHead_;
        SimFlowMover_RatedPowerConsump_optional SimFlowMover_RatedPowerConsump_;
        SimFlowMover_FracMotorInEffToFluidStream_optional SimFlowMover_FracMotorInEffToFluidStream_;
        SimFlowMover_PumpContType_optional SimFlowMover_PumpContType_;
        SimFlowMover_PumpFlowRateSchedName_optional SimFlowMover_PumpFlowRateSchedName_;
        SimFlowMover_PumpCurveName_optional SimFlowMover_PumpCurveName_;
        SimFlowMover_ImpelDiam_optional SimFlowMover_ImpelDiam_;
        SimFlowMover_ZoneName_optional SimFlowMover_ZoneName_;
        SimFlowMover_SkinLossRadiativeFract_optional SimFlowMover_SkinLossRadiativeFract_;
        SimFlowMover_RotationalSpd_optional SimFlowMover_RotationalSpd_;
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

#endif // SIM_FLOW_MOVER_PUMP_CONSTANT_SPEED_SUPPLY_HXX
