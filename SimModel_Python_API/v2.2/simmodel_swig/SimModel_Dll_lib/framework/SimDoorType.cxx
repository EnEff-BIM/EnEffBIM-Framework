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

#include "SimDoorType.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimDoorType
      // 

      const SimDoorType::Name_optional& SimDoorType::
      Name () const
      {
        return this->Name_;
      }

      SimDoorType::Name_optional& SimDoorType::
      Name ()
      {
        return this->Name_;
      }

      void SimDoorType::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimDoorType::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimDoorType::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimDoorType::DoorTypeApplicableOccurrence_optional& SimDoorType::
      DoorTypeApplicableOccurrence () const
      {
        return this->DoorTypeApplicableOccurrence_;
      }

      SimDoorType::DoorTypeApplicableOccurrence_optional& SimDoorType::
      DoorTypeApplicableOccurrence ()
      {
        return this->DoorTypeApplicableOccurrence_;
      }

      void SimDoorType::
      DoorTypeApplicableOccurrence (const DoorTypeApplicableOccurrence_type& x)
      {
        this->DoorTypeApplicableOccurrence_.set (x);
      }

      void SimDoorType::
      DoorTypeApplicableOccurrence (const DoorTypeApplicableOccurrence_optional& x)
      {
        this->DoorTypeApplicableOccurrence_ = x;
      }

      void SimDoorType::
      DoorTypeApplicableOccurrence (::std::auto_ptr< DoorTypeApplicableOccurrence_type > x)
      {
        this->DoorTypeApplicableOccurrence_.set (x);
      }

      const SimDoorType::DoorTypeTag_optional& SimDoorType::
      DoorTypeTag () const
      {
        return this->DoorTypeTag_;
      }

      SimDoorType::DoorTypeTag_optional& SimDoorType::
      DoorTypeTag ()
      {
        return this->DoorTypeTag_;
      }

      void SimDoorType::
      DoorTypeTag (const DoorTypeTag_type& x)
      {
        this->DoorTypeTag_.set (x);
      }

      void SimDoorType::
      DoorTypeTag (const DoorTypeTag_optional& x)
      {
        this->DoorTypeTag_ = x;
      }

      void SimDoorType::
      DoorTypeTag (::std::auto_ptr< DoorTypeTag_type > x)
      {
        this->DoorTypeTag_.set (x);
      }

      const SimDoorType::DoorTypeOperationType_optional& SimDoorType::
      DoorTypeOperationType () const
      {
        return this->DoorTypeOperationType_;
      }

      SimDoorType::DoorTypeOperationType_optional& SimDoorType::
      DoorTypeOperationType ()
      {
        return this->DoorTypeOperationType_;
      }

      void SimDoorType::
      DoorTypeOperationType (const DoorTypeOperationType_type& x)
      {
        this->DoorTypeOperationType_.set (x);
      }

      void SimDoorType::
      DoorTypeOperationType (const DoorTypeOperationType_optional& x)
      {
        this->DoorTypeOperationType_ = x;
      }

      void SimDoorType::
      DoorTypeOperationType (::std::auto_ptr< DoorTypeOperationType_type > x)
      {
        this->DoorTypeOperationType_.set (x);
      }

      const SimDoorType::DoorTypeConstructionType_optional& SimDoorType::
      DoorTypeConstructionType () const
      {
        return this->DoorTypeConstructionType_;
      }

      SimDoorType::DoorTypeConstructionType_optional& SimDoorType::
      DoorTypeConstructionType ()
      {
        return this->DoorTypeConstructionType_;
      }

      void SimDoorType::
      DoorTypeConstructionType (const DoorTypeConstructionType_type& x)
      {
        this->DoorTypeConstructionType_.set (x);
      }

      void SimDoorType::
      DoorTypeConstructionType (const DoorTypeConstructionType_optional& x)
      {
        this->DoorTypeConstructionType_ = x;
      }

      void SimDoorType::
      DoorTypeConstructionType (::std::auto_ptr< DoorTypeConstructionType_type > x)
      {
        this->DoorTypeConstructionType_.set (x);
      }

      const SimDoorType::DoorTypeParamTakesPrecedence_optional& SimDoorType::
      DoorTypeParamTakesPrecedence () const
      {
        return this->DoorTypeParamTakesPrecedence_;
      }

      SimDoorType::DoorTypeParamTakesPrecedence_optional& SimDoorType::
      DoorTypeParamTakesPrecedence ()
      {
        return this->DoorTypeParamTakesPrecedence_;
      }

      void SimDoorType::
      DoorTypeParamTakesPrecedence (const DoorTypeParamTakesPrecedence_type& x)
      {
        this->DoorTypeParamTakesPrecedence_.set (x);
      }

      void SimDoorType::
      DoorTypeParamTakesPrecedence (const DoorTypeParamTakesPrecedence_optional& x)
      {
        this->DoorTypeParamTakesPrecedence_ = x;
      }

      const SimDoorType::DoorTypeSizeable_optional& SimDoorType::
      DoorTypeSizeable () const
      {
        return this->DoorTypeSizeable_;
      }

      SimDoorType::DoorTypeSizeable_optional& SimDoorType::
      DoorTypeSizeable ()
      {
        return this->DoorTypeSizeable_;
      }

      void SimDoorType::
      DoorTypeSizeable (const DoorTypeSizeable_type& x)
      {
        this->DoorTypeSizeable_.set (x);
      }

      void SimDoorType::
      DoorTypeSizeable (const DoorTypeSizeable_optional& x)
      {
        this->DoorTypeSizeable_ = x;
      }

      const SimDoorType::LiningProperties_optional& SimDoorType::
      LiningProperties () const
      {
        return this->LiningProperties_;
      }

      SimDoorType::LiningProperties_optional& SimDoorType::
      LiningProperties ()
      {
        return this->LiningProperties_;
      }

      void SimDoorType::
      LiningProperties (const LiningProperties_type& x)
      {
        this->LiningProperties_.set (x);
      }

      void SimDoorType::
      LiningProperties (const LiningProperties_optional& x)
      {
        this->LiningProperties_ = x;
      }

      void SimDoorType::
      LiningProperties (::std::auto_ptr< LiningProperties_type > x)
      {
        this->LiningProperties_.set (x);
      }

      const SimDoorType::PanelProperties_optional& SimDoorType::
      PanelProperties () const
      {
        return this->PanelProperties_;
      }

      SimDoorType::PanelProperties_optional& SimDoorType::
      PanelProperties ()
      {
        return this->PanelProperties_;
      }

      void SimDoorType::
      PanelProperties (const PanelProperties_type& x)
      {
        this->PanelProperties_.set (x);
      }

      void SimDoorType::
      PanelProperties (const PanelProperties_optional& x)
      {
        this->PanelProperties_ = x;
      }

      void SimDoorType::
      PanelProperties (::std::auto_ptr< PanelProperties_type > x)
      {
        this->PanelProperties_.set (x);
      }

      const SimDoorType::ClassRef_UniFormat_optional& SimDoorType::
      ClassRef_UniFormat () const
      {
        return this->ClassRef_UniFormat_;
      }

      SimDoorType::ClassRef_UniFormat_optional& SimDoorType::
      ClassRef_UniFormat ()
      {
        return this->ClassRef_UniFormat_;
      }

      void SimDoorType::
      ClassRef_UniFormat (const ClassRef_UniFormat_type& x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      void SimDoorType::
      ClassRef_UniFormat (const ClassRef_UniFormat_optional& x)
      {
        this->ClassRef_UniFormat_ = x;
      }

      void SimDoorType::
      ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      const SimDoorType::MaterialList_optional& SimDoorType::
      MaterialList () const
      {
        return this->MaterialList_;
      }

      SimDoorType::MaterialList_optional& SimDoorType::
      MaterialList ()
      {
        return this->MaterialList_;
      }

      void SimDoorType::
      MaterialList (const MaterialList_type& x)
      {
        this->MaterialList_.set (x);
      }

      void SimDoorType::
      MaterialList (const MaterialList_optional& x)
      {
        this->MaterialList_ = x;
      }

      void SimDoorType::
      MaterialList (::std::auto_ptr< MaterialList_type > x)
      {
        this->MaterialList_.set (x);
      }

      const SimDoorType::RepresentationMaps_optional& SimDoorType::
      RepresentationMaps () const
      {
        return this->RepresentationMaps_;
      }

      SimDoorType::RepresentationMaps_optional& SimDoorType::
      RepresentationMaps ()
      {
        return this->RepresentationMaps_;
      }

      void SimDoorType::
      RepresentationMaps (const RepresentationMaps_type& x)
      {
        this->RepresentationMaps_.set (x);
      }

      void SimDoorType::
      RepresentationMaps (const RepresentationMaps_optional& x)
      {
        this->RepresentationMaps_ = x;
      }

      void SimDoorType::
      RepresentationMaps (::std::auto_ptr< RepresentationMaps_type > x)
      {
        this->RepresentationMaps_.set (x);
      }

      const SimDoorType::VoidsInDoor_optional& SimDoorType::
      VoidsInDoor () const
      {
        return this->VoidsInDoor_;
      }

      SimDoorType::VoidsInDoor_optional& SimDoorType::
      VoidsInDoor ()
      {
        return this->VoidsInDoor_;
      }

      void SimDoorType::
      VoidsInDoor (const VoidsInDoor_type& x)
      {
        this->VoidsInDoor_.set (x);
      }

      void SimDoorType::
      VoidsInDoor (const VoidsInDoor_optional& x)
      {
        this->VoidsInDoor_ = x;
      }

      void SimDoorType::
      VoidsInDoor (::std::auto_ptr< VoidsInDoor_type > x)
      {
        this->VoidsInDoor_.set (x);
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
      // SimDoorType
      //

      SimDoorType::
      SimDoorType ()
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (),
        Name_ (this),
        DoorTypeApplicableOccurrence_ (this),
        DoorTypeTag_ (this),
        DoorTypeOperationType_ (this),
        DoorTypeConstructionType_ (this),
        DoorTypeParamTakesPrecedence_ (this),
        DoorTypeSizeable_ (this),
        LiningProperties_ (this),
        PanelProperties_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        RepresentationMaps_ (this),
        VoidsInDoor_ (this)
      {
      }

      SimDoorType::
      SimDoorType (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (RefId),
        Name_ (this),
        DoorTypeApplicableOccurrence_ (this),
        DoorTypeTag_ (this),
        DoorTypeOperationType_ (this),
        DoorTypeConstructionType_ (this),
        DoorTypeParamTakesPrecedence_ (this),
        DoorTypeSizeable_ (this),
        LiningProperties_ (this),
        PanelProperties_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        RepresentationMaps_ (this),
        VoidsInDoor_ (this)
      {
      }

      SimDoorType::
      SimDoorType (const SimDoorType& x,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (x, f, c),
        Name_ (x.Name_, f, this),
        DoorTypeApplicableOccurrence_ (x.DoorTypeApplicableOccurrence_, f, this),
        DoorTypeTag_ (x.DoorTypeTag_, f, this),
        DoorTypeOperationType_ (x.DoorTypeOperationType_, f, this),
        DoorTypeConstructionType_ (x.DoorTypeConstructionType_, f, this),
        DoorTypeParamTakesPrecedence_ (x.DoorTypeParamTakesPrecedence_, f, this),
        DoorTypeSizeable_ (x.DoorTypeSizeable_, f, this),
        LiningProperties_ (x.LiningProperties_, f, this),
        PanelProperties_ (x.PanelProperties_, f, this),
        ClassRef_UniFormat_ (x.ClassRef_UniFormat_, f, this),
        MaterialList_ (x.MaterialList_, f, this),
        RepresentationMaps_ (x.RepresentationMaps_, f, this),
        VoidsInDoor_ (x.VoidsInDoor_, f, this)
      {
      }

      SimDoorType::
      SimDoorType (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        DoorTypeApplicableOccurrence_ (this),
        DoorTypeTag_ (this),
        DoorTypeOperationType_ (this),
        DoorTypeConstructionType_ (this),
        DoorTypeParamTakesPrecedence_ (this),
        DoorTypeSizeable_ (this),
        LiningProperties_ (this),
        PanelProperties_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        RepresentationMaps_ (this),
        VoidsInDoor_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimDoorType::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimObjectTypeDefinition::parse (p, f);

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

          // DoorTypeApplicableOccurrence
          //
          if (n.name () == "DoorTypeApplicableOccurrence" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< DoorTypeApplicableOccurrence_type > r (
              DoorTypeApplicableOccurrence_traits::create (i, f, this));

            if (!this->DoorTypeApplicableOccurrence_)
            {
              this->DoorTypeApplicableOccurrence_.set (r);
              continue;
            }
          }

          // DoorTypeTag
          //
          if (n.name () == "DoorTypeTag" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< DoorTypeTag_type > r (
              DoorTypeTag_traits::create (i, f, this));

            if (!this->DoorTypeTag_)
            {
              this->DoorTypeTag_.set (r);
              continue;
            }
          }

          // DoorTypeOperationType
          //
          if (n.name () == "DoorTypeOperationType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< DoorTypeOperationType_type > r (
              DoorTypeOperationType_traits::create (i, f, this));

            if (!this->DoorTypeOperationType_)
            {
              this->DoorTypeOperationType_.set (r);
              continue;
            }
          }

          // DoorTypeConstructionType
          //
          if (n.name () == "DoorTypeConstructionType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< DoorTypeConstructionType_type > r (
              DoorTypeConstructionType_traits::create (i, f, this));

            if (!this->DoorTypeConstructionType_)
            {
              this->DoorTypeConstructionType_.set (r);
              continue;
            }
          }

          // DoorTypeParamTakesPrecedence
          //
          if (n.name () == "DoorTypeParamTakesPrecedence" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->DoorTypeParamTakesPrecedence_)
            {
              this->DoorTypeParamTakesPrecedence_.set (DoorTypeParamTakesPrecedence_traits::create (i, f, this));
              continue;
            }
          }

          // DoorTypeSizeable
          //
          if (n.name () == "DoorTypeSizeable" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->DoorTypeSizeable_)
            {
              this->DoorTypeSizeable_.set (DoorTypeSizeable_traits::create (i, f, this));
              continue;
            }
          }

          // LiningProperties
          //
          if (n.name () == "LiningProperties" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< LiningProperties_type > r (
              LiningProperties_traits::create (i, f, this));

            if (!this->LiningProperties_)
            {
              this->LiningProperties_.set (r);
              continue;
            }
          }

          // PanelProperties
          //
          if (n.name () == "PanelProperties" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< PanelProperties_type > r (
              PanelProperties_traits::create (i, f, this));

            if (!this->PanelProperties_)
            {
              this->PanelProperties_.set (r);
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

          // RepresentationMaps
          //
          if (n.name () == "RepresentationMaps" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< RepresentationMaps_type > r (
              RepresentationMaps_traits::create (i, f, this));

            if (!this->RepresentationMaps_)
            {
              this->RepresentationMaps_.set (r);
              continue;
            }
          }

          // VoidsInDoor
          //
          if (n.name () == "VoidsInDoor" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< VoidsInDoor_type > r (
              VoidsInDoor_traits::create (i, f, this));

            if (!this->VoidsInDoor_)
            {
              this->VoidsInDoor_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimDoorType* SimDoorType::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimDoorType (*this, f, c);
      }

      SimDoorType& SimDoorType::
      operator= (const SimDoorType& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimObjectTypeDefinition& > (*this) = x;
          this->Name_ = x.Name_;
          this->DoorTypeApplicableOccurrence_ = x.DoorTypeApplicableOccurrence_;
          this->DoorTypeTag_ = x.DoorTypeTag_;
          this->DoorTypeOperationType_ = x.DoorTypeOperationType_;
          this->DoorTypeConstructionType_ = x.DoorTypeConstructionType_;
          this->DoorTypeParamTakesPrecedence_ = x.DoorTypeParamTakesPrecedence_;
          this->DoorTypeSizeable_ = x.DoorTypeSizeable_;
          this->LiningProperties_ = x.LiningProperties_;
          this->PanelProperties_ = x.PanelProperties_;
          this->ClassRef_UniFormat_ = x.ClassRef_UniFormat_;
          this->MaterialList_ = x.MaterialList_;
          this->RepresentationMaps_ = x.RepresentationMaps_;
          this->VoidsInDoor_ = x.VoidsInDoor_;
        }

        return *this;
      }

      SimDoorType::
      ~SimDoorType ()
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

