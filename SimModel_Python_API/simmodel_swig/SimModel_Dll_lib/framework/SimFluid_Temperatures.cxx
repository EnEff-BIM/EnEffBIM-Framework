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

#include "SimFluid_Temperatures.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimFluid_Temperatures
      // 

      const SimFluid_Temperatures::SimFluid_Name_optional& SimFluid_Temperatures::
      SimFluid_Name () const
      {
        return this->SimFluid_Name_;
      }

      SimFluid_Temperatures::SimFluid_Name_optional& SimFluid_Temperatures::
      SimFluid_Name ()
      {
        return this->SimFluid_Name_;
      }

      void SimFluid_Temperatures::
      SimFluid_Name (const SimFluid_Name_type& x)
      {
        this->SimFluid_Name_.set (x);
      }

      void SimFluid_Temperatures::
      SimFluid_Name (const SimFluid_Name_optional& x)
      {
        this->SimFluid_Name_ = x;
      }

      void SimFluid_Temperatures::
      SimFluid_Name (::std::auto_ptr< SimFluid_Name_type > x)
      {
        this->SimFluid_Name_.set (x);
      }

      const SimFluid_Temperatures::SimFluid_Temp_1_250_optional& SimFluid_Temperatures::
      SimFluid_Temp_1_250 () const
      {
        return this->SimFluid_Temp_1_250_;
      }

      SimFluid_Temperatures::SimFluid_Temp_1_250_optional& SimFluid_Temperatures::
      SimFluid_Temp_1_250 ()
      {
        return this->SimFluid_Temp_1_250_;
      }

      void SimFluid_Temperatures::
      SimFluid_Temp_1_250 (const SimFluid_Temp_1_250_type& x)
      {
        this->SimFluid_Temp_1_250_.set (x);
      }

      void SimFluid_Temperatures::
      SimFluid_Temp_1_250 (const SimFluid_Temp_1_250_optional& x)
      {
        this->SimFluid_Temp_1_250_ = x;
      }

      void SimFluid_Temperatures::
      SimFluid_Temp_1_250 (::std::auto_ptr< SimFluid_Temp_1_250_type > x)
      {
        this->SimFluid_Temp_1_250_.set (x);
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
      // SimFluid_Temperatures
      //

      SimFluid_Temperatures::
      SimFluid_Temperatures ()
      : ::schema::simxml::ResourcesGeneral::SimFluid (),
        SimFluid_Name_ (this),
        SimFluid_Temp_1_250_ (this)
      {
      }

      SimFluid_Temperatures::
      SimFluid_Temperatures (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimFluid (RefId),
        SimFluid_Name_ (this),
        SimFluid_Temp_1_250_ (this)
      {
      }

      SimFluid_Temperatures::
      SimFluid_Temperatures (const SimFluid_Temperatures& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimFluid (x, f, c),
        SimFluid_Name_ (x.SimFluid_Name_, f, this),
        SimFluid_Temp_1_250_ (x.SimFluid_Temp_1_250_, f, this)
      {
      }

      SimFluid_Temperatures::
      SimFluid_Temperatures (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimFluid (e, f | ::xml_schema::flags::base, c),
        SimFluid_Name_ (this),
        SimFluid_Temp_1_250_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFluid_Temperatures::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimFluid::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFluid_Name
          //
          if (n.name () == "SimFluid_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_Name_type > r (
              SimFluid_Name_traits::create (i, f, this));

            if (!this->SimFluid_Name_)
            {
              this->SimFluid_Name_.set (r);
              continue;
            }
          }

          // SimFluid_Temp_1_250
          //
          if (n.name () == "SimFluid_Temp_1_250" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_Temp_1_250_type > r (
              SimFluid_Temp_1_250_traits::create (i, f, this));

            if (!this->SimFluid_Temp_1_250_)
            {
              this->SimFluid_Temp_1_250_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFluid_Temperatures* SimFluid_Temperatures::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFluid_Temperatures (*this, f, c);
      }

      SimFluid_Temperatures& SimFluid_Temperatures::
      operator= (const SimFluid_Temperatures& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimFluid& > (*this) = x;
          this->SimFluid_Name_ = x.SimFluid_Name_;
          this->SimFluid_Temp_1_250_ = x.SimFluid_Temp_1_250_;
        }

        return *this;
      }

      SimFluid_Temperatures::
      ~SimFluid_Temperatures ()
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

