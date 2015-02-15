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

#include "SimBuilding_Building.hxx"

#include "logical.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimBuilding_Building
      // 

      const SimBuilding_Building::ElevationOfTerrain_optional& SimBuilding_Building::
      ElevationOfTerrain () const
      {
        return this->ElevationOfTerrain_;
      }

      SimBuilding_Building::ElevationOfTerrain_optional& SimBuilding_Building::
      ElevationOfTerrain ()
      {
        return this->ElevationOfTerrain_;
      }

      void SimBuilding_Building::
      ElevationOfTerrain (const ElevationOfTerrain_type& x)
      {
        this->ElevationOfTerrain_.set (x);
      }

      void SimBuilding_Building::
      ElevationOfTerrain (const ElevationOfTerrain_optional& x)
      {
        this->ElevationOfTerrain_ = x;
      }

      const SimBuilding_Building::BuildingAddress_optional& SimBuilding_Building::
      BuildingAddress () const
      {
        return this->BuildingAddress_;
      }

      SimBuilding_Building::BuildingAddress_optional& SimBuilding_Building::
      BuildingAddress ()
      {
        return this->BuildingAddress_;
      }

      void SimBuilding_Building::
      BuildingAddress (const BuildingAddress_type& x)
      {
        this->BuildingAddress_.set (x);
      }

      void SimBuilding_Building::
      BuildingAddress (const BuildingAddress_optional& x)
      {
        this->BuildingAddress_ = x;
      }

      void SimBuilding_Building::
      BuildingAddress (::std::auto_ptr< BuildingAddress_type > x)
      {
        this->BuildingAddress_.set (x);
      }

      const SimBuilding_Building::BuildingOccupancyType_optional& SimBuilding_Building::
      BuildingOccupancyType () const
      {
        return this->BuildingOccupancyType_;
      }

      SimBuilding_Building::BuildingOccupancyType_optional& SimBuilding_Building::
      BuildingOccupancyType ()
      {
        return this->BuildingOccupancyType_;
      }

      void SimBuilding_Building::
      BuildingOccupancyType (const BuildingOccupancyType_type& x)
      {
        this->BuildingOccupancyType_.set (x);
      }

      void SimBuilding_Building::
      BuildingOccupancyType (const BuildingOccupancyType_optional& x)
      {
        this->BuildingOccupancyType_ = x;
      }

      void SimBuilding_Building::
      BuildingOccupancyType (::std::auto_ptr< BuildingOccupancyType_type > x)
      {
        this->BuildingOccupancyType_.set (x);
      }

      const SimBuilding_Building::BuildingGrossPlannedArea_optional& SimBuilding_Building::
      BuildingGrossPlannedArea () const
      {
        return this->BuildingGrossPlannedArea_;
      }

      SimBuilding_Building::BuildingGrossPlannedArea_optional& SimBuilding_Building::
      BuildingGrossPlannedArea ()
      {
        return this->BuildingGrossPlannedArea_;
      }

      void SimBuilding_Building::
      BuildingGrossPlannedArea (const BuildingGrossPlannedArea_type& x)
      {
        this->BuildingGrossPlannedArea_.set (x);
      }

      void SimBuilding_Building::
      BuildingGrossPlannedArea (const BuildingGrossPlannedArea_optional& x)
      {
        this->BuildingGrossPlannedArea_ = x;
      }

      const SimBuilding_Building::BuildingNumberofStoreys_optional& SimBuilding_Building::
      BuildingNumberofStoreys () const
      {
        return this->BuildingNumberofStoreys_;
      }

      SimBuilding_Building::BuildingNumberofStoreys_optional& SimBuilding_Building::
      BuildingNumberofStoreys ()
      {
        return this->BuildingNumberofStoreys_;
      }

      void SimBuilding_Building::
      BuildingNumberofStoreys (const BuildingNumberofStoreys_type& x)
      {
        this->BuildingNumberofStoreys_.set (x);
      }

      void SimBuilding_Building::
      BuildingNumberofStoreys (const BuildingNumberofStoreys_optional& x)
      {
        this->BuildingNumberofStoreys_ = x;
      }

      const SimBuilding_Building::BuildingYearOfConstruction_optional& SimBuilding_Building::
      BuildingYearOfConstruction () const
      {
        return this->BuildingYearOfConstruction_;
      }

      SimBuilding_Building::BuildingYearOfConstruction_optional& SimBuilding_Building::
      BuildingYearOfConstruction ()
      {
        return this->BuildingYearOfConstruction_;
      }

      void SimBuilding_Building::
      BuildingYearOfConstruction (const BuildingYearOfConstruction_type& x)
      {
        this->BuildingYearOfConstruction_.set (x);
      }

      void SimBuilding_Building::
      BuildingYearOfConstruction (const BuildingYearOfConstruction_optional& x)
      {
        this->BuildingYearOfConstruction_ = x;
      }

      void SimBuilding_Building::
      BuildingYearOfConstruction (::std::auto_ptr< BuildingYearOfConstruction_type > x)
      {
        this->BuildingYearOfConstruction_.set (x);
      }

      const SimBuilding_Building::BuildingisLandmarked_optional& SimBuilding_Building::
      BuildingisLandmarked () const
      {
        return this->BuildingisLandmarked_;
      }

      SimBuilding_Building::BuildingisLandmarked_optional& SimBuilding_Building::
      BuildingisLandmarked ()
      {
        return this->BuildingisLandmarked_;
      }

      void SimBuilding_Building::
      BuildingisLandmarked (const BuildingisLandmarked_type& x)
      {
        this->BuildingisLandmarked_.set (x);
      }

      void SimBuilding_Building::
      BuildingisLandmarked (const BuildingisLandmarked_optional& x)
      {
        this->BuildingisLandmarked_ = x;
      }

      void SimBuilding_Building::
      BuildingisLandmarked (::std::auto_ptr< BuildingisLandmarked_type > x)
      {
        this->BuildingisLandmarked_.set (x);
      }

      const SimBuilding_Building::BuildingEnergyTargetUnits_optional& SimBuilding_Building::
      BuildingEnergyTargetUnits () const
      {
        return this->BuildingEnergyTargetUnits_;
      }

      SimBuilding_Building::BuildingEnergyTargetUnits_optional& SimBuilding_Building::
      BuildingEnergyTargetUnits ()
      {
        return this->BuildingEnergyTargetUnits_;
      }

      void SimBuilding_Building::
      BuildingEnergyTargetUnits (const BuildingEnergyTargetUnits_type& x)
      {
        this->BuildingEnergyTargetUnits_.set (x);
      }

      void SimBuilding_Building::
      BuildingEnergyTargetUnits (const BuildingEnergyTargetUnits_optional& x)
      {
        this->BuildingEnergyTargetUnits_ = x;
      }

      void SimBuilding_Building::
      BuildingEnergyTargetUnits (::std::auto_ptr< BuildingEnergyTargetUnits_type > x)
      {
        this->BuildingEnergyTargetUnits_.set (x);
      }

      const SimBuilding_Building::BuildingEnergyTargetValue_optional& SimBuilding_Building::
      BuildingEnergyTargetValue () const
      {
        return this->BuildingEnergyTargetValue_;
      }

      SimBuilding_Building::BuildingEnergyTargetValue_optional& SimBuilding_Building::
      BuildingEnergyTargetValue ()
      {
        return this->BuildingEnergyTargetValue_;
      }

      void SimBuilding_Building::
      BuildingEnergyTargetValue (const BuildingEnergyTargetValue_type& x)
      {
        this->BuildingEnergyTargetValue_.set (x);
      }

      void SimBuilding_Building::
      BuildingEnergyTargetValue (const BuildingEnergyTargetValue_optional& x)
      {
        this->BuildingEnergyTargetValue_ = x;
      }

      const SimBuilding_Building::BuildingHeight_optional& SimBuilding_Building::
      BuildingHeight () const
      {
        return this->BuildingHeight_;
      }

      SimBuilding_Building::BuildingHeight_optional& SimBuilding_Building::
      BuildingHeight ()
      {
        return this->BuildingHeight_;
      }

      void SimBuilding_Building::
      BuildingHeight (const BuildingHeight_type& x)
      {
        this->BuildingHeight_.set (x);
      }

      void SimBuilding_Building::
      BuildingHeight (const BuildingHeight_optional& x)
      {
        this->BuildingHeight_ = x;
      }

      const SimBuilding_Building::BuildingGrossFloorArea_optional& SimBuilding_Building::
      BuildingGrossFloorArea () const
      {
        return this->BuildingGrossFloorArea_;
      }

      SimBuilding_Building::BuildingGrossFloorArea_optional& SimBuilding_Building::
      BuildingGrossFloorArea ()
      {
        return this->BuildingGrossFloorArea_;
      }

      void SimBuilding_Building::
      BuildingGrossFloorArea (const BuildingGrossFloorArea_type& x)
      {
        this->BuildingGrossFloorArea_.set (x);
      }

      void SimBuilding_Building::
      BuildingGrossFloorArea (const BuildingGrossFloorArea_optional& x)
      {
        this->BuildingGrossFloorArea_ = x;
      }

      const SimBuilding_Building::ClassRef_ConstEntByFunction_optional& SimBuilding_Building::
      ClassRef_ConstEntByFunction () const
      {
        return this->ClassRef_ConstEntByFunction_;
      }

      SimBuilding_Building::ClassRef_ConstEntByFunction_optional& SimBuilding_Building::
      ClassRef_ConstEntByFunction ()
      {
        return this->ClassRef_ConstEntByFunction_;
      }

      void SimBuilding_Building::
      ClassRef_ConstEntByFunction (const ClassRef_ConstEntByFunction_type& x)
      {
        this->ClassRef_ConstEntByFunction_.set (x);
      }

      void SimBuilding_Building::
      ClassRef_ConstEntByFunction (const ClassRef_ConstEntByFunction_optional& x)
      {
        this->ClassRef_ConstEntByFunction_ = x;
      }

      void SimBuilding_Building::
      ClassRef_ConstEntByFunction (::std::auto_ptr< ClassRef_ConstEntByFunction_type > x)
      {
        this->ClassRef_ConstEntByFunction_.set (x);
      }

      const SimBuilding_Building::BuildingInSpatialContainer_optional& SimBuilding_Building::
      BuildingInSpatialContainer () const
      {
        return this->BuildingInSpatialContainer_;
      }

      SimBuilding_Building::BuildingInSpatialContainer_optional& SimBuilding_Building::
      BuildingInSpatialContainer ()
      {
        return this->BuildingInSpatialContainer_;
      }

      void SimBuilding_Building::
      BuildingInSpatialContainer (const BuildingInSpatialContainer_type& x)
      {
        this->BuildingInSpatialContainer_.set (x);
      }

      void SimBuilding_Building::
      BuildingInSpatialContainer (const BuildingInSpatialContainer_optional& x)
      {
        this->BuildingInSpatialContainer_ = x;
      }

      void SimBuilding_Building::
      BuildingInSpatialContainer (::std::auto_ptr< BuildingInSpatialContainer_type > x)
      {
        this->BuildingInSpatialContainer_.set (x);
      }

      const SimBuilding_Building::SimBuilding_NorthAxis_optional& SimBuilding_Building::
      SimBuilding_NorthAxis () const
      {
        return this->SimBuilding_NorthAxis_;
      }

      SimBuilding_Building::SimBuilding_NorthAxis_optional& SimBuilding_Building::
      SimBuilding_NorthAxis ()
      {
        return this->SimBuilding_NorthAxis_;
      }

      void SimBuilding_Building::
      SimBuilding_NorthAxis (const SimBuilding_NorthAxis_type& x)
      {
        this->SimBuilding_NorthAxis_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_NorthAxis (const SimBuilding_NorthAxis_optional& x)
      {
        this->SimBuilding_NorthAxis_ = x;
      }

      const SimBuilding_Building::SimBuilding_Terrain_optional& SimBuilding_Building::
      SimBuilding_Terrain () const
      {
        return this->SimBuilding_Terrain_;
      }

      SimBuilding_Building::SimBuilding_Terrain_optional& SimBuilding_Building::
      SimBuilding_Terrain ()
      {
        return this->SimBuilding_Terrain_;
      }

      void SimBuilding_Building::
      SimBuilding_Terrain (const SimBuilding_Terrain_type& x)
      {
        this->SimBuilding_Terrain_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_Terrain (const SimBuilding_Terrain_optional& x)
      {
        this->SimBuilding_Terrain_ = x;
      }

      void SimBuilding_Building::
      SimBuilding_Terrain (::std::auto_ptr< SimBuilding_Terrain_type > x)
      {
        this->SimBuilding_Terrain_.set (x);
      }

      const SimBuilding_Building::SimBuilding_LoadsConvergTolVal_optional& SimBuilding_Building::
      SimBuilding_LoadsConvergTolVal () const
      {
        return this->SimBuilding_LoadsConvergTolVal_;
      }

      SimBuilding_Building::SimBuilding_LoadsConvergTolVal_optional& SimBuilding_Building::
      SimBuilding_LoadsConvergTolVal ()
      {
        return this->SimBuilding_LoadsConvergTolVal_;
      }

      void SimBuilding_Building::
      SimBuilding_LoadsConvergTolVal (const SimBuilding_LoadsConvergTolVal_type& x)
      {
        this->SimBuilding_LoadsConvergTolVal_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_LoadsConvergTolVal (const SimBuilding_LoadsConvergTolVal_optional& x)
      {
        this->SimBuilding_LoadsConvergTolVal_ = x;
      }

      const SimBuilding_Building::SimBuilding_TempConvergTolVal_optional& SimBuilding_Building::
      SimBuilding_TempConvergTolVal () const
      {
        return this->SimBuilding_TempConvergTolVal_;
      }

      SimBuilding_Building::SimBuilding_TempConvergTolVal_optional& SimBuilding_Building::
      SimBuilding_TempConvergTolVal ()
      {
        return this->SimBuilding_TempConvergTolVal_;
      }

      void SimBuilding_Building::
      SimBuilding_TempConvergTolVal (const SimBuilding_TempConvergTolVal_type& x)
      {
        this->SimBuilding_TempConvergTolVal_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_TempConvergTolVal (const SimBuilding_TempConvergTolVal_optional& x)
      {
        this->SimBuilding_TempConvergTolVal_ = x;
      }

      const SimBuilding_Building::SimBuilding_SolarDist_optional& SimBuilding_Building::
      SimBuilding_SolarDist () const
      {
        return this->SimBuilding_SolarDist_;
      }

      SimBuilding_Building::SimBuilding_SolarDist_optional& SimBuilding_Building::
      SimBuilding_SolarDist ()
      {
        return this->SimBuilding_SolarDist_;
      }

      void SimBuilding_Building::
      SimBuilding_SolarDist (const SimBuilding_SolarDist_type& x)
      {
        this->SimBuilding_SolarDist_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_SolarDist (const SimBuilding_SolarDist_optional& x)
      {
        this->SimBuilding_SolarDist_ = x;
      }

      void SimBuilding_Building::
      SimBuilding_SolarDist (::std::auto_ptr< SimBuilding_SolarDist_type > x)
      {
        this->SimBuilding_SolarDist_.set (x);
      }

      const SimBuilding_Building::SimBuilding_MaxNumWarmupDays_optional& SimBuilding_Building::
      SimBuilding_MaxNumWarmupDays () const
      {
        return this->SimBuilding_MaxNumWarmupDays_;
      }

      SimBuilding_Building::SimBuilding_MaxNumWarmupDays_optional& SimBuilding_Building::
      SimBuilding_MaxNumWarmupDays ()
      {
        return this->SimBuilding_MaxNumWarmupDays_;
      }

      void SimBuilding_Building::
      SimBuilding_MaxNumWarmupDays (const SimBuilding_MaxNumWarmupDays_type& x)
      {
        this->SimBuilding_MaxNumWarmupDays_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_MaxNumWarmupDays (const SimBuilding_MaxNumWarmupDays_optional& x)
      {
        this->SimBuilding_MaxNumWarmupDays_ = x;
      }

      const SimBuilding_Building::SimBuilding_MinNumberWarmupDays_optional& SimBuilding_Building::
      SimBuilding_MinNumberWarmupDays () const
      {
        return this->SimBuilding_MinNumberWarmupDays_;
      }

      SimBuilding_Building::SimBuilding_MinNumberWarmupDays_optional& SimBuilding_Building::
      SimBuilding_MinNumberWarmupDays ()
      {
        return this->SimBuilding_MinNumberWarmupDays_;
      }

      void SimBuilding_Building::
      SimBuilding_MinNumberWarmupDays (const SimBuilding_MinNumberWarmupDays_type& x)
      {
        this->SimBuilding_MinNumberWarmupDays_.set (x);
      }

      void SimBuilding_Building::
      SimBuilding_MinNumberWarmupDays (const SimBuilding_MinNumberWarmupDays_optional& x)
      {
        this->SimBuilding_MinNumberWarmupDays_ = x;
      }

      const SimBuilding_Building::RoofIrrigation_IrrigationModelType_optional& SimBuilding_Building::
      RoofIrrigation_IrrigationModelType () const
      {
        return this->RoofIrrigation_IrrigationModelType_;
      }

      SimBuilding_Building::RoofIrrigation_IrrigationModelType_optional& SimBuilding_Building::
      RoofIrrigation_IrrigationModelType ()
      {
        return this->RoofIrrigation_IrrigationModelType_;
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationModelType (const RoofIrrigation_IrrigationModelType_type& x)
      {
        this->RoofIrrigation_IrrigationModelType_.set (x);
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationModelType (const RoofIrrigation_IrrigationModelType_optional& x)
      {
        this->RoofIrrigation_IrrigationModelType_ = x;
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationModelType (::std::auto_ptr< RoofIrrigation_IrrigationModelType_type > x)
      {
        this->RoofIrrigation_IrrigationModelType_.set (x);
      }

      const SimBuilding_Building::RoofIrrigation_IrrigationRateSchedName_optional& SimBuilding_Building::
      RoofIrrigation_IrrigationRateSchedName () const
      {
        return this->RoofIrrigation_IrrigationRateSchedName_;
      }

      SimBuilding_Building::RoofIrrigation_IrrigationRateSchedName_optional& SimBuilding_Building::
      RoofIrrigation_IrrigationRateSchedName ()
      {
        return this->RoofIrrigation_IrrigationRateSchedName_;
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationRateSchedName (const RoofIrrigation_IrrigationRateSchedName_type& x)
      {
        this->RoofIrrigation_IrrigationRateSchedName_.set (x);
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationRateSchedName (const RoofIrrigation_IrrigationRateSchedName_optional& x)
      {
        this->RoofIrrigation_IrrigationRateSchedName_ = x;
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationRateSchedName (::std::auto_ptr< RoofIrrigation_IrrigationRateSchedName_type > x)
      {
        this->RoofIrrigation_IrrigationRateSchedName_.set (x);
      }

      const SimBuilding_Building::RoofIrrigation_IrrigationMaxSaturatThreshold_optional& SimBuilding_Building::
      RoofIrrigation_IrrigationMaxSaturatThreshold () const
      {
        return this->RoofIrrigation_IrrigationMaxSaturatThreshold_;
      }

      SimBuilding_Building::RoofIrrigation_IrrigationMaxSaturatThreshold_optional& SimBuilding_Building::
      RoofIrrigation_IrrigationMaxSaturatThreshold ()
      {
        return this->RoofIrrigation_IrrigationMaxSaturatThreshold_;
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationMaxSaturatThreshold (const RoofIrrigation_IrrigationMaxSaturatThreshold_type& x)
      {
        this->RoofIrrigation_IrrigationMaxSaturatThreshold_.set (x);
      }

      void SimBuilding_Building::
      RoofIrrigation_IrrigationMaxSaturatThreshold (const RoofIrrigation_IrrigationMaxSaturatThreshold_optional& x)
      {
        this->RoofIrrigation_IrrigationMaxSaturatThreshold_ = x;
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
    namespace BuildingModel
    {
      // SimBuilding_Building
      //

      SimBuilding_Building::
      SimBuilding_Building (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimBuilding (RefId),
        ElevationOfTerrain_ (this),
        BuildingAddress_ (this),
        BuildingOccupancyType_ (this),
        BuildingGrossPlannedArea_ (this),
        BuildingNumberofStoreys_ (this),
        BuildingYearOfConstruction_ (this),
        BuildingisLandmarked_ (this),
        BuildingEnergyTargetUnits_ (this),
        BuildingEnergyTargetValue_ (this),
        BuildingHeight_ (this),
        BuildingGrossFloorArea_ (this),
        ClassRef_ConstEntByFunction_ (this),
        BuildingInSpatialContainer_ (this),
        SimBuilding_NorthAxis_ (this),
        SimBuilding_Terrain_ (this),
        SimBuilding_LoadsConvergTolVal_ (this),
        SimBuilding_TempConvergTolVal_ (this),
        SimBuilding_SolarDist_ (this),
        SimBuilding_MaxNumWarmupDays_ (this),
        SimBuilding_MinNumberWarmupDays_ (this),
        RoofIrrigation_IrrigationModelType_ (this),
        RoofIrrigation_IrrigationRateSchedName_ (this),
        RoofIrrigation_IrrigationMaxSaturatThreshold_ (this)
      {
      }

      SimBuilding_Building::
      SimBuilding_Building (const SimBuilding_Building& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimBuilding (x, f, c),
        ElevationOfTerrain_ (x.ElevationOfTerrain_, f, this),
        BuildingAddress_ (x.BuildingAddress_, f, this),
        BuildingOccupancyType_ (x.BuildingOccupancyType_, f, this),
        BuildingGrossPlannedArea_ (x.BuildingGrossPlannedArea_, f, this),
        BuildingNumberofStoreys_ (x.BuildingNumberofStoreys_, f, this),
        BuildingYearOfConstruction_ (x.BuildingYearOfConstruction_, f, this),
        BuildingisLandmarked_ (x.BuildingisLandmarked_, f, this),
        BuildingEnergyTargetUnits_ (x.BuildingEnergyTargetUnits_, f, this),
        BuildingEnergyTargetValue_ (x.BuildingEnergyTargetValue_, f, this),
        BuildingHeight_ (x.BuildingHeight_, f, this),
        BuildingGrossFloorArea_ (x.BuildingGrossFloorArea_, f, this),
        ClassRef_ConstEntByFunction_ (x.ClassRef_ConstEntByFunction_, f, this),
        BuildingInSpatialContainer_ (x.BuildingInSpatialContainer_, f, this),
        SimBuilding_NorthAxis_ (x.SimBuilding_NorthAxis_, f, this),
        SimBuilding_Terrain_ (x.SimBuilding_Terrain_, f, this),
        SimBuilding_LoadsConvergTolVal_ (x.SimBuilding_LoadsConvergTolVal_, f, this),
        SimBuilding_TempConvergTolVal_ (x.SimBuilding_TempConvergTolVal_, f, this),
        SimBuilding_SolarDist_ (x.SimBuilding_SolarDist_, f, this),
        SimBuilding_MaxNumWarmupDays_ (x.SimBuilding_MaxNumWarmupDays_, f, this),
        SimBuilding_MinNumberWarmupDays_ (x.SimBuilding_MinNumberWarmupDays_, f, this),
        RoofIrrigation_IrrigationModelType_ (x.RoofIrrigation_IrrigationModelType_, f, this),
        RoofIrrigation_IrrigationRateSchedName_ (x.RoofIrrigation_IrrigationRateSchedName_, f, this),
        RoofIrrigation_IrrigationMaxSaturatThreshold_ (x.RoofIrrigation_IrrigationMaxSaturatThreshold_, f, this)
      {
      }

      SimBuilding_Building::
      SimBuilding_Building (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimBuilding (e, f | ::xml_schema::flags::base, c),
        ElevationOfTerrain_ (this),
        BuildingAddress_ (this),
        BuildingOccupancyType_ (this),
        BuildingGrossPlannedArea_ (this),
        BuildingNumberofStoreys_ (this),
        BuildingYearOfConstruction_ (this),
        BuildingisLandmarked_ (this),
        BuildingEnergyTargetUnits_ (this),
        BuildingEnergyTargetValue_ (this),
        BuildingHeight_ (this),
        BuildingGrossFloorArea_ (this),
        ClassRef_ConstEntByFunction_ (this),
        BuildingInSpatialContainer_ (this),
        SimBuilding_NorthAxis_ (this),
        SimBuilding_Terrain_ (this),
        SimBuilding_LoadsConvergTolVal_ (this),
        SimBuilding_TempConvergTolVal_ (this),
        SimBuilding_SolarDist_ (this),
        SimBuilding_MaxNumWarmupDays_ (this),
        SimBuilding_MinNumberWarmupDays_ (this),
        RoofIrrigation_IrrigationModelType_ (this),
        RoofIrrigation_IrrigationRateSchedName_ (this),
        RoofIrrigation_IrrigationMaxSaturatThreshold_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBuilding_Building::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimBuilding::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ElevationOfTerrain
          //
          if (n.name () == "ElevationOfTerrain" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->ElevationOfTerrain_)
            {
              this->ElevationOfTerrain_.set (ElevationOfTerrain_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingAddress
          //
          if (n.name () == "BuildingAddress" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< BuildingAddress_type > r (
              BuildingAddress_traits::create (i, f, this));

            if (!this->BuildingAddress_)
            {
              this->BuildingAddress_.set (r);
              continue;
            }
          }

          // BuildingOccupancyType
          //
          if (n.name () == "BuildingOccupancyType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< BuildingOccupancyType_type > r (
              BuildingOccupancyType_traits::create (i, f, this));

            if (!this->BuildingOccupancyType_)
            {
              this->BuildingOccupancyType_.set (r);
              continue;
            }
          }

          // BuildingGrossPlannedArea
          //
          if (n.name () == "BuildingGrossPlannedArea" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->BuildingGrossPlannedArea_)
            {
              this->BuildingGrossPlannedArea_.set (BuildingGrossPlannedArea_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingNumberofStoreys
          //
          if (n.name () == "BuildingNumberofStoreys" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->BuildingNumberofStoreys_)
            {
              this->BuildingNumberofStoreys_.set (BuildingNumberofStoreys_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingYearOfConstruction
          //
          if (n.name () == "BuildingYearOfConstruction" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< BuildingYearOfConstruction_type > r (
              BuildingYearOfConstruction_traits::create (i, f, this));

            if (!this->BuildingYearOfConstruction_)
            {
              this->BuildingYearOfConstruction_.set (r);
              continue;
            }
          }

          // BuildingisLandmarked
          //
          if (n.name () == "BuildingisLandmarked" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< BuildingisLandmarked_type > r (
              BuildingisLandmarked_traits::create (i, f, this));

            if (!this->BuildingisLandmarked_)
            {
              this->BuildingisLandmarked_.set (r);
              continue;
            }
          }

          // BuildingEnergyTargetUnits
          //
          if (n.name () == "BuildingEnergyTargetUnits" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< BuildingEnergyTargetUnits_type > r (
              BuildingEnergyTargetUnits_traits::create (i, f, this));

            if (!this->BuildingEnergyTargetUnits_)
            {
              this->BuildingEnergyTargetUnits_.set (r);
              continue;
            }
          }

          // BuildingEnergyTargetValue
          //
          if (n.name () == "BuildingEnergyTargetValue" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->BuildingEnergyTargetValue_)
            {
              this->BuildingEnergyTargetValue_.set (BuildingEnergyTargetValue_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingHeight
          //
          if (n.name () == "BuildingHeight" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->BuildingHeight_)
            {
              this->BuildingHeight_.set (BuildingHeight_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingGrossFloorArea
          //
          if (n.name () == "BuildingGrossFloorArea" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->BuildingGrossFloorArea_)
            {
              this->BuildingGrossFloorArea_.set (BuildingGrossFloorArea_traits::create (i, f, this));
              continue;
            }
          }

          // ClassRef_ConstEntByFunction
          //
          if (n.name () == "ClassRef_ConstEntByFunction" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ClassRef_ConstEntByFunction_type > r (
              ClassRef_ConstEntByFunction_traits::create (i, f, this));

            if (!this->ClassRef_ConstEntByFunction_)
            {
              this->ClassRef_ConstEntByFunction_.set (r);
              continue;
            }
          }

          // BuildingInSpatialContainer
          //
          if (n.name () == "BuildingInSpatialContainer" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< BuildingInSpatialContainer_type > r (
              BuildingInSpatialContainer_traits::create (i, f, this));

            if (!this->BuildingInSpatialContainer_)
            {
              this->BuildingInSpatialContainer_.set (r);
              continue;
            }
          }

          // SimBuilding_NorthAxis
          //
          if (n.name () == "SimBuilding_NorthAxis" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->SimBuilding_NorthAxis_)
            {
              this->SimBuilding_NorthAxis_.set (SimBuilding_NorthAxis_traits::create (i, f, this));
              continue;
            }
          }

          // SimBuilding_Terrain
          //
          if (n.name () == "SimBuilding_Terrain" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimBuilding_Terrain_type > r (
              SimBuilding_Terrain_traits::create (i, f, this));

            if (!this->SimBuilding_Terrain_)
            {
              this->SimBuilding_Terrain_.set (r);
              continue;
            }
          }

          // SimBuilding_LoadsConvergTolVal
          //
          if (n.name () == "SimBuilding_LoadsConvergTolVal" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->SimBuilding_LoadsConvergTolVal_)
            {
              this->SimBuilding_LoadsConvergTolVal_.set (SimBuilding_LoadsConvergTolVal_traits::create (i, f, this));
              continue;
            }
          }

          // SimBuilding_TempConvergTolVal
          //
          if (n.name () == "SimBuilding_TempConvergTolVal" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->SimBuilding_TempConvergTolVal_)
            {
              this->SimBuilding_TempConvergTolVal_.set (SimBuilding_TempConvergTolVal_traits::create (i, f, this));
              continue;
            }
          }

          // SimBuilding_SolarDist
          //
          if (n.name () == "SimBuilding_SolarDist" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimBuilding_SolarDist_type > r (
              SimBuilding_SolarDist_traits::create (i, f, this));

            if (!this->SimBuilding_SolarDist_)
            {
              this->SimBuilding_SolarDist_.set (r);
              continue;
            }
          }

          // SimBuilding_MaxNumWarmupDays
          //
          if (n.name () == "SimBuilding_MaxNumWarmupDays" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->SimBuilding_MaxNumWarmupDays_)
            {
              this->SimBuilding_MaxNumWarmupDays_.set (SimBuilding_MaxNumWarmupDays_traits::create (i, f, this));
              continue;
            }
          }

          // SimBuilding_MinNumberWarmupDays
          //
          if (n.name () == "SimBuilding_MinNumberWarmupDays" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->SimBuilding_MinNumberWarmupDays_)
            {
              this->SimBuilding_MinNumberWarmupDays_.set (SimBuilding_MinNumberWarmupDays_traits::create (i, f, this));
              continue;
            }
          }

          // RoofIrrigation_IrrigationModelType
          //
          if (n.name () == "RoofIrrigation_IrrigationModelType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< RoofIrrigation_IrrigationModelType_type > r (
              RoofIrrigation_IrrigationModelType_traits::create (i, f, this));

            if (!this->RoofIrrigation_IrrigationModelType_)
            {
              this->RoofIrrigation_IrrigationModelType_.set (r);
              continue;
            }
          }

          // RoofIrrigation_IrrigationRateSchedName
          //
          if (n.name () == "RoofIrrigation_IrrigationRateSchedName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< RoofIrrigation_IrrigationRateSchedName_type > r (
              RoofIrrigation_IrrigationRateSchedName_traits::create (i, f, this));

            if (!this->RoofIrrigation_IrrigationRateSchedName_)
            {
              this->RoofIrrigation_IrrigationRateSchedName_.set (r);
              continue;
            }
          }

          // RoofIrrigation_IrrigationMaxSaturatThreshold
          //
          if (n.name () == "RoofIrrigation_IrrigationMaxSaturatThreshold" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->RoofIrrigation_IrrigationMaxSaturatThreshold_)
            {
              this->RoofIrrigation_IrrigationMaxSaturatThreshold_.set (RoofIrrigation_IrrigationMaxSaturatThreshold_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimBuilding_Building* SimBuilding_Building::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBuilding_Building (*this, f, c);
      }

      SimBuilding_Building& SimBuilding_Building::
      operator= (const SimBuilding_Building& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimBuilding& > (*this) = x;
          this->ElevationOfTerrain_ = x.ElevationOfTerrain_;
          this->BuildingAddress_ = x.BuildingAddress_;
          this->BuildingOccupancyType_ = x.BuildingOccupancyType_;
          this->BuildingGrossPlannedArea_ = x.BuildingGrossPlannedArea_;
          this->BuildingNumberofStoreys_ = x.BuildingNumberofStoreys_;
          this->BuildingYearOfConstruction_ = x.BuildingYearOfConstruction_;
          this->BuildingisLandmarked_ = x.BuildingisLandmarked_;
          this->BuildingEnergyTargetUnits_ = x.BuildingEnergyTargetUnits_;
          this->BuildingEnergyTargetValue_ = x.BuildingEnergyTargetValue_;
          this->BuildingHeight_ = x.BuildingHeight_;
          this->BuildingGrossFloorArea_ = x.BuildingGrossFloorArea_;
          this->ClassRef_ConstEntByFunction_ = x.ClassRef_ConstEntByFunction_;
          this->BuildingInSpatialContainer_ = x.BuildingInSpatialContainer_;
          this->SimBuilding_NorthAxis_ = x.SimBuilding_NorthAxis_;
          this->SimBuilding_Terrain_ = x.SimBuilding_Terrain_;
          this->SimBuilding_LoadsConvergTolVal_ = x.SimBuilding_LoadsConvergTolVal_;
          this->SimBuilding_TempConvergTolVal_ = x.SimBuilding_TempConvergTolVal_;
          this->SimBuilding_SolarDist_ = x.SimBuilding_SolarDist_;
          this->SimBuilding_MaxNumWarmupDays_ = x.SimBuilding_MaxNumWarmupDays_;
          this->SimBuilding_MinNumberWarmupDays_ = x.SimBuilding_MinNumberWarmupDays_;
          this->RoofIrrigation_IrrigationModelType_ = x.RoofIrrigation_IrrigationModelType_;
          this->RoofIrrigation_IrrigationRateSchedName_ = x.RoofIrrigation_IrrigationRateSchedName_;
          this->RoofIrrigation_IrrigationMaxSaturatThreshold_ = x.RoofIrrigation_IrrigationMaxSaturatThreshold_;
        }

        return *this;
      }

      SimBuilding_Building::
      ~SimBuilding_Building ()
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

