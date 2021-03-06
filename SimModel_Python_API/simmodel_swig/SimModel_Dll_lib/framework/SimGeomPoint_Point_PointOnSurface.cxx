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

#include "SimGeomPoint_Point_PointOnSurface.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomPoint_Point_PointOnSurface
      // 

      const SimGeomPoint_Point_PointOnSurface::BasisSurface_optional& SimGeomPoint_Point_PointOnSurface::
      BasisSurface () const
      {
        return this->BasisSurface_;
      }

      SimGeomPoint_Point_PointOnSurface::BasisSurface_optional& SimGeomPoint_Point_PointOnSurface::
      BasisSurface ()
      {
        return this->BasisSurface_;
      }

      void SimGeomPoint_Point_PointOnSurface::
      BasisSurface (const BasisSurface_type& x)
      {
        this->BasisSurface_.set (x);
      }

      void SimGeomPoint_Point_PointOnSurface::
      BasisSurface (const BasisSurface_optional& x)
      {
        this->BasisSurface_ = x;
      }

      void SimGeomPoint_Point_PointOnSurface::
      BasisSurface (::std::auto_ptr< BasisSurface_type > x)
      {
        this->BasisSurface_.set (x);
      }

      const SimGeomPoint_Point_PointOnSurface::PointParameterU_optional& SimGeomPoint_Point_PointOnSurface::
      PointParameterU () const
      {
        return this->PointParameterU_;
      }

      SimGeomPoint_Point_PointOnSurface::PointParameterU_optional& SimGeomPoint_Point_PointOnSurface::
      PointParameterU ()
      {
        return this->PointParameterU_;
      }

      void SimGeomPoint_Point_PointOnSurface::
      PointParameterU (const PointParameterU_type& x)
      {
        this->PointParameterU_.set (x);
      }

      void SimGeomPoint_Point_PointOnSurface::
      PointParameterU (const PointParameterU_optional& x)
      {
        this->PointParameterU_ = x;
      }

      const SimGeomPoint_Point_PointOnSurface::PointParameterV_optional& SimGeomPoint_Point_PointOnSurface::
      PointParameterV () const
      {
        return this->PointParameterV_;
      }

      SimGeomPoint_Point_PointOnSurface::PointParameterV_optional& SimGeomPoint_Point_PointOnSurface::
      PointParameterV ()
      {
        return this->PointParameterV_;
      }

      void SimGeomPoint_Point_PointOnSurface::
      PointParameterV (const PointParameterV_type& x)
      {
        this->PointParameterV_.set (x);
      }

      void SimGeomPoint_Point_PointOnSurface::
      PointParameterV (const PointParameterV_optional& x)
      {
        this->PointParameterV_ = x;
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
      // SimGeomPoint_Point_PointOnSurface
      //

      SimGeomPoint_Point_PointOnSurface::
      SimGeomPoint_Point_PointOnSurface ()
      : ::schema::simxml::ResourcesGeometry::SimGeomPoint_Point (),
        BasisSurface_ (this),
        PointParameterU_ (this),
        PointParameterV_ (this)
      {
      }

      SimGeomPoint_Point_PointOnSurface::
      SimGeomPoint_Point_PointOnSurface (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimGeomPoint_Point (RefId),
        BasisSurface_ (this),
        PointParameterU_ (this),
        PointParameterV_ (this)
      {
      }

      SimGeomPoint_Point_PointOnSurface::
      SimGeomPoint_Point_PointOnSurface (const SimGeomPoint_Point_PointOnSurface& x,
                                         ::xml_schema::flags f,
                                         ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomPoint_Point (x, f, c),
        BasisSurface_ (x.BasisSurface_, f, this),
        PointParameterU_ (x.PointParameterU_, f, this),
        PointParameterV_ (x.PointParameterV_, f, this)
      {
      }

      SimGeomPoint_Point_PointOnSurface::
      SimGeomPoint_Point_PointOnSurface (const ::xercesc::DOMElement& e,
                                         ::xml_schema::flags f,
                                         ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomPoint_Point (e, f | ::xml_schema::flags::base, c),
        BasisSurface_ (this),
        PointParameterU_ (this),
        PointParameterV_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomPoint_Point_PointOnSurface::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimGeomPoint_Point::parse (p, f);

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

          // PointParameterU
          //
          if (n.name () == "PointParameterU" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->PointParameterU_)
            {
              this->PointParameterU_.set (PointParameterU_traits::create (i, f, this));
              continue;
            }
          }

          // PointParameterV
          //
          if (n.name () == "PointParameterV" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->PointParameterV_)
            {
              this->PointParameterV_.set (PointParameterV_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimGeomPoint_Point_PointOnSurface* SimGeomPoint_Point_PointOnSurface::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomPoint_Point_PointOnSurface (*this, f, c);
      }

      SimGeomPoint_Point_PointOnSurface& SimGeomPoint_Point_PointOnSurface::
      operator= (const SimGeomPoint_Point_PointOnSurface& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimGeomPoint_Point& > (*this) = x;
          this->BasisSurface_ = x.BasisSurface_;
          this->PointParameterU_ = x.PointParameterU_;
          this->PointParameterV_ = x.PointParameterV_;
        }

        return *this;
      }

      SimGeomPoint_Point_PointOnSurface::
      ~SimGeomPoint_Point_PointOnSurface ()
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

