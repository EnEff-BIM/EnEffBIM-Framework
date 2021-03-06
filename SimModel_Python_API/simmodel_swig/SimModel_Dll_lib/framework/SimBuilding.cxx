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

#include "SimBuilding.hxx"

#include "logical.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimBuilding
      // 

      const SimBuilding::Name_optional& SimBuilding::
      Name () const
      {
        return this->Name_;
      }

      SimBuilding::Name_optional& SimBuilding::
      Name ()
      {
        return this->Name_;
      }

      void SimBuilding::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimBuilding::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimBuilding::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimBuilding::BuildingAddress_optional& SimBuilding::
      BuildingAddress () const
      {
        return this->BuildingAddress_;
      }

      SimBuilding::BuildingAddress_optional& SimBuilding::
      BuildingAddress ()
      {
        return this->BuildingAddress_;
      }

      void SimBuilding::
      BuildingAddress (const BuildingAddress_type& x)
      {
        this->BuildingAddress_.set (x);
      }

      void SimBuilding::
      BuildingAddress (const BuildingAddress_optional& x)
      {
        this->BuildingAddress_ = x;
      }

      void SimBuilding::
      BuildingAddress (::std::auto_ptr< BuildingAddress_type > x)
      {
        this->BuildingAddress_.set (x);
      }

      const SimBuilding::BuildingDatumElevation_optional& SimBuilding::
      BuildingDatumElevation () const
      {
        return this->BuildingDatumElevation_;
      }

      SimBuilding::BuildingDatumElevation_optional& SimBuilding::
      BuildingDatumElevation ()
      {
        return this->BuildingDatumElevation_;
      }

      void SimBuilding::
      BuildingDatumElevation (const BuildingDatumElevation_type& x)
      {
        this->BuildingDatumElevation_.set (x);
      }

      void SimBuilding::
      BuildingDatumElevation (const BuildingDatumElevation_optional& x)
      {
        this->BuildingDatumElevation_ = x;
      }

      const SimBuilding::BuildingOccupancyType_optional& SimBuilding::
      BuildingOccupancyType () const
      {
        return this->BuildingOccupancyType_;
      }

      SimBuilding::BuildingOccupancyType_optional& SimBuilding::
      BuildingOccupancyType ()
      {
        return this->BuildingOccupancyType_;
      }

      void SimBuilding::
      BuildingOccupancyType (const BuildingOccupancyType_type& x)
      {
        this->BuildingOccupancyType_.set (x);
      }

      void SimBuilding::
      BuildingOccupancyType (const BuildingOccupancyType_optional& x)
      {
        this->BuildingOccupancyType_ = x;
      }

      void SimBuilding::
      BuildingOccupancyType (::std::auto_ptr< BuildingOccupancyType_type > x)
      {
        this->BuildingOccupancyType_.set (x);
      }

      const SimBuilding::BuildingGrossPlannedArea_optional& SimBuilding::
      BuildingGrossPlannedArea () const
      {
        return this->BuildingGrossPlannedArea_;
      }

      SimBuilding::BuildingGrossPlannedArea_optional& SimBuilding::
      BuildingGrossPlannedArea ()
      {
        return this->BuildingGrossPlannedArea_;
      }

      void SimBuilding::
      BuildingGrossPlannedArea (const BuildingGrossPlannedArea_type& x)
      {
        this->BuildingGrossPlannedArea_.set (x);
      }

      void SimBuilding::
      BuildingGrossPlannedArea (const BuildingGrossPlannedArea_optional& x)
      {
        this->BuildingGrossPlannedArea_ = x;
      }

      const SimBuilding::BuildingNumberofStoreys_optional& SimBuilding::
      BuildingNumberofStoreys () const
      {
        return this->BuildingNumberofStoreys_;
      }

      SimBuilding::BuildingNumberofStoreys_optional& SimBuilding::
      BuildingNumberofStoreys ()
      {
        return this->BuildingNumberofStoreys_;
      }

      void SimBuilding::
      BuildingNumberofStoreys (const BuildingNumberofStoreys_type& x)
      {
        this->BuildingNumberofStoreys_.set (x);
      }

      void SimBuilding::
      BuildingNumberofStoreys (const BuildingNumberofStoreys_optional& x)
      {
        this->BuildingNumberofStoreys_ = x;
      }

      const SimBuilding::BuildingYearOfConstruction_optional& SimBuilding::
      BuildingYearOfConstruction () const
      {
        return this->BuildingYearOfConstruction_;
      }

      SimBuilding::BuildingYearOfConstruction_optional& SimBuilding::
      BuildingYearOfConstruction ()
      {
        return this->BuildingYearOfConstruction_;
      }

      void SimBuilding::
      BuildingYearOfConstruction (const BuildingYearOfConstruction_type& x)
      {
        this->BuildingYearOfConstruction_.set (x);
      }

      void SimBuilding::
      BuildingYearOfConstruction (const BuildingYearOfConstruction_optional& x)
      {
        this->BuildingYearOfConstruction_ = x;
      }

      void SimBuilding::
      BuildingYearOfConstruction (::std::auto_ptr< BuildingYearOfConstruction_type > x)
      {
        this->BuildingYearOfConstruction_.set (x);
      }

      const SimBuilding::BuildingisLandmarked_optional& SimBuilding::
      BuildingisLandmarked () const
      {
        return this->BuildingisLandmarked_;
      }

      SimBuilding::BuildingisLandmarked_optional& SimBuilding::
      BuildingisLandmarked ()
      {
        return this->BuildingisLandmarked_;
      }

      void SimBuilding::
      BuildingisLandmarked (const BuildingisLandmarked_type& x)
      {
        this->BuildingisLandmarked_.set (x);
      }

      void SimBuilding::
      BuildingisLandmarked (const BuildingisLandmarked_optional& x)
      {
        this->BuildingisLandmarked_ = x;
      }

      void SimBuilding::
      BuildingisLandmarked (::std::auto_ptr< BuildingisLandmarked_type > x)
      {
        this->BuildingisLandmarked_.set (x);
      }

      const SimBuilding::BuildingEnergyTargetUnits_optional& SimBuilding::
      BuildingEnergyTargetUnits () const
      {
        return this->BuildingEnergyTargetUnits_;
      }

      SimBuilding::BuildingEnergyTargetUnits_optional& SimBuilding::
      BuildingEnergyTargetUnits ()
      {
        return this->BuildingEnergyTargetUnits_;
      }

      void SimBuilding::
      BuildingEnergyTargetUnits (const BuildingEnergyTargetUnits_type& x)
      {
        this->BuildingEnergyTargetUnits_.set (x);
      }

      void SimBuilding::
      BuildingEnergyTargetUnits (const BuildingEnergyTargetUnits_optional& x)
      {
        this->BuildingEnergyTargetUnits_ = x;
      }

      void SimBuilding::
      BuildingEnergyTargetUnits (::std::auto_ptr< BuildingEnergyTargetUnits_type > x)
      {
        this->BuildingEnergyTargetUnits_.set (x);
      }

      const SimBuilding::BuildingEnergyTargetValue_optional& SimBuilding::
      BuildingEnergyTargetValue () const
      {
        return this->BuildingEnergyTargetValue_;
      }

      SimBuilding::BuildingEnergyTargetValue_optional& SimBuilding::
      BuildingEnergyTargetValue ()
      {
        return this->BuildingEnergyTargetValue_;
      }

      void SimBuilding::
      BuildingEnergyTargetValue (const BuildingEnergyTargetValue_type& x)
      {
        this->BuildingEnergyTargetValue_.set (x);
      }

      void SimBuilding::
      BuildingEnergyTargetValue (const BuildingEnergyTargetValue_optional& x)
      {
        this->BuildingEnergyTargetValue_ = x;
      }

      const SimBuilding::BuildingHeight_optional& SimBuilding::
      BuildingHeight () const
      {
        return this->BuildingHeight_;
      }

      SimBuilding::BuildingHeight_optional& SimBuilding::
      BuildingHeight ()
      {
        return this->BuildingHeight_;
      }

      void SimBuilding::
      BuildingHeight (const BuildingHeight_type& x)
      {
        this->BuildingHeight_.set (x);
      }

      void SimBuilding::
      BuildingHeight (const BuildingHeight_optional& x)
      {
        this->BuildingHeight_ = x;
      }

      const SimBuilding::BuildingGrossFloorArea_optional& SimBuilding::
      BuildingGrossFloorArea () const
      {
        return this->BuildingGrossFloorArea_;
      }

      SimBuilding::BuildingGrossFloorArea_optional& SimBuilding::
      BuildingGrossFloorArea ()
      {
        return this->BuildingGrossFloorArea_;
      }

      void SimBuilding::
      BuildingGrossFloorArea (const BuildingGrossFloorArea_type& x)
      {
        this->BuildingGrossFloorArea_.set (x);
      }

      void SimBuilding::
      BuildingGrossFloorArea (const BuildingGrossFloorArea_optional& x)
      {
        this->BuildingGrossFloorArea_ = x;
      }

      const SimBuilding::ClassRef_ConstEntByFunction_optional& SimBuilding::
      ClassRef_ConstEntByFunction () const
      {
        return this->ClassRef_ConstEntByFunction_;
      }

      SimBuilding::ClassRef_ConstEntByFunction_optional& SimBuilding::
      ClassRef_ConstEntByFunction ()
      {
        return this->ClassRef_ConstEntByFunction_;
      }

      void SimBuilding::
      ClassRef_ConstEntByFunction (const ClassRef_ConstEntByFunction_type& x)
      {
        this->ClassRef_ConstEntByFunction_.set (x);
      }

      void SimBuilding::
      ClassRef_ConstEntByFunction (const ClassRef_ConstEntByFunction_optional& x)
      {
        this->ClassRef_ConstEntByFunction_ = x;
      }

      void SimBuilding::
      ClassRef_ConstEntByFunction (::std::auto_ptr< ClassRef_ConstEntByFunction_type > x)
      {
        this->ClassRef_ConstEntByFunction_.set (x);
      }

      const SimBuilding::BuildingInSpatialContainer_optional& SimBuilding::
      BuildingInSpatialContainer () const
      {
        return this->BuildingInSpatialContainer_;
      }

      SimBuilding::BuildingInSpatialContainer_optional& SimBuilding::
      BuildingInSpatialContainer ()
      {
        return this->BuildingInSpatialContainer_;
      }

      void SimBuilding::
      BuildingInSpatialContainer (const BuildingInSpatialContainer_type& x)
      {
        this->BuildingInSpatialContainer_.set (x);
      }

      void SimBuilding::
      BuildingInSpatialContainer (const BuildingInSpatialContainer_optional& x)
      {
        this->BuildingInSpatialContainer_ = x;
      }

      void SimBuilding::
      BuildingInSpatialContainer (::std::auto_ptr< BuildingInSpatialContainer_type > x)
      {
        this->BuildingInSpatialContainer_.set (x);
      }

      const SimBuilding::Representation_optional& SimBuilding::
      Representation () const
      {
        return this->Representation_;
      }

      SimBuilding::Representation_optional& SimBuilding::
      Representation ()
      {
        return this->Representation_;
      }

      void SimBuilding::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimBuilding::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimBuilding::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimBuilding::ElevationOfTerrain_optional& SimBuilding::
      ElevationOfTerrain () const
      {
        return this->ElevationOfTerrain_;
      }

      SimBuilding::ElevationOfTerrain_optional& SimBuilding::
      ElevationOfTerrain ()
      {
        return this->ElevationOfTerrain_;
      }

      void SimBuilding::
      ElevationOfTerrain (const ElevationOfTerrain_type& x)
      {
        this->ElevationOfTerrain_.set (x);
      }

      void SimBuilding::
      ElevationOfTerrain (const ElevationOfTerrain_optional& x)
      {
        this->ElevationOfTerrain_ = x;
      }

      const SimBuilding::BuildingConstructionsTemplate_optional& SimBuilding::
      BuildingConstructionsTemplate () const
      {
        return this->BuildingConstructionsTemplate_;
      }

      SimBuilding::BuildingConstructionsTemplate_optional& SimBuilding::
      BuildingConstructionsTemplate ()
      {
        return this->BuildingConstructionsTemplate_;
      }

      void SimBuilding::
      BuildingConstructionsTemplate (const BuildingConstructionsTemplate_type& x)
      {
        this->BuildingConstructionsTemplate_.set (x);
      }

      void SimBuilding::
      BuildingConstructionsTemplate (const BuildingConstructionsTemplate_optional& x)
      {
        this->BuildingConstructionsTemplate_ = x;
      }

      void SimBuilding::
      BuildingConstructionsTemplate (::std::auto_ptr< BuildingConstructionsTemplate_type > x)
      {
        this->BuildingConstructionsTemplate_.set (x);
      }

      const SimBuilding::SpaceBoundsNotCurrent_optional& SimBuilding::
      SpaceBoundsNotCurrent () const
      {
        return this->SpaceBoundsNotCurrent_;
      }

      SimBuilding::SpaceBoundsNotCurrent_optional& SimBuilding::
      SpaceBoundsNotCurrent ()
      {
        return this->SpaceBoundsNotCurrent_;
      }

      void SimBuilding::
      SpaceBoundsNotCurrent (const SpaceBoundsNotCurrent_type& x)
      {
        this->SpaceBoundsNotCurrent_.set (x);
      }

      void SimBuilding::
      SpaceBoundsNotCurrent (const SpaceBoundsNotCurrent_optional& x)
      {
        this->SpaceBoundsNotCurrent_ = x;
      }

      const SimBuilding::DaylightControlsDefault_optional& SimBuilding::
      DaylightControlsDefault () const
      {
        return this->DaylightControlsDefault_;
      }

      SimBuilding::DaylightControlsDefault_optional& SimBuilding::
      DaylightControlsDefault ()
      {
        return this->DaylightControlsDefault_;
      }

      void SimBuilding::
      DaylightControlsDefault (const DaylightControlsDefault_type& x)
      {
        this->DaylightControlsDefault_.set (x);
      }

      void SimBuilding::
      DaylightControlsDefault (const DaylightControlsDefault_optional& x)
      {
        this->DaylightControlsDefault_ = x;
      }

      void SimBuilding::
      DaylightControlsDefault (::std::auto_ptr< DaylightControlsDefault_type > x)
      {
        this->DaylightControlsDefault_.set (x);
      }

      const SimBuilding::NatVentilationDefault_optional& SimBuilding::
      NatVentilationDefault () const
      {
        return this->NatVentilationDefault_;
      }

      SimBuilding::NatVentilationDefault_optional& SimBuilding::
      NatVentilationDefault ()
      {
        return this->NatVentilationDefault_;
      }

      void SimBuilding::
      NatVentilationDefault (const NatVentilationDefault_type& x)
      {
        this->NatVentilationDefault_.set (x);
      }

      void SimBuilding::
      NatVentilationDefault (const NatVentilationDefault_optional& x)
      {
        this->NatVentilationDefault_ = x;
      }

      void SimBuilding::
      NatVentilationDefault (::std::auto_ptr< NatVentilationDefault_type > x)
      {
        this->NatVentilationDefault_.set (x);
      }

      const SimBuilding::BuildingInfiltrationType_optional& SimBuilding::
      BuildingInfiltrationType () const
      {
        return this->BuildingInfiltrationType_;
      }

      SimBuilding::BuildingInfiltrationType_optional& SimBuilding::
      BuildingInfiltrationType ()
      {
        return this->BuildingInfiltrationType_;
      }

      void SimBuilding::
      BuildingInfiltrationType (const BuildingInfiltrationType_type& x)
      {
        this->BuildingInfiltrationType_.set (x);
      }

      void SimBuilding::
      BuildingInfiltrationType (const BuildingInfiltrationType_optional& x)
      {
        this->BuildingInfiltrationType_ = x;
      }

      void SimBuilding::
      BuildingInfiltrationType (::std::auto_ptr< BuildingInfiltrationType_type > x)
      {
        this->BuildingInfiltrationType_.set (x);
      }

      const SimBuilding::BuildingInfiltrationValue_optional& SimBuilding::
      BuildingInfiltrationValue () const
      {
        return this->BuildingInfiltrationValue_;
      }

      SimBuilding::BuildingInfiltrationValue_optional& SimBuilding::
      BuildingInfiltrationValue ()
      {
        return this->BuildingInfiltrationValue_;
      }

      void SimBuilding::
      BuildingInfiltrationValue (const BuildingInfiltrationValue_type& x)
      {
        this->BuildingInfiltrationValue_.set (x);
      }

      void SimBuilding::
      BuildingInfiltrationValue (const BuildingInfiltrationValue_optional& x)
      {
        this->BuildingInfiltrationValue_ = x;
      }

      const SimBuilding::TemplateOverrideValues_optional& SimBuilding::
      TemplateOverrideValues () const
      {
        return this->TemplateOverrideValues_;
      }

      SimBuilding::TemplateOverrideValues_optional& SimBuilding::
      TemplateOverrideValues ()
      {
        return this->TemplateOverrideValues_;
      }

      void SimBuilding::
      TemplateOverrideValues (const TemplateOverrideValues_type& x)
      {
        this->TemplateOverrideValues_.set (x);
      }

      void SimBuilding::
      TemplateOverrideValues (const TemplateOverrideValues_optional& x)
      {
        this->TemplateOverrideValues_ = x;
      }

      void SimBuilding::
      TemplateOverrideValues (::std::auto_ptr< TemplateOverrideValues_type > x)
      {
        this->TemplateOverrideValues_.set (x);
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
    namespace BuildingModel
    {
      // SimBuilding
      //

      SimBuilding::
      SimBuilding ()
      : ::schema::simxml::SimModelCore::SimSpatialStructureElement (),
        Name_ (this),
        BuildingAddress_ (this),
        BuildingDatumElevation_ (this),
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
        Representation_ (this),
        ElevationOfTerrain_ (this),
        BuildingConstructionsTemplate_ (this),
        SpaceBoundsNotCurrent_ (this),
        DaylightControlsDefault_ (this),
        NatVentilationDefault_ (this),
        BuildingInfiltrationType_ (this),
        BuildingInfiltrationValue_ (this),
        TemplateOverrideValues_ (this)
      {
      }

      SimBuilding::
      SimBuilding (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimSpatialStructureElement (RefId),
        Name_ (this),
        BuildingAddress_ (this),
        BuildingDatumElevation_ (this),
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
        Representation_ (this),
        ElevationOfTerrain_ (this),
        BuildingConstructionsTemplate_ (this),
        SpaceBoundsNotCurrent_ (this),
        DaylightControlsDefault_ (this),
        NatVentilationDefault_ (this),
        BuildingInfiltrationType_ (this),
        BuildingInfiltrationValue_ (this),
        TemplateOverrideValues_ (this)
      {
      }

      SimBuilding::
      SimBuilding (const SimBuilding& x,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimSpatialStructureElement (x, f, c),
        Name_ (x.Name_, f, this),
        BuildingAddress_ (x.BuildingAddress_, f, this),
        BuildingDatumElevation_ (x.BuildingDatumElevation_, f, this),
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
        Representation_ (x.Representation_, f, this),
        ElevationOfTerrain_ (x.ElevationOfTerrain_, f, this),
        BuildingConstructionsTemplate_ (x.BuildingConstructionsTemplate_, f, this),
        SpaceBoundsNotCurrent_ (x.SpaceBoundsNotCurrent_, f, this),
        DaylightControlsDefault_ (x.DaylightControlsDefault_, f, this),
        NatVentilationDefault_ (x.NatVentilationDefault_, f, this),
        BuildingInfiltrationType_ (x.BuildingInfiltrationType_, f, this),
        BuildingInfiltrationValue_ (x.BuildingInfiltrationValue_, f, this),
        TemplateOverrideValues_ (x.TemplateOverrideValues_, f, this)
      {
      }

      SimBuilding::
      SimBuilding (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimSpatialStructureElement (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        BuildingAddress_ (this),
        BuildingDatumElevation_ (this),
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
        Representation_ (this),
        ElevationOfTerrain_ (this),
        BuildingConstructionsTemplate_ (this),
        SpaceBoundsNotCurrent_ (this),
        DaylightControlsDefault_ (this),
        NatVentilationDefault_ (this),
        BuildingInfiltrationType_ (this),
        BuildingInfiltrationValue_ (this),
        TemplateOverrideValues_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBuilding::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimSpatialStructureElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          // BuildingAddress
          //
          if (n.name () == "BuildingAddress" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< BuildingAddress_type > r (
              BuildingAddress_traits::create (i, f, this));

            if (!this->BuildingAddress_)
            {
              this->BuildingAddress_.set (r);
              continue;
            }
          }

          // BuildingDatumElevation
          //
          if (n.name () == "BuildingDatumElevation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingDatumElevation_)
            {
              this->BuildingDatumElevation_.set (BuildingDatumElevation_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingOccupancyType
          //
          if (n.name () == "BuildingOccupancyType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
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
          if (n.name () == "BuildingGrossPlannedArea" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingGrossPlannedArea_)
            {
              this->BuildingGrossPlannedArea_.set (BuildingGrossPlannedArea_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingNumberofStoreys
          //
          if (n.name () == "BuildingNumberofStoreys" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingNumberofStoreys_)
            {
              this->BuildingNumberofStoreys_.set (BuildingNumberofStoreys_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingYearOfConstruction
          //
          if (n.name () == "BuildingYearOfConstruction" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
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
          if (n.name () == "BuildingisLandmarked" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
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
          if (n.name () == "BuildingEnergyTargetUnits" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
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
          if (n.name () == "BuildingEnergyTargetValue" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingEnergyTargetValue_)
            {
              this->BuildingEnergyTargetValue_.set (BuildingEnergyTargetValue_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingHeight
          //
          if (n.name () == "BuildingHeight" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingHeight_)
            {
              this->BuildingHeight_.set (BuildingHeight_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingGrossFloorArea
          //
          if (n.name () == "BuildingGrossFloorArea" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingGrossFloorArea_)
            {
              this->BuildingGrossFloorArea_.set (BuildingGrossFloorArea_traits::create (i, f, this));
              continue;
            }
          }

          // ClassRef_ConstEntByFunction
          //
          if (n.name () == "ClassRef_ConstEntByFunction" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
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
          if (n.name () == "BuildingInSpatialContainer" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< BuildingInSpatialContainer_type > r (
              BuildingInSpatialContainer_traits::create (i, f, this));

            if (!this->BuildingInSpatialContainer_)
            {
              this->BuildingInSpatialContainer_.set (r);
              continue;
            }
          }

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

          // ElevationOfTerrain
          //
          if (n.name () == "ElevationOfTerrain" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->ElevationOfTerrain_)
            {
              this->ElevationOfTerrain_.set (ElevationOfTerrain_traits::create (i, f, this));
              continue;
            }
          }

          // BuildingConstructionsTemplate
          //
          if (n.name () == "BuildingConstructionsTemplate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< BuildingConstructionsTemplate_type > r (
              BuildingConstructionsTemplate_traits::create (i, f, this));

            if (!this->BuildingConstructionsTemplate_)
            {
              this->BuildingConstructionsTemplate_.set (r);
              continue;
            }
          }

          // SpaceBoundsNotCurrent
          //
          if (n.name () == "SpaceBoundsNotCurrent" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SpaceBoundsNotCurrent_)
            {
              this->SpaceBoundsNotCurrent_.set (SpaceBoundsNotCurrent_traits::create (i, f, this));
              continue;
            }
          }

          // DaylightControlsDefault
          //
          if (n.name () == "DaylightControlsDefault" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< DaylightControlsDefault_type > r (
              DaylightControlsDefault_traits::create (i, f, this));

            if (!this->DaylightControlsDefault_)
            {
              this->DaylightControlsDefault_.set (r);
              continue;
            }
          }

          // NatVentilationDefault
          //
          if (n.name () == "NatVentilationDefault" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< NatVentilationDefault_type > r (
              NatVentilationDefault_traits::create (i, f, this));

            if (!this->NatVentilationDefault_)
            {
              this->NatVentilationDefault_.set (r);
              continue;
            }
          }

          // BuildingInfiltrationType
          //
          if (n.name () == "BuildingInfiltrationType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< BuildingInfiltrationType_type > r (
              BuildingInfiltrationType_traits::create (i, f, this));

            if (!this->BuildingInfiltrationType_)
            {
              this->BuildingInfiltrationType_.set (r);
              continue;
            }
          }

          // BuildingInfiltrationValue
          //
          if (n.name () == "BuildingInfiltrationValue" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->BuildingInfiltrationValue_)
            {
              this->BuildingInfiltrationValue_.set (BuildingInfiltrationValue_traits::create (i, f, this));
              continue;
            }
          }

          // TemplateOverrideValues
          //
          if (n.name () == "TemplateOverrideValues" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< TemplateOverrideValues_type > r (
              TemplateOverrideValues_traits::create (i, f, this));

            if (!this->TemplateOverrideValues_)
            {
              this->TemplateOverrideValues_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBuilding* SimBuilding::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBuilding (*this, f, c);
      }

      SimBuilding& SimBuilding::
      operator= (const SimBuilding& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimSpatialStructureElement& > (*this) = x;
          this->Name_ = x.Name_;
          this->BuildingAddress_ = x.BuildingAddress_;
          this->BuildingDatumElevation_ = x.BuildingDatumElevation_;
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
          this->Representation_ = x.Representation_;
          this->ElevationOfTerrain_ = x.ElevationOfTerrain_;
          this->BuildingConstructionsTemplate_ = x.BuildingConstructionsTemplate_;
          this->SpaceBoundsNotCurrent_ = x.SpaceBoundsNotCurrent_;
          this->DaylightControlsDefault_ = x.DaylightControlsDefault_;
          this->NatVentilationDefault_ = x.NatVentilationDefault_;
          this->BuildingInfiltrationType_ = x.BuildingInfiltrationType_;
          this->BuildingInfiltrationValue_ = x.BuildingInfiltrationValue_;
          this->TemplateOverrideValues_ = x.TemplateOverrideValues_;
        }

        return *this;
      }

      SimBuilding::
      ~SimBuilding ()
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

