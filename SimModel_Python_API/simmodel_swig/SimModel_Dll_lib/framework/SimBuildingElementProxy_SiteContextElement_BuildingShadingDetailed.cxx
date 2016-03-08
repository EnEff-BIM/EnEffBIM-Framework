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

#include "SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed
      // 

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SiteContextObjectType_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SiteContextObjectType () const
      {
        return this->SiteContextObjectType_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SiteContextObjectType_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SiteContextObjectType ()
      {
        return this->SiteContextObjectType_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SiteContextObjectType (const SiteContextObjectType_type& x)
      {
        this->SiteContextObjectType_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SiteContextObjectType (const SiteContextObjectType_optional& x)
      {
        this->SiteContextObjectType_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SiteContextObjectType (::std::auto_ptr< SiteContextObjectType_type > x)
      {
        this->SiteContextObjectType_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Name_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Name () const
      {
        return this->SimBuildingElementProxy_Name_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Name_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Name ()
      {
        return this->SimBuildingElementProxy_Name_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Name (const SimBuildingElementProxy_Name_type& x)
      {
        this->SimBuildingElementProxy_Name_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Name (const SimBuildingElementProxy_Name_optional& x)
      {
        this->SimBuildingElementProxy_Name_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Name (::std::auto_ptr< SimBuildingElementProxy_Name_type > x)
      {
        this->SimBuildingElementProxy_Name_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_TransSchedName_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_TransSchedName () const
      {
        return this->SimBuildingElementProxy_TransSchedName_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_TransSchedName_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_TransSchedName ()
      {
        return this->SimBuildingElementProxy_TransSchedName_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_TransSchedName (const SimBuildingElementProxy_TransSchedName_type& x)
      {
        this->SimBuildingElementProxy_TransSchedName_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_TransSchedName (const SimBuildingElementProxy_TransSchedName_optional& x)
      {
        this->SimBuildingElementProxy_TransSchedName_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_TransSchedName (::std::auto_ptr< SimBuildingElementProxy_TransSchedName_type > x)
      {
        this->SimBuildingElementProxy_TransSchedName_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_NumbVerts_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_NumbVerts () const
      {
        return this->SimBuildingElementProxy_NumbVerts_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_NumbVerts_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_NumbVerts ()
      {
        return this->SimBuildingElementProxy_NumbVerts_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_NumbVerts (const SimBuildingElementProxy_NumbVerts_type& x)
      {
        this->SimBuildingElementProxy_NumbVerts_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_NumbVerts (const SimBuildingElementProxy_NumbVerts_optional& x)
      {
        this->SimBuildingElementProxy_NumbVerts_ = x;
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Vertex_1_120_X_Coord_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_X_Coord () const
      {
        return this->SimBuildingElementProxy_Vertex_1_120_X_Coord_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Vertex_1_120_X_Coord_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_X_Coord ()
      {
        return this->SimBuildingElementProxy_Vertex_1_120_X_Coord_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_X_Coord (const SimBuildingElementProxy_Vertex_1_120_X_Coord_type& x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_X_Coord_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_X_Coord (const SimBuildingElementProxy_Vertex_1_120_X_Coord_optional& x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_X_Coord_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_X_Coord (::std::auto_ptr< SimBuildingElementProxy_Vertex_1_120_X_Coord_type > x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_X_Coord_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Vertex_1_120_Y_Coord_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Y_Coord () const
      {
        return this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Vertex_1_120_Y_Coord_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Y_Coord ()
      {
        return this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Y_Coord (const SimBuildingElementProxy_Vertex_1_120_Y_Coord_type& x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Y_Coord (const SimBuildingElementProxy_Vertex_1_120_Y_Coord_optional& x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Y_Coord (::std::auto_ptr< SimBuildingElementProxy_Vertex_1_120_Y_Coord_type > x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Vertex_1_120_Z_Coord_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Z_Coord () const
      {
        return this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::SimBuildingElementProxy_Vertex_1_120_Z_Coord_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Z_Coord ()
      {
        return this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Z_Coord (const SimBuildingElementProxy_Vertex_1_120_Z_Coord_type& x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Z_Coord (const SimBuildingElementProxy_Vertex_1_120_Z_Coord_optional& x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_Vertex_1_120_Z_Coord (::std::auto_ptr< SimBuildingElementProxy_Vertex_1_120_Z_Coord_type > x)
      {
        this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_ShadingSurfName_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_ShadingSurfName () const
      {
        return this->ShadingProp_Reflectance_ShadingSurfName_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_ShadingSurfName_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_ShadingSurfName ()
      {
        return this->ShadingProp_Reflectance_ShadingSurfName_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_ShadingSurfName (const ShadingProp_Reflectance_ShadingSurfName_type& x)
      {
        this->ShadingProp_Reflectance_ShadingSurfName_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_ShadingSurfName (const ShadingProp_Reflectance_ShadingSurfName_optional& x)
      {
        this->ShadingProp_Reflectance_ShadingSurfName_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_ShadingSurfName (::std::auto_ptr< ShadingProp_Reflectance_ShadingSurfName_type > x)
      {
        this->ShadingProp_Reflectance_ShadingSurfName_.set (x);
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf () const
      {
        return this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf ()
      {
        return this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf (const ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_type& x)
      {
        this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf (const ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_optional& x)
      {
        this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_ = x;
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf () const
      {
        return this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf ()
      {
        return this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf (const ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_type& x)
      {
        this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf (const ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_optional& x)
      {
        this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_ = x;
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed () const
      {
        return this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed ()
      {
        return this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed (const ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_type& x)
      {
        this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed (const ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_optional& x)
      {
        this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_ = x;
      }

      const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_GlazingConstructionName_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_GlazingConstructionName () const
      {
        return this->ShadingProp_Reflectance_GlazingConstructionName_;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::ShadingProp_Reflectance_GlazingConstructionName_optional& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_GlazingConstructionName ()
      {
        return this->ShadingProp_Reflectance_GlazingConstructionName_;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_GlazingConstructionName (const ShadingProp_Reflectance_GlazingConstructionName_type& x)
      {
        this->ShadingProp_Reflectance_GlazingConstructionName_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_GlazingConstructionName (const ShadingProp_Reflectance_GlazingConstructionName_optional& x)
      {
        this->ShadingProp_Reflectance_GlazingConstructionName_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ShadingProp_Reflectance_GlazingConstructionName (::std::auto_ptr< ShadingProp_Reflectance_GlazingConstructionName_type > x)
      {
        this->ShadingProp_Reflectance_GlazingConstructionName_.set (x);
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
      // SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed
      //

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed ()
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (),
        SiteContextObjectType_ (this),
        SimBuildingElementProxy_Name_ (this),
        SimBuildingElementProxy_TransSchedName_ (this),
        SimBuildingElementProxy_NumbVerts_ (this),
        SimBuildingElementProxy_Vertex_1_120_X_Coord_ (this),
        SimBuildingElementProxy_Vertex_1_120_Y_Coord_ (this),
        SimBuildingElementProxy_Vertex_1_120_Z_Coord_ (this),
        ShadingProp_Reflectance_ShadingSurfName_ (this),
        ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_ (this),
        ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_ (this),
        ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_ (this),
        ShadingProp_Reflectance_GlazingConstructionName_ (this)
      {
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (RefId),
        SiteContextObjectType_ (this),
        SimBuildingElementProxy_Name_ (this),
        SimBuildingElementProxy_TransSchedName_ (this),
        SimBuildingElementProxy_NumbVerts_ (this),
        SimBuildingElementProxy_Vertex_1_120_X_Coord_ (this),
        SimBuildingElementProxy_Vertex_1_120_Y_Coord_ (this),
        SimBuildingElementProxy_Vertex_1_120_Z_Coord_ (this),
        ShadingProp_Reflectance_ShadingSurfName_ (this),
        ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_ (this),
        ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_ (this),
        ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_ (this),
        ShadingProp_Reflectance_GlazingConstructionName_ (this)
      {
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed (const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed& x,
                                                                          ::xml_schema::flags f,
                                                                          ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (x, f, c),
        SiteContextObjectType_ (x.SiteContextObjectType_, f, this),
        SimBuildingElementProxy_Name_ (x.SimBuildingElementProxy_Name_, f, this),
        SimBuildingElementProxy_TransSchedName_ (x.SimBuildingElementProxy_TransSchedName_, f, this),
        SimBuildingElementProxy_NumbVerts_ (x.SimBuildingElementProxy_NumbVerts_, f, this),
        SimBuildingElementProxy_Vertex_1_120_X_Coord_ (x.SimBuildingElementProxy_Vertex_1_120_X_Coord_, f, this),
        SimBuildingElementProxy_Vertex_1_120_Y_Coord_ (x.SimBuildingElementProxy_Vertex_1_120_Y_Coord_, f, this),
        SimBuildingElementProxy_Vertex_1_120_Z_Coord_ (x.SimBuildingElementProxy_Vertex_1_120_Z_Coord_, f, this),
        ShadingProp_Reflectance_ShadingSurfName_ (x.ShadingProp_Reflectance_ShadingSurfName_, f, this),
        ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_ (x.ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_, f, this),
        ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_ (x.ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_, f, this),
        ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_ (x.ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_, f, this),
        ShadingProp_Reflectance_GlazingConstructionName_ (x.ShadingProp_Reflectance_GlazingConstructionName_, f, this)
      {
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed (const ::xercesc::DOMElement& e,
                                                                          ::xml_schema::flags f,
                                                                          ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (e, f | ::xml_schema::flags::base, c),
        SiteContextObjectType_ (this),
        SimBuildingElementProxy_Name_ (this),
        SimBuildingElementProxy_TransSchedName_ (this),
        SimBuildingElementProxy_NumbVerts_ (this),
        SimBuildingElementProxy_Vertex_1_120_X_Coord_ (this),
        SimBuildingElementProxy_Vertex_1_120_Y_Coord_ (this),
        SimBuildingElementProxy_Vertex_1_120_Z_Coord_ (this),
        ShadingProp_Reflectance_ShadingSurfName_ (this),
        ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_ (this),
        ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_ (this),
        ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_ (this),
        ShadingProp_Reflectance_GlazingConstructionName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SiteContextObjectType
          //
          if (n.name () == "SiteContextObjectType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SiteContextObjectType_type > r (
              SiteContextObjectType_traits::create (i, f, this));

            if (!this->SiteContextObjectType_)
            {
              this->SiteContextObjectType_.set (r);
              continue;
            }
          }

          // SimBuildingElementProxy_Name
          //
          if (n.name () == "SimBuildingElementProxy_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimBuildingElementProxy_Name_type > r (
              SimBuildingElementProxy_Name_traits::create (i, f, this));

            if (!this->SimBuildingElementProxy_Name_)
            {
              this->SimBuildingElementProxy_Name_.set (r);
              continue;
            }
          }

          // SimBuildingElementProxy_TransSchedName
          //
          if (n.name () == "SimBuildingElementProxy_TransSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimBuildingElementProxy_TransSchedName_type > r (
              SimBuildingElementProxy_TransSchedName_traits::create (i, f, this));

            if (!this->SimBuildingElementProxy_TransSchedName_)
            {
              this->SimBuildingElementProxy_TransSchedName_.set (r);
              continue;
            }
          }

          // SimBuildingElementProxy_NumbVerts
          //
          if (n.name () == "SimBuildingElementProxy_NumbVerts" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimBuildingElementProxy_NumbVerts_)
            {
              this->SimBuildingElementProxy_NumbVerts_.set (SimBuildingElementProxy_NumbVerts_traits::create (i, f, this));
              continue;
            }
          }

          // SimBuildingElementProxy_Vertex_1_120_X_Coord
          //
          if (n.name () == "SimBuildingElementProxy_Vertex_1_120_X_Coord" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimBuildingElementProxy_Vertex_1_120_X_Coord_type > r (
              SimBuildingElementProxy_Vertex_1_120_X_Coord_traits::create (i, f, this));

            if (!this->SimBuildingElementProxy_Vertex_1_120_X_Coord_)
            {
              this->SimBuildingElementProxy_Vertex_1_120_X_Coord_.set (r);
              continue;
            }
          }

          // SimBuildingElementProxy_Vertex_1_120_Y_Coord
          //
          if (n.name () == "SimBuildingElementProxy_Vertex_1_120_Y_Coord" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimBuildingElementProxy_Vertex_1_120_Y_Coord_type > r (
              SimBuildingElementProxy_Vertex_1_120_Y_Coord_traits::create (i, f, this));

            if (!this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_)
            {
              this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_.set (r);
              continue;
            }
          }

          // SimBuildingElementProxy_Vertex_1_120_Z_Coord
          //
          if (n.name () == "SimBuildingElementProxy_Vertex_1_120_Z_Coord" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimBuildingElementProxy_Vertex_1_120_Z_Coord_type > r (
              SimBuildingElementProxy_Vertex_1_120_Z_Coord_traits::create (i, f, this));

            if (!this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_)
            {
              this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_.set (r);
              continue;
            }
          }

          // ShadingProp_Reflectance_ShadingSurfName
          //
          if (n.name () == "ShadingProp_Reflectance_ShadingSurfName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ShadingProp_Reflectance_ShadingSurfName_type > r (
              ShadingProp_Reflectance_ShadingSurfName_traits::create (i, f, this));

            if (!this->ShadingProp_Reflectance_ShadingSurfName_)
            {
              this->ShadingProp_Reflectance_ShadingSurfName_.set (r);
              continue;
            }
          }

          // ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf
          //
          if (n.name () == "ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_)
            {
              this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_.set (ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_traits::create (i, f, this));
              continue;
            }
          }

          // ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf
          //
          if (n.name () == "ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_)
            {
              this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_.set (ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_traits::create (i, f, this));
              continue;
            }
          }

          // ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed
          //
          if (n.name () == "ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_)
            {
              this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_.set (ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_traits::create (i, f, this));
              continue;
            }
          }

          // ShadingProp_Reflectance_GlazingConstructionName
          //
          if (n.name () == "ShadingProp_Reflectance_GlazingConstructionName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ShadingProp_Reflectance_GlazingConstructionName_type > r (
              ShadingProp_Reflectance_GlazingConstructionName_traits::create (i, f, this));

            if (!this->ShadingProp_Reflectance_GlazingConstructionName_)
            {
              this->ShadingProp_Reflectance_GlazingConstructionName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed* SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed (*this, f, c);
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed& SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      operator= (const SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement& > (*this) = x;
          this->SiteContextObjectType_ = x.SiteContextObjectType_;
          this->SimBuildingElementProxy_Name_ = x.SimBuildingElementProxy_Name_;
          this->SimBuildingElementProxy_TransSchedName_ = x.SimBuildingElementProxy_TransSchedName_;
          this->SimBuildingElementProxy_NumbVerts_ = x.SimBuildingElementProxy_NumbVerts_;
          this->SimBuildingElementProxy_Vertex_1_120_X_Coord_ = x.SimBuildingElementProxy_Vertex_1_120_X_Coord_;
          this->SimBuildingElementProxy_Vertex_1_120_Y_Coord_ = x.SimBuildingElementProxy_Vertex_1_120_Y_Coord_;
          this->SimBuildingElementProxy_Vertex_1_120_Z_Coord_ = x.SimBuildingElementProxy_Vertex_1_120_Z_Coord_;
          this->ShadingProp_Reflectance_ShadingSurfName_ = x.ShadingProp_Reflectance_ShadingSurfName_;
          this->ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_ = x.ShadingProp_Reflectance_DiffuseSolarReflectanceOfUnglazedPartOfShadingSurf_;
          this->ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_ = x.ShadingProp_Reflectance_DiffuseVisibleReflectanceOfUnglazedPartOfShadingSurf_;
          this->ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_ = x.ShadingProp_Reflectance_FractionOfShadingSurfThatIsGlazed_;
          this->ShadingProp_Reflectance_GlazingConstructionName_ = x.ShadingProp_Reflectance_GlazingConstructionName_;
        }

        return *this;
      }

      SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed::
      ~SimBuildingElementProxy_SiteContextElement_BuildingShadingDetailed ()
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

