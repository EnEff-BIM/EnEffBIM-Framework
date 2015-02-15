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

#include "SimMaterial_OpaqueMaterial_Vegetation.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimMaterial_OpaqueMaterial_Vegetation
      // 

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_Rough_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Rough () const
      {
        return this->SimMaterial_Rough_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_Rough_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Rough ()
      {
        return this->SimMaterial_Rough_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Rough (const SimMaterial_Rough_type& x)
      {
        this->SimMaterial_Rough_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Rough (const SimMaterial_Rough_optional& x)
      {
        this->SimMaterial_Rough_ = x;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Rough (::std::auto_ptr< SimMaterial_Rough_type > x)
      {
        this->SimMaterial_Rough_.set (x);
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_Thick_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Thick () const
      {
        return this->SimMaterial_Thick_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_Thick_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Thick ()
      {
        return this->SimMaterial_Thick_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Thick (const SimMaterial_Thick_type& x)
      {
        this->SimMaterial_Thick_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_Thick (const SimMaterial_Thick_optional& x)
      {
        this->SimMaterial_Thick_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_ThermalAbsorptance_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ThermalAbsorptance () const
      {
        return this->SimMaterial_ThermalAbsorptance_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_ThermalAbsorptance_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ThermalAbsorptance ()
      {
        return this->SimMaterial_ThermalAbsorptance_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ThermalAbsorptance (const SimMaterial_ThermalAbsorptance_type& x)
      {
        this->SimMaterial_ThermalAbsorptance_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ThermalAbsorptance (const SimMaterial_ThermalAbsorptance_optional& x)
      {
        this->SimMaterial_ThermalAbsorptance_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SolarAbsorptance_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SolarAbsorptance () const
      {
        return this->SimMaterial_SolarAbsorptance_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SolarAbsorptance_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SolarAbsorptance ()
      {
        return this->SimMaterial_SolarAbsorptance_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SolarAbsorptance (const SimMaterial_SolarAbsorptance_type& x)
      {
        this->SimMaterial_SolarAbsorptance_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SolarAbsorptance (const SimMaterial_SolarAbsorptance_optional& x)
      {
        this->SimMaterial_SolarAbsorptance_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_VisAbsorptance_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_VisAbsorptance () const
      {
        return this->SimMaterial_VisAbsorptance_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_VisAbsorptance_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_VisAbsorptance ()
      {
        return this->SimMaterial_VisAbsorptance_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_VisAbsorptance (const SimMaterial_VisAbsorptance_type& x)
      {
        this->SimMaterial_VisAbsorptance_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_VisAbsorptance (const SimMaterial_VisAbsorptance_optional& x)
      {
        this->SimMaterial_VisAbsorptance_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_HeightPlants_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_HeightPlants () const
      {
        return this->SimMaterial_HeightPlants_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_HeightPlants_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_HeightPlants ()
      {
        return this->SimMaterial_HeightPlants_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_HeightPlants (const SimMaterial_HeightPlants_type& x)
      {
        this->SimMaterial_HeightPlants_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_HeightPlants (const SimMaterial_HeightPlants_optional& x)
      {
        this->SimMaterial_HeightPlants_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_LeafAreadex_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafAreadex () const
      {
        return this->SimMaterial_LeafAreadex_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_LeafAreadex_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafAreadex ()
      {
        return this->SimMaterial_LeafAreadex_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafAreadex (const SimMaterial_LeafAreadex_type& x)
      {
        this->SimMaterial_LeafAreadex_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafAreadex (const SimMaterial_LeafAreadex_optional& x)
      {
        this->SimMaterial_LeafAreadex_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_LeafReflectivity_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafReflectivity () const
      {
        return this->SimMaterial_LeafReflectivity_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_LeafReflectivity_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafReflectivity ()
      {
        return this->SimMaterial_LeafReflectivity_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafReflectivity (const SimMaterial_LeafReflectivity_type& x)
      {
        this->SimMaterial_LeafReflectivity_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafReflectivity (const SimMaterial_LeafReflectivity_optional& x)
      {
        this->SimMaterial_LeafReflectivity_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_LeafEmis_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafEmis () const
      {
        return this->SimMaterial_LeafEmis_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_LeafEmis_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafEmis ()
      {
        return this->SimMaterial_LeafEmis_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafEmis (const SimMaterial_LeafEmis_type& x)
      {
        this->SimMaterial_LeafEmis_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_LeafEmis (const SimMaterial_LeafEmis_optional& x)
      {
        this->SimMaterial_LeafEmis_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_MinStomatalResist_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MinStomatalResist () const
      {
        return this->SimMaterial_MinStomatalResist_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_MinStomatalResist_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MinStomatalResist ()
      {
        return this->SimMaterial_MinStomatalResist_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MinStomatalResist (const SimMaterial_MinStomatalResist_type& x)
      {
        this->SimMaterial_MinStomatalResist_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MinStomatalResist (const SimMaterial_MinStomatalResist_optional& x)
      {
        this->SimMaterial_MinStomatalResist_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SoilLayerName_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SoilLayerName () const
      {
        return this->SimMaterial_SoilLayerName_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SoilLayerName_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SoilLayerName ()
      {
        return this->SimMaterial_SoilLayerName_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SoilLayerName (const SimMaterial_SoilLayerName_type& x)
      {
        this->SimMaterial_SoilLayerName_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SoilLayerName (const SimMaterial_SoilLayerName_optional& x)
      {
        this->SimMaterial_SoilLayerName_ = x;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SoilLayerName (::std::auto_ptr< SimMaterial_SoilLayerName_type > x)
      {
        this->SimMaterial_SoilLayerName_.set (x);
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_CondDrySoil_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_CondDrySoil () const
      {
        return this->SimMaterial_CondDrySoil_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_CondDrySoil_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_CondDrySoil ()
      {
        return this->SimMaterial_CondDrySoil_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_CondDrySoil (const SimMaterial_CondDrySoil_type& x)
      {
        this->SimMaterial_CondDrySoil_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_CondDrySoil (const SimMaterial_CondDrySoil_optional& x)
      {
        this->SimMaterial_CondDrySoil_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_DensityDrySoil_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_DensityDrySoil () const
      {
        return this->SimMaterial_DensityDrySoil_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_DensityDrySoil_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_DensityDrySoil ()
      {
        return this->SimMaterial_DensityDrySoil_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_DensityDrySoil (const SimMaterial_DensityDrySoil_type& x)
      {
        this->SimMaterial_DensityDrySoil_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_DensityDrySoil (const SimMaterial_DensityDrySoil_optional& x)
      {
        this->SimMaterial_DensityDrySoil_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SpecificHeatDrySoil_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SpecificHeatDrySoil () const
      {
        return this->SimMaterial_SpecificHeatDrySoil_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SpecificHeatDrySoil_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SpecificHeatDrySoil ()
      {
        return this->SimMaterial_SpecificHeatDrySoil_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SpecificHeatDrySoil (const SimMaterial_SpecificHeatDrySoil_type& x)
      {
        this->SimMaterial_SpecificHeatDrySoil_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SpecificHeatDrySoil (const SimMaterial_SpecificHeatDrySoil_optional& x)
      {
        this->SimMaterial_SpecificHeatDrySoil_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SaturVolMoistContTheSoilLayer_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SaturVolMoistContTheSoilLayer () const
      {
        return this->SimMaterial_SaturVolMoistContTheSoilLayer_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_SaturVolMoistContTheSoilLayer_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SaturVolMoistContTheSoilLayer ()
      {
        return this->SimMaterial_SaturVolMoistContTheSoilLayer_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SaturVolMoistContTheSoilLayer (const SimMaterial_SaturVolMoistContTheSoilLayer_type& x)
      {
        this->SimMaterial_SaturVolMoistContTheSoilLayer_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_SaturVolMoistContTheSoilLayer (const SimMaterial_SaturVolMoistContTheSoilLayer_optional& x)
      {
        this->SimMaterial_SaturVolMoistContTheSoilLayer_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_ResidVolMoistContTheSoilLayer_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ResidVolMoistContTheSoilLayer () const
      {
        return this->SimMaterial_ResidVolMoistContTheSoilLayer_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_ResidVolMoistContTheSoilLayer_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ResidVolMoistContTheSoilLayer ()
      {
        return this->SimMaterial_ResidVolMoistContTheSoilLayer_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ResidVolMoistContTheSoilLayer (const SimMaterial_ResidVolMoistContTheSoilLayer_type& x)
      {
        this->SimMaterial_ResidVolMoistContTheSoilLayer_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_ResidVolMoistContTheSoilLayer (const SimMaterial_ResidVolMoistContTheSoilLayer_optional& x)
      {
        this->SimMaterial_ResidVolMoistContTheSoilLayer_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_InitVolMoistContTheSoilLayer_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_InitVolMoistContTheSoilLayer () const
      {
        return this->SimMaterial_InitVolMoistContTheSoilLayer_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_InitVolMoistContTheSoilLayer_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_InitVolMoistContTheSoilLayer ()
      {
        return this->SimMaterial_InitVolMoistContTheSoilLayer_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_InitVolMoistContTheSoilLayer (const SimMaterial_InitVolMoistContTheSoilLayer_type& x)
      {
        this->SimMaterial_InitVolMoistContTheSoilLayer_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_InitVolMoistContTheSoilLayer (const SimMaterial_InitVolMoistContTheSoilLayer_optional& x)
      {
        this->SimMaterial_InitVolMoistContTheSoilLayer_ = x;
      }

      const SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_MoistDiffusionCalcMethod_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MoistDiffusionCalcMethod () const
      {
        return this->SimMaterial_MoistDiffusionCalcMethod_;
      }

      SimMaterial_OpaqueMaterial_Vegetation::SimMaterial_MoistDiffusionCalcMethod_optional& SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MoistDiffusionCalcMethod ()
      {
        return this->SimMaterial_MoistDiffusionCalcMethod_;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MoistDiffusionCalcMethod (const SimMaterial_MoistDiffusionCalcMethod_type& x)
      {
        this->SimMaterial_MoistDiffusionCalcMethod_.set (x);
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MoistDiffusionCalcMethod (const SimMaterial_MoistDiffusionCalcMethod_optional& x)
      {
        this->SimMaterial_MoistDiffusionCalcMethod_ = x;
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_MoistDiffusionCalcMethod (::std::auto_ptr< SimMaterial_MoistDiffusionCalcMethod_type > x)
      {
        this->SimMaterial_MoistDiffusionCalcMethod_.set (x);
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
    namespace ResourcesGeneral
    {
      // SimMaterial_OpaqueMaterial_Vegetation
      //

      SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_OpaqueMaterial_Vegetation (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_OpaqueMaterial (RefId),
        SimMaterial_Rough_ (this),
        SimMaterial_Thick_ (this),
        SimMaterial_ThermalAbsorptance_ (this),
        SimMaterial_SolarAbsorptance_ (this),
        SimMaterial_VisAbsorptance_ (this),
        SimMaterial_HeightPlants_ (this),
        SimMaterial_LeafAreadex_ (this),
        SimMaterial_LeafReflectivity_ (this),
        SimMaterial_LeafEmis_ (this),
        SimMaterial_MinStomatalResist_ (this),
        SimMaterial_SoilLayerName_ (this),
        SimMaterial_CondDrySoil_ (this),
        SimMaterial_DensityDrySoil_ (this),
        SimMaterial_SpecificHeatDrySoil_ (this),
        SimMaterial_SaturVolMoistContTheSoilLayer_ (this),
        SimMaterial_ResidVolMoistContTheSoilLayer_ (this),
        SimMaterial_InitVolMoistContTheSoilLayer_ (this),
        SimMaterial_MoistDiffusionCalcMethod_ (this)
      {
      }

      SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_OpaqueMaterial_Vegetation (const SimMaterial_OpaqueMaterial_Vegetation& x,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_OpaqueMaterial (x, f, c),
        SimMaterial_Rough_ (x.SimMaterial_Rough_, f, this),
        SimMaterial_Thick_ (x.SimMaterial_Thick_, f, this),
        SimMaterial_ThermalAbsorptance_ (x.SimMaterial_ThermalAbsorptance_, f, this),
        SimMaterial_SolarAbsorptance_ (x.SimMaterial_SolarAbsorptance_, f, this),
        SimMaterial_VisAbsorptance_ (x.SimMaterial_VisAbsorptance_, f, this),
        SimMaterial_HeightPlants_ (x.SimMaterial_HeightPlants_, f, this),
        SimMaterial_LeafAreadex_ (x.SimMaterial_LeafAreadex_, f, this),
        SimMaterial_LeafReflectivity_ (x.SimMaterial_LeafReflectivity_, f, this),
        SimMaterial_LeafEmis_ (x.SimMaterial_LeafEmis_, f, this),
        SimMaterial_MinStomatalResist_ (x.SimMaterial_MinStomatalResist_, f, this),
        SimMaterial_SoilLayerName_ (x.SimMaterial_SoilLayerName_, f, this),
        SimMaterial_CondDrySoil_ (x.SimMaterial_CondDrySoil_, f, this),
        SimMaterial_DensityDrySoil_ (x.SimMaterial_DensityDrySoil_, f, this),
        SimMaterial_SpecificHeatDrySoil_ (x.SimMaterial_SpecificHeatDrySoil_, f, this),
        SimMaterial_SaturVolMoistContTheSoilLayer_ (x.SimMaterial_SaturVolMoistContTheSoilLayer_, f, this),
        SimMaterial_ResidVolMoistContTheSoilLayer_ (x.SimMaterial_ResidVolMoistContTheSoilLayer_, f, this),
        SimMaterial_InitVolMoistContTheSoilLayer_ (x.SimMaterial_InitVolMoistContTheSoilLayer_, f, this),
        SimMaterial_MoistDiffusionCalcMethod_ (x.SimMaterial_MoistDiffusionCalcMethod_, f, this)
      {
      }

      SimMaterial_OpaqueMaterial_Vegetation::
      SimMaterial_OpaqueMaterial_Vegetation (const ::xercesc::DOMElement& e,
                                             ::xml_schema::flags f,
                                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_OpaqueMaterial (e, f | ::xml_schema::flags::base, c),
        SimMaterial_Rough_ (this),
        SimMaterial_Thick_ (this),
        SimMaterial_ThermalAbsorptance_ (this),
        SimMaterial_SolarAbsorptance_ (this),
        SimMaterial_VisAbsorptance_ (this),
        SimMaterial_HeightPlants_ (this),
        SimMaterial_LeafAreadex_ (this),
        SimMaterial_LeafReflectivity_ (this),
        SimMaterial_LeafEmis_ (this),
        SimMaterial_MinStomatalResist_ (this),
        SimMaterial_SoilLayerName_ (this),
        SimMaterial_CondDrySoil_ (this),
        SimMaterial_DensityDrySoil_ (this),
        SimMaterial_SpecificHeatDrySoil_ (this),
        SimMaterial_SaturVolMoistContTheSoilLayer_ (this),
        SimMaterial_ResidVolMoistContTheSoilLayer_ (this),
        SimMaterial_InitVolMoistContTheSoilLayer_ (this),
        SimMaterial_MoistDiffusionCalcMethod_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterial_OpaqueMaterial_Vegetation::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimMaterial_OpaqueMaterial::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMaterial_Rough
          //
          if (n.name () == "SimMaterial_Rough" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_Rough_type > r (
              SimMaterial_Rough_traits::create (i, f, this));

            if (!this->SimMaterial_Rough_)
            {
              this->SimMaterial_Rough_.set (r);
              continue;
            }
          }

          // SimMaterial_Thick
          //
          if (n.name () == "SimMaterial_Thick" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_Thick_)
            {
              this->SimMaterial_Thick_.set (SimMaterial_Thick_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ThermalAbsorptance
          //
          if (n.name () == "SimMaterial_ThermalAbsorptance" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_ThermalAbsorptance_)
            {
              this->SimMaterial_ThermalAbsorptance_.set (SimMaterial_ThermalAbsorptance_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_SolarAbsorptance
          //
          if (n.name () == "SimMaterial_SolarAbsorptance" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_SolarAbsorptance_)
            {
              this->SimMaterial_SolarAbsorptance_.set (SimMaterial_SolarAbsorptance_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_VisAbsorptance
          //
          if (n.name () == "SimMaterial_VisAbsorptance" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_VisAbsorptance_)
            {
              this->SimMaterial_VisAbsorptance_.set (SimMaterial_VisAbsorptance_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_HeightPlants
          //
          if (n.name () == "SimMaterial_HeightPlants" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_HeightPlants_)
            {
              this->SimMaterial_HeightPlants_.set (SimMaterial_HeightPlants_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_LeafAreadex
          //
          if (n.name () == "SimMaterial_LeafAreadex" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_LeafAreadex_)
            {
              this->SimMaterial_LeafAreadex_.set (SimMaterial_LeafAreadex_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_LeafReflectivity
          //
          if (n.name () == "SimMaterial_LeafReflectivity" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_LeafReflectivity_)
            {
              this->SimMaterial_LeafReflectivity_.set (SimMaterial_LeafReflectivity_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_LeafEmis
          //
          if (n.name () == "SimMaterial_LeafEmis" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_LeafEmis_)
            {
              this->SimMaterial_LeafEmis_.set (SimMaterial_LeafEmis_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_MinStomatalResist
          //
          if (n.name () == "SimMaterial_MinStomatalResist" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_MinStomatalResist_)
            {
              this->SimMaterial_MinStomatalResist_.set (SimMaterial_MinStomatalResist_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_SoilLayerName
          //
          if (n.name () == "SimMaterial_SoilLayerName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_SoilLayerName_type > r (
              SimMaterial_SoilLayerName_traits::create (i, f, this));

            if (!this->SimMaterial_SoilLayerName_)
            {
              this->SimMaterial_SoilLayerName_.set (r);
              continue;
            }
          }

          // SimMaterial_CondDrySoil
          //
          if (n.name () == "SimMaterial_CondDrySoil" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_CondDrySoil_)
            {
              this->SimMaterial_CondDrySoil_.set (SimMaterial_CondDrySoil_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_DensityDrySoil
          //
          if (n.name () == "SimMaterial_DensityDrySoil" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_DensityDrySoil_)
            {
              this->SimMaterial_DensityDrySoil_.set (SimMaterial_DensityDrySoil_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_SpecificHeatDrySoil
          //
          if (n.name () == "SimMaterial_SpecificHeatDrySoil" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_SpecificHeatDrySoil_)
            {
              this->SimMaterial_SpecificHeatDrySoil_.set (SimMaterial_SpecificHeatDrySoil_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_SaturVolMoistContTheSoilLayer
          //
          if (n.name () == "SimMaterial_SaturVolMoistContTheSoilLayer" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_SaturVolMoistContTheSoilLayer_)
            {
              this->SimMaterial_SaturVolMoistContTheSoilLayer_.set (SimMaterial_SaturVolMoistContTheSoilLayer_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ResidVolMoistContTheSoilLayer
          //
          if (n.name () == "SimMaterial_ResidVolMoistContTheSoilLayer" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_ResidVolMoistContTheSoilLayer_)
            {
              this->SimMaterial_ResidVolMoistContTheSoilLayer_.set (SimMaterial_ResidVolMoistContTheSoilLayer_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_InitVolMoistContTheSoilLayer
          //
          if (n.name () == "SimMaterial_InitVolMoistContTheSoilLayer" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_InitVolMoistContTheSoilLayer_)
            {
              this->SimMaterial_InitVolMoistContTheSoilLayer_.set (SimMaterial_InitVolMoistContTheSoilLayer_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_MoistDiffusionCalcMethod
          //
          if (n.name () == "SimMaterial_MoistDiffusionCalcMethod" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_MoistDiffusionCalcMethod_type > r (
              SimMaterial_MoistDiffusionCalcMethod_traits::create (i, f, this));

            if (!this->SimMaterial_MoistDiffusionCalcMethod_)
            {
              this->SimMaterial_MoistDiffusionCalcMethod_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimMaterial_OpaqueMaterial_Vegetation* SimMaterial_OpaqueMaterial_Vegetation::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterial_OpaqueMaterial_Vegetation (*this, f, c);
      }

      SimMaterial_OpaqueMaterial_Vegetation& SimMaterial_OpaqueMaterial_Vegetation::
      operator= (const SimMaterial_OpaqueMaterial_Vegetation& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimMaterial_OpaqueMaterial& > (*this) = x;
          this->SimMaterial_Rough_ = x.SimMaterial_Rough_;
          this->SimMaterial_Thick_ = x.SimMaterial_Thick_;
          this->SimMaterial_ThermalAbsorptance_ = x.SimMaterial_ThermalAbsorptance_;
          this->SimMaterial_SolarAbsorptance_ = x.SimMaterial_SolarAbsorptance_;
          this->SimMaterial_VisAbsorptance_ = x.SimMaterial_VisAbsorptance_;
          this->SimMaterial_HeightPlants_ = x.SimMaterial_HeightPlants_;
          this->SimMaterial_LeafAreadex_ = x.SimMaterial_LeafAreadex_;
          this->SimMaterial_LeafReflectivity_ = x.SimMaterial_LeafReflectivity_;
          this->SimMaterial_LeafEmis_ = x.SimMaterial_LeafEmis_;
          this->SimMaterial_MinStomatalResist_ = x.SimMaterial_MinStomatalResist_;
          this->SimMaterial_SoilLayerName_ = x.SimMaterial_SoilLayerName_;
          this->SimMaterial_CondDrySoil_ = x.SimMaterial_CondDrySoil_;
          this->SimMaterial_DensityDrySoil_ = x.SimMaterial_DensityDrySoil_;
          this->SimMaterial_SpecificHeatDrySoil_ = x.SimMaterial_SpecificHeatDrySoil_;
          this->SimMaterial_SaturVolMoistContTheSoilLayer_ = x.SimMaterial_SaturVolMoistContTheSoilLayer_;
          this->SimMaterial_ResidVolMoistContTheSoilLayer_ = x.SimMaterial_ResidVolMoistContTheSoilLayer_;
          this->SimMaterial_InitVolMoistContTheSoilLayer_ = x.SimMaterial_InitVolMoistContTheSoilLayer_;
          this->SimMaterial_MoistDiffusionCalcMethod_ = x.SimMaterial_MoistDiffusionCalcMethod_;
        }

        return *this;
      }

      SimMaterial_OpaqueMaterial_Vegetation::
      ~SimMaterial_OpaqueMaterial_Vegetation ()
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
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

