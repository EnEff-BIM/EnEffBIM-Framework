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

#include "SimEdge_Edge_OrientedEdge.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimEdge_Edge_OrientedEdge
      // 

      const SimEdge_Edge_OrientedEdge::EdgeElement_optional& SimEdge_Edge_OrientedEdge::
      EdgeElement () const
      {
        return this->EdgeElement_;
      }

      SimEdge_Edge_OrientedEdge::EdgeElement_optional& SimEdge_Edge_OrientedEdge::
      EdgeElement ()
      {
        return this->EdgeElement_;
      }

      void SimEdge_Edge_OrientedEdge::
      EdgeElement (const EdgeElement_type& x)
      {
        this->EdgeElement_.set (x);
      }

      void SimEdge_Edge_OrientedEdge::
      EdgeElement (const EdgeElement_optional& x)
      {
        this->EdgeElement_ = x;
      }

      void SimEdge_Edge_OrientedEdge::
      EdgeElement (::std::auto_ptr< EdgeElement_type > x)
      {
        this->EdgeElement_.set (x);
      }

      const SimEdge_Edge_OrientedEdge::Orientation_optional& SimEdge_Edge_OrientedEdge::
      Orientation () const
      {
        return this->Orientation_;
      }

      SimEdge_Edge_OrientedEdge::Orientation_optional& SimEdge_Edge_OrientedEdge::
      Orientation ()
      {
        return this->Orientation_;
      }

      void SimEdge_Edge_OrientedEdge::
      Orientation (const Orientation_type& x)
      {
        this->Orientation_.set (x);
      }

      void SimEdge_Edge_OrientedEdge::
      Orientation (const Orientation_optional& x)
      {
        this->Orientation_ = x;
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
      // SimEdge_Edge_OrientedEdge
      //

      SimEdge_Edge_OrientedEdge::
      SimEdge_Edge_OrientedEdge (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimEdge_Edge (RefId),
        EdgeElement_ (this),
        Orientation_ (this)
      {
      }

      SimEdge_Edge_OrientedEdge::
      SimEdge_Edge_OrientedEdge (const SimEdge_Edge_OrientedEdge& x,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimEdge_Edge (x, f, c),
        EdgeElement_ (x.EdgeElement_, f, this),
        Orientation_ (x.Orientation_, f, this)
      {
      }

      SimEdge_Edge_OrientedEdge::
      SimEdge_Edge_OrientedEdge (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimEdge_Edge (e, f | ::xml_schema::flags::base, c),
        EdgeElement_ (this),
        Orientation_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimEdge_Edge_OrientedEdge::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimEdge_Edge::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // EdgeElement
          //
          if (n.name () == "EdgeElement" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< EdgeElement_type > r (
              EdgeElement_traits::create (i, f, this));

            if (!this->EdgeElement_)
            {
              this->EdgeElement_.set (r);
              continue;
            }
          }

          // Orientation
          //
          if (n.name () == "Orientation" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->Orientation_)
            {
              this->Orientation_.set (Orientation_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimEdge_Edge_OrientedEdge* SimEdge_Edge_OrientedEdge::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimEdge_Edge_OrientedEdge (*this, f, c);
      }

      SimEdge_Edge_OrientedEdge& SimEdge_Edge_OrientedEdge::
      operator= (const SimEdge_Edge_OrientedEdge& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimEdge_Edge& > (*this) = x;
          this->EdgeElement_ = x.EdgeElement_;
          this->Orientation_ = x.Orientation_;
        }

        return *this;
      }

      SimEdge_Edge_OrientedEdge::
      ~SimEdge_Edge_OrientedEdge ()
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
