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

#include "SimFlowPlant_PlantComponent.hxx"

#include "simflowplant_plantconn_1_4_inletnodename.hxx"

#include "simflowplant_plantconn_1_4_outletnodename.hxx"

#include "simflowplant_plantconn_1_4_loadingmode.hxx"

#include "simflowplant_plantconn_1_4_loopflowrequestmode.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_PlantComponent
      // 

      const SimFlowPlant_PlantComponent::Representation_optional& SimFlowPlant_PlantComponent::
      Representation () const
      {
        return this->Representation_;
      }

      SimFlowPlant_PlantComponent::Representation_optional& SimFlowPlant_PlantComponent::
      Representation ()
      {
        return this->Representation_;
      }

      void SimFlowPlant_PlantComponent::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimFlowPlant_PlantComponent::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_Name_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_Name () const
      {
        return this->SimFlowPlant_Name_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_Name_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_Name ()
      {
        return this->SimFlowPlant_Name_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_Name (const SimFlowPlant_Name_type& x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_Name (const SimFlowPlant_Name_optional& x)
      {
        this->SimFlowPlant_Name_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_MainMdlProgCallingMngrName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_MainMdlProgCallingMngrName () const
      {
        return this->SimFlowPlant_MainMdlProgCallingMngrName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_MainMdlProgCallingMngrName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_MainMdlProgCallingMngrName ()
      {
        return this->SimFlowPlant_MainMdlProgCallingMngrName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_MainMdlProgCallingMngrName (const SimFlowPlant_MainMdlProgCallingMngrName_type& x)
      {
        this->SimFlowPlant_MainMdlProgCallingMngrName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_MainMdlProgCallingMngrName (const SimFlowPlant_MainMdlProgCallingMngrName_optional& x)
      {
        this->SimFlowPlant_MainMdlProgCallingMngrName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_MainMdlProgCallingMngrName (::std::auto_ptr< SimFlowPlant_MainMdlProgCallingMngrName_type > x)
      {
        this->SimFlowPlant_MainMdlProgCallingMngrName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_NumberOfPlantLoopConns_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_NumberOfPlantLoopConns () const
      {
        return this->SimFlowPlant_NumberOfPlantLoopConns_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_NumberOfPlantLoopConns_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_NumberOfPlantLoopConns ()
      {
        return this->SimFlowPlant_NumberOfPlantLoopConns_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_NumberOfPlantLoopConns (const SimFlowPlant_NumberOfPlantLoopConns_type& x)
      {
        this->SimFlowPlant_NumberOfPlantLoopConns_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_NumberOfPlantLoopConns (const SimFlowPlant_NumberOfPlantLoopConns_optional& x)
      {
        this->SimFlowPlant_NumberOfPlantLoopConns_ = x;
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_InletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InletNodeName () const
      {
        return this->SimFlowPlant_PlantConn_1_4_InletNodeName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_InletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InletNodeName ()
      {
        return this->SimFlowPlant_PlantConn_1_4_InletNodeName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InletNodeName (const SimFlowPlant_PlantConn_1_4_InletNodeName_type& x)
      {
        this->SimFlowPlant_PlantConn_1_4_InletNodeName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InletNodeName (const SimFlowPlant_PlantConn_1_4_InletNodeName_optional& x)
      {
        this->SimFlowPlant_PlantConn_1_4_InletNodeName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InletNodeName (::std::auto_ptr< SimFlowPlant_PlantConn_1_4_InletNodeName_type > x)
      {
        this->SimFlowPlant_PlantConn_1_4_InletNodeName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_OutletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_OutletNodeName () const
      {
        return this->SimFlowPlant_PlantConn_1_4_OutletNodeName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_OutletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_OutletNodeName ()
      {
        return this->SimFlowPlant_PlantConn_1_4_OutletNodeName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_OutletNodeName (const SimFlowPlant_PlantConn_1_4_OutletNodeName_type& x)
      {
        this->SimFlowPlant_PlantConn_1_4_OutletNodeName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_OutletNodeName (const SimFlowPlant_PlantConn_1_4_OutletNodeName_optional& x)
      {
        this->SimFlowPlant_PlantConn_1_4_OutletNodeName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_OutletNodeName (::std::auto_ptr< SimFlowPlant_PlantConn_1_4_OutletNodeName_type > x)
      {
        this->SimFlowPlant_PlantConn_1_4_OutletNodeName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_LoadingMode_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoadingMode () const
      {
        return this->SimFlowPlant_PlantConn_1_4_LoadingMode_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_LoadingMode_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoadingMode ()
      {
        return this->SimFlowPlant_PlantConn_1_4_LoadingMode_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoadingMode (const SimFlowPlant_PlantConn_1_4_LoadingMode_type& x)
      {
        this->SimFlowPlant_PlantConn_1_4_LoadingMode_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoadingMode (const SimFlowPlant_PlantConn_1_4_LoadingMode_optional& x)
      {
        this->SimFlowPlant_PlantConn_1_4_LoadingMode_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoadingMode (::std::auto_ptr< SimFlowPlant_PlantConn_1_4_LoadingMode_type > x)
      {
        this->SimFlowPlant_PlantConn_1_4_LoadingMode_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode () const
      {
        return this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode ()
      {
        return this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode (const SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_type& x)
      {
        this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode (const SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_optional& x)
      {
        this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode (::std::auto_ptr< SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_type > x)
      {
        this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName () const
      {
        return this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName ()
      {
        return this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName (const SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_type& x)
      {
        this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName (const SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_optional& x)
      {
        this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName (::std::auto_ptr< SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_type > x)
      {
        this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName () const
      {
        return this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName ()
      {
        return this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName (const SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_type& x)
      {
        this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName (const SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_optional& x)
      {
        this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName (::std::auto_ptr< SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_type > x)
      {
        this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_AirConnInletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnInletNodeName () const
      {
        return this->SimFlowPlant_AirConnInletNodeName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_AirConnInletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnInletNodeName ()
      {
        return this->SimFlowPlant_AirConnInletNodeName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnInletNodeName (const SimFlowPlant_AirConnInletNodeName_type& x)
      {
        this->SimFlowPlant_AirConnInletNodeName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnInletNodeName (const SimFlowPlant_AirConnInletNodeName_optional& x)
      {
        this->SimFlowPlant_AirConnInletNodeName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnInletNodeName (::std::auto_ptr< SimFlowPlant_AirConnInletNodeName_type > x)
      {
        this->SimFlowPlant_AirConnInletNodeName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_AirConnOutletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnOutletNodeName () const
      {
        return this->SimFlowPlant_AirConnOutletNodeName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_AirConnOutletNodeName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnOutletNodeName ()
      {
        return this->SimFlowPlant_AirConnOutletNodeName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnOutletNodeName (const SimFlowPlant_AirConnOutletNodeName_type& x)
      {
        this->SimFlowPlant_AirConnOutletNodeName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnOutletNodeName (const SimFlowPlant_AirConnOutletNodeName_optional& x)
      {
        this->SimFlowPlant_AirConnOutletNodeName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AirConnOutletNodeName (::std::auto_ptr< SimFlowPlant_AirConnOutletNodeName_type > x)
      {
        this->SimFlowPlant_AirConnOutletNodeName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_SupplyInletWaterStorageTankName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_SupplyInletWaterStorageTankName () const
      {
        return this->SimFlowPlant_SupplyInletWaterStorageTankName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_SupplyInletWaterStorageTankName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_SupplyInletWaterStorageTankName ()
      {
        return this->SimFlowPlant_SupplyInletWaterStorageTankName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_SupplyInletWaterStorageTankName (const SimFlowPlant_SupplyInletWaterStorageTankName_type& x)
      {
        this->SimFlowPlant_SupplyInletWaterStorageTankName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_SupplyInletWaterStorageTankName (const SimFlowPlant_SupplyInletWaterStorageTankName_optional& x)
      {
        this->SimFlowPlant_SupplyInletWaterStorageTankName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_SupplyInletWaterStorageTankName (::std::auto_ptr< SimFlowPlant_SupplyInletWaterStorageTankName_type > x)
      {
        this->SimFlowPlant_SupplyInletWaterStorageTankName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_CollectionOutletWaterStorageTankName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_CollectionOutletWaterStorageTankName () const
      {
        return this->SimFlowPlant_CollectionOutletWaterStorageTankName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_CollectionOutletWaterStorageTankName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_CollectionOutletWaterStorageTankName ()
      {
        return this->SimFlowPlant_CollectionOutletWaterStorageTankName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_CollectionOutletWaterStorageTankName (const SimFlowPlant_CollectionOutletWaterStorageTankName_type& x)
      {
        this->SimFlowPlant_CollectionOutletWaterStorageTankName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_CollectionOutletWaterStorageTankName (const SimFlowPlant_CollectionOutletWaterStorageTankName_optional& x)
      {
        this->SimFlowPlant_CollectionOutletWaterStorageTankName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_CollectionOutletWaterStorageTankName (::std::auto_ptr< SimFlowPlant_CollectionOutletWaterStorageTankName_type > x)
      {
        this->SimFlowPlant_CollectionOutletWaterStorageTankName_.set (x);
      }

      const SimFlowPlant_PlantComponent::SimFlowPlant_AmbientZoneName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_AmbientZoneName () const
      {
        return this->SimFlowPlant_AmbientZoneName_;
      }

      SimFlowPlant_PlantComponent::SimFlowPlant_AmbientZoneName_optional& SimFlowPlant_PlantComponent::
      SimFlowPlant_AmbientZoneName ()
      {
        return this->SimFlowPlant_AmbientZoneName_;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AmbientZoneName (const SimFlowPlant_AmbientZoneName_type& x)
      {
        this->SimFlowPlant_AmbientZoneName_.set (x);
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AmbientZoneName (const SimFlowPlant_AmbientZoneName_optional& x)
      {
        this->SimFlowPlant_AmbientZoneName_ = x;
      }

      void SimFlowPlant_PlantComponent::
      SimFlowPlant_AmbientZoneName (::std::auto_ptr< SimFlowPlant_AmbientZoneName_type > x)
      {
        this->SimFlowPlant_AmbientZoneName_.set (x);
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
      // SimFlowPlant_PlantComponent
      //

      SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantComponent ()
      : ::schema::simxml::MepModel::SimFlowPlant (),
        Representation_ (this),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_MainMdlProgCallingMngrName_ (this),
        SimFlowPlant_NumberOfPlantLoopConns_ (this),
        SimFlowPlant_PlantConn_1_4_InletNodeName_ (this),
        SimFlowPlant_PlantConn_1_4_OutletNodeName_ (this),
        SimFlowPlant_PlantConn_1_4_LoadingMode_ (this),
        SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_ (this),
        SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_ (this),
        SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_ (this),
        SimFlowPlant_AirConnInletNodeName_ (this),
        SimFlowPlant_AirConnOutletNodeName_ (this),
        SimFlowPlant_SupplyInletWaterStorageTankName_ (this),
        SimFlowPlant_CollectionOutletWaterStorageTankName_ (this),
        SimFlowPlant_AmbientZoneName_ (this)
      {
      }

      SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantComponent (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowPlant (RefId),
        Representation_ (this),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_MainMdlProgCallingMngrName_ (this),
        SimFlowPlant_NumberOfPlantLoopConns_ (this),
        SimFlowPlant_PlantConn_1_4_InletNodeName_ (this),
        SimFlowPlant_PlantConn_1_4_OutletNodeName_ (this),
        SimFlowPlant_PlantConn_1_4_LoadingMode_ (this),
        SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_ (this),
        SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_ (this),
        SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_ (this),
        SimFlowPlant_AirConnInletNodeName_ (this),
        SimFlowPlant_AirConnOutletNodeName_ (this),
        SimFlowPlant_SupplyInletWaterStorageTankName_ (this),
        SimFlowPlant_CollectionOutletWaterStorageTankName_ (this),
        SimFlowPlant_AmbientZoneName_ (this)
      {
      }

      SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantComponent (const SimFlowPlant_PlantComponent& x,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant (x, f, c),
        Representation_ (x.Representation_, f, this),
        SimFlowPlant_Name_ (x.SimFlowPlant_Name_, f, this),
        SimFlowPlant_MainMdlProgCallingMngrName_ (x.SimFlowPlant_MainMdlProgCallingMngrName_, f, this),
        SimFlowPlant_NumberOfPlantLoopConns_ (x.SimFlowPlant_NumberOfPlantLoopConns_, f, this),
        SimFlowPlant_PlantConn_1_4_InletNodeName_ (x.SimFlowPlant_PlantConn_1_4_InletNodeName_, f, this),
        SimFlowPlant_PlantConn_1_4_OutletNodeName_ (x.SimFlowPlant_PlantConn_1_4_OutletNodeName_, f, this),
        SimFlowPlant_PlantConn_1_4_LoadingMode_ (x.SimFlowPlant_PlantConn_1_4_LoadingMode_, f, this),
        SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_ (x.SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_, f, this),
        SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_ (x.SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_, f, this),
        SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_ (x.SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_, f, this),
        SimFlowPlant_AirConnInletNodeName_ (x.SimFlowPlant_AirConnInletNodeName_, f, this),
        SimFlowPlant_AirConnOutletNodeName_ (x.SimFlowPlant_AirConnOutletNodeName_, f, this),
        SimFlowPlant_SupplyInletWaterStorageTankName_ (x.SimFlowPlant_SupplyInletWaterStorageTankName_, f, this),
        SimFlowPlant_CollectionOutletWaterStorageTankName_ (x.SimFlowPlant_CollectionOutletWaterStorageTankName_, f, this),
        SimFlowPlant_AmbientZoneName_ (x.SimFlowPlant_AmbientZoneName_, f, this)
      {
      }

      SimFlowPlant_PlantComponent::
      SimFlowPlant_PlantComponent (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant (e, f | ::xml_schema::flags::base, c),
        Representation_ (this),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_MainMdlProgCallingMngrName_ (this),
        SimFlowPlant_NumberOfPlantLoopConns_ (this),
        SimFlowPlant_PlantConn_1_4_InletNodeName_ (this),
        SimFlowPlant_PlantConn_1_4_OutletNodeName_ (this),
        SimFlowPlant_PlantConn_1_4_LoadingMode_ (this),
        SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_ (this),
        SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_ (this),
        SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_ (this),
        SimFlowPlant_AirConnInletNodeName_ (this),
        SimFlowPlant_AirConnOutletNodeName_ (this),
        SimFlowPlant_SupplyInletWaterStorageTankName_ (this),
        SimFlowPlant_CollectionOutletWaterStorageTankName_ (this),
        SimFlowPlant_AmbientZoneName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_PlantComponent::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowPlant::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

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

          // SimFlowPlant_MainMdlProgCallingMngrName
          //
          if (n.name () == "SimFlowPlant_MainMdlProgCallingMngrName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_MainMdlProgCallingMngrName_type > r (
              SimFlowPlant_MainMdlProgCallingMngrName_traits::create (i, f, this));

            if (!this->SimFlowPlant_MainMdlProgCallingMngrName_)
            {
              this->SimFlowPlant_MainMdlProgCallingMngrName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_NumberOfPlantLoopConns
          //
          if (n.name () == "SimFlowPlant_NumberOfPlantLoopConns" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_NumberOfPlantLoopConns_)
            {
              this->SimFlowPlant_NumberOfPlantLoopConns_.set (SimFlowPlant_NumberOfPlantLoopConns_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_PlantConn_1_4_InletNodeName
          //
          if (n.name () == "SimFlowPlant_PlantConn_1_4_InletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_PlantConn_1_4_InletNodeName_type > r (
              SimFlowPlant_PlantConn_1_4_InletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_PlantConn_1_4_InletNodeName_)
            {
              this->SimFlowPlant_PlantConn_1_4_InletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_PlantConn_1_4_OutletNodeName
          //
          if (n.name () == "SimFlowPlant_PlantConn_1_4_OutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_PlantConn_1_4_OutletNodeName_type > r (
              SimFlowPlant_PlantConn_1_4_OutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_PlantConn_1_4_OutletNodeName_)
            {
              this->SimFlowPlant_PlantConn_1_4_OutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_PlantConn_1_4_LoadingMode
          //
          if (n.name () == "SimFlowPlant_PlantConn_1_4_LoadingMode" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_PlantConn_1_4_LoadingMode_type > r (
              SimFlowPlant_PlantConn_1_4_LoadingMode_traits::create (i, f, this));

            if (!this->SimFlowPlant_PlantConn_1_4_LoadingMode_)
            {
              this->SimFlowPlant_PlantConn_1_4_LoadingMode_.set (r);
              continue;
            }
          }

          // SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode
          //
          if (n.name () == "SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_type > r (
              SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_traits::create (i, f, this));

            if (!this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_)
            {
              this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_.set (r);
              continue;
            }
          }

          // SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName
          //
          if (n.name () == "SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_type > r (
              SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_traits::create (i, f, this));

            if (!this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_)
            {
              this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName
          //
          if (n.name () == "SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_type > r (
              SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_traits::create (i, f, this));

            if (!this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_)
            {
              this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_AirConnInletNodeName
          //
          if (n.name () == "SimFlowPlant_AirConnInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_AirConnInletNodeName_type > r (
              SimFlowPlant_AirConnInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_AirConnInletNodeName_)
            {
              this->SimFlowPlant_AirConnInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_AirConnOutletNodeName
          //
          if (n.name () == "SimFlowPlant_AirConnOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_AirConnOutletNodeName_type > r (
              SimFlowPlant_AirConnOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_AirConnOutletNodeName_)
            {
              this->SimFlowPlant_AirConnOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_SupplyInletWaterStorageTankName
          //
          if (n.name () == "SimFlowPlant_SupplyInletWaterStorageTankName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_SupplyInletWaterStorageTankName_type > r (
              SimFlowPlant_SupplyInletWaterStorageTankName_traits::create (i, f, this));

            if (!this->SimFlowPlant_SupplyInletWaterStorageTankName_)
            {
              this->SimFlowPlant_SupplyInletWaterStorageTankName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_CollectionOutletWaterStorageTankName
          //
          if (n.name () == "SimFlowPlant_CollectionOutletWaterStorageTankName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_CollectionOutletWaterStorageTankName_type > r (
              SimFlowPlant_CollectionOutletWaterStorageTankName_traits::create (i, f, this));

            if (!this->SimFlowPlant_CollectionOutletWaterStorageTankName_)
            {
              this->SimFlowPlant_CollectionOutletWaterStorageTankName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_AmbientZoneName
          //
          if (n.name () == "SimFlowPlant_AmbientZoneName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_AmbientZoneName_type > r (
              SimFlowPlant_AmbientZoneName_traits::create (i, f, this));

            if (!this->SimFlowPlant_AmbientZoneName_)
            {
              this->SimFlowPlant_AmbientZoneName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_PlantComponent* SimFlowPlant_PlantComponent::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_PlantComponent (*this, f, c);
      }

      SimFlowPlant_PlantComponent& SimFlowPlant_PlantComponent::
      operator= (const SimFlowPlant_PlantComponent& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowPlant& > (*this) = x;
          this->Representation_ = x.Representation_;
          this->SimFlowPlant_Name_ = x.SimFlowPlant_Name_;
          this->SimFlowPlant_MainMdlProgCallingMngrName_ = x.SimFlowPlant_MainMdlProgCallingMngrName_;
          this->SimFlowPlant_NumberOfPlantLoopConns_ = x.SimFlowPlant_NumberOfPlantLoopConns_;
          this->SimFlowPlant_PlantConn_1_4_InletNodeName_ = x.SimFlowPlant_PlantConn_1_4_InletNodeName_;
          this->SimFlowPlant_PlantConn_1_4_OutletNodeName_ = x.SimFlowPlant_PlantConn_1_4_OutletNodeName_;
          this->SimFlowPlant_PlantConn_1_4_LoadingMode_ = x.SimFlowPlant_PlantConn_1_4_LoadingMode_;
          this->SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_ = x.SimFlowPlant_PlantConn_1_4_LoopFlowRequestMode_;
          this->SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_ = x.SimFlowPlant_PlantConn_1_4_InitializationProgCallingMngrName_;
          this->SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_ = x.SimFlowPlant_PlantConn_1_4_SimulationProgCallingMngrName_;
          this->SimFlowPlant_AirConnInletNodeName_ = x.SimFlowPlant_AirConnInletNodeName_;
          this->SimFlowPlant_AirConnOutletNodeName_ = x.SimFlowPlant_AirConnOutletNodeName_;
          this->SimFlowPlant_SupplyInletWaterStorageTankName_ = x.SimFlowPlant_SupplyInletWaterStorageTankName_;
          this->SimFlowPlant_CollectionOutletWaterStorageTankName_ = x.SimFlowPlant_CollectionOutletWaterStorageTankName_;
          this->SimFlowPlant_AmbientZoneName_ = x.SimFlowPlant_AmbientZoneName_;
        }

        return *this;
      }

      SimFlowPlant_PlantComponent::
      ~SimFlowPlant_PlantComponent ()
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
