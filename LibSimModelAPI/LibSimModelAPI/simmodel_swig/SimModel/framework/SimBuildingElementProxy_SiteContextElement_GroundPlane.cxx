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

#include "SimBuildingElementProxy_SiteContextElement_GroundPlane.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimBuildingElementProxy_SiteContextElement_GroundPlane
      // 

      const SimBuildingElementProxy_SiteContextElement_GroundPlane::SiteContextObjectType_optional& SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SiteContextObjectType () const
      {
        return this->SiteContextObjectType_;
      }

      SimBuildingElementProxy_SiteContextElement_GroundPlane::SiteContextObjectType_optional& SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SiteContextObjectType ()
      {
        return this->SiteContextObjectType_;
      }

      void SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SiteContextObjectType (const SiteContextObjectType_type& x)
      {
        this->SiteContextObjectType_.set (x);
      }

      void SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SiteContextObjectType (const SiteContextObjectType_optional& x)
      {
        this->SiteContextObjectType_ = x;
      }

      void SimBuildingElementProxy_SiteContextElement_GroundPlane::
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

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimBuildingElementProxy_SiteContextElement_GroundPlane
      //

      SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SimBuildingElementProxy_SiteContextElement_GroundPlane ()
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (),
        SiteContextObjectType_ (this)
      {
      }

      SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SimBuildingElementProxy_SiteContextElement_GroundPlane (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (RefId),
        SiteContextObjectType_ (this)
      {
      }

      SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SimBuildingElementProxy_SiteContextElement_GroundPlane (const SimBuildingElementProxy_SiteContextElement_GroundPlane& x,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (x, f, c),
        SiteContextObjectType_ (x.SiteContextObjectType_, f, this)
      {
      }

      SimBuildingElementProxy_SiteContextElement_GroundPlane::
      SimBuildingElementProxy_SiteContextElement_GroundPlane (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement (e, f | ::xml_schema::flags::base, c),
        SiteContextObjectType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBuildingElementProxy_SiteContextElement_GroundPlane::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SiteContextObjectType
          //
          if (n.name () == "SiteContextObjectType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
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

      SimBuildingElementProxy_SiteContextElement_GroundPlane* SimBuildingElementProxy_SiteContextElement_GroundPlane::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBuildingElementProxy_SiteContextElement_GroundPlane (*this, f, c);
      }

      SimBuildingElementProxy_SiteContextElement_GroundPlane& SimBuildingElementProxy_SiteContextElement_GroundPlane::
      operator= (const SimBuildingElementProxy_SiteContextElement_GroundPlane& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimBuildingElementProxy_SiteContextElement& > (*this) = x;
          this->SiteContextObjectType_ = x.SiteContextObjectType_;
        }

        return *this;
      }

      SimBuildingElementProxy_SiteContextElement_GroundPlane::
      ~SimBuildingElementProxy_SiteContextElement_GroundPlane ()
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
