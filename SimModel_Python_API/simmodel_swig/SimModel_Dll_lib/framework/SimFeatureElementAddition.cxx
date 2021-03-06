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

#include "SimFeatureElementAddition.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimFeatureElementAddition
      // 

      const SimFeatureElementAddition::ObjectType_optional& SimFeatureElementAddition::
      ObjectType () const
      {
        return this->ObjectType_;
      }

      SimFeatureElementAddition::ObjectType_optional& SimFeatureElementAddition::
      ObjectType ()
      {
        return this->ObjectType_;
      }

      void SimFeatureElementAddition::
      ObjectType (const ObjectType_type& x)
      {
        this->ObjectType_.set (x);
      }

      void SimFeatureElementAddition::
      ObjectType (const ObjectType_optional& x)
      {
        this->ObjectType_ = x;
      }

      void SimFeatureElementAddition::
      ObjectType (::std::auto_ptr< ObjectType_type > x)
      {
        this->ObjectType_.set (x);
      }

      const SimFeatureElementAddition::ObjectPlacement_optional& SimFeatureElementAddition::
      ObjectPlacement () const
      {
        return this->ObjectPlacement_;
      }

      SimFeatureElementAddition::ObjectPlacement_optional& SimFeatureElementAddition::
      ObjectPlacement ()
      {
        return this->ObjectPlacement_;
      }

      void SimFeatureElementAddition::
      ObjectPlacement (const ObjectPlacement_type& x)
      {
        this->ObjectPlacement_.set (x);
      }

      void SimFeatureElementAddition::
      ObjectPlacement (const ObjectPlacement_optional& x)
      {
        this->ObjectPlacement_ = x;
      }

      void SimFeatureElementAddition::
      ObjectPlacement (::std::auto_ptr< ObjectPlacement_type > x)
      {
        this->ObjectPlacement_.set (x);
      }

      const SimFeatureElementAddition::Representation_optional& SimFeatureElementAddition::
      Representation () const
      {
        return this->Representation_;
      }

      SimFeatureElementAddition::Representation_optional& SimFeatureElementAddition::
      Representation ()
      {
        return this->Representation_;
      }

      void SimFeatureElementAddition::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimFeatureElementAddition::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimFeatureElementAddition::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimFeatureElementAddition::Tag_optional& SimFeatureElementAddition::
      Tag () const
      {
        return this->Tag_;
      }

      SimFeatureElementAddition::Tag_optional& SimFeatureElementAddition::
      Tag ()
      {
        return this->Tag_;
      }

      void SimFeatureElementAddition::
      Tag (const Tag_type& x)
      {
        this->Tag_.set (x);
      }

      void SimFeatureElementAddition::
      Tag (const Tag_optional& x)
      {
        this->Tag_ = x;
      }

      void SimFeatureElementAddition::
      Tag (::std::auto_ptr< Tag_type > x)
      {
        this->Tag_.set (x);
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
      // SimFeatureElementAddition
      //

      SimFeatureElementAddition::
      SimFeatureElementAddition ()
      : ::schema::simxml::SimModelCore::SimFeatureElement (),
        ObjectType_ (this),
        ObjectPlacement_ (this),
        Representation_ (this),
        Tag_ (this)
      {
      }

      SimFeatureElementAddition::
      SimFeatureElementAddition (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimFeatureElement (RefId),
        ObjectType_ (this),
        ObjectPlacement_ (this),
        Representation_ (this),
        Tag_ (this)
      {
      }

      SimFeatureElementAddition::
      SimFeatureElementAddition (const SimFeatureElementAddition& x,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimFeatureElement (x, f, c),
        ObjectType_ (x.ObjectType_, f, this),
        ObjectPlacement_ (x.ObjectPlacement_, f, this),
        Representation_ (x.Representation_, f, this),
        Tag_ (x.Tag_, f, this)
      {
      }

      SimFeatureElementAddition::
      SimFeatureElementAddition (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimFeatureElement (e, f | ::xml_schema::flags::base, c),
        ObjectType_ (this),
        ObjectPlacement_ (this),
        Representation_ (this),
        Tag_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFeatureElementAddition::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimFeatureElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ObjectType
          //
          if (n.name () == "ObjectType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< ObjectType_type > r (
              ObjectType_traits::create (i, f, this));

            if (!this->ObjectType_)
            {
              this->ObjectType_.set (r);
              continue;
            }
          }

          // ObjectPlacement
          //
          if (n.name () == "ObjectPlacement" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< ObjectPlacement_type > r (
              ObjectPlacement_traits::create (i, f, this));

            if (!this->ObjectPlacement_)
            {
              this->ObjectPlacement_.set (r);
              continue;
            }
          }

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

          // Tag
          //
          if (n.name () == "Tag" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Tag_type > r (
              Tag_traits::create (i, f, this));

            if (!this->Tag_)
            {
              this->Tag_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFeatureElementAddition* SimFeatureElementAddition::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFeatureElementAddition (*this, f, c);
      }

      SimFeatureElementAddition& SimFeatureElementAddition::
      operator= (const SimFeatureElementAddition& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimFeatureElement& > (*this) = x;
          this->ObjectType_ = x.ObjectType_;
          this->ObjectPlacement_ = x.ObjectPlacement_;
          this->Representation_ = x.Representation_;
          this->Tag_ = x.Tag_;
        }

        return *this;
      }

      SimFeatureElementAddition::
      ~SimFeatureElementAddition ()
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

