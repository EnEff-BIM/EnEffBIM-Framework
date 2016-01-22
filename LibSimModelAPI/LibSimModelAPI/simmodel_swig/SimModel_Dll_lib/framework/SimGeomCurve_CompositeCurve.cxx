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

#include "SimGeomCurve_CompositeCurve.hxx"

#include "logical.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomCurve_CompositeCurve
      // 

      const SimGeomCurve_CompositeCurve::Segments_optional& SimGeomCurve_CompositeCurve::
      Segments () const
      {
        return this->Segments_;
      }

      SimGeomCurve_CompositeCurve::Segments_optional& SimGeomCurve_CompositeCurve::
      Segments ()
      {
        return this->Segments_;
      }

      void SimGeomCurve_CompositeCurve::
      Segments (const Segments_type& x)
      {
        this->Segments_.set (x);
      }

      void SimGeomCurve_CompositeCurve::
      Segments (const Segments_optional& x)
      {
        this->Segments_ = x;
      }

      void SimGeomCurve_CompositeCurve::
      Segments (::std::auto_ptr< Segments_type > x)
      {
        this->Segments_.set (x);
      }

      const SimGeomCurve_CompositeCurve::SelfIntersect_optional& SimGeomCurve_CompositeCurve::
      SelfIntersect () const
      {
        return this->SelfIntersect_;
      }

      SimGeomCurve_CompositeCurve::SelfIntersect_optional& SimGeomCurve_CompositeCurve::
      SelfIntersect ()
      {
        return this->SelfIntersect_;
      }

      void SimGeomCurve_CompositeCurve::
      SelfIntersect (const SelfIntersect_type& x)
      {
        this->SelfIntersect_.set (x);
      }

      void SimGeomCurve_CompositeCurve::
      SelfIntersect (const SelfIntersect_optional& x)
      {
        this->SelfIntersect_ = x;
      }

      void SimGeomCurve_CompositeCurve::
      SelfIntersect (::std::auto_ptr< SelfIntersect_type > x)
      {
        this->SelfIntersect_.set (x);
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
      // SimGeomCurve_CompositeCurve
      //

      SimGeomCurve_CompositeCurve::
      SimGeomCurve_CompositeCurve ()
      : ::schema::simxml::ResourcesGeometry::SimGeomCurve (),
        Segments_ (this),
        SelfIntersect_ (this)
      {
      }

      SimGeomCurve_CompositeCurve::
      SimGeomCurve_CompositeCurve (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimGeomCurve (RefId),
        Segments_ (this),
        SelfIntersect_ (this)
      {
      }

      SimGeomCurve_CompositeCurve::
      SimGeomCurve_CompositeCurve (const SimGeomCurve_CompositeCurve& x,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomCurve (x, f, c),
        Segments_ (x.Segments_, f, this),
        SelfIntersect_ (x.SelfIntersect_, f, this)
      {
      }

      SimGeomCurve_CompositeCurve::
      SimGeomCurve_CompositeCurve (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomCurve (e, f | ::xml_schema::flags::base, c),
        Segments_ (this),
        SelfIntersect_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomCurve_CompositeCurve::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimGeomCurve::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Segments
          //
          if (n.name () == "Segments" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Segments_type > r (
              Segments_traits::create (i, f, this));

            if (!this->Segments_)
            {
              this->Segments_.set (r);
              continue;
            }
          }

          // SelfIntersect
          //
          if (n.name () == "SelfIntersect" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< SelfIntersect_type > r (
              SelfIntersect_traits::create (i, f, this));

            if (!this->SelfIntersect_)
            {
              this->SelfIntersect_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGeomCurve_CompositeCurve* SimGeomCurve_CompositeCurve::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomCurve_CompositeCurve (*this, f, c);
      }

      SimGeomCurve_CompositeCurve& SimGeomCurve_CompositeCurve::
      operator= (const SimGeomCurve_CompositeCurve& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimGeomCurve& > (*this) = x;
          this->Segments_ = x.Segments_;
          this->SelfIntersect_ = x.SelfIntersect_;
        }

        return *this;
      }

      SimGeomCurve_CompositeCurve::
      ~SimGeomCurve_CompositeCurve ()
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
