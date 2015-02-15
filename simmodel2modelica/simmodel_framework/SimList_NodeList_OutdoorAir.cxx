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

#include "SimList_NodeList_OutdoorAir.hxx"

#include "simlist_nodeornodelistname_1_500.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimList_NodeList_OutdoorAir
      // 

      const SimList_NodeList_OutdoorAir::SimList_NodeorNodeListName_1_500_optional& SimList_NodeList_OutdoorAir::
      SimList_NodeorNodeListName_1_500 () const
      {
        return this->SimList_NodeorNodeListName_1_500_;
      }

      SimList_NodeList_OutdoorAir::SimList_NodeorNodeListName_1_500_optional& SimList_NodeList_OutdoorAir::
      SimList_NodeorNodeListName_1_500 ()
      {
        return this->SimList_NodeorNodeListName_1_500_;
      }

      void SimList_NodeList_OutdoorAir::
      SimList_NodeorNodeListName_1_500 (const SimList_NodeorNodeListName_1_500_type& x)
      {
        this->SimList_NodeorNodeListName_1_500_.set (x);
      }

      void SimList_NodeList_OutdoorAir::
      SimList_NodeorNodeListName_1_500 (const SimList_NodeorNodeListName_1_500_optional& x)
      {
        this->SimList_NodeorNodeListName_1_500_ = x;
      }

      void SimList_NodeList_OutdoorAir::
      SimList_NodeorNodeListName_1_500 (::std::auto_ptr< SimList_NodeorNodeListName_1_500_type > x)
      {
        this->SimList_NodeorNodeListName_1_500_.set (x);
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
      // SimList_NodeList_OutdoorAir
      //

      SimList_NodeList_OutdoorAir::
      SimList_NodeList_OutdoorAir (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimList_NodeList (RefId),
        SimList_NodeorNodeListName_1_500_ (this)
      {
      }

      SimList_NodeList_OutdoorAir::
      SimList_NodeList_OutdoorAir (const SimList_NodeList_OutdoorAir& x,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimList_NodeList (x, f, c),
        SimList_NodeorNodeListName_1_500_ (x.SimList_NodeorNodeListName_1_500_, f, this)
      {
      }

      SimList_NodeList_OutdoorAir::
      SimList_NodeList_OutdoorAir (const ::xercesc::DOMElement& e,
                                   ::xml_schema::flags f,
                                   ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimList_NodeList (e, f | ::xml_schema::flags::base, c),
        SimList_NodeorNodeListName_1_500_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimList_NodeList_OutdoorAir::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimList_NodeList::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimList_NodeorNodeListName_1_500
          //
          if (n.name () == "SimList_NodeorNodeListName_1_500" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimList_NodeorNodeListName_1_500_type > r (
              SimList_NodeorNodeListName_1_500_traits::create (i, f, this));

            if (!this->SimList_NodeorNodeListName_1_500_)
            {
              this->SimList_NodeorNodeListName_1_500_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimList_NodeList_OutdoorAir* SimList_NodeList_OutdoorAir::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimList_NodeList_OutdoorAir (*this, f, c);
      }

      SimList_NodeList_OutdoorAir& SimList_NodeList_OutdoorAir::
      operator= (const SimList_NodeList_OutdoorAir& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimList_NodeList& > (*this) = x;
          this->SimList_NodeorNodeListName_1_500_ = x.SimList_NodeorNodeListName_1_500_;
        }

        return *this;
      }

      SimList_NodeList_OutdoorAir::
      ~SimList_NodeList_OutdoorAir ()
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

