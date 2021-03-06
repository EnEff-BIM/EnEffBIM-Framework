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

#include "SimTimeSeriesSchedule_Week.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimTimeSeriesSchedule_Week
      // 

      const SimTimeSeriesSchedule_Week::SimTimeSeriesSched_Name_optional& SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_Name () const
      {
        return this->SimTimeSeriesSched_Name_;
      }

      SimTimeSeriesSchedule_Week::SimTimeSeriesSched_Name_optional& SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_Name ()
      {
        return this->SimTimeSeriesSched_Name_;
      }

      void SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_Name (const SimTimeSeriesSched_Name_type& x)
      {
        this->SimTimeSeriesSched_Name_.set (x);
      }

      void SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_Name (const SimTimeSeriesSched_Name_optional& x)
      {
        this->SimTimeSeriesSched_Name_ = x;
      }

      void SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_Name (::std::auto_ptr< SimTimeSeriesSched_Name_type > x)
      {
        this->SimTimeSeriesSched_Name_.set (x);
      }

      const SimTimeSeriesSchedule_Week::SimTimeSeriesSched_TimeSeriesSchedType_optional& SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_TimeSeriesSchedType () const
      {
        return this->SimTimeSeriesSched_TimeSeriesSchedType_;
      }

      SimTimeSeriesSchedule_Week::SimTimeSeriesSched_TimeSeriesSchedType_optional& SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_TimeSeriesSchedType ()
      {
        return this->SimTimeSeriesSched_TimeSeriesSchedType_;
      }

      void SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_TimeSeriesSchedType (const SimTimeSeriesSched_TimeSeriesSchedType_type& x)
      {
        this->SimTimeSeriesSched_TimeSeriesSchedType_.set (x);
      }

      void SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_TimeSeriesSchedType (const SimTimeSeriesSched_TimeSeriesSchedType_optional& x)
      {
        this->SimTimeSeriesSched_TimeSeriesSchedType_ = x;
      }

      void SimTimeSeriesSchedule_Week::
      SimTimeSeriesSched_TimeSeriesSchedType (::std::auto_ptr< SimTimeSeriesSched_TimeSeriesSchedType_type > x)
      {
        this->SimTimeSeriesSched_TimeSeriesSchedType_.set (x);
      }

      const SimTimeSeriesSchedule_Week::T24SchedDayAllDayRef_optional& SimTimeSeriesSchedule_Week::
      T24SchedDayAllDayRef () const
      {
        return this->T24SchedDayAllDayRef_;
      }

      SimTimeSeriesSchedule_Week::T24SchedDayAllDayRef_optional& SimTimeSeriesSchedule_Week::
      T24SchedDayAllDayRef ()
      {
        return this->T24SchedDayAllDayRef_;
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayAllDayRef (const T24SchedDayAllDayRef_type& x)
      {
        this->T24SchedDayAllDayRef_.set (x);
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayAllDayRef (const T24SchedDayAllDayRef_optional& x)
      {
        this->T24SchedDayAllDayRef_ = x;
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayAllDayRef (::std::auto_ptr< T24SchedDayAllDayRef_type > x)
      {
        this->T24SchedDayAllDayRef_.set (x);
      }

      const SimTimeSeriesSchedule_Week::T24SchedDayWkdaysRef_optional& SimTimeSeriesSchedule_Week::
      T24SchedDayWkdaysRef () const
      {
        return this->T24SchedDayWkdaysRef_;
      }

      SimTimeSeriesSchedule_Week::T24SchedDayWkdaysRef_optional& SimTimeSeriesSchedule_Week::
      T24SchedDayWkdaysRef ()
      {
        return this->T24SchedDayWkdaysRef_;
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayWkdaysRef (const T24SchedDayWkdaysRef_type& x)
      {
        this->T24SchedDayWkdaysRef_.set (x);
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayWkdaysRef (const T24SchedDayWkdaysRef_optional& x)
      {
        this->T24SchedDayWkdaysRef_ = x;
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayWkdaysRef (::std::auto_ptr< T24SchedDayWkdaysRef_type > x)
      {
        this->T24SchedDayWkdaysRef_.set (x);
      }

      const SimTimeSeriesSchedule_Week::T24SchedDayWkEndsRef_optional& SimTimeSeriesSchedule_Week::
      T24SchedDayWkEndsRef () const
      {
        return this->T24SchedDayWkEndsRef_;
      }

      SimTimeSeriesSchedule_Week::T24SchedDayWkEndsRef_optional& SimTimeSeriesSchedule_Week::
      T24SchedDayWkEndsRef ()
      {
        return this->T24SchedDayWkEndsRef_;
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayWkEndsRef (const T24SchedDayWkEndsRef_type& x)
      {
        this->T24SchedDayWkEndsRef_.set (x);
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayWkEndsRef (const T24SchedDayWkEndsRef_optional& x)
      {
        this->T24SchedDayWkEndsRef_ = x;
      }

      void SimTimeSeriesSchedule_Week::
      T24SchedDayWkEndsRef (::std::auto_ptr< T24SchedDayWkEndsRef_type > x)
      {
        this->T24SchedDayWkEndsRef_.set (x);
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
      // SimTimeSeriesSchedule_Week
      //

      SimTimeSeriesSchedule_Week::
      SimTimeSeriesSchedule_Week ()
      : ::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule (),
        SimTimeSeriesSched_Name_ (this),
        SimTimeSeriesSched_TimeSeriesSchedType_ (this),
        T24SchedDayAllDayRef_ (this),
        T24SchedDayWkdaysRef_ (this),
        T24SchedDayWkEndsRef_ (this)
      {
      }

      SimTimeSeriesSchedule_Week::
      SimTimeSeriesSchedule_Week (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule (RefId),
        SimTimeSeriesSched_Name_ (this),
        SimTimeSeriesSched_TimeSeriesSchedType_ (this),
        T24SchedDayAllDayRef_ (this),
        T24SchedDayWkdaysRef_ (this),
        T24SchedDayWkEndsRef_ (this)
      {
      }

      SimTimeSeriesSchedule_Week::
      SimTimeSeriesSchedule_Week (const SimTimeSeriesSchedule_Week& x,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule (x, f, c),
        SimTimeSeriesSched_Name_ (x.SimTimeSeriesSched_Name_, f, this),
        SimTimeSeriesSched_TimeSeriesSchedType_ (x.SimTimeSeriesSched_TimeSeriesSchedType_, f, this),
        T24SchedDayAllDayRef_ (x.T24SchedDayAllDayRef_, f, this),
        T24SchedDayWkdaysRef_ (x.T24SchedDayWkdaysRef_, f, this),
        T24SchedDayWkEndsRef_ (x.T24SchedDayWkEndsRef_, f, this)
      {
      }

      SimTimeSeriesSchedule_Week::
      SimTimeSeriesSchedule_Week (const ::xercesc::DOMElement& e,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule (e, f | ::xml_schema::flags::base, c),
        SimTimeSeriesSched_Name_ (this),
        SimTimeSeriesSched_TimeSeriesSchedType_ (this),
        T24SchedDayAllDayRef_ (this),
        T24SchedDayWkdaysRef_ (this),
        T24SchedDayWkEndsRef_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimTimeSeriesSchedule_Week::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimTimeSeriesSched_Name
          //
          if (n.name () == "SimTimeSeriesSched_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimTimeSeriesSched_Name_type > r (
              SimTimeSeriesSched_Name_traits::create (i, f, this));

            if (!this->SimTimeSeriesSched_Name_)
            {
              this->SimTimeSeriesSched_Name_.set (r);
              continue;
            }
          }

          // SimTimeSeriesSched_TimeSeriesSchedType
          //
          if (n.name () == "SimTimeSeriesSched_TimeSeriesSchedType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimTimeSeriesSched_TimeSeriesSchedType_type > r (
              SimTimeSeriesSched_TimeSeriesSchedType_traits::create (i, f, this));

            if (!this->SimTimeSeriesSched_TimeSeriesSchedType_)
            {
              this->SimTimeSeriesSched_TimeSeriesSchedType_.set (r);
              continue;
            }
          }

          // T24SchedDayAllDayRef
          //
          if (n.name () == "T24SchedDayAllDayRef" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< T24SchedDayAllDayRef_type > r (
              T24SchedDayAllDayRef_traits::create (i, f, this));

            if (!this->T24SchedDayAllDayRef_)
            {
              this->T24SchedDayAllDayRef_.set (r);
              continue;
            }
          }

          // T24SchedDayWkdaysRef
          //
          if (n.name () == "T24SchedDayWkdaysRef" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< T24SchedDayWkdaysRef_type > r (
              T24SchedDayWkdaysRef_traits::create (i, f, this));

            if (!this->T24SchedDayWkdaysRef_)
            {
              this->T24SchedDayWkdaysRef_.set (r);
              continue;
            }
          }

          // T24SchedDayWkEndsRef
          //
          if (n.name () == "T24SchedDayWkEndsRef" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< T24SchedDayWkEndsRef_type > r (
              T24SchedDayWkEndsRef_traits::create (i, f, this));

            if (!this->T24SchedDayWkEndsRef_)
            {
              this->T24SchedDayWkEndsRef_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimTimeSeriesSchedule_Week* SimTimeSeriesSchedule_Week::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimTimeSeriesSchedule_Week (*this, f, c);
      }

      SimTimeSeriesSchedule_Week& SimTimeSeriesSchedule_Week::
      operator= (const SimTimeSeriesSchedule_Week& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimTimeSeriesSchedule& > (*this) = x;
          this->SimTimeSeriesSched_Name_ = x.SimTimeSeriesSched_Name_;
          this->SimTimeSeriesSched_TimeSeriesSchedType_ = x.SimTimeSeriesSched_TimeSeriesSchedType_;
          this->T24SchedDayAllDayRef_ = x.T24SchedDayAllDayRef_;
          this->T24SchedDayWkdaysRef_ = x.T24SchedDayWkdaysRef_;
          this->T24SchedDayWkEndsRef_ = x.T24SchedDayWkEndsRef_;
        }

        return *this;
      }

      SimTimeSeriesSchedule_Week::
      ~SimTimeSeriesSchedule_Week ()
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

