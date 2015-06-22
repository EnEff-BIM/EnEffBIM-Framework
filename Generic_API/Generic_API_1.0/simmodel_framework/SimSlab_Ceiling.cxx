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

#include "SimSlab_Ceiling.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimSlab_Ceiling
      // 

      const SimSlab_Ceiling::Representation_optional& SimSlab_Ceiling::
      Representation () const
      {
        return this->Representation_;
      }

      SimSlab_Ceiling::Representation_optional& SimSlab_Ceiling::
      Representation ()
      {
        return this->Representation_;
      }

      void SimSlab_Ceiling::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimSlab_Ceiling::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimSlab_Ceiling::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimSlab_Ceiling::SimSlab_ConstructionName_optional& SimSlab_Ceiling::
      SimSlab_ConstructionName () const
      {
        return this->SimSlab_ConstructionName_;
      }

      SimSlab_Ceiling::SimSlab_ConstructionName_optional& SimSlab_Ceiling::
      SimSlab_ConstructionName ()
      {
        return this->SimSlab_ConstructionName_;
      }

      void SimSlab_Ceiling::
      SimSlab_ConstructionName (const SimSlab_ConstructionName_type& x)
      {
        this->SimSlab_ConstructionName_.set (x);
      }

      void SimSlab_Ceiling::
      SimSlab_ConstructionName (const SimSlab_ConstructionName_optional& x)
      {
        this->SimSlab_ConstructionName_ = x;
      }

      void SimSlab_Ceiling::
      SimSlab_ConstructionName (::std::auto_ptr< SimSlab_ConstructionName_type > x)
      {
        this->SimSlab_ConstructionName_.set (x);
      }

      const SimSlab_Ceiling::SimSlab_ZoneName_optional& SimSlab_Ceiling::
      SimSlab_ZoneName () const
      {
        return this->SimSlab_ZoneName_;
      }

      SimSlab_Ceiling::SimSlab_ZoneName_optional& SimSlab_Ceiling::
      SimSlab_ZoneName ()
      {
        return this->SimSlab_ZoneName_;
      }

      void SimSlab_Ceiling::
      SimSlab_ZoneName (const SimSlab_ZoneName_type& x)
      {
        this->SimSlab_ZoneName_.set (x);
      }

      void SimSlab_Ceiling::
      SimSlab_ZoneName (const SimSlab_ZoneName_optional& x)
      {
        this->SimSlab_ZoneName_ = x;
      }

      void SimSlab_Ceiling::
      SimSlab_ZoneName (::std::auto_ptr< SimSlab_ZoneName_type > x)
      {
        this->SimSlab_ZoneName_.set (x);
      }

      const SimSlab_Ceiling::SurfProp_HeatTransAlg_MultSurf_SurfType_optional& SimSlab_Ceiling::
      SurfProp_HeatTransAlg_MultSurf_SurfType () const
      {
        return this->SurfProp_HeatTransAlg_MultSurf_SurfType_;
      }

      SimSlab_Ceiling::SurfProp_HeatTransAlg_MultSurf_SurfType_optional& SimSlab_Ceiling::
      SurfProp_HeatTransAlg_MultSurf_SurfType ()
      {
        return this->SurfProp_HeatTransAlg_MultSurf_SurfType_;
      }

      void SimSlab_Ceiling::
      SurfProp_HeatTransAlg_MultSurf_SurfType (const SurfProp_HeatTransAlg_MultSurf_SurfType_type& x)
      {
        this->SurfProp_HeatTransAlg_MultSurf_SurfType_.set (x);
      }

      void SimSlab_Ceiling::
      SurfProp_HeatTransAlg_MultSurf_SurfType (const SurfProp_HeatTransAlg_MultSurf_SurfType_optional& x)
      {
        this->SurfProp_HeatTransAlg_MultSurf_SurfType_ = x;
      }

      void SimSlab_Ceiling::
      SurfProp_HeatTransAlg_MultSurf_SurfType (::std::auto_ptr< SurfProp_HeatTransAlg_MultSurf_SurfType_type > x)
      {
        this->SurfProp_HeatTransAlg_MultSurf_SurfType_.set (x);
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
      // SimSlab_Ceiling
      //

      SimSlab_Ceiling::
      SimSlab_Ceiling (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimSlab (RefId),
        Representation_ (this),
        SimSlab_ConstructionName_ (this),
        SimSlab_ZoneName_ (this),
        SurfProp_HeatTransAlg_MultSurf_SurfType_ (this)
      {
      }

      SimSlab_Ceiling::
      SimSlab_Ceiling (const SimSlab_Ceiling& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSlab (x, f, c),
        Representation_ (x.Representation_, f, this),
        SimSlab_ConstructionName_ (x.SimSlab_ConstructionName_, f, this),
        SimSlab_ZoneName_ (x.SimSlab_ZoneName_, f, this),
        SurfProp_HeatTransAlg_MultSurf_SurfType_ (x.SurfProp_HeatTransAlg_MultSurf_SurfType_, f, this)
      {
      }

      SimSlab_Ceiling::
      SimSlab_Ceiling (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSlab (e, f | ::xml_schema::flags::base, c),
        Representation_ (this),
        SimSlab_ConstructionName_ (this),
        SimSlab_ZoneName_ (this),
        SurfProp_HeatTransAlg_MultSurf_SurfType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSlab_Ceiling::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimSlab::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

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

          // SimSlab_ConstructionName
          //
          if (n.name () == "SimSlab_ConstructionName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSlab_ConstructionName_type > r (
              SimSlab_ConstructionName_traits::create (i, f, this));

            if (!this->SimSlab_ConstructionName_)
            {
              this->SimSlab_ConstructionName_.set (r);
              continue;
            }
          }

          // SimSlab_ZoneName
          //
          if (n.name () == "SimSlab_ZoneName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSlab_ZoneName_type > r (
              SimSlab_ZoneName_traits::create (i, f, this));

            if (!this->SimSlab_ZoneName_)
            {
              this->SimSlab_ZoneName_.set (r);
              continue;
            }
          }

          // SurfProp_HeatTransAlg_MultSurf_SurfType
          //
          if (n.name () == "SurfProp_HeatTransAlg_MultSurf_SurfType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SurfProp_HeatTransAlg_MultSurf_SurfType_type > r (
              SurfProp_HeatTransAlg_MultSurf_SurfType_traits::create (i, f, this));

            if (!this->SurfProp_HeatTransAlg_MultSurf_SurfType_)
            {
              this->SurfProp_HeatTransAlg_MultSurf_SurfType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSlab_Ceiling* SimSlab_Ceiling::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSlab_Ceiling (*this, f, c);
      }

      SimSlab_Ceiling& SimSlab_Ceiling::
      operator= (const SimSlab_Ceiling& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimSlab& > (*this) = x;
          this->Representation_ = x.Representation_;
          this->SimSlab_ConstructionName_ = x.SimSlab_ConstructionName_;
          this->SimSlab_ZoneName_ = x.SimSlab_ZoneName_;
          this->SurfProp_HeatTransAlg_MultSurf_SurfType_ = x.SurfProp_HeatTransAlg_MultSurf_SurfType_;
        }

        return *this;
      }

      SimSlab_Ceiling::
      ~SimSlab_Ceiling ()
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
