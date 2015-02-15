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

#include "SimModelRepresentationContext.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimModelRepresentationContext
      // 

      const SimModelRepresentationContext::ContextIdentifier_optional& SimModelRepresentationContext::
      ContextIdentifier () const
      {
        return this->ContextIdentifier_;
      }

      SimModelRepresentationContext::ContextIdentifier_optional& SimModelRepresentationContext::
      ContextIdentifier ()
      {
        return this->ContextIdentifier_;
      }

      void SimModelRepresentationContext::
      ContextIdentifier (const ContextIdentifier_type& x)
      {
        this->ContextIdentifier_.set (x);
      }

      void SimModelRepresentationContext::
      ContextIdentifier (const ContextIdentifier_optional& x)
      {
        this->ContextIdentifier_ = x;
      }

      void SimModelRepresentationContext::
      ContextIdentifier (::std::auto_ptr< ContextIdentifier_type > x)
      {
        this->ContextIdentifier_.set (x);
      }

      const SimModelRepresentationContext::ContextType_optional& SimModelRepresentationContext::
      ContextType () const
      {
        return this->ContextType_;
      }

      SimModelRepresentationContext::ContextType_optional& SimModelRepresentationContext::
      ContextType ()
      {
        return this->ContextType_;
      }

      void SimModelRepresentationContext::
      ContextType (const ContextType_type& x)
      {
        this->ContextType_.set (x);
      }

      void SimModelRepresentationContext::
      ContextType (const ContextType_optional& x)
      {
        this->ContextType_ = x;
      }

      void SimModelRepresentationContext::
      ContextType (::std::auto_ptr< ContextType_type > x)
      {
        this->ContextType_.set (x);
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
      // SimModelRepresentationContext
      //

      SimModelRepresentationContext::
      SimModelRepresentationContext (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (RefId),
        ContextIdentifier_ (this),
        ContextType_ (this)
      {
      }

      SimModelRepresentationContext::
      SimModelRepresentationContext (const SimModelRepresentationContext& x,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (x, f, c),
        ContextIdentifier_ (x.ContextIdentifier_, f, this),
        ContextType_ (x.ContextType_, f, this)
      {
      }

      SimModelRepresentationContext::
      SimModelRepresentationContext (const ::xercesc::DOMElement& e,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        ContextIdentifier_ (this),
        ContextType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimModelRepresentationContext::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ContextIdentifier
          //
          if (n.name () == "ContextIdentifier" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< ContextIdentifier_type > r (
              ContextIdentifier_traits::create (i, f, this));

            if (!this->ContextIdentifier_)
            {
              this->ContextIdentifier_.set (r);
              continue;
            }
          }

          // ContextType
          //
          if (n.name () == "ContextType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< ContextType_type > r (
              ContextType_traits::create (i, f, this));

            if (!this->ContextType_)
            {
              this->ContextType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimModelRepresentationContext* SimModelRepresentationContext::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimModelRepresentationContext (*this, f, c);
      }

      SimModelRepresentationContext& SimModelRepresentationContext::
      operator= (const SimModelRepresentationContext& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimResourceObject& > (*this) = x;
          this->ContextIdentifier_ = x.ContextIdentifier_;
          this->ContextType_ = x.ContextType_;
        }

        return *this;
      }

      SimModelRepresentationContext::
      ~SimModelRepresentationContext ()
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

