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

#include "SimGeomVector_Vector_Direction.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomVector_Vector_Direction
      // 

      const SimGeomVector_Vector_Direction::DirectionRatios_optional& SimGeomVector_Vector_Direction::
      DirectionRatios () const
      {
        return this->DirectionRatios_;
      }

      SimGeomVector_Vector_Direction::DirectionRatios_optional& SimGeomVector_Vector_Direction::
      DirectionRatios ()
      {
        return this->DirectionRatios_;
      }

      void SimGeomVector_Vector_Direction::
      DirectionRatios (const DirectionRatios_type& x)
      {
        this->DirectionRatios_.set (x);
      }

      void SimGeomVector_Vector_Direction::
      DirectionRatios (const DirectionRatios_optional& x)
      {
        this->DirectionRatios_ = x;
      }

      void SimGeomVector_Vector_Direction::
      DirectionRatios (::std::auto_ptr< DirectionRatios_type > x)
      {
        this->DirectionRatios_.set (x);
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
      // SimGeomVector_Vector_Direction
      //

      SimGeomVector_Vector_Direction::
      SimGeomVector_Vector_Direction ()
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (),
        DirectionRatios_ (this)
      {
      }

      SimGeomVector_Vector_Direction::
      SimGeomVector_Vector_Direction (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (RefId),
        DirectionRatios_ (this)
      {
      }

      SimGeomVector_Vector_Direction::
      SimGeomVector_Vector_Direction (const SimGeomVector_Vector_Direction& x,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (x, f, c),
        DirectionRatios_ (x.DirectionRatios_, f, this)
      {
      }

      SimGeomVector_Vector_Direction::
      SimGeomVector_Vector_Direction (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (e, f | ::xml_schema::flags::base, c),
        DirectionRatios_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomVector_Vector_Direction::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimGeomVector_Vector::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // DirectionRatios
          //
          if (n.name () == "DirectionRatios" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< DirectionRatios_type > r (
              DirectionRatios_traits::create (i, f, this));

            if (!this->DirectionRatios_)
            {
              this->DirectionRatios_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGeomVector_Vector_Direction* SimGeomVector_Vector_Direction::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomVector_Vector_Direction (*this, f, c);
      }

      SimGeomVector_Vector_Direction& SimGeomVector_Vector_Direction::
      operator= (const SimGeomVector_Vector_Direction& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector& > (*this) = x;
          this->DirectionRatios_ = x.DirectionRatios_;
        }

        return *this;
      }

      SimGeomVector_Vector_Direction::
      ~SimGeomVector_Vector_Direction ()
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

