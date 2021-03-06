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

#include "SimLightingFixtureType.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimLightingFixtureType
      // 

      const SimLightingFixtureType::RepresentationMaps_optional& SimLightingFixtureType::
      RepresentationMaps () const
      {
        return this->RepresentationMaps_;
      }

      SimLightingFixtureType::RepresentationMaps_optional& SimLightingFixtureType::
      RepresentationMaps ()
      {
        return this->RepresentationMaps_;
      }

      void SimLightingFixtureType::
      RepresentationMaps (const RepresentationMaps_type& x)
      {
        this->RepresentationMaps_.set (x);
      }

      void SimLightingFixtureType::
      RepresentationMaps (const RepresentationMaps_optional& x)
      {
        this->RepresentationMaps_ = x;
      }

      void SimLightingFixtureType::
      RepresentationMaps (::std::auto_ptr< RepresentationMaps_type > x)
      {
        this->RepresentationMaps_.set (x);
      }

      const SimLightingFixtureType::Tag_optional& SimLightingFixtureType::
      Tag () const
      {
        return this->Tag_;
      }

      SimLightingFixtureType::Tag_optional& SimLightingFixtureType::
      Tag ()
      {
        return this->Tag_;
      }

      void SimLightingFixtureType::
      Tag (const Tag_type& x)
      {
        this->Tag_.set (x);
      }

      void SimLightingFixtureType::
      Tag (const Tag_optional& x)
      {
        this->Tag_ = x;
      }

      void SimLightingFixtureType::
      Tag (::std::auto_ptr< Tag_type > x)
      {
        this->Tag_.set (x);
      }

      const SimLightingFixtureType::ElementType_optional& SimLightingFixtureType::
      ElementType () const
      {
        return this->ElementType_;
      }

      SimLightingFixtureType::ElementType_optional& SimLightingFixtureType::
      ElementType ()
      {
        return this->ElementType_;
      }

      void SimLightingFixtureType::
      ElementType (const ElementType_type& x)
      {
        this->ElementType_.set (x);
      }

      void SimLightingFixtureType::
      ElementType (const ElementType_optional& x)
      {
        this->ElementType_ = x;
      }

      void SimLightingFixtureType::
      ElementType (::std::auto_ptr< ElementType_type > x)
      {
        this->ElementType_.set (x);
      }

      const SimLightingFixtureType::PredefinedType_optional& SimLightingFixtureType::
      PredefinedType () const
      {
        return this->PredefinedType_;
      }

      SimLightingFixtureType::PredefinedType_optional& SimLightingFixtureType::
      PredefinedType ()
      {
        return this->PredefinedType_;
      }

      void SimLightingFixtureType::
      PredefinedType (const PredefinedType_type& x)
      {
        this->PredefinedType_.set (x);
      }

      void SimLightingFixtureType::
      PredefinedType (const PredefinedType_optional& x)
      {
        this->PredefinedType_ = x;
      }

      void SimLightingFixtureType::
      PredefinedType (::std::auto_ptr< PredefinedType_type > x)
      {
        this->PredefinedType_.set (x);
      }

      const SimLightingFixtureType::InteriorOrExterior_optional& SimLightingFixtureType::
      InteriorOrExterior () const
      {
        return this->InteriorOrExterior_;
      }

      SimLightingFixtureType::InteriorOrExterior_optional& SimLightingFixtureType::
      InteriorOrExterior ()
      {
        return this->InteriorOrExterior_;
      }

      void SimLightingFixtureType::
      InteriorOrExterior (const InteriorOrExterior_type& x)
      {
        this->InteriorOrExterior_.set (x);
      }

      void SimLightingFixtureType::
      InteriorOrExterior (const InteriorOrExterior_optional& x)
      {
        this->InteriorOrExterior_ = x;
      }

      void SimLightingFixtureType::
      InteriorOrExterior (::std::auto_ptr< InteriorOrExterior_type > x)
      {
        this->InteriorOrExterior_.set (x);
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
      // SimLightingFixtureType
      //

      SimLightingFixtureType::
      SimLightingFixtureType ()
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (),
        RepresentationMaps_ (this),
        Tag_ (this),
        ElementType_ (this),
        PredefinedType_ (this),
        InteriorOrExterior_ (this)
      {
      }

      SimLightingFixtureType::
      SimLightingFixtureType (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (RefId),
        RepresentationMaps_ (this),
        Tag_ (this),
        ElementType_ (this),
        PredefinedType_ (this),
        InteriorOrExterior_ (this)
      {
      }

      SimLightingFixtureType::
      SimLightingFixtureType (const SimLightingFixtureType& x,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (x, f, c),
        RepresentationMaps_ (x.RepresentationMaps_, f, this),
        Tag_ (x.Tag_, f, this),
        ElementType_ (x.ElementType_, f, this),
        PredefinedType_ (x.PredefinedType_, f, this),
        InteriorOrExterior_ (x.InteriorOrExterior_, f, this)
      {
      }

      SimLightingFixtureType::
      SimLightingFixtureType (const ::xercesc::DOMElement& e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimObjectTypeDefinition (e, f | ::xml_schema::flags::base, c),
        RepresentationMaps_ (this),
        Tag_ (this),
        ElementType_ (this),
        PredefinedType_ (this),
        InteriorOrExterior_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimLightingFixtureType::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimObjectTypeDefinition::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // RepresentationMaps
          //
          if (n.name () == "RepresentationMaps" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< RepresentationMaps_type > r (
              RepresentationMaps_traits::create (i, f, this));

            if (!this->RepresentationMaps_)
            {
              this->RepresentationMaps_.set (r);
              continue;
            }
          }

          // Tag
          //
          if (n.name () == "Tag" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< Tag_type > r (
              Tag_traits::create (i, f, this));

            if (!this->Tag_)
            {
              this->Tag_.set (r);
              continue;
            }
          }

          // ElementType
          //
          if (n.name () == "ElementType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ElementType_type > r (
              ElementType_traits::create (i, f, this));

            if (!this->ElementType_)
            {
              this->ElementType_.set (r);
              continue;
            }
          }

          // PredefinedType
          //
          if (n.name () == "PredefinedType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< PredefinedType_type > r (
              PredefinedType_traits::create (i, f, this));

            if (!this->PredefinedType_)
            {
              this->PredefinedType_.set (r);
              continue;
            }
          }

          // InteriorOrExterior
          //
          if (n.name () == "InteriorOrExterior" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< InteriorOrExterior_type > r (
              InteriorOrExterior_traits::create (i, f, this));

            if (!this->InteriorOrExterior_)
            {
              this->InteriorOrExterior_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimLightingFixtureType* SimLightingFixtureType::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimLightingFixtureType (*this, f, c);
      }

      SimLightingFixtureType& SimLightingFixtureType::
      operator= (const SimLightingFixtureType& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimObjectTypeDefinition& > (*this) = x;
          this->RepresentationMaps_ = x.RepresentationMaps_;
          this->Tag_ = x.Tag_;
          this->ElementType_ = x.ElementType_;
          this->PredefinedType_ = x.PredefinedType_;
          this->InteriorOrExterior_ = x.InteriorOrExterior_;
        }

        return *this;
      }

      SimLightingFixtureType::
      ~SimLightingFixtureType ()
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

