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

#include "SimLoop_Loop_VertexLoop.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimLoop_Loop_VertexLoop
      // 

      const SimLoop_Loop_VertexLoop::LoopVertex_optional& SimLoop_Loop_VertexLoop::
      LoopVertex () const
      {
        return this->LoopVertex_;
      }

      SimLoop_Loop_VertexLoop::LoopVertex_optional& SimLoop_Loop_VertexLoop::
      LoopVertex ()
      {
        return this->LoopVertex_;
      }

      void SimLoop_Loop_VertexLoop::
      LoopVertex (const LoopVertex_type& x)
      {
        this->LoopVertex_.set (x);
      }

      void SimLoop_Loop_VertexLoop::
      LoopVertex (const LoopVertex_optional& x)
      {
        this->LoopVertex_ = x;
      }

      void SimLoop_Loop_VertexLoop::
      LoopVertex (::std::auto_ptr< LoopVertex_type > x)
      {
        this->LoopVertex_.set (x);
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
      // SimLoop_Loop_VertexLoop
      //

      SimLoop_Loop_VertexLoop::
      SimLoop_Loop_VertexLoop ()
      : ::schema::simxml::ResourcesGeometry::SimLoop_Loop (),
        LoopVertex_ (this)
      {
      }

      SimLoop_Loop_VertexLoop::
      SimLoop_Loop_VertexLoop (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimLoop_Loop (RefId),
        LoopVertex_ (this)
      {
      }

      SimLoop_Loop_VertexLoop::
      SimLoop_Loop_VertexLoop (const SimLoop_Loop_VertexLoop& x,
                               ::xml_schema::flags f,
                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimLoop_Loop (x, f, c),
        LoopVertex_ (x.LoopVertex_, f, this)
      {
      }

      SimLoop_Loop_VertexLoop::
      SimLoop_Loop_VertexLoop (const ::xercesc::DOMElement& e,
                               ::xml_schema::flags f,
                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimLoop_Loop (e, f | ::xml_schema::flags::base, c),
        LoopVertex_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimLoop_Loop_VertexLoop::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimLoop_Loop::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // LoopVertex
          //
          if (n.name () == "LoopVertex" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< LoopVertex_type > r (
              LoopVertex_traits::create (i, f, this));

            if (!this->LoopVertex_)
            {
              this->LoopVertex_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimLoop_Loop_VertexLoop* SimLoop_Loop_VertexLoop::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimLoop_Loop_VertexLoop (*this, f, c);
      }

      SimLoop_Loop_VertexLoop& SimLoop_Loop_VertexLoop::
      operator= (const SimLoop_Loop_VertexLoop& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimLoop_Loop& > (*this) = x;
          this->LoopVertex_ = x.LoopVertex_;
        }

        return *this;
      }

      SimLoop_Loop_VertexLoop::
      ~SimLoop_Loop_VertexLoop ()
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

