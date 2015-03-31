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

#include "SimTimeSeriesSchedule.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimTimeSeriesSchedule
      // 

      const SimTimeSeriesSchedule::TimeSeriesScheduleType_optional& SimTimeSeriesSchedule::
      TimeSeriesScheduleType () const
      {
        return this->TimeSeriesScheduleType_;
      }

      SimTimeSeriesSchedule::TimeSeriesScheduleType_optional& SimTimeSeriesSchedule::
      TimeSeriesScheduleType ()
      {
        return this->TimeSeriesScheduleType_;
      }

      void SimTimeSeriesSchedule::
      TimeSeriesScheduleType (const TimeSeriesScheduleType_type& x)
      {
        this->TimeSeriesScheduleType_.set (x);
      }

      void SimTimeSeriesSchedule::
      TimeSeriesScheduleType (const TimeSeriesScheduleType_optional& x)
      {
        this->TimeSeriesScheduleType_ = x;
      }

      void SimTimeSeriesSchedule::
      TimeSeriesScheduleType (::std::auto_ptr< TimeSeriesScheduleType_type > x)
      {
        this->TimeSeriesScheduleType_.set (x);
      }

      const SimTimeSeriesSchedule::CalendarYear_optional& SimTimeSeriesSchedule::
      CalendarYear () const
      {
        return this->CalendarYear_;
      }

      SimTimeSeriesSchedule::CalendarYear_optional& SimTimeSeriesSchedule::
      CalendarYear ()
      {
        return this->CalendarYear_;
      }

      void SimTimeSeriesSchedule::
      CalendarYear (const CalendarYear_type& x)
      {
        this->CalendarYear_.set (x);
      }

      void SimTimeSeriesSchedule::
      CalendarYear (const CalendarYear_optional& x)
      {
        this->CalendarYear_ = x;
      }

      const SimTimeSeriesSchedule::CalendarOfSpecialDays_optional& SimTimeSeriesSchedule::
      CalendarOfSpecialDays () const
      {
        return this->CalendarOfSpecialDays_;
      }

      SimTimeSeriesSchedule::CalendarOfSpecialDays_optional& SimTimeSeriesSchedule::
      CalendarOfSpecialDays ()
      {
        return this->CalendarOfSpecialDays_;
      }

      void SimTimeSeriesSchedule::
      CalendarOfSpecialDays (const CalendarOfSpecialDays_type& x)
      {
        this->CalendarOfSpecialDays_.set (x);
      }

      void SimTimeSeriesSchedule::
      CalendarOfSpecialDays (const CalendarOfSpecialDays_optional& x)
      {
        this->CalendarOfSpecialDays_ = x;
      }

      void SimTimeSeriesSchedule::
      CalendarOfSpecialDays (::std::auto_ptr< CalendarOfSpecialDays_type > x)
      {
        this->CalendarOfSpecialDays_.set (x);
      }

      const SimTimeSeriesSchedule::ValueInterval_optional& SimTimeSeriesSchedule::
      ValueInterval () const
      {
        return this->ValueInterval_;
      }

      SimTimeSeriesSchedule::ValueInterval_optional& SimTimeSeriesSchedule::
      ValueInterval ()
      {
        return this->ValueInterval_;
      }

      void SimTimeSeriesSchedule::
      ValueInterval (const ValueInterval_type& x)
      {
        this->ValueInterval_.set (x);
      }

      void SimTimeSeriesSchedule::
      ValueInterval (const ValueInterval_optional& x)
      {
        this->ValueInterval_ = x;
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
      // SimTimeSeriesSchedule
      //

      SimTimeSeriesSchedule::
      SimTimeSeriesSchedule (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (RefId),
        TimeSeriesScheduleType_ (this),
        CalendarYear_ (this),
        CalendarOfSpecialDays_ (this),
        ValueInterval_ (this)
      {
      }

      SimTimeSeriesSchedule::
      SimTimeSeriesSchedule (const SimTimeSeriesSchedule& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (x, f, c),
        TimeSeriesScheduleType_ (x.TimeSeriesScheduleType_, f, this),
        CalendarYear_ (x.CalendarYear_, f, this),
        CalendarOfSpecialDays_ (x.CalendarOfSpecialDays_, f, this),
        ValueInterval_ (x.ValueInterval_, f, this)
      {
      }

      SimTimeSeriesSchedule::
      SimTimeSeriesSchedule (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        TimeSeriesScheduleType_ (this),
        CalendarYear_ (this),
        CalendarOfSpecialDays_ (this),
        ValueInterval_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimTimeSeriesSchedule::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // TimeSeriesScheduleType
          //
          if (n.name () == "TimeSeriesScheduleType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< TimeSeriesScheduleType_type > r (
              TimeSeriesScheduleType_traits::create (i, f, this));

            if (!this->TimeSeriesScheduleType_)
            {
              this->TimeSeriesScheduleType_.set (r);
              continue;
            }
          }

          // CalendarYear
          //
          if (n.name () == "CalendarYear" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->CalendarYear_)
            {
              this->CalendarYear_.set (CalendarYear_traits::create (i, f, this));
              continue;
            }
          }

          // CalendarOfSpecialDays
          //
          if (n.name () == "CalendarOfSpecialDays" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< CalendarOfSpecialDays_type > r (
              CalendarOfSpecialDays_traits::create (i, f, this));

            if (!this->CalendarOfSpecialDays_)
            {
              this->CalendarOfSpecialDays_.set (r);
              continue;
            }
          }

          // ValueInterval
          //
          if (n.name () == "ValueInterval" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->ValueInterval_)
            {
              this->ValueInterval_.set (ValueInterval_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimTimeSeriesSchedule* SimTimeSeriesSchedule::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimTimeSeriesSchedule (*this, f, c);
      }

      SimTimeSeriesSchedule& SimTimeSeriesSchedule::
      operator= (const SimTimeSeriesSchedule& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimResourceObject& > (*this) = x;
          this->TimeSeriesScheduleType_ = x.TimeSeriesScheduleType_;
          this->CalendarYear_ = x.CalendarYear_;
          this->CalendarOfSpecialDays_ = x.CalendarOfSpecialDays_;
          this->ValueInterval_ = x.ValueInterval_;
        }

        return *this;
      }

      SimTimeSeriesSchedule::
      ~SimTimeSeriesSchedule ()
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
