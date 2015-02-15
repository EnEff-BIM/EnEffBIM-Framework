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

#include "SimControlScheme_DemandManagerScheme_ElectricEquipment.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_DemandManagerScheme_ElectricEquipment
      // 

      const SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_LimitCntl_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitCntl () const
      {
        return this->SimCntrlSchm_LimitCntl_;
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_LimitCntl_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitCntl ()
      {
        return this->SimCntrlSchm_LimitCntl_;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitCntl (const SimCntrlSchm_LimitCntl_type& x)
      {
        this->SimCntrlSchm_LimitCntl_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitCntl (const SimCntrlSchm_LimitCntl_optional& x)
      {
        this->SimCntrlSchm_LimitCntl_ = x;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitCntl (::std::auto_ptr< SimCntrlSchm_LimitCntl_type > x)
      {
        this->SimCntrlSchm_LimitCntl_.set (x);
      }

      const SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_MinLimitDuration_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MinLimitDuration () const
      {
        return this->SimCntrlSchm_MinLimitDuration_;
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_MinLimitDuration_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MinLimitDuration ()
      {
        return this->SimCntrlSchm_MinLimitDuration_;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MinLimitDuration (const SimCntrlSchm_MinLimitDuration_type& x)
      {
        this->SimCntrlSchm_MinLimitDuration_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MinLimitDuration (const SimCntrlSchm_MinLimitDuration_optional& x)
      {
        this->SimCntrlSchm_MinLimitDuration_ = x;
      }

      const SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_MaxLimitFract_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MaxLimitFract () const
      {
        return this->SimCntrlSchm_MaxLimitFract_;
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_MaxLimitFract_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MaxLimitFract ()
      {
        return this->SimCntrlSchm_MaxLimitFract_;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MaxLimitFract (const SimCntrlSchm_MaxLimitFract_type& x)
      {
        this->SimCntrlSchm_MaxLimitFract_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_MaxLimitFract (const SimCntrlSchm_MaxLimitFract_optional& x)
      {
        this->SimCntrlSchm_MaxLimitFract_ = x;
      }

      const SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_LimitStepChange_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitStepChange () const
      {
        return this->SimCntrlSchm_LimitStepChange_;
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_LimitStepChange_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitStepChange ()
      {
        return this->SimCntrlSchm_LimitStepChange_;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitStepChange (const SimCntrlSchm_LimitStepChange_type& x)
      {
        this->SimCntrlSchm_LimitStepChange_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_LimitStepChange (const SimCntrlSchm_LimitStepChange_optional& x)
      {
        this->SimCntrlSchm_LimitStepChange_ = x;
      }

      const SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_ElecEquipment_1_10_Name_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_ElecEquipment_1_10_Name () const
      {
        return this->SimCntrlSchm_ElecEquipment_1_10_Name_;
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::SimCntrlSchm_ElecEquipment_1_10_Name_optional& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_ElecEquipment_1_10_Name ()
      {
        return this->SimCntrlSchm_ElecEquipment_1_10_Name_;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_ElecEquipment_1_10_Name (const SimCntrlSchm_ElecEquipment_1_10_Name_type& x)
      {
        this->SimCntrlSchm_ElecEquipment_1_10_Name_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_ElecEquipment_1_10_Name (const SimCntrlSchm_ElecEquipment_1_10_Name_optional& x)
      {
        this->SimCntrlSchm_ElecEquipment_1_10_Name_ = x;
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimCntrlSchm_ElecEquipment_1_10_Name (::std::auto_ptr< SimCntrlSchm_ElecEquipment_1_10_Name_type > x)
      {
        this->SimCntrlSchm_ElecEquipment_1_10_Name_.set (x);
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
      // SimControlScheme_DemandManagerScheme_ElectricEquipment
      //

      SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimControlScheme_DemandManagerScheme_ElectricEquipment (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme (RefId),
        SimCntrlSchm_LimitCntl_ (this),
        SimCntrlSchm_MinLimitDuration_ (this),
        SimCntrlSchm_MaxLimitFract_ (this),
        SimCntrlSchm_LimitStepChange_ (this),
        SimCntrlSchm_ElecEquipment_1_10_Name_ (this)
      {
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimControlScheme_DemandManagerScheme_ElectricEquipment (const SimControlScheme_DemandManagerScheme_ElectricEquipment& x,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme (x, f, c),
        SimCntrlSchm_LimitCntl_ (x.SimCntrlSchm_LimitCntl_, f, this),
        SimCntrlSchm_MinLimitDuration_ (x.SimCntrlSchm_MinLimitDuration_, f, this),
        SimCntrlSchm_MaxLimitFract_ (x.SimCntrlSchm_MaxLimitFract_, f, this),
        SimCntrlSchm_LimitStepChange_ (x.SimCntrlSchm_LimitStepChange_, f, this),
        SimCntrlSchm_ElecEquipment_1_10_Name_ (x.SimCntrlSchm_ElecEquipment_1_10_Name_, f, this)
      {
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::
      SimControlScheme_DemandManagerScheme_ElectricEquipment (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_LimitCntl_ (this),
        SimCntrlSchm_MinLimitDuration_ (this),
        SimCntrlSchm_MaxLimitFract_ (this),
        SimCntrlSchm_LimitStepChange_ (this),
        SimCntrlSchm_ElecEquipment_1_10_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_DemandManagerScheme_ElectricEquipment::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_LimitCntl
          //
          if (n.name () == "SimCntrlSchm_LimitCntl" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_LimitCntl_type > r (
              SimCntrlSchm_LimitCntl_traits::create (i, f, this));

            if (!this->SimCntrlSchm_LimitCntl_)
            {
              this->SimCntrlSchm_LimitCntl_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_MinLimitDuration
          //
          if (n.name () == "SimCntrlSchm_MinLimitDuration" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MinLimitDuration_)
            {
              this->SimCntrlSchm_MinLimitDuration_.set (SimCntrlSchm_MinLimitDuration_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_MaxLimitFract
          //
          if (n.name () == "SimCntrlSchm_MaxLimitFract" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MaxLimitFract_)
            {
              this->SimCntrlSchm_MaxLimitFract_.set (SimCntrlSchm_MaxLimitFract_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_LimitStepChange
          //
          if (n.name () == "SimCntrlSchm_LimitStepChange" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_LimitStepChange_)
            {
              this->SimCntrlSchm_LimitStepChange_.set (SimCntrlSchm_LimitStepChange_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_ElecEquipment_1_10_Name
          //
          if (n.name () == "SimCntrlSchm_ElecEquipment_1_10_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_ElecEquipment_1_10_Name_type > r (
              SimCntrlSchm_ElecEquipment_1_10_Name_traits::create (i, f, this));

            if (!this->SimCntrlSchm_ElecEquipment_1_10_Name_)
            {
              this->SimCntrlSchm_ElecEquipment_1_10_Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment* SimControlScheme_DemandManagerScheme_ElectricEquipment::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_DemandManagerScheme_ElectricEquipment (*this, f, c);
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment& SimControlScheme_DemandManagerScheme_ElectricEquipment::
      operator= (const SimControlScheme_DemandManagerScheme_ElectricEquipment& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme& > (*this) = x;
          this->SimCntrlSchm_LimitCntl_ = x.SimCntrlSchm_LimitCntl_;
          this->SimCntrlSchm_MinLimitDuration_ = x.SimCntrlSchm_MinLimitDuration_;
          this->SimCntrlSchm_MaxLimitFract_ = x.SimCntrlSchm_MaxLimitFract_;
          this->SimCntrlSchm_LimitStepChange_ = x.SimCntrlSchm_LimitStepChange_;
          this->SimCntrlSchm_ElecEquipment_1_10_Name_ = x.SimCntrlSchm_ElecEquipment_1_10_Name_;
        }

        return *this;
      }

      SimControlScheme_DemandManagerScheme_ElectricEquipment::
      ~SimControlScheme_DemandManagerScheme_ElectricEquipment ()
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

