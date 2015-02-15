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

#include "SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone
      // 

      const SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::Height_optional& SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      Height () const
      {
        return this->Height_;
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::Height_optional& SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      Height ()
      {
        return this->Height_;
      }

      void SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      Height (const Height_type& x)
      {
        this->Height_.set (x);
      }

      void SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      Height (const Height_optional& x)
      {
        this->Height_ = x;
      }

      const SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::BottomRadius_optional& SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      BottomRadius () const
      {
        return this->BottomRadius_;
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::BottomRadius_optional& SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      BottomRadius ()
      {
        return this->BottomRadius_;
      }

      void SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      BottomRadius (const BottomRadius_type& x)
      {
        this->BottomRadius_.set (x);
      }

      void SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      BottomRadius (const BottomRadius_optional& x)
      {
        this->BottomRadius_ = x;
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
      // SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone
      //

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomCsgPrimative3D_CsgPrimative3D (RefId),
        Height_ (this),
        BottomRadius_ (this)
      {
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone (const SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone& x,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomCsgPrimative3D_CsgPrimative3D (x, f, c),
        Height_ (x.Height_, f, this),
        BottomRadius_ (x.BottomRadius_, f, this)
      {
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomCsgPrimative3D_CsgPrimative3D (e, f | ::xml_schema::flags::base, c),
        Height_ (this),
        BottomRadius_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimGeomCsgPrimative3D_CsgPrimative3D::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Height
          //
          if (n.name () == "Height" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->Height_)
            {
              this->Height_.set (Height_traits::create (i, f, this));
              continue;
            }
          }

          // BottomRadius
          //
          if (n.name () == "BottomRadius" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->BottomRadius_)
            {
              this->BottomRadius_.set (BottomRadius_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone* SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone (*this, f, c);
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone& SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      operator= (const SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimGeomCsgPrimative3D_CsgPrimative3D& > (*this) = x;
          this->Height_ = x.Height_;
          this->BottomRadius_ = x.BottomRadius_;
        }

        return *this;
      }

      SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone::
      ~SimGeomCsgPrimative3D_CsgPrimative3D_RightCircularCone ()
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

