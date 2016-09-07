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

#include "SimPerson.hxx"

#include "middlenames.hxx"

#include "prefixtitles.hxx"

#include "suffixtitles.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimPerson
      // 

      const SimPerson::Id_optional& SimPerson::
      Id () const
      {
        return this->Id_;
      }

      SimPerson::Id_optional& SimPerson::
      Id ()
      {
        return this->Id_;
      }

      void SimPerson::
      Id (const Id_type& x)
      {
        this->Id_.set (x);
      }

      void SimPerson::
      Id (const Id_optional& x)
      {
        this->Id_ = x;
      }

      void SimPerson::
      Id (::std::auto_ptr< Id_type > x)
      {
        this->Id_.set (x);
      }

      const SimPerson::FamilyName_optional& SimPerson::
      FamilyName () const
      {
        return this->FamilyName_;
      }

      SimPerson::FamilyName_optional& SimPerson::
      FamilyName ()
      {
        return this->FamilyName_;
      }

      void SimPerson::
      FamilyName (const FamilyName_type& x)
      {
        this->FamilyName_.set (x);
      }

      void SimPerson::
      FamilyName (const FamilyName_optional& x)
      {
        this->FamilyName_ = x;
      }

      void SimPerson::
      FamilyName (::std::auto_ptr< FamilyName_type > x)
      {
        this->FamilyName_.set (x);
      }

      const SimPerson::GivenName_optional& SimPerson::
      GivenName () const
      {
        return this->GivenName_;
      }

      SimPerson::GivenName_optional& SimPerson::
      GivenName ()
      {
        return this->GivenName_;
      }

      void SimPerson::
      GivenName (const GivenName_type& x)
      {
        this->GivenName_.set (x);
      }

      void SimPerson::
      GivenName (const GivenName_optional& x)
      {
        this->GivenName_ = x;
      }

      void SimPerson::
      GivenName (::std::auto_ptr< GivenName_type > x)
      {
        this->GivenName_.set (x);
      }

      const SimPerson::MiddleNames_optional& SimPerson::
      MiddleNames () const
      {
        return this->MiddleNames_;
      }

      SimPerson::MiddleNames_optional& SimPerson::
      MiddleNames ()
      {
        return this->MiddleNames_;
      }

      void SimPerson::
      MiddleNames (const MiddleNames_type& x)
      {
        this->MiddleNames_.set (x);
      }

      void SimPerson::
      MiddleNames (const MiddleNames_optional& x)
      {
        this->MiddleNames_ = x;
      }

      void SimPerson::
      MiddleNames (::std::auto_ptr< MiddleNames_type > x)
      {
        this->MiddleNames_.set (x);
      }

      const SimPerson::PrefixTitles_optional& SimPerson::
      PrefixTitles () const
      {
        return this->PrefixTitles_;
      }

      SimPerson::PrefixTitles_optional& SimPerson::
      PrefixTitles ()
      {
        return this->PrefixTitles_;
      }

      void SimPerson::
      PrefixTitles (const PrefixTitles_type& x)
      {
        this->PrefixTitles_.set (x);
      }

      void SimPerson::
      PrefixTitles (const PrefixTitles_optional& x)
      {
        this->PrefixTitles_ = x;
      }

      void SimPerson::
      PrefixTitles (::std::auto_ptr< PrefixTitles_type > x)
      {
        this->PrefixTitles_.set (x);
      }

      const SimPerson::SuffixTitles_optional& SimPerson::
      SuffixTitles () const
      {
        return this->SuffixTitles_;
      }

      SimPerson::SuffixTitles_optional& SimPerson::
      SuffixTitles ()
      {
        return this->SuffixTitles_;
      }

      void SimPerson::
      SuffixTitles (const SuffixTitles_type& x)
      {
        this->SuffixTitles_.set (x);
      }

      void SimPerson::
      SuffixTitles (const SuffixTitles_optional& x)
      {
        this->SuffixTitles_ = x;
      }

      void SimPerson::
      SuffixTitles (::std::auto_ptr< SuffixTitles_type > x)
      {
        this->SuffixTitles_.set (x);
      }

      const SimPerson::Roles_optional& SimPerson::
      Roles () const
      {
        return this->Roles_;
      }

      SimPerson::Roles_optional& SimPerson::
      Roles ()
      {
        return this->Roles_;
      }

      void SimPerson::
      Roles (const Roles_type& x)
      {
        this->Roles_.set (x);
      }

      void SimPerson::
      Roles (const Roles_optional& x)
      {
        this->Roles_ = x;
      }

      void SimPerson::
      Roles (::std::auto_ptr< Roles_type > x)
      {
        this->Roles_.set (x);
      }

      const SimPerson::Addresses_optional& SimPerson::
      Addresses () const
      {
        return this->Addresses_;
      }

      SimPerson::Addresses_optional& SimPerson::
      Addresses ()
      {
        return this->Addresses_;
      }

      void SimPerson::
      Addresses (const Addresses_type& x)
      {
        this->Addresses_.set (x);
      }

      void SimPerson::
      Addresses (const Addresses_optional& x)
      {
        this->Addresses_ = x;
      }

      void SimPerson::
      Addresses (::std::auto_ptr< Addresses_type > x)
      {
        this->Addresses_.set (x);
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
      // SimPerson
      //

      SimPerson::
      SimPerson ()
      : ::schema::simxml::SimModelCore::SimActorDefinition (),
        Id_ (this),
        FamilyName_ (this),
        GivenName_ (this),
        MiddleNames_ (this),
        PrefixTitles_ (this),
        SuffixTitles_ (this),
        Roles_ (this),
        Addresses_ (this)
      {
      }

      SimPerson::
      SimPerson (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimActorDefinition (RefId),
        Id_ (this),
        FamilyName_ (this),
        GivenName_ (this),
        MiddleNames_ (this),
        PrefixTitles_ (this),
        SuffixTitles_ (this),
        Roles_ (this),
        Addresses_ (this)
      {
      }

      SimPerson::
      SimPerson (const SimPerson& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimActorDefinition (x, f, c),
        Id_ (x.Id_, f, this),
        FamilyName_ (x.FamilyName_, f, this),
        GivenName_ (x.GivenName_, f, this),
        MiddleNames_ (x.MiddleNames_, f, this),
        PrefixTitles_ (x.PrefixTitles_, f, this),
        SuffixTitles_ (x.SuffixTitles_, f, this),
        Roles_ (x.Roles_, f, this),
        Addresses_ (x.Addresses_, f, this)
      {
      }

      SimPerson::
      SimPerson (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimActorDefinition (e, f | ::xml_schema::flags::base, c),
        Id_ (this),
        FamilyName_ (this),
        GivenName_ (this),
        MiddleNames_ (this),
        PrefixTitles_ (this),
        SuffixTitles_ (this),
        Roles_ (this),
        Addresses_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimPerson::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimActorDefinition::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Id
          //
          if (n.name () == "Id" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Id_type > r (
              Id_traits::create (i, f, this));

            if (!this->Id_)
            {
              this->Id_.set (r);
              continue;
            }
          }

          // FamilyName
          //
          if (n.name () == "FamilyName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< FamilyName_type > r (
              FamilyName_traits::create (i, f, this));

            if (!this->FamilyName_)
            {
              this->FamilyName_.set (r);
              continue;
            }
          }

          // GivenName
          //
          if (n.name () == "GivenName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< GivenName_type > r (
              GivenName_traits::create (i, f, this));

            if (!this->GivenName_)
            {
              this->GivenName_.set (r);
              continue;
            }
          }

          // MiddleNames
          //
          if (n.name () == "MiddleNames" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< MiddleNames_type > r (
              MiddleNames_traits::create (i, f, this));

            if (!this->MiddleNames_)
            {
              this->MiddleNames_.set (r);
              continue;
            }
          }

          // PrefixTitles
          //
          if (n.name () == "PrefixTitles" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< PrefixTitles_type > r (
              PrefixTitles_traits::create (i, f, this));

            if (!this->PrefixTitles_)
            {
              this->PrefixTitles_.set (r);
              continue;
            }
          }

          // SuffixTitles
          //
          if (n.name () == "SuffixTitles" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SuffixTitles_type > r (
              SuffixTitles_traits::create (i, f, this));

            if (!this->SuffixTitles_)
            {
              this->SuffixTitles_.set (r);
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

          // Addresses
          //
          if (n.name () == "Addresses" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Addresses_type > r (
              Addresses_traits::create (i, f, this));

            if (!this->Addresses_)
            {
              this->Addresses_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimPerson* SimPerson::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimPerson (*this, f, c);
      }

      SimPerson& SimPerson::
      operator= (const SimPerson& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimActorDefinition& > (*this) = x;
          this->Id_ = x.Id_;
          this->FamilyName_ = x.FamilyName_;
          this->GivenName_ = x.GivenName_;
          this->MiddleNames_ = x.MiddleNames_;
          this->PrefixTitles_ = x.PrefixTitles_;
          this->SuffixTitles_ = x.SuffixTitles_;
          this->Roles_ = x.Roles_;
          this->Addresses_ = x.Addresses_;
        }

        return *this;
      }

      SimPerson::
      ~SimPerson ()
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

