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

#include "SimFaceBound.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimFaceBound
      // 

      const SimFaceBound::Bound_optional& SimFaceBound::
      Bound () const
      {
        return this->Bound_;
      }

      SimFaceBound::Bound_optional& SimFaceBound::
      Bound ()
      {
        return this->Bound_;
      }

      void SimFaceBound::
      Bound (const Bound_type& x)
      {
        this->Bound_.set (x);
      }

      void SimFaceBound::
      Bound (const Bound_optional& x)
      {
        this->Bound_ = x;
      }

      void SimFaceBound::
      Bound (::std::auto_ptr< Bound_type > x)
      {
        this->Bound_.set (x);
      }

      const SimFaceBound::Orientation_optional& SimFaceBound::
      Orientation () const
      {
        return this->Orientation_;
      }

      SimFaceBound::Orientation_optional& SimFaceBound::
      Orientation ()
      {
        return this->Orientation_;
      }

      void SimFaceBound::
      Orientation (const Orientation_type& x)
      {
        this->Orientation_.set (x);
      }

      void SimFaceBound::
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

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimFaceBound
      //

      SimFaceBound::
      SimFaceBound ()
      : ::schema::simxml::SimModelCore::SimTopologicalRepresentationItem (),
        Bound_ (this),
        Orientation_ (this)
      {
      }

      SimFaceBound::
      SimFaceBound (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimTopologicalRepresentationItem (RefId),
        Bound_ (this),
        Orientation_ (this)
      {
      }

      SimFaceBound::
      SimFaceBound (const SimFaceBound& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimTopologicalRepresentationItem (x, f, c),
        Bound_ (x.Bound_, f, this),
        Orientation_ (x.Orientation_, f, this)
      {
      }

      SimFaceBound::
      SimFaceBound (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimTopologicalRepresentationItem (e, f | ::xml_schema::flags::base, c),
        Bound_ (this),
        Orientation_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFaceBound::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimTopologicalRepresentationItem::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Bound
          //
          if (n.name () == "Bound" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Bound_type > r (
              Bound_traits::create (i, f, this));

            if (!this->Bound_)
            {
              this->Bound_.set (r);
              continue;
            }
          }

          // Orientation
          //
          if (n.name () == "Orientation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
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

      SimFaceBound* SimFaceBound::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFaceBound (*this, f, c);
      }

      SimFaceBound& SimFaceBound::
      operator= (const SimFaceBound& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimTopologicalRepresentationItem& > (*this) = x;
          this->Bound_ = x.Bound_;
          this->Orientation_ = x.Orientation_;
        }

        return *this;
      }

      SimFaceBound::
      ~SimFaceBound ()
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

