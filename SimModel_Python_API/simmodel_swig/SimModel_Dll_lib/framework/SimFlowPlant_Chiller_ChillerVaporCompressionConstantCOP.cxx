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

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP
      // 

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_Name_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Name () const
      {
        return this->SimFlowPlant_Name_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_Name_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Name ()
      {
        return this->SimFlowPlant_Name_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Name (const SimFlowPlant_Name_type& x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Name (const SimFlowPlant_Name_optional& x)
      {
        this->SimFlowPlant_Name_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_NomCap_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCap () const
      {
        return this->SimFlowPlant_NomCap_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_NomCap_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCap ()
      {
        return this->SimFlowPlant_NomCap_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCap (const SimFlowPlant_NomCap_type& x)
      {
        this->SimFlowPlant_NomCap_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCap (const SimFlowPlant_NomCap_optional& x)
      {
        this->SimFlowPlant_NomCap_ = x;
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_SizingFactor_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_SizingFactor () const
      {
        return this->SimFlowPlant_SizingFactor_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_SizingFactor_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_SizingFactor ()
      {
        return this->SimFlowPlant_SizingFactor_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_SizingFactor (const SimFlowPlant_SizingFactor_type& x)
      {
        this->SimFlowPlant_SizingFactor_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_SizingFactor (const SimFlowPlant_SizingFactor_optional& x)
      {
        this->SimFlowPlant_SizingFactor_ = x;
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_ChilledWaterInletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterInletNodeName () const
      {
        return this->SimFlowPlant_ChilledWaterInletNodeName_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_ChilledWaterInletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterInletNodeName ()
      {
        return this->SimFlowPlant_ChilledWaterInletNodeName_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterInletNodeName (const SimFlowPlant_ChilledWaterInletNodeName_type& x)
      {
        this->SimFlowPlant_ChilledWaterInletNodeName_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterInletNodeName (const SimFlowPlant_ChilledWaterInletNodeName_optional& x)
      {
        this->SimFlowPlant_ChilledWaterInletNodeName_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterInletNodeName (::std::auto_ptr< SimFlowPlant_ChilledWaterInletNodeName_type > x)
      {
        this->SimFlowPlant_ChilledWaterInletNodeName_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_ChilledWaterOutletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterOutletNodeName () const
      {
        return this->SimFlowPlant_ChilledWaterOutletNodeName_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_ChilledWaterOutletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterOutletNodeName ()
      {
        return this->SimFlowPlant_ChilledWaterOutletNodeName_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterOutletNodeName (const SimFlowPlant_ChilledWaterOutletNodeName_type& x)
      {
        this->SimFlowPlant_ChilledWaterOutletNodeName_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterOutletNodeName (const SimFlowPlant_ChilledWaterOutletNodeName_optional& x)
      {
        this->SimFlowPlant_ChilledWaterOutletNodeName_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChilledWaterOutletNodeName (::std::auto_ptr< SimFlowPlant_ChilledWaterOutletNodeName_type > x)
      {
        this->SimFlowPlant_ChilledWaterOutletNodeName_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_CondInletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondInletNodeName () const
      {
        return this->SimFlowPlant_CondInletNodeName_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_CondInletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondInletNodeName ()
      {
        return this->SimFlowPlant_CondInletNodeName_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondInletNodeName (const SimFlowPlant_CondInletNodeName_type& x)
      {
        this->SimFlowPlant_CondInletNodeName_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondInletNodeName (const SimFlowPlant_CondInletNodeName_optional& x)
      {
        this->SimFlowPlant_CondInletNodeName_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondInletNodeName (::std::auto_ptr< SimFlowPlant_CondInletNodeName_type > x)
      {
        this->SimFlowPlant_CondInletNodeName_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_CondOutletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondOutletNodeName () const
      {
        return this->SimFlowPlant_CondOutletNodeName_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_CondOutletNodeName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondOutletNodeName ()
      {
        return this->SimFlowPlant_CondOutletNodeName_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondOutletNodeName (const SimFlowPlant_CondOutletNodeName_type& x)
      {
        this->SimFlowPlant_CondOutletNodeName_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondOutletNodeName (const SimFlowPlant_CondOutletNodeName_optional& x)
      {
        this->SimFlowPlant_CondOutletNodeName_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondOutletNodeName (::std::auto_ptr< SimFlowPlant_CondOutletNodeName_type > x)
      {
        this->SimFlowPlant_CondOutletNodeName_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_CondType_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondType () const
      {
        return this->SimFlowPlant_CondType_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_CondType_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondType ()
      {
        return this->SimFlowPlant_CondType_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondType (const SimFlowPlant_CondType_type& x)
      {
        this->SimFlowPlant_CondType_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondType (const SimFlowPlant_CondType_optional& x)
      {
        this->SimFlowPlant_CondType_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_CondType (::std::auto_ptr< SimFlowPlant_CondType_type > x)
      {
        this->SimFlowPlant_CondType_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_ChillerFlowMode_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChillerFlowMode () const
      {
        return this->SimFlowPlant_ChillerFlowMode_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_ChillerFlowMode_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChillerFlowMode ()
      {
        return this->SimFlowPlant_ChillerFlowMode_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChillerFlowMode (const SimFlowPlant_ChillerFlowMode_type& x)
      {
        this->SimFlowPlant_ChillerFlowMode_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChillerFlowMode (const SimFlowPlant_ChillerFlowMode_optional& x)
      {
        this->SimFlowPlant_ChillerFlowMode_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_ChillerFlowMode (::std::auto_ptr< SimFlowPlant_ChillerFlowMode_type > x)
      {
        this->SimFlowPlant_ChillerFlowMode_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_BasinHeatCap_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatCap () const
      {
        return this->SimFlowPlant_BasinHeatCap_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_BasinHeatCap_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatCap ()
      {
        return this->SimFlowPlant_BasinHeatCap_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatCap (const SimFlowPlant_BasinHeatCap_type& x)
      {
        this->SimFlowPlant_BasinHeatCap_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatCap (const SimFlowPlant_BasinHeatCap_optional& x)
      {
        this->SimFlowPlant_BasinHeatCap_ = x;
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_BasinHeatSetpointTemp_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatSetpointTemp () const
      {
        return this->SimFlowPlant_BasinHeatSetpointTemp_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_BasinHeatSetpointTemp_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatSetpointTemp ()
      {
        return this->SimFlowPlant_BasinHeatSetpointTemp_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatSetpointTemp (const SimFlowPlant_BasinHeatSetpointTemp_type& x)
      {
        this->SimFlowPlant_BasinHeatSetpointTemp_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatSetpointTemp (const SimFlowPlant_BasinHeatSetpointTemp_optional& x)
      {
        this->SimFlowPlant_BasinHeatSetpointTemp_ = x;
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_BasinHeatOperatSchedName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatOperatSchedName () const
      {
        return this->SimFlowPlant_BasinHeatOperatSchedName_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_BasinHeatOperatSchedName_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatOperatSchedName ()
      {
        return this->SimFlowPlant_BasinHeatOperatSchedName_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatOperatSchedName (const SimFlowPlant_BasinHeatOperatSchedName_type& x)
      {
        this->SimFlowPlant_BasinHeatOperatSchedName_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatOperatSchedName (const SimFlowPlant_BasinHeatOperatSchedName_optional& x)
      {
        this->SimFlowPlant_BasinHeatOperatSchedName_ = x;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_BasinHeatOperatSchedName (::std::auto_ptr< SimFlowPlant_BasinHeatOperatSchedName_type > x)
      {
        this->SimFlowPlant_BasinHeatOperatSchedName_.set (x);
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_NomCOP_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCOP () const
      {
        return this->SimFlowPlant_NomCOP_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_NomCOP_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCOP ()
      {
        return this->SimFlowPlant_NomCOP_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCOP (const SimFlowPlant_NomCOP_type& x)
      {
        this->SimFlowPlant_NomCOP_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_NomCOP (const SimFlowPlant_NomCOP_optional& x)
      {
        this->SimFlowPlant_NomCOP_ = x;
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_DesignChilledWaterFlowRate_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignChilledWaterFlowRate () const
      {
        return this->SimFlowPlant_DesignChilledWaterFlowRate_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_DesignChilledWaterFlowRate_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignChilledWaterFlowRate ()
      {
        return this->SimFlowPlant_DesignChilledWaterFlowRate_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignChilledWaterFlowRate (const SimFlowPlant_DesignChilledWaterFlowRate_type& x)
      {
        this->SimFlowPlant_DesignChilledWaterFlowRate_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignChilledWaterFlowRate (const SimFlowPlant_DesignChilledWaterFlowRate_optional& x)
      {
        this->SimFlowPlant_DesignChilledWaterFlowRate_ = x;
      }

      const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_DesignCondWaterFlowRate_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignCondWaterFlowRate () const
      {
        return this->SimFlowPlant_DesignCondWaterFlowRate_;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::SimFlowPlant_DesignCondWaterFlowRate_optional& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignCondWaterFlowRate ()
      {
        return this->SimFlowPlant_DesignCondWaterFlowRate_;
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignCondWaterFlowRate (const SimFlowPlant_DesignCondWaterFlowRate_type& x)
      {
        this->SimFlowPlant_DesignCondWaterFlowRate_.set (x);
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_DesignCondWaterFlowRate (const SimFlowPlant_DesignCondWaterFlowRate_optional& x)
      {
        this->SimFlowPlant_DesignCondWaterFlowRate_ = x;
      }
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP
      //

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP ()
      : ::schema::simxml::MepModel::SimFlowPlant_Chiller (),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_NomCap_ (this),
        SimFlowPlant_SizingFactor_ (this),
        SimFlowPlant_ChilledWaterInletNodeName_ (this),
        SimFlowPlant_ChilledWaterOutletNodeName_ (this),
        SimFlowPlant_CondInletNodeName_ (this),
        SimFlowPlant_CondOutletNodeName_ (this),
        SimFlowPlant_CondType_ (this),
        SimFlowPlant_ChillerFlowMode_ (this),
        SimFlowPlant_BasinHeatCap_ (this),
        SimFlowPlant_BasinHeatSetpointTemp_ (this),
        SimFlowPlant_BasinHeatOperatSchedName_ (this),
        SimFlowPlant_NomCOP_ (this),
        SimFlowPlant_DesignChilledWaterFlowRate_ (this),
        SimFlowPlant_DesignCondWaterFlowRate_ (this)
      {
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowPlant_Chiller (RefId),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_NomCap_ (this),
        SimFlowPlant_SizingFactor_ (this),
        SimFlowPlant_ChilledWaterInletNodeName_ (this),
        SimFlowPlant_ChilledWaterOutletNodeName_ (this),
        SimFlowPlant_CondInletNodeName_ (this),
        SimFlowPlant_CondOutletNodeName_ (this),
        SimFlowPlant_CondType_ (this),
        SimFlowPlant_ChillerFlowMode_ (this),
        SimFlowPlant_BasinHeatCap_ (this),
        SimFlowPlant_BasinHeatSetpointTemp_ (this),
        SimFlowPlant_BasinHeatOperatSchedName_ (this),
        SimFlowPlant_NomCOP_ (this),
        SimFlowPlant_DesignChilledWaterFlowRate_ (this),
        SimFlowPlant_DesignCondWaterFlowRate_ (this)
      {
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP (const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP& x,
                                                               ::xml_schema::flags f,
                                                               ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_Chiller (x, f, c),
        SimFlowPlant_Name_ (x.SimFlowPlant_Name_, f, this),
        SimFlowPlant_NomCap_ (x.SimFlowPlant_NomCap_, f, this),
        SimFlowPlant_SizingFactor_ (x.SimFlowPlant_SizingFactor_, f, this),
        SimFlowPlant_ChilledWaterInletNodeName_ (x.SimFlowPlant_ChilledWaterInletNodeName_, f, this),
        SimFlowPlant_ChilledWaterOutletNodeName_ (x.SimFlowPlant_ChilledWaterOutletNodeName_, f, this),
        SimFlowPlant_CondInletNodeName_ (x.SimFlowPlant_CondInletNodeName_, f, this),
        SimFlowPlant_CondOutletNodeName_ (x.SimFlowPlant_CondOutletNodeName_, f, this),
        SimFlowPlant_CondType_ (x.SimFlowPlant_CondType_, f, this),
        SimFlowPlant_ChillerFlowMode_ (x.SimFlowPlant_ChillerFlowMode_, f, this),
        SimFlowPlant_BasinHeatCap_ (x.SimFlowPlant_BasinHeatCap_, f, this),
        SimFlowPlant_BasinHeatSetpointTemp_ (x.SimFlowPlant_BasinHeatSetpointTemp_, f, this),
        SimFlowPlant_BasinHeatOperatSchedName_ (x.SimFlowPlant_BasinHeatOperatSchedName_, f, this),
        SimFlowPlant_NomCOP_ (x.SimFlowPlant_NomCOP_, f, this),
        SimFlowPlant_DesignChilledWaterFlowRate_ (x.SimFlowPlant_DesignChilledWaterFlowRate_, f, this),
        SimFlowPlant_DesignCondWaterFlowRate_ (x.SimFlowPlant_DesignCondWaterFlowRate_, f, this)
      {
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP (const ::xercesc::DOMElement& e,
                                                               ::xml_schema::flags f,
                                                               ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_Chiller (e, f | ::xml_schema::flags::base, c),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_NomCap_ (this),
        SimFlowPlant_SizingFactor_ (this),
        SimFlowPlant_ChilledWaterInletNodeName_ (this),
        SimFlowPlant_ChilledWaterOutletNodeName_ (this),
        SimFlowPlant_CondInletNodeName_ (this),
        SimFlowPlant_CondOutletNodeName_ (this),
        SimFlowPlant_CondType_ (this),
        SimFlowPlant_ChillerFlowMode_ (this),
        SimFlowPlant_BasinHeatCap_ (this),
        SimFlowPlant_BasinHeatSetpointTemp_ (this),
        SimFlowPlant_BasinHeatOperatSchedName_ (this),
        SimFlowPlant_NomCOP_ (this),
        SimFlowPlant_DesignChilledWaterFlowRate_ (this),
        SimFlowPlant_DesignCondWaterFlowRate_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowPlant_Chiller::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowPlant_Name
          //
          if (n.name () == "SimFlowPlant_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_Name_type > r (
              SimFlowPlant_Name_traits::create (i, f, this));

            if (!this->SimFlowPlant_Name_)
            {
              this->SimFlowPlant_Name_.set (r);
              continue;
            }
          }

          // SimFlowPlant_NomCap
          //
          if (n.name () == "SimFlowPlant_NomCap" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_NomCap_)
            {
              this->SimFlowPlant_NomCap_.set (SimFlowPlant_NomCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_SizingFactor
          //
          if (n.name () == "SimFlowPlant_SizingFactor" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_SizingFactor_)
            {
              this->SimFlowPlant_SizingFactor_.set (SimFlowPlant_SizingFactor_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_ChilledWaterInletNodeName
          //
          if (n.name () == "SimFlowPlant_ChilledWaterInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_ChilledWaterInletNodeName_type > r (
              SimFlowPlant_ChilledWaterInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_ChilledWaterInletNodeName_)
            {
              this->SimFlowPlant_ChilledWaterInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_ChilledWaterOutletNodeName
          //
          if (n.name () == "SimFlowPlant_ChilledWaterOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_ChilledWaterOutletNodeName_type > r (
              SimFlowPlant_ChilledWaterOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_ChilledWaterOutletNodeName_)
            {
              this->SimFlowPlant_ChilledWaterOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_CondInletNodeName
          //
          if (n.name () == "SimFlowPlant_CondInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_CondInletNodeName_type > r (
              SimFlowPlant_CondInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_CondInletNodeName_)
            {
              this->SimFlowPlant_CondInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_CondOutletNodeName
          //
          if (n.name () == "SimFlowPlant_CondOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_CondOutletNodeName_type > r (
              SimFlowPlant_CondOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_CondOutletNodeName_)
            {
              this->SimFlowPlant_CondOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_CondType
          //
          if (n.name () == "SimFlowPlant_CondType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_CondType_type > r (
              SimFlowPlant_CondType_traits::create (i, f, this));

            if (!this->SimFlowPlant_CondType_)
            {
              this->SimFlowPlant_CondType_.set (r);
              continue;
            }
          }

          // SimFlowPlant_ChillerFlowMode
          //
          if (n.name () == "SimFlowPlant_ChillerFlowMode" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_ChillerFlowMode_type > r (
              SimFlowPlant_ChillerFlowMode_traits::create (i, f, this));

            if (!this->SimFlowPlant_ChillerFlowMode_)
            {
              this->SimFlowPlant_ChillerFlowMode_.set (r);
              continue;
            }
          }

          // SimFlowPlant_BasinHeatCap
          //
          if (n.name () == "SimFlowPlant_BasinHeatCap" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_BasinHeatCap_)
            {
              this->SimFlowPlant_BasinHeatCap_.set (SimFlowPlant_BasinHeatCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_BasinHeatSetpointTemp
          //
          if (n.name () == "SimFlowPlant_BasinHeatSetpointTemp" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_BasinHeatSetpointTemp_)
            {
              this->SimFlowPlant_BasinHeatSetpointTemp_.set (SimFlowPlant_BasinHeatSetpointTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_BasinHeatOperatSchedName
          //
          if (n.name () == "SimFlowPlant_BasinHeatOperatSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_BasinHeatOperatSchedName_type > r (
              SimFlowPlant_BasinHeatOperatSchedName_traits::create (i, f, this));

            if (!this->SimFlowPlant_BasinHeatOperatSchedName_)
            {
              this->SimFlowPlant_BasinHeatOperatSchedName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_NomCOP
          //
          if (n.name () == "SimFlowPlant_NomCOP" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_NomCOP_)
            {
              this->SimFlowPlant_NomCOP_.set (SimFlowPlant_NomCOP_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_DesignChilledWaterFlowRate
          //
          if (n.name () == "SimFlowPlant_DesignChilledWaterFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_DesignChilledWaterFlowRate_)
            {
              this->SimFlowPlant_DesignChilledWaterFlowRate_.set (SimFlowPlant_DesignChilledWaterFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_DesignCondWaterFlowRate
          //
          if (n.name () == "SimFlowPlant_DesignCondWaterFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_DesignCondWaterFlowRate_)
            {
              this->SimFlowPlant_DesignCondWaterFlowRate_.set (SimFlowPlant_DesignCondWaterFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP* SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP (*this, f, c);
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP& SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      operator= (const SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowPlant_Chiller& > (*this) = x;
          this->SimFlowPlant_Name_ = x.SimFlowPlant_Name_;
          this->SimFlowPlant_NomCap_ = x.SimFlowPlant_NomCap_;
          this->SimFlowPlant_SizingFactor_ = x.SimFlowPlant_SizingFactor_;
          this->SimFlowPlant_ChilledWaterInletNodeName_ = x.SimFlowPlant_ChilledWaterInletNodeName_;
          this->SimFlowPlant_ChilledWaterOutletNodeName_ = x.SimFlowPlant_ChilledWaterOutletNodeName_;
          this->SimFlowPlant_CondInletNodeName_ = x.SimFlowPlant_CondInletNodeName_;
          this->SimFlowPlant_CondOutletNodeName_ = x.SimFlowPlant_CondOutletNodeName_;
          this->SimFlowPlant_CondType_ = x.SimFlowPlant_CondType_;
          this->SimFlowPlant_ChillerFlowMode_ = x.SimFlowPlant_ChillerFlowMode_;
          this->SimFlowPlant_BasinHeatCap_ = x.SimFlowPlant_BasinHeatCap_;
          this->SimFlowPlant_BasinHeatSetpointTemp_ = x.SimFlowPlant_BasinHeatSetpointTemp_;
          this->SimFlowPlant_BasinHeatOperatSchedName_ = x.SimFlowPlant_BasinHeatOperatSchedName_;
          this->SimFlowPlant_NomCOP_ = x.SimFlowPlant_NomCOP_;
          this->SimFlowPlant_DesignChilledWaterFlowRate_ = x.SimFlowPlant_DesignChilledWaterFlowRate_;
          this->SimFlowPlant_DesignCondWaterFlowRate_ = x.SimFlowPlant_DesignCondWaterFlowRate_;
        }

        return *this;
      }

      SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP::
      ~SimFlowPlant_Chiller_ChillerVaporCompressionConstantCOP ()
      {
      }
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

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

