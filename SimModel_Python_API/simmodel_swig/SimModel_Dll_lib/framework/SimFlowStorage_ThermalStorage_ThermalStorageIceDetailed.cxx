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

#include "SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed
      // 

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_Capacity_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_Capacity () const
      {
        return this->SimFlowSto_Capacity_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_Capacity_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_Capacity ()
      {
        return this->SimFlowSto_Capacity_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_Capacity (const SimFlowSto_Capacity_type& x)
      {
        this->SimFlowSto_Capacity_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_Capacity (const SimFlowSto_Capacity_optional& x)
      {
        this->SimFlowSto_Capacity_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_InNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_InNodeName () const
      {
        return this->SimFlowSto_InNodeName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_InNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_InNodeName ()
      {
        return this->SimFlowSto_InNodeName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_InNodeName (const SimFlowSto_InNodeName_type& x)
      {
        this->SimFlowSto_InNodeName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_InNodeName (const SimFlowSto_InNodeName_optional& x)
      {
        this->SimFlowSto_InNodeName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_InNodeName (::std::auto_ptr< SimFlowSto_InNodeName_type > x)
      {
        this->SimFlowSto_InNodeName_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_OutNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_OutNodeName () const
      {
        return this->SimFlowSto_OutNodeName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_OutNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_OutNodeName ()
      {
        return this->SimFlowSto_OutNodeName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_OutNodeName (const SimFlowSto_OutNodeName_type& x)
      {
        this->SimFlowSto_OutNodeName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_OutNodeName (const SimFlowSto_OutNodeName_optional& x)
      {
        this->SimFlowSto_OutNodeName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_OutNodeName (::std::auto_ptr< SimFlowSto_OutNodeName_type > x)
      {
        this->SimFlowSto_OutNodeName_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_AvailSchedName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_AvailSchedName () const
      {
        return this->SimFlowSto_AvailSchedName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_AvailSchedName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_AvailSchedName ()
      {
        return this->SimFlowSto_AvailSchedName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_AvailSchedName (const SimFlowSto_AvailSchedName_type& x)
      {
        this->SimFlowSto_AvailSchedName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_AvailSchedName (const SimFlowSto_AvailSchedName_optional& x)
      {
        this->SimFlowSto_AvailSchedName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_AvailSchedName (::std::auto_ptr< SimFlowSto_AvailSchedName_type > x)
      {
        this->SimFlowSto_AvailSchedName_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_DischargCurveObjType_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveObjType () const
      {
        return this->SimFlowSto_DischargCurveObjType_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_DischargCurveObjType_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveObjType ()
      {
        return this->SimFlowSto_DischargCurveObjType_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveObjType (const SimFlowSto_DischargCurveObjType_type& x)
      {
        this->SimFlowSto_DischargCurveObjType_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveObjType (const SimFlowSto_DischargCurveObjType_optional& x)
      {
        this->SimFlowSto_DischargCurveObjType_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveObjType (::std::auto_ptr< SimFlowSto_DischargCurveObjType_type > x)
      {
        this->SimFlowSto_DischargCurveObjType_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_DischargCurveName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveName () const
      {
        return this->SimFlowSto_DischargCurveName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_DischargCurveName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveName ()
      {
        return this->SimFlowSto_DischargCurveName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveName (const SimFlowSto_DischargCurveName_type& x)
      {
        this->SimFlowSto_DischargCurveName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveName (const SimFlowSto_DischargCurveName_optional& x)
      {
        this->SimFlowSto_DischargCurveName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_DischargCurveName (::std::auto_ptr< SimFlowSto_DischargCurveName_type > x)
      {
        this->SimFlowSto_DischargCurveName_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ChargingCurveObjType_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveObjType () const
      {
        return this->SimFlowSto_ChargingCurveObjType_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ChargingCurveObjType_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveObjType ()
      {
        return this->SimFlowSto_ChargingCurveObjType_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveObjType (const SimFlowSto_ChargingCurveObjType_type& x)
      {
        this->SimFlowSto_ChargingCurveObjType_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveObjType (const SimFlowSto_ChargingCurveObjType_optional& x)
      {
        this->SimFlowSto_ChargingCurveObjType_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveObjType (::std::auto_ptr< SimFlowSto_ChargingCurveObjType_type > x)
      {
        this->SimFlowSto_ChargingCurveObjType_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ChargingCurveName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveName () const
      {
        return this->SimFlowSto_ChargingCurveName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ChargingCurveName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveName ()
      {
        return this->SimFlowSto_ChargingCurveName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveName (const SimFlowSto_ChargingCurveName_type& x)
      {
        this->SimFlowSto_ChargingCurveName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveName (const SimFlowSto_ChargingCurveName_optional& x)
      {
        this->SimFlowSto_ChargingCurveName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ChargingCurveName (::std::auto_ptr< SimFlowSto_ChargingCurveName_type > x)
      {
        this->SimFlowSto_ChargingCurveName_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_TimestepTheCurveData_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TimestepTheCurveData () const
      {
        return this->SimFlowSto_TimestepTheCurveData_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_TimestepTheCurveData_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TimestepTheCurveData ()
      {
        return this->SimFlowSto_TimestepTheCurveData_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TimestepTheCurveData (const SimFlowSto_TimestepTheCurveData_type& x)
      {
        this->SimFlowSto_TimestepTheCurveData_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TimestepTheCurveData (const SimFlowSto_TimestepTheCurveData_optional& x)
      {
        this->SimFlowSto_TimestepTheCurveData_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ParasiticElecLoadDuringDischarg_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringDischarg () const
      {
        return this->SimFlowSto_ParasiticElecLoadDuringDischarg_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ParasiticElecLoadDuringDischarg_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringDischarg ()
      {
        return this->SimFlowSto_ParasiticElecLoadDuringDischarg_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringDischarg (const SimFlowSto_ParasiticElecLoadDuringDischarg_type& x)
      {
        this->SimFlowSto_ParasiticElecLoadDuringDischarg_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringDischarg (const SimFlowSto_ParasiticElecLoadDuringDischarg_optional& x)
      {
        this->SimFlowSto_ParasiticElecLoadDuringDischarg_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ParasiticElecLoadDuringCharging_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringCharging () const
      {
        return this->SimFlowSto_ParasiticElecLoadDuringCharging_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ParasiticElecLoadDuringCharging_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringCharging ()
      {
        return this->SimFlowSto_ParasiticElecLoadDuringCharging_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringCharging (const SimFlowSto_ParasiticElecLoadDuringCharging_type& x)
      {
        this->SimFlowSto_ParasiticElecLoadDuringCharging_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ParasiticElecLoadDuringCharging (const SimFlowSto_ParasiticElecLoadDuringCharging_optional& x)
      {
        this->SimFlowSto_ParasiticElecLoadDuringCharging_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_TankLossCoef_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TankLossCoef () const
      {
        return this->SimFlowSto_TankLossCoef_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_TankLossCoef_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TankLossCoef ()
      {
        return this->SimFlowSto_TankLossCoef_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TankLossCoef (const SimFlowSto_TankLossCoef_type& x)
      {
        this->SimFlowSto_TankLossCoef_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_TankLossCoef (const SimFlowSto_TankLossCoef_optional& x)
      {
        this->SimFlowSto_TankLossCoef_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_FreezingTempStorageMedium_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_FreezingTempStorageMedium () const
      {
        return this->SimFlowSto_FreezingTempStorageMedium_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_FreezingTempStorageMedium_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_FreezingTempStorageMedium ()
      {
        return this->SimFlowSto_FreezingTempStorageMedium_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_FreezingTempStorageMedium (const SimFlowSto_FreezingTempStorageMedium_type& x)
      {
        this->SimFlowSto_FreezingTempStorageMedium_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_FreezingTempStorageMedium (const SimFlowSto_FreezingTempStorageMedium_optional& x)
      {
        this->SimFlowSto_FreezingTempStorageMedium_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ThawProcessIndicator_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ThawProcessIndicator () const
      {
        return this->SimFlowSto_ThawProcessIndicator_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::SimFlowSto_ThawProcessIndicator_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ThawProcessIndicator ()
      {
        return this->SimFlowSto_ThawProcessIndicator_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ThawProcessIndicator (const SimFlowSto_ThawProcessIndicator_type& x)
      {
        this->SimFlowSto_ThawProcessIndicator_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ThawProcessIndicator (const SimFlowSto_ThawProcessIndicator_optional& x)
      {
        this->SimFlowSto_ThawProcessIndicator_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowSto_ThawProcessIndicator (::std::auto_ptr< SimFlowSto_ThawProcessIndicator_type > x)
      {
        this->SimFlowSto_ThawProcessIndicator_.set (x);
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
      // SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed
      //

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed ()
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (),
        SimFlowSto_Capacity_ (this),
        SimFlowSto_InNodeName_ (this),
        SimFlowSto_OutNodeName_ (this),
        SimFlowSto_AvailSchedName_ (this),
        SimFlowSto_DischargCurveObjType_ (this),
        SimFlowSto_DischargCurveName_ (this),
        SimFlowSto_ChargingCurveObjType_ (this),
        SimFlowSto_ChargingCurveName_ (this),
        SimFlowSto_TimestepTheCurveData_ (this),
        SimFlowSto_ParasiticElecLoadDuringDischarg_ (this),
        SimFlowSto_ParasiticElecLoadDuringCharging_ (this),
        SimFlowSto_TankLossCoef_ (this),
        SimFlowSto_FreezingTempStorageMedium_ (this),
        SimFlowSto_ThawProcessIndicator_ (this)
      {
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (RefId),
        SimFlowSto_Capacity_ (this),
        SimFlowSto_InNodeName_ (this),
        SimFlowSto_OutNodeName_ (this),
        SimFlowSto_AvailSchedName_ (this),
        SimFlowSto_DischargCurveObjType_ (this),
        SimFlowSto_DischargCurveName_ (this),
        SimFlowSto_ChargingCurveObjType_ (this),
        SimFlowSto_ChargingCurveName_ (this),
        SimFlowSto_TimestepTheCurveData_ (this),
        SimFlowSto_ParasiticElecLoadDuringDischarg_ (this),
        SimFlowSto_ParasiticElecLoadDuringCharging_ (this),
        SimFlowSto_TankLossCoef_ (this),
        SimFlowSto_FreezingTempStorageMedium_ (this),
        SimFlowSto_ThawProcessIndicator_ (this)
      {
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed (const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed& x,
                                                               ::xml_schema::flags f,
                                                               ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (x, f, c),
        SimFlowSto_Capacity_ (x.SimFlowSto_Capacity_, f, this),
        SimFlowSto_InNodeName_ (x.SimFlowSto_InNodeName_, f, this),
        SimFlowSto_OutNodeName_ (x.SimFlowSto_OutNodeName_, f, this),
        SimFlowSto_AvailSchedName_ (x.SimFlowSto_AvailSchedName_, f, this),
        SimFlowSto_DischargCurveObjType_ (x.SimFlowSto_DischargCurveObjType_, f, this),
        SimFlowSto_DischargCurveName_ (x.SimFlowSto_DischargCurveName_, f, this),
        SimFlowSto_ChargingCurveObjType_ (x.SimFlowSto_ChargingCurveObjType_, f, this),
        SimFlowSto_ChargingCurveName_ (x.SimFlowSto_ChargingCurveName_, f, this),
        SimFlowSto_TimestepTheCurveData_ (x.SimFlowSto_TimestepTheCurveData_, f, this),
        SimFlowSto_ParasiticElecLoadDuringDischarg_ (x.SimFlowSto_ParasiticElecLoadDuringDischarg_, f, this),
        SimFlowSto_ParasiticElecLoadDuringCharging_ (x.SimFlowSto_ParasiticElecLoadDuringCharging_, f, this),
        SimFlowSto_TankLossCoef_ (x.SimFlowSto_TankLossCoef_, f, this),
        SimFlowSto_FreezingTempStorageMedium_ (x.SimFlowSto_FreezingTempStorageMedium_, f, this),
        SimFlowSto_ThawProcessIndicator_ (x.SimFlowSto_ThawProcessIndicator_, f, this)
      {
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed (const ::xercesc::DOMElement& e,
                                                               ::xml_schema::flags f,
                                                               ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (e, f | ::xml_schema::flags::base, c),
        SimFlowSto_Capacity_ (this),
        SimFlowSto_InNodeName_ (this),
        SimFlowSto_OutNodeName_ (this),
        SimFlowSto_AvailSchedName_ (this),
        SimFlowSto_DischargCurveObjType_ (this),
        SimFlowSto_DischargCurveName_ (this),
        SimFlowSto_ChargingCurveObjType_ (this),
        SimFlowSto_ChargingCurveName_ (this),
        SimFlowSto_TimestepTheCurveData_ (this),
        SimFlowSto_ParasiticElecLoadDuringDischarg_ (this),
        SimFlowSto_ParasiticElecLoadDuringCharging_ (this),
        SimFlowSto_TankLossCoef_ (this),
        SimFlowSto_FreezingTempStorageMedium_ (this),
        SimFlowSto_ThawProcessIndicator_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowStorage_ThermalStorage::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowSto_Capacity
          //
          if (n.name () == "SimFlowSto_Capacity" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_Capacity_)
            {
              this->SimFlowSto_Capacity_.set (SimFlowSto_Capacity_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_InNodeName
          //
          if (n.name () == "SimFlowSto_InNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_InNodeName_type > r (
              SimFlowSto_InNodeName_traits::create (i, f, this));

            if (!this->SimFlowSto_InNodeName_)
            {
              this->SimFlowSto_InNodeName_.set (r);
              continue;
            }
          }

          // SimFlowSto_OutNodeName
          //
          if (n.name () == "SimFlowSto_OutNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_OutNodeName_type > r (
              SimFlowSto_OutNodeName_traits::create (i, f, this));

            if (!this->SimFlowSto_OutNodeName_)
            {
              this->SimFlowSto_OutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowSto_AvailSchedName
          //
          if (n.name () == "SimFlowSto_AvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_AvailSchedName_type > r (
              SimFlowSto_AvailSchedName_traits::create (i, f, this));

            if (!this->SimFlowSto_AvailSchedName_)
            {
              this->SimFlowSto_AvailSchedName_.set (r);
              continue;
            }
          }

          // SimFlowSto_DischargCurveObjType
          //
          if (n.name () == "SimFlowSto_DischargCurveObjType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_DischargCurveObjType_type > r (
              SimFlowSto_DischargCurveObjType_traits::create (i, f, this));

            if (!this->SimFlowSto_DischargCurveObjType_)
            {
              this->SimFlowSto_DischargCurveObjType_.set (r);
              continue;
            }
          }

          // SimFlowSto_DischargCurveName
          //
          if (n.name () == "SimFlowSto_DischargCurveName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_DischargCurveName_type > r (
              SimFlowSto_DischargCurveName_traits::create (i, f, this));

            if (!this->SimFlowSto_DischargCurveName_)
            {
              this->SimFlowSto_DischargCurveName_.set (r);
              continue;
            }
          }

          // SimFlowSto_ChargingCurveObjType
          //
          if (n.name () == "SimFlowSto_ChargingCurveObjType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_ChargingCurveObjType_type > r (
              SimFlowSto_ChargingCurveObjType_traits::create (i, f, this));

            if (!this->SimFlowSto_ChargingCurveObjType_)
            {
              this->SimFlowSto_ChargingCurveObjType_.set (r);
              continue;
            }
          }

          // SimFlowSto_ChargingCurveName
          //
          if (n.name () == "SimFlowSto_ChargingCurveName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_ChargingCurveName_type > r (
              SimFlowSto_ChargingCurveName_traits::create (i, f, this));

            if (!this->SimFlowSto_ChargingCurveName_)
            {
              this->SimFlowSto_ChargingCurveName_.set (r);
              continue;
            }
          }

          // SimFlowSto_TimestepTheCurveData
          //
          if (n.name () == "SimFlowSto_TimestepTheCurveData" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_TimestepTheCurveData_)
            {
              this->SimFlowSto_TimestepTheCurveData_.set (SimFlowSto_TimestepTheCurveData_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_ParasiticElecLoadDuringDischarg
          //
          if (n.name () == "SimFlowSto_ParasiticElecLoadDuringDischarg" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_ParasiticElecLoadDuringDischarg_)
            {
              this->SimFlowSto_ParasiticElecLoadDuringDischarg_.set (SimFlowSto_ParasiticElecLoadDuringDischarg_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_ParasiticElecLoadDuringCharging
          //
          if (n.name () == "SimFlowSto_ParasiticElecLoadDuringCharging" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_ParasiticElecLoadDuringCharging_)
            {
              this->SimFlowSto_ParasiticElecLoadDuringCharging_.set (SimFlowSto_ParasiticElecLoadDuringCharging_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_TankLossCoef
          //
          if (n.name () == "SimFlowSto_TankLossCoef" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_TankLossCoef_)
            {
              this->SimFlowSto_TankLossCoef_.set (SimFlowSto_TankLossCoef_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_FreezingTempStorageMedium
          //
          if (n.name () == "SimFlowSto_FreezingTempStorageMedium" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_FreezingTempStorageMedium_)
            {
              this->SimFlowSto_FreezingTempStorageMedium_.set (SimFlowSto_FreezingTempStorageMedium_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_ThawProcessIndicator
          //
          if (n.name () == "SimFlowSto_ThawProcessIndicator" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_ThawProcessIndicator_type > r (
              SimFlowSto_ThawProcessIndicator_traits::create (i, f, this));

            if (!this->SimFlowSto_ThawProcessIndicator_)
            {
              this->SimFlowSto_ThawProcessIndicator_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed* SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed (*this, f, c);
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed& SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      operator= (const SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage& > (*this) = x;
          this->SimFlowSto_Capacity_ = x.SimFlowSto_Capacity_;
          this->SimFlowSto_InNodeName_ = x.SimFlowSto_InNodeName_;
          this->SimFlowSto_OutNodeName_ = x.SimFlowSto_OutNodeName_;
          this->SimFlowSto_AvailSchedName_ = x.SimFlowSto_AvailSchedName_;
          this->SimFlowSto_DischargCurveObjType_ = x.SimFlowSto_DischargCurveObjType_;
          this->SimFlowSto_DischargCurveName_ = x.SimFlowSto_DischargCurveName_;
          this->SimFlowSto_ChargingCurveObjType_ = x.SimFlowSto_ChargingCurveObjType_;
          this->SimFlowSto_ChargingCurveName_ = x.SimFlowSto_ChargingCurveName_;
          this->SimFlowSto_TimestepTheCurveData_ = x.SimFlowSto_TimestepTheCurveData_;
          this->SimFlowSto_ParasiticElecLoadDuringDischarg_ = x.SimFlowSto_ParasiticElecLoadDuringDischarg_;
          this->SimFlowSto_ParasiticElecLoadDuringCharging_ = x.SimFlowSto_ParasiticElecLoadDuringCharging_;
          this->SimFlowSto_TankLossCoef_ = x.SimFlowSto_TankLossCoef_;
          this->SimFlowSto_FreezingTempStorageMedium_ = x.SimFlowSto_FreezingTempStorageMedium_;
          this->SimFlowSto_ThawProcessIndicator_ = x.SimFlowSto_ThawProcessIndicator_;
        }

        return *this;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed::
      ~SimFlowStorage_ThermalStorage_ThermalStorageIceDetailed ()
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

