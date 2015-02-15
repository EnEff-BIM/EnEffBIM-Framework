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

#include "Value.hxx"

#include "mixeditem.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // Value
      // 

      const Value::mixedItem_type& Value::
      mixedItem () const
      {
        return this->mixedItem_.get ();
      }

      Value::mixedItem_type& Value::
      mixedItem ()
      {
        return this->mixedItem_.get ();
      }

      void Value::
      mixedItem (const mixedItem_type& x)
      {
        this->mixedItem_.set (x);
      }

      void Value::
      mixedItem (::std::auto_ptr< mixedItem_type > x)
      {
        this->mixedItem_.set (x);
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
    namespace ResourcesGeneral
    {
      // Value
      //

      Value::
      Value (const mixedItem_type& mixedItem)
      : ::xml_schema::type (),
        mixedItem_ (mixedItem, this)
      {
      }

      Value::
      Value (::std::auto_ptr< mixedItem_type > mixedItem)
      : ::xml_schema::type (),
        mixedItem_ (mixedItem, this)
      {
      }

      Value::
      Value (const Value& x,
             ::xml_schema::flags f,
             ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        mixedItem_ (x.mixedItem_, f, this)
      {
      }

      Value::
      Value (const ::xercesc::DOMElement& e,
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

      void Value::
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
          if (n.name () == "mixedItem" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/SimModelCore")
          {
            ::std::auto_ptr< mixedItem_type > r (
              mixedItem_traits::create (i, f, this));

            if (!mixedItem_.present ())
            {
              this->mixedItem_.set (r);
              continue;
            }
          }

          break;
        }

        if (!mixedItem_.present ())
        {
          throw ::xsd::cxx::tree::expected_element< char > (
            "mixedItem",
            "http://www.lbl.gov/namespaces/Sim/SimModelCore");
        }
      }

      Value* Value::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class Value (*this, f, c);
      }

      Value& Value::
      operator= (const Value& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->mixedItem_ = x.mixedItem_;
        }

        return *this;
      }

      Value::
      ~Value ()
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

