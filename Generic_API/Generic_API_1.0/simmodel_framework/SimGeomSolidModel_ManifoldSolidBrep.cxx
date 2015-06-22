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

#include "SimGeomSolidModel_ManifoldSolidBrep.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimGeomSolidModel_ManifoldSolidBrep
      // 

      const SimGeomSolidModel_ManifoldSolidBrep::Outer_optional& SimGeomSolidModel_ManifoldSolidBrep::
      Outer () const
      {
        return this->Outer_;
      }

      SimGeomSolidModel_ManifoldSolidBrep::Outer_optional& SimGeomSolidModel_ManifoldSolidBrep::
      Outer ()
      {
        return this->Outer_;
      }

      void SimGeomSolidModel_ManifoldSolidBrep::
      Outer (const Outer_type& x)
      {
        this->Outer_.set (x);
      }

      void SimGeomSolidModel_ManifoldSolidBrep::
      Outer (const Outer_optional& x)
      {
        this->Outer_ = x;
      }

      void SimGeomSolidModel_ManifoldSolidBrep::
      Outer (::std::auto_ptr< Outer_type > x)
      {
        this->Outer_.set (x);
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
      // SimGeomSolidModel_ManifoldSolidBrep
      //

      SimGeomSolidModel_ManifoldSolidBrep::
      SimGeomSolidModel_ManifoldSolidBrep (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomSolidModel (RefId),
        Outer_ (this)
      {
      }

      SimGeomSolidModel_ManifoldSolidBrep::
      SimGeomSolidModel_ManifoldSolidBrep (const SimGeomSolidModel_ManifoldSolidBrep& x,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomSolidModel (x, f, c),
        Outer_ (x.Outer_, f, this)
      {
      }

      SimGeomSolidModel_ManifoldSolidBrep::
      SimGeomSolidModel_ManifoldSolidBrep (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimGeomSolidModel (e, f | ::xml_schema::flags::base, c),
        Outer_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomSolidModel_ManifoldSolidBrep::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimGeomSolidModel::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Outer
          //
          if (n.name () == "Outer" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< Outer_type > r (
              Outer_traits::create (i, f, this));

            if (!this->Outer_)
            {
              this->Outer_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGeomSolidModel_ManifoldSolidBrep* SimGeomSolidModel_ManifoldSolidBrep::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomSolidModel_ManifoldSolidBrep (*this, f, c);
      }

      SimGeomSolidModel_ManifoldSolidBrep& SimGeomSolidModel_ManifoldSolidBrep::
      operator= (const SimGeomSolidModel_ManifoldSolidBrep& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimGeomSolidModel& > (*this) = x;
          this->Outer_ = x.Outer_;
        }

        return *this;
      }

      SimGeomSolidModel_ManifoldSolidBrep::
      ~SimGeomSolidModel_ManifoldSolidBrep ()
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
