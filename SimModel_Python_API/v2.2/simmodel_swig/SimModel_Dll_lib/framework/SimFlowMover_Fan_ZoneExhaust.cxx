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

#include "SimFlowMover_Fan_ZoneExhaust.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowMover_Fan_ZoneExhaust
      // 

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_Name_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Name () const
      {
        return this->SimFlowMover_Name_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_Name_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Name ()
      {
        return this->SimFlowMover_Name_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Name (const SimFlowMover_Name_type& x)
      {
        this->SimFlowMover_Name_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Name (const SimFlowMover_Name_optional& x)
      {
        this->SimFlowMover_Name_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Name (::std::auto_ptr< SimFlowMover_Name_type > x)
      {
        this->SimFlowMover_Name_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_AvailSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AvailSchedName () const
      {
        return this->SimFlowMover_AvailSchedName_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_AvailSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AvailSchedName ()
      {
        return this->SimFlowMover_AvailSchedName_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AvailSchedName (const SimFlowMover_AvailSchedName_type& x)
      {
        this->SimFlowMover_AvailSchedName_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AvailSchedName (const SimFlowMover_AvailSchedName_optional& x)
      {
        this->SimFlowMover_AvailSchedName_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AvailSchedName (::std::auto_ptr< SimFlowMover_AvailSchedName_type > x)
      {
        this->SimFlowMover_AvailSchedName_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_FanTotalEff_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FanTotalEff () const
      {
        return this->SimFlowMover_FanTotalEff_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_FanTotalEff_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FanTotalEff ()
      {
        return this->SimFlowMover_FanTotalEff_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FanTotalEff (const SimFlowMover_FanTotalEff_type& x)
      {
        this->SimFlowMover_FanTotalEff_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FanTotalEff (const SimFlowMover_FanTotalEff_optional& x)
      {
        this->SimFlowMover_FanTotalEff_ = x;
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_PresRise_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_PresRise () const
      {
        return this->SimFlowMover_PresRise_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_PresRise_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_PresRise ()
      {
        return this->SimFlowMover_PresRise_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_PresRise (const SimFlowMover_PresRise_type& x)
      {
        this->SimFlowMover_PresRise_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_PresRise (const SimFlowMover_PresRise_optional& x)
      {
        this->SimFlowMover_PresRise_ = x;
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_MaxFlowRate_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MaxFlowRate () const
      {
        return this->SimFlowMover_MaxFlowRate_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_MaxFlowRate_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MaxFlowRate ()
      {
        return this->SimFlowMover_MaxFlowRate_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MaxFlowRate (const SimFlowMover_MaxFlowRate_type& x)
      {
        this->SimFlowMover_MaxFlowRate_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MaxFlowRate (const SimFlowMover_MaxFlowRate_optional& x)
      {
        this->SimFlowMover_MaxFlowRate_ = x;
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_AirInNodeName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirInNodeName () const
      {
        return this->SimFlowMover_AirInNodeName_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_AirInNodeName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirInNodeName ()
      {
        return this->SimFlowMover_AirInNodeName_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirInNodeName (const SimFlowMover_AirInNodeName_type& x)
      {
        this->SimFlowMover_AirInNodeName_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirInNodeName (const SimFlowMover_AirInNodeName_optional& x)
      {
        this->SimFlowMover_AirInNodeName_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirInNodeName (::std::auto_ptr< SimFlowMover_AirInNodeName_type > x)
      {
        this->SimFlowMover_AirInNodeName_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_AirOutNodeName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirOutNodeName () const
      {
        return this->SimFlowMover_AirOutNodeName_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_AirOutNodeName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirOutNodeName ()
      {
        return this->SimFlowMover_AirOutNodeName_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirOutNodeName (const SimFlowMover_AirOutNodeName_type& x)
      {
        this->SimFlowMover_AirOutNodeName_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirOutNodeName (const SimFlowMover_AirOutNodeName_optional& x)
      {
        this->SimFlowMover_AirOutNodeName_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_AirOutNodeName (::std::auto_ptr< SimFlowMover_AirOutNodeName_type > x)
      {
        this->SimFlowMover_AirOutNodeName_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_EndUseSubCat_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_EndUseSubCat () const
      {
        return this->SimFlowMover_EndUseSubCat_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_EndUseSubCat_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_EndUseSubCat ()
      {
        return this->SimFlowMover_EndUseSubCat_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_EndUseSubCat (const SimFlowMover_EndUseSubCat_type& x)
      {
        this->SimFlowMover_EndUseSubCat_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_EndUseSubCat (const SimFlowMover_EndUseSubCat_optional& x)
      {
        this->SimFlowMover_EndUseSubCat_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_EndUseSubCat (::std::auto_ptr< SimFlowMover_EndUseSubCat_type > x)
      {
        this->SimFlowMover_EndUseSubCat_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_FlowFracSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FlowFracSchedName () const
      {
        return this->SimFlowMover_FlowFracSchedName_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_FlowFracSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FlowFracSchedName ()
      {
        return this->SimFlowMover_FlowFracSchedName_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FlowFracSchedName (const SimFlowMover_FlowFracSchedName_type& x)
      {
        this->SimFlowMover_FlowFracSchedName_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FlowFracSchedName (const SimFlowMover_FlowFracSchedName_optional& x)
      {
        this->SimFlowMover_FlowFracSchedName_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_FlowFracSchedName (::std::auto_ptr< SimFlowMover_FlowFracSchedName_type > x)
      {
        this->SimFlowMover_FlowFracSchedName_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_SystemAvailabilityManagerCouplingMode_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_SystemAvailabilityManagerCouplingMode () const
      {
        return this->SimFlowMover_SystemAvailabilityManagerCouplingMode_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_SystemAvailabilityManagerCouplingMode_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_SystemAvailabilityManagerCouplingMode ()
      {
        return this->SimFlowMover_SystemAvailabilityManagerCouplingMode_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_SystemAvailabilityManagerCouplingMode (const SimFlowMover_SystemAvailabilityManagerCouplingMode_type& x)
      {
        this->SimFlowMover_SystemAvailabilityManagerCouplingMode_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_SystemAvailabilityManagerCouplingMode (const SimFlowMover_SystemAvailabilityManagerCouplingMode_optional& x)
      {
        this->SimFlowMover_SystemAvailabilityManagerCouplingMode_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_SystemAvailabilityManagerCouplingMode (::std::auto_ptr< SimFlowMover_SystemAvailabilityManagerCouplingMode_type > x)
      {
        this->SimFlowMover_SystemAvailabilityManagerCouplingMode_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_MinZoneTempLimitSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MinZoneTempLimitSchedName () const
      {
        return this->SimFlowMover_MinZoneTempLimitSchedName_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_MinZoneTempLimitSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MinZoneTempLimitSchedName ()
      {
        return this->SimFlowMover_MinZoneTempLimitSchedName_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MinZoneTempLimitSchedName (const SimFlowMover_MinZoneTempLimitSchedName_type& x)
      {
        this->SimFlowMover_MinZoneTempLimitSchedName_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MinZoneTempLimitSchedName (const SimFlowMover_MinZoneTempLimitSchedName_optional& x)
      {
        this->SimFlowMover_MinZoneTempLimitSchedName_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_MinZoneTempLimitSchedName (::std::auto_ptr< SimFlowMover_MinZoneTempLimitSchedName_type > x)
      {
        this->SimFlowMover_MinZoneTempLimitSchedName_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::SimFlowMover_BalancedExhaustFracSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_BalancedExhaustFracSchedName () const
      {
        return this->SimFlowMover_BalancedExhaustFracSchedName_;
      }

      SimFlowMover_Fan_ZoneExhaust::SimFlowMover_BalancedExhaustFracSchedName_optional& SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_BalancedExhaustFracSchedName ()
      {
        return this->SimFlowMover_BalancedExhaustFracSchedName_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_BalancedExhaustFracSchedName (const SimFlowMover_BalancedExhaustFracSchedName_type& x)
      {
        this->SimFlowMover_BalancedExhaustFracSchedName_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_BalancedExhaustFracSchedName (const SimFlowMover_BalancedExhaustFracSchedName_optional& x)
      {
        this->SimFlowMover_BalancedExhaustFracSchedName_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_BalancedExhaustFracSchedName (::std::auto_ptr< SimFlowMover_BalancedExhaustFracSchedName_type > x)
      {
        this->SimFlowMover_BalancedExhaustFracSchedName_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_Name_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_Name () const
      {
        return this->Airflow_MultiZone_ZoneExhstFan_Name_;
      }

      SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_Name_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_Name ()
      {
        return this->Airflow_MultiZone_ZoneExhstFan_Name_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_Name (const Airflow_MultiZone_ZoneExhstFan_Name_type& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_Name_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_Name (const Airflow_MultiZone_ZoneExhstFan_Name_optional& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_Name_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_Name (::std::auto_ptr< Airflow_MultiZone_ZoneExhstFan_Name_type > x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_Name_.set (x);
      }

      const SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond () const
      {
        return this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_;
      }

      SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond ()
      {
        return this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond (const Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_type& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond (const Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_optional& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_ = x;
      }

      const SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf () const
      {
        return this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_;
      }

      SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf ()
      {
        return this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf (const Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_type& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf (const Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_optional& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_ = x;
      }

      const SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_RefCrackCond_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_RefCrackCond () const
      {
        return this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_;
      }

      SimFlowMover_Fan_ZoneExhaust::Airflow_MultiZone_ZoneExhstFan_RefCrackCond_optional& SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_RefCrackCond ()
      {
        return this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_RefCrackCond (const Airflow_MultiZone_ZoneExhstFan_RefCrackCond_type& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_.set (x);
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_RefCrackCond (const Airflow_MultiZone_ZoneExhstFan_RefCrackCond_optional& x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_ = x;
      }

      void SimFlowMover_Fan_ZoneExhaust::
      Airflow_MultiZone_ZoneExhstFan_RefCrackCond (::std::auto_ptr< Airflow_MultiZone_ZoneExhstFan_RefCrackCond_type > x)
      {
        this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_.set (x);
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
      // SimFlowMover_Fan_ZoneExhaust
      //

      SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Fan_ZoneExhaust ()
      : ::schema::simxml::MepModel::SimFlowMover_Fan (),
        SimFlowMover_Name_ (this),
        SimFlowMover_AvailSchedName_ (this),
        SimFlowMover_FanTotalEff_ (this),
        SimFlowMover_PresRise_ (this),
        SimFlowMover_MaxFlowRate_ (this),
        SimFlowMover_AirInNodeName_ (this),
        SimFlowMover_AirOutNodeName_ (this),
        SimFlowMover_EndUseSubCat_ (this),
        SimFlowMover_FlowFracSchedName_ (this),
        SimFlowMover_SystemAvailabilityManagerCouplingMode_ (this),
        SimFlowMover_MinZoneTempLimitSchedName_ (this),
        SimFlowMover_BalancedExhaustFracSchedName_ (this),
        Airflow_MultiZone_ZoneExhstFan_Name_ (this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_ (this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_ (this),
        Airflow_MultiZone_ZoneExhstFan_RefCrackCond_ (this)
      {
      }

      SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Fan_ZoneExhaust (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowMover_Fan (RefId),
        SimFlowMover_Name_ (this),
        SimFlowMover_AvailSchedName_ (this),
        SimFlowMover_FanTotalEff_ (this),
        SimFlowMover_PresRise_ (this),
        SimFlowMover_MaxFlowRate_ (this),
        SimFlowMover_AirInNodeName_ (this),
        SimFlowMover_AirOutNodeName_ (this),
        SimFlowMover_EndUseSubCat_ (this),
        SimFlowMover_FlowFracSchedName_ (this),
        SimFlowMover_SystemAvailabilityManagerCouplingMode_ (this),
        SimFlowMover_MinZoneTempLimitSchedName_ (this),
        SimFlowMover_BalancedExhaustFracSchedName_ (this),
        Airflow_MultiZone_ZoneExhstFan_Name_ (this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_ (this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_ (this),
        Airflow_MultiZone_ZoneExhstFan_RefCrackCond_ (this)
      {
      }

      SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Fan_ZoneExhaust (const SimFlowMover_Fan_ZoneExhaust& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowMover_Fan (x, f, c),
        SimFlowMover_Name_ (x.SimFlowMover_Name_, f, this),
        SimFlowMover_AvailSchedName_ (x.SimFlowMover_AvailSchedName_, f, this),
        SimFlowMover_FanTotalEff_ (x.SimFlowMover_FanTotalEff_, f, this),
        SimFlowMover_PresRise_ (x.SimFlowMover_PresRise_, f, this),
        SimFlowMover_MaxFlowRate_ (x.SimFlowMover_MaxFlowRate_, f, this),
        SimFlowMover_AirInNodeName_ (x.SimFlowMover_AirInNodeName_, f, this),
        SimFlowMover_AirOutNodeName_ (x.SimFlowMover_AirOutNodeName_, f, this),
        SimFlowMover_EndUseSubCat_ (x.SimFlowMover_EndUseSubCat_, f, this),
        SimFlowMover_FlowFracSchedName_ (x.SimFlowMover_FlowFracSchedName_, f, this),
        SimFlowMover_SystemAvailabilityManagerCouplingMode_ (x.SimFlowMover_SystemAvailabilityManagerCouplingMode_, f, this),
        SimFlowMover_MinZoneTempLimitSchedName_ (x.SimFlowMover_MinZoneTempLimitSchedName_, f, this),
        SimFlowMover_BalancedExhaustFracSchedName_ (x.SimFlowMover_BalancedExhaustFracSchedName_, f, this),
        Airflow_MultiZone_ZoneExhstFan_Name_ (x.Airflow_MultiZone_ZoneExhstFan_Name_, f, this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_ (x.Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_, f, this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_ (x.Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_, f, this),
        Airflow_MultiZone_ZoneExhstFan_RefCrackCond_ (x.Airflow_MultiZone_ZoneExhstFan_RefCrackCond_, f, this)
      {
      }

      SimFlowMover_Fan_ZoneExhaust::
      SimFlowMover_Fan_ZoneExhaust (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowMover_Fan (e, f | ::xml_schema::flags::base, c),
        SimFlowMover_Name_ (this),
        SimFlowMover_AvailSchedName_ (this),
        SimFlowMover_FanTotalEff_ (this),
        SimFlowMover_PresRise_ (this),
        SimFlowMover_MaxFlowRate_ (this),
        SimFlowMover_AirInNodeName_ (this),
        SimFlowMover_AirOutNodeName_ (this),
        SimFlowMover_EndUseSubCat_ (this),
        SimFlowMover_FlowFracSchedName_ (this),
        SimFlowMover_SystemAvailabilityManagerCouplingMode_ (this),
        SimFlowMover_MinZoneTempLimitSchedName_ (this),
        SimFlowMover_BalancedExhaustFracSchedName_ (this),
        Airflow_MultiZone_ZoneExhstFan_Name_ (this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_ (this),
        Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_ (this),
        Airflow_MultiZone_ZoneExhstFan_RefCrackCond_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowMover_Fan_ZoneExhaust::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowMover_Fan::parse (p, f);

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

          // SimFlowMover_FlowFracSchedName
          //
          if (n.name () == "SimFlowMover_FlowFracSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_FlowFracSchedName_type > r (
              SimFlowMover_FlowFracSchedName_traits::create (i, f, this));

            if (!this->SimFlowMover_FlowFracSchedName_)
            {
              this->SimFlowMover_FlowFracSchedName_.set (r);
              continue;
            }
          }

          // SimFlowMover_SystemAvailabilityManagerCouplingMode
          //
          if (n.name () == "SimFlowMover_SystemAvailabilityManagerCouplingMode" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_SystemAvailabilityManagerCouplingMode_type > r (
              SimFlowMover_SystemAvailabilityManagerCouplingMode_traits::create (i, f, this));

            if (!this->SimFlowMover_SystemAvailabilityManagerCouplingMode_)
            {
              this->SimFlowMover_SystemAvailabilityManagerCouplingMode_.set (r);
              continue;
            }
          }

          // SimFlowMover_MinZoneTempLimitSchedName
          //
          if (n.name () == "SimFlowMover_MinZoneTempLimitSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_MinZoneTempLimitSchedName_type > r (
              SimFlowMover_MinZoneTempLimitSchedName_traits::create (i, f, this));

            if (!this->SimFlowMover_MinZoneTempLimitSchedName_)
            {
              this->SimFlowMover_MinZoneTempLimitSchedName_.set (r);
              continue;
            }
          }

          // SimFlowMover_BalancedExhaustFracSchedName
          //
          if (n.name () == "SimFlowMover_BalancedExhaustFracSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowMover_BalancedExhaustFracSchedName_type > r (
              SimFlowMover_BalancedExhaustFracSchedName_traits::create (i, f, this));

            if (!this->SimFlowMover_BalancedExhaustFracSchedName_)
            {
              this->SimFlowMover_BalancedExhaustFracSchedName_.set (r);
              continue;
            }
          }

          // Airflow_MultiZone_ZoneExhstFan_Name
          //
          if (n.name () == "Airflow_MultiZone_ZoneExhstFan_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Airflow_MultiZone_ZoneExhstFan_Name_type > r (
              Airflow_MultiZone_ZoneExhstFan_Name_traits::create (i, f, this));

            if (!this->Airflow_MultiZone_ZoneExhstFan_Name_)
            {
              this->Airflow_MultiZone_ZoneExhstFan_Name_.set (r);
              continue;
            }
          }

          // Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond
          //
          if (n.name () == "Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_)
            {
              this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_.set (Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_traits::create (i, f, this));
              continue;
            }
          }

          // Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf
          //
          if (n.name () == "Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_)
            {
              this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_.set (Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_traits::create (i, f, this));
              continue;
            }
          }

          // Airflow_MultiZone_ZoneExhstFan_RefCrackCond
          //
          if (n.name () == "Airflow_MultiZone_ZoneExhstFan_RefCrackCond" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Airflow_MultiZone_ZoneExhstFan_RefCrackCond_type > r (
              Airflow_MultiZone_ZoneExhstFan_RefCrackCond_traits::create (i, f, this));

            if (!this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_)
            {
              this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowMover_Fan_ZoneExhaust* SimFlowMover_Fan_ZoneExhaust::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowMover_Fan_ZoneExhaust (*this, f, c);
      }

      SimFlowMover_Fan_ZoneExhaust& SimFlowMover_Fan_ZoneExhaust::
      operator= (const SimFlowMover_Fan_ZoneExhaust& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowMover_Fan& > (*this) = x;
          this->SimFlowMover_Name_ = x.SimFlowMover_Name_;
          this->SimFlowMover_AvailSchedName_ = x.SimFlowMover_AvailSchedName_;
          this->SimFlowMover_FanTotalEff_ = x.SimFlowMover_FanTotalEff_;
          this->SimFlowMover_PresRise_ = x.SimFlowMover_PresRise_;
          this->SimFlowMover_MaxFlowRate_ = x.SimFlowMover_MaxFlowRate_;
          this->SimFlowMover_AirInNodeName_ = x.SimFlowMover_AirInNodeName_;
          this->SimFlowMover_AirOutNodeName_ = x.SimFlowMover_AirOutNodeName_;
          this->SimFlowMover_EndUseSubCat_ = x.SimFlowMover_EndUseSubCat_;
          this->SimFlowMover_FlowFracSchedName_ = x.SimFlowMover_FlowFracSchedName_;
          this->SimFlowMover_SystemAvailabilityManagerCouplingMode_ = x.SimFlowMover_SystemAvailabilityManagerCouplingMode_;
          this->SimFlowMover_MinZoneTempLimitSchedName_ = x.SimFlowMover_MinZoneTempLimitSchedName_;
          this->SimFlowMover_BalancedExhaustFracSchedName_ = x.SimFlowMover_BalancedExhaustFracSchedName_;
          this->Airflow_MultiZone_ZoneExhstFan_Name_ = x.Airflow_MultiZone_ZoneExhstFan_Name_;
          this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_ = x.Airflow_MultiZone_ZoneExhstFan_AirMassFlowCoefWhenZoneExhFanfAtRefCond_;
          this->Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_ = x.Airflow_MultiZone_ZoneExhstFan_AirMassFlowExptWhenZoneExhFanf_;
          this->Airflow_MultiZone_ZoneExhstFan_RefCrackCond_ = x.Airflow_MultiZone_ZoneExhstFan_RefCrackCond_;
        }

        return *this;
      }

      SimFlowMover_Fan_ZoneExhaust::
      ~SimFlowMover_Fan_ZoneExhaust ()
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

