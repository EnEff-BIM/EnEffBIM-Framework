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

#include "SimMaterial_GlazingMaterial_Gap.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimMaterial_GlazingMaterial_Gap
      // 

      const SimMaterial_GlazingMaterial_Gap::SimMaterial_Thick_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Thick () const
      {
        return this->SimMaterial_Thick_;
      }

      SimMaterial_GlazingMaterial_Gap::SimMaterial_Thick_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Thick ()
      {
        return this->SimMaterial_Thick_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Thick (const SimMaterial_Thick_type& x)
      {
        this->SimMaterial_Thick_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Thick (const SimMaterial_Thick_optional& x)
      {
        this->SimMaterial_Thick_ = x;
      }

      const SimMaterial_GlazingMaterial_Gap::SimMaterial_GasOrGasMixture_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GasOrGasMixture () const
      {
        return this->SimMaterial_GasOrGasMixture_;
      }

      SimMaterial_GlazingMaterial_Gap::SimMaterial_GasOrGasMixture_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GasOrGasMixture ()
      {
        return this->SimMaterial_GasOrGasMixture_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GasOrGasMixture (const SimMaterial_GasOrGasMixture_type& x)
      {
        this->SimMaterial_GasOrGasMixture_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GasOrGasMixture (const SimMaterial_GasOrGasMixture_optional& x)
      {
        this->SimMaterial_GasOrGasMixture_ = x;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GasOrGasMixture (::std::auto_ptr< SimMaterial_GasOrGasMixture_type > x)
      {
        this->SimMaterial_GasOrGasMixture_.set (x);
      }

      const SimMaterial_GlazingMaterial_Gap::SimMaterial_Pressure_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Pressure () const
      {
        return this->SimMaterial_Pressure_;
      }

      SimMaterial_GlazingMaterial_Gap::SimMaterial_Pressure_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Pressure ()
      {
        return this->SimMaterial_Pressure_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Pressure (const SimMaterial_Pressure_type& x)
      {
        this->SimMaterial_Pressure_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_Pressure (const SimMaterial_Pressure_optional& x)
      {
        this->SimMaterial_Pressure_ = x;
      }

      const SimMaterial_GlazingMaterial_Gap::SimMaterial_DeflectionState_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_DeflectionState () const
      {
        return this->SimMaterial_DeflectionState_;
      }

      SimMaterial_GlazingMaterial_Gap::SimMaterial_DeflectionState_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_DeflectionState ()
      {
        return this->SimMaterial_DeflectionState_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_DeflectionState (const SimMaterial_DeflectionState_type& x)
      {
        this->SimMaterial_DeflectionState_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_DeflectionState (const SimMaterial_DeflectionState_optional& x)
      {
        this->SimMaterial_DeflectionState_ = x;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_DeflectionState (::std::auto_ptr< SimMaterial_DeflectionState_type > x)
      {
        this->SimMaterial_DeflectionState_.set (x);
      }

      const SimMaterial_GlazingMaterial_Gap::SimMaterial_SupportPillar_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_SupportPillar () const
      {
        return this->SimMaterial_SupportPillar_;
      }

      SimMaterial_GlazingMaterial_Gap::SimMaterial_SupportPillar_optional& SimMaterial_GlazingMaterial_Gap::
      SimMaterial_SupportPillar ()
      {
        return this->SimMaterial_SupportPillar_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_SupportPillar (const SimMaterial_SupportPillar_type& x)
      {
        this->SimMaterial_SupportPillar_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_SupportPillar (const SimMaterial_SupportPillar_optional& x)
      {
        this->SimMaterial_SupportPillar_ = x;
      }

      void SimMaterial_GlazingMaterial_Gap::
      SimMaterial_SupportPillar (::std::auto_ptr< SimMaterial_SupportPillar_type > x)
      {
        this->SimMaterial_SupportPillar_.set (x);
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_SupportPillar_Name_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Name () const
      {
        return this->WindowGap_SupportPillar_Name_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_SupportPillar_Name_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Name ()
      {
        return this->WindowGap_SupportPillar_Name_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Name (const WindowGap_SupportPillar_Name_type& x)
      {
        this->WindowGap_SupportPillar_Name_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Name (const WindowGap_SupportPillar_Name_optional& x)
      {
        this->WindowGap_SupportPillar_Name_ = x;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Name (::std::auto_ptr< WindowGap_SupportPillar_Name_type > x)
      {
        this->WindowGap_SupportPillar_Name_.set (x);
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_SupportPillar_Spacing_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Spacing () const
      {
        return this->WindowGap_SupportPillar_Spacing_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_SupportPillar_Spacing_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Spacing ()
      {
        return this->WindowGap_SupportPillar_Spacing_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Spacing (const WindowGap_SupportPillar_Spacing_type& x)
      {
        this->WindowGap_SupportPillar_Spacing_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Spacing (const WindowGap_SupportPillar_Spacing_optional& x)
      {
        this->WindowGap_SupportPillar_Spacing_ = x;
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_SupportPillar_Radius_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Radius () const
      {
        return this->WindowGap_SupportPillar_Radius_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_SupportPillar_Radius_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Radius ()
      {
        return this->WindowGap_SupportPillar_Radius_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Radius (const WindowGap_SupportPillar_Radius_type& x)
      {
        this->WindowGap_SupportPillar_Radius_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_SupportPillar_Radius (const WindowGap_SupportPillar_Radius_optional& x)
      {
        this->WindowGap_SupportPillar_Radius_ = x;
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_Name_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_Name () const
      {
        return this->WindowGap_DeflectionState_Name_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_Name_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_Name ()
      {
        return this->WindowGap_DeflectionState_Name_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_Name (const WindowGap_DeflectionState_Name_type& x)
      {
        this->WindowGap_DeflectionState_Name_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_Name (const WindowGap_DeflectionState_Name_optional& x)
      {
        this->WindowGap_DeflectionState_Name_ = x;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_Name (::std::auto_ptr< WindowGap_DeflectionState_Name_type > x)
      {
        this->WindowGap_DeflectionState_Name_.set (x);
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_DeflectedThickness_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_DeflectedThickness () const
      {
        return this->WindowGap_DeflectionState_DeflectedThickness_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_DeflectedThickness_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_DeflectedThickness ()
      {
        return this->WindowGap_DeflectionState_DeflectedThickness_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_DeflectedThickness (const WindowGap_DeflectionState_DeflectedThickness_type& x)
      {
        this->WindowGap_DeflectionState_DeflectedThickness_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_DeflectedThickness (const WindowGap_DeflectionState_DeflectedThickness_optional& x)
      {
        this->WindowGap_DeflectionState_DeflectedThickness_ = x;
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_InitialTemperature_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialTemperature () const
      {
        return this->WindowGap_DeflectionState_InitialTemperature_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_InitialTemperature_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialTemperature ()
      {
        return this->WindowGap_DeflectionState_InitialTemperature_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialTemperature (const WindowGap_DeflectionState_InitialTemperature_type& x)
      {
        this->WindowGap_DeflectionState_InitialTemperature_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialTemperature (const WindowGap_DeflectionState_InitialTemperature_optional& x)
      {
        this->WindowGap_DeflectionState_InitialTemperature_ = x;
      }

      const SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_InitialPressure_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialPressure () const
      {
        return this->WindowGap_DeflectionState_InitialPressure_;
      }

      SimMaterial_GlazingMaterial_Gap::WindowGap_DeflectionState_InitialPressure_optional& SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialPressure ()
      {
        return this->WindowGap_DeflectionState_InitialPressure_;
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialPressure (const WindowGap_DeflectionState_InitialPressure_type& x)
      {
        this->WindowGap_DeflectionState_InitialPressure_.set (x);
      }

      void SimMaterial_GlazingMaterial_Gap::
      WindowGap_DeflectionState_InitialPressure (const WindowGap_DeflectionState_InitialPressure_optional& x)
      {
        this->WindowGap_DeflectionState_InitialPressure_ = x;
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
      // SimMaterial_GlazingMaterial_Gap
      //

      SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GlazingMaterial_Gap ()
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (),
        SimMaterial_Thick_ (this),
        SimMaterial_GasOrGasMixture_ (this),
        SimMaterial_Pressure_ (this),
        SimMaterial_DeflectionState_ (this),
        SimMaterial_SupportPillar_ (this),
        WindowGap_SupportPillar_Name_ (this),
        WindowGap_SupportPillar_Spacing_ (this),
        WindowGap_SupportPillar_Radius_ (this),
        WindowGap_DeflectionState_Name_ (this),
        WindowGap_DeflectionState_DeflectedThickness_ (this),
        WindowGap_DeflectionState_InitialTemperature_ (this),
        WindowGap_DeflectionState_InitialPressure_ (this)
      {
      }

      SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GlazingMaterial_Gap (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (RefId),
        SimMaterial_Thick_ (this),
        SimMaterial_GasOrGasMixture_ (this),
        SimMaterial_Pressure_ (this),
        SimMaterial_DeflectionState_ (this),
        SimMaterial_SupportPillar_ (this),
        WindowGap_SupportPillar_Name_ (this),
        WindowGap_SupportPillar_Spacing_ (this),
        WindowGap_SupportPillar_Radius_ (this),
        WindowGap_DeflectionState_Name_ (this),
        WindowGap_DeflectionState_DeflectedThickness_ (this),
        WindowGap_DeflectionState_InitialTemperature_ (this),
        WindowGap_DeflectionState_InitialPressure_ (this)
      {
      }

      SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GlazingMaterial_Gap (const SimMaterial_GlazingMaterial_Gap& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (x, f, c),
        SimMaterial_Thick_ (x.SimMaterial_Thick_, f, this),
        SimMaterial_GasOrGasMixture_ (x.SimMaterial_GasOrGasMixture_, f, this),
        SimMaterial_Pressure_ (x.SimMaterial_Pressure_, f, this),
        SimMaterial_DeflectionState_ (x.SimMaterial_DeflectionState_, f, this),
        SimMaterial_SupportPillar_ (x.SimMaterial_SupportPillar_, f, this),
        WindowGap_SupportPillar_Name_ (x.WindowGap_SupportPillar_Name_, f, this),
        WindowGap_SupportPillar_Spacing_ (x.WindowGap_SupportPillar_Spacing_, f, this),
        WindowGap_SupportPillar_Radius_ (x.WindowGap_SupportPillar_Radius_, f, this),
        WindowGap_DeflectionState_Name_ (x.WindowGap_DeflectionState_Name_, f, this),
        WindowGap_DeflectionState_DeflectedThickness_ (x.WindowGap_DeflectionState_DeflectedThickness_, f, this),
        WindowGap_DeflectionState_InitialTemperature_ (x.WindowGap_DeflectionState_InitialTemperature_, f, this),
        WindowGap_DeflectionState_InitialPressure_ (x.WindowGap_DeflectionState_InitialPressure_, f, this)
      {
      }

      SimMaterial_GlazingMaterial_Gap::
      SimMaterial_GlazingMaterial_Gap (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial (e, f | ::xml_schema::flags::base, c),
        SimMaterial_Thick_ (this),
        SimMaterial_GasOrGasMixture_ (this),
        SimMaterial_Pressure_ (this),
        SimMaterial_DeflectionState_ (this),
        SimMaterial_SupportPillar_ (this),
        WindowGap_SupportPillar_Name_ (this),
        WindowGap_SupportPillar_Spacing_ (this),
        WindowGap_SupportPillar_Radius_ (this),
        WindowGap_DeflectionState_Name_ (this),
        WindowGap_DeflectionState_DeflectedThickness_ (this),
        WindowGap_DeflectionState_InitialTemperature_ (this),
        WindowGap_DeflectionState_InitialPressure_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterial_GlazingMaterial_Gap::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMaterial_Thick
          //
          if (n.name () == "SimMaterial_Thick" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimMaterial_Thick_)
            {
              this->SimMaterial_Thick_.set (SimMaterial_Thick_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_GasOrGasMixture
          //
          if (n.name () == "SimMaterial_GasOrGasMixture" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_GasOrGasMixture_type > r (
              SimMaterial_GasOrGasMixture_traits::create (i, f, this));

            if (!this->SimMaterial_GasOrGasMixture_)
            {
              this->SimMaterial_GasOrGasMixture_.set (r);
              continue;
            }
          }

          // SimMaterial_Pressure
          //
          if (n.name () == "SimMaterial_Pressure" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimMaterial_Pressure_)
            {
              this->SimMaterial_Pressure_.set (SimMaterial_Pressure_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_DeflectionState
          //
          if (n.name () == "SimMaterial_DeflectionState" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_DeflectionState_type > r (
              SimMaterial_DeflectionState_traits::create (i, f, this));

            if (!this->SimMaterial_DeflectionState_)
            {
              this->SimMaterial_DeflectionState_.set (r);
              continue;
            }
          }

          // SimMaterial_SupportPillar
          //
          if (n.name () == "SimMaterial_SupportPillar" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_SupportPillar_type > r (
              SimMaterial_SupportPillar_traits::create (i, f, this));

            if (!this->SimMaterial_SupportPillar_)
            {
              this->SimMaterial_SupportPillar_.set (r);
              continue;
            }
          }

          // WindowGap_SupportPillar_Name
          //
          if (n.name () == "WindowGap_SupportPillar_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WindowGap_SupportPillar_Name_type > r (
              WindowGap_SupportPillar_Name_traits::create (i, f, this));

            if (!this->WindowGap_SupportPillar_Name_)
            {
              this->WindowGap_SupportPillar_Name_.set (r);
              continue;
            }
          }

          // WindowGap_SupportPillar_Spacing
          //
          if (n.name () == "WindowGap_SupportPillar_Spacing" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WindowGap_SupportPillar_Spacing_)
            {
              this->WindowGap_SupportPillar_Spacing_.set (WindowGap_SupportPillar_Spacing_traits::create (i, f, this));
              continue;
            }
          }

          // WindowGap_SupportPillar_Radius
          //
          if (n.name () == "WindowGap_SupportPillar_Radius" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WindowGap_SupportPillar_Radius_)
            {
              this->WindowGap_SupportPillar_Radius_.set (WindowGap_SupportPillar_Radius_traits::create (i, f, this));
              continue;
            }
          }

          // WindowGap_DeflectionState_Name
          //
          if (n.name () == "WindowGap_DeflectionState_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WindowGap_DeflectionState_Name_type > r (
              WindowGap_DeflectionState_Name_traits::create (i, f, this));

            if (!this->WindowGap_DeflectionState_Name_)
            {
              this->WindowGap_DeflectionState_Name_.set (r);
              continue;
            }
          }

          // WindowGap_DeflectionState_DeflectedThickness
          //
          if (n.name () == "WindowGap_DeflectionState_DeflectedThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WindowGap_DeflectionState_DeflectedThickness_)
            {
              this->WindowGap_DeflectionState_DeflectedThickness_.set (WindowGap_DeflectionState_DeflectedThickness_traits::create (i, f, this));
              continue;
            }
          }

          // WindowGap_DeflectionState_InitialTemperature
          //
          if (n.name () == "WindowGap_DeflectionState_InitialTemperature" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WindowGap_DeflectionState_InitialTemperature_)
            {
              this->WindowGap_DeflectionState_InitialTemperature_.set (WindowGap_DeflectionState_InitialTemperature_traits::create (i, f, this));
              continue;
            }
          }

          // WindowGap_DeflectionState_InitialPressure
          //
          if (n.name () == "WindowGap_DeflectionState_InitialPressure" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WindowGap_DeflectionState_InitialPressure_)
            {
              this->WindowGap_DeflectionState_InitialPressure_.set (WindowGap_DeflectionState_InitialPressure_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimMaterial_GlazingMaterial_Gap* SimMaterial_GlazingMaterial_Gap::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterial_GlazingMaterial_Gap (*this, f, c);
      }

      SimMaterial_GlazingMaterial_Gap& SimMaterial_GlazingMaterial_Gap::
      operator= (const SimMaterial_GlazingMaterial_Gap& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimMaterial_GlazingMaterial& > (*this) = x;
          this->SimMaterial_Thick_ = x.SimMaterial_Thick_;
          this->SimMaterial_GasOrGasMixture_ = x.SimMaterial_GasOrGasMixture_;
          this->SimMaterial_Pressure_ = x.SimMaterial_Pressure_;
          this->SimMaterial_DeflectionState_ = x.SimMaterial_DeflectionState_;
          this->SimMaterial_SupportPillar_ = x.SimMaterial_SupportPillar_;
          this->WindowGap_SupportPillar_Name_ = x.WindowGap_SupportPillar_Name_;
          this->WindowGap_SupportPillar_Spacing_ = x.WindowGap_SupportPillar_Spacing_;
          this->WindowGap_SupportPillar_Radius_ = x.WindowGap_SupportPillar_Radius_;
          this->WindowGap_DeflectionState_Name_ = x.WindowGap_DeflectionState_Name_;
          this->WindowGap_DeflectionState_DeflectedThickness_ = x.WindowGap_DeflectionState_DeflectedThickness_;
          this->WindowGap_DeflectionState_InitialTemperature_ = x.WindowGap_DeflectionState_InitialTemperature_;
          this->WindowGap_DeflectionState_InitialPressure_ = x.WindowGap_DeflectionState_InitialPressure_;
        }

        return *this;
      }

      SimMaterial_GlazingMaterial_Gap::
      ~SimMaterial_GlazingMaterial_Gap ()
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
