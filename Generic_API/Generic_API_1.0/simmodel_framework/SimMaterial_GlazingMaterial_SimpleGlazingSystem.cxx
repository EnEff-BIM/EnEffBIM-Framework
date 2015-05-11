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

#include "SimMaterial_GlazingMaterial_SimpleGlazingSystem.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimMaterial_GlazingMaterial_SimpleGlazingSystem
      // 

      const SimMaterial_GlazingMaterial_SimpleGlazingSystem::SimMaterial_UFactor_optional& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_UFactor () const
      {
        return this->SimMaterial_UFactor_;
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::SimMaterial_UFactor_optional& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_UFactor ()
      {
        return this->SimMaterial_UFactor_;
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_UFactor (const SimMaterial_UFactor_type& x)
      {
        this->SimMaterial_UFactor_.set (x);
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_UFactor (const SimMaterial_UFactor_optional& x)
      {
        this->SimMaterial_UFactor_ = x;
      }

      const SimMaterial_GlazingMaterial_SimpleGlazingSystem::SimMaterial_SolarHeatGainCoef_optional& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_SolarHeatGainCoef () const
      {
        return this->SimMaterial_SolarHeatGainCoef_;
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::SimMaterial_SolarHeatGainCoef_optional& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_SolarHeatGainCoef ()
      {
        return this->SimMaterial_SolarHeatGainCoef_;
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_SolarHeatGainCoef (const SimMaterial_SolarHeatGainCoef_type& x)
      {
        this->SimMaterial_SolarHeatGainCoef_.set (x);
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_SolarHeatGainCoef (const SimMaterial_SolarHeatGainCoef_optional& x)
      {
        this->SimMaterial_SolarHeatGainCoef_ = x;
      }

      const SimMaterial_GlazingMaterial_SimpleGlazingSystem::SimMaterial_VisTrans_optional& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_VisTrans () const
      {
        return this->SimMaterial_VisTrans_;
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::SimMaterial_VisTrans_optional& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_VisTrans ()
      {
        return this->SimMaterial_VisTrans_;
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_VisTrans (const SimMaterial_VisTrans_type& x)
      {
        this->SimMaterial_VisTrans_.set (x);
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_VisTrans (const SimMaterial_VisTrans_optional& x)
      {
        this->SimMaterial_VisTrans_ = x;
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
      // SimMaterial_GlazingMaterial_SimpleGlazingSystem
      //

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_GlazingMaterial_SimpleGlazingSystem (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial (RefId),
        SimMaterial_UFactor_ (this),
        SimMaterial_SolarHeatGainCoef_ (this),
        SimMaterial_VisTrans_ (this)
      {
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_GlazingMaterial_SimpleGlazingSystem (const SimMaterial_GlazingMaterial_SimpleGlazingSystem& x,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial (x, f, c),
        SimMaterial_UFactor_ (x.SimMaterial_UFactor_, f, this),
        SimMaterial_SolarHeatGainCoef_ (x.SimMaterial_SolarHeatGainCoef_, f, this),
        SimMaterial_VisTrans_ (x.SimMaterial_VisTrans_, f, this)
      {
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      SimMaterial_GlazingMaterial_SimpleGlazingSystem (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial (e, f | ::xml_schema::flags::base, c),
        SimMaterial_UFactor_ (this),
        SimMaterial_SolarHeatGainCoef_ (this),
        SimMaterial_VisTrans_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimMaterial_UFactor
          //
          if (n.name () == "SimMaterial_UFactor" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_UFactor_)
            {
              this->SimMaterial_UFactor_.set (SimMaterial_UFactor_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_SolarHeatGainCoef
          //
          if (n.name () == "SimMaterial_SolarHeatGainCoef" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_SolarHeatGainCoef_)
            {
              this->SimMaterial_SolarHeatGainCoef_.set (SimMaterial_SolarHeatGainCoef_traits::create (i, f, this));
              continue;
            }
          }

          // SimMaterial_VisTrans
          //
          if (n.name () == "SimMaterial_VisTrans" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimMaterial_VisTrans_)
            {
              this->SimMaterial_VisTrans_.set (SimMaterial_VisTrans_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem* SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimMaterial_GlazingMaterial_SimpleGlazingSystem (*this, f, c);
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem& SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      operator= (const SimMaterial_GlazingMaterial_SimpleGlazingSystem& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimMaterial_GlazingMaterial& > (*this) = x;
          this->SimMaterial_UFactor_ = x.SimMaterial_UFactor_;
          this->SimMaterial_SolarHeatGainCoef_ = x.SimMaterial_SolarHeatGainCoef_;
          this->SimMaterial_VisTrans_ = x.SimMaterial_VisTrans_;
        }

        return *this;
      }

      SimMaterial_GlazingMaterial_SimpleGlazingSystem::
      ~SimMaterial_GlazingMaterial_SimpleGlazingSystem ()
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

