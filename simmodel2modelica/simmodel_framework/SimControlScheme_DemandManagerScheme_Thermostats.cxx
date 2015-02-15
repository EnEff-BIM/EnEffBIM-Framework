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

#include "SimControlScheme_DemandManagerScheme_Thermostats.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_DemandManagerScheme_Thermostats
      // 

      const SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_ResetCntl_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetCntl () const
      {
        return this->SimCntrlSchm_ResetCntl_;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_ResetCntl_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetCntl ()
      {
        return this->SimCntrlSchm_ResetCntl_;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetCntl (const SimCntrlSchm_ResetCntl_type& x)
      {
        this->SimCntrlSchm_ResetCntl_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetCntl (const SimCntrlSchm_ResetCntl_optional& x)
      {
        this->SimCntrlSchm_ResetCntl_ = x;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetCntl (::std::auto_ptr< SimCntrlSchm_ResetCntl_type > x)
      {
        this->SimCntrlSchm_ResetCntl_.set (x);
      }

      const SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_MinResetDuration_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MinResetDuration () const
      {
        return this->SimCntrlSchm_MinResetDuration_;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_MinResetDuration_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MinResetDuration ()
      {
        return this->SimCntrlSchm_MinResetDuration_;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MinResetDuration (const SimCntrlSchm_MinResetDuration_type& x)
      {
        this->SimCntrlSchm_MinResetDuration_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MinResetDuration (const SimCntrlSchm_MinResetDuration_optional& x)
      {
        this->SimCntrlSchm_MinResetDuration_ = x;
      }

      const SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_MaxHeatingSetpointReset_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxHeatingSetpointReset () const
      {
        return this->SimCntrlSchm_MaxHeatingSetpointReset_;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_MaxHeatingSetpointReset_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxHeatingSetpointReset ()
      {
        return this->SimCntrlSchm_MaxHeatingSetpointReset_;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxHeatingSetpointReset (const SimCntrlSchm_MaxHeatingSetpointReset_type& x)
      {
        this->SimCntrlSchm_MaxHeatingSetpointReset_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxHeatingSetpointReset (const SimCntrlSchm_MaxHeatingSetpointReset_optional& x)
      {
        this->SimCntrlSchm_MaxHeatingSetpointReset_ = x;
      }

      const SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_MaxCoolingSetpointReset_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxCoolingSetpointReset () const
      {
        return this->SimCntrlSchm_MaxCoolingSetpointReset_;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_MaxCoolingSetpointReset_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxCoolingSetpointReset ()
      {
        return this->SimCntrlSchm_MaxCoolingSetpointReset_;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxCoolingSetpointReset (const SimCntrlSchm_MaxCoolingSetpointReset_type& x)
      {
        this->SimCntrlSchm_MaxCoolingSetpointReset_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_MaxCoolingSetpointReset (const SimCntrlSchm_MaxCoolingSetpointReset_optional& x)
      {
        this->SimCntrlSchm_MaxCoolingSetpointReset_ = x;
      }

      const SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_ResetStepChange_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetStepChange () const
      {
        return this->SimCntrlSchm_ResetStepChange_;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_ResetStepChange_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetStepChange ()
      {
        return this->SimCntrlSchm_ResetStepChange_;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetStepChange (const SimCntrlSchm_ResetStepChange_type& x)
      {
        this->SimCntrlSchm_ResetStepChange_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ResetStepChange (const SimCntrlSchm_ResetStepChange_optional& x)
      {
        this->SimCntrlSchm_ResetStepChange_ = x;
      }

      const SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_ThermostatName_1_10_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ThermostatName_1_10 () const
      {
        return this->SimCntrlSchm_ThermostatName_1_10_;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::SimCntrlSchm_ThermostatName_1_10_optional& SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ThermostatName_1_10 ()
      {
        return this->SimCntrlSchm_ThermostatName_1_10_;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ThermostatName_1_10 (const SimCntrlSchm_ThermostatName_1_10_type& x)
      {
        this->SimCntrlSchm_ThermostatName_1_10_.set (x);
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ThermostatName_1_10 (const SimCntrlSchm_ThermostatName_1_10_optional& x)
      {
        this->SimCntrlSchm_ThermostatName_1_10_ = x;
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      SimCntrlSchm_ThermostatName_1_10 (::std::auto_ptr< SimCntrlSchm_ThermostatName_1_10_type > x)
      {
        this->SimCntrlSchm_ThermostatName_1_10_.set (x);
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
      // SimControlScheme_DemandManagerScheme_Thermostats
      //

      SimControlScheme_DemandManagerScheme_Thermostats::
      SimControlScheme_DemandManagerScheme_Thermostats (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme (RefId),
        SimCntrlSchm_ResetCntl_ (this),
        SimCntrlSchm_MinResetDuration_ (this),
        SimCntrlSchm_MaxHeatingSetpointReset_ (this),
        SimCntrlSchm_MaxCoolingSetpointReset_ (this),
        SimCntrlSchm_ResetStepChange_ (this),
        SimCntrlSchm_ThermostatName_1_10_ (this)
      {
      }

      SimControlScheme_DemandManagerScheme_Thermostats::
      SimControlScheme_DemandManagerScheme_Thermostats (const SimControlScheme_DemandManagerScheme_Thermostats& x,
                                                        ::xml_schema::flags f,
                                                        ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme (x, f, c),
        SimCntrlSchm_ResetCntl_ (x.SimCntrlSchm_ResetCntl_, f, this),
        SimCntrlSchm_MinResetDuration_ (x.SimCntrlSchm_MinResetDuration_, f, this),
        SimCntrlSchm_MaxHeatingSetpointReset_ (x.SimCntrlSchm_MaxHeatingSetpointReset_, f, this),
        SimCntrlSchm_MaxCoolingSetpointReset_ (x.SimCntrlSchm_MaxCoolingSetpointReset_, f, this),
        SimCntrlSchm_ResetStepChange_ (x.SimCntrlSchm_ResetStepChange_, f, this),
        SimCntrlSchm_ThermostatName_1_10_ (x.SimCntrlSchm_ThermostatName_1_10_, f, this)
      {
      }

      SimControlScheme_DemandManagerScheme_Thermostats::
      SimControlScheme_DemandManagerScheme_Thermostats (const ::xercesc::DOMElement& e,
                                                        ::xml_schema::flags f,
                                                        ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_ResetCntl_ (this),
        SimCntrlSchm_MinResetDuration_ (this),
        SimCntrlSchm_MaxHeatingSetpointReset_ (this),
        SimCntrlSchm_MaxCoolingSetpointReset_ (this),
        SimCntrlSchm_ResetStepChange_ (this),
        SimCntrlSchm_ThermostatName_1_10_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_DemandManagerScheme_Thermostats::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_ResetCntl
          //
          if (n.name () == "SimCntrlSchm_ResetCntl" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_ResetCntl_type > r (
              SimCntrlSchm_ResetCntl_traits::create (i, f, this));

            if (!this->SimCntrlSchm_ResetCntl_)
            {
              this->SimCntrlSchm_ResetCntl_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_MinResetDuration
          //
          if (n.name () == "SimCntrlSchm_MinResetDuration" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MinResetDuration_)
            {
              this->SimCntrlSchm_MinResetDuration_.set (SimCntrlSchm_MinResetDuration_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_MaxHeatingSetpointReset
          //
          if (n.name () == "SimCntrlSchm_MaxHeatingSetpointReset" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MaxHeatingSetpointReset_)
            {
              this->SimCntrlSchm_MaxHeatingSetpointReset_.set (SimCntrlSchm_MaxHeatingSetpointReset_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_MaxCoolingSetpointReset
          //
          if (n.name () == "SimCntrlSchm_MaxCoolingSetpointReset" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MaxCoolingSetpointReset_)
            {
              this->SimCntrlSchm_MaxCoolingSetpointReset_.set (SimCntrlSchm_MaxCoolingSetpointReset_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_ResetStepChange
          //
          if (n.name () == "SimCntrlSchm_ResetStepChange" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_ResetStepChange_)
            {
              this->SimCntrlSchm_ResetStepChange_.set (SimCntrlSchm_ResetStepChange_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_ThermostatName_1_10
          //
          if (n.name () == "SimCntrlSchm_ThermostatName_1_10" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_ThermostatName_1_10_type > r (
              SimCntrlSchm_ThermostatName_1_10_traits::create (i, f, this));

            if (!this->SimCntrlSchm_ThermostatName_1_10_)
            {
              this->SimCntrlSchm_ThermostatName_1_10_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_DemandManagerScheme_Thermostats* SimControlScheme_DemandManagerScheme_Thermostats::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_DemandManagerScheme_Thermostats (*this, f, c);
      }

      SimControlScheme_DemandManagerScheme_Thermostats& SimControlScheme_DemandManagerScheme_Thermostats::
      operator= (const SimControlScheme_DemandManagerScheme_Thermostats& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimControlScheme_DemandManagerScheme& > (*this) = x;
          this->SimCntrlSchm_ResetCntl_ = x.SimCntrlSchm_ResetCntl_;
          this->SimCntrlSchm_MinResetDuration_ = x.SimCntrlSchm_MinResetDuration_;
          this->SimCntrlSchm_MaxHeatingSetpointReset_ = x.SimCntrlSchm_MaxHeatingSetpointReset_;
          this->SimCntrlSchm_MaxCoolingSetpointReset_ = x.SimCntrlSchm_MaxCoolingSetpointReset_;
          this->SimCntrlSchm_ResetStepChange_ = x.SimCntrlSchm_ResetStepChange_;
          this->SimCntrlSchm_ThermostatName_1_10_ = x.SimCntrlSchm_ThermostatName_1_10_;
        }

        return *this;
      }

      SimControlScheme_DemandManagerScheme_Thermostats::
      ~SimControlScheme_DemandManagerScheme_Thermostats ()
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

