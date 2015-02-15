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

#include "SimBuildingElementProxy_Default.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimBuildingElementProxy_Default
      // 

      const SimBuildingElementProxy_Default::CompositionType_optional& SimBuildingElementProxy_Default::
      CompositionType () const
      {
        return this->CompositionType_;
      }

      SimBuildingElementProxy_Default::CompositionType_optional& SimBuildingElementProxy_Default::
      CompositionType ()
      {
        return this->CompositionType_;
      }

      void SimBuildingElementProxy_Default::
      CompositionType (const CompositionType_type& x)
      {
        this->CompositionType_.set (x);
      }

      void SimBuildingElementProxy_Default::
      CompositionType (const CompositionType_optional& x)
      {
        this->CompositionType_ = x;
      }

      void SimBuildingElementProxy_Default::
      CompositionType (::std::auto_ptr< CompositionType_type > x)
      {
        this->CompositionType_.set (x);
      }

      const SimBuildingElementProxy_Default::SiteContextObjectType_optional& SimBuildingElementProxy_Default::
      SiteContextObjectType () const
      {
        return this->SiteContextObjectType_;
      }

      SimBuildingElementProxy_Default::SiteContextObjectType_optional& SimBuildingElementProxy_Default::
      SiteContextObjectType ()
      {
        return this->SiteContextObjectType_;
      }

      void SimBuildingElementProxy_Default::
      SiteContextObjectType (const SiteContextObjectType_type& x)
      {
        this->SiteContextObjectType_.set (x);
      }

      void SimBuildingElementProxy_Default::
      SiteContextObjectType (const SiteContextObjectType_optional& x)
      {
        this->SiteContextObjectType_ = x;
      }

      void SimBuildingElementProxy_Default::
      SiteContextObjectType (::std::auto_ptr< SiteContextObjectType_type > x)
      {
        this->SiteContextObjectType_.set (x);
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
    namespace BuildingModel
    {
      // SimBuildingElementProxy_Default
      //

      SimBuildingElementProxy_Default::
      SimBuildingElementProxy_Default (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimBuildingElementProxy (RefId),
        CompositionType_ (this),
        SiteContextObjectType_ (this)
      {
      }

      SimBuildingElementProxy_Default::
      SimBuildingElementProxy_Default (const SimBuildingElementProxy_Default& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimBuildingElementProxy (x, f, c),
        CompositionType_ (x.CompositionType_, f, this),
        SiteContextObjectType_ (x.SiteContextObjectType_, f, this)
      {
      }

      SimBuildingElementProxy_Default::
      SimBuildingElementProxy_Default (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimBuildingElementProxy (e, f | ::xml_schema::flags::base, c),
        CompositionType_ (this),
        SiteContextObjectType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBuildingElementProxy_Default::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimBuildingElementProxy::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // CompositionType
          //
          if (n.name () == "CompositionType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< CompositionType_type > r (
              CompositionType_traits::create (i, f, this));

            if (!this->CompositionType_)
            {
              this->CompositionType_.set (r);
              continue;
            }
          }

          // SiteContextObjectType
          //
          if (n.name () == "SiteContextObjectType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SiteContextObjectType_type > r (
              SiteContextObjectType_traits::create (i, f, this));

            if (!this->SiteContextObjectType_)
            {
              this->SiteContextObjectType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBuildingElementProxy_Default* SimBuildingElementProxy_Default::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBuildingElementProxy_Default (*this, f, c);
      }

      SimBuildingElementProxy_Default& SimBuildingElementProxy_Default::
      operator= (const SimBuildingElementProxy_Default& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimBuildingElementProxy& > (*this) = x;
          this->CompositionType_ = x.CompositionType_;
          this->SiteContextObjectType_ = x.SiteContextObjectType_;
        }

        return *this;
      }

      SimBuildingElementProxy_Default::
      ~SimBuildingElementProxy_Default ()
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
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

