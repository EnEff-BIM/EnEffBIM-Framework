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

#include "SimPropertySingleValue.hxx"

#include "nominalvalue.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimPropertySingleValue
      // 

      const SimPropertySingleValue::NominalValue_optional& SimPropertySingleValue::
      NominalValue () const
      {
        return this->NominalValue_;
      }

      SimPropertySingleValue::NominalValue_optional& SimPropertySingleValue::
      NominalValue ()
      {
        return this->NominalValue_;
      }

      void SimPropertySingleValue::
      NominalValue (const NominalValue_type& x)
      {
        this->NominalValue_.set (x);
      }

      void SimPropertySingleValue::
      NominalValue (const NominalValue_optional& x)
      {
        this->NominalValue_ = x;
      }

      void SimPropertySingleValue::
      NominalValue (::std::auto_ptr< NominalValue_type > x)
      {
        this->NominalValue_.set (x);
      }

      const SimPropertySingleValue::Unit_optional& SimPropertySingleValue::
      Unit () const
      {
        return this->Unit_;
      }

      SimPropertySingleValue::Unit_optional& SimPropertySingleValue::
      Unit ()
      {
        return this->Unit_;
      }

      void SimPropertySingleValue::
      Unit (const Unit_type& x)
      {
        this->Unit_.set (x);
      }

      void SimPropertySingleValue::
      Unit (const Unit_optional& x)
      {
        this->Unit_ = x;
      }

      void SimPropertySingleValue::
      Unit (::std::auto_ptr< Unit_type > x)
      {
        this->Unit_.set (x);
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
      // SimPropertySingleValue
      //

      SimPropertySingleValue::
      SimPropertySingleValue ()
      : ::schema::simxml::ResourcesGeneral::SimSimpleProperty (),
        NominalValue_ (this),
        Unit_ (this)
      {
      }

      SimPropertySingleValue::
      SimPropertySingleValue (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimSimpleProperty (RefId),
        NominalValue_ (this),
        Unit_ (this)
      {
      }

      SimPropertySingleValue::
      SimPropertySingleValue (const SimPropertySingleValue& x,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimpleProperty (x, f, c),
        NominalValue_ (x.NominalValue_, f, this),
        Unit_ (x.Unit_, f, this)
      {
      }

      SimPropertySingleValue::
      SimPropertySingleValue (const ::xercesc::DOMElement& e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimpleProperty (e, f | ::xml_schema::flags::base, c),
        NominalValue_ (this),
        Unit_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimPropertySingleValue::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimSimpleProperty::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // NominalValue
          //
          if (n.name () == "NominalValue" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< NominalValue_type > r (
              NominalValue_traits::create (i, f, this));

            if (!this->NominalValue_)
            {
              this->NominalValue_.set (r);
              continue;
            }
          }

          // Unit
          //
          if (n.name () == "Unit" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Unit_type > r (
              Unit_traits::create (i, f, this));

            if (!this->Unit_)
            {
              this->Unit_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimPropertySingleValue* SimPropertySingleValue::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimPropertySingleValue (*this, f, c);
      }

      SimPropertySingleValue& SimPropertySingleValue::
      operator= (const SimPropertySingleValue& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimSimpleProperty& > (*this) = x;
          this->NominalValue_ = x.NominalValue_;
          this->Unit_ = x.Unit_;
        }

        return *this;
      }

      SimPropertySingleValue::
      ~SimPropertySingleValue ()
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

