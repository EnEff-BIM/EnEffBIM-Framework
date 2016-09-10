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

#include "SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid
      // 

      const SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::Axis_optional& SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Axis () const
      {
        return this->Axis_;
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::Axis_optional& SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Axis ()
      {
        return this->Axis_;
      }

      void SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Axis (const Axis_type& x)
      {
        this->Axis_.set (x);
      }

      void SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Axis (const Axis_optional& x)
      {
        this->Axis_ = x;
      }

      void SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Axis (::std::auto_ptr< Axis_type > x)
      {
        this->Axis_.set (x);
      }

      const SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::Angle_optional& SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Angle () const
      {
        return this->Angle_;
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::Angle_optional& SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Angle ()
      {
        return this->Angle_;
      }

      void SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Angle (const Angle_type& x)
      {
        this->Angle_.set (x);
      }

      void SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      Angle (const Angle_optional& x)
      {
        this->Angle_ = x;
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
    namespace ResourcesGeometry
    {
      // SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid
      //

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid ()
      : ::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid (),
        Axis_ (this),
        Angle_ (this)
      {
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid (RefId),
        Axis_ (this),
        Angle_ (this)
      {
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid (const SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid& x,
                                                          ::xml_schema::flags f,
                                                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid (x, f, c),
        Axis_ (x.Axis_, f, this),
        Angle_ (x.Angle_, f, this)
      {
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid (const ::xercesc::DOMElement& e,
                                                          ::xml_schema::flags f,
                                                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid (e, f | ::xml_schema::flags::base, c),
        Axis_ (this),
        Angle_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Axis
          //
          if (n.name () == "Axis" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Axis_type > r (
              Axis_traits::create (i, f, this));

            if (!this->Axis_)
            {
              this->Axis_.set (r);
              continue;
            }
          }

          // Angle
          //
          if (n.name () == "Angle" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->Angle_)
            {
              this->Angle_.set (Angle_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid* SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid (*this, f, c);
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid& SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      operator= (const SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimGeomSolidModel_SweptAreaSolid& > (*this) = x;
          this->Axis_ = x.Axis_;
          this->Angle_ = x.Angle_;
        }

        return *this;
      }

      SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid::
      ~SimGeomSolidModel_SweptAreaSolid_RevolvedAreaSolid ()
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

