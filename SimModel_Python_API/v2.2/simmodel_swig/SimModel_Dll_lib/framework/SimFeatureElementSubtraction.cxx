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

#include "SimFeatureElementSubtraction.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimFeatureElementSubtraction
      // 

      const SimFeatureElementSubtraction::Name_optional& SimFeatureElementSubtraction::
      Name () const
      {
        return this->Name_;
      }

      SimFeatureElementSubtraction::Name_optional& SimFeatureElementSubtraction::
      Name ()
      {
        return this->Name_;
      }

      void SimFeatureElementSubtraction::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimFeatureElementSubtraction::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimFeatureElementSubtraction::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimFeatureElementSubtraction::ObjectType_optional& SimFeatureElementSubtraction::
      ObjectType () const
      {
        return this->ObjectType_;
      }

      SimFeatureElementSubtraction::ObjectType_optional& SimFeatureElementSubtraction::
      ObjectType ()
      {
        return this->ObjectType_;
      }

      void SimFeatureElementSubtraction::
      ObjectType (const ObjectType_type& x)
      {
        this->ObjectType_.set (x);
      }

      void SimFeatureElementSubtraction::
      ObjectType (const ObjectType_optional& x)
      {
        this->ObjectType_ = x;
      }

      void SimFeatureElementSubtraction::
      ObjectType (::std::auto_ptr< ObjectType_type > x)
      {
        this->ObjectType_.set (x);
      }

      const SimFeatureElementSubtraction::Representation_optional& SimFeatureElementSubtraction::
      Representation () const
      {
        return this->Representation_;
      }

      SimFeatureElementSubtraction::Representation_optional& SimFeatureElementSubtraction::
      Representation ()
      {
        return this->Representation_;
      }

      void SimFeatureElementSubtraction::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimFeatureElementSubtraction::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimFeatureElementSubtraction::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimFeatureElementSubtraction::Tag_optional& SimFeatureElementSubtraction::
      Tag () const
      {
        return this->Tag_;
      }

      SimFeatureElementSubtraction::Tag_optional& SimFeatureElementSubtraction::
      Tag ()
      {
        return this->Tag_;
      }

      void SimFeatureElementSubtraction::
      Tag (const Tag_type& x)
      {
        this->Tag_.set (x);
      }

      void SimFeatureElementSubtraction::
      Tag (const Tag_optional& x)
      {
        this->Tag_ = x;
      }

      void SimFeatureElementSubtraction::
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
      // SimFeatureElementSubtraction
      //

      SimFeatureElementSubtraction::
      SimFeatureElementSubtraction ()
      : ::schema::simxml::SimModelCore::SimFeatureElement (),
        Name_ (this),
        ObjectType_ (this),
        Representation_ (this),
        Tag_ (this)
      {
      }

      SimFeatureElementSubtraction::
      SimFeatureElementSubtraction (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimFeatureElement (RefId),
        Name_ (this),
        ObjectType_ (this),
        Representation_ (this),
        Tag_ (this)
      {
      }

      SimFeatureElementSubtraction::
      SimFeatureElementSubtraction (const SimFeatureElementSubtraction& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimFeatureElement (x, f, c),
        Name_ (x.Name_, f, this),
        ObjectType_ (x.ObjectType_, f, this),
        Representation_ (x.Representation_, f, this),
        Tag_ (x.Tag_, f, this)
      {
      }

      SimFeatureElementSubtraction::
      SimFeatureElementSubtraction (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimFeatureElement (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        ObjectType_ (this),
        Representation_ (this),
        Tag_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFeatureElementSubtraction::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimFeatureElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

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

      SimFeatureElementSubtraction* SimFeatureElementSubtraction::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFeatureElementSubtraction (*this, f, c);
      }

      SimFeatureElementSubtraction& SimFeatureElementSubtraction::
      operator= (const SimFeatureElementSubtraction& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimFeatureElement& > (*this) = x;
          this->Name_ = x.Name_;
          this->ObjectType_ = x.ObjectType_;
          this->Representation_ = x.Representation_;
          this->Tag_ = x.Tag_;
        }

        return *this;
      }

      SimFeatureElementSubtraction::
      ~SimFeatureElementSubtraction ()
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

