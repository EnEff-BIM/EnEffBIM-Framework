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

#include "SimSIUnitType.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimSIUnitType
      // 

      const SimSIUnitType::Prefix_optional& SimSIUnitType::
      Prefix () const
      {
        return this->Prefix_;
      }

      SimSIUnitType::Prefix_optional& SimSIUnitType::
      Prefix ()
      {
        return this->Prefix_;
      }

      void SimSIUnitType::
      Prefix (const Prefix_type& x)
      {
        this->Prefix_.set (x);
      }

      void SimSIUnitType::
      Prefix (const Prefix_optional& x)
      {
        this->Prefix_ = x;
      }

      void SimSIUnitType::
      Prefix (::std::auto_ptr< Prefix_type > x)
      {
        this->Prefix_.set (x);
      }

      const SimSIUnitType::UnitSymbol_optional& SimSIUnitType::
      UnitSymbol () const
      {
        return this->UnitSymbol_;
      }

      SimSIUnitType::UnitSymbol_optional& SimSIUnitType::
      UnitSymbol ()
      {
        return this->UnitSymbol_;
      }

      void SimSIUnitType::
      UnitSymbol (const UnitSymbol_type& x)
      {
        this->UnitSymbol_.set (x);
      }

      void SimSIUnitType::
      UnitSymbol (const UnitSymbol_optional& x)
      {
        this->UnitSymbol_ = x;
      }

      void SimSIUnitType::
      UnitSymbol (::std::auto_ptr< UnitSymbol_type > x)
      {
        this->UnitSymbol_.set (x);
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
      // SimSIUnitType
      //

      SimSIUnitType::
      SimSIUnitType ()
      : ::schema::simxml::ResourcesGeneral::SimUnitType (),
        Prefix_ (this),
        UnitSymbol_ (this)
      {
      }

      SimSIUnitType::
      SimSIUnitType (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimUnitType (RefId),
        Prefix_ (this),
        UnitSymbol_ (this)
      {
      }

      SimSIUnitType::
      SimSIUnitType (const SimSIUnitType& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimUnitType (x, f, c),
        Prefix_ (x.Prefix_, f, this),
        UnitSymbol_ (x.UnitSymbol_, f, this)
      {
      }

      SimSIUnitType::
      SimSIUnitType (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimUnitType (e, f | ::xml_schema::flags::base, c),
        Prefix_ (this),
        UnitSymbol_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSIUnitType::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimUnitType::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Prefix
          //
          if (n.name () == "Prefix" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Prefix_type > r (
              Prefix_traits::create (i, f, this));

            if (!this->Prefix_)
            {
              this->Prefix_.set (r);
              continue;
            }
          }

          // UnitSymbol
          //
          if (n.name () == "UnitSymbol" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< UnitSymbol_type > r (
              UnitSymbol_traits::create (i, f, this));

            if (!this->UnitSymbol_)
            {
              this->UnitSymbol_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSIUnitType* SimSIUnitType::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSIUnitType (*this, f, c);
      }

      SimSIUnitType& SimSIUnitType::
      operator= (const SimSIUnitType& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimUnitType& > (*this) = x;
          this->Prefix_ = x.Prefix_;
          this->UnitSymbol_ = x.UnitSymbol_;
        }

        return *this;
      }

      SimSIUnitType::
      ~SimSIUnitType ()
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

