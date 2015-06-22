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

#include "SimTimeSeriesSchedule_TimeSeries.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimTimeSeriesSchedule_TimeSeries
      // 

      const SimTimeSeriesSchedule_TimeSeries::GlobalId_optional& SimTimeSeriesSchedule_TimeSeries::
      GlobalId () const
      {
        return this->GlobalId_;
      }

      SimTimeSeriesSchedule_TimeSeries::GlobalId_optional& SimTimeSeriesSchedule_TimeSeries::
      GlobalId ()
      {
        return this->GlobalId_;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      GlobalId (const GlobalId_type& x)
      {
        this->GlobalId_.set (x);
      }

      void SimTimeSeriesSchedule_TimeSeries::
      GlobalId (const GlobalId_optional& x)
      {
        this->GlobalId_ = x;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      GlobalId (::std::auto_ptr< GlobalId_type > x)
      {
        this->GlobalId_.set (x);
      }

      const SimTimeSeriesSchedule_TimeSeries::OwnerHistory_optional& SimTimeSeriesSchedule_TimeSeries::
      OwnerHistory () const
      {
        return this->OwnerHistory_;
      }

      SimTimeSeriesSchedule_TimeSeries::OwnerHistory_optional& SimTimeSeriesSchedule_TimeSeries::
      OwnerHistory ()
      {
        return this->OwnerHistory_;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      OwnerHistory (const OwnerHistory_type& x)
      {
        this->OwnerHistory_.set (x);
      }

      void SimTimeSeriesSchedule_TimeSeries::
      OwnerHistory (const OwnerHistory_optional& x)
      {
        this->OwnerHistory_ = x;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      OwnerHistory (::std::auto_ptr< OwnerHistory_type > x)
      {
        this->OwnerHistory_.set (x);
      }

      const SimTimeSeriesSchedule_TimeSeries::Name_optional& SimTimeSeriesSchedule_TimeSeries::
      Name () const
      {
        return this->Name_;
      }

      SimTimeSeriesSchedule_TimeSeries::Name_optional& SimTimeSeriesSchedule_TimeSeries::
      Name ()
      {
        return this->Name_;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      Name (const Name_type& x)
      {
        this->Name_.set (x);
      }

      void SimTimeSeriesSchedule_TimeSeries::
      Name (const Name_optional& x)
      {
        this->Name_ = x;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      Name (::std::auto_ptr< Name_type > x)
      {
        this->Name_.set (x);
      }

      const SimTimeSeriesSchedule_TimeSeries::ObjectType_optional& SimTimeSeriesSchedule_TimeSeries::
      ObjectType () const
      {
        return this->ObjectType_;
      }

      SimTimeSeriesSchedule_TimeSeries::ObjectType_optional& SimTimeSeriesSchedule_TimeSeries::
      ObjectType ()
      {
        return this->ObjectType_;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      ObjectType (const ObjectType_type& x)
      {
        this->ObjectType_.set (x);
      }

      void SimTimeSeriesSchedule_TimeSeries::
      ObjectType (const ObjectType_optional& x)
      {
        this->ObjectType_ = x;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      ObjectType (::std::auto_ptr< ObjectType_type > x)
      {
        this->ObjectType_.set (x);
      }

      const SimTimeSeriesSchedule_TimeSeries::ApplicableDates_optional& SimTimeSeriesSchedule_TimeSeries::
      ApplicableDates () const
      {
        return this->ApplicableDates_;
      }

      SimTimeSeriesSchedule_TimeSeries::ApplicableDates_optional& SimTimeSeriesSchedule_TimeSeries::
      ApplicableDates ()
      {
        return this->ApplicableDates_;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      ApplicableDates (const ApplicableDates_type& x)
      {
        this->ApplicableDates_.set (x);
      }

      void SimTimeSeriesSchedule_TimeSeries::
      ApplicableDates (const ApplicableDates_optional& x)
      {
        this->ApplicableDates_ = x;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      ApplicableDates (::std::auto_ptr< ApplicableDates_type > x)
      {
        this->ApplicableDates_.set (x);
      }

      const SimTimeSeriesSchedule_TimeSeries::TimeSeries_optional& SimTimeSeriesSchedule_TimeSeries::
      TimeSeries () const
      {
        return this->TimeSeries_;
      }

      SimTimeSeriesSchedule_TimeSeries::TimeSeries_optional& SimTimeSeriesSchedule_TimeSeries::
      TimeSeries ()
      {
        return this->TimeSeries_;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      TimeSeries (const TimeSeries_type& x)
      {
        this->TimeSeries_.set (x);
      }

      void SimTimeSeriesSchedule_TimeSeries::
      TimeSeries (const TimeSeries_optional& x)
      {
        this->TimeSeries_ = x;
      }

      void SimTimeSeriesSchedule_TimeSeries::
      TimeSeries (::std::auto_ptr< TimeSeries_type > x)
      {
        this->TimeSeries_.set (x);
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
      // SimTimeSeriesSchedule_TimeSeries
      //

      SimTimeSeriesSchedule_TimeSeries::
      SimTimeSeriesSchedule_TimeSeries (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule (RefId),
        GlobalId_ (this),
        OwnerHistory_ (this),
        Name_ (this),
        ObjectType_ (this),
        ApplicableDates_ (this),
        TimeSeries_ (this)
      {
      }

      SimTimeSeriesSchedule_TimeSeries::
      SimTimeSeriesSchedule_TimeSeries (const SimTimeSeriesSchedule_TimeSeries& x,
                                        ::xml_schema::flags f,
                                        ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule (x, f, c),
        GlobalId_ (x.GlobalId_, f, this),
        OwnerHistory_ (x.OwnerHistory_, f, this),
        Name_ (x.Name_, f, this),
        ObjectType_ (x.ObjectType_, f, this),
        ApplicableDates_ (x.ApplicableDates_, f, this),
        TimeSeries_ (x.TimeSeries_, f, this)
      {
      }

      SimTimeSeriesSchedule_TimeSeries::
      SimTimeSeriesSchedule_TimeSeries (const ::xercesc::DOMElement& e,
                                        ::xml_schema::flags f,
                                        ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule (e, f | ::xml_schema::flags::base, c),
        GlobalId_ (this),
        OwnerHistory_ (this),
        Name_ (this),
        ObjectType_ (this),
        ApplicableDates_ (this),
        TimeSeries_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimTimeSeriesSchedule_TimeSeries::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // GlobalId
          //
          if (n.name () == "GlobalId" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< GlobalId_type > r (
              GlobalId_traits::create (i, f, this));

            if (!this->GlobalId_)
            {
              this->GlobalId_.set (r);
              continue;
            }
          }

          // OwnerHistory
          //
          if (n.name () == "OwnerHistory" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< OwnerHistory_type > r (
              OwnerHistory_traits::create (i, f, this));

            if (!this->OwnerHistory_)
            {
              this->OwnerHistory_.set (r);
              continue;
            }
          }

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

          // ObjectType
          //
          if (n.name () == "ObjectType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< ObjectType_type > r (
              ObjectType_traits::create (i, f, this));

            if (!this->ObjectType_)
            {
              this->ObjectType_.set (r);
              continue;
            }
          }

          // ApplicableDates
          //
          if (n.name () == "ApplicableDates" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< ApplicableDates_type > r (
              ApplicableDates_traits::create (i, f, this));

            if (!this->ApplicableDates_)
            {
              this->ApplicableDates_.set (r);
              continue;
            }
          }

          // TimeSeries
          //
          if (n.name () == "TimeSeries" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< TimeSeries_type > r (
              TimeSeries_traits::create (i, f, this));

            if (!this->TimeSeries_)
            {
              this->TimeSeries_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimTimeSeriesSchedule_TimeSeries* SimTimeSeriesSchedule_TimeSeries::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimTimeSeriesSchedule_TimeSeries (*this, f, c);
      }

      SimTimeSeriesSchedule_TimeSeries& SimTimeSeriesSchedule_TimeSeries::
      operator= (const SimTimeSeriesSchedule_TimeSeries& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimTimeSeriesSchedule& > (*this) = x;
          this->GlobalId_ = x.GlobalId_;
          this->OwnerHistory_ = x.OwnerHistory_;
          this->Name_ = x.Name_;
          this->ObjectType_ = x.ObjectType_;
          this->ApplicableDates_ = x.ApplicableDates_;
          this->TimeSeries_ = x.TimeSeries_;
        }

        return *this;
      }

      SimTimeSeriesSchedule_TimeSeries::
      ~SimTimeSeriesSchedule_TimeSeries ()
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
