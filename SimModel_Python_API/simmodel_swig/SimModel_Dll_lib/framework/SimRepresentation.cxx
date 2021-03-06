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

#include "SimRepresentation.hxx"

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      // SimRepresentation
      // 

      const SimRepresentation::RepresentationContext_optional& SimRepresentation::
      RepresentationContext () const
      {
        return this->RepresentationContext_;
      }

      SimRepresentation::RepresentationContext_optional& SimRepresentation::
      RepresentationContext ()
      {
        return this->RepresentationContext_;
      }

      void SimRepresentation::
      RepresentationContext (const RepresentationContext_type& x)
      {
        this->RepresentationContext_.set (x);
      }

      void SimRepresentation::
      RepresentationContext (const RepresentationContext_optional& x)
      {
        this->RepresentationContext_ = x;
      }

      void SimRepresentation::
      RepresentationContext (::std::auto_ptr< RepresentationContext_type > x)
      {
        this->RepresentationContext_.set (x);
      }

      const SimRepresentation::RepresentationIdentifier_optional& SimRepresentation::
      RepresentationIdentifier () const
      {
        return this->RepresentationIdentifier_;
      }

      SimRepresentation::RepresentationIdentifier_optional& SimRepresentation::
      RepresentationIdentifier ()
      {
        return this->RepresentationIdentifier_;
      }

      void SimRepresentation::
      RepresentationIdentifier (const RepresentationIdentifier_type& x)
      {
        this->RepresentationIdentifier_.set (x);
      }

      void SimRepresentation::
      RepresentationIdentifier (const RepresentationIdentifier_optional& x)
      {
        this->RepresentationIdentifier_ = x;
      }

      void SimRepresentation::
      RepresentationIdentifier (::std::auto_ptr< RepresentationIdentifier_type > x)
      {
        this->RepresentationIdentifier_.set (x);
      }

      const SimRepresentation::RepresentationType_optional& SimRepresentation::
      RepresentationType () const
      {
        return this->RepresentationType_;
      }

      SimRepresentation::RepresentationType_optional& SimRepresentation::
      RepresentationType ()
      {
        return this->RepresentationType_;
      }

      void SimRepresentation::
      RepresentationType (const RepresentationType_type& x)
      {
        this->RepresentationType_.set (x);
      }

      void SimRepresentation::
      RepresentationType (const RepresentationType_optional& x)
      {
        this->RepresentationType_ = x;
      }

      void SimRepresentation::
      RepresentationType (::std::auto_ptr< RepresentationType_type > x)
      {
        this->RepresentationType_.set (x);
      }

      const SimRepresentation::RepresentationItems_optional& SimRepresentation::
      RepresentationItems () const
      {
        return this->RepresentationItems_;
      }

      SimRepresentation::RepresentationItems_optional& SimRepresentation::
      RepresentationItems ()
      {
        return this->RepresentationItems_;
      }

      void SimRepresentation::
      RepresentationItems (const RepresentationItems_type& x)
      {
        this->RepresentationItems_.set (x);
      }

      void SimRepresentation::
      RepresentationItems (const RepresentationItems_optional& x)
      {
        this->RepresentationItems_ = x;
      }

      void SimRepresentation::
      RepresentationItems (::std::auto_ptr< RepresentationItems_type > x)
      {
        this->RepresentationItems_.set (x);
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
    namespace SimModelCore
    {
      // SimRepresentation
      //

      SimRepresentation::
      SimRepresentation ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        RepresentationContext_ (this),
        RepresentationIdentifier_ (this),
        RepresentationType_ (this),
        RepresentationItems_ (this)
      {
      }

      SimRepresentation::
      SimRepresentation (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        RepresentationContext_ (this),
        RepresentationIdentifier_ (this),
        RepresentationType_ (this),
        RepresentationItems_ (this)
      {
      }

      SimRepresentation::
      SimRepresentation (const SimRepresentation& x,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        RepresentationContext_ (x.RepresentationContext_, f, this),
        RepresentationIdentifier_ (x.RepresentationIdentifier_, f, this),
        RepresentationType_ (x.RepresentationType_, f, this),
        RepresentationItems_ (x.RepresentationItems_, f, this)
      {
      }

      SimRepresentation::
      SimRepresentation (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        RepresentationContext_ (this),
        RepresentationIdentifier_ (this),
        RepresentationType_ (this),
        RepresentationItems_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimRepresentation::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // RepresentationContext
          //
          if (n.name () == "RepresentationContext" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< RepresentationContext_type > r (
              RepresentationContext_traits::create (i, f, this));

            if (!this->RepresentationContext_)
            {
              this->RepresentationContext_.set (r);
              continue;
            }
          }

          // RepresentationIdentifier
          //
          if (n.name () == "RepresentationIdentifier" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< RepresentationIdentifier_type > r (
              RepresentationIdentifier_traits::create (i, f, this));

            if (!this->RepresentationIdentifier_)
            {
              this->RepresentationIdentifier_.set (r);
              continue;
            }
          }

          // RepresentationType
          //
          if (n.name () == "RepresentationType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< RepresentationType_type > r (
              RepresentationType_traits::create (i, f, this));

            if (!this->RepresentationType_)
            {
              this->RepresentationType_.set (r);
              continue;
            }
          }

          // RepresentationItems
          //
          if (n.name () == "RepresentationItems" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< RepresentationItems_type > r (
              RepresentationItems_traits::create (i, f, this));

            if (!this->RepresentationItems_)
            {
              this->RepresentationItems_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimRepresentation* SimRepresentation::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimRepresentation (*this, f, c);
      }

      SimRepresentation& SimRepresentation::
      operator= (const SimRepresentation& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->RepresentationContext_ = x.RepresentationContext_;
          this->RepresentationIdentifier_ = x.RepresentationIdentifier_;
          this->RepresentationType_ = x.RepresentationType_;
          this->RepresentationItems_ = x.RepresentationItems_;
        }

        return *this;
      }

      SimRepresentation::
      ~SimRepresentation ()
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
    namespace SimModelCore
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

