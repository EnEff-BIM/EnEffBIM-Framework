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

#include "SimSlab_Landing.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimSlab_Landing
      // 

      const SimSlab_Landing::Name_optional& SimSlab_Landing::
      Name () const
      {
        return this->Name_;
      }

      SimSlab_Landing::Name_optional& SimSlab_Landing::
      Name ()
      {
        return this->Name_;
      }

      void SimSlab_Landing::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimSlab_Landing::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimSlab_Landing::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimSlab_Landing::Representation_optional& SimSlab_Landing::
      Representation () const
      {
        return this->Representation_;
      }

      SimSlab_Landing::Representation_optional& SimSlab_Landing::
      Representation ()
      {
        return this->Representation_;
      }

      void SimSlab_Landing::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimSlab_Landing::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimSlab_Landing::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimSlab_Landing::PredefinedSlabType_optional& SimSlab_Landing::
      PredefinedSlabType () const
      {
        return this->PredefinedSlabType_;
      }

      SimSlab_Landing::PredefinedSlabType_optional& SimSlab_Landing::
      PredefinedSlabType ()
      {
        return this->PredefinedSlabType_;
      }

      void SimSlab_Landing::
      PredefinedSlabType (const PredefinedSlabType_type& x)
      {
        this->PredefinedSlabType_.set (x);
      }

      void SimSlab_Landing::
      PredefinedSlabType (const PredefinedSlabType_optional& x)
      {
        this->PredefinedSlabType_ = x;
      }

      void SimSlab_Landing::
      PredefinedSlabType (::std::auto_ptr< PredefinedSlabType_type > x)
      {
        this->PredefinedSlabType_.set (x);
      }

      const SimSlab_Landing::ConstructionType_optional& SimSlab_Landing::
      ConstructionType () const
      {
        return this->ConstructionType_;
      }

      SimSlab_Landing::ConstructionType_optional& SimSlab_Landing::
      ConstructionType ()
      {
        return this->ConstructionType_;
      }

      void SimSlab_Landing::
      ConstructionType (const ConstructionType_type& x)
      {
        this->ConstructionType_.set (x);
      }

      void SimSlab_Landing::
      ConstructionType (const ConstructionType_optional& x)
      {
        this->ConstructionType_ = x;
      }

      void SimSlab_Landing::
      ConstructionType (::std::auto_ptr< ConstructionType_type > x)
      {
        this->ConstructionType_.set (x);
      }

      const SimSlab_Landing::SlabIsExternal_optional& SimSlab_Landing::
      SlabIsExternal () const
      {
        return this->SlabIsExternal_;
      }

      SimSlab_Landing::SlabIsExternal_optional& SimSlab_Landing::
      SlabIsExternal ()
      {
        return this->SlabIsExternal_;
      }

      void SimSlab_Landing::
      SlabIsExternal (const SlabIsExternal_type& x)
      {
        this->SlabIsExternal_.set (x);
      }

      void SimSlab_Landing::
      SlabIsExternal (const SlabIsExternal_optional& x)
      {
        this->SlabIsExternal_ = x;
      }

      const SimSlab_Landing::CompositeThermalTrans_optional& SimSlab_Landing::
      CompositeThermalTrans () const
      {
        return this->CompositeThermalTrans_;
      }

      SimSlab_Landing::CompositeThermalTrans_optional& SimSlab_Landing::
      CompositeThermalTrans ()
      {
        return this->CompositeThermalTrans_;
      }

      void SimSlab_Landing::
      CompositeThermalTrans (const CompositeThermalTrans_type& x)
      {
        this->CompositeThermalTrans_.set (x);
      }

      void SimSlab_Landing::
      CompositeThermalTrans (const CompositeThermalTrans_optional& x)
      {
        this->CompositeThermalTrans_ = x;
      }

      const SimSlab_Landing::PhotoVotaicArrayOnElement_optional& SimSlab_Landing::
      PhotoVotaicArrayOnElement () const
      {
        return this->PhotoVotaicArrayOnElement_;
      }

      SimSlab_Landing::PhotoVotaicArrayOnElement_optional& SimSlab_Landing::
      PhotoVotaicArrayOnElement ()
      {
        return this->PhotoVotaicArrayOnElement_;
      }

      void SimSlab_Landing::
      PhotoVotaicArrayOnElement (const PhotoVotaicArrayOnElement_type& x)
      {
        this->PhotoVotaicArrayOnElement_.set (x);
      }

      void SimSlab_Landing::
      PhotoVotaicArrayOnElement (const PhotoVotaicArrayOnElement_optional& x)
      {
        this->PhotoVotaicArrayOnElement_ = x;
      }

      void SimSlab_Landing::
      PhotoVotaicArrayOnElement (::std::auto_ptr< PhotoVotaicArrayOnElement_type > x)
      {
        this->PhotoVotaicArrayOnElement_.set (x);
      }

      const SimSlab_Landing::SlabThickness_optional& SimSlab_Landing::
      SlabThickness () const
      {
        return this->SlabThickness_;
      }

      SimSlab_Landing::SlabThickness_optional& SimSlab_Landing::
      SlabThickness ()
      {
        return this->SlabThickness_;
      }

      void SimSlab_Landing::
      SlabThickness (const SlabThickness_type& x)
      {
        this->SlabThickness_.set (x);
      }

      void SimSlab_Landing::
      SlabThickness (const SlabThickness_optional& x)
      {
        this->SlabThickness_ = x;
      }

      const SimSlab_Landing::SlabPerimeter_optional& SimSlab_Landing::
      SlabPerimeter () const
      {
        return this->SlabPerimeter_;
      }

      SimSlab_Landing::SlabPerimeter_optional& SimSlab_Landing::
      SlabPerimeter ()
      {
        return this->SlabPerimeter_;
      }

      void SimSlab_Landing::
      SlabPerimeter (const SlabPerimeter_type& x)
      {
        this->SlabPerimeter_.set (x);
      }

      void SimSlab_Landing::
      SlabPerimeter (const SlabPerimeter_optional& x)
      {
        this->SlabPerimeter_ = x;
      }

      const SimSlab_Landing::SlabGrossArea_optional& SimSlab_Landing::
      SlabGrossArea () const
      {
        return this->SlabGrossArea_;
      }

      SimSlab_Landing::SlabGrossArea_optional& SimSlab_Landing::
      SlabGrossArea ()
      {
        return this->SlabGrossArea_;
      }

      void SimSlab_Landing::
      SlabGrossArea (const SlabGrossArea_type& x)
      {
        this->SlabGrossArea_.set (x);
      }

      void SimSlab_Landing::
      SlabGrossArea (const SlabGrossArea_optional& x)
      {
        this->SlabGrossArea_ = x;
      }

      const SimSlab_Landing::SlabNetArea_optional& SimSlab_Landing::
      SlabNetArea () const
      {
        return this->SlabNetArea_;
      }

      SimSlab_Landing::SlabNetArea_optional& SimSlab_Landing::
      SlabNetArea ()
      {
        return this->SlabNetArea_;
      }

      void SimSlab_Landing::
      SlabNetArea (const SlabNetArea_type& x)
      {
        this->SlabNetArea_.set (x);
      }

      void SimSlab_Landing::
      SlabNetArea (const SlabNetArea_optional& x)
      {
        this->SlabNetArea_ = x;
      }

      const SimSlab_Landing::SlabGrossVolume_optional& SimSlab_Landing::
      SlabGrossVolume () const
      {
        return this->SlabGrossVolume_;
      }

      SimSlab_Landing::SlabGrossVolume_optional& SimSlab_Landing::
      SlabGrossVolume ()
      {
        return this->SlabGrossVolume_;
      }

      void SimSlab_Landing::
      SlabGrossVolume (const SlabGrossVolume_type& x)
      {
        this->SlabGrossVolume_.set (x);
      }

      void SimSlab_Landing::
      SlabGrossVolume (const SlabGrossVolume_optional& x)
      {
        this->SlabGrossVolume_ = x;
      }

      const SimSlab_Landing::SlabNetVolume_optional& SimSlab_Landing::
      SlabNetVolume () const
      {
        return this->SlabNetVolume_;
      }

      SimSlab_Landing::SlabNetVolume_optional& SimSlab_Landing::
      SlabNetVolume ()
      {
        return this->SlabNetVolume_;
      }

      void SimSlab_Landing::
      SlabNetVolume (const SlabNetVolume_type& x)
      {
        this->SlabNetVolume_.set (x);
      }

      void SimSlab_Landing::
      SlabNetVolume (const SlabNetVolume_optional& x)
      {
        this->SlabNetVolume_ = x;
      }

      const SimSlab_Landing::ClassRef_UniFormat_optional& SimSlab_Landing::
      ClassRef_UniFormat () const
      {
        return this->ClassRef_UniFormat_;
      }

      SimSlab_Landing::ClassRef_UniFormat_optional& SimSlab_Landing::
      ClassRef_UniFormat ()
      {
        return this->ClassRef_UniFormat_;
      }

      void SimSlab_Landing::
      ClassRef_UniFormat (const ClassRef_UniFormat_type& x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      void SimSlab_Landing::
      ClassRef_UniFormat (const ClassRef_UniFormat_optional& x)
      {
        this->ClassRef_UniFormat_ = x;
      }

      void SimSlab_Landing::
      ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      const SimSlab_Landing::MaterialLayerSet_optional& SimSlab_Landing::
      MaterialLayerSet () const
      {
        return this->MaterialLayerSet_;
      }

      SimSlab_Landing::MaterialLayerSet_optional& SimSlab_Landing::
      MaterialLayerSet ()
      {
        return this->MaterialLayerSet_;
      }

      void SimSlab_Landing::
      MaterialLayerSet (const MaterialLayerSet_type& x)
      {
        this->MaterialLayerSet_.set (x);
      }

      void SimSlab_Landing::
      MaterialLayerSet (const MaterialLayerSet_optional& x)
      {
        this->MaterialLayerSet_ = x;
      }

      void SimSlab_Landing::
      MaterialLayerSet (::std::auto_ptr< MaterialLayerSet_type > x)
      {
        this->MaterialLayerSet_.set (x);
      }

      const SimSlab_Landing::ConnectedSlabs_optional& SimSlab_Landing::
      ConnectedSlabs () const
      {
        return this->ConnectedSlabs_;
      }

      SimSlab_Landing::ConnectedSlabs_optional& SimSlab_Landing::
      ConnectedSlabs ()
      {
        return this->ConnectedSlabs_;
      }

      void SimSlab_Landing::
      ConnectedSlabs (const ConnectedSlabs_type& x)
      {
        this->ConnectedSlabs_.set (x);
      }

      void SimSlab_Landing::
      ConnectedSlabs (const ConnectedSlabs_optional& x)
      {
        this->ConnectedSlabs_ = x;
      }

      void SimSlab_Landing::
      ConnectedSlabs (::std::auto_ptr< ConnectedSlabs_type > x)
      {
        this->ConnectedSlabs_.set (x);
      }

      const SimSlab_Landing::ConnectedWalls_optional& SimSlab_Landing::
      ConnectedWalls () const
      {
        return this->ConnectedWalls_;
      }

      SimSlab_Landing::ConnectedWalls_optional& SimSlab_Landing::
      ConnectedWalls ()
      {
        return this->ConnectedWalls_;
      }

      void SimSlab_Landing::
      ConnectedWalls (const ConnectedWalls_type& x)
      {
        this->ConnectedWalls_.set (x);
      }

      void SimSlab_Landing::
      ConnectedWalls (const ConnectedWalls_optional& x)
      {
        this->ConnectedWalls_ = x;
      }

      void SimSlab_Landing::
      ConnectedWalls (::std::auto_ptr< ConnectedWalls_type > x)
      {
        this->ConnectedWalls_.set (x);
      }

      const SimSlab_Landing::ConnectedBeams_optional& SimSlab_Landing::
      ConnectedBeams () const
      {
        return this->ConnectedBeams_;
      }

      SimSlab_Landing::ConnectedBeams_optional& SimSlab_Landing::
      ConnectedBeams ()
      {
        return this->ConnectedBeams_;
      }

      void SimSlab_Landing::
      ConnectedBeams (const ConnectedBeams_type& x)
      {
        this->ConnectedBeams_.set (x);
      }

      void SimSlab_Landing::
      ConnectedBeams (const ConnectedBeams_optional& x)
      {
        this->ConnectedBeams_ = x;
      }

      void SimSlab_Landing::
      ConnectedBeams (::std::auto_ptr< ConnectedBeams_type > x)
      {
        this->ConnectedBeams_.set (x);
      }

      const SimSlab_Landing::ConnectedColumns_optional& SimSlab_Landing::
      ConnectedColumns () const
      {
        return this->ConnectedColumns_;
      }

      SimSlab_Landing::ConnectedColumns_optional& SimSlab_Landing::
      ConnectedColumns ()
      {
        return this->ConnectedColumns_;
      }

      void SimSlab_Landing::
      ConnectedColumns (const ConnectedColumns_type& x)
      {
        this->ConnectedColumns_.set (x);
      }

      void SimSlab_Landing::
      ConnectedColumns (const ConnectedColumns_optional& x)
      {
        this->ConnectedColumns_ = x;
      }

      void SimSlab_Landing::
      ConnectedColumns (::std::auto_ptr< ConnectedColumns_type > x)
      {
        this->ConnectedColumns_.set (x);
      }

      const SimSlab_Landing::ContainingRamp_optional& SimSlab_Landing::
      ContainingRamp () const
      {
        return this->ContainingRamp_;
      }

      SimSlab_Landing::ContainingRamp_optional& SimSlab_Landing::
      ContainingRamp ()
      {
        return this->ContainingRamp_;
      }

      void SimSlab_Landing::
      ContainingRamp (const ContainingRamp_type& x)
      {
        this->ContainingRamp_.set (x);
      }

      void SimSlab_Landing::
      ContainingRamp (const ContainingRamp_optional& x)
      {
        this->ContainingRamp_ = x;
      }

      void SimSlab_Landing::
      ContainingRamp (::std::auto_ptr< ContainingRamp_type > x)
      {
        this->ContainingRamp_.set (x);
      }

      const SimSlab_Landing::ContainingStair_optional& SimSlab_Landing::
      ContainingStair () const
      {
        return this->ContainingStair_;
      }

      SimSlab_Landing::ContainingStair_optional& SimSlab_Landing::
      ContainingStair ()
      {
        return this->ContainingStair_;
      }

      void SimSlab_Landing::
      ContainingStair (const ContainingStair_type& x)
      {
        this->ContainingStair_.set (x);
      }

      void SimSlab_Landing::
      ContainingStair (const ContainingStair_optional& x)
      {
        this->ContainingStair_ = x;
      }

      void SimSlab_Landing::
      ContainingStair (::std::auto_ptr< ContainingStair_type > x)
      {
        this->ContainingStair_.set (x);
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
      // SimSlab_Landing
      //

      SimSlab_Landing::
      SimSlab_Landing ()
      : ::schema::simxml::BuildingModel::SimSlab (),
        Name_ (this),
        Representation_ (this),
        PredefinedSlabType_ (this),
        ConstructionType_ (this),
        SlabIsExternal_ (this),
        CompositeThermalTrans_ (this),
        PhotoVotaicArrayOnElement_ (this),
        SlabThickness_ (this),
        SlabPerimeter_ (this),
        SlabGrossArea_ (this),
        SlabNetArea_ (this),
        SlabGrossVolume_ (this),
        SlabNetVolume_ (this),
        ClassRef_UniFormat_ (this),
        MaterialLayerSet_ (this),
        ConnectedSlabs_ (this),
        ConnectedWalls_ (this),
        ConnectedBeams_ (this),
        ConnectedColumns_ (this),
        ContainingRamp_ (this),
        ContainingStair_ (this)
      {
      }

      SimSlab_Landing::
      SimSlab_Landing (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimSlab (RefId),
        Name_ (this),
        Representation_ (this),
        PredefinedSlabType_ (this),
        ConstructionType_ (this),
        SlabIsExternal_ (this),
        CompositeThermalTrans_ (this),
        PhotoVotaicArrayOnElement_ (this),
        SlabThickness_ (this),
        SlabPerimeter_ (this),
        SlabGrossArea_ (this),
        SlabNetArea_ (this),
        SlabGrossVolume_ (this),
        SlabNetVolume_ (this),
        ClassRef_UniFormat_ (this),
        MaterialLayerSet_ (this),
        ConnectedSlabs_ (this),
        ConnectedWalls_ (this),
        ConnectedBeams_ (this),
        ConnectedColumns_ (this),
        ContainingRamp_ (this),
        ContainingStair_ (this)
      {
      }

      SimSlab_Landing::
      SimSlab_Landing (const SimSlab_Landing& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSlab (x, f, c),
        Name_ (x.Name_, f, this),
        Representation_ (x.Representation_, f, this),
        PredefinedSlabType_ (x.PredefinedSlabType_, f, this),
        ConstructionType_ (x.ConstructionType_, f, this),
        SlabIsExternal_ (x.SlabIsExternal_, f, this),
        CompositeThermalTrans_ (x.CompositeThermalTrans_, f, this),
        PhotoVotaicArrayOnElement_ (x.PhotoVotaicArrayOnElement_, f, this),
        SlabThickness_ (x.SlabThickness_, f, this),
        SlabPerimeter_ (x.SlabPerimeter_, f, this),
        SlabGrossArea_ (x.SlabGrossArea_, f, this),
        SlabNetArea_ (x.SlabNetArea_, f, this),
        SlabGrossVolume_ (x.SlabGrossVolume_, f, this),
        SlabNetVolume_ (x.SlabNetVolume_, f, this),
        ClassRef_UniFormat_ (x.ClassRef_UniFormat_, f, this),
        MaterialLayerSet_ (x.MaterialLayerSet_, f, this),
        ConnectedSlabs_ (x.ConnectedSlabs_, f, this),
        ConnectedWalls_ (x.ConnectedWalls_, f, this),
        ConnectedBeams_ (x.ConnectedBeams_, f, this),
        ConnectedColumns_ (x.ConnectedColumns_, f, this),
        ContainingRamp_ (x.ContainingRamp_, f, this),
        ContainingStair_ (x.ContainingStair_, f, this)
      {
      }

      SimSlab_Landing::
      SimSlab_Landing (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSlab (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        Representation_ (this),
        PredefinedSlabType_ (this),
        ConstructionType_ (this),
        SlabIsExternal_ (this),
        CompositeThermalTrans_ (this),
        PhotoVotaicArrayOnElement_ (this),
        SlabThickness_ (this),
        SlabPerimeter_ (this),
        SlabGrossArea_ (this),
        SlabNetArea_ (this),
        SlabGrossVolume_ (this),
        SlabNetVolume_ (this),
        ClassRef_UniFormat_ (this),
        MaterialLayerSet_ (this),
        ConnectedSlabs_ (this),
        ConnectedWalls_ (this),
        ConnectedBeams_ (this),
        ConnectedColumns_ (this),
        ContainingRamp_ (this),
        ContainingStair_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSlab_Landing::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimSlab::parse (p, f);

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

          // PredefinedSlabType
          //
          if (n.name () == "PredefinedSlabType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< PredefinedSlabType_type > r (
              PredefinedSlabType_traits::create (i, f, this));

            if (!this->PredefinedSlabType_)
            {
              this->PredefinedSlabType_.set (r);
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

          // SlabIsExternal
          //
          if (n.name () == "SlabIsExternal" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabIsExternal_)
            {
              this->SlabIsExternal_.set (SlabIsExternal_traits::create (i, f, this));
              continue;
            }
          }

          // CompositeThermalTrans
          //
          if (n.name () == "CompositeThermalTrans" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->CompositeThermalTrans_)
            {
              this->CompositeThermalTrans_.set (CompositeThermalTrans_traits::create (i, f, this));
              continue;
            }
          }

          // PhotoVotaicArrayOnElement
          //
          if (n.name () == "PhotoVotaicArrayOnElement" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< PhotoVotaicArrayOnElement_type > r (
              PhotoVotaicArrayOnElement_traits::create (i, f, this));

            if (!this->PhotoVotaicArrayOnElement_)
            {
              this->PhotoVotaicArrayOnElement_.set (r);
              continue;
            }
          }

          // SlabThickness
          //
          if (n.name () == "SlabThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabThickness_)
            {
              this->SlabThickness_.set (SlabThickness_traits::create (i, f, this));
              continue;
            }
          }

          // SlabPerimeter
          //
          if (n.name () == "SlabPerimeter" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabPerimeter_)
            {
              this->SlabPerimeter_.set (SlabPerimeter_traits::create (i, f, this));
              continue;
            }
          }

          // SlabGrossArea
          //
          if (n.name () == "SlabGrossArea" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabGrossArea_)
            {
              this->SlabGrossArea_.set (SlabGrossArea_traits::create (i, f, this));
              continue;
            }
          }

          // SlabNetArea
          //
          if (n.name () == "SlabNetArea" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabNetArea_)
            {
              this->SlabNetArea_.set (SlabNetArea_traits::create (i, f, this));
              continue;
            }
          }

          // SlabGrossVolume
          //
          if (n.name () == "SlabGrossVolume" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabGrossVolume_)
            {
              this->SlabGrossVolume_.set (SlabGrossVolume_traits::create (i, f, this));
              continue;
            }
          }

          // SlabNetVolume
          //
          if (n.name () == "SlabNetVolume" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SlabNetVolume_)
            {
              this->SlabNetVolume_.set (SlabNetVolume_traits::create (i, f, this));
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

          // ConnectedBeams
          //
          if (n.name () == "ConnectedBeams" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ConnectedBeams_type > r (
              ConnectedBeams_traits::create (i, f, this));

            if (!this->ConnectedBeams_)
            {
              this->ConnectedBeams_.set (r);
              continue;
            }
          }

          // ConnectedColumns
          //
          if (n.name () == "ConnectedColumns" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ConnectedColumns_type > r (
              ConnectedColumns_traits::create (i, f, this));

            if (!this->ConnectedColumns_)
            {
              this->ConnectedColumns_.set (r);
              continue;
            }
          }

          // ContainingRamp
          //
          if (n.name () == "ContainingRamp" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ContainingRamp_type > r (
              ContainingRamp_traits::create (i, f, this));

            if (!this->ContainingRamp_)
            {
              this->ContainingRamp_.set (r);
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

          break;
        }
      }

      SimSlab_Landing* SimSlab_Landing::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSlab_Landing (*this, f, c);
      }

      SimSlab_Landing& SimSlab_Landing::
      operator= (const SimSlab_Landing& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimSlab& > (*this) = x;
          this->Name_ = x.Name_;
          this->Representation_ = x.Representation_;
          this->PredefinedSlabType_ = x.PredefinedSlabType_;
          this->ConstructionType_ = x.ConstructionType_;
          this->SlabIsExternal_ = x.SlabIsExternal_;
          this->CompositeThermalTrans_ = x.CompositeThermalTrans_;
          this->PhotoVotaicArrayOnElement_ = x.PhotoVotaicArrayOnElement_;
          this->SlabThickness_ = x.SlabThickness_;
          this->SlabPerimeter_ = x.SlabPerimeter_;
          this->SlabGrossArea_ = x.SlabGrossArea_;
          this->SlabNetArea_ = x.SlabNetArea_;
          this->SlabGrossVolume_ = x.SlabGrossVolume_;
          this->SlabNetVolume_ = x.SlabNetVolume_;
          this->ClassRef_UniFormat_ = x.ClassRef_UniFormat_;
          this->MaterialLayerSet_ = x.MaterialLayerSet_;
          this->ConnectedSlabs_ = x.ConnectedSlabs_;
          this->ConnectedWalls_ = x.ConnectedWalls_;
          this->ConnectedBeams_ = x.ConnectedBeams_;
          this->ConnectedColumns_ = x.ConnectedColumns_;
          this->ContainingRamp_ = x.ContainingRamp_;
          this->ContainingStair_ = x.ContainingStair_;
        }

        return *this;
      }

      SimSlab_Landing::
      ~SimSlab_Landing ()
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
