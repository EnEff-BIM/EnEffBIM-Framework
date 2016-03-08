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

#include "SimGeomSurface_BoundedSurface_CurveBoundedPlane.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomSurface_BoundedSurface_CurveBoundedPlane
      // 

      const SimGeomSurface_BoundedSurface_CurveBoundedPlane::BasisSurface_optional& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      BasisSurface () const
      {
        return this->BasisSurface_;
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::BasisSurface_optional& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      BasisSurface ()
      {
        return this->BasisSurface_;
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      BasisSurface (const BasisSurface_type& x)
      {
        this->BasisSurface_.set (x);
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      BasisSurface (const BasisSurface_optional& x)
      {
        this->BasisSurface_ = x;
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      BasisSurface (::std::auto_ptr< BasisSurface_type > x)
      {
        this->BasisSurface_.set (x);
      }

      const SimGeomSurface_BoundedSurface_CurveBoundedPlane::OuterBoundary_optional& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      OuterBoundary () const
      {
        return this->OuterBoundary_;
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::OuterBoundary_optional& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      OuterBoundary ()
      {
        return this->OuterBoundary_;
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      OuterBoundary (const OuterBoundary_type& x)
      {
        this->OuterBoundary_.set (x);
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      OuterBoundary (const OuterBoundary_optional& x)
      {
        this->OuterBoundary_ = x;
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      OuterBoundary (::std::auto_ptr< OuterBoundary_type > x)
      {
        this->OuterBoundary_.set (x);
      }

      const SimGeomSurface_BoundedSurface_CurveBoundedPlane::InnerBoundaries_optional& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      InnerBoundaries () const
      {
        return this->InnerBoundaries_;
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::InnerBoundaries_optional& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      InnerBoundaries ()
      {
        return this->InnerBoundaries_;
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      InnerBoundaries (const InnerBoundaries_type& x)
      {
        this->InnerBoundaries_.set (x);
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      InnerBoundaries (const InnerBoundaries_optional& x)
      {
        this->InnerBoundaries_ = x;
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      InnerBoundaries (::std::auto_ptr< InnerBoundaries_type > x)
      {
        this->InnerBoundaries_.set (x);
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
    namespace ResourcesGeometry
    {
      // SimGeomSurface_BoundedSurface_CurveBoundedPlane
      //

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      SimGeomSurface_BoundedSurface_CurveBoundedPlane ()
      : ::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface (),
        BasisSurface_ (this),
        OuterBoundary_ (this),
        InnerBoundaries_ (this)
      {
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      SimGeomSurface_BoundedSurface_CurveBoundedPlane (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface (RefId),
        BasisSurface_ (this),
        OuterBoundary_ (this),
        InnerBoundaries_ (this)
      {
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      SimGeomSurface_BoundedSurface_CurveBoundedPlane (const SimGeomSurface_BoundedSurface_CurveBoundedPlane& x,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface (x, f, c),
        BasisSurface_ (x.BasisSurface_, f, this),
        OuterBoundary_ (x.OuterBoundary_, f, this),
        InnerBoundaries_ (x.InnerBoundaries_, f, this)
      {
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      SimGeomSurface_BoundedSurface_CurveBoundedPlane (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface (e, f | ::xml_schema::flags::base, c),
        BasisSurface_ (this),
        OuterBoundary_ (this),
        InnerBoundaries_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // BasisSurface
          //
          if (n.name () == "BasisSurface" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< BasisSurface_type > r (
              BasisSurface_traits::create (i, f, this));

            if (!this->BasisSurface_)
            {
              this->BasisSurface_.set (r);
              continue;
            }
          }

          // OuterBoundary
          //
          if (n.name () == "OuterBoundary" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< OuterBoundary_type > r (
              OuterBoundary_traits::create (i, f, this));

            if (!this->OuterBoundary_)
            {
              this->OuterBoundary_.set (r);
              continue;
            }
          }

          // InnerBoundaries
          //
          if (n.name () == "InnerBoundaries" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< InnerBoundaries_type > r (
              InnerBoundaries_traits::create (i, f, this));

            if (!this->InnerBoundaries_)
            {
              this->InnerBoundaries_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane* SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomSurface_BoundedSurface_CurveBoundedPlane (*this, f, c);
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane& SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      operator= (const SimGeomSurface_BoundedSurface_CurveBoundedPlane& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimGeomSurface_BoundedSurface& > (*this) = x;
          this->BasisSurface_ = x.BasisSurface_;
          this->OuterBoundary_ = x.OuterBoundary_;
          this->InnerBoundaries_ = x.InnerBoundaries_;
        }

        return *this;
      }

      SimGeomSurface_BoundedSurface_CurveBoundedPlane::
      ~SimGeomSurface_BoundedSurface_CurveBoundedPlane ()
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
    namespace ResourcesGeometry
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

