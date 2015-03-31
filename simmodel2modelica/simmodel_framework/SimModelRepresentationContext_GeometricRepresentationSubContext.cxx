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

#include "SimModelRepresentationContext_GeometricRepresentationSubContext.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimModelRepresentationContext_GeometricRepresentationSubContext
      // 

      const SimModelRepresentationContext_GeometricRepresentationSubContext::ParentContext_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      ParentContext () const
      {
        return this->ParentContext_;
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::ParentContext_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      ParentContext ()
      {
        return this->ParentContext_;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      ParentContext (const ParentContext_type& x)
      {
        this->ParentContext_.set (x);
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      ParentContext (const ParentContext_optional& x)
      {
        this->ParentContext_ = x;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      ParentContext (::std::auto_ptr< ParentContext_type > x)
      {
        this->ParentContext_.set (x);
      }

      const SimModelRepresentationContext_GeometricRepresentationSubContext::TargetScale_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetScale () const
      {
        return this->TargetScale_;
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::TargetScale_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetScale ()
      {
        return this->TargetScale_;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetScale (const TargetScale_type& x)
      {
        this->TargetScale_.set (x);
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetScale (const TargetScale_optional& x)
      {
        this->TargetScale_ = x;
      }

      const SimModelRepresentationContext_GeometricRepresentationSubContext::TargetView_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetView () const
      {
        return this->TargetView_;
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::TargetView_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetView ()
      {
        return this->TargetView_;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetView (const TargetView_type& x)
      {
        this->TargetView_.set (x);
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetView (const TargetView_optional& x)
      {
        this->TargetView_ = x;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      TargetView (::std::auto_ptr< TargetView_type > x)
      {
        this->TargetView_.set (x);
      }

      const SimModelRepresentationContext_GeometricRepresentationSubContext::UserDefinedTargetView_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      UserDefinedTargetView () const
      {
        return this->UserDefinedTargetView_;
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::UserDefinedTargetView_optional& SimModelRepresentationContext_GeometricRepresentationSubContext::
      UserDefinedTargetView ()
      {
        return this->UserDefinedTargetView_;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      UserDefinedTargetView (const UserDefinedTargetView_type& x)
      {
        this->UserDefinedTargetView_.set (x);
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      UserDefinedTargetView (const UserDefinedTargetView_optional& x)
      {
        this->UserDefinedTargetView_ = x;
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      UserDefinedTargetView (::std::auto_ptr< UserDefinedTargetView_type > x)
      {
        this->UserDefinedTargetView_.set (x);
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
      // SimModelRepresentationContext_GeometricRepresentationSubContext
      //

      SimModelRepresentationContext_GeometricRepresentationSubContext::
      SimModelRepresentationContext_GeometricRepresentationSubContext (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimModelRepresentationContext (RefId),
        ParentContext_ (this),
        TargetScale_ (this),
        TargetView_ (this),
        UserDefinedTargetView_ (this)
      {
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::
      SimModelRepresentationContext_GeometricRepresentationSubContext (const SimModelRepresentationContext_GeometricRepresentationSubContext& x,
                                                                       ::xml_schema::flags f,
                                                                       ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimModelRepresentationContext (x, f, c),
        ParentContext_ (x.ParentContext_, f, this),
        TargetScale_ (x.TargetScale_, f, this),
        TargetView_ (x.TargetView_, f, this),
        UserDefinedTargetView_ (x.UserDefinedTargetView_, f, this)
      {
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::
      SimModelRepresentationContext_GeometricRepresentationSubContext (const ::xercesc::DOMElement& e,
                                                                       ::xml_schema::flags f,
                                                                       ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimModelRepresentationContext (e, f | ::xml_schema::flags::base, c),
        ParentContext_ (this),
        TargetScale_ (this),
        TargetView_ (this),
        UserDefinedTargetView_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimModelRepresentationContext_GeometricRepresentationSubContext::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimModelRepresentationContext::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ParentContext
          //
          if (n.name () == "ParentContext" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< ParentContext_type > r (
              ParentContext_traits::create (i, f, this));

            if (!this->ParentContext_)
            {
              this->ParentContext_.set (r);
              continue;
            }
          }

          // TargetScale
          //
          if (n.name () == "TargetScale" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->TargetScale_)
            {
              this->TargetScale_.set (TargetScale_traits::create (i, f, this));
              continue;
            }
          }

          // TargetView
          //
          if (n.name () == "TargetView" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< TargetView_type > r (
              TargetView_traits::create (i, f, this));

            if (!this->TargetView_)
            {
              this->TargetView_.set (r);
              continue;
            }
          }

          // UserDefinedTargetView
          //
          if (n.name () == "UserDefinedTargetView" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< UserDefinedTargetView_type > r (
              UserDefinedTargetView_traits::create (i, f, this));

            if (!this->UserDefinedTargetView_)
            {
              this->UserDefinedTargetView_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext* SimModelRepresentationContext_GeometricRepresentationSubContext::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimModelRepresentationContext_GeometricRepresentationSubContext (*this, f, c);
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext& SimModelRepresentationContext_GeometricRepresentationSubContext::
      operator= (const SimModelRepresentationContext_GeometricRepresentationSubContext& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimModelRepresentationContext& > (*this) = x;
          this->ParentContext_ = x.ParentContext_;
          this->TargetScale_ = x.TargetScale_;
          this->TargetView_ = x.TargetView_;
          this->UserDefinedTargetView_ = x.UserDefinedTargetView_;
        }

        return *this;
      }

      SimModelRepresentationContext_GeometricRepresentationSubContext::
      ~SimModelRepresentationContext_GeometricRepresentationSubContext ()
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
