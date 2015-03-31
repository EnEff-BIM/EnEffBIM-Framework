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

#include "SimSimulationParameters_HvacDesign_WaterLoopSizing.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimSimulationParameters_HvacDesign_WaterLoopSizing
      // 

      const SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_PlantOrCondenserLoopName_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_PlantOrCondenserLoopName () const
      {
        return this->SimSimParams_PlantOrCondenserLoopName_;
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_PlantOrCondenserLoopName_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_PlantOrCondenserLoopName ()
      {
        return this->SimSimParams_PlantOrCondenserLoopName_;
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_PlantOrCondenserLoopName (const SimSimParams_PlantOrCondenserLoopName_type& x)
      {
        this->SimSimParams_PlantOrCondenserLoopName_.set (x);
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_PlantOrCondenserLoopName (const SimSimParams_PlantOrCondenserLoopName_optional& x)
      {
        this->SimSimParams_PlantOrCondenserLoopName_ = x;
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_PlantOrCondenserLoopName (::std::auto_ptr< SimSimParams_PlantOrCondenserLoopName_type > x)
      {
        this->SimSimParams_PlantOrCondenserLoopName_.set (x);
      }

      const SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_LoopType_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopType () const
      {
        return this->SimSimParams_LoopType_;
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_LoopType_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopType ()
      {
        return this->SimSimParams_LoopType_;
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopType (const SimSimParams_LoopType_type& x)
      {
        this->SimSimParams_LoopType_.set (x);
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopType (const SimSimParams_LoopType_optional& x)
      {
        this->SimSimParams_LoopType_ = x;
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopType (::std::auto_ptr< SimSimParams_LoopType_type > x)
      {
        this->SimSimParams_LoopType_.set (x);
      }

      const SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_DesignLoopExitTemp_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_DesignLoopExitTemp () const
      {
        return this->SimSimParams_DesignLoopExitTemp_;
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_DesignLoopExitTemp_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_DesignLoopExitTemp ()
      {
        return this->SimSimParams_DesignLoopExitTemp_;
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_DesignLoopExitTemp (const SimSimParams_DesignLoopExitTemp_type& x)
      {
        this->SimSimParams_DesignLoopExitTemp_.set (x);
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_DesignLoopExitTemp (const SimSimParams_DesignLoopExitTemp_optional& x)
      {
        this->SimSimParams_DesignLoopExitTemp_ = x;
      }

      const SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_LoopDesignTempDifference_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopDesignTempDifference () const
      {
        return this->SimSimParams_LoopDesignTempDifference_;
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::SimSimParams_LoopDesignTempDifference_optional& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopDesignTempDifference ()
      {
        return this->SimSimParams_LoopDesignTempDifference_;
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopDesignTempDifference (const SimSimParams_LoopDesignTempDifference_type& x)
      {
        this->SimSimParams_LoopDesignTempDifference_.set (x);
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimParams_LoopDesignTempDifference (const SimSimParams_LoopDesignTempDifference_optional& x)
      {
        this->SimSimParams_LoopDesignTempDifference_ = x;
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
      // SimSimulationParameters_HvacDesign_WaterLoopSizing
      //

      SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimulationParameters_HvacDesign_WaterLoopSizing (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimSimulationParameters_HvacDesign (RefId),
        SimSimParams_PlantOrCondenserLoopName_ (this),
        SimSimParams_LoopType_ (this),
        SimSimParams_DesignLoopExitTemp_ (this),
        SimSimParams_LoopDesignTempDifference_ (this)
      {
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimulationParameters_HvacDesign_WaterLoopSizing (const SimSimulationParameters_HvacDesign_WaterLoopSizing& x,
                                                          ::xml_schema::flags f,
                                                          ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimSimulationParameters_HvacDesign (x, f, c),
        SimSimParams_PlantOrCondenserLoopName_ (x.SimSimParams_PlantOrCondenserLoopName_, f, this),
        SimSimParams_LoopType_ (x.SimSimParams_LoopType_, f, this),
        SimSimParams_DesignLoopExitTemp_ (x.SimSimParams_DesignLoopExitTemp_, f, this),
        SimSimParams_LoopDesignTempDifference_ (x.SimSimParams_LoopDesignTempDifference_, f, this)
      {
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::
      SimSimulationParameters_HvacDesign_WaterLoopSizing (const ::xercesc::DOMElement& e,
                                                          ::xml_schema::flags f,
                                                          ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimSimulationParameters_HvacDesign (e, f | ::xml_schema::flags::base, c),
        SimSimParams_PlantOrCondenserLoopName_ (this),
        SimSimParams_LoopType_ (this),
        SimSimParams_DesignLoopExitTemp_ (this),
        SimSimParams_LoopDesignTempDifference_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSimulationParameters_HvacDesign_WaterLoopSizing::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimSimulationParameters_HvacDesign::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSimParams_PlantOrCondenserLoopName
          //
          if (n.name () == "SimSimParams_PlantOrCondenserLoopName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_PlantOrCondenserLoopName_type > r (
              SimSimParams_PlantOrCondenserLoopName_traits::create (i, f, this));

            if (!this->SimSimParams_PlantOrCondenserLoopName_)
            {
              this->SimSimParams_PlantOrCondenserLoopName_.set (r);
              continue;
            }
          }

          // SimSimParams_LoopType
          //
          if (n.name () == "SimSimParams_LoopType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_LoopType_type > r (
              SimSimParams_LoopType_traits::create (i, f, this));

            if (!this->SimSimParams_LoopType_)
            {
              this->SimSimParams_LoopType_.set (r);
              continue;
            }
          }

          // SimSimParams_DesignLoopExitTemp
          //
          if (n.name () == "SimSimParams_DesignLoopExitTemp" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimSimParams_DesignLoopExitTemp_)
            {
              this->SimSimParams_DesignLoopExitTemp_.set (SimSimParams_DesignLoopExitTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimSimParams_LoopDesignTempDifference
          //
          if (n.name () == "SimSimParams_LoopDesignTempDifference" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimSimParams_LoopDesignTempDifference_)
            {
              this->SimSimParams_LoopDesignTempDifference_.set (SimSimParams_LoopDesignTempDifference_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing* SimSimulationParameters_HvacDesign_WaterLoopSizing::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSimulationParameters_HvacDesign_WaterLoopSizing (*this, f, c);
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing& SimSimulationParameters_HvacDesign_WaterLoopSizing::
      operator= (const SimSimulationParameters_HvacDesign_WaterLoopSizing& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimSimulationParameters_HvacDesign& > (*this) = x;
          this->SimSimParams_PlantOrCondenserLoopName_ = x.SimSimParams_PlantOrCondenserLoopName_;
          this->SimSimParams_LoopType_ = x.SimSimParams_LoopType_;
          this->SimSimParams_DesignLoopExitTemp_ = x.SimSimParams_DesignLoopExitTemp_;
          this->SimSimParams_LoopDesignTempDifference_ = x.SimSimParams_LoopDesignTempDifference_;
        }

        return *this;
      }

      SimSimulationParameters_HvacDesign_WaterLoopSizing::
      ~SimSimulationParameters_HvacDesign_WaterLoopSizing ()
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
