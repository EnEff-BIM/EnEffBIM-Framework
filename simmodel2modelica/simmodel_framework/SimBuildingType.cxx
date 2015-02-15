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

#include "SimBuildingType.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimBuildingType
      // 

      const SimBuildingType::RepresentationMaps_optional& SimBuildingType::
      RepresentationMaps () const
      {
        return this->RepresentationMaps_;
      }

      SimBuildingType::RepresentationMaps_optional& SimBuildingType::
      RepresentationMaps ()
      {
        return this->RepresentationMaps_;
      }

      void SimBuildingType::
      RepresentationMaps (const RepresentationMaps_type& x)
      {
        this->RepresentationMaps_.set (x);
      }

      void SimBuildingType::
      RepresentationMaps (const RepresentationMaps_optional& x)
      {
        this->RepresentationMaps_ = x;
      }

      void SimBuildingType::
      RepresentationMaps (::std::auto_ptr< RepresentationMaps_type > x)
      {
        this->RepresentationMaps_.set (x);
      }

      const SimBuildingType::Tag_optional& SimBuildingType::
      Tag () const
      {
        return this->Tag_;
      }

      SimBuildingType::Tag_optional& SimBuildingType::
      Tag ()
      {
        return this->Tag_;
      }

      void SimBuildingType::
      Tag (const Tag_type& x)
      {
        this->Tag_.set (x);
      }

      void SimBuildingType::
      Tag (const Tag_optional& x)
      {
        this->Tag_ = x;
      }

      void SimBuildingType::
      Tag (::std::auto_ptr< Tag_type > x)
      {
        this->Tag_.set (x);
      }

      const SimBuildingType::ContainedBldgStoryTypeDefs_optional& SimBuildingType::
      ContainedBldgStoryTypeDefs () const
      {
        return this->ContainedBldgStoryTypeDefs_;
      }

      SimBuildingType::ContainedBldgStoryTypeDefs_optional& SimBuildingType::
      ContainedBldgStoryTypeDefs ()
      {
        return this->ContainedBldgStoryTypeDefs_;
      }

      void SimBuildingType::
      ContainedBldgStoryTypeDefs (const ContainedBldgStoryTypeDefs_type& x)
      {
        this->ContainedBldgStoryTypeDefs_.set (x);
      }

      void SimBuildingType::
      ContainedBldgStoryTypeDefs (const ContainedBldgStoryTypeDefs_optional& x)
      {
        this->ContainedBldgStoryTypeDefs_ = x;
      }

      void SimBuildingType::
      ContainedBldgStoryTypeDefs (::std::auto_ptr< ContainedBldgStoryTypeDefs_type > x)
      {
        this->ContainedBldgStoryTypeDefs_.set (x);
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
    namespace BuildingModel
    {
      // SimBuildingType
      //

      SimBuildingType::
      SimBuildingType (const RefId_type& RefId)
      : ::namespaces::Sim::SimModelCore::SimObjectTypeDefinition (RefId),
        RepresentationMaps_ (this),
        Tag_ (this),
        ContainedBldgStoryTypeDefs_ (this)
      {
      }

      SimBuildingType::
      SimBuildingType (const SimBuildingType& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::namespaces::Sim::SimModelCore::SimObjectTypeDefinition (x, f, c),
        RepresentationMaps_ (x.RepresentationMaps_, f, this),
        Tag_ (x.Tag_, f, this),
        ContainedBldgStoryTypeDefs_ (x.ContainedBldgStoryTypeDefs_, f, this)
      {
      }

      SimBuildingType::
      SimBuildingType (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::namespaces::Sim::SimModelCore::SimObjectTypeDefinition (e, f | ::xml_schema::flags::base, c),
        RepresentationMaps_ (this),
        Tag_ (this),
        ContainedBldgStoryTypeDefs_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBuildingType::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::SimModelCore::SimObjectTypeDefinition::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // RepresentationMaps
          //
          if (n.name () == "RepresentationMaps" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
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
          if (n.name () == "Tag" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< Tag_type > r (
              Tag_traits::create (i, f, this));

            if (!this->Tag_)
            {
              this->Tag_.set (r);
              continue;
            }
          }

          // ContainedBldgStoryTypeDefs
          //
          if (n.name () == "ContainedBldgStoryTypeDefs" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< ContainedBldgStoryTypeDefs_type > r (
              ContainedBldgStoryTypeDefs_traits::create (i, f, this));

            if (!this->ContainedBldgStoryTypeDefs_)
            {
              this->ContainedBldgStoryTypeDefs_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBuildingType* SimBuildingType::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBuildingType (*this, f, c);
      }

      SimBuildingType& SimBuildingType::
      operator= (const SimBuildingType& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::SimModelCore::SimObjectTypeDefinition& > (*this) = x;
          this->RepresentationMaps_ = x.RepresentationMaps_;
          this->Tag_ = x.Tag_;
          this->ContainedBldgStoryTypeDefs_ = x.ContainedBldgStoryTypeDefs_;
        }

        return *this;
      }

      SimBuildingType::
      ~SimBuildingType ()
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

