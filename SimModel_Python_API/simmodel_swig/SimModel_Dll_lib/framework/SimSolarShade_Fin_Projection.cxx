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

#include "SimSolarShade_Fin_Projection.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimSolarShade_Fin_Projection
      // 

      const SimSolarShade_Fin_Projection::SimSolarShade_LeftDepthAsFracWind_DoorWidth_optional& SimSolarShade_Fin_Projection::
      SimSolarShade_LeftDepthAsFracWind_DoorWidth () const
      {
        return this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_;
      }

      SimSolarShade_Fin_Projection::SimSolarShade_LeftDepthAsFracWind_DoorWidth_optional& SimSolarShade_Fin_Projection::
      SimSolarShade_LeftDepthAsFracWind_DoorWidth ()
      {
        return this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_;
      }

      void SimSolarShade_Fin_Projection::
      SimSolarShade_LeftDepthAsFracWind_DoorWidth (const SimSolarShade_LeftDepthAsFracWind_DoorWidth_type& x)
      {
        this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_.set (x);
      }

      void SimSolarShade_Fin_Projection::
      SimSolarShade_LeftDepthAsFracWind_DoorWidth (const SimSolarShade_LeftDepthAsFracWind_DoorWidth_optional& x)
      {
        this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_ = x;
      }

      const SimSolarShade_Fin_Projection::SimSolarShade_RightDepthAsFracWind_DoorWidth_optional& SimSolarShade_Fin_Projection::
      SimSolarShade_RightDepthAsFracWind_DoorWidth () const
      {
        return this->SimSolarShade_RightDepthAsFracWind_DoorWidth_;
      }

      SimSolarShade_Fin_Projection::SimSolarShade_RightDepthAsFracWind_DoorWidth_optional& SimSolarShade_Fin_Projection::
      SimSolarShade_RightDepthAsFracWind_DoorWidth ()
      {
        return this->SimSolarShade_RightDepthAsFracWind_DoorWidth_;
      }

      void SimSolarShade_Fin_Projection::
      SimSolarShade_RightDepthAsFracWind_DoorWidth (const SimSolarShade_RightDepthAsFracWind_DoorWidth_type& x)
      {
        this->SimSolarShade_RightDepthAsFracWind_DoorWidth_.set (x);
      }

      void SimSolarShade_Fin_Projection::
      SimSolarShade_RightDepthAsFracWind_DoorWidth (const SimSolarShade_RightDepthAsFracWind_DoorWidth_optional& x)
      {
        this->SimSolarShade_RightDepthAsFracWind_DoorWidth_ = x;
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
      // SimSolarShade_Fin_Projection
      //

      SimSolarShade_Fin_Projection::
      SimSolarShade_Fin_Projection ()
      : ::schema::simxml::BuildingModel::SimSolarShade_Fin (),
        SimSolarShade_LeftDepthAsFracWind_DoorWidth_ (this),
        SimSolarShade_RightDepthAsFracWind_DoorWidth_ (this)
      {
      }

      SimSolarShade_Fin_Projection::
      SimSolarShade_Fin_Projection (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimSolarShade_Fin (RefId),
        SimSolarShade_LeftDepthAsFracWind_DoorWidth_ (this),
        SimSolarShade_RightDepthAsFracWind_DoorWidth_ (this)
      {
      }

      SimSolarShade_Fin_Projection::
      SimSolarShade_Fin_Projection (const SimSolarShade_Fin_Projection& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSolarShade_Fin (x, f, c),
        SimSolarShade_LeftDepthAsFracWind_DoorWidth_ (x.SimSolarShade_LeftDepthAsFracWind_DoorWidth_, f, this),
        SimSolarShade_RightDepthAsFracWind_DoorWidth_ (x.SimSolarShade_RightDepthAsFracWind_DoorWidth_, f, this)
      {
      }

      SimSolarShade_Fin_Projection::
      SimSolarShade_Fin_Projection (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSolarShade_Fin (e, f | ::xml_schema::flags::base, c),
        SimSolarShade_LeftDepthAsFracWind_DoorWidth_ (this),
        SimSolarShade_RightDepthAsFracWind_DoorWidth_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSolarShade_Fin_Projection::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimSolarShade_Fin::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSolarShade_LeftDepthAsFracWind_DoorWidth
          //
          if (n.name () == "SimSolarShade_LeftDepthAsFracWind_DoorWidth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_)
            {
              this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_.set (SimSolarShade_LeftDepthAsFracWind_DoorWidth_traits::create (i, f, this));
              continue;
            }
          }

          // SimSolarShade_RightDepthAsFracWind_DoorWidth
          //
          if (n.name () == "SimSolarShade_RightDepthAsFracWind_DoorWidth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSolarShade_RightDepthAsFracWind_DoorWidth_)
            {
              this->SimSolarShade_RightDepthAsFracWind_DoorWidth_.set (SimSolarShade_RightDepthAsFracWind_DoorWidth_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimSolarShade_Fin_Projection* SimSolarShade_Fin_Projection::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSolarShade_Fin_Projection (*this, f, c);
      }

      SimSolarShade_Fin_Projection& SimSolarShade_Fin_Projection::
      operator= (const SimSolarShade_Fin_Projection& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimSolarShade_Fin& > (*this) = x;
          this->SimSolarShade_LeftDepthAsFracWind_DoorWidth_ = x.SimSolarShade_LeftDepthAsFracWind_DoorWidth_;
          this->SimSolarShade_RightDepthAsFracWind_DoorWidth_ = x.SimSolarShade_RightDepthAsFracWind_DoorWidth_;
        }

        return *this;
      }

      SimSolarShade_Fin_Projection::
      ~SimSolarShade_Fin_Projection ()
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

