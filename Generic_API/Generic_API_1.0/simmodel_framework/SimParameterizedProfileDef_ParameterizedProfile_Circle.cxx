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

#include "SimParameterizedProfileDef_ParameterizedProfile_Circle.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimParameterizedProfileDef_ParameterizedProfile_Circle
      // 

      const SimParameterizedProfileDef_ParameterizedProfile_Circle::Radius_optional& SimParameterizedProfileDef_ParameterizedProfile_Circle::
      Radius () const
      {
        return this->Radius_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_Circle::Radius_optional& SimParameterizedProfileDef_ParameterizedProfile_Circle::
      Radius ()
      {
        return this->Radius_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Circle::
      Radius (const Radius_type& x)
      {
        this->Radius_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Circle::
      Radius (const Radius_optional& x)
      {
        this->Radius_ = x;
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
    namespace ResourcesGeometry
    {
      // SimParameterizedProfileDef_ParameterizedProfile_Circle
      //

      SimParameterizedProfileDef_ParameterizedProfile_Circle::
      SimParameterizedProfileDef_ParameterizedProfile_Circle (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (RefId),
        Radius_ (this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_Circle::
      SimParameterizedProfileDef_ParameterizedProfile_Circle (const SimParameterizedProfileDef_ParameterizedProfile_Circle& x,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (x, f, c),
        Radius_ (x.Radius_, f, this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_Circle::
      SimParameterizedProfileDef_ParameterizedProfile_Circle (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (e, f | ::xml_schema::flags::base, c),
        Radius_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Circle::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Radius
          //
          if (n.name () == "Radius" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->Radius_)
            {
              this->Radius_.set (Radius_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimParameterizedProfileDef_ParameterizedProfile_Circle* SimParameterizedProfileDef_ParameterizedProfile_Circle::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimParameterizedProfileDef_ParameterizedProfile_Circle (*this, f, c);
      }

      SimParameterizedProfileDef_ParameterizedProfile_Circle& SimParameterizedProfileDef_ParameterizedProfile_Circle::
      operator= (const SimParameterizedProfileDef_ParameterizedProfile_Circle& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile& > (*this) = x;
          this->Radius_ = x.Radius_;
        }

        return *this;
      }

      SimParameterizedProfileDef_ParameterizedProfile_Circle::
      ~SimParameterizedProfileDef_ParameterizedProfile_Circle ()
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
    namespace ResourcesGeometry
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

