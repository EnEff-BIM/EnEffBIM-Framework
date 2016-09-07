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

#include "SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem.hxx"

#include "simflowplant_outdrairsyscollectinletnode_1_5.hxx"

#include "simflowplant_outdrairsyscollectoutletnode_1_5.hxx"

#include "simflowplant_outdrairsysmixedairnode_1_5.hxx"

#include "simflowplant_outdrairsyszonenode_1_5.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem
      // 

      const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_SolarCollectName_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarCollectName () const
      {
        return this->SimFlowPlant_SolarCollectName_;
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_SolarCollectName_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarCollectName ()
      {
        return this->SimFlowPlant_SolarCollectName_;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarCollectName (const SimFlowPlant_SolarCollectName_type& x)
      {
        this->SimFlowPlant_SolarCollectName_.set (x);
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarCollectName (const SimFlowPlant_SolarCollectName_optional& x)
      {
        this->SimFlowPlant_SolarCollectName_ = x;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarCollectName (::std::auto_ptr< SimFlowPlant_SolarCollectName_type > x)
      {
        this->SimFlowPlant_SolarCollectName_.set (x);
      }

      const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysCollectInletNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectInletNode_1_5 () const
      {
        return this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_;
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysCollectInletNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectInletNode_1_5 ()
      {
        return this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectInletNode_1_5 (const SimFlowPlant_OutdrAirSysCollectInletNode_1_5_type& x)
      {
        this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_.set (x);
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectInletNode_1_5 (const SimFlowPlant_OutdrAirSysCollectInletNode_1_5_optional& x)
      {
        this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_ = x;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectInletNode_1_5 (::std::auto_ptr< SimFlowPlant_OutdrAirSysCollectInletNode_1_5_type > x)
      {
        this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_.set (x);
      }

      const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectOutletNode_1_5 () const
      {
        return this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_;
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectOutletNode_1_5 ()
      {
        return this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectOutletNode_1_5 (const SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_type& x)
      {
        this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_.set (x);
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectOutletNode_1_5 (const SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_optional& x)
      {
        this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_ = x;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysCollectOutletNode_1_5 (::std::auto_ptr< SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_type > x)
      {
        this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_.set (x);
      }

      const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysMixedAirNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysMixedAirNode_1_5 () const
      {
        return this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_;
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysMixedAirNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysMixedAirNode_1_5 ()
      {
        return this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysMixedAirNode_1_5 (const SimFlowPlant_OutdrAirSysMixedAirNode_1_5_type& x)
      {
        this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_.set (x);
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysMixedAirNode_1_5 (const SimFlowPlant_OutdrAirSysMixedAirNode_1_5_optional& x)
      {
        this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_ = x;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysMixedAirNode_1_5 (::std::auto_ptr< SimFlowPlant_OutdrAirSysMixedAirNode_1_5_type > x)
      {
        this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_.set (x);
      }

      const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysZoneNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysZoneNode_1_5 () const
      {
        return this->SimFlowPlant_OutdrAirSysZoneNode_1_5_;
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::SimFlowPlant_OutdrAirSysZoneNode_1_5_optional& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysZoneNode_1_5 ()
      {
        return this->SimFlowPlant_OutdrAirSysZoneNode_1_5_;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysZoneNode_1_5 (const SimFlowPlant_OutdrAirSysZoneNode_1_5_type& x)
      {
        this->SimFlowPlant_OutdrAirSysZoneNode_1_5_.set (x);
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysZoneNode_1_5 (const SimFlowPlant_OutdrAirSysZoneNode_1_5_optional& x)
      {
        this->SimFlowPlant_OutdrAirSysZoneNode_1_5_ = x;
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_OutdrAirSysZoneNode_1_5 (::std::auto_ptr< SimFlowPlant_OutdrAirSysZoneNode_1_5_type > x)
      {
        this->SimFlowPlant_OutdrAirSysZoneNode_1_5_.set (x);
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
      // SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem
      //

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem ()
      : ::schema::simxml::MepModel::SimFlowPlant_SolarDevice (),
        SimFlowPlant_SolarCollectName_ (this),
        SimFlowPlant_OutdrAirSysCollectInletNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysMixedAirNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysZoneNode_1_5_ (this)
      {
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowPlant_SolarDevice (RefId),
        SimFlowPlant_SolarCollectName_ (this),
        SimFlowPlant_OutdrAirSysCollectInletNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysMixedAirNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysZoneNode_1_5_ (this)
      {
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem (const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem& x,
                                                           ::xml_schema::flags f,
                                                           ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_SolarDevice (x, f, c),
        SimFlowPlant_SolarCollectName_ (x.SimFlowPlant_SolarCollectName_, f, this),
        SimFlowPlant_OutdrAirSysCollectInletNode_1_5_ (x.SimFlowPlant_OutdrAirSysCollectInletNode_1_5_, f, this),
        SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_ (x.SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_, f, this),
        SimFlowPlant_OutdrAirSysMixedAirNode_1_5_ (x.SimFlowPlant_OutdrAirSysMixedAirNode_1_5_, f, this),
        SimFlowPlant_OutdrAirSysZoneNode_1_5_ (x.SimFlowPlant_OutdrAirSysZoneNode_1_5_, f, this)
      {
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem (const ::xercesc::DOMElement& e,
                                                           ::xml_schema::flags f,
                                                           ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_SolarDevice (e, f | ::xml_schema::flags::base, c),
        SimFlowPlant_SolarCollectName_ (this),
        SimFlowPlant_OutdrAirSysCollectInletNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysMixedAirNode_1_5_ (this),
        SimFlowPlant_OutdrAirSysZoneNode_1_5_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowPlant_SolarDevice::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowPlant_SolarCollectName
          //
          if (n.name () == "SimFlowPlant_SolarCollectName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_SolarCollectName_type > r (
              SimFlowPlant_SolarCollectName_traits::create (i, f, this));

            if (!this->SimFlowPlant_SolarCollectName_)
            {
              this->SimFlowPlant_SolarCollectName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_OutdrAirSysCollectInletNode_1_5
          //
          if (n.name () == "SimFlowPlant_OutdrAirSysCollectInletNode_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_OutdrAirSysCollectInletNode_1_5_type > r (
              SimFlowPlant_OutdrAirSysCollectInletNode_1_5_traits::create (i, f, this));

            if (!this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_)
            {
              this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_.set (r);
              continue;
            }
          }

          // SimFlowPlant_OutdrAirSysCollectOutletNode_1_5
          //
          if (n.name () == "SimFlowPlant_OutdrAirSysCollectOutletNode_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_type > r (
              SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_traits::create (i, f, this));

            if (!this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_)
            {
              this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_.set (r);
              continue;
            }
          }

          // SimFlowPlant_OutdrAirSysMixedAirNode_1_5
          //
          if (n.name () == "SimFlowPlant_OutdrAirSysMixedAirNode_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_OutdrAirSysMixedAirNode_1_5_type > r (
              SimFlowPlant_OutdrAirSysMixedAirNode_1_5_traits::create (i, f, this));

            if (!this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_)
            {
              this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_.set (r);
              continue;
            }
          }

          // SimFlowPlant_OutdrAirSysZoneNode_1_5
          //
          if (n.name () == "SimFlowPlant_OutdrAirSysZoneNode_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_OutdrAirSysZoneNode_1_5_type > r (
              SimFlowPlant_OutdrAirSysZoneNode_1_5_traits::create (i, f, this));

            if (!this->SimFlowPlant_OutdrAirSysZoneNode_1_5_)
            {
              this->SimFlowPlant_OutdrAirSysZoneNode_1_5_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem* SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem (*this, f, c);
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem& SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      operator= (const SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowPlant_SolarDevice& > (*this) = x;
          this->SimFlowPlant_SolarCollectName_ = x.SimFlowPlant_SolarCollectName_;
          this->SimFlowPlant_OutdrAirSysCollectInletNode_1_5_ = x.SimFlowPlant_OutdrAirSysCollectInletNode_1_5_;
          this->SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_ = x.SimFlowPlant_OutdrAirSysCollectOutletNode_1_5_;
          this->SimFlowPlant_OutdrAirSysMixedAirNode_1_5_ = x.SimFlowPlant_OutdrAirSysMixedAirNode_1_5_;
          this->SimFlowPlant_OutdrAirSysZoneNode_1_5_ = x.SimFlowPlant_OutdrAirSysZoneNode_1_5_;
        }

        return *this;
      }

      SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem::
      ~SimFlowPlant_SolarDevice_SolarThermalAirMultiSystem ()
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

