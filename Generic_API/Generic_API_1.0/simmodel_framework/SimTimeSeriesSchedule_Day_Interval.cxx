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

#include "SimTimeSeriesSchedule_Day_Interval.hxx"

#include "simtimeseriessched_time_1_144.hxx"

#include "doublelist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimTimeSeriesSchedule_Day_Interval
      // 

      const SimTimeSeriesSchedule_Day_Interval::SimTimeSeriesSched_terpolateToTimestep_optional& SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_terpolateToTimestep () const
      {
        return this->SimTimeSeriesSched_terpolateToTimestep_;
      }

      SimTimeSeriesSchedule_Day_Interval::SimTimeSeriesSched_terpolateToTimestep_optional& SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_terpolateToTimestep ()
      {
        return this->SimTimeSeriesSched_terpolateToTimestep_;
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_terpolateToTimestep (const SimTimeSeriesSched_terpolateToTimestep_type& x)
      {
        this->SimTimeSeriesSched_terpolateToTimestep_.set (x);
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_terpolateToTimestep (const SimTimeSeriesSched_terpolateToTimestep_optional& x)
      {
        this->SimTimeSeriesSched_terpolateToTimestep_ = x;
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_terpolateToTimestep (::std::auto_ptr< SimTimeSeriesSched_terpolateToTimestep_type > x)
      {
        this->SimTimeSeriesSched_terpolateToTimestep_.set (x);
      }

      const SimTimeSeriesSchedule_Day_Interval::SimTimeSeriesSched_Time_1_144_optional& SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_Time_1_144 () const
      {
        return this->SimTimeSeriesSched_Time_1_144_;
      }

      SimTimeSeriesSchedule_Day_Interval::SimTimeSeriesSched_Time_1_144_optional& SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_Time_1_144 ()
      {
        return this->SimTimeSeriesSched_Time_1_144_;
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_Time_1_144 (const SimTimeSeriesSched_Time_1_144_type& x)
      {
        this->SimTimeSeriesSched_Time_1_144_.set (x);
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_Time_1_144 (const SimTimeSeriesSched_Time_1_144_optional& x)
      {
        this->SimTimeSeriesSched_Time_1_144_ = x;
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_Time_1_144 (::std::auto_ptr< SimTimeSeriesSched_Time_1_144_type > x)
      {
        this->SimTimeSeriesSched_Time_1_144_.set (x);
      }

      const SimTimeSeriesSchedule_Day_Interval::SimTimeSeriesSched_ValUntilTime_1_144_optional& SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_ValUntilTime_1_144 () const
      {
        return this->SimTimeSeriesSched_ValUntilTime_1_144_;
      }

      SimTimeSeriesSchedule_Day_Interval::SimTimeSeriesSched_ValUntilTime_1_144_optional& SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_ValUntilTime_1_144 ()
      {
        return this->SimTimeSeriesSched_ValUntilTime_1_144_;
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_ValUntilTime_1_144 (const SimTimeSeriesSched_ValUntilTime_1_144_type& x)
      {
        this->SimTimeSeriesSched_ValUntilTime_1_144_.set (x);
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_ValUntilTime_1_144 (const SimTimeSeriesSched_ValUntilTime_1_144_optional& x)
      {
        this->SimTimeSeriesSched_ValUntilTime_1_144_ = x;
      }

      void SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSched_ValUntilTime_1_144 (::std::auto_ptr< SimTimeSeriesSched_ValUntilTime_1_144_type > x)
      {
        this->SimTimeSeriesSched_ValUntilTime_1_144_.set (x);
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
    namespace ResourcesGeneral
    {
      // SimTimeSeriesSchedule_Day_Interval
      //

      SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSchedule_Day_Interval (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule_Day (RefId),
        SimTimeSeriesSched_terpolateToTimestep_ (this),
        SimTimeSeriesSched_Time_1_144_ (this),
        SimTimeSeriesSched_ValUntilTime_1_144_ (this)
      {
      }

      SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSchedule_Day_Interval (const SimTimeSeriesSchedule_Day_Interval& x,
                                          ::xml_schema::flags f,
                                          ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule_Day (x, f, c),
        SimTimeSeriesSched_terpolateToTimestep_ (x.SimTimeSeriesSched_terpolateToTimestep_, f, this),
        SimTimeSeriesSched_Time_1_144_ (x.SimTimeSeriesSched_Time_1_144_, f, this),
        SimTimeSeriesSched_ValUntilTime_1_144_ (x.SimTimeSeriesSched_ValUntilTime_1_144_, f, this)
      {
      }

      SimTimeSeriesSchedule_Day_Interval::
      SimTimeSeriesSchedule_Day_Interval (const ::xercesc::DOMElement& e,
                                          ::xml_schema::flags f,
                                          ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule_Day (e, f | ::xml_schema::flags::base, c),
        SimTimeSeriesSched_terpolateToTimestep_ (this),
        SimTimeSeriesSched_Time_1_144_ (this),
        SimTimeSeriesSched_ValUntilTime_1_144_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimTimeSeriesSchedule_Day_Interval::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule_Day::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimTimeSeriesSched_terpolateToTimestep
          //
          if (n.name () == "SimTimeSeriesSched_terpolateToTimestep" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimTimeSeriesSched_terpolateToTimestep_type > r (
              SimTimeSeriesSched_terpolateToTimestep_traits::create (i, f, this));

            if (!this->SimTimeSeriesSched_terpolateToTimestep_)
            {
              this->SimTimeSeriesSched_terpolateToTimestep_.set (r);
              continue;
            }
          }

          // SimTimeSeriesSched_Time_1_144
          //
          if (n.name () == "SimTimeSeriesSched_Time_1_144" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimTimeSeriesSched_Time_1_144_type > r (
              SimTimeSeriesSched_Time_1_144_traits::create (i, f, this));

            if (!this->SimTimeSeriesSched_Time_1_144_)
            {
              this->SimTimeSeriesSched_Time_1_144_.set (r);
              continue;
            }
          }

          // SimTimeSeriesSched_ValUntilTime_1_144
          //
          if (n.name () == "SimTimeSeriesSched_ValUntilTime_1_144" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimTimeSeriesSched_ValUntilTime_1_144_type > r (
              SimTimeSeriesSched_ValUntilTime_1_144_traits::create (i, f, this));

            if (!this->SimTimeSeriesSched_ValUntilTime_1_144_)
            {
              this->SimTimeSeriesSched_ValUntilTime_1_144_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimTimeSeriesSchedule_Day_Interval* SimTimeSeriesSchedule_Day_Interval::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimTimeSeriesSchedule_Day_Interval (*this, f, c);
      }

      SimTimeSeriesSchedule_Day_Interval& SimTimeSeriesSchedule_Day_Interval::
      operator= (const SimTimeSeriesSchedule_Day_Interval& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule_Day& > (*this) = x;
          this->SimTimeSeriesSched_terpolateToTimestep_ = x.SimTimeSeriesSched_terpolateToTimestep_;
          this->SimTimeSeriesSched_Time_1_144_ = x.SimTimeSeriesSched_Time_1_144_;
          this->SimTimeSeriesSched_ValUntilTime_1_144_ = x.SimTimeSeriesSched_ValUntilTime_1_144_;
        }

        return *this;
      }

      SimTimeSeriesSchedule_Day_Interval::
      ~SimTimeSeriesSchedule_Day_Interval ()
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
