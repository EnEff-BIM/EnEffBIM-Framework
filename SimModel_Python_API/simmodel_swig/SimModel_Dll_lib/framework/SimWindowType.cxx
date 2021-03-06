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

#include "SimWindowType.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimWindowType
      // 

      const SimWindowType::Name_optional& SimWindowType::
      Name () const
      {
        return this->Name_;
      }

      SimWindowType::Name_optional& SimWindowType::
      Name ()
      {
        return this->Name_;
      }

      void SimWindowType::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimWindowType::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimWindowType::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimWindowType::TypeDefinedObjectsType_optional& SimWindowType::
      TypeDefinedObjectsType () const
      {
        return this->TypeDefinedObjectsType_;
      }

      SimWindowType::TypeDefinedObjectsType_optional& SimWindowType::
      TypeDefinedObjectsType ()
      {
        return this->TypeDefinedObjectsType_;
      }

      void SimWindowType::
      TypeDefinedObjectsType (const TypeDefinedObjectsType_type& x)
      {
        this->TypeDefinedObjectsType_.set (x);
      }

      void SimWindowType::
      TypeDefinedObjectsType (const TypeDefinedObjectsType_optional& x)
      {
        this->TypeDefinedObjectsType_ = x;
      }

      void SimWindowType::
      TypeDefinedObjectsType (::std::auto_ptr< TypeDefinedObjectsType_type > x)
      {
        this->TypeDefinedObjectsType_.set (x);
      }

      const SimWindowType::WindowTypeTag_optional& SimWindowType::
      WindowTypeTag () const
      {
        return this->WindowTypeTag_;
      }

      SimWindowType::WindowTypeTag_optional& SimWindowType::
      WindowTypeTag ()
      {
        return this->WindowTypeTag_;
      }

      void SimWindowType::
      WindowTypeTag (const WindowTypeTag_type& x)
      {
        this->WindowTypeTag_.set (x);
      }

      void SimWindowType::
      WindowTypeTag (const WindowTypeTag_optional& x)
      {
        this->WindowTypeTag_ = x;
      }

      void SimWindowType::
      WindowTypeTag (::std::auto_ptr< WindowTypeTag_type > x)
      {
        this->WindowTypeTag_.set (x);
      }

      const SimWindowType::WindowTypeOperationType_optional& SimWindowType::
      WindowTypeOperationType () const
      {
        return this->WindowTypeOperationType_;
      }

      SimWindowType::WindowTypeOperationType_optional& SimWindowType::
      WindowTypeOperationType ()
      {
        return this->WindowTypeOperationType_;
      }

      void SimWindowType::
      WindowTypeOperationType (const WindowTypeOperationType_type& x)
      {
        this->WindowTypeOperationType_.set (x);
      }

      void SimWindowType::
      WindowTypeOperationType (const WindowTypeOperationType_optional& x)
      {
        this->WindowTypeOperationType_ = x;
      }

      void SimWindowType::
      WindowTypeOperationType (::std::auto_ptr< WindowTypeOperationType_type > x)
      {
        this->WindowTypeOperationType_.set (x);
      }

      const SimWindowType::WindowTypeConstructionType_optional& SimWindowType::
      WindowTypeConstructionType () const
      {
        return this->WindowTypeConstructionType_;
      }

      SimWindowType::WindowTypeConstructionType_optional& SimWindowType::
      WindowTypeConstructionType ()
      {
        return this->WindowTypeConstructionType_;
      }

      void SimWindowType::
      WindowTypeConstructionType (const WindowTypeConstructionType_type& x)
      {
        this->WindowTypeConstructionType_.set (x);
      }

      void SimWindowType::
      WindowTypeConstructionType (const WindowTypeConstructionType_optional& x)
      {
        this->WindowTypeConstructionType_ = x;
      }

      void SimWindowType::
      WindowTypeConstructionType (::std::auto_ptr< WindowTypeConstructionType_type > x)
      {
        this->WindowTypeConstructionType_.set (x);
      }

      const SimWindowType::WindowTypeParameterTakesPrecedence_optional& SimWindowType::
      WindowTypeParameterTakesPrecedence () const
      {
        return this->WindowTypeParameterTakesPrecedence_;
      }

      SimWindowType::WindowTypeParameterTakesPrecedence_optional& SimWindowType::
      WindowTypeParameterTakesPrecedence ()
      {
        return this->WindowTypeParameterTakesPrecedence_;
      }

      void SimWindowType::
      WindowTypeParameterTakesPrecedence (const WindowTypeParameterTakesPrecedence_type& x)
      {
        this->WindowTypeParameterTakesPrecedence_.set (x);
      }

      void SimWindowType::
      WindowTypeParameterTakesPrecedence (const WindowTypeParameterTakesPrecedence_optional& x)
      {
        this->WindowTypeParameterTakesPrecedence_ = x;
      }

      const SimWindowType::WindowTypeSizeable_optional& SimWindowType::
      WindowTypeSizeable () const
      {
        return this->WindowTypeSizeable_;
      }

      SimWindowType::WindowTypeSizeable_optional& SimWindowType::
      WindowTypeSizeable ()
      {
        return this->WindowTypeSizeable_;
      }

      void SimWindowType::
      WindowTypeSizeable (const WindowTypeSizeable_type& x)
      {
        this->WindowTypeSizeable_.set (x);
      }

      void SimWindowType::
      WindowTypeSizeable (const WindowTypeSizeable_optional& x)
      {
        this->WindowTypeSizeable_ = x;
      }

      const SimWindowType::LiningProperties_optional& SimWindowType::
      LiningProperties () const
      {
        return this->LiningProperties_;
      }

      SimWindowType::LiningProperties_optional& SimWindowType::
      LiningProperties ()
      {
        return this->LiningProperties_;
      }

      void SimWindowType::
      LiningProperties (const LiningProperties_type& x)
      {
        this->LiningProperties_.set (x);
      }

      void SimWindowType::
      LiningProperties (const LiningProperties_optional& x)
      {
        this->LiningProperties_ = x;
      }

      void SimWindowType::
      LiningProperties (::std::auto_ptr< LiningProperties_type > x)
      {
        this->LiningProperties_.set (x);
      }

      const SimWindowType::PanelProperties_optional& SimWindowType::
      PanelProperties () const
      {
        return this->PanelProperties_;
      }

      SimWindowType::PanelProperties_optional& SimWindowType::
      PanelProperties ()
      {
        return this->PanelProperties_;
      }

      void SimWindowType::
      PanelProperties (const PanelProperties_type& x)
      {
        this->PanelProperties_.set (x);
      }

      void SimWindowType::
      PanelProperties (const PanelProperties_optional& x)
      {
        this->PanelProperties_ = x;
      }

      void SimWindowType::
      PanelProperties (::std::auto_ptr< PanelProperties_type > x)
      {
        this->PanelProperties_.set (x);
      }

      const SimWindowType::ClassRef_UniFormat_optional& SimWindowType::
      ClassRef_UniFormat () const
      {
        return this->ClassRef_UniFormat_;
      }

      SimWindowType::ClassRef_UniFormat_optional& SimWindowType::
      ClassRef_UniFormat ()
      {
        return this->ClassRef_UniFormat_;
      }

      void SimWindowType::
      ClassRef_UniFormat (const ClassRef_UniFormat_type& x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      void SimWindowType::
      ClassRef_UniFormat (const ClassRef_UniFormat_optional& x)
      {
        this->ClassRef_UniFormat_ = x;
      }

      void SimWindowType::
      ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      const SimWindowType::MaterialList_optional& SimWindowType::
      MaterialList () const
      {
        return this->MaterialList_;
      }

      SimWindowType::MaterialList_optional& SimWindowType::
      MaterialList ()
      {
        return this->MaterialList_;
      }

      void SimWindowType::
      MaterialList (const MaterialList_type& x)
      {
        this->MaterialList_.set (x);
      }

      void SimWindowType::
      MaterialList (const MaterialList_optional& x)
      {
        this->MaterialList_ = x;
      }

      void SimWindowType::
      MaterialList (::std::auto_ptr< MaterialList_type > x)
      {
        this->MaterialList_.set (x);
      }

      const SimWindowType::GeometricRepresentations_optional& SimWindowType::
      GeometricRepresentations () const
      {
        return this->GeometricRepresentations_;
      }

      SimWindowType::GeometricRepresentations_optional& SimWindowType::
      GeometricRepresentations ()
      {
        return this->GeometricRepresentations_;
      }

      void SimWindowType::
      GeometricRepresentations (const GeometricRepresentations_type& x)
      {
        this->GeometricRepresentations_.set (x);
      }

      void SimWindowType::
      GeometricRepresentations (const GeometricRepresentations_optional& x)
      {
        this->GeometricRepresentations_ = x;
      }

      void SimWindowType::
      GeometricRepresentations (::std::auto_ptr< GeometricRepresentations_type > x)
      {
        this->GeometricRepresentations_.set (x);
      }

      const SimWindowType::VoidsInWindow_optional& SimWindowType::
      VoidsInWindow () const
      {
        return this->VoidsInWindow_;
      }

      SimWindowType::VoidsInWindow_optional& SimWindowType::
      VoidsInWindow ()
      {
        return this->VoidsInWindow_;
      }

      void SimWindowType::
      VoidsInWindow (const VoidsInWindow_type& x)
      {
        this->VoidsInWindow_.set (x);
      }

      void SimWindowType::
      VoidsInWindow (const VoidsInWindow_optional& x)
      {
        this->VoidsInWindow_ = x;
      }

      void SimWindowType::
      VoidsInWindow (::std::auto_ptr< VoidsInWindow_type > x)
      {
        this->VoidsInWindow_.set (x);
      }

      const SimWindowType::RepresentationMaps_optional& SimWindowType::
      RepresentationMaps () const
      {
        return this->RepresentationMaps_;
      }

      SimWindowType::RepresentationMaps_optional& SimWindowType::
      RepresentationMaps ()
      {
        return this->RepresentationMaps_;
      }

      void SimWindowType::
      RepresentationMaps (const RepresentationMaps_type& x)
      {
        this->RepresentationMaps_.set (x);
      }

      void SimWindowType::
      RepresentationMaps (const RepresentationMaps_optional& x)
      {
        this->RepresentationMaps_ = x;
      }

      void SimWindowType::
      RepresentationMaps (::std::auto_ptr< RepresentationMaps_type > x)
      {
        this->RepresentationMaps_.set (x);
      }

      const SimWindowType::ContainingOpeningTypeDef_optional& SimWindowType::
      ContainingOpeningTypeDef () const
      {
        return this->ContainingOpeningTypeDef_;
      }

      SimWindowType::ContainingOpeningTypeDef_optional& SimWindowType::
      ContainingOpeningTypeDef ()
      {
        return this->ContainingOpeningTypeDef_;
      }

      void SimWindowType::
      ContainingOpeningTypeDef (const ContainingOpeningTypeDef_type& x)
      {
        this->ContainingOpeningTypeDef_.set (x);
      }

      void SimWindowType::
      ContainingOpeningTypeDef (const ContainingOpeningTypeDef_optional& x)
      {
        this->ContainingOpeningTypeDef_ = x;
      }

      void SimWindowType::
      ContainingOpeningTypeDef (::std::auto_ptr< ContainingOpeningTypeDef_type > x)
      {
        this->ContainingOpeningTypeDef_.set (x);
      }

      const SimWindowType::MaterialLayerSet_optional& SimWindowType::
      MaterialLayerSet () const
      {
        return this->MaterialLayerSet_;
      }

      SimWindowType::MaterialLayerSet_optional& SimWindowType::
      MaterialLayerSet ()
      {
        return this->MaterialLayerSet_;
      }

      void SimWindowType::
      MaterialLayerSet (const MaterialLayerSet_type& x)
      {
        this->MaterialLayerSet_.set (x);
      }

      void SimWindowType::
      MaterialLayerSet (const MaterialLayerSet_optional& x)
      {
        this->MaterialLayerSet_ = x;
      }

      void SimWindowType::
      MaterialLayerSet (::std::auto_ptr< MaterialLayerSet_type > x)
      {
        this->MaterialLayerSet_.set (x);
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
      // SimWindowType
      //

      SimWindowType::
      SimWindowType ()
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (),
        Name_ (this),
        TypeDefinedObjectsType_ (this),
        WindowTypeTag_ (this),
        WindowTypeOperationType_ (this),
        WindowTypeConstructionType_ (this),
        WindowTypeParameterTakesPrecedence_ (this),
        WindowTypeSizeable_ (this),
        LiningProperties_ (this),
        PanelProperties_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        GeometricRepresentations_ (this),
        VoidsInWindow_ (this),
        RepresentationMaps_ (this),
        ContainingOpeningTypeDef_ (this),
        MaterialLayerSet_ (this)
      {
      }

      SimWindowType::
      SimWindowType (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (RefId),
        Name_ (this),
        TypeDefinedObjectsType_ (this),
        WindowTypeTag_ (this),
        WindowTypeOperationType_ (this),
        WindowTypeConstructionType_ (this),
        WindowTypeParameterTakesPrecedence_ (this),
        WindowTypeSizeable_ (this),
        LiningProperties_ (this),
        PanelProperties_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        GeometricRepresentations_ (this),
        VoidsInWindow_ (this),
        RepresentationMaps_ (this),
        ContainingOpeningTypeDef_ (this),
        MaterialLayerSet_ (this)
      {
      }

      SimWindowType::
      SimWindowType (const SimWindowType& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (x, f, c),
        Name_ (x.Name_, f, this),
        TypeDefinedObjectsType_ (x.TypeDefinedObjectsType_, f, this),
        WindowTypeTag_ (x.WindowTypeTag_, f, this),
        WindowTypeOperationType_ (x.WindowTypeOperationType_, f, this),
        WindowTypeConstructionType_ (x.WindowTypeConstructionType_, f, this),
        WindowTypeParameterTakesPrecedence_ (x.WindowTypeParameterTakesPrecedence_, f, this),
        WindowTypeSizeable_ (x.WindowTypeSizeable_, f, this),
        LiningProperties_ (x.LiningProperties_, f, this),
        PanelProperties_ (x.PanelProperties_, f, this),
        ClassRef_UniFormat_ (x.ClassRef_UniFormat_, f, this),
        MaterialList_ (x.MaterialList_, f, this),
        GeometricRepresentations_ (x.GeometricRepresentations_, f, this),
        VoidsInWindow_ (x.VoidsInWindow_, f, this),
        RepresentationMaps_ (x.RepresentationMaps_, f, this),
        ContainingOpeningTypeDef_ (x.ContainingOpeningTypeDef_, f, this),
        MaterialLayerSet_ (x.MaterialLayerSet_, f, this)
      {
      }

      SimWindowType::
      SimWindowType (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        TypeDefinedObjectsType_ (this),
        WindowTypeTag_ (this),
        WindowTypeOperationType_ (this),
        WindowTypeConstructionType_ (this),
        WindowTypeParameterTakesPrecedence_ (this),
        WindowTypeSizeable_ (this),
        LiningProperties_ (this),
        PanelProperties_ (this),
        ClassRef_UniFormat_ (this),
        MaterialList_ (this),
        GeometricRepresentations_ (this),
        VoidsInWindow_ (this),
        RepresentationMaps_ (this),
        ContainingOpeningTypeDef_ (this),
        MaterialLayerSet_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimWindowType::
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

          // TypeDefinedObjectsType
          //
          if (n.name () == "TypeDefinedObjectsType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< TypeDefinedObjectsType_type > r (
              TypeDefinedObjectsType_traits::create (i, f, this));

            if (!this->TypeDefinedObjectsType_)
            {
              this->TypeDefinedObjectsType_.set (r);
              continue;
            }
          }

          // WindowTypeTag
          //
          if (n.name () == "WindowTypeTag" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< WindowTypeTag_type > r (
              WindowTypeTag_traits::create (i, f, this));

            if (!this->WindowTypeTag_)
            {
              this->WindowTypeTag_.set (r);
              continue;
            }
          }

          // WindowTypeOperationType
          //
          if (n.name () == "WindowTypeOperationType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< WindowTypeOperationType_type > r (
              WindowTypeOperationType_traits::create (i, f, this));

            if (!this->WindowTypeOperationType_)
            {
              this->WindowTypeOperationType_.set (r);
              continue;
            }
          }

          // WindowTypeConstructionType
          //
          if (n.name () == "WindowTypeConstructionType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< WindowTypeConstructionType_type > r (
              WindowTypeConstructionType_traits::create (i, f, this));

            if (!this->WindowTypeConstructionType_)
            {
              this->WindowTypeConstructionType_.set (r);
              continue;
            }
          }

          // WindowTypeParameterTakesPrecedence
          //
          if (n.name () == "WindowTypeParameterTakesPrecedence" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->WindowTypeParameterTakesPrecedence_)
            {
              this->WindowTypeParameterTakesPrecedence_.set (WindowTypeParameterTakesPrecedence_traits::create (i, f, this));
              continue;
            }
          }

          // WindowTypeSizeable
          //
          if (n.name () == "WindowTypeSizeable" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->WindowTypeSizeable_)
            {
              this->WindowTypeSizeable_.set (WindowTypeSizeable_traits::create (i, f, this));
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

          // GeometricRepresentations
          //
          if (n.name () == "GeometricRepresentations" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< GeometricRepresentations_type > r (
              GeometricRepresentations_traits::create (i, f, this));

            if (!this->GeometricRepresentations_)
            {
              this->GeometricRepresentations_.set (r);
              continue;
            }
          }

          // VoidsInWindow
          //
          if (n.name () == "VoidsInWindow" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< VoidsInWindow_type > r (
              VoidsInWindow_traits::create (i, f, this));

            if (!this->VoidsInWindow_)
            {
              this->VoidsInWindow_.set (r);
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

          // ContainingOpeningTypeDef
          //
          if (n.name () == "ContainingOpeningTypeDef" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ContainingOpeningTypeDef_type > r (
              ContainingOpeningTypeDef_traits::create (i, f, this));

            if (!this->ContainingOpeningTypeDef_)
            {
              this->ContainingOpeningTypeDef_.set (r);
              continue;
            }
          }

          // MaterialLayerSet
          //
          if (n.name () == "MaterialLayerSet" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< MaterialLayerSet_type > r (
              MaterialLayerSet_traits::create (i, f, this));

            if (!this->MaterialLayerSet_)
            {
              this->MaterialLayerSet_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimWindowType* SimWindowType::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimWindowType (*this, f, c);
      }

      SimWindowType& SimWindowType::
      operator= (const SimWindowType& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimObjectTypeDefinition& > (*this) = x;
          this->Name_ = x.Name_;
          this->TypeDefinedObjectsType_ = x.TypeDefinedObjectsType_;
          this->WindowTypeTag_ = x.WindowTypeTag_;
          this->WindowTypeOperationType_ = x.WindowTypeOperationType_;
          this->WindowTypeConstructionType_ = x.WindowTypeConstructionType_;
          this->WindowTypeParameterTakesPrecedence_ = x.WindowTypeParameterTakesPrecedence_;
          this->WindowTypeSizeable_ = x.WindowTypeSizeable_;
          this->LiningProperties_ = x.LiningProperties_;
          this->PanelProperties_ = x.PanelProperties_;
          this->ClassRef_UniFormat_ = x.ClassRef_UniFormat_;
          this->MaterialList_ = x.MaterialList_;
          this->GeometricRepresentations_ = x.GeometricRepresentations_;
          this->VoidsInWindow_ = x.VoidsInWindow_;
          this->RepresentationMaps_ = x.RepresentationMaps_;
          this->ContainingOpeningTypeDef_ = x.ContainingOpeningTypeDef_;
          this->MaterialLayerSet_ = x.MaterialLayerSet_;
        }

        return *this;
      }

      SimWindowType::
      ~SimWindowType ()
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

