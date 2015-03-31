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

#include "SimProject.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimProject
      // 

      const SimProject::Name_optional& SimProject::
      Name () const
      {
        return this->Name_;
      }

      SimProject::Name_optional& SimProject::
      Name ()
      {
        return this->Name_;
      }

      void SimProject::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimProject::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimProject::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimProject::ProjectPhase_optional& SimProject::
      ProjectPhase () const
      {
        return this->ProjectPhase_;
      }

      SimProject::ProjectPhase_optional& SimProject::
      ProjectPhase ()
      {
        return this->ProjectPhase_;
      }

      void SimProject::
      ProjectPhase (const ProjectPhase_type& x)
      {
        this->ProjectPhase_.set (x);
      }

      void SimProject::
      ProjectPhase (const ProjectPhase_optional& x)
      {
        this->ProjectPhase_ = x;
      }

      void SimProject::
      ProjectPhase (::std::auto_ptr< ProjectPhase_type > x)
      {
        this->ProjectPhase_.set (x);
      }

      const SimProject::ProjectClientOwner_optional& SimProject::
      ProjectClientOwner () const
      {
        return this->ProjectClientOwner_;
      }

      SimProject::ProjectClientOwner_optional& SimProject::
      ProjectClientOwner ()
      {
        return this->ProjectClientOwner_;
      }

      void SimProject::
      ProjectClientOwner (const ProjectClientOwner_type& x)
      {
        this->ProjectClientOwner_.set (x);
      }

      void SimProject::
      ProjectClientOwner (const ProjectClientOwner_optional& x)
      {
        this->ProjectClientOwner_ = x;
      }

      void SimProject::
      ProjectClientOwner (::std::auto_ptr< ProjectClientOwner_type > x)
      {
        this->ProjectClientOwner_.set (x);
      }

      const SimProject::ProjectArchitect_optional& SimProject::
      ProjectArchitect () const
      {
        return this->ProjectArchitect_;
      }

      SimProject::ProjectArchitect_optional& SimProject::
      ProjectArchitect ()
      {
        return this->ProjectArchitect_;
      }

      void SimProject::
      ProjectArchitect (const ProjectArchitect_type& x)
      {
        this->ProjectArchitect_.set (x);
      }

      void SimProject::
      ProjectArchitect (const ProjectArchitect_optional& x)
      {
        this->ProjectArchitect_ = x;
      }

      void SimProject::
      ProjectArchitect (::std::auto_ptr< ProjectArchitect_type > x)
      {
        this->ProjectArchitect_.set (x);
      }

      const SimProject::ProjectUnits_optional& SimProject::
      ProjectUnits () const
      {
        return this->ProjectUnits_;
      }

      SimProject::ProjectUnits_optional& SimProject::
      ProjectUnits ()
      {
        return this->ProjectUnits_;
      }

      void SimProject::
      ProjectUnits (const ProjectUnits_type& x)
      {
        this->ProjectUnits_.set (x);
      }

      void SimProject::
      ProjectUnits (const ProjectUnits_optional& x)
      {
        this->ProjectUnits_ = x;
      }

      void SimProject::
      ProjectUnits (::std::auto_ptr< ProjectUnits_type > x)
      {
        this->ProjectUnits_.set (x);
      }

      const SimProject::_3DModelRepresentationContexts_optional& SimProject::
      _3DModelRepresentationContexts () const
      {
        return this->_3DModelRepresentationContexts_;
      }

      SimProject::_3DModelRepresentationContexts_optional& SimProject::
      _3DModelRepresentationContexts ()
      {
        return this->_3DModelRepresentationContexts_;
      }

      void SimProject::
      _3DModelRepresentationContexts (const _3DModelRepresentationContexts_type& x)
      {
        this->_3DModelRepresentationContexts_.set (x);
      }

      void SimProject::
      _3DModelRepresentationContexts (const _3DModelRepresentationContexts_optional& x)
      {
        this->_3DModelRepresentationContexts_ = x;
      }

      void SimProject::
      _3DModelRepresentationContexts (::std::auto_ptr< _3DModelRepresentationContexts_type > x)
      {
        this->_3DModelRepresentationContexts_.set (x);
      }

      const SimProject::_2DModelRepresentationContexts_optional& SimProject::
      _2DModelRepresentationContexts () const
      {
        return this->_2DModelRepresentationContexts_;
      }

      SimProject::_2DModelRepresentationContexts_optional& SimProject::
      _2DModelRepresentationContexts ()
      {
        return this->_2DModelRepresentationContexts_;
      }

      void SimProject::
      _2DModelRepresentationContexts (const _2DModelRepresentationContexts_type& x)
      {
        this->_2DModelRepresentationContexts_.set (x);
      }

      void SimProject::
      _2DModelRepresentationContexts (const _2DModelRepresentationContexts_optional& x)
      {
        this->_2DModelRepresentationContexts_ = x;
      }

      void SimProject::
      _2DModelRepresentationContexts (::std::auto_ptr< _2DModelRepresentationContexts_type > x)
      {
        this->_2DModelRepresentationContexts_.set (x);
      }

      const SimProject::Representation_optional& SimProject::
      Representation () const
      {
        return this->Representation_;
      }

      SimProject::Representation_optional& SimProject::
      Representation ()
      {
        return this->Representation_;
      }

      void SimProject::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimProject::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimProject::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimProject::UnitsInContext_optional& SimProject::
      UnitsInContext () const
      {
        return this->UnitsInContext_;
      }

      SimProject::UnitsInContext_optional& SimProject::
      UnitsInContext ()
      {
        return this->UnitsInContext_;
      }

      void SimProject::
      UnitsInContext (const UnitsInContext_type& x)
      {
        this->UnitsInContext_.set (x);
      }

      void SimProject::
      UnitsInContext (const UnitsInContext_optional& x)
      {
        this->UnitsInContext_ = x;
      }

      void SimProject::
      UnitsInContext (::std::auto_ptr< UnitsInContext_type > x)
      {
        this->UnitsInContext_.set (x);
      }

      const SimProject::WeatherLocationRegion_optional& SimProject::
      WeatherLocationRegion () const
      {
        return this->WeatherLocationRegion_;
      }

      SimProject::WeatherLocationRegion_optional& SimProject::
      WeatherLocationRegion ()
      {
        return this->WeatherLocationRegion_;
      }

      void SimProject::
      WeatherLocationRegion (const WeatherLocationRegion_type& x)
      {
        this->WeatherLocationRegion_.set (x);
      }

      void SimProject::
      WeatherLocationRegion (const WeatherLocationRegion_optional& x)
      {
        this->WeatherLocationRegion_ = x;
      }

      void SimProject::
      WeatherLocationRegion (::std::auto_ptr< WeatherLocationRegion_type > x)
      {
        this->WeatherLocationRegion_.set (x);
      }

      const SimProject::WeatherLocationCity_optional& SimProject::
      WeatherLocationCity () const
      {
        return this->WeatherLocationCity_;
      }

      SimProject::WeatherLocationCity_optional& SimProject::
      WeatherLocationCity ()
      {
        return this->WeatherLocationCity_;
      }

      void SimProject::
      WeatherLocationCity (const WeatherLocationCity_type& x)
      {
        this->WeatherLocationCity_.set (x);
      }

      void SimProject::
      WeatherLocationCity (const WeatherLocationCity_optional& x)
      {
        this->WeatherLocationCity_ = x;
      }

      void SimProject::
      WeatherLocationCity (::std::auto_ptr< WeatherLocationCity_type > x)
      {
        this->WeatherLocationCity_.set (x);
      }

      const SimProject::WeatherLocationID_optional& SimProject::
      WeatherLocationID () const
      {
        return this->WeatherLocationID_;
      }

      SimProject::WeatherLocationID_optional& SimProject::
      WeatherLocationID ()
      {
        return this->WeatherLocationID_;
      }

      void SimProject::
      WeatherLocationID (const WeatherLocationID_type& x)
      {
        this->WeatherLocationID_.set (x);
      }

      void SimProject::
      WeatherLocationID (const WeatherLocationID_optional& x)
      {
        this->WeatherLocationID_ = x;
      }

      void SimProject::
      WeatherLocationID (::std::auto_ptr< WeatherLocationID_type > x)
      {
        this->WeatherLocationID_.set (x);
      }

      const SimProject::EnergyStd_MinsReqs_optional& SimProject::
      EnergyStd_MinsReqs () const
      {
        return this->EnergyStd_MinsReqs_;
      }

      SimProject::EnergyStd_MinsReqs_optional& SimProject::
      EnergyStd_MinsReqs ()
      {
        return this->EnergyStd_MinsReqs_;
      }

      void SimProject::
      EnergyStd_MinsReqs (const EnergyStd_MinsReqs_type& x)
      {
        this->EnergyStd_MinsReqs_.set (x);
      }

      void SimProject::
      EnergyStd_MinsReqs (const EnergyStd_MinsReqs_optional& x)
      {
        this->EnergyStd_MinsReqs_ = x;
      }

      void SimProject::
      EnergyStd_MinsReqs (::std::auto_ptr< EnergyStd_MinsReqs_type > x)
      {
        this->EnergyStd_MinsReqs_.set (x);
      }

      const SimProject::Use_MinReg_Category_1_optional& SimProject::
      Use_MinReg_Category_1 () const
      {
        return this->Use_MinReg_Category_1_;
      }

      SimProject::Use_MinReg_Category_1_optional& SimProject::
      Use_MinReg_Category_1 ()
      {
        return this->Use_MinReg_Category_1_;
      }

      void SimProject::
      Use_MinReg_Category_1 (const Use_MinReg_Category_1_type& x)
      {
        this->Use_MinReg_Category_1_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_1 (const Use_MinReg_Category_1_optional& x)
      {
        this->Use_MinReg_Category_1_ = x;
      }

      const SimProject::Use_MinReg_Category_2_optional& SimProject::
      Use_MinReg_Category_2 () const
      {
        return this->Use_MinReg_Category_2_;
      }

      SimProject::Use_MinReg_Category_2_optional& SimProject::
      Use_MinReg_Category_2 ()
      {
        return this->Use_MinReg_Category_2_;
      }

      void SimProject::
      Use_MinReg_Category_2 (const Use_MinReg_Category_2_type& x)
      {
        this->Use_MinReg_Category_2_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_2 (const Use_MinReg_Category_2_optional& x)
      {
        this->Use_MinReg_Category_2_ = x;
      }

      const SimProject::Use_MinReg_Category_3_optional& SimProject::
      Use_MinReg_Category_3 () const
      {
        return this->Use_MinReg_Category_3_;
      }

      SimProject::Use_MinReg_Category_3_optional& SimProject::
      Use_MinReg_Category_3 ()
      {
        return this->Use_MinReg_Category_3_;
      }

      void SimProject::
      Use_MinReg_Category_3 (const Use_MinReg_Category_3_type& x)
      {
        this->Use_MinReg_Category_3_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_3 (const Use_MinReg_Category_3_optional& x)
      {
        this->Use_MinReg_Category_3_ = x;
      }

      const SimProject::Use_MinReg_Category_4_optional& SimProject::
      Use_MinReg_Category_4 () const
      {
        return this->Use_MinReg_Category_4_;
      }

      SimProject::Use_MinReg_Category_4_optional& SimProject::
      Use_MinReg_Category_4 ()
      {
        return this->Use_MinReg_Category_4_;
      }

      void SimProject::
      Use_MinReg_Category_4 (const Use_MinReg_Category_4_type& x)
      {
        this->Use_MinReg_Category_4_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_4 (const Use_MinReg_Category_4_optional& x)
      {
        this->Use_MinReg_Category_4_ = x;
      }

      const SimProject::Use_MinReg_Category_5_optional& SimProject::
      Use_MinReg_Category_5 () const
      {
        return this->Use_MinReg_Category_5_;
      }

      SimProject::Use_MinReg_Category_5_optional& SimProject::
      Use_MinReg_Category_5 ()
      {
        return this->Use_MinReg_Category_5_;
      }

      void SimProject::
      Use_MinReg_Category_5 (const Use_MinReg_Category_5_type& x)
      {
        this->Use_MinReg_Category_5_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_5 (const Use_MinReg_Category_5_optional& x)
      {
        this->Use_MinReg_Category_5_ = x;
      }

      const SimProject::Use_MinReg_Category_6_optional& SimProject::
      Use_MinReg_Category_6 () const
      {
        return this->Use_MinReg_Category_6_;
      }

      SimProject::Use_MinReg_Category_6_optional& SimProject::
      Use_MinReg_Category_6 ()
      {
        return this->Use_MinReg_Category_6_;
      }

      void SimProject::
      Use_MinReg_Category_6 (const Use_MinReg_Category_6_type& x)
      {
        this->Use_MinReg_Category_6_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_6 (const Use_MinReg_Category_6_optional& x)
      {
        this->Use_MinReg_Category_6_ = x;
      }

      const SimProject::Use_MinReg_Category_7_optional& SimProject::
      Use_MinReg_Category_7 () const
      {
        return this->Use_MinReg_Category_7_;
      }

      SimProject::Use_MinReg_Category_7_optional& SimProject::
      Use_MinReg_Category_7 ()
      {
        return this->Use_MinReg_Category_7_;
      }

      void SimProject::
      Use_MinReg_Category_7 (const Use_MinReg_Category_7_type& x)
      {
        this->Use_MinReg_Category_7_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_7 (const Use_MinReg_Category_7_optional& x)
      {
        this->Use_MinReg_Category_7_ = x;
      }

      const SimProject::Use_MinReg_Category_8_optional& SimProject::
      Use_MinReg_Category_8 () const
      {
        return this->Use_MinReg_Category_8_;
      }

      SimProject::Use_MinReg_Category_8_optional& SimProject::
      Use_MinReg_Category_8 ()
      {
        return this->Use_MinReg_Category_8_;
      }

      void SimProject::
      Use_MinReg_Category_8 (const Use_MinReg_Category_8_type& x)
      {
        this->Use_MinReg_Category_8_.set (x);
      }

      void SimProject::
      Use_MinReg_Category_8 (const Use_MinReg_Category_8_optional& x)
      {
        this->Use_MinReg_Category_8_ = x;
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
      // SimProject
      //

      SimProject::
      SimProject (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimSpatialStructureElement (RefId),
        Name_ (this),
        ProjectPhase_ (this),
        ProjectClientOwner_ (this),
        ProjectArchitect_ (this),
        ProjectUnits_ (this),
        _3DModelRepresentationContexts_ (this),
        _2DModelRepresentationContexts_ (this),
        Representation_ (this),
        UnitsInContext_ (this),
        WeatherLocationRegion_ (this),
        WeatherLocationCity_ (this),
        WeatherLocationID_ (this),
        EnergyStd_MinsReqs_ (this),
        Use_MinReg_Category_1_ (this),
        Use_MinReg_Category_2_ (this),
        Use_MinReg_Category_3_ (this),
        Use_MinReg_Category_4_ (this),
        Use_MinReg_Category_5_ (this),
        Use_MinReg_Category_6_ (this),
        Use_MinReg_Category_7_ (this),
        Use_MinReg_Category_8_ (this)
      {
      }

      SimProject::
      SimProject (const SimProject& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSpatialStructureElement (x, f, c),
        Name_ (x.Name_, f, this),
        ProjectPhase_ (x.ProjectPhase_, f, this),
        ProjectClientOwner_ (x.ProjectClientOwner_, f, this),
        ProjectArchitect_ (x.ProjectArchitect_, f, this),
        ProjectUnits_ (x.ProjectUnits_, f, this),
        _3DModelRepresentationContexts_ (x._3DModelRepresentationContexts_, f, this),
        _2DModelRepresentationContexts_ (x._2DModelRepresentationContexts_, f, this),
        Representation_ (x.Representation_, f, this),
        UnitsInContext_ (x.UnitsInContext_, f, this),
        WeatherLocationRegion_ (x.WeatherLocationRegion_, f, this),
        WeatherLocationCity_ (x.WeatherLocationCity_, f, this),
        WeatherLocationID_ (x.WeatherLocationID_, f, this),
        EnergyStd_MinsReqs_ (x.EnergyStd_MinsReqs_, f, this),
        Use_MinReg_Category_1_ (x.Use_MinReg_Category_1_, f, this),
        Use_MinReg_Category_2_ (x.Use_MinReg_Category_2_, f, this),
        Use_MinReg_Category_3_ (x.Use_MinReg_Category_3_, f, this),
        Use_MinReg_Category_4_ (x.Use_MinReg_Category_4_, f, this),
        Use_MinReg_Category_5_ (x.Use_MinReg_Category_5_, f, this),
        Use_MinReg_Category_6_ (x.Use_MinReg_Category_6_, f, this),
        Use_MinReg_Category_7_ (x.Use_MinReg_Category_7_, f, this),
        Use_MinReg_Category_8_ (x.Use_MinReg_Category_8_, f, this)
      {
      }

      SimProject::
      SimProject (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSpatialStructureElement (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        ProjectPhase_ (this),
        ProjectClientOwner_ (this),
        ProjectArchitect_ (this),
        ProjectUnits_ (this),
        _3DModelRepresentationContexts_ (this),
        _2DModelRepresentationContexts_ (this),
        Representation_ (this),
        UnitsInContext_ (this),
        WeatherLocationRegion_ (this),
        WeatherLocationCity_ (this),
        WeatherLocationID_ (this),
        EnergyStd_MinsReqs_ (this),
        Use_MinReg_Category_1_ (this),
        Use_MinReg_Category_2_ (this),
        Use_MinReg_Category_3_ (this),
        Use_MinReg_Category_4_ (this),
        Use_MinReg_Category_5_ (this),
        Use_MinReg_Category_6_ (this),
        Use_MinReg_Category_7_ (this),
        Use_MinReg_Category_8_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimProject::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimSpatialStructureElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          // ProjectPhase
          //
          if (n.name () == "ProjectPhase" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ProjectPhase_type > r (
              ProjectPhase_traits::create (i, f, this));

            if (!this->ProjectPhase_)
            {
              this->ProjectPhase_.set (r);
              continue;
            }
          }

          // ProjectClientOwner
          //
          if (n.name () == "ProjectClientOwner" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ProjectClientOwner_type > r (
              ProjectClientOwner_traits::create (i, f, this));

            if (!this->ProjectClientOwner_)
            {
              this->ProjectClientOwner_.set (r);
              continue;
            }
          }

          // ProjectArchitect
          //
          if (n.name () == "ProjectArchitect" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ProjectArchitect_type > r (
              ProjectArchitect_traits::create (i, f, this));

            if (!this->ProjectArchitect_)
            {
              this->ProjectArchitect_.set (r);
              continue;
            }
          }

          // ProjectUnits
          //
          if (n.name () == "ProjectUnits" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ProjectUnits_type > r (
              ProjectUnits_traits::create (i, f, this));

            if (!this->ProjectUnits_)
            {
              this->ProjectUnits_.set (r);
              continue;
            }
          }

          // _3DModelRepresentationContexts
          //
          if (n.name () == "_3DModelRepresentationContexts" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< _3DModelRepresentationContexts_type > r (
              _3DModelRepresentationContexts_traits::create (i, f, this));

            if (!this->_3DModelRepresentationContexts_)
            {
              this->_3DModelRepresentationContexts_.set (r);
              continue;
            }
          }

          // _2DModelRepresentationContexts
          //
          if (n.name () == "_2DModelRepresentationContexts" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< _2DModelRepresentationContexts_type > r (
              _2DModelRepresentationContexts_traits::create (i, f, this));

            if (!this->_2DModelRepresentationContexts_)
            {
              this->_2DModelRepresentationContexts_.set (r);
              continue;
            }
          }

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

          // UnitsInContext
          //
          if (n.name () == "UnitsInContext" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< UnitsInContext_type > r (
              UnitsInContext_traits::create (i, f, this));

            if (!this->UnitsInContext_)
            {
              this->UnitsInContext_.set (r);
              continue;
            }
          }

          // WeatherLocationRegion
          //
          if (n.name () == "WeatherLocationRegion" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< WeatherLocationRegion_type > r (
              WeatherLocationRegion_traits::create (i, f, this));

            if (!this->WeatherLocationRegion_)
            {
              this->WeatherLocationRegion_.set (r);
              continue;
            }
          }

          // WeatherLocationCity
          //
          if (n.name () == "WeatherLocationCity" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< WeatherLocationCity_type > r (
              WeatherLocationCity_traits::create (i, f, this));

            if (!this->WeatherLocationCity_)
            {
              this->WeatherLocationCity_.set (r);
              continue;
            }
          }

          // WeatherLocationID
          //
          if (n.name () == "WeatherLocationID" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< WeatherLocationID_type > r (
              WeatherLocationID_traits::create (i, f, this));

            if (!this->WeatherLocationID_)
            {
              this->WeatherLocationID_.set (r);
              continue;
            }
          }

          // EnergyStd_MinsReqs
          //
          if (n.name () == "EnergyStd_MinsReqs" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< EnergyStd_MinsReqs_type > r (
              EnergyStd_MinsReqs_traits::create (i, f, this));

            if (!this->EnergyStd_MinsReqs_)
            {
              this->EnergyStd_MinsReqs_.set (r);
              continue;
            }
          }

          // Use_MinReg_Category_1
          //
          if (n.name () == "Use_MinReg_Category_1" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_1_)
            {
              this->Use_MinReg_Category_1_.set (Use_MinReg_Category_1_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_2
          //
          if (n.name () == "Use_MinReg_Category_2" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_2_)
            {
              this->Use_MinReg_Category_2_.set (Use_MinReg_Category_2_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_3
          //
          if (n.name () == "Use_MinReg_Category_3" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_3_)
            {
              this->Use_MinReg_Category_3_.set (Use_MinReg_Category_3_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_4
          //
          if (n.name () == "Use_MinReg_Category_4" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_4_)
            {
              this->Use_MinReg_Category_4_.set (Use_MinReg_Category_4_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_5
          //
          if (n.name () == "Use_MinReg_Category_5" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_5_)
            {
              this->Use_MinReg_Category_5_.set (Use_MinReg_Category_5_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_6
          //
          if (n.name () == "Use_MinReg_Category_6" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_6_)
            {
              this->Use_MinReg_Category_6_.set (Use_MinReg_Category_6_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_7
          //
          if (n.name () == "Use_MinReg_Category_7" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_7_)
            {
              this->Use_MinReg_Category_7_.set (Use_MinReg_Category_7_traits::create (i, f, this));
              continue;
            }
          }

          // Use_MinReg_Category_8
          //
          if (n.name () == "Use_MinReg_Category_8" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->Use_MinReg_Category_8_)
            {
              this->Use_MinReg_Category_8_.set (Use_MinReg_Category_8_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimProject* SimProject::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimProject (*this, f, c);
      }

      SimProject& SimProject::
      operator= (const SimProject& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimSpatialStructureElement& > (*this) = x;
          this->Name_ = x.Name_;
          this->ProjectPhase_ = x.ProjectPhase_;
          this->ProjectClientOwner_ = x.ProjectClientOwner_;
          this->ProjectArchitect_ = x.ProjectArchitect_;
          this->ProjectUnits_ = x.ProjectUnits_;
          this->_3DModelRepresentationContexts_ = x._3DModelRepresentationContexts_;
          this->_2DModelRepresentationContexts_ = x._2DModelRepresentationContexts_;
          this->Representation_ = x.Representation_;
          this->UnitsInContext_ = x.UnitsInContext_;
          this->WeatherLocationRegion_ = x.WeatherLocationRegion_;
          this->WeatherLocationCity_ = x.WeatherLocationCity_;
          this->WeatherLocationID_ = x.WeatherLocationID_;
          this->EnergyStd_MinsReqs_ = x.EnergyStd_MinsReqs_;
          this->Use_MinReg_Category_1_ = x.Use_MinReg_Category_1_;
          this->Use_MinReg_Category_2_ = x.Use_MinReg_Category_2_;
          this->Use_MinReg_Category_3_ = x.Use_MinReg_Category_3_;
          this->Use_MinReg_Category_4_ = x.Use_MinReg_Category_4_;
          this->Use_MinReg_Category_5_ = x.Use_MinReg_Category_5_;
          this->Use_MinReg_Category_6_ = x.Use_MinReg_Category_6_;
          this->Use_MinReg_Category_7_ = x.Use_MinReg_Category_7_;
          this->Use_MinReg_Category_8_ = x.Use_MinReg_Category_8_;
        }

        return *this;
      }

      SimProject::
      ~SimProject ()
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
