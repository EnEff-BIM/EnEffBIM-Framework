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

#include "SimSimulationOutputRequest_Meters_MeterFileOnly.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimSimulationOutputRequest_Meters_MeterFileOnly
      // 

      const SimSimulationOutputRequest_Meters_MeterFileOnly::SimSimulaOutputRequest_Name_optional& SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_Name () const
      {
        return this->SimSimulaOutputRequest_Name_;
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly::SimSimulaOutputRequest_Name_optional& SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_Name ()
      {
        return this->SimSimulaOutputRequest_Name_;
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_Name (const SimSimulaOutputRequest_Name_type& x)
      {
        this->SimSimulaOutputRequest_Name_.set (x);
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_Name (const SimSimulaOutputRequest_Name_optional& x)
      {
        this->SimSimulaOutputRequest_Name_ = x;
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_Name (::std::auto_ptr< SimSimulaOutputRequest_Name_type > x)
      {
        this->SimSimulaOutputRequest_Name_.set (x);
      }

      const SimSimulationOutputRequest_Meters_MeterFileOnly::SimSimulaOutputRequest_RptngFrequency_optional& SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_RptngFrequency () const
      {
        return this->SimSimulaOutputRequest_RptngFrequency_;
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly::SimSimulaOutputRequest_RptngFrequency_optional& SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_RptngFrequency ()
      {
        return this->SimSimulaOutputRequest_RptngFrequency_;
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_RptngFrequency (const SimSimulaOutputRequest_RptngFrequency_type& x)
      {
        this->SimSimulaOutputRequest_RptngFrequency_.set (x);
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_RptngFrequency (const SimSimulaOutputRequest_RptngFrequency_optional& x)
      {
        this->SimSimulaOutputRequest_RptngFrequency_ = x;
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulaOutputRequest_RptngFrequency (::std::auto_ptr< SimSimulaOutputRequest_RptngFrequency_type > x)
      {
        this->SimSimulaOutputRequest_RptngFrequency_.set (x);
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
      // SimSimulationOutputRequest_Meters_MeterFileOnly
      //

      SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulationOutputRequest_Meters_MeterFileOnly ()
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_Meters (),
        SimSimulaOutputRequest_Name_ (this),
        SimSimulaOutputRequest_RptngFrequency_ (this)
      {
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulationOutputRequest_Meters_MeterFileOnly (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_Meters (RefId),
        SimSimulaOutputRequest_Name_ (this),
        SimSimulaOutputRequest_RptngFrequency_ (this)
      {
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulationOutputRequest_Meters_MeterFileOnly (const SimSimulationOutputRequest_Meters_MeterFileOnly& x,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_Meters (x, f, c),
        SimSimulaOutputRequest_Name_ (x.SimSimulaOutputRequest_Name_, f, this),
        SimSimulaOutputRequest_RptngFrequency_ (x.SimSimulaOutputRequest_RptngFrequency_, f, this)
      {
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly::
      SimSimulationOutputRequest_Meters_MeterFileOnly (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_Meters (e, f | ::xml_schema::flags::base, c),
        SimSimulaOutputRequest_Name_ (this),
        SimSimulaOutputRequest_RptngFrequency_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSimulationOutputRequest_Meters_MeterFileOnly::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_Meters::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSimulaOutputRequest_Name
          //
          if (n.name () == "SimSimulaOutputRequest_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimulaOutputRequest_Name_type > r (
              SimSimulaOutputRequest_Name_traits::create (i, f, this));

            if (!this->SimSimulaOutputRequest_Name_)
            {
              this->SimSimulaOutputRequest_Name_.set (r);
              continue;
            }
          }

          // SimSimulaOutputRequest_RptngFrequency
          //
          if (n.name () == "SimSimulaOutputRequest_RptngFrequency" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimulaOutputRequest_RptngFrequency_type > r (
              SimSimulaOutputRequest_RptngFrequency_traits::create (i, f, this));

            if (!this->SimSimulaOutputRequest_RptngFrequency_)
            {
              this->SimSimulaOutputRequest_RptngFrequency_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly* SimSimulationOutputRequest_Meters_MeterFileOnly::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSimulationOutputRequest_Meters_MeterFileOnly (*this, f, c);
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly& SimSimulationOutputRequest_Meters_MeterFileOnly::
      operator= (const SimSimulationOutputRequest_Meters_MeterFileOnly& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_Meters& > (*this) = x;
          this->SimSimulaOutputRequest_Name_ = x.SimSimulaOutputRequest_Name_;
          this->SimSimulaOutputRequest_RptngFrequency_ = x.SimSimulaOutputRequest_RptngFrequency_;
        }

        return *this;
      }

      SimSimulationOutputRequest_Meters_MeterFileOnly::
      ~SimSimulationOutputRequest_Meters_MeterFileOnly ()
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

