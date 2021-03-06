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

#include "SimGeomVector_Vector_Default.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomVector_Vector_Default
      // 

      const SimGeomVector_Vector_Default::Orientation_Reference_optional& SimGeomVector_Vector_Default::
      Orientation_Reference () const
      {
        return this->Orientation_Reference_;
      }

      SimGeomVector_Vector_Default::Orientation_Reference_optional& SimGeomVector_Vector_Default::
      Orientation_Reference ()
      {
        return this->Orientation_Reference_;
      }

      void SimGeomVector_Vector_Default::
      Orientation_Reference (const Orientation_Reference_type& x)
      {
        this->Orientation_Reference_.set (x);
      }

      void SimGeomVector_Vector_Default::
      Orientation_Reference (const Orientation_Reference_optional& x)
      {
        this->Orientation_Reference_ = x;
      }

      void SimGeomVector_Vector_Default::
      Orientation_Reference (::std::auto_ptr< Orientation_Reference_type > x)
      {
        this->Orientation_Reference_.set (x);
      }

      const SimGeomVector_Vector_Default::Magnitude_optional& SimGeomVector_Vector_Default::
      Magnitude () const
      {
        return this->Magnitude_;
      }

      SimGeomVector_Vector_Default::Magnitude_optional& SimGeomVector_Vector_Default::
      Magnitude ()
      {
        return this->Magnitude_;
      }

      void SimGeomVector_Vector_Default::
      Magnitude (const Magnitude_type& x)
      {
        this->Magnitude_.set (x);
      }

      void SimGeomVector_Vector_Default::
      Magnitude (const Magnitude_optional& x)
      {
        this->Magnitude_ = x;
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
      // SimGeomVector_Vector_Default
      //

      SimGeomVector_Vector_Default::
      SimGeomVector_Vector_Default ()
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (),
        Orientation_Reference_ (this),
        Magnitude_ (this)
      {
      }

      SimGeomVector_Vector_Default::
      SimGeomVector_Vector_Default (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (RefId),
        Orientation_Reference_ (this),
        Magnitude_ (this)
      {
      }

      SimGeomVector_Vector_Default::
      SimGeomVector_Vector_Default (const SimGeomVector_Vector_Default& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (x, f, c),
        Orientation_Reference_ (x.Orientation_Reference_, f, this),
        Magnitude_ (x.Magnitude_, f, this)
      {
      }

      SimGeomVector_Vector_Default::
      SimGeomVector_Vector_Default (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector (e, f | ::xml_schema::flags::base, c),
        Orientation_Reference_ (this),
        Magnitude_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomVector_Vector_Default::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimGeomVector_Vector::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Orientation_Reference
          //
          if (n.name () == "Orientation_Reference" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Orientation_Reference_type > r (
              Orientation_Reference_traits::create (i, f, this));

            if (!this->Orientation_Reference_)
            {
              this->Orientation_Reference_.set (r);
              continue;
            }
          }

          // Magnitude
          //
          if (n.name () == "Magnitude" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->Magnitude_)
            {
              this->Magnitude_.set (Magnitude_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimGeomVector_Vector_Default* SimGeomVector_Vector_Default::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomVector_Vector_Default (*this, f, c);
      }

      SimGeomVector_Vector_Default& SimGeomVector_Vector_Default::
      operator= (const SimGeomVector_Vector_Default& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimGeomVector_Vector& > (*this) = x;
          this->Orientation_Reference_ = x.Orientation_Reference_;
          this->Magnitude_ = x.Magnitude_;
        }

        return *this;
      }

      SimGeomVector_Vector_Default::
      ~SimGeomVector_Vector_Default ()
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

