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

#include "SimController_MechanicalVentilation.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimController_MechanicalVentilation
      // 

      const SimController_MechanicalVentilation::SimCntrl_Name_optional& SimController_MechanicalVentilation::
      SimCntrl_Name () const
      {
        return this->SimCntrl_Name_;
      }

      SimController_MechanicalVentilation::SimCntrl_Name_optional& SimController_MechanicalVentilation::
      SimCntrl_Name ()
      {
        return this->SimCntrl_Name_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_Name (const SimCntrl_Name_type& x)
      {
        this->SimCntrl_Name_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_Name (const SimCntrl_Name_optional& x)
      {
        this->SimCntrl_Name_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_Name (::std::auto_ptr< SimCntrl_Name_type > x)
      {
        this->SimCntrl_Name_.set (x);
      }

      const SimController_MechanicalVentilation::SimCntrl_AvailSchedName_optional& SimController_MechanicalVentilation::
      SimCntrl_AvailSchedName () const
      {
        return this->SimCntrl_AvailSchedName_;
      }

      SimController_MechanicalVentilation::SimCntrl_AvailSchedName_optional& SimController_MechanicalVentilation::
      SimCntrl_AvailSchedName ()
      {
        return this->SimCntrl_AvailSchedName_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_AvailSchedName (const SimCntrl_AvailSchedName_type& x)
      {
        this->SimCntrl_AvailSchedName_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_AvailSchedName (const SimCntrl_AvailSchedName_optional& x)
      {
        this->SimCntrl_AvailSchedName_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_AvailSchedName (::std::auto_ptr< SimCntrl_AvailSchedName_type > x)
      {
        this->SimCntrl_AvailSchedName_.set (x);
      }

      const SimController_MechanicalVentilation::SimCntrl_DemandCtrlledVentilation_optional& SimController_MechanicalVentilation::
      SimCntrl_DemandCtrlledVentilation () const
      {
        return this->SimCntrl_DemandCtrlledVentilation_;
      }

      SimController_MechanicalVentilation::SimCntrl_DemandCtrlledVentilation_optional& SimController_MechanicalVentilation::
      SimCntrl_DemandCtrlledVentilation ()
      {
        return this->SimCntrl_DemandCtrlledVentilation_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DemandCtrlledVentilation (const SimCntrl_DemandCtrlledVentilation_type& x)
      {
        this->SimCntrl_DemandCtrlledVentilation_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DemandCtrlledVentilation (const SimCntrl_DemandCtrlledVentilation_optional& x)
      {
        this->SimCntrl_DemandCtrlledVentilation_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DemandCtrlledVentilation (::std::auto_ptr< SimCntrl_DemandCtrlledVentilation_type > x)
      {
        this->SimCntrl_DemandCtrlledVentilation_.set (x);
      }

      const SimController_MechanicalVentilation::SimCntrl_SystemOutdrAirMethod_optional& SimController_MechanicalVentilation::
      SimCntrl_SystemOutdrAirMethod () const
      {
        return this->SimCntrl_SystemOutdrAirMethod_;
      }

      SimController_MechanicalVentilation::SimCntrl_SystemOutdrAirMethod_optional& SimController_MechanicalVentilation::
      SimCntrl_SystemOutdrAirMethod ()
      {
        return this->SimCntrl_SystemOutdrAirMethod_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_SystemOutdrAirMethod (const SimCntrl_SystemOutdrAirMethod_type& x)
      {
        this->SimCntrl_SystemOutdrAirMethod_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_SystemOutdrAirMethod (const SimCntrl_SystemOutdrAirMethod_optional& x)
      {
        this->SimCntrl_SystemOutdrAirMethod_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_SystemOutdrAirMethod (::std::auto_ptr< SimCntrl_SystemOutdrAirMethod_type > x)
      {
        this->SimCntrl_SystemOutdrAirMethod_.set (x);
      }

      const SimController_MechanicalVentilation::SimCntrl_ZoneMaxOutdoorAirFraction_optional& SimController_MechanicalVentilation::
      SimCntrl_ZoneMaxOutdoorAirFraction () const
      {
        return this->SimCntrl_ZoneMaxOutdoorAirFraction_;
      }

      SimController_MechanicalVentilation::SimCntrl_ZoneMaxOutdoorAirFraction_optional& SimController_MechanicalVentilation::
      SimCntrl_ZoneMaxOutdoorAirFraction ()
      {
        return this->SimCntrl_ZoneMaxOutdoorAirFraction_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_ZoneMaxOutdoorAirFraction (const SimCntrl_ZoneMaxOutdoorAirFraction_type& x)
      {
        this->SimCntrl_ZoneMaxOutdoorAirFraction_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_ZoneMaxOutdoorAirFraction (const SimCntrl_ZoneMaxOutdoorAirFraction_optional& x)
      {
        this->SimCntrl_ZoneMaxOutdoorAirFraction_ = x;
      }

      const SimController_MechanicalVentilation::SimCntrl_Zone_1_50_Name_optional& SimController_MechanicalVentilation::
      SimCntrl_Zone_1_50_Name () const
      {
        return this->SimCntrl_Zone_1_50_Name_;
      }

      SimController_MechanicalVentilation::SimCntrl_Zone_1_50_Name_optional& SimController_MechanicalVentilation::
      SimCntrl_Zone_1_50_Name ()
      {
        return this->SimCntrl_Zone_1_50_Name_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_Zone_1_50_Name (const SimCntrl_Zone_1_50_Name_type& x)
      {
        this->SimCntrl_Zone_1_50_Name_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_Zone_1_50_Name (const SimCntrl_Zone_1_50_Name_optional& x)
      {
        this->SimCntrl_Zone_1_50_Name_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_Zone_1_50_Name (::std::auto_ptr< SimCntrl_Zone_1_50_Name_type > x)
      {
        this->SimCntrl_Zone_1_50_Name_.set (x);
      }

      const SimController_MechanicalVentilation::SimCntrl_DesignSpecOutdrAirObjName_1_50_optional& SimController_MechanicalVentilation::
      SimCntrl_DesignSpecOutdrAirObjName_1_50 () const
      {
        return this->SimCntrl_DesignSpecOutdrAirObjName_1_50_;
      }

      SimController_MechanicalVentilation::SimCntrl_DesignSpecOutdrAirObjName_1_50_optional& SimController_MechanicalVentilation::
      SimCntrl_DesignSpecOutdrAirObjName_1_50 ()
      {
        return this->SimCntrl_DesignSpecOutdrAirObjName_1_50_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DesignSpecOutdrAirObjName_1_50 (const SimCntrl_DesignSpecOutdrAirObjName_1_50_type& x)
      {
        this->SimCntrl_DesignSpecOutdrAirObjName_1_50_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DesignSpecOutdrAirObjName_1_50 (const SimCntrl_DesignSpecOutdrAirObjName_1_50_optional& x)
      {
        this->SimCntrl_DesignSpecOutdrAirObjName_1_50_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DesignSpecOutdrAirObjName_1_50 (::std::auto_ptr< SimCntrl_DesignSpecOutdrAirObjName_1_50_type > x)
      {
        this->SimCntrl_DesignSpecOutdrAirObjName_1_50_.set (x);
      }

      const SimController_MechanicalVentilation::SimCntrl_DesignSpecZoneAirDistribObjName_1_50_optional& SimController_MechanicalVentilation::
      SimCntrl_DesignSpecZoneAirDistribObjName_1_50 () const
      {
        return this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_;
      }

      SimController_MechanicalVentilation::SimCntrl_DesignSpecZoneAirDistribObjName_1_50_optional& SimController_MechanicalVentilation::
      SimCntrl_DesignSpecZoneAirDistribObjName_1_50 ()
      {
        return this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DesignSpecZoneAirDistribObjName_1_50 (const SimCntrl_DesignSpecZoneAirDistribObjName_1_50_type& x)
      {
        this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_.set (x);
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DesignSpecZoneAirDistribObjName_1_50 (const SimCntrl_DesignSpecZoneAirDistribObjName_1_50_optional& x)
      {
        this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_ = x;
      }

      void SimController_MechanicalVentilation::
      SimCntrl_DesignSpecZoneAirDistribObjName_1_50 (::std::auto_ptr< SimCntrl_DesignSpecZoneAirDistribObjName_1_50_type > x)
      {
        this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_.set (x);
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
    namespace MepModel
    {
      // SimController_MechanicalVentilation
      //

      SimController_MechanicalVentilation::
      SimController_MechanicalVentilation ()
      : ::schema::simxml::MepModel::SimController (),
        SimCntrl_Name_ (this),
        SimCntrl_AvailSchedName_ (this),
        SimCntrl_DemandCtrlledVentilation_ (this),
        SimCntrl_SystemOutdrAirMethod_ (this),
        SimCntrl_ZoneMaxOutdoorAirFraction_ (this),
        SimCntrl_Zone_1_50_Name_ (this),
        SimCntrl_DesignSpecOutdrAirObjName_1_50_ (this),
        SimCntrl_DesignSpecZoneAirDistribObjName_1_50_ (this)
      {
      }

      SimController_MechanicalVentilation::
      SimController_MechanicalVentilation (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimController (RefId),
        SimCntrl_Name_ (this),
        SimCntrl_AvailSchedName_ (this),
        SimCntrl_DemandCtrlledVentilation_ (this),
        SimCntrl_SystemOutdrAirMethod_ (this),
        SimCntrl_ZoneMaxOutdoorAirFraction_ (this),
        SimCntrl_Zone_1_50_Name_ (this),
        SimCntrl_DesignSpecOutdrAirObjName_1_50_ (this),
        SimCntrl_DesignSpecZoneAirDistribObjName_1_50_ (this)
      {
      }

      SimController_MechanicalVentilation::
      SimController_MechanicalVentilation (const SimController_MechanicalVentilation& x,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimController (x, f, c),
        SimCntrl_Name_ (x.SimCntrl_Name_, f, this),
        SimCntrl_AvailSchedName_ (x.SimCntrl_AvailSchedName_, f, this),
        SimCntrl_DemandCtrlledVentilation_ (x.SimCntrl_DemandCtrlledVentilation_, f, this),
        SimCntrl_SystemOutdrAirMethod_ (x.SimCntrl_SystemOutdrAirMethod_, f, this),
        SimCntrl_ZoneMaxOutdoorAirFraction_ (x.SimCntrl_ZoneMaxOutdoorAirFraction_, f, this),
        SimCntrl_Zone_1_50_Name_ (x.SimCntrl_Zone_1_50_Name_, f, this),
        SimCntrl_DesignSpecOutdrAirObjName_1_50_ (x.SimCntrl_DesignSpecOutdrAirObjName_1_50_, f, this),
        SimCntrl_DesignSpecZoneAirDistribObjName_1_50_ (x.SimCntrl_DesignSpecZoneAirDistribObjName_1_50_, f, this)
      {
      }

      SimController_MechanicalVentilation::
      SimController_MechanicalVentilation (const ::xercesc::DOMElement& e,
                                           ::xml_schema::flags f,
                                           ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimController (e, f | ::xml_schema::flags::base, c),
        SimCntrl_Name_ (this),
        SimCntrl_AvailSchedName_ (this),
        SimCntrl_DemandCtrlledVentilation_ (this),
        SimCntrl_SystemOutdrAirMethod_ (this),
        SimCntrl_ZoneMaxOutdoorAirFraction_ (this),
        SimCntrl_Zone_1_50_Name_ (this),
        SimCntrl_DesignSpecOutdrAirObjName_1_50_ (this),
        SimCntrl_DesignSpecZoneAirDistribObjName_1_50_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimController_MechanicalVentilation::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimController::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrl_Name
          //
          if (n.name () == "SimCntrl_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_Name_type > r (
              SimCntrl_Name_traits::create (i, f, this));

            if (!this->SimCntrl_Name_)
            {
              this->SimCntrl_Name_.set (r);
              continue;
            }
          }

          // SimCntrl_AvailSchedName
          //
          if (n.name () == "SimCntrl_AvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_AvailSchedName_type > r (
              SimCntrl_AvailSchedName_traits::create (i, f, this));

            if (!this->SimCntrl_AvailSchedName_)
            {
              this->SimCntrl_AvailSchedName_.set (r);
              continue;
            }
          }

          // SimCntrl_DemandCtrlledVentilation
          //
          if (n.name () == "SimCntrl_DemandCtrlledVentilation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_DemandCtrlledVentilation_type > r (
              SimCntrl_DemandCtrlledVentilation_traits::create (i, f, this));

            if (!this->SimCntrl_DemandCtrlledVentilation_)
            {
              this->SimCntrl_DemandCtrlledVentilation_.set (r);
              continue;
            }
          }

          // SimCntrl_SystemOutdrAirMethod
          //
          if (n.name () == "SimCntrl_SystemOutdrAirMethod" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_SystemOutdrAirMethod_type > r (
              SimCntrl_SystemOutdrAirMethod_traits::create (i, f, this));

            if (!this->SimCntrl_SystemOutdrAirMethod_)
            {
              this->SimCntrl_SystemOutdrAirMethod_.set (r);
              continue;
            }
          }

          // SimCntrl_ZoneMaxOutdoorAirFraction
          //
          if (n.name () == "SimCntrl_ZoneMaxOutdoorAirFraction" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimCntrl_ZoneMaxOutdoorAirFraction_)
            {
              this->SimCntrl_ZoneMaxOutdoorAirFraction_.set (SimCntrl_ZoneMaxOutdoorAirFraction_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrl_Zone_1_50_Name
          //
          if (n.name () == "SimCntrl_Zone_1_50_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_Zone_1_50_Name_type > r (
              SimCntrl_Zone_1_50_Name_traits::create (i, f, this));

            if (!this->SimCntrl_Zone_1_50_Name_)
            {
              this->SimCntrl_Zone_1_50_Name_.set (r);
              continue;
            }
          }

          // SimCntrl_DesignSpecOutdrAirObjName_1_50
          //
          if (n.name () == "SimCntrl_DesignSpecOutdrAirObjName_1_50" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_DesignSpecOutdrAirObjName_1_50_type > r (
              SimCntrl_DesignSpecOutdrAirObjName_1_50_traits::create (i, f, this));

            if (!this->SimCntrl_DesignSpecOutdrAirObjName_1_50_)
            {
              this->SimCntrl_DesignSpecOutdrAirObjName_1_50_.set (r);
              continue;
            }
          }

          // SimCntrl_DesignSpecZoneAirDistribObjName_1_50
          //
          if (n.name () == "SimCntrl_DesignSpecZoneAirDistribObjName_1_50" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimCntrl_DesignSpecZoneAirDistribObjName_1_50_type > r (
              SimCntrl_DesignSpecZoneAirDistribObjName_1_50_traits::create (i, f, this));

            if (!this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_)
            {
              this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimController_MechanicalVentilation* SimController_MechanicalVentilation::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimController_MechanicalVentilation (*this, f, c);
      }

      SimController_MechanicalVentilation& SimController_MechanicalVentilation::
      operator= (const SimController_MechanicalVentilation& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimController& > (*this) = x;
          this->SimCntrl_Name_ = x.SimCntrl_Name_;
          this->SimCntrl_AvailSchedName_ = x.SimCntrl_AvailSchedName_;
          this->SimCntrl_DemandCtrlledVentilation_ = x.SimCntrl_DemandCtrlledVentilation_;
          this->SimCntrl_SystemOutdrAirMethod_ = x.SimCntrl_SystemOutdrAirMethod_;
          this->SimCntrl_ZoneMaxOutdoorAirFraction_ = x.SimCntrl_ZoneMaxOutdoorAirFraction_;
          this->SimCntrl_Zone_1_50_Name_ = x.SimCntrl_Zone_1_50_Name_;
          this->SimCntrl_DesignSpecOutdrAirObjName_1_50_ = x.SimCntrl_DesignSpecOutdrAirObjName_1_50_;
          this->SimCntrl_DesignSpecZoneAirDistribObjName_1_50_ = x.SimCntrl_DesignSpecZoneAirDistribObjName_1_50_;
        }

        return *this;
      }

      SimController_MechanicalVentilation::
      ~SimController_MechanicalVentilation ()
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
    namespace MepModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
