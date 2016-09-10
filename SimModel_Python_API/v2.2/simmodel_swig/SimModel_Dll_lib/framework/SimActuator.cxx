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

#include "SimActuator.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimActuator
      // 

      const SimActuator::Representation_optional& SimActuator::
      Representation () const
      {
        return this->Representation_;
      }

      SimActuator::Representation_optional& SimActuator::
      Representation ()
      {
        return this->Representation_;
      }

      void SimActuator::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimActuator::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimActuator::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimActuator::ApplicableOccurrence_optional& SimActuator::
      ApplicableOccurrence () const
      {
        return this->ApplicableOccurrence_;
      }

      SimActuator::ApplicableOccurrence_optional& SimActuator::
      ApplicableOccurrence ()
      {
        return this->ApplicableOccurrence_;
      }

      void SimActuator::
      ApplicableOccurrence (const ApplicableOccurrence_type& x)
      {
        this->ApplicableOccurrence_.set (x);
      }

      void SimActuator::
      ApplicableOccurrence (const ApplicableOccurrence_optional& x)
      {
        this->ApplicableOccurrence_ = x;
      }

      void SimActuator::
      ApplicableOccurrence (::std::auto_ptr< ApplicableOccurrence_type > x)
      {
        this->ApplicableOccurrence_.set (x);
      }

      const SimActuator::HasPropertySets_optional& SimActuator::
      HasPropertySets () const
      {
        return this->HasPropertySets_;
      }

      SimActuator::HasPropertySets_optional& SimActuator::
      HasPropertySets ()
      {
        return this->HasPropertySets_;
      }

      void SimActuator::
      HasPropertySets (const HasPropertySets_type& x)
      {
        this->HasPropertySets_.set (x);
      }

      void SimActuator::
      HasPropertySets (const HasPropertySets_optional& x)
      {
        this->HasPropertySets_ = x;
      }

      void SimActuator::
      HasPropertySets (::std::auto_ptr< HasPropertySets_type > x)
      {
        this->HasPropertySets_.set (x);
      }

      const SimActuator::RepresentationMaps_optional& SimActuator::
      RepresentationMaps () const
      {
        return this->RepresentationMaps_;
      }

      SimActuator::RepresentationMaps_optional& SimActuator::
      RepresentationMaps ()
      {
        return this->RepresentationMaps_;
      }

      void SimActuator::
      RepresentationMaps (const RepresentationMaps_type& x)
      {
        this->RepresentationMaps_.set (x);
      }

      void SimActuator::
      RepresentationMaps (const RepresentationMaps_optional& x)
      {
        this->RepresentationMaps_ = x;
      }

      void SimActuator::
      RepresentationMaps (::std::auto_ptr< RepresentationMaps_type > x)
      {
        this->RepresentationMaps_.set (x);
      }

      const SimActuator::ElementType_optional& SimActuator::
      ElementType () const
      {
        return this->ElementType_;
      }

      SimActuator::ElementType_optional& SimActuator::
      ElementType ()
      {
        return this->ElementType_;
      }

      void SimActuator::
      ElementType (const ElementType_type& x)
      {
        this->ElementType_.set (x);
      }

      void SimActuator::
      ElementType (const ElementType_optional& x)
      {
        this->ElementType_ = x;
      }

      void SimActuator::
      ElementType (::std::auto_ptr< ElementType_type > x)
      {
        this->ElementType_.set (x);
      }

      const SimActuator::PredefinedType_optional& SimActuator::
      PredefinedType () const
      {
        return this->PredefinedType_;
      }

      SimActuator::PredefinedType_optional& SimActuator::
      PredefinedType ()
      {
        return this->PredefinedType_;
      }

      void SimActuator::
      PredefinedType (const PredefinedType_type& x)
      {
        this->PredefinedType_.set (x);
      }

      void SimActuator::
      PredefinedType (const PredefinedType_optional& x)
      {
        this->PredefinedType_ = x;
      }

      void SimActuator::
      PredefinedType (::std::auto_ptr< PredefinedType_type > x)
      {
        this->PredefinedType_.set (x);
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
    namespace MepModel
    {
      // SimActuator
      //

      SimActuator::
      SimActuator ()
      : ::schema::simxml::SimModelCore::SimDistributionControlElement (),
        Representation_ (this),
        ApplicableOccurrence_ (this),
        HasPropertySets_ (this),
        RepresentationMaps_ (this),
        ElementType_ (this),
        PredefinedType_ (this)
      {
      }

      SimActuator::
      SimActuator (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimDistributionControlElement (RefId),
        Representation_ (this),
        ApplicableOccurrence_ (this),
        HasPropertySets_ (this),
        RepresentationMaps_ (this),
        ElementType_ (this),
        PredefinedType_ (this)
      {
      }

      SimActuator::
      SimActuator (const SimActuator& x,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimDistributionControlElement (x, f, c),
        Representation_ (x.Representation_, f, this),
        ApplicableOccurrence_ (x.ApplicableOccurrence_, f, this),
        HasPropertySets_ (x.HasPropertySets_, f, this),
        RepresentationMaps_ (x.RepresentationMaps_, f, this),
        ElementType_ (x.ElementType_, f, this),
        PredefinedType_ (x.PredefinedType_, f, this)
      {
      }

      SimActuator::
      SimActuator (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimDistributionControlElement (e, f | ::xml_schema::flags::base, c),
        Representation_ (this),
        ApplicableOccurrence_ (this),
        HasPropertySets_ (this),
        RepresentationMaps_ (this),
        ElementType_ (this),
        PredefinedType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimActuator::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimDistributionControlElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

          // ApplicableOccurrence
          //
          if (n.name () == "ApplicableOccurrence" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< ApplicableOccurrence_type > r (
              ApplicableOccurrence_traits::create (i, f, this));

            if (!this->ApplicableOccurrence_)
            {
              this->ApplicableOccurrence_.set (r);
              continue;
            }
          }

          // HasPropertySets
          //
          if (n.name () == "HasPropertySets" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< HasPropertySets_type > r (
              HasPropertySets_traits::create (i, f, this));

            if (!this->HasPropertySets_)
            {
              this->HasPropertySets_.set (r);
              continue;
            }
          }

          // RepresentationMaps
          //
          if (n.name () == "RepresentationMaps" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< RepresentationMaps_type > r (
              RepresentationMaps_traits::create (i, f, this));

            if (!this->RepresentationMaps_)
            {
              this->RepresentationMaps_.set (r);
              continue;
            }
          }

          // ElementType
          //
          if (n.name () == "ElementType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
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
          if (n.name () == "PredefinedType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< PredefinedType_type > r (
              PredefinedType_traits::create (i, f, this));

            if (!this->PredefinedType_)
            {
              this->PredefinedType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimActuator* SimActuator::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimActuator (*this, f, c);
      }

      SimActuator& SimActuator::
      operator= (const SimActuator& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimDistributionControlElement& > (*this) = x;
          this->Representation_ = x.Representation_;
          this->ApplicableOccurrence_ = x.ApplicableOccurrence_;
          this->HasPropertySets_ = x.HasPropertySets_;
          this->RepresentationMaps_ = x.RepresentationMaps_;
          this->ElementType_ = x.ElementType_;
          this->PredefinedType_ = x.PredefinedType_;
        }

        return *this;
      }

      SimActuator::
      ~SimActuator ()
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
    namespace MepModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

