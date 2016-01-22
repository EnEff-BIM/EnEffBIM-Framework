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

#include "SimOwnerHistory.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimOwnerHistory
      // 

      const SimOwnerHistory::OwningUser_optional& SimOwnerHistory::
      OwningUser () const
      {
        return this->OwningUser_;
      }

      SimOwnerHistory::OwningUser_optional& SimOwnerHistory::
      OwningUser ()
      {
        return this->OwningUser_;
      }

      void SimOwnerHistory::
      OwningUser (const OwningUser_type& x)
      {
        this->OwningUser_.set (x);
      }

      void SimOwnerHistory::
      OwningUser (const OwningUser_optional& x)
      {
        this->OwningUser_ = x;
      }

      void SimOwnerHistory::
      OwningUser (::std::auto_ptr< OwningUser_type > x)
      {
        this->OwningUser_.set (x);
      }

      const SimOwnerHistory::OwningApplication_optional& SimOwnerHistory::
      OwningApplication () const
      {
        return this->OwningApplication_;
      }

      SimOwnerHistory::OwningApplication_optional& SimOwnerHistory::
      OwningApplication ()
      {
        return this->OwningApplication_;
      }

      void SimOwnerHistory::
      OwningApplication (const OwningApplication_type& x)
      {
        this->OwningApplication_.set (x);
      }

      void SimOwnerHistory::
      OwningApplication (const OwningApplication_optional& x)
      {
        this->OwningApplication_ = x;
      }

      void SimOwnerHistory::
      OwningApplication (::std::auto_ptr< OwningApplication_type > x)
      {
        this->OwningApplication_.set (x);
      }

      const SimOwnerHistory::State_optional& SimOwnerHistory::
      State () const
      {
        return this->State_;
      }

      SimOwnerHistory::State_optional& SimOwnerHistory::
      State ()
      {
        return this->State_;
      }

      void SimOwnerHistory::
      State (const State_type& x)
      {
        this->State_.set (x);
      }

      void SimOwnerHistory::
      State (const State_optional& x)
      {
        this->State_ = x;
      }

      void SimOwnerHistory::
      State (::std::auto_ptr< State_type > x)
      {
        this->State_.set (x);
      }

      const SimOwnerHistory::ChangeAction_optional& SimOwnerHistory::
      ChangeAction () const
      {
        return this->ChangeAction_;
      }

      SimOwnerHistory::ChangeAction_optional& SimOwnerHistory::
      ChangeAction ()
      {
        return this->ChangeAction_;
      }

      void SimOwnerHistory::
      ChangeAction (const ChangeAction_type& x)
      {
        this->ChangeAction_.set (x);
      }

      void SimOwnerHistory::
      ChangeAction (const ChangeAction_optional& x)
      {
        this->ChangeAction_ = x;
      }

      void SimOwnerHistory::
      ChangeAction (::std::auto_ptr< ChangeAction_type > x)
      {
        this->ChangeAction_.set (x);
      }

      const SimOwnerHistory::LastModifiedDate_optional& SimOwnerHistory::
      LastModifiedDate () const
      {
        return this->LastModifiedDate_;
      }

      SimOwnerHistory::LastModifiedDate_optional& SimOwnerHistory::
      LastModifiedDate ()
      {
        return this->LastModifiedDate_;
      }

      void SimOwnerHistory::
      LastModifiedDate (const LastModifiedDate_type& x)
      {
        this->LastModifiedDate_.set (x);
      }

      void SimOwnerHistory::
      LastModifiedDate (const LastModifiedDate_optional& x)
      {
        this->LastModifiedDate_ = x;
      }

      const SimOwnerHistory::LastModifyingUser_optional& SimOwnerHistory::
      LastModifyingUser () const
      {
        return this->LastModifyingUser_;
      }

      SimOwnerHistory::LastModifyingUser_optional& SimOwnerHistory::
      LastModifyingUser ()
      {
        return this->LastModifyingUser_;
      }

      void SimOwnerHistory::
      LastModifyingUser (const LastModifyingUser_type& x)
      {
        this->LastModifyingUser_.set (x);
      }

      void SimOwnerHistory::
      LastModifyingUser (const LastModifyingUser_optional& x)
      {
        this->LastModifyingUser_ = x;
      }

      void SimOwnerHistory::
      LastModifyingUser (::std::auto_ptr< LastModifyingUser_type > x)
      {
        this->LastModifyingUser_.set (x);
      }

      const SimOwnerHistory::LastModifyingApplication_optional& SimOwnerHistory::
      LastModifyingApplication () const
      {
        return this->LastModifyingApplication_;
      }

      SimOwnerHistory::LastModifyingApplication_optional& SimOwnerHistory::
      LastModifyingApplication ()
      {
        return this->LastModifyingApplication_;
      }

      void SimOwnerHistory::
      LastModifyingApplication (const LastModifyingApplication_type& x)
      {
        this->LastModifyingApplication_.set (x);
      }

      void SimOwnerHistory::
      LastModifyingApplication (const LastModifyingApplication_optional& x)
      {
        this->LastModifyingApplication_ = x;
      }

      void SimOwnerHistory::
      LastModifyingApplication (::std::auto_ptr< LastModifyingApplication_type > x)
      {
        this->LastModifyingApplication_.set (x);
      }

      const SimOwnerHistory::CreationDate_optional& SimOwnerHistory::
      CreationDate () const
      {
        return this->CreationDate_;
      }

      SimOwnerHistory::CreationDate_optional& SimOwnerHistory::
      CreationDate ()
      {
        return this->CreationDate_;
      }

      void SimOwnerHistory::
      CreationDate (const CreationDate_type& x)
      {
        this->CreationDate_.set (x);
      }

      void SimOwnerHistory::
      CreationDate (const CreationDate_optional& x)
      {
        this->CreationDate_ = x;
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
      // SimOwnerHistory
      //

      SimOwnerHistory::
      SimOwnerHistory ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        OwningUser_ (this),
        OwningApplication_ (this),
        State_ (this),
        ChangeAction_ (this),
        LastModifiedDate_ (this),
        LastModifyingUser_ (this),
        LastModifyingApplication_ (this),
        CreationDate_ (this)
      {
      }

      SimOwnerHistory::
      SimOwnerHistory (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        OwningUser_ (this),
        OwningApplication_ (this),
        State_ (this),
        ChangeAction_ (this),
        LastModifiedDate_ (this),
        LastModifyingUser_ (this),
        LastModifyingApplication_ (this),
        CreationDate_ (this)
      {
      }

      SimOwnerHistory::
      SimOwnerHistory (const SimOwnerHistory& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        OwningUser_ (x.OwningUser_, f, this),
        OwningApplication_ (x.OwningApplication_, f, this),
        State_ (x.State_, f, this),
        ChangeAction_ (x.ChangeAction_, f, this),
        LastModifiedDate_ (x.LastModifiedDate_, f, this),
        LastModifyingUser_ (x.LastModifyingUser_, f, this),
        LastModifyingApplication_ (x.LastModifyingApplication_, f, this),
        CreationDate_ (x.CreationDate_, f, this)
      {
      }

      SimOwnerHistory::
      SimOwnerHistory (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        OwningUser_ (this),
        OwningApplication_ (this),
        State_ (this),
        ChangeAction_ (this),
        LastModifiedDate_ (this),
        LastModifyingUser_ (this),
        LastModifyingApplication_ (this),
        CreationDate_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimOwnerHistory::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // OwningUser
          //
          if (n.name () == "OwningUser" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< OwningUser_type > r (
              OwningUser_traits::create (i, f, this));

            if (!this->OwningUser_)
            {
              this->OwningUser_.set (r);
              continue;
            }
          }

          // OwningApplication
          //
          if (n.name () == "OwningApplication" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< OwningApplication_type > r (
              OwningApplication_traits::create (i, f, this));

            if (!this->OwningApplication_)
            {
              this->OwningApplication_.set (r);
              continue;
            }
          }

          // State
          //
          if (n.name () == "State" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< State_type > r (
              State_traits::create (i, f, this));

            if (!this->State_)
            {
              this->State_.set (r);
              continue;
            }
          }

          // ChangeAction
          //
          if (n.name () == "ChangeAction" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ChangeAction_type > r (
              ChangeAction_traits::create (i, f, this));

            if (!this->ChangeAction_)
            {
              this->ChangeAction_.set (r);
              continue;
            }
          }

          // LastModifiedDate
          //
          if (n.name () == "LastModifiedDate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->LastModifiedDate_)
            {
              this->LastModifiedDate_.set (LastModifiedDate_traits::create (i, f, this));
              continue;
            }
          }

          // LastModifyingUser
          //
          if (n.name () == "LastModifyingUser" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< LastModifyingUser_type > r (
              LastModifyingUser_traits::create (i, f, this));

            if (!this->LastModifyingUser_)
            {
              this->LastModifyingUser_.set (r);
              continue;
            }
          }

          // LastModifyingApplication
          //
          if (n.name () == "LastModifyingApplication" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< LastModifyingApplication_type > r (
              LastModifyingApplication_traits::create (i, f, this));

            if (!this->LastModifyingApplication_)
            {
              this->LastModifyingApplication_.set (r);
              continue;
            }
          }

          // CreationDate
          //
          if (n.name () == "CreationDate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->CreationDate_)
            {
              this->CreationDate_.set (CreationDate_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimOwnerHistory* SimOwnerHistory::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimOwnerHistory (*this, f, c);
      }

      SimOwnerHistory& SimOwnerHistory::
      operator= (const SimOwnerHistory& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->OwningUser_ = x.OwningUser_;
          this->OwningApplication_ = x.OwningApplication_;
          this->State_ = x.State_;
          this->ChangeAction_ = x.ChangeAction_;
          this->LastModifiedDate_ = x.LastModifiedDate_;
          this->LastModifyingUser_ = x.LastModifyingUser_;
          this->LastModifyingApplication_ = x.LastModifyingApplication_;
          this->CreationDate_ = x.CreationDate_;
        }

        return *this;
      }

      SimOwnerHistory::
      ~SimOwnerHistory ()
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
