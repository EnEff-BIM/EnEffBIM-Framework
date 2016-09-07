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

#include "SimEdge_Edge_Subedge.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimEdge_Edge_Subedge
      // 

      const SimEdge_Edge_Subedge::EdgeStart_optional& SimEdge_Edge_Subedge::
      EdgeStart () const
      {
        return this->EdgeStart_;
      }

      SimEdge_Edge_Subedge::EdgeStart_optional& SimEdge_Edge_Subedge::
      EdgeStart ()
      {
        return this->EdgeStart_;
      }

      void SimEdge_Edge_Subedge::
      EdgeStart (const EdgeStart_type& x)
      {
        this->EdgeStart_.set (x);
      }

      void SimEdge_Edge_Subedge::
      EdgeStart (const EdgeStart_optional& x)
      {
        this->EdgeStart_ = x;
      }

      void SimEdge_Edge_Subedge::
      EdgeStart (::std::auto_ptr< EdgeStart_type > x)
      {
        this->EdgeStart_.set (x);
      }

      const SimEdge_Edge_Subedge::EdgeEnd_optional& SimEdge_Edge_Subedge::
      EdgeEnd () const
      {
        return this->EdgeEnd_;
      }

      SimEdge_Edge_Subedge::EdgeEnd_optional& SimEdge_Edge_Subedge::
      EdgeEnd ()
      {
        return this->EdgeEnd_;
      }

      void SimEdge_Edge_Subedge::
      EdgeEnd (const EdgeEnd_type& x)
      {
        this->EdgeEnd_.set (x);
      }

      void SimEdge_Edge_Subedge::
      EdgeEnd (const EdgeEnd_optional& x)
      {
        this->EdgeEnd_ = x;
      }

      void SimEdge_Edge_Subedge::
      EdgeEnd (::std::auto_ptr< EdgeEnd_type > x)
      {
        this->EdgeEnd_.set (x);
      }

      const SimEdge_Edge_Subedge::ParentEdge_optional& SimEdge_Edge_Subedge::
      ParentEdge () const
      {
        return this->ParentEdge_;
      }

      SimEdge_Edge_Subedge::ParentEdge_optional& SimEdge_Edge_Subedge::
      ParentEdge ()
      {
        return this->ParentEdge_;
      }

      void SimEdge_Edge_Subedge::
      ParentEdge (const ParentEdge_type& x)
      {
        this->ParentEdge_.set (x);
      }

      void SimEdge_Edge_Subedge::
      ParentEdge (const ParentEdge_optional& x)
      {
        this->ParentEdge_ = x;
      }

      void SimEdge_Edge_Subedge::
      ParentEdge (::std::auto_ptr< ParentEdge_type > x)
      {
        this->ParentEdge_.set (x);
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
      // SimEdge_Edge_Subedge
      //

      SimEdge_Edge_Subedge::
      SimEdge_Edge_Subedge ()
      : ::schema::simxml::ResourcesGeometry::SimEdge_Edge (),
        EdgeStart_ (this),
        EdgeEnd_ (this),
        ParentEdge_ (this)
      {
      }

      SimEdge_Edge_Subedge::
      SimEdge_Edge_Subedge (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimEdge_Edge (RefId),
        EdgeStart_ (this),
        EdgeEnd_ (this),
        ParentEdge_ (this)
      {
      }

      SimEdge_Edge_Subedge::
      SimEdge_Edge_Subedge (const SimEdge_Edge_Subedge& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimEdge_Edge (x, f, c),
        EdgeStart_ (x.EdgeStart_, f, this),
        EdgeEnd_ (x.EdgeEnd_, f, this),
        ParentEdge_ (x.ParentEdge_, f, this)
      {
      }

      SimEdge_Edge_Subedge::
      SimEdge_Edge_Subedge (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimEdge_Edge (e, f | ::xml_schema::flags::base, c),
        EdgeStart_ (this),
        EdgeEnd_ (this),
        ParentEdge_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimEdge_Edge_Subedge::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimEdge_Edge::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // EdgeStart
          //
          if (n.name () == "EdgeStart" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< EdgeStart_type > r (
              EdgeStart_traits::create (i, f, this));

            if (!this->EdgeStart_)
            {
              this->EdgeStart_.set (r);
              continue;
            }
          }

          // EdgeEnd
          //
          if (n.name () == "EdgeEnd" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< EdgeEnd_type > r (
              EdgeEnd_traits::create (i, f, this));

            if (!this->EdgeEnd_)
            {
              this->EdgeEnd_.set (r);
              continue;
            }
          }

          // ParentEdge
          //
          if (n.name () == "ParentEdge" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< ParentEdge_type > r (
              ParentEdge_traits::create (i, f, this));

            if (!this->ParentEdge_)
            {
              this->ParentEdge_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimEdge_Edge_Subedge* SimEdge_Edge_Subedge::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimEdge_Edge_Subedge (*this, f, c);
      }

      SimEdge_Edge_Subedge& SimEdge_Edge_Subedge::
      operator= (const SimEdge_Edge_Subedge& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimEdge_Edge& > (*this) = x;
          this->EdgeStart_ = x.EdgeStart_;
          this->EdgeEnd_ = x.EdgeEnd_;
          this->ParentEdge_ = x.ParentEdge_;
        }

        return *this;
      }

      SimEdge_Edge_Subedge::
      ~SimEdge_Edge_Subedge ()
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

