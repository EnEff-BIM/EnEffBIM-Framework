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

#include "SimMaterial_EquivGlazingMaterial.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimMaterial_EquivGlazingMaterial
      // 

      const SimMaterial_EquivGlazingMaterial::SimMaterial_Name_optional& SimMaterial_EquivGlazingMaterial::
      SimMaterial_Name () const
      {
        return this->SimMaterial_Name_;
      }

      SimMaterial_EquivGlazingMaterial::SimMaterial_Name_optional& SimMaterial_EquivGlazingMaterial::
      SimMaterial_Name ()
      {
        return this->SimMaterial_Name_;
      }

      void SimMaterial_EquivGlazingMaterial::
      SimMaterial_Name (const SimMaterial_Name_type& x)
      {
        this->SimMaterial_Name_.set (x);
      }

      void SimMaterial_EquivGlazingMaterial::
      SimMaterial_Name (const SimMaterial_Name_optional& x)
      {
        this->SimMaterial_Name_ = x;
      }

      void SimMaterial_EquivGlazingMaterial::
      SimMaterial_Name (::std::auto_ptr< SimMaterial_Name_type > x)
      {
        this->SimMaterial_Name_.set (x);
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
      // SimMaterial_EquivGlazingMaterial
      //

      SimMaterial_EquivGlazingMaterial::
      SimMaterial_EquivGlazingMaterial ()
      : ::schema::simxml::ResourcesGeneral::SimMaterial (),
        SimMaterial_Name_ (this)
      {
      }

      SimMaterial_EquivGlazingMaterial::
      SimMaterial_EquivGlazingMaterial (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimMaterial (RefId),
        SimMaterial_Name_ (this)
      {
      }

      SimMaterial_EquivGlazingMaterial::
      SimMaterial_EquivGlazingMaterial (const SimMaterial_EquivGlazingMaterial& x,
                                        ::xml_schema::flags f,
                                        ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimMaterial (x, f, c),
        SimMaterial_Name_ (x.SimMaterial_Name_, f, this)
      {
      }

      SimMaterial_EquivGlazingMaterial::
      SimMaterial_EquivGlazingMaterial (const ::xercesc::DOMElement& e,
                                        ::xml_schema::flags f,
                                        ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimMaterial (e, f | ::xml_schema::flags::base, c),
        SimMaterial_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterial_EquivGlazingMaterial::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimMaterial::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMaterial_Name
          //
          if (n.name () == "SimMaterial_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_Name_type > r (
              SimMaterial_Name_traits::create (i, f, this));

            if (!this->SimMaterial_Name_)
            {
              this->SimMaterial_Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimMaterial_EquivGlazingMaterial* SimMaterial_EquivGlazingMaterial::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterial_EquivGlazingMaterial (*this, f, c);
      }

      SimMaterial_EquivGlazingMaterial& SimMaterial_EquivGlazingMaterial::
      operator= (const SimMaterial_EquivGlazingMaterial& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimMaterial& > (*this) = x;
          this->SimMaterial_Name_ = x.SimMaterial_Name_;
        }

        return *this;
      }

      SimMaterial_EquivGlazingMaterial::
      ~SimMaterial_EquivGlazingMaterial ()
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

