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

#include "SimMaterial_GlazingMaterial_Screen.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimMaterial_GlazingMaterial_Screen
      // 

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_Cond_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_Cond () const
      {
        return this->SimMaterial_Cond_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_Cond_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_Cond ()
      {
        return this->SimMaterial_Cond_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_Cond (const SimMaterial_Cond_type& x)
      {
        this->SimMaterial_Cond_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_Cond (const SimMaterial_Cond_optional& x)
      {
        this->SimMaterial_Cond_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_TopOpngMult_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_TopOpngMult () const
      {
        return this->SimMaterial_TopOpngMult_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_TopOpngMult_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_TopOpngMult ()
      {
        return this->SimMaterial_TopOpngMult_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_TopOpngMult (const SimMaterial_TopOpngMult_type& x)
      {
        this->SimMaterial_TopOpngMult_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_TopOpngMult (const SimMaterial_TopOpngMult_optional& x)
      {
        this->SimMaterial_TopOpngMult_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_BotOpngMult_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_BotOpngMult () const
      {
        return this->SimMaterial_BotOpngMult_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_BotOpngMult_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_BotOpngMult ()
      {
        return this->SimMaterial_BotOpngMult_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_BotOpngMult (const SimMaterial_BotOpngMult_type& x)
      {
        this->SimMaterial_BotOpngMult_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_BotOpngMult (const SimMaterial_BotOpngMult_optional& x)
      {
        this->SimMaterial_BotOpngMult_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_ReflectedBeamTransAccountingMeth_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ReflectedBeamTransAccountingMeth () const
      {
        return this->SimMaterial_ReflectedBeamTransAccountingMeth_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_ReflectedBeamTransAccountingMeth_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ReflectedBeamTransAccountingMeth ()
      {
        return this->SimMaterial_ReflectedBeamTransAccountingMeth_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ReflectedBeamTransAccountingMeth (const SimMaterial_ReflectedBeamTransAccountingMeth_type& x)
      {
        this->SimMaterial_ReflectedBeamTransAccountingMeth_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ReflectedBeamTransAccountingMeth (const SimMaterial_ReflectedBeamTransAccountingMeth_optional& x)
      {
        this->SimMaterial_ReflectedBeamTransAccountingMeth_ = x;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ReflectedBeamTransAccountingMeth (::std::auto_ptr< SimMaterial_ReflectedBeamTransAccountingMeth_type > x)
      {
        this->SimMaterial_ReflectedBeamTransAccountingMeth_.set (x);
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_DiffuseSolarReflect_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseSolarReflect () const
      {
        return this->SimMaterial_DiffuseSolarReflect_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_DiffuseSolarReflect_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseSolarReflect ()
      {
        return this->SimMaterial_DiffuseSolarReflect_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseSolarReflect (const SimMaterial_DiffuseSolarReflect_type& x)
      {
        this->SimMaterial_DiffuseSolarReflect_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseSolarReflect (const SimMaterial_DiffuseSolarReflect_optional& x)
      {
        this->SimMaterial_DiffuseSolarReflect_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_DiffuseVisReflect_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseVisReflect () const
      {
        return this->SimMaterial_DiffuseVisReflect_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_DiffuseVisReflect_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseVisReflect ()
      {
        return this->SimMaterial_DiffuseVisReflect_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseVisReflect (const SimMaterial_DiffuseVisReflect_type& x)
      {
        this->SimMaterial_DiffuseVisReflect_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_DiffuseVisReflect (const SimMaterial_DiffuseVisReflect_optional& x)
      {
        this->SimMaterial_DiffuseVisReflect_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_ThermalHemisphEmis_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ThermalHemisphEmis () const
      {
        return this->SimMaterial_ThermalHemisphEmis_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_ThermalHemisphEmis_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ThermalHemisphEmis ()
      {
        return this->SimMaterial_ThermalHemisphEmis_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ThermalHemisphEmis (const SimMaterial_ThermalHemisphEmis_type& x)
      {
        this->SimMaterial_ThermalHemisphEmis_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ThermalHemisphEmis (const SimMaterial_ThermalHemisphEmis_optional& x)
      {
        this->SimMaterial_ThermalHemisphEmis_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_ScreenMatlSpacing_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlSpacing () const
      {
        return this->SimMaterial_ScreenMatlSpacing_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_ScreenMatlSpacing_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlSpacing ()
      {
        return this->SimMaterial_ScreenMatlSpacing_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlSpacing (const SimMaterial_ScreenMatlSpacing_type& x)
      {
        this->SimMaterial_ScreenMatlSpacing_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlSpacing (const SimMaterial_ScreenMatlSpacing_optional& x)
      {
        this->SimMaterial_ScreenMatlSpacing_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_ScreenMatlDiam_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlDiam () const
      {
        return this->SimMaterial_ScreenMatlDiam_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_ScreenMatlDiam_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlDiam ()
      {
        return this->SimMaterial_ScreenMatlDiam_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlDiam (const SimMaterial_ScreenMatlDiam_type& x)
      {
        this->SimMaterial_ScreenMatlDiam_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenMatlDiam (const SimMaterial_ScreenMatlDiam_optional& x)
      {
        this->SimMaterial_ScreenMatlDiam_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_ScreenToGlassDist_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenToGlassDist () const
      {
        return this->SimMaterial_ScreenToGlassDist_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_ScreenToGlassDist_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenToGlassDist ()
      {
        return this->SimMaterial_ScreenToGlassDist_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenToGlassDist (const SimMaterial_ScreenToGlassDist_type& x)
      {
        this->SimMaterial_ScreenToGlassDist_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_ScreenToGlassDist (const SimMaterial_ScreenToGlassDist_optional& x)
      {
        this->SimMaterial_ScreenToGlassDist_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_LeftSideOpngMult_1_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_LeftSideOpngMult_1 () const
      {
        return this->SimMaterial_LeftSideOpngMult_1_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_LeftSideOpngMult_1_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_LeftSideOpngMult_1 ()
      {
        return this->SimMaterial_LeftSideOpngMult_1_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_LeftSideOpngMult_1 (const SimMaterial_LeftSideOpngMult_1_type& x)
      {
        this->SimMaterial_LeftSideOpngMult_1_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_LeftSideOpngMult_1 (const SimMaterial_LeftSideOpngMult_1_optional& x)
      {
        this->SimMaterial_LeftSideOpngMult_1_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_RightSideOpngMult_1_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_RightSideOpngMult_1 () const
      {
        return this->SimMaterial_RightSideOpngMult_1_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_RightSideOpngMult_1_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_RightSideOpngMult_1 ()
      {
        return this->SimMaterial_RightSideOpngMult_1_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_RightSideOpngMult_1 (const SimMaterial_RightSideOpngMult_1_type& x)
      {
        this->SimMaterial_RightSideOpngMult_1_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_RightSideOpngMult_1 (const SimMaterial_RightSideOpngMult_1_optional& x)
      {
        this->SimMaterial_RightSideOpngMult_1_ = x;
      }

      const SimMaterial_GlazingMaterial_Screen::SimMaterial_AngleResForScreenTransOutputMap_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_AngleResForScreenTransOutputMap () const
      {
        return this->SimMaterial_AngleResForScreenTransOutputMap_;
      }

      SimMaterial_GlazingMaterial_Screen::SimMaterial_AngleResForScreenTransOutputMap_optional& SimMaterial_GlazingMaterial_Screen::
      SimMaterial_AngleResForScreenTransOutputMap ()
      {
        return this->SimMaterial_AngleResForScreenTransOutputMap_;
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_AngleResForScreenTransOutputMap (const SimMaterial_AngleResForScreenTransOutputMap_type& x)
      {
        this->SimMaterial_AngleResForScreenTransOutputMap_.set (x);
      }

      void SimMaterial_GlazingMaterial_Screen::
      SimMaterial_AngleResForScreenTransOutputMap (const SimMaterial_AngleResForScreenTransOutputMap_optional& x)
      {
        this->SimMaterial_AngleResForScreenTransOutputMap_ = x;
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
      // SimMaterial_GlazingMaterial_Screen
      //

      SimMaterial_GlazingMaterial_Screen::
      SimMaterial_GlazingMaterial_Screen (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial (RefId),
        SimMaterial_Cond_ (this),
        SimMaterial_TopOpngMult_ (this),
        SimMaterial_BotOpngMult_ (this),
        SimMaterial_ReflectedBeamTransAccountingMeth_ (this),
        SimMaterial_DiffuseSolarReflect_ (this),
        SimMaterial_DiffuseVisReflect_ (this),
        SimMaterial_ThermalHemisphEmis_ (this),
        SimMaterial_ScreenMatlSpacing_ (this),
        SimMaterial_ScreenMatlDiam_ (this),
        SimMaterial_ScreenToGlassDist_ (this),
        SimMaterial_LeftSideOpngMult_1_ (this),
        SimMaterial_RightSideOpngMult_1_ (this),
        SimMaterial_AngleResForScreenTransOutputMap_ (this)
      {
      }

      SimMaterial_GlazingMaterial_Screen::
      SimMaterial_GlazingMaterial_Screen (const SimMaterial_GlazingMaterial_Screen& x,
                                          ::xml_schema::flags f,
                                          ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial (x, f, c),
        SimMaterial_Cond_ (x.SimMaterial_Cond_, f, this),
        SimMaterial_TopOpngMult_ (x.SimMaterial_TopOpngMult_, f, this),
        SimMaterial_BotOpngMult_ (x.SimMaterial_BotOpngMult_, f, this),
        SimMaterial_ReflectedBeamTransAccountingMeth_ (x.SimMaterial_ReflectedBeamTransAccountingMeth_, f, this),
        SimMaterial_DiffuseSolarReflect_ (x.SimMaterial_DiffuseSolarReflect_, f, this),
        SimMaterial_DiffuseVisReflect_ (x.SimMaterial_DiffuseVisReflect_, f, this),
        SimMaterial_ThermalHemisphEmis_ (x.SimMaterial_ThermalHemisphEmis_, f, this),
        SimMaterial_ScreenMatlSpacing_ (x.SimMaterial_ScreenMatlSpacing_, f, this),
        SimMaterial_ScreenMatlDiam_ (x.SimMaterial_ScreenMatlDiam_, f, this),
        SimMaterial_ScreenToGlassDist_ (x.SimMaterial_ScreenToGlassDist_, f, this),
        SimMaterial_LeftSideOpngMult_1_ (x.SimMaterial_LeftSideOpngMult_1_, f, this),
        SimMaterial_RightSideOpngMult_1_ (x.SimMaterial_RightSideOpngMult_1_, f, this),
        SimMaterial_AngleResForScreenTransOutputMap_ (x.SimMaterial_AngleResForScreenTransOutputMap_, f, this)
      {
      }

      SimMaterial_GlazingMaterial_Screen::
      SimMaterial_GlazingMaterial_Screen (const ::xercesc::DOMElement& e,
                                          ::xml_schema::flags f,
                                          ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial (e, f | ::xml_schema::flags::base, c),
        SimMaterial_Cond_ (this),
        SimMaterial_TopOpngMult_ (this),
        SimMaterial_BotOpngMult_ (this),
        SimMaterial_ReflectedBeamTransAccountingMeth_ (this),
        SimMaterial_DiffuseSolarReflect_ (this),
        SimMaterial_DiffuseVisReflect_ (this),
        SimMaterial_ThermalHemisphEmis_ (this),
        SimMaterial_ScreenMatlSpacing_ (this),
        SimMaterial_ScreenMatlDiam_ (this),
        SimMaterial_ScreenToGlassDist_ (this),
        SimMaterial_LeftSideOpngMult_1_ (this),
        SimMaterial_RightSideOpngMult_1_ (this),
        SimMaterial_AngleResForScreenTransOutputMap_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterial_GlazingMaterial_Screen::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMaterial_Cond
          //
          if (n.name () == "SimMaterial_Cond" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_Cond_)
            {
              this->SimMaterial_Cond_.set (SimMaterial_Cond_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_TopOpngMult
          //
          if (n.name () == "SimMaterial_TopOpngMult" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_TopOpngMult_)
            {
              this->SimMaterial_TopOpngMult_.set (SimMaterial_TopOpngMult_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_BotOpngMult
          //
          if (n.name () == "SimMaterial_BotOpngMult" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_BotOpngMult_)
            {
              this->SimMaterial_BotOpngMult_.set (SimMaterial_BotOpngMult_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ReflectedBeamTransAccountingMeth
          //
          if (n.name () == "SimMaterial_ReflectedBeamTransAccountingMeth" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimMaterial_ReflectedBeamTransAccountingMeth_type > r (
              SimMaterial_ReflectedBeamTransAccountingMeth_traits::create (i, f, this));

            if (!this->SimMaterial_ReflectedBeamTransAccountingMeth_)
            {
              this->SimMaterial_ReflectedBeamTransAccountingMeth_.set (r);
              continue;
            }
          }

          // SimMaterial_DiffuseSolarReflect
          //
          if (n.name () == "SimMaterial_DiffuseSolarReflect" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_DiffuseSolarReflect_)
            {
              this->SimMaterial_DiffuseSolarReflect_.set (SimMaterial_DiffuseSolarReflect_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_DiffuseVisReflect
          //
          if (n.name () == "SimMaterial_DiffuseVisReflect" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_DiffuseVisReflect_)
            {
              this->SimMaterial_DiffuseVisReflect_.set (SimMaterial_DiffuseVisReflect_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ThermalHemisphEmis
          //
          if (n.name () == "SimMaterial_ThermalHemisphEmis" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_ThermalHemisphEmis_)
            {
              this->SimMaterial_ThermalHemisphEmis_.set (SimMaterial_ThermalHemisphEmis_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ScreenMatlSpacing
          //
          if (n.name () == "SimMaterial_ScreenMatlSpacing" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_ScreenMatlSpacing_)
            {
              this->SimMaterial_ScreenMatlSpacing_.set (SimMaterial_ScreenMatlSpacing_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ScreenMatlDiam
          //
          if (n.name () == "SimMaterial_ScreenMatlDiam" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_ScreenMatlDiam_)
            {
              this->SimMaterial_ScreenMatlDiam_.set (SimMaterial_ScreenMatlDiam_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_ScreenToGlassDist
          //
          if (n.name () == "SimMaterial_ScreenToGlassDist" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_ScreenToGlassDist_)
            {
              this->SimMaterial_ScreenToGlassDist_.set (SimMaterial_ScreenToGlassDist_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_LeftSideOpngMult_1
          //
          if (n.name () == "SimMaterial_LeftSideOpngMult_1" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_LeftSideOpngMult_1_)
            {
              this->SimMaterial_LeftSideOpngMult_1_.set (SimMaterial_LeftSideOpngMult_1_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_RightSideOpngMult_1
          //
          if (n.name () == "SimMaterial_RightSideOpngMult_1" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_RightSideOpngMult_1_)
            {
              this->SimMaterial_RightSideOpngMult_1_.set (SimMaterial_RightSideOpngMult_1_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_AngleResForScreenTransOutputMap
          //
          if (n.name () == "SimMaterial_AngleResForScreenTransOutputMap" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_AngleResForScreenTransOutputMap_)
            {
              this->SimMaterial_AngleResForScreenTransOutputMap_.set (SimMaterial_AngleResForScreenTransOutputMap_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimMaterial_GlazingMaterial_Screen* SimMaterial_GlazingMaterial_Screen::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterial_GlazingMaterial_Screen (*this, f, c);
      }

      SimMaterial_GlazingMaterial_Screen& SimMaterial_GlazingMaterial_Screen::
      operator= (const SimMaterial_GlazingMaterial_Screen& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial& > (*this) = x;
          this->SimMaterial_Cond_ = x.SimMaterial_Cond_;
          this->SimMaterial_TopOpngMult_ = x.SimMaterial_TopOpngMult_;
          this->SimMaterial_BotOpngMult_ = x.SimMaterial_BotOpngMult_;
          this->SimMaterial_ReflectedBeamTransAccountingMeth_ = x.SimMaterial_ReflectedBeamTransAccountingMeth_;
          this->SimMaterial_DiffuseSolarReflect_ = x.SimMaterial_DiffuseSolarReflect_;
          this->SimMaterial_DiffuseVisReflect_ = x.SimMaterial_DiffuseVisReflect_;
          this->SimMaterial_ThermalHemisphEmis_ = x.SimMaterial_ThermalHemisphEmis_;
          this->SimMaterial_ScreenMatlSpacing_ = x.SimMaterial_ScreenMatlSpacing_;
          this->SimMaterial_ScreenMatlDiam_ = x.SimMaterial_ScreenMatlDiam_;
          this->SimMaterial_ScreenToGlassDist_ = x.SimMaterial_ScreenToGlassDist_;
          this->SimMaterial_LeftSideOpngMult_1_ = x.SimMaterial_LeftSideOpngMult_1_;
          this->SimMaterial_RightSideOpngMult_1_ = x.SimMaterial_RightSideOpngMult_1_;
          this->SimMaterial_AngleResForScreenTransOutputMap_ = x.SimMaterial_AngleResForScreenTransOutputMap_;
        }

        return *this;
      }

      SimMaterial_GlazingMaterial_Screen::
      ~SimMaterial_GlazingMaterial_Screen ()
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

