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

#include "SimValidationResults.hxx"

#include "fatalerrormsgs.hxx"

#include "severeerrormsgs.hxx"

#include "warningmsgs.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimValidationResults
      // 

      const SimValidationResults::RuleSetType_optional& SimValidationResults::
      RuleSetType () const
      {
        return this->RuleSetType_;
      }

      SimValidationResults::RuleSetType_optional& SimValidationResults::
      RuleSetType ()
      {
        return this->RuleSetType_;
      }

      void SimValidationResults::
      RuleSetType (const RuleSetType_type& x)
      {
        this->RuleSetType_.set (x);
      }

      void SimValidationResults::
      RuleSetType (const RuleSetType_optional& x)
      {
        this->RuleSetType_ = x;
      }

      void SimValidationResults::
      RuleSetType (::std::auto_ptr< RuleSetType_type > x)
      {
        this->RuleSetType_.set (x);
      }

      const SimValidationResults::ValidationDateTime_optional& SimValidationResults::
      ValidationDateTime () const
      {
        return this->ValidationDateTime_;
      }

      SimValidationResults::ValidationDateTime_optional& SimValidationResults::
      ValidationDateTime ()
      {
        return this->ValidationDateTime_;
      }

      void SimValidationResults::
      ValidationDateTime (const ValidationDateTime_type& x)
      {
        this->ValidationDateTime_.set (x);
      }

      void SimValidationResults::
      ValidationDateTime (const ValidationDateTime_optional& x)
      {
        this->ValidationDateTime_ = x;
      }

      const SimValidationResults::TopLevelSystem_optional& SimValidationResults::
      TopLevelSystem () const
      {
        return this->TopLevelSystem_;
      }

      SimValidationResults::TopLevelSystem_optional& SimValidationResults::
      TopLevelSystem ()
      {
        return this->TopLevelSystem_;
      }

      void SimValidationResults::
      TopLevelSystem (const TopLevelSystem_type& x)
      {
        this->TopLevelSystem_.set (x);
      }

      void SimValidationResults::
      TopLevelSystem (const TopLevelSystem_optional& x)
      {
        this->TopLevelSystem_ = x;
      }

      void SimValidationResults::
      TopLevelSystem (::std::auto_ptr< TopLevelSystem_type > x)
      {
        this->TopLevelSystem_.set (x);
      }

      const SimValidationResults::FatalErrorMsgs_optional& SimValidationResults::
      FatalErrorMsgs () const
      {
        return this->FatalErrorMsgs_;
      }

      SimValidationResults::FatalErrorMsgs_optional& SimValidationResults::
      FatalErrorMsgs ()
      {
        return this->FatalErrorMsgs_;
      }

      void SimValidationResults::
      FatalErrorMsgs (const FatalErrorMsgs_type& x)
      {
        this->FatalErrorMsgs_.set (x);
      }

      void SimValidationResults::
      FatalErrorMsgs (const FatalErrorMsgs_optional& x)
      {
        this->FatalErrorMsgs_ = x;
      }

      void SimValidationResults::
      FatalErrorMsgs (::std::auto_ptr< FatalErrorMsgs_type > x)
      {
        this->FatalErrorMsgs_.set (x);
      }

      const SimValidationResults::FatalErrorObjectRefs_optional& SimValidationResults::
      FatalErrorObjectRefs () const
      {
        return this->FatalErrorObjectRefs_;
      }

      SimValidationResults::FatalErrorObjectRefs_optional& SimValidationResults::
      FatalErrorObjectRefs ()
      {
        return this->FatalErrorObjectRefs_;
      }

      void SimValidationResults::
      FatalErrorObjectRefs (const FatalErrorObjectRefs_type& x)
      {
        this->FatalErrorObjectRefs_.set (x);
      }

      void SimValidationResults::
      FatalErrorObjectRefs (const FatalErrorObjectRefs_optional& x)
      {
        this->FatalErrorObjectRefs_ = x;
      }

      void SimValidationResults::
      FatalErrorObjectRefs (::std::auto_ptr< FatalErrorObjectRefs_type > x)
      {
        this->FatalErrorObjectRefs_.set (x);
      }

      const SimValidationResults::SevereErrorMsgs_optional& SimValidationResults::
      SevereErrorMsgs () const
      {
        return this->SevereErrorMsgs_;
      }

      SimValidationResults::SevereErrorMsgs_optional& SimValidationResults::
      SevereErrorMsgs ()
      {
        return this->SevereErrorMsgs_;
      }

      void SimValidationResults::
      SevereErrorMsgs (const SevereErrorMsgs_type& x)
      {
        this->SevereErrorMsgs_.set (x);
      }

      void SimValidationResults::
      SevereErrorMsgs (const SevereErrorMsgs_optional& x)
      {
        this->SevereErrorMsgs_ = x;
      }

      void SimValidationResults::
      SevereErrorMsgs (::std::auto_ptr< SevereErrorMsgs_type > x)
      {
        this->SevereErrorMsgs_.set (x);
      }

      const SimValidationResults::SevereErrorObjectRefs_optional& SimValidationResults::
      SevereErrorObjectRefs () const
      {
        return this->SevereErrorObjectRefs_;
      }

      SimValidationResults::SevereErrorObjectRefs_optional& SimValidationResults::
      SevereErrorObjectRefs ()
      {
        return this->SevereErrorObjectRefs_;
      }

      void SimValidationResults::
      SevereErrorObjectRefs (const SevereErrorObjectRefs_type& x)
      {
        this->SevereErrorObjectRefs_.set (x);
      }

      void SimValidationResults::
      SevereErrorObjectRefs (const SevereErrorObjectRefs_optional& x)
      {
        this->SevereErrorObjectRefs_ = x;
      }

      void SimValidationResults::
      SevereErrorObjectRefs (::std::auto_ptr< SevereErrorObjectRefs_type > x)
      {
        this->SevereErrorObjectRefs_.set (x);
      }

      const SimValidationResults::WarningMsgs_optional& SimValidationResults::
      WarningMsgs () const
      {
        return this->WarningMsgs_;
      }

      SimValidationResults::WarningMsgs_optional& SimValidationResults::
      WarningMsgs ()
      {
        return this->WarningMsgs_;
      }

      void SimValidationResults::
      WarningMsgs (const WarningMsgs_type& x)
      {
        this->WarningMsgs_.set (x);
      }

      void SimValidationResults::
      WarningMsgs (const WarningMsgs_optional& x)
      {
        this->WarningMsgs_ = x;
      }

      void SimValidationResults::
      WarningMsgs (::std::auto_ptr< WarningMsgs_type > x)
      {
        this->WarningMsgs_.set (x);
      }

      const SimValidationResults::WarningErrorObjectRefs_optional& SimValidationResults::
      WarningErrorObjectRefs () const
      {
        return this->WarningErrorObjectRefs_;
      }

      SimValidationResults::WarningErrorObjectRefs_optional& SimValidationResults::
      WarningErrorObjectRefs ()
      {
        return this->WarningErrorObjectRefs_;
      }

      void SimValidationResults::
      WarningErrorObjectRefs (const WarningErrorObjectRefs_type& x)
      {
        this->WarningErrorObjectRefs_.set (x);
      }

      void SimValidationResults::
      WarningErrorObjectRefs (const WarningErrorObjectRefs_optional& x)
      {
        this->WarningErrorObjectRefs_ = x;
      }

      void SimValidationResults::
      WarningErrorObjectRefs (::std::auto_ptr< WarningErrorObjectRefs_type > x)
      {
        this->WarningErrorObjectRefs_.set (x);
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
      // SimValidationResults
      //

      SimValidationResults::
      SimValidationResults ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        RuleSetType_ (this),
        ValidationDateTime_ (this),
        TopLevelSystem_ (this),
        FatalErrorMsgs_ (this),
        FatalErrorObjectRefs_ (this),
        SevereErrorMsgs_ (this),
        SevereErrorObjectRefs_ (this),
        WarningMsgs_ (this),
        WarningErrorObjectRefs_ (this)
      {
      }

      SimValidationResults::
      SimValidationResults (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        RuleSetType_ (this),
        ValidationDateTime_ (this),
        TopLevelSystem_ (this),
        FatalErrorMsgs_ (this),
        FatalErrorObjectRefs_ (this),
        SevereErrorMsgs_ (this),
        SevereErrorObjectRefs_ (this),
        WarningMsgs_ (this),
        WarningErrorObjectRefs_ (this)
      {
      }

      SimValidationResults::
      SimValidationResults (const SimValidationResults& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        RuleSetType_ (x.RuleSetType_, f, this),
        ValidationDateTime_ (x.ValidationDateTime_, f, this),
        TopLevelSystem_ (x.TopLevelSystem_, f, this),
        FatalErrorMsgs_ (x.FatalErrorMsgs_, f, this),
        FatalErrorObjectRefs_ (x.FatalErrorObjectRefs_, f, this),
        SevereErrorMsgs_ (x.SevereErrorMsgs_, f, this),
        SevereErrorObjectRefs_ (x.SevereErrorObjectRefs_, f, this),
        WarningMsgs_ (x.WarningMsgs_, f, this),
        WarningErrorObjectRefs_ (x.WarningErrorObjectRefs_, f, this)
      {
      }

      SimValidationResults::
      SimValidationResults (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        RuleSetType_ (this),
        ValidationDateTime_ (this),
        TopLevelSystem_ (this),
        FatalErrorMsgs_ (this),
        FatalErrorObjectRefs_ (this),
        SevereErrorMsgs_ (this),
        SevereErrorObjectRefs_ (this),
        WarningMsgs_ (this),
        WarningErrorObjectRefs_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimValidationResults::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // RuleSetType
          //
          if (n.name () == "RuleSetType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< RuleSetType_type > r (
              RuleSetType_traits::create (i, f, this));

            if (!this->RuleSetType_)
            {
              this->RuleSetType_.set (r);
              continue;
            }
          }

          // ValidationDateTime
          //
          if (n.name () == "ValidationDateTime" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->ValidationDateTime_)
            {
              this->ValidationDateTime_.set (ValidationDateTime_traits::create (i, f, this));
              continue;
            }
          }

          // TopLevelSystem
          //
          if (n.name () == "TopLevelSystem" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< TopLevelSystem_type > r (
              TopLevelSystem_traits::create (i, f, this));

            if (!this->TopLevelSystem_)
            {
              this->TopLevelSystem_.set (r);
              continue;
            }
          }

          // FatalErrorMsgs
          //
          if (n.name () == "FatalErrorMsgs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< FatalErrorMsgs_type > r (
              FatalErrorMsgs_traits::create (i, f, this));

            if (!this->FatalErrorMsgs_)
            {
              this->FatalErrorMsgs_.set (r);
              continue;
            }
          }

          // FatalErrorObjectRefs
          //
          if (n.name () == "FatalErrorObjectRefs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< FatalErrorObjectRefs_type > r (
              FatalErrorObjectRefs_traits::create (i, f, this));

            if (!this->FatalErrorObjectRefs_)
            {
              this->FatalErrorObjectRefs_.set (r);
              continue;
            }
          }

          // SevereErrorMsgs
          //
          if (n.name () == "SevereErrorMsgs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SevereErrorMsgs_type > r (
              SevereErrorMsgs_traits::create (i, f, this));

            if (!this->SevereErrorMsgs_)
            {
              this->SevereErrorMsgs_.set (r);
              continue;
            }
          }

          // SevereErrorObjectRefs
          //
          if (n.name () == "SevereErrorObjectRefs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SevereErrorObjectRefs_type > r (
              SevereErrorObjectRefs_traits::create (i, f, this));

            if (!this->SevereErrorObjectRefs_)
            {
              this->SevereErrorObjectRefs_.set (r);
              continue;
            }
          }

          // WarningMsgs
          //
          if (n.name () == "WarningMsgs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WarningMsgs_type > r (
              WarningMsgs_traits::create (i, f, this));

            if (!this->WarningMsgs_)
            {
              this->WarningMsgs_.set (r);
              continue;
            }
          }

          // WarningErrorObjectRefs
          //
          if (n.name () == "WarningErrorObjectRefs" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WarningErrorObjectRefs_type > r (
              WarningErrorObjectRefs_traits::create (i, f, this));

            if (!this->WarningErrorObjectRefs_)
            {
              this->WarningErrorObjectRefs_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimValidationResults* SimValidationResults::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimValidationResults (*this, f, c);
      }

      SimValidationResults& SimValidationResults::
      operator= (const SimValidationResults& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->RuleSetType_ = x.RuleSetType_;
          this->ValidationDateTime_ = x.ValidationDateTime_;
          this->TopLevelSystem_ = x.TopLevelSystem_;
          this->FatalErrorMsgs_ = x.FatalErrorMsgs_;
          this->FatalErrorObjectRefs_ = x.FatalErrorObjectRefs_;
          this->SevereErrorMsgs_ = x.SevereErrorMsgs_;
          this->SevereErrorObjectRefs_ = x.SevereErrorObjectRefs_;
          this->WarningMsgs_ = x.WarningMsgs_;
          this->WarningErrorObjectRefs_ = x.WarningErrorObjectRefs_;
        }

        return *this;
      }

      SimValidationResults::
      ~SimValidationResults ()
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

