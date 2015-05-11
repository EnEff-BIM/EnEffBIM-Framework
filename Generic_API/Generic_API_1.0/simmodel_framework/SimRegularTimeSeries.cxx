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

#include "SimRegularTimeSeries.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimRegularTimeSeries
      // 

      const SimRegularTimeSeries::Name_optional& SimRegularTimeSeries::
      Name () const
      {
        return this->Name_;
      }

      SimRegularTimeSeries::Name_optional& SimRegularTimeSeries::
      Name ()
      {
        return this->Name_;
      }

      void SimRegularTimeSeries::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimRegularTimeSeries::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimRegularTimeSeries::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimRegularTimeSeries::StartTime_optional& SimRegularTimeSeries::
      StartTime () const
      {
        return this->StartTime_;
      }

      SimRegularTimeSeries::StartTime_optional& SimRegularTimeSeries::
      StartTime ()
      {
        return this->StartTime_;
      }

      void SimRegularTimeSeries::
      StartTime (const StartTime_type& x)
      {
        this->StartTime_.set (x);
      }

      void SimRegularTimeSeries::
      StartTime (const StartTime_optional& x)
      {
        this->StartTime_ = x;
      }

      void SimRegularTimeSeries::
      StartTime (::std::auto_ptr< StartTime_type > x)
      {
        this->StartTime_.set (x);
      }

      const SimRegularTimeSeries::EndTime_optional& SimRegularTimeSeries::
      EndTime () const
      {
        return this->EndTime_;
      }

      SimRegularTimeSeries::EndTime_optional& SimRegularTimeSeries::
      EndTime ()
      {
        return this->EndTime_;
      }

      void SimRegularTimeSeries::
      EndTime (const EndTime_type& x)
      {
        this->EndTime_.set (x);
      }

      void SimRegularTimeSeries::
      EndTime (const EndTime_optional& x)
      {
        this->EndTime_ = x;
      }

      void SimRegularTimeSeries::
      EndTime (::std::auto_ptr< EndTime_type > x)
      {
        this->EndTime_.set (x);
      }

      const SimRegularTimeSeries::TimeSeriesDataType_optional& SimRegularTimeSeries::
      TimeSeriesDataType () const
      {
        return this->TimeSeriesDataType_;
      }

      SimRegularTimeSeries::TimeSeriesDataType_optional& SimRegularTimeSeries::
      TimeSeriesDataType ()
      {
        return this->TimeSeriesDataType_;
      }

      void SimRegularTimeSeries::
      TimeSeriesDataType (const TimeSeriesDataType_type& x)
      {
        this->TimeSeriesDataType_.set (x);
      }

      void SimRegularTimeSeries::
      TimeSeriesDataType (const TimeSeriesDataType_optional& x)
      {
        this->TimeSeriesDataType_ = x;
      }

      void SimRegularTimeSeries::
      TimeSeriesDataType (::std::auto_ptr< TimeSeriesDataType_type > x)
      {
        this->TimeSeriesDataType_.set (x);
      }

      const SimRegularTimeSeries::DataOrigin_optional& SimRegularTimeSeries::
      DataOrigin () const
      {
        return this->DataOrigin_;
      }

      SimRegularTimeSeries::DataOrigin_optional& SimRegularTimeSeries::
      DataOrigin ()
      {
        return this->DataOrigin_;
      }

      void SimRegularTimeSeries::
      DataOrigin (const DataOrigin_type& x)
      {
        this->DataOrigin_.set (x);
      }

      void SimRegularTimeSeries::
      DataOrigin (const DataOrigin_optional& x)
      {
        this->DataOrigin_ = x;
      }

      void SimRegularTimeSeries::
      DataOrigin (::std::auto_ptr< DataOrigin_type > x)
      {
        this->DataOrigin_.set (x);
      }

      const SimRegularTimeSeries::UserDefinedDataOrigin_optional& SimRegularTimeSeries::
      UserDefinedDataOrigin () const
      {
        return this->UserDefinedDataOrigin_;
      }

      SimRegularTimeSeries::UserDefinedDataOrigin_optional& SimRegularTimeSeries::
      UserDefinedDataOrigin ()
      {
        return this->UserDefinedDataOrigin_;
      }

      void SimRegularTimeSeries::
      UserDefinedDataOrigin (const UserDefinedDataOrigin_type& x)
      {
        this->UserDefinedDataOrigin_.set (x);
      }

      void SimRegularTimeSeries::
      UserDefinedDataOrigin (const UserDefinedDataOrigin_optional& x)
      {
        this->UserDefinedDataOrigin_ = x;
      }

      void SimRegularTimeSeries::
      UserDefinedDataOrigin (::std::auto_ptr< UserDefinedDataOrigin_type > x)
      {
        this->UserDefinedDataOrigin_.set (x);
      }

      const SimRegularTimeSeries::Unit_optional& SimRegularTimeSeries::
      Unit () const
      {
        return this->Unit_;
      }

      SimRegularTimeSeries::Unit_optional& SimRegularTimeSeries::
      Unit ()
      {
        return this->Unit_;
      }

      void SimRegularTimeSeries::
      Unit (const Unit_type& x)
      {
        this->Unit_.set (x);
      }

      void SimRegularTimeSeries::
      Unit (const Unit_optional& x)
      {
        this->Unit_ = x;
      }

      void SimRegularTimeSeries::
      Unit (::std::auto_ptr< Unit_type > x)
      {
        this->Unit_.set (x);
      }

      const SimRegularTimeSeries::TimeStep_optional& SimRegularTimeSeries::
      TimeStep () const
      {
        return this->TimeStep_;
      }

      SimRegularTimeSeries::TimeStep_optional& SimRegularTimeSeries::
      TimeStep ()
      {
        return this->TimeStep_;
      }

      void SimRegularTimeSeries::
      TimeStep (const TimeStep_type& x)
      {
        this->TimeStep_.set (x);
      }

      void SimRegularTimeSeries::
      TimeStep (const TimeStep_optional& x)
      {
        this->TimeStep_ = x;
      }

      const SimRegularTimeSeries::Values_optional& SimRegularTimeSeries::
      Values () const
      {
        return this->Values_;
      }

      SimRegularTimeSeries::Values_optional& SimRegularTimeSeries::
      Values ()
      {
        return this->Values_;
      }

      void SimRegularTimeSeries::
      Values (const Values_type& x)
      {
        this->Values_.set (x);
      }

      void SimRegularTimeSeries::
      Values (const Values_optional& x)
      {
        this->Values_ = x;
      }

      void SimRegularTimeSeries::
      Values (::std::auto_ptr< Values_type > x)
      {
        this->Values_.set (x);
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
      // SimRegularTimeSeries
      //

      SimRegularTimeSeries::
      SimRegularTimeSeries (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeries (RefId),
        Name_ (this),
        StartTime_ (this),
        EndTime_ (this),
        TimeSeriesDataType_ (this),
        DataOrigin_ (this),
        UserDefinedDataOrigin_ (this),
        Unit_ (this),
        TimeStep_ (this),
        Values_ (this)
      {
      }

      SimRegularTimeSeries::
      SimRegularTimeSeries (const SimRegularTimeSeries& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeries (x, f, c),
        Name_ (x.Name_, f, this),
        StartTime_ (x.StartTime_, f, this),
        EndTime_ (x.EndTime_, f, this),
        TimeSeriesDataType_ (x.TimeSeriesDataType_, f, this),
        DataOrigin_ (x.DataOrigin_, f, this),
        UserDefinedDataOrigin_ (x.UserDefinedDataOrigin_, f, this),
        Unit_ (x.Unit_, f, this),
        TimeStep_ (x.TimeStep_, f, this),
        Values_ (x.Values_, f, this)
      {
      }

      SimRegularTimeSeries::
      SimRegularTimeSeries (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeries (e, f | ::xml_schema::flags::base, c),
        Name_ (this),
        StartTime_ (this),
        EndTime_ (this),
        TimeSeriesDataType_ (this),
        DataOrigin_ (this),
        UserDefinedDataOrigin_ (this),
        Unit_ (this),
        TimeStep_ (this),
        Values_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimRegularTimeSeries::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimTimeSeries::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Name
          //
          if (n.name () == "Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< Name_type > r (
              Name_traits::create (i, f, this));

            if (!this->Name_)
            {
              this->Name_.set (r);
              continue;
            }
          }

          // StartTime
          //
          if (n.name () == "StartTime" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< StartTime_type > r (
              StartTime_traits::create (i, f, this));

            if (!this->StartTime_)
            {
              this->StartTime_.set (r);
              continue;
            }
          }

          // EndTime
          //
          if (n.name () == "EndTime" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< EndTime_type > r (
              EndTime_traits::create (i, f, this));

            if (!this->EndTime_)
            {
              this->EndTime_.set (r);
              continue;
            }
          }

          // TimeSeriesDataType
          //
          if (n.name () == "TimeSeriesDataType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< TimeSeriesDataType_type > r (
              TimeSeriesDataType_traits::create (i, f, this));

            if (!this->TimeSeriesDataType_)
            {
              this->TimeSeriesDataType_.set (r);
              continue;
            }
          }

          // DataOrigin
          //
          if (n.name () == "DataOrigin" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< DataOrigin_type > r (
              DataOrigin_traits::create (i, f, this));

            if (!this->DataOrigin_)
            {
              this->DataOrigin_.set (r);
              continue;
            }
          }

          // UserDefinedDataOrigin
          //
          if (n.name () == "UserDefinedDataOrigin" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< UserDefinedDataOrigin_type > r (
              UserDefinedDataOrigin_traits::create (i, f, this));

            if (!this->UserDefinedDataOrigin_)
            {
              this->UserDefinedDataOrigin_.set (r);
              continue;
            }
          }

          // Unit
          //
          if (n.name () == "Unit" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< Unit_type > r (
              Unit_traits::create (i, f, this));

            if (!this->Unit_)
            {
              this->Unit_.set (r);
              continue;
            }
          }

          // TimeStep
          //
          if (n.name () == "TimeStep" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->TimeStep_)
            {
              this->TimeStep_.set (TimeStep_traits::create (i, f, this));
              continue;
            }
          }

          // Values
          //
          if (n.name () == "Values" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< Values_type > r (
              Values_traits::create (i, f, this));

            if (!this->Values_)
            {
              this->Values_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimRegularTimeSeries* SimRegularTimeSeries::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimRegularTimeSeries (*this, f, c);
      }

      SimRegularTimeSeries& SimRegularTimeSeries::
      operator= (const SimRegularTimeSeries& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimTimeSeries& > (*this) = x;
          this->Name_ = x.Name_;
          this->StartTime_ = x.StartTime_;
          this->EndTime_ = x.EndTime_;
          this->TimeSeriesDataType_ = x.TimeSeriesDataType_;
          this->DataOrigin_ = x.DataOrigin_;
          this->UserDefinedDataOrigin_ = x.UserDefinedDataOrigin_;
          this->Unit_ = x.Unit_;
          this->TimeStep_ = x.TimeStep_;
          this->Values_ = x.Values_;
        }

        return *this;
      }

      SimRegularTimeSeries::
      ~SimRegularTimeSeries ()
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

