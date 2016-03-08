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

#include "SimPersonAndOrganization.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimPersonAndOrganization
      // 

      const SimPersonAndOrganization::ThePerson_optional& SimPersonAndOrganization::
      ThePerson () const
      {
        return this->ThePerson_;
      }

      SimPersonAndOrganization::ThePerson_optional& SimPersonAndOrganization::
      ThePerson ()
      {
        return this->ThePerson_;
      }

      void SimPersonAndOrganization::
      ThePerson (const ThePerson_type& x)
      {
        this->ThePerson_.set (x);
      }

      void SimPersonAndOrganization::
      ThePerson (const ThePerson_optional& x)
      {
        this->ThePerson_ = x;
      }

      void SimPersonAndOrganization::
      ThePerson (::std::auto_ptr< ThePerson_type > x)
      {
        this->ThePerson_.set (x);
      }

      const SimPersonAndOrganization::TheOrganization_optional& SimPersonAndOrganization::
      TheOrganization () const
      {
        return this->TheOrganization_;
      }

      SimPersonAndOrganization::TheOrganization_optional& SimPersonAndOrganization::
      TheOrganization ()
      {
        return this->TheOrganization_;
      }

      void SimPersonAndOrganization::
      TheOrganization (const TheOrganization_type& x)
      {
        this->TheOrganization_.set (x);
      }

      void SimPersonAndOrganization::
      TheOrganization (const TheOrganization_optional& x)
      {
        this->TheOrganization_ = x;
      }

      void SimPersonAndOrganization::
      TheOrganization (::std::auto_ptr< TheOrganization_type > x)
      {
        this->TheOrganization_.set (x);
      }

      const SimPersonAndOrganization::Roles_optional& SimPersonAndOrganization::
      Roles () const
      {
        return this->Roles_;
      }

      SimPersonAndOrganization::Roles_optional& SimPersonAndOrganization::
      Roles ()
      {
        return this->Roles_;
      }

      void SimPersonAndOrganization::
      Roles (const Roles_type& x)
      {
        this->Roles_.set (x);
      }

      void SimPersonAndOrganization::
      Roles (const Roles_optional& x)
      {
        this->Roles_ = x;
      }

      void SimPersonAndOrganization::
      Roles (::std::auto_ptr< Roles_type > x)
      {
        this->Roles_.set (x);
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
      // SimPersonAndOrganization
      //

      SimPersonAndOrganization::
      SimPersonAndOrganization ()
      : ::schema::simxml::SimModelCore::SimActorDefinition (),
        ThePerson_ (this),
        TheOrganization_ (this),
        Roles_ (this)
      {
      }

      SimPersonAndOrganization::
      SimPersonAndOrganization (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimActorDefinition (RefId),
        ThePerson_ (this),
        TheOrganization_ (this),
        Roles_ (this)
      {
      }

      SimPersonAndOrganization::
      SimPersonAndOrganization (const SimPersonAndOrganization& x,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimActorDefinition (x, f, c),
        ThePerson_ (x.ThePerson_, f, this),
        TheOrganization_ (x.TheOrganization_, f, this),
        Roles_ (x.Roles_, f, this)
      {
      }

      SimPersonAndOrganization::
      SimPersonAndOrganization (const ::xercesc::DOMElement& e,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimActorDefinition (e, f | ::xml_schema::flags::base, c),
        ThePerson_ (this),
        TheOrganization_ (this),
        Roles_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimPersonAndOrganization::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimActorDefinition::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ThePerson
          //
          if (n.name () == "ThePerson" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ThePerson_type > r (
              ThePerson_traits::create (i, f, this));

            if (!this->ThePerson_)
            {
              this->ThePerson_.set (r);
              continue;
            }
          }

          // TheOrganization
          //
          if (n.name () == "TheOrganization" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< TheOrganization_type > r (
              TheOrganization_traits::create (i, f, this));

            if (!this->TheOrganization_)
            {
              this->TheOrganization_.set (r);
              continue;
            }
          }

          // Roles
          //
          if (n.name () == "Roles" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Roles_type > r (
              Roles_traits::create (i, f, this));

            if (!this->Roles_)
            {
              this->Roles_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimPersonAndOrganization* SimPersonAndOrganization::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimPersonAndOrganization (*this, f, c);
      }

      SimPersonAndOrganization& SimPersonAndOrganization::
      operator= (const SimPersonAndOrganization& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimActorDefinition& > (*this) = x;
          this->ThePerson_ = x.ThePerson_;
          this->TheOrganization_ = x.TheOrganization_;
          this->Roles_ = x.Roles_;
        }

        return *this;
      }

      SimPersonAndOrganization::
      ~SimPersonAndOrganization ()
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

