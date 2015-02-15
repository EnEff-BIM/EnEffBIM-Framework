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

#include "SimFlowMover_Pump_ConstantSpeedSupply.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowMover_Pump_ConstantSpeedSupply
      // 

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_MotorEff_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_MotorEff () const
      {
        return this->SimFlowMover_MotorEff_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_MotorEff_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_MotorEff ()
      {
        return this->SimFlowMover_MotorEff_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_MotorEff (const SimFlowMover_MotorEff_type& x)
      {
        this->SimFlowMover_MotorEff_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_MotorEff (const SimFlowMover_MotorEff_optional& x)
      {
        this->SimFlowMover_MotorEff_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_InNodeName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_InNodeName () const
      {
        return this->SimFlowMover_InNodeName_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_InNodeName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_InNodeName ()
      {
        return this->SimFlowMover_InNodeName_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_InNodeName (const SimFlowMover_InNodeName_type& x)
      {
        this->SimFlowMover_InNodeName_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_InNodeName (const SimFlowMover_InNodeName_optional& x)
      {
        this->SimFlowMover_InNodeName_ = x;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_InNodeName (::std::auto_ptr< SimFlowMover_InNodeName_type > x)
      {
        this->SimFlowMover_InNodeName_.set (x);
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_OutNodeName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_OutNodeName () const
      {
        return this->SimFlowMover_OutNodeName_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_OutNodeName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_OutNodeName ()
      {
        return this->SimFlowMover_OutNodeName_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_OutNodeName (const SimFlowMover_OutNodeName_type& x)
      {
        this->SimFlowMover_OutNodeName_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_OutNodeName (const SimFlowMover_OutNodeName_optional& x)
      {
        this->SimFlowMover_OutNodeName_ = x;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_OutNodeName (::std::auto_ptr< SimFlowMover_OutNodeName_type > x)
      {
        this->SimFlowMover_OutNodeName_.set (x);
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RatedFlowRate_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedFlowRate () const
      {
        return this->SimFlowMover_RatedFlowRate_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RatedFlowRate_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedFlowRate ()
      {
        return this->SimFlowMover_RatedFlowRate_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedFlowRate (const SimFlowMover_RatedFlowRate_type& x)
      {
        this->SimFlowMover_RatedFlowRate_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedFlowRate (const SimFlowMover_RatedFlowRate_optional& x)
      {
        this->SimFlowMover_RatedFlowRate_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RatedPumpHead_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPumpHead () const
      {
        return this->SimFlowMover_RatedPumpHead_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RatedPumpHead_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPumpHead ()
      {
        return this->SimFlowMover_RatedPumpHead_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPumpHead (const SimFlowMover_RatedPumpHead_type& x)
      {
        this->SimFlowMover_RatedPumpHead_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPumpHead (const SimFlowMover_RatedPumpHead_optional& x)
      {
        this->SimFlowMover_RatedPumpHead_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RatedPowerConsump_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPowerConsump () const
      {
        return this->SimFlowMover_RatedPowerConsump_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RatedPowerConsump_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPowerConsump ()
      {
        return this->SimFlowMover_RatedPowerConsump_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPowerConsump (const SimFlowMover_RatedPowerConsump_type& x)
      {
        this->SimFlowMover_RatedPowerConsump_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RatedPowerConsump (const SimFlowMover_RatedPowerConsump_optional& x)
      {
        this->SimFlowMover_RatedPowerConsump_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_FracMotorInEffToFluidStream_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_FracMotorInEffToFluidStream () const
      {
        return this->SimFlowMover_FracMotorInEffToFluidStream_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_FracMotorInEffToFluidStream_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_FracMotorInEffToFluidStream ()
      {
        return this->SimFlowMover_FracMotorInEffToFluidStream_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_FracMotorInEffToFluidStream (const SimFlowMover_FracMotorInEffToFluidStream_type& x)
      {
        this->SimFlowMover_FracMotorInEffToFluidStream_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_FracMotorInEffToFluidStream (const SimFlowMover_FracMotorInEffToFluidStream_optional& x)
      {
        this->SimFlowMover_FracMotorInEffToFluidStream_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_PumpContType_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpContType () const
      {
        return this->SimFlowMover_PumpContType_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_PumpContType_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpContType ()
      {
        return this->SimFlowMover_PumpContType_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpContType (const SimFlowMover_PumpContType_type& x)
      {
        this->SimFlowMover_PumpContType_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpContType (const SimFlowMover_PumpContType_optional& x)
      {
        this->SimFlowMover_PumpContType_ = x;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpContType (::std::auto_ptr< SimFlowMover_PumpContType_type > x)
      {
        this->SimFlowMover_PumpContType_.set (x);
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_PumpFlowRateSchedName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpFlowRateSchedName () const
      {
        return this->SimFlowMover_PumpFlowRateSchedName_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_PumpFlowRateSchedName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpFlowRateSchedName ()
      {
        return this->SimFlowMover_PumpFlowRateSchedName_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpFlowRateSchedName (const SimFlowMover_PumpFlowRateSchedName_type& x)
      {
        this->SimFlowMover_PumpFlowRateSchedName_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpFlowRateSchedName (const SimFlowMover_PumpFlowRateSchedName_optional& x)
      {
        this->SimFlowMover_PumpFlowRateSchedName_ = x;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpFlowRateSchedName (::std::auto_ptr< SimFlowMover_PumpFlowRateSchedName_type > x)
      {
        this->SimFlowMover_PumpFlowRateSchedName_.set (x);
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_PumpCurveName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpCurveName () const
      {
        return this->SimFlowMover_PumpCurveName_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_PumpCurveName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpCurveName ()
      {
        return this->SimFlowMover_PumpCurveName_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpCurveName (const SimFlowMover_PumpCurveName_type& x)
      {
        this->SimFlowMover_PumpCurveName_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpCurveName (const SimFlowMover_PumpCurveName_optional& x)
      {
        this->SimFlowMover_PumpCurveName_ = x;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_PumpCurveName (::std::auto_ptr< SimFlowMover_PumpCurveName_type > x)
      {
        this->SimFlowMover_PumpCurveName_.set (x);
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_ImpelDiam_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ImpelDiam () const
      {
        return this->SimFlowMover_ImpelDiam_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_ImpelDiam_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ImpelDiam ()
      {
        return this->SimFlowMover_ImpelDiam_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ImpelDiam (const SimFlowMover_ImpelDiam_type& x)
      {
        this->SimFlowMover_ImpelDiam_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ImpelDiam (const SimFlowMover_ImpelDiam_optional& x)
      {
        this->SimFlowMover_ImpelDiam_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_ZoneName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ZoneName () const
      {
        return this->SimFlowMover_ZoneName_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_ZoneName_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ZoneName ()
      {
        return this->SimFlowMover_ZoneName_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ZoneName (const SimFlowMover_ZoneName_type& x)
      {
        this->SimFlowMover_ZoneName_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ZoneName (const SimFlowMover_ZoneName_optional& x)
      {
        this->SimFlowMover_ZoneName_ = x;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_ZoneName (::std::auto_ptr< SimFlowMover_ZoneName_type > x)
      {
        this->SimFlowMover_ZoneName_.set (x);
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_SkinLossRadiativeFract_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_SkinLossRadiativeFract () const
      {
        return this->SimFlowMover_SkinLossRadiativeFract_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_SkinLossRadiativeFract_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_SkinLossRadiativeFract ()
      {
        return this->SimFlowMover_SkinLossRadiativeFract_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_SkinLossRadiativeFract (const SimFlowMover_SkinLossRadiativeFract_type& x)
      {
        this->SimFlowMover_SkinLossRadiativeFract_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_SkinLossRadiativeFract (const SimFlowMover_SkinLossRadiativeFract_optional& x)
      {
        this->SimFlowMover_SkinLossRadiativeFract_ = x;
      }

      const SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RotationalSpd_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RotationalSpd () const
      {
        return this->SimFlowMover_RotationalSpd_;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::SimFlowMover_RotationalSpd_optional& SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RotationalSpd ()
      {
        return this->SimFlowMover_RotationalSpd_;
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RotationalSpd (const SimFlowMover_RotationalSpd_type& x)
      {
        this->SimFlowMover_RotationalSpd_.set (x);
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_RotationalSpd (const SimFlowMover_RotationalSpd_optional& x)
      {
        this->SimFlowMover_RotationalSpd_ = x;
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

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowMover_Pump_ConstantSpeedSupply
      //

      SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_Pump_ConstantSpeedSupply (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowMover_Pump (RefId),
        SimFlowMover_MotorEff_ (this),
        SimFlowMover_InNodeName_ (this),
        SimFlowMover_OutNodeName_ (this),
        SimFlowMover_RatedFlowRate_ (this),
        SimFlowMover_RatedPumpHead_ (this),
        SimFlowMover_RatedPowerConsump_ (this),
        SimFlowMover_FracMotorInEffToFluidStream_ (this),
        SimFlowMover_PumpContType_ (this),
        SimFlowMover_PumpFlowRateSchedName_ (this),
        SimFlowMover_PumpCurveName_ (this),
        SimFlowMover_ImpelDiam_ (this),
        SimFlowMover_ZoneName_ (this),
        SimFlowMover_SkinLossRadiativeFract_ (this),
        SimFlowMover_RotationalSpd_ (this)
      {
      }

      SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_Pump_ConstantSpeedSupply (const SimFlowMover_Pump_ConstantSpeedSupply& x,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowMover_Pump (x, f, c),
        SimFlowMover_MotorEff_ (x.SimFlowMover_MotorEff_, f, this),
        SimFlowMover_InNodeName_ (x.SimFlowMover_InNodeName_, f, this),
        SimFlowMover_OutNodeName_ (x.SimFlowMover_OutNodeName_, f, this),
        SimFlowMover_RatedFlowRate_ (x.SimFlowMover_RatedFlowRate_, f, this),
        SimFlowMover_RatedPumpHead_ (x.SimFlowMover_RatedPumpHead_, f, this),
        SimFlowMover_RatedPowerConsump_ (x.SimFlowMover_RatedPowerConsump_, f, this),
        SimFlowMover_FracMotorInEffToFluidStream_ (x.SimFlowMover_FracMotorInEffToFluidStream_, f, this),
        SimFlowMover_PumpContType_ (x.SimFlowMover_PumpContType_, f, this),
        SimFlowMover_PumpFlowRateSchedName_ (x.SimFlowMover_PumpFlowRateSchedName_, f, this),
        SimFlowMover_PumpCurveName_ (x.SimFlowMover_PumpCurveName_, f, this),
        SimFlowMover_ImpelDiam_ (x.SimFlowMover_ImpelDiam_, f, this),
        SimFlowMover_ZoneName_ (x.SimFlowMover_ZoneName_, f, this),
        SimFlowMover_SkinLossRadiativeFract_ (x.SimFlowMover_SkinLossRadiativeFract_, f, this),
        SimFlowMover_RotationalSpd_ (x.SimFlowMover_RotationalSpd_, f, this)
      {
      }

      SimFlowMover_Pump_ConstantSpeedSupply::
      SimFlowMover_Pump_ConstantSpeedSupply (const ::xercesc::DOMElement& e,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowMover_Pump (e, f | ::xml_schema::flags::base, c),
        SimFlowMover_MotorEff_ (this),
        SimFlowMover_InNodeName_ (this),
        SimFlowMover_OutNodeName_ (this),
        SimFlowMover_RatedFlowRate_ (this),
        SimFlowMover_RatedPumpHead_ (this),
        SimFlowMover_RatedPowerConsump_ (this),
        SimFlowMover_FracMotorInEffToFluidStream_ (this),
        SimFlowMover_PumpContType_ (this),
        SimFlowMover_PumpFlowRateSchedName_ (this),
        SimFlowMover_PumpCurveName_ (this),
        SimFlowMover_ImpelDiam_ (this),
        SimFlowMover_ZoneName_ (this),
        SimFlowMover_SkinLossRadiativeFract_ (this),
        SimFlowMover_RotationalSpd_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowMover_Pump_ConstantSpeedSupply::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowMover_Pump::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowMover_MotorEff
          //
          if (n.name () == "SimFlowMover_MotorEff" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_MotorEff_)
            {
              this->SimFlowMover_MotorEff_.set (SimFlowMover_MotorEff_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_InNodeName
          //
          if (n.name () == "SimFlowMover_InNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_InNodeName_type > r (
              SimFlowMover_InNodeName_traits::create (i, f, this));

            if (!this->SimFlowMover_InNodeName_)
            {
              this->SimFlowMover_InNodeName_.set (r);
              continue;
            }
          }

          // SimFlowMover_OutNodeName
          //
          if (n.name () == "SimFlowMover_OutNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_OutNodeName_type > r (
              SimFlowMover_OutNodeName_traits::create (i, f, this));

            if (!this->SimFlowMover_OutNodeName_)
            {
              this->SimFlowMover_OutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowMover_RatedFlowRate
          //
          if (n.name () == "SimFlowMover_RatedFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_RatedFlowRate_)
            {
              this->SimFlowMover_RatedFlowRate_.set (SimFlowMover_RatedFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_RatedPumpHead
          //
          if (n.name () == "SimFlowMover_RatedPumpHead" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_RatedPumpHead_)
            {
              this->SimFlowMover_RatedPumpHead_.set (SimFlowMover_RatedPumpHead_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_RatedPowerConsump
          //
          if (n.name () == "SimFlowMover_RatedPowerConsump" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_RatedPowerConsump_)
            {
              this->SimFlowMover_RatedPowerConsump_.set (SimFlowMover_RatedPowerConsump_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_FracMotorInEffToFluidStream
          //
          if (n.name () == "SimFlowMover_FracMotorInEffToFluidStream" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_FracMotorInEffToFluidStream_)
            {
              this->SimFlowMover_FracMotorInEffToFluidStream_.set (SimFlowMover_FracMotorInEffToFluidStream_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_PumpContType
          //
          if (n.name () == "SimFlowMover_PumpContType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_PumpContType_type > r (
              SimFlowMover_PumpContType_traits::create (i, f, this));

            if (!this->SimFlowMover_PumpContType_)
            {
              this->SimFlowMover_PumpContType_.set (r);
              continue;
            }
          }

          // SimFlowMover_PumpFlowRateSchedName
          //
          if (n.name () == "SimFlowMover_PumpFlowRateSchedName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_PumpFlowRateSchedName_type > r (
              SimFlowMover_PumpFlowRateSchedName_traits::create (i, f, this));

            if (!this->SimFlowMover_PumpFlowRateSchedName_)
            {
              this->SimFlowMover_PumpFlowRateSchedName_.set (r);
              continue;
            }
          }

          // SimFlowMover_PumpCurveName
          //
          if (n.name () == "SimFlowMover_PumpCurveName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_PumpCurveName_type > r (
              SimFlowMover_PumpCurveName_traits::create (i, f, this));

            if (!this->SimFlowMover_PumpCurveName_)
            {
              this->SimFlowMover_PumpCurveName_.set (r);
              continue;
            }
          }

          // SimFlowMover_ImpelDiam
          //
          if (n.name () == "SimFlowMover_ImpelDiam" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_ImpelDiam_)
            {
              this->SimFlowMover_ImpelDiam_.set (SimFlowMover_ImpelDiam_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_ZoneName
          //
          if (n.name () == "SimFlowMover_ZoneName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_ZoneName_type > r (
              SimFlowMover_ZoneName_traits::create (i, f, this));

            if (!this->SimFlowMover_ZoneName_)
            {
              this->SimFlowMover_ZoneName_.set (r);
              continue;
            }
          }

          // SimFlowMover_SkinLossRadiativeFract
          //
          if (n.name () == "SimFlowMover_SkinLossRadiativeFract" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_SkinLossRadiativeFract_)
            {
              this->SimFlowMover_SkinLossRadiativeFract_.set (SimFlowMover_SkinLossRadiativeFract_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_RotationalSpd
          //
          if (n.name () == "SimFlowMover_RotationalSpd" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowMover_RotationalSpd_)
            {
              this->SimFlowMover_RotationalSpd_.set (SimFlowMover_RotationalSpd_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowMover_Pump_ConstantSpeedSupply* SimFlowMover_Pump_ConstantSpeedSupply::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowMover_Pump_ConstantSpeedSupply (*this, f, c);
      }

      SimFlowMover_Pump_ConstantSpeedSupply& SimFlowMover_Pump_ConstantSpeedSupply::
      operator= (const SimFlowMover_Pump_ConstantSpeedSupply& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowMover_Pump& > (*this) = x;
          this->SimFlowMover_MotorEff_ = x.SimFlowMover_MotorEff_;
          this->SimFlowMover_InNodeName_ = x.SimFlowMover_InNodeName_;
          this->SimFlowMover_OutNodeName_ = x.SimFlowMover_OutNodeName_;
          this->SimFlowMover_RatedFlowRate_ = x.SimFlowMover_RatedFlowRate_;
          this->SimFlowMover_RatedPumpHead_ = x.SimFlowMover_RatedPumpHead_;
          this->SimFlowMover_RatedPowerConsump_ = x.SimFlowMover_RatedPowerConsump_;
          this->SimFlowMover_FracMotorInEffToFluidStream_ = x.SimFlowMover_FracMotorInEffToFluidStream_;
          this->SimFlowMover_PumpContType_ = x.SimFlowMover_PumpContType_;
          this->SimFlowMover_PumpFlowRateSchedName_ = x.SimFlowMover_PumpFlowRateSchedName_;
          this->SimFlowMover_PumpCurveName_ = x.SimFlowMover_PumpCurveName_;
          this->SimFlowMover_ImpelDiam_ = x.SimFlowMover_ImpelDiam_;
          this->SimFlowMover_ZoneName_ = x.SimFlowMover_ZoneName_;
          this->SimFlowMover_SkinLossRadiativeFract_ = x.SimFlowMover_SkinLossRadiativeFract_;
          this->SimFlowMover_RotationalSpd_ = x.SimFlowMover_RotationalSpd_;
        }

        return *this;
      }

      SimFlowMover_Pump_ConstantSpeedSupply::
      ~SimFlowMover_Pump_ConstantSpeedSupply ()
      {
      }
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace namespaces
{
  namespace Sim
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

