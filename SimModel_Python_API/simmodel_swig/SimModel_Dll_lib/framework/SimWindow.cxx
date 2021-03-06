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

#include "SimWindow.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimWindow
      // 

      const SimWindow::Name_optional& SimWindow::
      Name () const
      {
        return this->Name_;
      }

      SimWindow::Name_optional& SimWindow::
      Name ()
      {
        return this->Name_;
      }

      void SimWindow::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimWindow::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimWindow::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimWindow::Representation_optional& SimWindow::
      Representation () const
      {
        return this->Representation_;
      }

      SimWindow::Representation_optional& SimWindow::
      Representation ()
      {
        return this->Representation_;
      }

      void SimWindow::
      Representation (const Representation_type& x)
      {
        this->Representation_.set (x);
      }

      void SimWindow::
      Representation (const Representation_optional& x)
      {
        this->Representation_ = x;
      }

      void SimWindow::
      Representation (::std::auto_ptr< Representation_type > x)
      {
        this->Representation_.set (x);
      }

      const SimWindow::OverallHeight_optional& SimWindow::
      OverallHeight () const
      {
        return this->OverallHeight_;
      }

      SimWindow::OverallHeight_optional& SimWindow::
      OverallHeight ()
      {
        return this->OverallHeight_;
      }

      void SimWindow::
      OverallHeight (const OverallHeight_type& x)
      {
        this->OverallHeight_.set (x);
      }

      void SimWindow::
      OverallHeight (const OverallHeight_optional& x)
      {
        this->OverallHeight_ = x;
      }

      const SimWindow::OverallWidth_optional& SimWindow::
      OverallWidth () const
      {
        return this->OverallWidth_;
      }

      SimWindow::OverallWidth_optional& SimWindow::
      OverallWidth ()
      {
        return this->OverallWidth_;
      }

      void SimWindow::
      OverallWidth (const OverallWidth_type& x)
      {
        this->OverallWidth_.set (x);
      }

      void SimWindow::
      OverallWidth (const OverallWidth_optional& x)
      {
        this->OverallWidth_ = x;
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
      // SimWindow
      //

      SimWindow::
      SimWindow ()
      : ::schema::simxml::SimModelCore::SimBuildingElement (),
        Name_ (this),
        Representation_ (this),
        OverallHeight_ (this),
        OverallWidth_ (this)
      {
      }

      SimWindow::
      SimWindow (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimBuildingElement (RefId),
        Name_ (this),
        Representation_ (this),
        OverallHeight_ (this),
        OverallWidth_ (this)
      {
      }

      SimWindow::
      SimWindow (const SimWindow& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBuildingElement (x, f, c),
        Name_ (x.Name_, f, this),
        Representation_ (x.Representation_, f, this),
        OverallHeight_ (x.OverallHeight_, f, this),
        OverallWidth_ (x.OverallWidth_, f, this)
      {
      }

      SimWindow::
      SimWindow (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBuildingElement (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        Representation_ (this),
        OverallHeight_ (this),
        OverallWidth_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimWindow::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimBuildingElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          // Representation
          //
          if (n.name () == "Representation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< Representation_type > r (
              Representation_traits::create (i, f, this));

            if (!this->Representation_)
            {
              this->Representation_.set (r);
              continue;
            }
          }

          // OverallHeight
          //
          if (n.name () == "OverallHeight" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->OverallHeight_)
            {
              this->OverallHeight_.set (OverallHeight_traits::create (i, f, this));
              continue;
            }
          }

          // OverallWidth
          //
          if (n.name () == "OverallWidth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->OverallWidth_)
            {
              this->OverallWidth_.set (OverallWidth_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimWindow* SimWindow::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimWindow (*this, f, c);
      }

      SimWindow& SimWindow::
      operator= (const SimWindow& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimBuildingElement& > (*this) = x;
          this->Name_ = x.Name_;
          this->Representation_ = x.Representation_;
          this->OverallHeight_ = x.OverallHeight_;
          this->OverallWidth_ = x.OverallWidth_;
        }

        return *this;
      }

      SimWindow::
      ~SimWindow ()
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

