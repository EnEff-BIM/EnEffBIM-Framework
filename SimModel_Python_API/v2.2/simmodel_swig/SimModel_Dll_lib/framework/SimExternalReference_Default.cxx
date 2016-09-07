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

#include "SimExternalReference_Default.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimExternalReference_Default
      // 

      const SimExternalReference_Default::Location_optional& SimExternalReference_Default::
      Location () const
      {
        return this->Location_;
      }

      SimExternalReference_Default::Location_optional& SimExternalReference_Default::
      Location ()
      {
        return this->Location_;
      }

      void SimExternalReference_Default::
      Location (const Location_type& x)
      {
        this->Location_.set (x);
      }

      void SimExternalReference_Default::
      Location (const Location_optional& x)
      {
        this->Location_ = x;
      }

      void SimExternalReference_Default::
      Location (::std::auto_ptr< Location_type > x)
      {
        this->Location_.set (x);
      }

      const SimExternalReference_Default::ItemReference_optional& SimExternalReference_Default::
      ItemReference () const
      {
        return this->ItemReference_;
      }

      SimExternalReference_Default::ItemReference_optional& SimExternalReference_Default::
      ItemReference ()
      {
        return this->ItemReference_;
      }

      void SimExternalReference_Default::
      ItemReference (const ItemReference_type& x)
      {
        this->ItemReference_.set (x);
      }

      void SimExternalReference_Default::
      ItemReference (const ItemReference_optional& x)
      {
        this->ItemReference_ = x;
      }

      void SimExternalReference_Default::
      ItemReference (::std::auto_ptr< ItemReference_type > x)
      {
        this->ItemReference_.set (x);
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
      // SimExternalReference_Default
      //

      SimExternalReference_Default::
      SimExternalReference_Default ()
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (),
        Location_ (this),
        ItemReference_ (this)
      {
      }

      SimExternalReference_Default::
      SimExternalReference_Default (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (RefId),
        Location_ (this),
        ItemReference_ (this)
      {
      }

      SimExternalReference_Default::
      SimExternalReference_Default (const SimExternalReference_Default& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (x, f, c),
        Location_ (x.Location_, f, this),
        ItemReference_ (x.ItemReference_, f, this)
      {
      }

      SimExternalReference_Default::
      SimExternalReference_Default (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimExternalReference (e, f | ::xml_schema::flags::base, c),
        Location_ (this),
        ItemReference_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimExternalReference_Default::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimExternalReference::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Location
          //
          if (n.name () == "Location" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Location_type > r (
              Location_traits::create (i, f, this));

            if (!this->Location_)
            {
              this->Location_.set (r);
              continue;
            }
          }

          // ItemReference
          //
          if (n.name () == "ItemReference" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ItemReference_type > r (
              ItemReference_traits::create (i, f, this));

            if (!this->ItemReference_)
            {
              this->ItemReference_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimExternalReference_Default* SimExternalReference_Default::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimExternalReference_Default (*this, f, c);
      }

      SimExternalReference_Default& SimExternalReference_Default::
      operator= (const SimExternalReference_Default& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimExternalReference& > (*this) = x;
          this->Location_ = x.Location_;
          this->ItemReference_ = x.ItemReference_;
        }

        return *this;
      }

      SimExternalReference_Default::
      ~SimExternalReference_Default ()
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

