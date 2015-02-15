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

#include "SimGeomCurve_OffsetCurve3D.hxx"

#include "logical.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimGeomCurve_OffsetCurve3D
      // 

      const SimGeomCurve_OffsetCurve3D::BasisCurve_optional& SimGeomCurve_OffsetCurve3D::
      BasisCurve () const
      {
        return this->BasisCurve_;
      }

      SimGeomCurve_OffsetCurve3D::BasisCurve_optional& SimGeomCurve_OffsetCurve3D::
      BasisCurve ()
      {
        return this->BasisCurve_;
      }

      void SimGeomCurve_OffsetCurve3D::
      BasisCurve (const BasisCurve_type& x)
      {
        this->BasisCurve_.set (x);
      }

      void SimGeomCurve_OffsetCurve3D::
      BasisCurve (const BasisCurve_optional& x)
      {
        this->BasisCurve_ = x;
      }

      void SimGeomCurve_OffsetCurve3D::
      BasisCurve (::std::auto_ptr< BasisCurve_type > x)
      {
        this->BasisCurve_.set (x);
      }

      const SimGeomCurve_OffsetCurve3D::Distance_optional& SimGeomCurve_OffsetCurve3D::
      Distance () const
      {
        return this->Distance_;
      }

      SimGeomCurve_OffsetCurve3D::Distance_optional& SimGeomCurve_OffsetCurve3D::
      Distance ()
      {
        return this->Distance_;
      }

      void SimGeomCurve_OffsetCurve3D::
      Distance (const Distance_type& x)
      {
        this->Distance_.set (x);
      }

      void SimGeomCurve_OffsetCurve3D::
      Distance (const Distance_optional& x)
      {
        this->Distance_ = x;
      }

      const SimGeomCurve_OffsetCurve3D::SelfIntersect_optional& SimGeomCurve_OffsetCurve3D::
      SelfIntersect () const
      {
        return this->SelfIntersect_;
      }

      SimGeomCurve_OffsetCurve3D::SelfIntersect_optional& SimGeomCurve_OffsetCurve3D::
      SelfIntersect ()
      {
        return this->SelfIntersect_;
      }

      void SimGeomCurve_OffsetCurve3D::
      SelfIntersect (const SelfIntersect_type& x)
      {
        this->SelfIntersect_.set (x);
      }

      void SimGeomCurve_OffsetCurve3D::
      SelfIntersect (const SelfIntersect_optional& x)
      {
        this->SelfIntersect_ = x;
      }

      void SimGeomCurve_OffsetCurve3D::
      SelfIntersect (::std::auto_ptr< SelfIntersect_type > x)
      {
        this->SelfIntersect_.set (x);
      }

      const SimGeomCurve_OffsetCurve3D::RefDirection_optional& SimGeomCurve_OffsetCurve3D::
      RefDirection () const
      {
        return this->RefDirection_;
      }

      SimGeomCurve_OffsetCurve3D::RefDirection_optional& SimGeomCurve_OffsetCurve3D::
      RefDirection ()
      {
        return this->RefDirection_;
      }

      void SimGeomCurve_OffsetCurve3D::
      RefDirection (const RefDirection_type& x)
      {
        this->RefDirection_.set (x);
      }

      void SimGeomCurve_OffsetCurve3D::
      RefDirection (const RefDirection_optional& x)
      {
        this->RefDirection_ = x;
      }

      void SimGeomCurve_OffsetCurve3D::
      RefDirection (::std::auto_ptr< RefDirection_type > x)
      {
        this->RefDirection_.set (x);
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
    namespace ResourcesGeometry
    {
      // SimGeomCurve_OffsetCurve3D
      //

      SimGeomCurve_OffsetCurve3D::
      SimGeomCurve_OffsetCurve3D (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomCurve (RefId),
        BasisCurve_ (this),
        Distance_ (this),
        SelfIntersect_ (this),
        RefDirection_ (this)
      {
      }

      SimGeomCurve_OffsetCurve3D::
      SimGeomCurve_OffsetCurve3D (const SimGeomCurve_OffsetCurve3D& x,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomCurve (x, f, c),
        BasisCurve_ (x.BasisCurve_, f, this),
        Distance_ (x.Distance_, f, this),
        SelfIntersect_ (x.SelfIntersect_, f, this),
        RefDirection_ (x.RefDirection_, f, this)
      {
      }

      SimGeomCurve_OffsetCurve3D::
      SimGeomCurve_OffsetCurve3D (const ::xercesc::DOMElement& e,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomCurve (e, f | ::xml_schema::flags::base, c),
        BasisCurve_ (this),
        Distance_ (this),
        SelfIntersect_ (this),
        RefDirection_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomCurve_OffsetCurve3D::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimGeomCurve::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // BasisCurve
          //
          if (n.name () == "BasisCurve" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< BasisCurve_type > r (
              BasisCurve_traits::create (i, f, this));

            if (!this->BasisCurve_)
            {
              this->BasisCurve_.set (r);
              continue;
            }
          }

          // Distance
          //
          if (n.name () == "Distance" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->Distance_)
            {
              this->Distance_.set (Distance_traits::create (i, f, this));
              continue;
            }
          }

          // SelfIntersect
          //
          if (n.name () == "SelfIntersect" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< SelfIntersect_type > r (
              SelfIntersect_traits::create (i, f, this));

            if (!this->SelfIntersect_)
            {
              this->SelfIntersect_.set (r);
              continue;
            }
          }

          // RefDirection
          //
          if (n.name () == "RefDirection" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< RefDirection_type > r (
              RefDirection_traits::create (i, f, this));

            if (!this->RefDirection_)
            {
              this->RefDirection_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGeomCurve_OffsetCurve3D* SimGeomCurve_OffsetCurve3D::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomCurve_OffsetCurve3D (*this, f, c);
      }

      SimGeomCurve_OffsetCurve3D& SimGeomCurve_OffsetCurve3D::
      operator= (const SimGeomCurve_OffsetCurve3D& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimGeomCurve& > (*this) = x;
          this->BasisCurve_ = x.BasisCurve_;
          this->Distance_ = x.Distance_;
          this->SelfIntersect_ = x.SelfIntersect_;
          this->RefDirection_ = x.RefDirection_;
        }

        return *this;
      }

      SimGeomCurve_OffsetCurve3D::
      ~SimGeomCurve_OffsetCurve3D ()
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

