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

#include "SimPresentationLayerAssignment.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimPresentationLayerAssignment
      // 

      const SimPresentationLayerAssignment::Name_optional& SimPresentationLayerAssignment::
      Name () const
      {
        return this->Name_;
      }

      SimPresentationLayerAssignment::Name_optional& SimPresentationLayerAssignment::
      Name ()
      {
        return this->Name_;
      }

      void SimPresentationLayerAssignment::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimPresentationLayerAssignment::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimPresentationLayerAssignment::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimPresentationLayerAssignment::AssignedItems_optional& SimPresentationLayerAssignment::
      AssignedItems () const
      {
        return this->AssignedItems_;
      }

      SimPresentationLayerAssignment::AssignedItems_optional& SimPresentationLayerAssignment::
      AssignedItems ()
      {
        return this->AssignedItems_;
      }

      void SimPresentationLayerAssignment::
      AssignedItems (const AssignedItems_type& x)
      {
        this->AssignedItems_.set (x);
      }

      void SimPresentationLayerAssignment::
      AssignedItems (const AssignedItems_optional& x)
      {
        this->AssignedItems_ = x;
      }

      void SimPresentationLayerAssignment::
      AssignedItems (::std::auto_ptr< AssignedItems_type > x)
      {
        this->AssignedItems_.set (x);
      }

      const SimPresentationLayerAssignment::Identifier_optional& SimPresentationLayerAssignment::
      Identifier () const
      {
        return this->Identifier_;
      }

      SimPresentationLayerAssignment::Identifier_optional& SimPresentationLayerAssignment::
      Identifier ()
      {
        return this->Identifier_;
      }

      void SimPresentationLayerAssignment::
      Identifier (const Identifier_type& x)
      {
        this->Identifier_.set (x);
      }

      void SimPresentationLayerAssignment::
      Identifier (const Identifier_optional& x)
      {
        this->Identifier_ = x;
      }

      void SimPresentationLayerAssignment::
      Identifier (::std::auto_ptr< Identifier_type > x)
      {
        this->Identifier_.set (x);
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
      // SimPresentationLayerAssignment
      //

      SimPresentationLayerAssignment::
      SimPresentationLayerAssignment ()
      : ::schema::simxml::SimModelCore::SimResourceObject (),
        Name_ (this),
        AssignedItems_ (this),
        Identifier_ (this)
      {
      }

      SimPresentationLayerAssignment::
      SimPresentationLayerAssignment (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimResourceObject (RefId),
        Name_ (this),
        AssignedItems_ (this),
        Identifier_ (this)
      {
      }

      SimPresentationLayerAssignment::
      SimPresentationLayerAssignment (const SimPresentationLayerAssignment& x,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (x, f, c),
        Name_ (x.Name_, f, this),
        AssignedItems_ (x.AssignedItems_, f, this),
        Identifier_ (x.Identifier_, f, this)
      {
      }

      SimPresentationLayerAssignment::
      SimPresentationLayerAssignment (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        AssignedItems_ (this),
        Identifier_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimPresentationLayerAssignment::
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
          if (n.name () == "Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          // AssignedItems
          //
          if (n.name () == "AssignedItems" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< AssignedItems_type > r (
              AssignedItems_traits::create (i, f, this));

            if (!this->AssignedItems_)
            {
              this->AssignedItems_.set (r);
              continue;
            }
          }

          // Identifier
          //
          if (n.name () == "Identifier" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Identifier_type > r (
              Identifier_traits::create (i, f, this));

            if (!this->Identifier_)
            {
              this->Identifier_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimPresentationLayerAssignment* SimPresentationLayerAssignment::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimPresentationLayerAssignment (*this, f, c);
      }

      SimPresentationLayerAssignment& SimPresentationLayerAssignment::
      operator= (const SimPresentationLayerAssignment& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimResourceObject& > (*this) = x;
          this->Name_ = x.Name_;
          this->AssignedItems_ = x.AssignedItems_;
          this->Identifier_ = x.Identifier_;
        }

        return *this;
      }

      SimPresentationLayerAssignment::
      ~SimPresentationLayerAssignment ()
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

