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

#include "SimGroup_DefaultGroup.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimGroup_DefaultGroup
      // 

      const SimGroup_DefaultGroup::Name_optional& SimGroup_DefaultGroup::
      Name () const
      {
        return this->Name_;
      }

      SimGroup_DefaultGroup::Name_optional& SimGroup_DefaultGroup::
      Name ()
      {
        return this->Name_;
      }

      void SimGroup_DefaultGroup::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimGroup_DefaultGroup::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimGroup_DefaultGroup::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
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
      // SimGroup_DefaultGroup
      //

      SimGroup_DefaultGroup::
      SimGroup_DefaultGroup (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimGroup (RefId),
        Name_ (this)
      {
      }

      SimGroup_DefaultGroup::
      SimGroup_DefaultGroup (const SimGroup_DefaultGroup& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimGroup (x, f, c),
        Name_ (x.Name_, f, this)
      {
      }

      SimGroup_DefaultGroup::
      SimGroup_DefaultGroup (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimGroup (e, f | ::xml_schema::flags::base, c),
        Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimGroup_DefaultGroup::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimGroup::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimGroup_DefaultGroup* SimGroup_DefaultGroup::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimGroup_DefaultGroup (*this, f, c);
      }

      SimGroup_DefaultGroup& SimGroup_DefaultGroup::
      operator= (const SimGroup_DefaultGroup& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimGroup& > (*this) = x;
          this->Name_ = x.Name_;
        }

        return *this;
      }

      SimGroup_DefaultGroup::
      ~SimGroup_DefaultGroup ()
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

