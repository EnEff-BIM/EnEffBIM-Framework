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

#include "SimNode_Node_OutdoorAir.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimNode_Node_OutdoorAir
      // 

      const SimNode_Node_OutdoorAir::SimNode_Name_optional& SimNode_Node_OutdoorAir::
      SimNode_Name () const
      {
        return this->SimNode_Name_;
      }

      SimNode_Node_OutdoorAir::SimNode_Name_optional& SimNode_Node_OutdoorAir::
      SimNode_Name ()
      {
        return this->SimNode_Name_;
      }

      void SimNode_Node_OutdoorAir::
      SimNode_Name (const SimNode_Name_type& x)
      {
        this->SimNode_Name_.set (x);
      }

      void SimNode_Node_OutdoorAir::
      SimNode_Name (const SimNode_Name_optional& x)
      {
        this->SimNode_Name_ = x;
      }

      void SimNode_Node_OutdoorAir::
      SimNode_Name (::std::auto_ptr< SimNode_Name_type > x)
      {
        this->SimNode_Name_.set (x);
      }

      const SimNode_Node_OutdoorAir::SimNode_HeightAboveGround_optional& SimNode_Node_OutdoorAir::
      SimNode_HeightAboveGround () const
      {
        return this->SimNode_HeightAboveGround_;
      }

      SimNode_Node_OutdoorAir::SimNode_HeightAboveGround_optional& SimNode_Node_OutdoorAir::
      SimNode_HeightAboveGround ()
      {
        return this->SimNode_HeightAboveGround_;
      }

      void SimNode_Node_OutdoorAir::
      SimNode_HeightAboveGround (const SimNode_HeightAboveGround_type& x)
      {
        this->SimNode_HeightAboveGround_.set (x);
      }

      void SimNode_Node_OutdoorAir::
      SimNode_HeightAboveGround (const SimNode_HeightAboveGround_optional& x)
      {
        this->SimNode_HeightAboveGround_ = x;
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
      // SimNode_Node_OutdoorAir
      //

      SimNode_Node_OutdoorAir::
      SimNode_Node_OutdoorAir ()
      : ::schema::simxml::ResourcesGeneral::SimNode_Node (),
        SimNode_Name_ (this),
        SimNode_HeightAboveGround_ (this)
      {
      }

      SimNode_Node_OutdoorAir::
      SimNode_Node_OutdoorAir (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimNode_Node (RefId),
        SimNode_Name_ (this),
        SimNode_HeightAboveGround_ (this)
      {
      }

      SimNode_Node_OutdoorAir::
      SimNode_Node_OutdoorAir (const SimNode_Node_OutdoorAir& x,
                               ::xml_schema::flags f,
                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimNode_Node (x, f, c),
        SimNode_Name_ (x.SimNode_Name_, f, this),
        SimNode_HeightAboveGround_ (x.SimNode_HeightAboveGround_, f, this)
      {
      }

      SimNode_Node_OutdoorAir::
      SimNode_Node_OutdoorAir (const ::xercesc::DOMElement& e,
                               ::xml_schema::flags f,
                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimNode_Node (e, f | ::xml_schema::flags::base, c),
        SimNode_Name_ (this),
        SimNode_HeightAboveGround_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimNode_Node_OutdoorAir::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimNode_Node::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimNode_Name
          //
          if (n.name () == "SimNode_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimNode_Name_type > r (
              SimNode_Name_traits::create (i, f, this));

            if (!this->SimNode_Name_)
            {
              this->SimNode_Name_.set (r);
              continue;
            }
          }

          // SimNode_HeightAboveGround
          //
          if (n.name () == "SimNode_HeightAboveGround" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimNode_HeightAboveGround_)
            {
              this->SimNode_HeightAboveGround_.set (SimNode_HeightAboveGround_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimNode_Node_OutdoorAir* SimNode_Node_OutdoorAir::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimNode_Node_OutdoorAir (*this, f, c);
      }

      SimNode_Node_OutdoorAir& SimNode_Node_OutdoorAir::
      operator= (const SimNode_Node_OutdoorAir& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimNode_Node& > (*this) = x;
          this->SimNode_Name_ = x.SimNode_Name_;
          this->SimNode_HeightAboveGround_ = x.SimNode_HeightAboveGround_;
        }

        return *this;
      }

      SimNode_Node_OutdoorAir::
      ~SimNode_Node_OutdoorAir ()
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

