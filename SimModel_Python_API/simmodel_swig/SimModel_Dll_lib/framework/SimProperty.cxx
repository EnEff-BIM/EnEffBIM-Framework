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

#include "SimProperty.hxx"

#include "value.hxx"

namespace schema
{
  namespace simxml
  {
    namespace SimModelCore
    {
      // SimProperty
      // 

      const SimProperty::Name_optional& SimProperty::
      Name () const
      {
        return this->Name_;
      }

      SimProperty::Name_optional& SimProperty::
      Name ()
      {
        return this->Name_;
      }

      void SimProperty::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimProperty::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimProperty::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimProperty::Value_optional& SimProperty::
      Value () const
      {
        return this->Value_;
      }

      SimProperty::Value_optional& SimProperty::
      Value ()
      {
        return this->Value_;
      }

      void SimProperty::
      Value (const Value_type& x)
      {
        this->Value_.set (x);
      }

      void SimProperty::
      Value (const Value_optional& x)
      {
        this->Value_ = x;
      }

      void SimProperty::
      Value (::std::auto_ptr< Value_type > x)
      {
        this->Value_.set (x);
      }

      const SimProperty::ContainingPset_optional& SimProperty::
      ContainingPset () const
      {
        return this->ContainingPset_;
      }

      SimProperty::ContainingPset_optional& SimProperty::
      ContainingPset ()
      {
        return this->ContainingPset_;
      }

      void SimProperty::
      ContainingPset (const ContainingPset_type& x)
      {
        this->ContainingPset_.set (x);
      }

      void SimProperty::
      ContainingPset (const ContainingPset_optional& x)
      {
        this->ContainingPset_ = x;
      }

      void SimProperty::
      ContainingPset (::std::auto_ptr< ContainingPset_type > x)
      {
        this->ContainingPset_.set (x);
      }

      const SimProperty::UnitType_optional& SimProperty::
      UnitType () const
      {
        return this->UnitType_;
      }

      SimProperty::UnitType_optional& SimProperty::
      UnitType ()
      {
        return this->UnitType_;
      }

      void SimProperty::
      UnitType (const UnitType_type& x)
      {
        this->UnitType_.set (x);
      }

      void SimProperty::
      UnitType (const UnitType_optional& x)
      {
        this->UnitType_ = x;
      }

      void SimProperty::
      UnitType (::std::auto_ptr< UnitType_type > x)
      {
        this->UnitType_.set (x);
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
    namespace SimModelCore
    {
      // SimProperty
      //

      SimProperty::
      SimProperty ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        Name_ (this),
        Value_ (this),
        ContainingPset_ (this),
        UnitType_ (this)
      {
      }

      SimProperty::
      SimProperty (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        Name_ (this),
        Value_ (this),
        ContainingPset_ (this),
        UnitType_ (this)
      {
      }

      SimProperty::
      SimProperty (const SimProperty& x,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        Name_ (x.Name_, f, this),
        Value_ (x.Value_, f, this),
        ContainingPset_ (x.ContainingPset_, f, this),
        UnitType_ (x.UnitType_, f, this)
      {
      }

      SimProperty::
      SimProperty (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        Value_ (this),
        ContainingPset_ (this),
        UnitType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimProperty::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          // Value
          //
          if (n.name () == "Value" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< Value_type > r (
              Value_traits::create (i, f, this));

            if (!this->Value_)
            {
              this->Value_.set (r);
              continue;
            }
          }

          // ContainingPset
          //
          if (n.name () == "ContainingPset" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< ContainingPset_type > r (
              ContainingPset_traits::create (i, f, this));

            if (!this->ContainingPset_)
            {
              this->ContainingPset_.set (r);
              continue;
            }
          }

          // UnitType
          //
          if (n.name () == "UnitType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/SimModelCore")
          {
            ::std::auto_ptr< UnitType_type > r (
              UnitType_traits::create (i, f, this));

            if (!this->UnitType_)
            {
              this->UnitType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimProperty* SimProperty::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimProperty (*this, f, c);
      }

      SimProperty& SimProperty::
      operator= (const SimProperty& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->Name_ = x.Name_;
          this->Value_ = x.Value_;
          this->ContainingPset_ = x.ContainingPset_;
          this->UnitType_ = x.UnitType_;
        }

        return *this;
      }

      SimProperty::
      ~SimProperty ()
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
    namespace SimModelCore
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

