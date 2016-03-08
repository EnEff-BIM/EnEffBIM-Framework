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

#include "SimSimulationParameters_SiteWindPressure_WindPressureValues.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimSimulationParameters_SiteWindPressure_WindPressureValues
      // 

      const SimSimulationParameters_SiteWindPressure_WindPressureValues::SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_optional& SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName () const
      {
        return this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_;
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues::SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_optional& SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName ()
      {
        return this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_;
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName (const SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_type& x)
      {
        this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_.set (x);
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName (const SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_optional& x)
      {
        this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_ = x;
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName (::std::auto_ptr< SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_type > x)
      {
        this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_.set (x);
      }

      const SimSimulationParameters_SiteWindPressure_WindPressureValues::SimSimParams_WindPresCoeffVal_1_36_optional& SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_WindPresCoeffVal_1_36 () const
      {
        return this->SimSimParams_WindPresCoeffVal_1_36_;
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues::SimSimParams_WindPresCoeffVal_1_36_optional& SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_WindPresCoeffVal_1_36 ()
      {
        return this->SimSimParams_WindPresCoeffVal_1_36_;
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_WindPresCoeffVal_1_36 (const SimSimParams_WindPresCoeffVal_1_36_type& x)
      {
        this->SimSimParams_WindPresCoeffVal_1_36_.set (x);
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_WindPresCoeffVal_1_36 (const SimSimParams_WindPresCoeffVal_1_36_optional& x)
      {
        this->SimSimParams_WindPresCoeffVal_1_36_ = x;
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimParams_WindPresCoeffVal_1_36 (::std::auto_ptr< SimSimParams_WindPresCoeffVal_1_36_type > x)
      {
        this->SimSimParams_WindPresCoeffVal_1_36_.set (x);
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
      // SimSimulationParameters_SiteWindPressure_WindPressureValues
      //

      SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimulationParameters_SiteWindPressure_WindPressureValues ()
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters_SiteWindPressure (),
        SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_ (this),
        SimSimParams_WindPresCoeffVal_1_36_ (this)
      {
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimulationParameters_SiteWindPressure_WindPressureValues (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters_SiteWindPressure (RefId),
        SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_ (this),
        SimSimParams_WindPresCoeffVal_1_36_ (this)
      {
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimulationParameters_SiteWindPressure_WindPressureValues (const SimSimulationParameters_SiteWindPressure_WindPressureValues& x,
                                                                   ::xml_schema::flags f,
                                                                   ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters_SiteWindPressure (x, f, c),
        SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_ (x.SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_, f, this),
        SimSimParams_WindPresCoeffVal_1_36_ (x.SimSimParams_WindPresCoeffVal_1_36_, f, this)
      {
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues::
      SimSimulationParameters_SiteWindPressure_WindPressureValues (const ::xercesc::DOMElement& e,
                                                                   ::xml_schema::flags f,
                                                                   ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters_SiteWindPressure (e, f | ::xml_schema::flags::base, c),
        SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_ (this),
        SimSimParams_WindPresCoeffVal_1_36_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSimulationParameters_SiteWindPressure_WindPressureValues::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimSimulationParameters_SiteWindPressure::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName
          //
          if (n.name () == "SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_type > r (
              SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_traits::create (i, f, this));

            if (!this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_)
            {
              this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_.set (r);
              continue;
            }
          }

          // SimSimParams_WindPresCoeffVal_1_36
          //
          if (n.name () == "SimSimParams_WindPresCoeffVal_1_36" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_WindPresCoeffVal_1_36_type > r (
              SimSimParams_WindPresCoeffVal_1_36_traits::create (i, f, this));

            if (!this->SimSimParams_WindPresCoeffVal_1_36_)
            {
              this->SimSimParams_WindPresCoeffVal_1_36_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues* SimSimulationParameters_SiteWindPressure_WindPressureValues::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSimulationParameters_SiteWindPressure_WindPressureValues (*this, f, c);
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues& SimSimulationParameters_SiteWindPressure_WindPressureValues::
      operator= (const SimSimulationParameters_SiteWindPressure_WindPressureValues& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimSimulationParameters_SiteWindPressure& > (*this) = x;
          this->SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_ = x.SimSimParams_AirflowNetMultiZoneWindPresCoeffArrayName_;
          this->SimSimParams_WindPresCoeffVal_1_36_ = x.SimSimParams_WindPresCoeffVal_1_36_;
        }

        return *this;
      }

      SimSimulationParameters_SiteWindPressure_WindPressureValues::
      ~SimSimulationParameters_SiteWindPressure_WindPressureValues ()
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

