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

#include "SimFlowMover_ReturnFan_VariableVolume.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowMover_ReturnFan_VariableVolume
      // 

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_Name_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_Name () const
      {
        return this->SimFlowMover_Name_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_Name_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_Name ()
      {
        return this->SimFlowMover_Name_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_Name (const SimFlowMover_Name_type& x)
      {
        this->SimFlowMover_Name_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_Name (const SimFlowMover_Name_optional& x)
      {
        this->SimFlowMover_Name_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_Name (::std::auto_ptr< SimFlowMover_Name_type > x)
      {
        this->SimFlowMover_Name_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_AvailSchedName_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AvailSchedName () const
      {
        return this->SimFlowMover_AvailSchedName_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_AvailSchedName_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AvailSchedName ()
      {
        return this->SimFlowMover_AvailSchedName_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AvailSchedName (const SimFlowMover_AvailSchedName_type& x)
      {
        this->SimFlowMover_AvailSchedName_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AvailSchedName (const SimFlowMover_AvailSchedName_optional& x)
      {
        this->SimFlowMover_AvailSchedName_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AvailSchedName (::std::auto_ptr< SimFlowMover_AvailSchedName_type > x)
      {
        this->SimFlowMover_AvailSchedName_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanTotalEff_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanTotalEff () const
      {
        return this->SimFlowMover_FanTotalEff_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanTotalEff_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanTotalEff ()
      {
        return this->SimFlowMover_FanTotalEff_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanTotalEff (const SimFlowMover_FanTotalEff_type& x)
      {
        this->SimFlowMover_FanTotalEff_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanTotalEff (const SimFlowMover_FanTotalEff_optional& x)
      {
        this->SimFlowMover_FanTotalEff_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_PresRise_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_PresRise () const
      {
        return this->SimFlowMover_PresRise_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_PresRise_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_PresRise ()
      {
        return this->SimFlowMover_PresRise_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_PresRise (const SimFlowMover_PresRise_type& x)
      {
        this->SimFlowMover_PresRise_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_PresRise (const SimFlowMover_PresRise_optional& x)
      {
        this->SimFlowMover_PresRise_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_MaxFlowRate_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MaxFlowRate () const
      {
        return this->SimFlowMover_MaxFlowRate_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_MaxFlowRate_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MaxFlowRate ()
      {
        return this->SimFlowMover_MaxFlowRate_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MaxFlowRate (const SimFlowMover_MaxFlowRate_type& x)
      {
        this->SimFlowMover_MaxFlowRate_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MaxFlowRate (const SimFlowMover_MaxFlowRate_optional& x)
      {
        this->SimFlowMover_MaxFlowRate_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_MotorEff_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorEff () const
      {
        return this->SimFlowMover_MotorEff_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_MotorEff_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorEff ()
      {
        return this->SimFlowMover_MotorEff_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorEff (const SimFlowMover_MotorEff_type& x)
      {
        this->SimFlowMover_MotorEff_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorEff (const SimFlowMover_MotorEff_optional& x)
      {
        this->SimFlowMover_MotorEff_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_MotorInAirstreamFrac_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorInAirstreamFrac () const
      {
        return this->SimFlowMover_MotorInAirstreamFrac_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_MotorInAirstreamFrac_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorInAirstreamFrac ()
      {
        return this->SimFlowMover_MotorInAirstreamFrac_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorInAirstreamFrac (const SimFlowMover_MotorInAirstreamFrac_type& x)
      {
        this->SimFlowMover_MotorInAirstreamFrac_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_MotorInAirstreamFrac (const SimFlowMover_MotorInAirstreamFrac_optional& x)
      {
        this->SimFlowMover_MotorInAirstreamFrac_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_AirInNodeName_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirInNodeName () const
      {
        return this->SimFlowMover_AirInNodeName_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_AirInNodeName_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirInNodeName ()
      {
        return this->SimFlowMover_AirInNodeName_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirInNodeName (const SimFlowMover_AirInNodeName_type& x)
      {
        this->SimFlowMover_AirInNodeName_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirInNodeName (const SimFlowMover_AirInNodeName_optional& x)
      {
        this->SimFlowMover_AirInNodeName_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirInNodeName (::std::auto_ptr< SimFlowMover_AirInNodeName_type > x)
      {
        this->SimFlowMover_AirInNodeName_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_AirOutNodeName_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirOutNodeName () const
      {
        return this->SimFlowMover_AirOutNodeName_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_AirOutNodeName_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirOutNodeName ()
      {
        return this->SimFlowMover_AirOutNodeName_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirOutNodeName (const SimFlowMover_AirOutNodeName_type& x)
      {
        this->SimFlowMover_AirOutNodeName_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirOutNodeName (const SimFlowMover_AirOutNodeName_optional& x)
      {
        this->SimFlowMover_AirOutNodeName_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_AirOutNodeName (::std::auto_ptr< SimFlowMover_AirOutNodeName_type > x)
      {
        this->SimFlowMover_AirOutNodeName_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_EndUseSubCat_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_EndUseSubCat () const
      {
        return this->SimFlowMover_EndUseSubCat_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_EndUseSubCat_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_EndUseSubCat ()
      {
        return this->SimFlowMover_EndUseSubCat_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_EndUseSubCat (const SimFlowMover_EndUseSubCat_type& x)
      {
        this->SimFlowMover_EndUseSubCat_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_EndUseSubCat (const SimFlowMover_EndUseSubCat_optional& x)
      {
        this->SimFlowMover_EndUseSubCat_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_EndUseSubCat (::std::auto_ptr< SimFlowMover_EndUseSubCat_type > x)
      {
        this->SimFlowMover_EndUseSubCat_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerMinFlowRateInputMethod_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowRateInputMethod () const
      {
        return this->SimFlowMover_FanPowerMinFlowRateInputMethod_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerMinFlowRateInputMethod_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowRateInputMethod ()
      {
        return this->SimFlowMover_FanPowerMinFlowRateInputMethod_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowRateInputMethod (const SimFlowMover_FanPowerMinFlowRateInputMethod_type& x)
      {
        this->SimFlowMover_FanPowerMinFlowRateInputMethod_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowRateInputMethod (const SimFlowMover_FanPowerMinFlowRateInputMethod_optional& x)
      {
        this->SimFlowMover_FanPowerMinFlowRateInputMethod_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowRateInputMethod (::std::auto_ptr< SimFlowMover_FanPowerMinFlowRateInputMethod_type > x)
      {
        this->SimFlowMover_FanPowerMinFlowRateInputMethod_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerMinFlowFraction_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowFraction () const
      {
        return this->SimFlowMover_FanPowerMinFlowFraction_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerMinFlowFraction_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowFraction ()
      {
        return this->SimFlowMover_FanPowerMinFlowFraction_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowFraction (const SimFlowMover_FanPowerMinFlowFraction_type& x)
      {
        this->SimFlowMover_FanPowerMinFlowFraction_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinFlowFraction (const SimFlowMover_FanPowerMinFlowFraction_optional& x)
      {
        this->SimFlowMover_FanPowerMinFlowFraction_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerMinAirFlowRate_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinAirFlowRate () const
      {
        return this->SimFlowMover_FanPowerMinAirFlowRate_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerMinAirFlowRate_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinAirFlowRate ()
      {
        return this->SimFlowMover_FanPowerMinAirFlowRate_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinAirFlowRate (const SimFlowMover_FanPowerMinAirFlowRate_type& x)
      {
        this->SimFlowMover_FanPowerMinAirFlowRate_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerMinAirFlowRate (const SimFlowMover_FanPowerMinAirFlowRate_optional& x)
      {
        this->SimFlowMover_FanPowerMinAirFlowRate_ = x;
      }

      const SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerCoeff_1_5_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerCoeff_1_5 () const
      {
        return this->SimFlowMover_FanPowerCoeff_1_5_;
      }

      SimFlowMover_ReturnFan_VariableVolume::SimFlowMover_FanPowerCoeff_1_5_optional& SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerCoeff_1_5 ()
      {
        return this->SimFlowMover_FanPowerCoeff_1_5_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerCoeff_1_5 (const SimFlowMover_FanPowerCoeff_1_5_type& x)
      {
        this->SimFlowMover_FanPowerCoeff_1_5_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerCoeff_1_5 (const SimFlowMover_FanPowerCoeff_1_5_optional& x)
      {
        this->SimFlowMover_FanPowerCoeff_1_5_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_FanPowerCoeff_1_5 (::std::auto_ptr< SimFlowMover_FanPowerCoeff_1_5_type > x)
      {
        this->SimFlowMover_FanPowerCoeff_1_5_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::AirflowNet_DistribComp_Fan_FanName_optional& SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_FanName () const
      {
        return this->AirflowNet_DistribComp_Fan_FanName_;
      }

      SimFlowMover_ReturnFan_VariableVolume::AirflowNet_DistribComp_Fan_FanName_optional& SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_FanName ()
      {
        return this->AirflowNet_DistribComp_Fan_FanName_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_FanName (const AirflowNet_DistribComp_Fan_FanName_type& x)
      {
        this->AirflowNet_DistribComp_Fan_FanName_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_FanName (const AirflowNet_DistribComp_Fan_FanName_optional& x)
      {
        this->AirflowNet_DistribComp_Fan_FanName_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_FanName (::std::auto_ptr< AirflowNet_DistribComp_Fan_FanName_type > x)
      {
        this->AirflowNet_DistribComp_Fan_FanName_.set (x);
      }

      const SimFlowMover_ReturnFan_VariableVolume::AirflowNet_DistribComp_Fan_SupFanObjectType_optional& SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_SupFanObjectType () const
      {
        return this->AirflowNet_DistribComp_Fan_SupFanObjectType_;
      }

      SimFlowMover_ReturnFan_VariableVolume::AirflowNet_DistribComp_Fan_SupFanObjectType_optional& SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_SupFanObjectType ()
      {
        return this->AirflowNet_DistribComp_Fan_SupFanObjectType_;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_SupFanObjectType (const AirflowNet_DistribComp_Fan_SupFanObjectType_type& x)
      {
        this->AirflowNet_DistribComp_Fan_SupFanObjectType_.set (x);
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_SupFanObjectType (const AirflowNet_DistribComp_Fan_SupFanObjectType_optional& x)
      {
        this->AirflowNet_DistribComp_Fan_SupFanObjectType_ = x;
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      AirflowNet_DistribComp_Fan_SupFanObjectType (::std::auto_ptr< AirflowNet_DistribComp_Fan_SupFanObjectType_type > x)
      {
        this->AirflowNet_DistribComp_Fan_SupFanObjectType_.set (x);
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
      // SimFlowMover_ReturnFan_VariableVolume
      //

      SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_ReturnFan_VariableVolume ()
      : ::schema::simxml::MepModel::SimFlowMover_ReturnFan (),
        SimFlowMover_Name_ (this),
        SimFlowMover_AvailSchedName_ (this),
        SimFlowMover_FanTotalEff_ (this),
        SimFlowMover_PresRise_ (this),
        SimFlowMover_MaxFlowRate_ (this),
        SimFlowMover_MotorEff_ (this),
        SimFlowMover_MotorInAirstreamFrac_ (this),
        SimFlowMover_AirInNodeName_ (this),
        SimFlowMover_AirOutNodeName_ (this),
        SimFlowMover_EndUseSubCat_ (this),
        SimFlowMover_FanPowerMinFlowRateInputMethod_ (this),
        SimFlowMover_FanPowerMinFlowFraction_ (this),
        SimFlowMover_FanPowerMinAirFlowRate_ (this),
        SimFlowMover_FanPowerCoeff_1_5_ (this),
        AirflowNet_DistribComp_Fan_FanName_ (this),
        AirflowNet_DistribComp_Fan_SupFanObjectType_ (this)
      {
      }

      SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_ReturnFan_VariableVolume (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowMover_ReturnFan (RefId),
        SimFlowMover_Name_ (this),
        SimFlowMover_AvailSchedName_ (this),
        SimFlowMover_FanTotalEff_ (this),
        SimFlowMover_PresRise_ (this),
        SimFlowMover_MaxFlowRate_ (this),
        SimFlowMover_MotorEff_ (this),
        SimFlowMover_MotorInAirstreamFrac_ (this),
        SimFlowMover_AirInNodeName_ (this),
        SimFlowMover_AirOutNodeName_ (this),
        SimFlowMover_EndUseSubCat_ (this),
        SimFlowMover_FanPowerMinFlowRateInputMethod_ (this),
        SimFlowMover_FanPowerMinFlowFraction_ (this),
        SimFlowMover_FanPowerMinAirFlowRate_ (this),
        SimFlowMover_FanPowerCoeff_1_5_ (this),
        AirflowNet_DistribComp_Fan_FanName_ (this),
        AirflowNet_DistribComp_Fan_SupFanObjectType_ (this)
      {
      }

      SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_ReturnFan_VariableVolume (const SimFlowMover_ReturnFan_VariableVolume& x,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowMover_ReturnFan (x, f, c),
        SimFlowMover_Name_ (x.SimFlowMover_Name_, f, this),
        SimFlowMover_AvailSchedName_ (x.SimFlowMover_AvailSchedName_, f, this),
        SimFlowMover_FanTotalEff_ (x.SimFlowMover_FanTotalEff_, f, this),
        SimFlowMover_PresRise_ (x.SimFlowMover_PresRise_, f, this),
        SimFlowMover_MaxFlowRate_ (x.SimFlowMover_MaxFlowRate_, f, this),
        SimFlowMover_MotorEff_ (x.SimFlowMover_MotorEff_, f, this),
        SimFlowMover_MotorInAirstreamFrac_ (x.SimFlowMover_MotorInAirstreamFrac_, f, this),
        SimFlowMover_AirInNodeName_ (x.SimFlowMover_AirInNodeName_, f, this),
        SimFlowMover_AirOutNodeName_ (x.SimFlowMover_AirOutNodeName_, f, this),
        SimFlowMover_EndUseSubCat_ (x.SimFlowMover_EndUseSubCat_, f, this),
        SimFlowMover_FanPowerMinFlowRateInputMethod_ (x.SimFlowMover_FanPowerMinFlowRateInputMethod_, f, this),
        SimFlowMover_FanPowerMinFlowFraction_ (x.SimFlowMover_FanPowerMinFlowFraction_, f, this),
        SimFlowMover_FanPowerMinAirFlowRate_ (x.SimFlowMover_FanPowerMinAirFlowRate_, f, this),
        SimFlowMover_FanPowerCoeff_1_5_ (x.SimFlowMover_FanPowerCoeff_1_5_, f, this),
        AirflowNet_DistribComp_Fan_FanName_ (x.AirflowNet_DistribComp_Fan_FanName_, f, this),
        AirflowNet_DistribComp_Fan_SupFanObjectType_ (x.AirflowNet_DistribComp_Fan_SupFanObjectType_, f, this)
      {
      }

      SimFlowMover_ReturnFan_VariableVolume::
      SimFlowMover_ReturnFan_VariableVolume (const ::xercesc::DOMElement& e,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowMover_ReturnFan (e, f | ::xml_schema::flags::base, c),
        SimFlowMover_Name_ (this),
        SimFlowMover_AvailSchedName_ (this),
        SimFlowMover_FanTotalEff_ (this),
        SimFlowMover_PresRise_ (this),
        SimFlowMover_MaxFlowRate_ (this),
        SimFlowMover_MotorEff_ (this),
        SimFlowMover_MotorInAirstreamFrac_ (this),
        SimFlowMover_AirInNodeName_ (this),
        SimFlowMover_AirOutNodeName_ (this),
        SimFlowMover_EndUseSubCat_ (this),
        SimFlowMover_FanPowerMinFlowRateInputMethod_ (this),
        SimFlowMover_FanPowerMinFlowFraction_ (this),
        SimFlowMover_FanPowerMinAirFlowRate_ (this),
        SimFlowMover_FanPowerCoeff_1_5_ (this),
        AirflowNet_DistribComp_Fan_FanName_ (this),
        AirflowNet_DistribComp_Fan_SupFanObjectType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowMover_ReturnFan_VariableVolume::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowMover_ReturnFan::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowMover_Name
          //
          if (n.name () == "SimFlowMover_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_Name_type > r (
              SimFlowMover_Name_traits::create (i, f, this));

            if (!this->SimFlowMover_Name_)
            {
              this->SimFlowMover_Name_.set (r);
              continue;
            }
          }

          // SimFlowMover_AvailSchedName
          //
          if (n.name () == "SimFlowMover_AvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_AvailSchedName_type > r (
              SimFlowMover_AvailSchedName_traits::create (i, f, this));

            if (!this->SimFlowMover_AvailSchedName_)
            {
              this->SimFlowMover_AvailSchedName_.set (r);
              continue;
            }
          }

          // SimFlowMover_FanTotalEff
          //
          if (n.name () == "SimFlowMover_FanTotalEff" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_FanTotalEff_)
            {
              this->SimFlowMover_FanTotalEff_.set (SimFlowMover_FanTotalEff_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_PresRise
          //
          if (n.name () == "SimFlowMover_PresRise" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_PresRise_)
            {
              this->SimFlowMover_PresRise_.set (SimFlowMover_PresRise_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_MaxFlowRate
          //
          if (n.name () == "SimFlowMover_MaxFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_MaxFlowRate_)
            {
              this->SimFlowMover_MaxFlowRate_.set (SimFlowMover_MaxFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_MotorEff
          //
          if (n.name () == "SimFlowMover_MotorEff" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_MotorEff_)
            {
              this->SimFlowMover_MotorEff_.set (SimFlowMover_MotorEff_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_MotorInAirstreamFrac
          //
          if (n.name () == "SimFlowMover_MotorInAirstreamFrac" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_MotorInAirstreamFrac_)
            {
              this->SimFlowMover_MotorInAirstreamFrac_.set (SimFlowMover_MotorInAirstreamFrac_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_AirInNodeName
          //
          if (n.name () == "SimFlowMover_AirInNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_AirInNodeName_type > r (
              SimFlowMover_AirInNodeName_traits::create (i, f, this));

            if (!this->SimFlowMover_AirInNodeName_)
            {
              this->SimFlowMover_AirInNodeName_.set (r);
              continue;
            }
          }

          // SimFlowMover_AirOutNodeName
          //
          if (n.name () == "SimFlowMover_AirOutNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_AirOutNodeName_type > r (
              SimFlowMover_AirOutNodeName_traits::create (i, f, this));

            if (!this->SimFlowMover_AirOutNodeName_)
            {
              this->SimFlowMover_AirOutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowMover_EndUseSubCat
          //
          if (n.name () == "SimFlowMover_EndUseSubCat" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_EndUseSubCat_type > r (
              SimFlowMover_EndUseSubCat_traits::create (i, f, this));

            if (!this->SimFlowMover_EndUseSubCat_)
            {
              this->SimFlowMover_EndUseSubCat_.set (r);
              continue;
            }
          }

          // SimFlowMover_FanPowerMinFlowRateInputMethod
          //
          if (n.name () == "SimFlowMover_FanPowerMinFlowRateInputMethod" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_FanPowerMinFlowRateInputMethod_type > r (
              SimFlowMover_FanPowerMinFlowRateInputMethod_traits::create (i, f, this));

            if (!this->SimFlowMover_FanPowerMinFlowRateInputMethod_)
            {
              this->SimFlowMover_FanPowerMinFlowRateInputMethod_.set (r);
              continue;
            }
          }

          // SimFlowMover_FanPowerMinFlowFraction
          //
          if (n.name () == "SimFlowMover_FanPowerMinFlowFraction" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_FanPowerMinFlowFraction_)
            {
              this->SimFlowMover_FanPowerMinFlowFraction_.set (SimFlowMover_FanPowerMinFlowFraction_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_FanPowerMinAirFlowRate
          //
          if (n.name () == "SimFlowMover_FanPowerMinAirFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowMover_FanPowerMinAirFlowRate_)
            {
              this->SimFlowMover_FanPowerMinAirFlowRate_.set (SimFlowMover_FanPowerMinAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowMover_FanPowerCoeff_1_5
          //
          if (n.name () == "SimFlowMover_FanPowerCoeff_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_FanPowerCoeff_1_5_type > r (
              SimFlowMover_FanPowerCoeff_1_5_traits::create (i, f, this));

            if (!this->SimFlowMover_FanPowerCoeff_1_5_)
            {
              this->SimFlowMover_FanPowerCoeff_1_5_.set (r);
              continue;
            }
          }

          // AirflowNet_DistribComp_Fan_FanName
          //
          if (n.name () == "AirflowNet_DistribComp_Fan_FanName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< AirflowNet_DistribComp_Fan_FanName_type > r (
              AirflowNet_DistribComp_Fan_FanName_traits::create (i, f, this));

            if (!this->AirflowNet_DistribComp_Fan_FanName_)
            {
              this->AirflowNet_DistribComp_Fan_FanName_.set (r);
              continue;
            }
          }

          // AirflowNet_DistribComp_Fan_SupFanObjectType
          //
          if (n.name () == "AirflowNet_DistribComp_Fan_SupFanObjectType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< AirflowNet_DistribComp_Fan_SupFanObjectType_type > r (
              AirflowNet_DistribComp_Fan_SupFanObjectType_traits::create (i, f, this));

            if (!this->AirflowNet_DistribComp_Fan_SupFanObjectType_)
            {
              this->AirflowNet_DistribComp_Fan_SupFanObjectType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowMover_ReturnFan_VariableVolume* SimFlowMover_ReturnFan_VariableVolume::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowMover_ReturnFan_VariableVolume (*this, f, c);
      }

      SimFlowMover_ReturnFan_VariableVolume& SimFlowMover_ReturnFan_VariableVolume::
      operator= (const SimFlowMover_ReturnFan_VariableVolume& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowMover_ReturnFan& > (*this) = x;
          this->SimFlowMover_Name_ = x.SimFlowMover_Name_;
          this->SimFlowMover_AvailSchedName_ = x.SimFlowMover_AvailSchedName_;
          this->SimFlowMover_FanTotalEff_ = x.SimFlowMover_FanTotalEff_;
          this->SimFlowMover_PresRise_ = x.SimFlowMover_PresRise_;
          this->SimFlowMover_MaxFlowRate_ = x.SimFlowMover_MaxFlowRate_;
          this->SimFlowMover_MotorEff_ = x.SimFlowMover_MotorEff_;
          this->SimFlowMover_MotorInAirstreamFrac_ = x.SimFlowMover_MotorInAirstreamFrac_;
          this->SimFlowMover_AirInNodeName_ = x.SimFlowMover_AirInNodeName_;
          this->SimFlowMover_AirOutNodeName_ = x.SimFlowMover_AirOutNodeName_;
          this->SimFlowMover_EndUseSubCat_ = x.SimFlowMover_EndUseSubCat_;
          this->SimFlowMover_FanPowerMinFlowRateInputMethod_ = x.SimFlowMover_FanPowerMinFlowRateInputMethod_;
          this->SimFlowMover_FanPowerMinFlowFraction_ = x.SimFlowMover_FanPowerMinFlowFraction_;
          this->SimFlowMover_FanPowerMinAirFlowRate_ = x.SimFlowMover_FanPowerMinAirFlowRate_;
          this->SimFlowMover_FanPowerCoeff_1_5_ = x.SimFlowMover_FanPowerCoeff_1_5_;
          this->AirflowNet_DistribComp_Fan_FanName_ = x.AirflowNet_DistribComp_Fan_FanName_;
          this->AirflowNet_DistribComp_Fan_SupFanObjectType_ = x.AirflowNet_DistribComp_Fan_SupFanObjectType_;
        }

        return *this;
      }

      SimFlowMover_ReturnFan_VariableVolume::
      ~SimFlowMover_ReturnFan_VariableVolume ()
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

