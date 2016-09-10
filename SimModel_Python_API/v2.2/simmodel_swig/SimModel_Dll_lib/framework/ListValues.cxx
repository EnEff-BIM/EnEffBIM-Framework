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

#include "ListValues.hxx"

#include "mixeditem.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // ListValues
      // 

      const ListValues::mixedItem_sequence& ListValues::
      mixedItem () const
      {
        return this->mixedItem_;
      }

      ListValues::mixedItem_sequence& ListValues::
      mixedItem ()
      {
        return this->mixedItem_;
      }

      void ListValues::
      mixedItem (const mixedItem_sequence& s)
      {
        this->mixedItem_ = s;
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
    namespace ResourcesGeneral
    {
      // ListValues
      //

      ListValues::
      ListValues ()
      : ::xml_schema::type (),
        mixedItem_ (this)
      {
      }

      ListValues::
      ListValues (const ListValues& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        mixedItem_ (x.mixedItem_, f, this)
      {
      }

      ListValues::
      ListValues (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        mixedItem_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
          this->parse (p, f);
        }
      }

      void ListValues::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // mixedItem
          //
          if (n.name () == "mixedItem" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< mixedItem_type > r (
              mixedItem_traits::create (i, f, this));

            this->mixedItem_.push_back (r);
            continue;
          }

          break;
        }
      }

      ListValues* ListValues::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class ListValues (*this, f, c);
      }

      ListValues& ListValues::
      operator= (const ListValues& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->mixedItem_ = x.mixedItem_;
        }

        return *this;
      }

      ListValues::
      ~ListValues ()
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
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

