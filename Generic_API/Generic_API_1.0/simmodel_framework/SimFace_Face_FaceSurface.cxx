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

#include "SimFace_Face_FaceSurface.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimFace_Face_FaceSurface
      // 

      const SimFace_Face_FaceSurface::FaceSurface_optional& SimFace_Face_FaceSurface::
      FaceSurface () const
      {
        return this->FaceSurface_;
      }

      SimFace_Face_FaceSurface::FaceSurface_optional& SimFace_Face_FaceSurface::
      FaceSurface ()
      {
        return this->FaceSurface_;
      }

      void SimFace_Face_FaceSurface::
      FaceSurface (const FaceSurface_type& x)
      {
        this->FaceSurface_.set (x);
      }

      void SimFace_Face_FaceSurface::
      FaceSurface (const FaceSurface_optional& x)
      {
        this->FaceSurface_ = x;
      }

      void SimFace_Face_FaceSurface::
      FaceSurface (::std::auto_ptr< FaceSurface_type > x)
      {
        this->FaceSurface_.set (x);
      }

      const SimFace_Face_FaceSurface::SameSense_optional& SimFace_Face_FaceSurface::
      SameSense () const
      {
        return this->SameSense_;
      }

      SimFace_Face_FaceSurface::SameSense_optional& SimFace_Face_FaceSurface::
      SameSense ()
      {
        return this->SameSense_;
      }

      void SimFace_Face_FaceSurface::
      SameSense (const SameSense_type& x)
      {
        this->SameSense_.set (x);
      }

      void SimFace_Face_FaceSurface::
      SameSense (const SameSense_optional& x)
      {
        this->SameSense_ = x;
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
      // SimFace_Face_FaceSurface
      //

      SimFace_Face_FaceSurface::
      SimFace_Face_FaceSurface (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimFace_Face (RefId),
        FaceSurface_ (this),
        SameSense_ (this)
      {
      }

      SimFace_Face_FaceSurface::
      SimFace_Face_FaceSurface (const SimFace_Face_FaceSurface& x,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimFace_Face (x, f, c),
        FaceSurface_ (x.FaceSurface_, f, this),
        SameSense_ (x.SameSense_, f, this)
      {
      }

      SimFace_Face_FaceSurface::
      SimFace_Face_FaceSurface (const ::xercesc::DOMElement& e,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimFace_Face (e, f | ::xml_schema::flags::base, c),
        FaceSurface_ (this),
        SameSense_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFace_Face_FaceSurface::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimFace_Face::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // FaceSurface
          //
          if (n.name () == "FaceSurface" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< FaceSurface_type > r (
              FaceSurface_traits::create (i, f, this));

            if (!this->FaceSurface_)
            {
              this->FaceSurface_.set (r);
              continue;
            }
          }

          // SameSense
          //
          if (n.name () == "SameSense" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->SameSense_)
            {
              this->SameSense_.set (SameSense_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFace_Face_FaceSurface* SimFace_Face_FaceSurface::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFace_Face_FaceSurface (*this, f, c);
      }

      SimFace_Face_FaceSurface& SimFace_Face_FaceSurface::
      operator= (const SimFace_Face_FaceSurface& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimFace_Face& > (*this) = x;
          this->FaceSurface_ = x.FaceSurface_;
          this->SameSense_ = x.SameSense_;
        }

        return *this;
      }

      SimFace_Face_FaceSurface::
      ~SimFace_Face_FaceSurface ()
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
