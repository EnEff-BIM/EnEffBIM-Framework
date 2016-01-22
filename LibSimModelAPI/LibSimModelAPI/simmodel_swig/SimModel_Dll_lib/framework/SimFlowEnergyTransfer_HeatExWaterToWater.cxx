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

#include "SimFlowEnergyTransfer_HeatExWaterToWater.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowEnergyTransfer_HeatExWaterToWater
      // 

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_Name_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_Name () const
      {
        return this->SimFlowEnergyTrans_Name_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_Name_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_Name ()
      {
        return this->SimFlowEnergyTrans_Name_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_type& x)
      {
        this->SimFlowEnergyTrans_Name_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_optional& x)
      {
        this->SimFlowEnergyTrans_Name_ = x;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_Name (::std::auto_ptr< SimFlowEnergyTrans_Name_type > x)
      {
        this->SimFlowEnergyTrans_Name_.set (x);
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_HydronicTubingsideDiam_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingsideDiam () const
      {
        return this->SimFlowEnergyTrans_HydronicTubingsideDiam_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_HydronicTubingsideDiam_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingsideDiam ()
      {
        return this->SimFlowEnergyTrans_HydronicTubingsideDiam_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingsideDiam (const SimFlowEnergyTrans_HydronicTubingsideDiam_type& x)
      {
        this->SimFlowEnergyTrans_HydronicTubingsideDiam_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingsideDiam (const SimFlowEnergyTrans_HydronicTubingsideDiam_optional& x)
      {
        this->SimFlowEnergyTrans_HydronicTubingsideDiam_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_GroundThermalCond_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_GroundThermalCond () const
      {
        return this->SimFlowEnergyTrans_GroundThermalCond_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_GroundThermalCond_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_GroundThermalCond ()
      {
        return this->SimFlowEnergyTrans_GroundThermalCond_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_GroundThermalCond (const SimFlowEnergyTrans_GroundThermalCond_type& x)
      {
        this->SimFlowEnergyTrans_GroundThermalCond_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_GroundThermalCond (const SimFlowEnergyTrans_GroundThermalCond_optional& x)
      {
        this->SimFlowEnergyTrans_GroundThermalCond_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_FluidInletNodeName_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidInletNodeName () const
      {
        return this->SimFlowEnergyTrans_FluidInletNodeName_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_FluidInletNodeName_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidInletNodeName ()
      {
        return this->SimFlowEnergyTrans_FluidInletNodeName_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidInletNodeName (const SimFlowEnergyTrans_FluidInletNodeName_type& x)
      {
        this->SimFlowEnergyTrans_FluidInletNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidInletNodeName (const SimFlowEnergyTrans_FluidInletNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_FluidInletNodeName_ = x;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_FluidInletNodeName_type > x)
      {
        this->SimFlowEnergyTrans_FluidInletNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_FluidOutletNodeName_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidOutletNodeName () const
      {
        return this->SimFlowEnergyTrans_FluidOutletNodeName_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_FluidOutletNodeName_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidOutletNodeName ()
      {
        return this->SimFlowEnergyTrans_FluidOutletNodeName_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidOutletNodeName (const SimFlowEnergyTrans_FluidOutletNodeName_type& x)
      {
        this->SimFlowEnergyTrans_FluidOutletNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidOutletNodeName (const SimFlowEnergyTrans_FluidOutletNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_FluidOutletNodeName_ = x;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_FluidOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_FluidOutletNodeName_type > x)
      {
        this->SimFlowEnergyTrans_FluidOutletNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_PondDepth_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondDepth () const
      {
        return this->SimFlowEnergyTrans_PondDepth_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_PondDepth_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondDepth ()
      {
        return this->SimFlowEnergyTrans_PondDepth_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondDepth (const SimFlowEnergyTrans_PondDepth_type& x)
      {
        this->SimFlowEnergyTrans_PondDepth_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondDepth (const SimFlowEnergyTrans_PondDepth_optional& x)
      {
        this->SimFlowEnergyTrans_PondDepth_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_PondArea_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondArea () const
      {
        return this->SimFlowEnergyTrans_PondArea_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_PondArea_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondArea ()
      {
        return this->SimFlowEnergyTrans_PondArea_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondArea (const SimFlowEnergyTrans_PondArea_type& x)
      {
        this->SimFlowEnergyTrans_PondArea_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_PondArea (const SimFlowEnergyTrans_PondArea_optional& x)
      {
        this->SimFlowEnergyTrans_PondArea_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_HydronicTubingOutsideDiam_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingOutsideDiam () const
      {
        return this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_HydronicTubingOutsideDiam_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingOutsideDiam ()
      {
        return this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingOutsideDiam (const SimFlowEnergyTrans_HydronicTubingOutsideDiam_type& x)
      {
        this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingOutsideDiam (const SimFlowEnergyTrans_HydronicTubingOutsideDiam_optional& x)
      {
        this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_HydronicTubingThermalCond_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingThermalCond () const
      {
        return this->SimFlowEnergyTrans_HydronicTubingThermalCond_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_HydronicTubingThermalCond_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingThermalCond ()
      {
        return this->SimFlowEnergyTrans_HydronicTubingThermalCond_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingThermalCond (const SimFlowEnergyTrans_HydronicTubingThermalCond_type& x)
      {
        this->SimFlowEnergyTrans_HydronicTubingThermalCond_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_HydronicTubingThermalCond (const SimFlowEnergyTrans_HydronicTubingThermalCond_optional& x)
      {
        this->SimFlowEnergyTrans_HydronicTubingThermalCond_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_NumTubingCircuits_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_NumTubingCircuits () const
      {
        return this->SimFlowEnergyTrans_NumTubingCircuits_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_NumTubingCircuits_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_NumTubingCircuits ()
      {
        return this->SimFlowEnergyTrans_NumTubingCircuits_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_NumTubingCircuits (const SimFlowEnergyTrans_NumTubingCircuits_type& x)
      {
        this->SimFlowEnergyTrans_NumTubingCircuits_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_NumTubingCircuits (const SimFlowEnergyTrans_NumTubingCircuits_optional& x)
      {
        this->SimFlowEnergyTrans_NumTubingCircuits_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_LengthEachTubingCircuit_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_LengthEachTubingCircuit () const
      {
        return this->SimFlowEnergyTrans_LengthEachTubingCircuit_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::SimFlowEnergyTrans_LengthEachTubingCircuit_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_LengthEachTubingCircuit ()
      {
        return this->SimFlowEnergyTrans_LengthEachTubingCircuit_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_LengthEachTubingCircuit (const SimFlowEnergyTrans_LengthEachTubingCircuit_type& x)
      {
        this->SimFlowEnergyTrans_LengthEachTubingCircuit_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTrans_LengthEachTubingCircuit (const SimFlowEnergyTrans_LengthEachTubingCircuit_optional& x)
      {
        this->SimFlowEnergyTrans_LengthEachTubingCircuit_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_HeatExchngName_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngName () const
      {
        return this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_HeatExchngName_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngName ()
      {
        return this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngName (const Airflow_Distrib_Comp_HeatExch_HeatExchngName_type& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngName (const Airflow_Distrib_Comp_HeatExch_HeatExchngName_optional& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_ = x;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngName (::std::auto_ptr< Airflow_Distrib_Comp_HeatExch_HeatExchngName_type > x)
      {
        this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngObjType () const
      {
        return this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngObjType ()
      {
        return this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngObjType (const Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_type& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngObjType (const Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_optional& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_ = x;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_HeatExchngObjType (::std::auto_ptr< Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_type > x)
      {
        this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_.set (x);
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_AirPathLength_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathLength () const
      {
        return this->Airflow_Distrib_Comp_HeatExch_AirPathLength_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_AirPathLength_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathLength ()
      {
        return this->Airflow_Distrib_Comp_HeatExch_AirPathLength_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathLength (const Airflow_Distrib_Comp_HeatExch_AirPathLength_type& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_AirPathLength_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathLength (const Airflow_Distrib_Comp_HeatExch_AirPathLength_optional& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_AirPathLength_ = x;
      }

      const SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam () const
      {
        return this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_optional& SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam ()
      {
        return this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_;
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam (const Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_type& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_.set (x);
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam (const Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_optional& x)
      {
        this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_ = x;
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
      // SimFlowEnergyTransfer_HeatExWaterToWater
      //

      SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTransfer_HeatExWaterToWater ()
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (),
        SimFlowEnergyTrans_Name_ (this),
        SimFlowEnergyTrans_HydronicTubingsideDiam_ (this),
        SimFlowEnergyTrans_GroundThermalCond_ (this),
        SimFlowEnergyTrans_FluidInletNodeName_ (this),
        SimFlowEnergyTrans_FluidOutletNodeName_ (this),
        SimFlowEnergyTrans_PondDepth_ (this),
        SimFlowEnergyTrans_PondArea_ (this),
        SimFlowEnergyTrans_HydronicTubingOutsideDiam_ (this),
        SimFlowEnergyTrans_HydronicTubingThermalCond_ (this),
        SimFlowEnergyTrans_NumTubingCircuits_ (this),
        SimFlowEnergyTrans_LengthEachTubingCircuit_ (this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngName_ (this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_ (this),
        Airflow_Distrib_Comp_HeatExch_AirPathLength_ (this),
        Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_ (this)
      {
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTransfer_HeatExWaterToWater (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (RefId),
        SimFlowEnergyTrans_Name_ (this),
        SimFlowEnergyTrans_HydronicTubingsideDiam_ (this),
        SimFlowEnergyTrans_GroundThermalCond_ (this),
        SimFlowEnergyTrans_FluidInletNodeName_ (this),
        SimFlowEnergyTrans_FluidOutletNodeName_ (this),
        SimFlowEnergyTrans_PondDepth_ (this),
        SimFlowEnergyTrans_PondArea_ (this),
        SimFlowEnergyTrans_HydronicTubingOutsideDiam_ (this),
        SimFlowEnergyTrans_HydronicTubingThermalCond_ (this),
        SimFlowEnergyTrans_NumTubingCircuits_ (this),
        SimFlowEnergyTrans_LengthEachTubingCircuit_ (this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngName_ (this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_ (this),
        Airflow_Distrib_Comp_HeatExch_AirPathLength_ (this),
        Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_ (this)
      {
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTransfer_HeatExWaterToWater (const SimFlowEnergyTransfer_HeatExWaterToWater& x,
                                                ::xml_schema::flags f,
                                                ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (x, f, c),
        SimFlowEnergyTrans_Name_ (x.SimFlowEnergyTrans_Name_, f, this),
        SimFlowEnergyTrans_HydronicTubingsideDiam_ (x.SimFlowEnergyTrans_HydronicTubingsideDiam_, f, this),
        SimFlowEnergyTrans_GroundThermalCond_ (x.SimFlowEnergyTrans_GroundThermalCond_, f, this),
        SimFlowEnergyTrans_FluidInletNodeName_ (x.SimFlowEnergyTrans_FluidInletNodeName_, f, this),
        SimFlowEnergyTrans_FluidOutletNodeName_ (x.SimFlowEnergyTrans_FluidOutletNodeName_, f, this),
        SimFlowEnergyTrans_PondDepth_ (x.SimFlowEnergyTrans_PondDepth_, f, this),
        SimFlowEnergyTrans_PondArea_ (x.SimFlowEnergyTrans_PondArea_, f, this),
        SimFlowEnergyTrans_HydronicTubingOutsideDiam_ (x.SimFlowEnergyTrans_HydronicTubingOutsideDiam_, f, this),
        SimFlowEnergyTrans_HydronicTubingThermalCond_ (x.SimFlowEnergyTrans_HydronicTubingThermalCond_, f, this),
        SimFlowEnergyTrans_NumTubingCircuits_ (x.SimFlowEnergyTrans_NumTubingCircuits_, f, this),
        SimFlowEnergyTrans_LengthEachTubingCircuit_ (x.SimFlowEnergyTrans_LengthEachTubingCircuit_, f, this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngName_ (x.Airflow_Distrib_Comp_HeatExch_HeatExchngName_, f, this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_ (x.Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_, f, this),
        Airflow_Distrib_Comp_HeatExch_AirPathLength_ (x.Airflow_Distrib_Comp_HeatExch_AirPathLength_, f, this),
        Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_ (x.Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_, f, this)
      {
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::
      SimFlowEnergyTransfer_HeatExWaterToWater (const ::xercesc::DOMElement& e,
                                                ::xml_schema::flags f,
                                                ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (e, f | ::xml_schema::flags::base, c),
        SimFlowEnergyTrans_Name_ (this),
        SimFlowEnergyTrans_HydronicTubingsideDiam_ (this),
        SimFlowEnergyTrans_GroundThermalCond_ (this),
        SimFlowEnergyTrans_FluidInletNodeName_ (this),
        SimFlowEnergyTrans_FluidOutletNodeName_ (this),
        SimFlowEnergyTrans_PondDepth_ (this),
        SimFlowEnergyTrans_PondArea_ (this),
        SimFlowEnergyTrans_HydronicTubingOutsideDiam_ (this),
        SimFlowEnergyTrans_HydronicTubingThermalCond_ (this),
        SimFlowEnergyTrans_NumTubingCircuits_ (this),
        SimFlowEnergyTrans_LengthEachTubingCircuit_ (this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngName_ (this),
        Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_ (this),
        Airflow_Distrib_Comp_HeatExch_AirPathLength_ (this),
        Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowEnergyTransfer_HeatExWaterToWater::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowEnergyTransfer::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowEnergyTrans_Name
          //
          if (n.name () == "SimFlowEnergyTrans_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_Name_type > r (
              SimFlowEnergyTrans_Name_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_Name_)
            {
              this->SimFlowEnergyTrans_Name_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_HydronicTubingsideDiam
          //
          if (n.name () == "SimFlowEnergyTrans_HydronicTubingsideDiam" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_HydronicTubingsideDiam_)
            {
              this->SimFlowEnergyTrans_HydronicTubingsideDiam_.set (SimFlowEnergyTrans_HydronicTubingsideDiam_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_GroundThermalCond
          //
          if (n.name () == "SimFlowEnergyTrans_GroundThermalCond" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_GroundThermalCond_)
            {
              this->SimFlowEnergyTrans_GroundThermalCond_.set (SimFlowEnergyTrans_GroundThermalCond_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_FluidInletNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_FluidInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_FluidInletNodeName_type > r (
              SimFlowEnergyTrans_FluidInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_FluidInletNodeName_)
            {
              this->SimFlowEnergyTrans_FluidInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_FluidOutletNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_FluidOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_FluidOutletNodeName_type > r (
              SimFlowEnergyTrans_FluidOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_FluidOutletNodeName_)
            {
              this->SimFlowEnergyTrans_FluidOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_PondDepth
          //
          if (n.name () == "SimFlowEnergyTrans_PondDepth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_PondDepth_)
            {
              this->SimFlowEnergyTrans_PondDepth_.set (SimFlowEnergyTrans_PondDepth_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_PondArea
          //
          if (n.name () == "SimFlowEnergyTrans_PondArea" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_PondArea_)
            {
              this->SimFlowEnergyTrans_PondArea_.set (SimFlowEnergyTrans_PondArea_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_HydronicTubingOutsideDiam
          //
          if (n.name () == "SimFlowEnergyTrans_HydronicTubingOutsideDiam" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_)
            {
              this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_.set (SimFlowEnergyTrans_HydronicTubingOutsideDiam_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_HydronicTubingThermalCond
          //
          if (n.name () == "SimFlowEnergyTrans_HydronicTubingThermalCond" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_HydronicTubingThermalCond_)
            {
              this->SimFlowEnergyTrans_HydronicTubingThermalCond_.set (SimFlowEnergyTrans_HydronicTubingThermalCond_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_NumTubingCircuits
          //
          if (n.name () == "SimFlowEnergyTrans_NumTubingCircuits" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_NumTubingCircuits_)
            {
              this->SimFlowEnergyTrans_NumTubingCircuits_.set (SimFlowEnergyTrans_NumTubingCircuits_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_LengthEachTubingCircuit
          //
          if (n.name () == "SimFlowEnergyTrans_LengthEachTubingCircuit" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_LengthEachTubingCircuit_)
            {
              this->SimFlowEnergyTrans_LengthEachTubingCircuit_.set (SimFlowEnergyTrans_LengthEachTubingCircuit_traits::create (i, f, this));
              continue;
            }
          }

          // Airflow_Distrib_Comp_HeatExch_HeatExchngName
          //
          if (n.name () == "Airflow_Distrib_Comp_HeatExch_HeatExchngName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Airflow_Distrib_Comp_HeatExch_HeatExchngName_type > r (
              Airflow_Distrib_Comp_HeatExch_HeatExchngName_traits::create (i, f, this));

            if (!this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_)
            {
              this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_.set (r);
              continue;
            }
          }

          // Airflow_Distrib_Comp_HeatExch_HeatExchngObjType
          //
          if (n.name () == "Airflow_Distrib_Comp_HeatExch_HeatExchngObjType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_type > r (
              Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_traits::create (i, f, this));

            if (!this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_)
            {
              this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_.set (r);
              continue;
            }
          }

          // Airflow_Distrib_Comp_HeatExch_AirPathLength
          //
          if (n.name () == "Airflow_Distrib_Comp_HeatExch_AirPathLength" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->Airflow_Distrib_Comp_HeatExch_AirPathLength_)
            {
              this->Airflow_Distrib_Comp_HeatExch_AirPathLength_.set (Airflow_Distrib_Comp_HeatExch_AirPathLength_traits::create (i, f, this));
              continue;
            }
          }

          // Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam
          //
          if (n.name () == "Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_)
            {
              this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_.set (Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowEnergyTransfer_HeatExWaterToWater* SimFlowEnergyTransfer_HeatExWaterToWater::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowEnergyTransfer_HeatExWaterToWater (*this, f, c);
      }

      SimFlowEnergyTransfer_HeatExWaterToWater& SimFlowEnergyTransfer_HeatExWaterToWater::
      operator= (const SimFlowEnergyTransfer_HeatExWaterToWater& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowEnergyTransfer& > (*this) = x;
          this->SimFlowEnergyTrans_Name_ = x.SimFlowEnergyTrans_Name_;
          this->SimFlowEnergyTrans_HydronicTubingsideDiam_ = x.SimFlowEnergyTrans_HydronicTubingsideDiam_;
          this->SimFlowEnergyTrans_GroundThermalCond_ = x.SimFlowEnergyTrans_GroundThermalCond_;
          this->SimFlowEnergyTrans_FluidInletNodeName_ = x.SimFlowEnergyTrans_FluidInletNodeName_;
          this->SimFlowEnergyTrans_FluidOutletNodeName_ = x.SimFlowEnergyTrans_FluidOutletNodeName_;
          this->SimFlowEnergyTrans_PondDepth_ = x.SimFlowEnergyTrans_PondDepth_;
          this->SimFlowEnergyTrans_PondArea_ = x.SimFlowEnergyTrans_PondArea_;
          this->SimFlowEnergyTrans_HydronicTubingOutsideDiam_ = x.SimFlowEnergyTrans_HydronicTubingOutsideDiam_;
          this->SimFlowEnergyTrans_HydronicTubingThermalCond_ = x.SimFlowEnergyTrans_HydronicTubingThermalCond_;
          this->SimFlowEnergyTrans_NumTubingCircuits_ = x.SimFlowEnergyTrans_NumTubingCircuits_;
          this->SimFlowEnergyTrans_LengthEachTubingCircuit_ = x.SimFlowEnergyTrans_LengthEachTubingCircuit_;
          this->Airflow_Distrib_Comp_HeatExch_HeatExchngName_ = x.Airflow_Distrib_Comp_HeatExch_HeatExchngName_;
          this->Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_ = x.Airflow_Distrib_Comp_HeatExch_HeatExchngObjType_;
          this->Airflow_Distrib_Comp_HeatExch_AirPathLength_ = x.Airflow_Distrib_Comp_HeatExch_AirPathLength_;
          this->Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_ = x.Airflow_Distrib_Comp_HeatExch_AirPathHydrDiam_;
        }

        return *this;
      }

      SimFlowEnergyTransfer_HeatExWaterToWater::
      ~SimFlowEnergyTransfer_HeatExWaterToWater ()
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
