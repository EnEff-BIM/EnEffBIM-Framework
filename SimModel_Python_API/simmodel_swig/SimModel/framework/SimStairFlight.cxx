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

#include "SimStairFlight.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimStairFlight
      // 

      const SimStairFlight::Name_optional& SimStairFlight::
      Name () const
      {
        return this->Name_;
      }

      SimStairFlight::Name_optional& SimStairFlight::
      Name ()
      {
        return this->Name_;
      }

      void SimStairFlight::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimStairFlight::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimStairFlight::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimStairFlight::ConstructionType_optional& SimStairFlight::
      ConstructionType () const
      {
        return this->ConstructionType_;
      }

      SimStairFlight::ConstructionType_optional& SimStairFlight::
      ConstructionType ()
      {
        return this->ConstructionType_;
      }

      void SimStairFlight::
      ConstructionType (const ConstructionType_type& x)
      {
        this->ConstructionType_.set (x);
      }

      void SimStairFlight::
      ConstructionType (const ConstructionType_optional& x)
      {
        this->ConstructionType_ = x;
      }

      void SimStairFlight::
      ConstructionType (::std::auto_ptr< ConstructionType_type > x)
      {
        this->ConstructionType_.set (x);
      }

      const SimStairFlight::StairFlightWidth_optional& SimStairFlight::
      StairFlightWidth () const
      {
        return this->StairFlightWidth_;
      }

      SimStairFlight::StairFlightWidth_optional& SimStairFlight::
      StairFlightWidth ()
      {
        return this->StairFlightWidth_;
      }

      void SimStairFlight::
      StairFlightWidth (const StairFlightWidth_type& x)
      {
        this->StairFlightWidth_.set (x);
      }

      void SimStairFlight::
      StairFlightWidth (const StairFlightWidth_optional& x)
      {
        this->StairFlightWidth_ = x;
      }

      const SimStairFlight::StairFlightLength_optional& SimStairFlight::
      StairFlightLength () const
      {
        return this->StairFlightLength_;
      }

      SimStairFlight::StairFlightLength_optional& SimStairFlight::
      StairFlightLength ()
      {
        return this->StairFlightLength_;
      }

      void SimStairFlight::
      StairFlightLength (const StairFlightLength_type& x)
      {
        this->StairFlightLength_.set (x);
      }

      void SimStairFlight::
      StairFlightLength (const StairFlightLength_optional& x)
      {
        this->StairFlightLength_ = x;
      }

      const SimStairFlight::StairFlightRise_optional& SimStairFlight::
      StairFlightRise () const
      {
        return this->StairFlightRise_;
      }

      SimStairFlight::StairFlightRise_optional& SimStairFlight::
      StairFlightRise ()
      {
        return this->StairFlightRise_;
      }

      void SimStairFlight::
      StairFlightRise (const StairFlightRise_type& x)
      {
        this->StairFlightRise_.set (x);
      }

      void SimStairFlight::
      StairFlightRise (const StairFlightRise_optional& x)
      {
        this->StairFlightRise_ = x;
      }

      const SimStairFlight::StairFlightGrossArea_Treads_optional& SimStairFlight::
      StairFlightGrossArea_Treads () const
      {
        return this->StairFlightGrossArea_Treads_;
      }

      SimStairFlight::StairFlightGrossArea_Treads_optional& SimStairFlight::
      StairFlightGrossArea_Treads ()
      {
        return this->StairFlightGrossArea_Treads_;
      }

      void SimStairFlight::
      StairFlightGrossArea_Treads (const StairFlightGrossArea_Treads_type& x)
      {
        this->StairFlightGrossArea_Treads_.set (x);
      }

      void SimStairFlight::
      StairFlightGrossArea_Treads (const StairFlightGrossArea_Treads_optional& x)
      {
        this->StairFlightGrossArea_Treads_ = x;
      }

      const SimStairFlight::StairFlightGrossArea_Risers_optional& SimStairFlight::
      StairFlightGrossArea_Risers () const
      {
        return this->StairFlightGrossArea_Risers_;
      }

      SimStairFlight::StairFlightGrossArea_Risers_optional& SimStairFlight::
      StairFlightGrossArea_Risers ()
      {
        return this->StairFlightGrossArea_Risers_;
      }

      void SimStairFlight::
      StairFlightGrossArea_Risers (const StairFlightGrossArea_Risers_type& x)
      {
        this->StairFlightGrossArea_Risers_.set (x);
      }

      void SimStairFlight::
      StairFlightGrossArea_Risers (const StairFlightGrossArea_Risers_optional& x)
      {
        this->StairFlightGrossArea_Risers_ = x;
      }

      const SimStairFlight::ClassRef_UniFormat_optional& SimStairFlight::
      ClassRef_UniFormat () const
      {
        return this->ClassRef_UniFormat_;
      }

      SimStairFlight::ClassRef_UniFormat_optional& SimStairFlight::
      ClassRef_UniFormat ()
      {
        return this->ClassRef_UniFormat_;
      }

      void SimStairFlight::
      ClassRef_UniFormat (const ClassRef_UniFormat_type& x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      void SimStairFlight::
      ClassRef_UniFormat (const ClassRef_UniFormat_optional& x)
      {
        this->ClassRef_UniFormat_ = x;
      }

      void SimStairFlight::
      ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      const SimStairFlight::MaterialList_optional& SimStairFlight::
      MaterialList () const
      {
        return this->MaterialList_;
      }

      SimStairFlight::MaterialList_optional& SimStairFlight::
      MaterialList ()
      {
        return this->MaterialList_;
      }

      void SimStairFlight::
      MaterialList (const MaterialList_type& x)
      {
        this->MaterialList_.set (x);
      }

      void SimStairFlight::
      MaterialList (const MaterialList_optional& x)
      {
        this->MaterialList_ = x;
      }

      void SimStairFlight::
      MaterialList (::std::auto_ptr< MaterialList_type > x)
      {
        this->MaterialList_.set (x);
      }

      const SimStairFlight::VoidsInStairFlight_optional& SimStairFlight::
      VoidsInStairFlight () const
      {
        return this->VoidsInStairFlight_;
      }

      SimStairFlight::VoidsInStairFlight_optional& SimStairFlight::
      VoidsInStairFlight ()
      {
        return this->VoidsInStairFlight_;
      }

      void SimStairFlight::
      VoidsInStairFlight (const VoidsInStairFlight_type& x)
      {
        this->VoidsInStairFlight_.set (x);
      }

      void SimStairFlight::
      VoidsInStairFlight (const VoidsInStairFlight_optional& x)
      {
        this->VoidsInStairFlight_ = x;
      }

      void SimStairFlight::
      VoidsInStairFlight (::std::auto_ptr< VoidsInStairFlight_type > x)
      {
        this->VoidsInStairFlight_.set (x);
      }

      const SimStairFlight::ConnectedSlabs_optional& SimStairFlight::
      ConnectedSlabs () const
      {
        return this->ConnectedSlabs_;
      }

      SimStairFlight::ConnectedSlabs_optional& SimStairFlight::
      ConnectedSlabs ()
      {
        return this->ConnectedSlabs_;
      }

      void SimStairFlight::
      ConnectedSlabs (const ConnectedSlabs_type& x)
      {
        this->ConnectedSlabs_.set (x);
      }

      void SimStairFlight::
      ConnectedSlabs (const ConnectedSlabs_optional& x)
      {
        this->ConnectedSlabs_ = x;
      }

      void SimStairFlight::
      ConnectedSlabs (::std::auto_ptr< ConnectedSlabs_type > x)
      {
        this->ConnectedSlabs_.set (x);
      }

      const SimStairFlight::ConnectedWalls_optional& SimStairFlight::
      ConnectedWalls () const
      {
        return this->ConnectedWalls_;
      }

      SimStairFlight::ConnectedWalls_optional& SimStairFlight::
      ConnectedWalls ()
      {
        return this->ConnectedWalls_;
      }

      void SimStairFlight::
      ConnectedWalls (const ConnectedWalls_type& x)
      {
        this->ConnectedWalls_.set (x);
      }

      void SimStairFlight::
      ConnectedWalls (const ConnectedWalls_optional& x)
      {
        this->ConnectedWalls_ = x;
      }

      void SimStairFlight::
      ConnectedWalls (::std::auto_ptr< ConnectedWalls_type > x)
      {
        this->ConnectedWalls_.set (x);
      }

      const SimStairFlight::ContainingStair_optional& SimStairFlight::
      ContainingStair () const
      {
        return this->ContainingStair_;
      }

      SimStairFlight::ContainingStair_optional& SimStairFlight::
      ContainingStair ()
      {
        return this->ContainingStair_;
      }

      void SimStairFlight::
      ContainingStair (const ContainingStair_type& x)
      {
        this->ContainingStair_.set (x);
      }

      void SimStairFlight::
      ContainingStair (const ContainingStair_optional& x)
      {
        this->ContainingStair_ = x;
      }

      void SimStairFlight::
      ContainingStair (::std::auto_ptr< ContainingStair_type > x)
      {
        this->ContainingStair_.set (x);
      }

      const SimStairFlight::Representation_optional& SimStairFlight::
      Representation () const
      {
        return this->Representation_;
      }

      SimStairFlight::Representation_optional& SimStairFlight::
      Representation ()
      {
        return this->Representation_;
      }

      void SimStairFlight::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimStairFlight::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimStairFlight::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimStairFlight::NumberOfRiser_optional& SimStairFlight::
      NumberOfRiser () const
      {
        return this->NumberOfRiser_;
      }

      SimStairFlight::NumberOfRiser_optional& SimStairFlight::
      NumberOfRiser ()
      {
        return this->NumberOfRiser_;
      }

      void SimStairFlight::
      NumberOfRiser (const NumberOfRiser_type& x)
      {
        this->NumberOfRiser_.set (x);
      }

      void SimStairFlight::
      NumberOfRiser (const NumberOfRiser_optional& x)
      {
        this->NumberOfRiser_ = x;
      }

      const SimStairFlight::NumberOfTreads_optional& SimStairFlight::
      NumberOfTreads () const
      {
        return this->NumberOfTreads_;
      }

      SimStairFlight::NumberOfTreads_optional& SimStairFlight::
      NumberOfTreads ()
      {
        return this->NumberOfTreads_;
      }

      void SimStairFlight::
      NumberOfTreads (const NumberOfTreads_type& x)
      {
        this->NumberOfTreads_.set (x);
      }

      void SimStairFlight::
      NumberOfTreads (const NumberOfTreads_optional& x)
      {
        this->NumberOfTreads_ = x;
      }

      const SimStairFlight::RiserHeight_optional& SimStairFlight::
      RiserHeight () const
      {
        return this->RiserHeight_;
      }

      SimStairFlight::RiserHeight_optional& SimStairFlight::
      RiserHeight ()
      {
        return this->RiserHeight_;
      }

      void SimStairFlight::
      RiserHeight (const RiserHeight_type& x)
      {
        this->RiserHeight_.set (x);
      }

      void SimStairFlight::
      RiserHeight (const RiserHeight_optional& x)
      {
        this->RiserHeight_ = x;
      }

      const SimStairFlight::TreadLength_optional& SimStairFlight::
      TreadLength () const
      {
        return this->TreadLength_;
      }

      SimStairFlight::TreadLength_optional& SimStairFlight::
      TreadLength ()
      {
        return this->TreadLength_;
      }

      void SimStairFlight::
      TreadLength (const TreadLength_type& x)
      {
        this->TreadLength_.set (x);
      }

      void SimStairFlight::
      TreadLength (const TreadLength_optional& x)
      {
        this->TreadLength_ = x;
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
      // SimStairFlight
      //

      SimStairFlight::
      SimStairFlight ()
      : ::schema::simxml::SimModelCore::SimBuildingElement (),
        Name_ (this),
        ConstructionType_ (this),
        StairFlightWidth_ (this),
        StairFlightLength_ (this),
        StairFlightRise_ (this),
        StairFlightGrossArea_Treads_ (this),
        StairFlightGrossArea_Risers_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        VoidsInStairFlight_ (this),
        ConnectedSlabs_ (this),
        ConnectedWalls_ (this),
        ContainingStair_ (this),
        Representation_ (this),
        NumberOfRiser_ (this),
        NumberOfTreads_ (this),
        RiserHeight_ (this),
        TreadLength_ (this)
      {
      }

      SimStairFlight::
      SimStairFlight (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimBuildingElement (RefId),
        Name_ (this),
        ConstructionType_ (this),
        StairFlightWidth_ (this),
        StairFlightLength_ (this),
        StairFlightRise_ (this),
        StairFlightGrossArea_Treads_ (this),
        StairFlightGrossArea_Risers_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        VoidsInStairFlight_ (this),
        ConnectedSlabs_ (this),
        ConnectedWalls_ (this),
        ContainingStair_ (this),
        Representation_ (this),
        NumberOfRiser_ (this),
        NumberOfTreads_ (this),
        RiserHeight_ (this),
        TreadLength_ (this)
      {
      }

      SimStairFlight::
      SimStairFlight (const SimStairFlight& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBuildingElement (x, f, c),
        Name_ (x.Name_, f, this),
        ConstructionType_ (x.ConstructionType_, f, this),
        StairFlightWidth_ (x.StairFlightWidth_, f, this),
        StairFlightLength_ (x.StairFlightLength_, f, this),
        StairFlightRise_ (x.StairFlightRise_, f, this),
        StairFlightGrossArea_Treads_ (x.StairFlightGrossArea_Treads_, f, this),
        StairFlightGrossArea_Risers_ (x.StairFlightGrossArea_Risers_, f, this),
        ClassRef_UniFormat_ (x.ClassRef_UniFormat_, f, this),
        MaterialList_ (x.MaterialList_, f, this),
        VoidsInStairFlight_ (x.VoidsInStairFlight_, f, this),
        ConnectedSlabs_ (x.ConnectedSlabs_, f, this),
        ConnectedWalls_ (x.ConnectedWalls_, f, this),
        ContainingStair_ (x.ContainingStair_, f, this),
        Representation_ (x.Representation_, f, this),
        NumberOfRiser_ (x.NumberOfRiser_, f, this),
        NumberOfTreads_ (x.NumberOfTreads_, f, this),
        RiserHeight_ (x.RiserHeight_, f, this),
        TreadLength_ (x.TreadLength_, f, this)
      {
      }

      SimStairFlight::
      SimStairFlight (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBuildingElement (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        ConstructionType_ (this),
        StairFlightWidth_ (this),
        StairFlightLength_ (this),
        StairFlightRise_ (this),
        StairFlightGrossArea_Treads_ (this),
        StairFlightGrossArea_Risers_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        VoidsInStairFlight_ (this),
        ConnectedSlabs_ (this),
        ConnectedWalls_ (this),
        ContainingStair_ (this),
        Representation_ (this),
        NumberOfRiser_ (this),
        NumberOfTreads_ (this),
        RiserHeight_ (this),
        TreadLength_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimStairFlight::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimBuildingElement::parse (p, f);

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

          // ConstructionType
          //
          if (n.name () == "ConstructionType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ConstructionType_type > r (
              ConstructionType_traits::create (i, f, this));

            if (!this->ConstructionType_)
            {
              this->ConstructionType_.set (r);
              continue;
            }
          }

          // StairFlightWidth
          //
          if (n.name () == "StairFlightWidth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->StairFlightWidth_)
            {
              this->StairFlightWidth_.set (StairFlightWidth_traits::create (i, f, this));
              continue;
            }
          }

          // StairFlightLength
          //
          if (n.name () == "StairFlightLength" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->StairFlightLength_)
            {
              this->StairFlightLength_.set (StairFlightLength_traits::create (i, f, this));
              continue;
            }
          }

          // StairFlightRise
          //
          if (n.name () == "StairFlightRise" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->StairFlightRise_)
            {
              this->StairFlightRise_.set (StairFlightRise_traits::create (i, f, this));
              continue;
            }
          }

          // StairFlightGrossArea_Treads
          //
          if (n.name () == "StairFlightGrossArea_Treads" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->StairFlightGrossArea_Treads_)
            {
              this->StairFlightGrossArea_Treads_.set (StairFlightGrossArea_Treads_traits::create (i, f, this));
              continue;
            }
          }

          // StairFlightGrossArea_Risers
          //
          if (n.name () == "StairFlightGrossArea_Risers" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->StairFlightGrossArea_Risers_)
            {
              this->StairFlightGrossArea_Risers_.set (StairFlightGrossArea_Risers_traits::create (i, f, this));
              continue;
            }
          }

          // ClassRef_UniFormat
          //
          if (n.name () == "ClassRef_UniFormat" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ClassRef_UniFormat_type > r (
              ClassRef_UniFormat_traits::create (i, f, this));

            if (!this->ClassRef_UniFormat_)
            {
              this->ClassRef_UniFormat_.set (r);
              continue;
            }
          }

          // MaterialList
          //
          if (n.name () == "MaterialList" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< MaterialList_type > r (
              MaterialList_traits::create (i, f, this));

            if (!this->MaterialList_)
            {
              this->MaterialList_.set (r);
              continue;
            }
          }

          // VoidsInStairFlight
          //
          if (n.name () == "VoidsInStairFlight" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< VoidsInStairFlight_type > r (
              VoidsInStairFlight_traits::create (i, f, this));

            if (!this->VoidsInStairFlight_)
            {
              this->VoidsInStairFlight_.set (r);
              continue;
            }
          }

          // ConnectedSlabs
          //
          if (n.name () == "ConnectedSlabs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ConnectedSlabs_type > r (
              ConnectedSlabs_traits::create (i, f, this));

            if (!this->ConnectedSlabs_)
            {
              this->ConnectedSlabs_.set (r);
              continue;
            }
          }

          // ConnectedWalls
          //
          if (n.name () == "ConnectedWalls" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ConnectedWalls_type > r (
              ConnectedWalls_traits::create (i, f, this));

            if (!this->ConnectedWalls_)
            {
              this->ConnectedWalls_.set (r);
              continue;
            }
          }

          // ContainingStair
          //
          if (n.name () == "ContainingStair" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ContainingStair_type > r (
              ContainingStair_traits::create (i, f, this));

            if (!this->ContainingStair_)
            {
              this->ContainingStair_.set (r);
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

          // NumberOfRiser
          //
          if (n.name () == "NumberOfRiser" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->NumberOfRiser_)
            {
              this->NumberOfRiser_.set (NumberOfRiser_traits::create (i, f, this));
              continue;
            }
          }

          // NumberOfTreads
          //
          if (n.name () == "NumberOfTreads" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->NumberOfTreads_)
            {
              this->NumberOfTreads_.set (NumberOfTreads_traits::create (i, f, this));
              continue;
            }
          }

          // RiserHeight
          //
          if (n.name () == "RiserHeight" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->RiserHeight_)
            {
              this->RiserHeight_.set (RiserHeight_traits::create (i, f, this));
              continue;
            }
          }

          // TreadLength
          //
          if (n.name () == "TreadLength" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->TreadLength_)
            {
              this->TreadLength_.set (TreadLength_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimStairFlight* SimStairFlight::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimStairFlight (*this, f, c);
      }

      SimStairFlight& SimStairFlight::
      operator= (const SimStairFlight& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimBuildingElement& > (*this) = x;
          this->Name_ = x.Name_;
          this->ConstructionType_ = x.ConstructionType_;
          this->StairFlightWidth_ = x.StairFlightWidth_;
          this->StairFlightLength_ = x.StairFlightLength_;
          this->StairFlightRise_ = x.StairFlightRise_;
          this->StairFlightGrossArea_Treads_ = x.StairFlightGrossArea_Treads_;
          this->StairFlightGrossArea_Risers_ = x.StairFlightGrossArea_Risers_;
          this->ClassRef_UniFormat_ = x.ClassRef_UniFormat_;
          this->MaterialList_ = x.MaterialList_;
          this->VoidsInStairFlight_ = x.VoidsInStairFlight_;
          this->ConnectedSlabs_ = x.ConnectedSlabs_;
          this->ConnectedWalls_ = x.ConnectedWalls_;
          this->ContainingStair_ = x.ContainingStair_;
          this->Representation_ = x.Representation_;
          this->NumberOfRiser_ = x.NumberOfRiser_;
          this->NumberOfTreads_ = x.NumberOfTreads_;
          this->RiserHeight_ = x.RiserHeight_;
          this->TreadLength_ = x.TreadLength_;
        }

        return *this;
      }

      SimStairFlight::
      ~SimStairFlight ()
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
