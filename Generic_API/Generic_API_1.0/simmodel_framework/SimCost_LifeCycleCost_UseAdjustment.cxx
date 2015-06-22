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

#include "SimCost_LifeCycleCost_UseAdjustment.hxx"

#include "doublelist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimCost_LifeCycleCost_UseAdjustment
      // 

      const SimCost_LifeCycleCost_UseAdjustment::SimCost_Resource_optional& SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Resource () const
      {
        return this->SimCost_Resource_;
      }

      SimCost_LifeCycleCost_UseAdjustment::SimCost_Resource_optional& SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Resource ()
      {
        return this->SimCost_Resource_;
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Resource (const SimCost_Resource_type& x)
      {
        this->SimCost_Resource_.set (x);
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Resource (const SimCost_Resource_optional& x)
      {
        this->SimCost_Resource_ = x;
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Resource (::std::auto_ptr< SimCost_Resource_type > x)
      {
        this->SimCost_Resource_.set (x);
      }

      const SimCost_LifeCycleCost_UseAdjustment::SimCost_Year_1_30_Mult_optional& SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Year_1_30_Mult () const
      {
        return this->SimCost_Year_1_30_Mult_;
      }

      SimCost_LifeCycleCost_UseAdjustment::SimCost_Year_1_30_Mult_optional& SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Year_1_30_Mult ()
      {
        return this->SimCost_Year_1_30_Mult_;
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Year_1_30_Mult (const SimCost_Year_1_30_Mult_type& x)
      {
        this->SimCost_Year_1_30_Mult_.set (x);
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Year_1_30_Mult (const SimCost_Year_1_30_Mult_optional& x)
      {
        this->SimCost_Year_1_30_Mult_ = x;
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      SimCost_Year_1_30_Mult (::std::auto_ptr< SimCost_Year_1_30_Mult_type > x)
      {
        this->SimCost_Year_1_30_Mult_.set (x);
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
      // SimCost_LifeCycleCost_UseAdjustment
      //

      SimCost_LifeCycleCost_UseAdjustment::
      SimCost_LifeCycleCost_UseAdjustment (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimCost_LifeCycleCost (RefId),
        SimCost_Resource_ (this),
        SimCost_Year_1_30_Mult_ (this)
      {
      }

      SimCost_LifeCycleCost_UseAdjustment::
      SimCost_LifeCycleCost_UseAdjustment (const SimCost_LifeCycleCost_UseAdjustment& x,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimCost_LifeCycleCost (x, f, c),
        SimCost_Resource_ (x.SimCost_Resource_, f, this),
        SimCost_Year_1_30_Mult_ (x.SimCost_Year_1_30_Mult_, f, this)
      {
      }

      SimCost_LifeCycleCost_UseAdjustment::
      SimCost_LifeCycleCost_UseAdjustment (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimCost_LifeCycleCost (e, f | ::xml_schema::flags::base, c),
        SimCost_Resource_ (this),
        SimCost_Year_1_30_Mult_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCost_LifeCycleCost_UseAdjustment::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimCost_LifeCycleCost::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCost_Resource
          //
          if (n.name () == "SimCost_Resource" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_Resource_type > r (
              SimCost_Resource_traits::create (i, f, this));

            if (!this->SimCost_Resource_)
            {
              this->SimCost_Resource_.set (r);
              continue;
            }
          }

          // SimCost_Year_1_30_Mult
          //
          if (n.name () == "SimCost_Year_1_30_Mult" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_Year_1_30_Mult_type > r (
              SimCost_Year_1_30_Mult_traits::create (i, f, this));

            if (!this->SimCost_Year_1_30_Mult_)
            {
              this->SimCost_Year_1_30_Mult_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimCost_LifeCycleCost_UseAdjustment* SimCost_LifeCycleCost_UseAdjustment::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCost_LifeCycleCost_UseAdjustment (*this, f, c);
      }

      SimCost_LifeCycleCost_UseAdjustment& SimCost_LifeCycleCost_UseAdjustment::
      operator= (const SimCost_LifeCycleCost_UseAdjustment& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimCost_LifeCycleCost& > (*this) = x;
          this->SimCost_Resource_ = x.SimCost_Resource_;
          this->SimCost_Year_1_30_Mult_ = x.SimCost_Year_1_30_Mult_;
        }

        return *this;
      }

      SimCost_LifeCycleCost_UseAdjustment::
      ~SimCost_LifeCycleCost_UseAdjustment ()
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
