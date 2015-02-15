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

#include "SimSystem_HvacAir_FullSystem.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimSystem_HvacAir_FullSystem
      // 

      const SimSystem_HvacAir_FullSystem::SimSys_ContListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_ContListName () const
      {
        return this->SimSys_ContListName_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_ContListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_ContListName ()
      {
        return this->SimSys_ContListName_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_ContListName (const SimSys_ContListName_type& x)
      {
        this->SimSys_ContListName_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_ContListName (const SimSys_ContListName_optional& x)
      {
        this->SimSys_ContListName_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_ContListName (::std::auto_ptr< SimSys_ContListName_type > x)
      {
        this->SimSys_ContListName_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_AvailMngrListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_AvailMngrListName () const
      {
        return this->SimSys_AvailMngrListName_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_AvailMngrListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_AvailMngrListName ()
      {
        return this->SimSys_AvailMngrListName_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_AvailMngrListName (const SimSys_AvailMngrListName_type& x)
      {
        this->SimSys_AvailMngrListName_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_AvailMngrListName (const SimSys_AvailMngrListName_optional& x)
      {
        this->SimSys_AvailMngrListName_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_AvailMngrListName (::std::auto_ptr< SimSys_AvailMngrListName_type > x)
      {
        this->SimSys_AvailMngrListName_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_DesignSupAirFlowRate_optional& SimSystem_HvacAir_FullSystem::
      SimSys_DesignSupAirFlowRate () const
      {
        return this->SimSys_DesignSupAirFlowRate_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_DesignSupAirFlowRate_optional& SimSystem_HvacAir_FullSystem::
      SimSys_DesignSupAirFlowRate ()
      {
        return this->SimSys_DesignSupAirFlowRate_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DesignSupAirFlowRate (const SimSys_DesignSupAirFlowRate_type& x)
      {
        this->SimSys_DesignSupAirFlowRate_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DesignSupAirFlowRate (const SimSys_DesignSupAirFlowRate_optional& x)
      {
        this->SimSys_DesignSupAirFlowRate_ = x;
      }

      const SimSystem_HvacAir_FullSystem::SimSys_BranchListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_BranchListName () const
      {
        return this->SimSys_BranchListName_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_BranchListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_BranchListName ()
      {
        return this->SimSys_BranchListName_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_BranchListName (const SimSys_BranchListName_type& x)
      {
        this->SimSys_BranchListName_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_BranchListName (const SimSys_BranchListName_optional& x)
      {
        this->SimSys_BranchListName_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_BranchListName (::std::auto_ptr< SimSys_BranchListName_type > x)
      {
        this->SimSys_BranchListName_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_ConnListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_ConnListName () const
      {
        return this->SimSys_ConnListName_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_ConnListName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_ConnListName ()
      {
        return this->SimSys_ConnListName_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_ConnListName (const SimSys_ConnListName_type& x)
      {
        this->SimSys_ConnListName_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_ConnListName (const SimSys_ConnListName_optional& x)
      {
        this->SimSys_ConnListName_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_ConnListName (::std::auto_ptr< SimSys_ConnListName_type > x)
      {
        this->SimSys_ConnListName_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_SupSideInNodeName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_SupSideInNodeName () const
      {
        return this->SimSys_SupSideInNodeName_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_SupSideInNodeName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_SupSideInNodeName ()
      {
        return this->SimSys_SupSideInNodeName_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_SupSideInNodeName (const SimSys_SupSideInNodeName_type& x)
      {
        this->SimSys_SupSideInNodeName_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_SupSideInNodeName (const SimSys_SupSideInNodeName_optional& x)
      {
        this->SimSys_SupSideInNodeName_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_SupSideInNodeName (::std::auto_ptr< SimSys_SupSideInNodeName_type > x)
      {
        this->SimSys_SupSideInNodeName_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_DemandSideOutNodeName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideOutNodeName () const
      {
        return this->SimSys_DemandSideOutNodeName_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_DemandSideOutNodeName_optional& SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideOutNodeName ()
      {
        return this->SimSys_DemandSideOutNodeName_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideOutNodeName (const SimSys_DemandSideOutNodeName_type& x)
      {
        this->SimSys_DemandSideOutNodeName_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideOutNodeName (const SimSys_DemandSideOutNodeName_optional& x)
      {
        this->SimSys_DemandSideOutNodeName_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideOutNodeName (::std::auto_ptr< SimSys_DemandSideOutNodeName_type > x)
      {
        this->SimSys_DemandSideOutNodeName_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_DemandSideInNodeNames_optional& SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideInNodeNames () const
      {
        return this->SimSys_DemandSideInNodeNames_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_DemandSideInNodeNames_optional& SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideInNodeNames ()
      {
        return this->SimSys_DemandSideInNodeNames_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideInNodeNames (const SimSys_DemandSideInNodeNames_type& x)
      {
        this->SimSys_DemandSideInNodeNames_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideInNodeNames (const SimSys_DemandSideInNodeNames_optional& x)
      {
        this->SimSys_DemandSideInNodeNames_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_DemandSideInNodeNames (::std::auto_ptr< SimSys_DemandSideInNodeNames_type > x)
      {
        this->SimSys_DemandSideInNodeNames_.set (x);
      }

      const SimSystem_HvacAir_FullSystem::SimSys_SupSideOutNodeNames_optional& SimSystem_HvacAir_FullSystem::
      SimSys_SupSideOutNodeNames () const
      {
        return this->SimSys_SupSideOutNodeNames_;
      }

      SimSystem_HvacAir_FullSystem::SimSys_SupSideOutNodeNames_optional& SimSystem_HvacAir_FullSystem::
      SimSys_SupSideOutNodeNames ()
      {
        return this->SimSys_SupSideOutNodeNames_;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_SupSideOutNodeNames (const SimSys_SupSideOutNodeNames_type& x)
      {
        this->SimSys_SupSideOutNodeNames_.set (x);
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_SupSideOutNodeNames (const SimSys_SupSideOutNodeNames_optional& x)
      {
        this->SimSys_SupSideOutNodeNames_ = x;
      }

      void SimSystem_HvacAir_FullSystem::
      SimSys_SupSideOutNodeNames (::std::auto_ptr< SimSys_SupSideOutNodeNames_type > x)
      {
        this->SimSys_SupSideOutNodeNames_.set (x);
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
    namespace BuildingModel
    {
      // SimSystem_HvacAir_FullSystem
      //

      SimSystem_HvacAir_FullSystem::
      SimSystem_HvacAir_FullSystem (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacAir (RefId),
        SimSys_ContListName_ (this),
        SimSys_AvailMngrListName_ (this),
        SimSys_DesignSupAirFlowRate_ (this),
        SimSys_BranchListName_ (this),
        SimSys_ConnListName_ (this),
        SimSys_SupSideInNodeName_ (this),
        SimSys_DemandSideOutNodeName_ (this),
        SimSys_DemandSideInNodeNames_ (this),
        SimSys_SupSideOutNodeNames_ (this)
      {
      }

      SimSystem_HvacAir_FullSystem::
      SimSystem_HvacAir_FullSystem (const SimSystem_HvacAir_FullSystem& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacAir (x, f, c),
        SimSys_ContListName_ (x.SimSys_ContListName_, f, this),
        SimSys_AvailMngrListName_ (x.SimSys_AvailMngrListName_, f, this),
        SimSys_DesignSupAirFlowRate_ (x.SimSys_DesignSupAirFlowRate_, f, this),
        SimSys_BranchListName_ (x.SimSys_BranchListName_, f, this),
        SimSys_ConnListName_ (x.SimSys_ConnListName_, f, this),
        SimSys_SupSideInNodeName_ (x.SimSys_SupSideInNodeName_, f, this),
        SimSys_DemandSideOutNodeName_ (x.SimSys_DemandSideOutNodeName_, f, this),
        SimSys_DemandSideInNodeNames_ (x.SimSys_DemandSideInNodeNames_, f, this),
        SimSys_SupSideOutNodeNames_ (x.SimSys_SupSideOutNodeNames_, f, this)
      {
      }

      SimSystem_HvacAir_FullSystem::
      SimSystem_HvacAir_FullSystem (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacAir (e, f | ::xml_schema::flags::base, c),
        SimSys_ContListName_ (this),
        SimSys_AvailMngrListName_ (this),
        SimSys_DesignSupAirFlowRate_ (this),
        SimSys_BranchListName_ (this),
        SimSys_ConnListName_ (this),
        SimSys_SupSideInNodeName_ (this),
        SimSys_DemandSideOutNodeName_ (this),
        SimSys_DemandSideInNodeNames_ (this),
        SimSys_SupSideOutNodeNames_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSystem_HvacAir_FullSystem::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimSystem_HvacAir::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSys_ContListName
          //
          if (n.name () == "SimSys_ContListName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ContListName_type > r (
              SimSys_ContListName_traits::create (i, f, this));

            if (!this->SimSys_ContListName_)
            {
              this->SimSys_ContListName_.set (r);
              continue;
            }
          }

          // SimSys_AvailMngrListName
          //
          if (n.name () == "SimSys_AvailMngrListName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_AvailMngrListName_type > r (
              SimSys_AvailMngrListName_traits::create (i, f, this));

            if (!this->SimSys_AvailMngrListName_)
            {
              this->SimSys_AvailMngrListName_.set (r);
              continue;
            }
          }

          // SimSys_DesignSupAirFlowRate
          //
          if (n.name () == "SimSys_DesignSupAirFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            if (!this->SimSys_DesignSupAirFlowRate_)
            {
              this->SimSys_DesignSupAirFlowRate_.set (SimSys_DesignSupAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_BranchListName
          //
          if (n.name () == "SimSys_BranchListName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_BranchListName_type > r (
              SimSys_BranchListName_traits::create (i, f, this));

            if (!this->SimSys_BranchListName_)
            {
              this->SimSys_BranchListName_.set (r);
              continue;
            }
          }

          // SimSys_ConnListName
          //
          if (n.name () == "SimSys_ConnListName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ConnListName_type > r (
              SimSys_ConnListName_traits::create (i, f, this));

            if (!this->SimSys_ConnListName_)
            {
              this->SimSys_ConnListName_.set (r);
              continue;
            }
          }

          // SimSys_SupSideInNodeName
          //
          if (n.name () == "SimSys_SupSideInNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_SupSideInNodeName_type > r (
              SimSys_SupSideInNodeName_traits::create (i, f, this));

            if (!this->SimSys_SupSideInNodeName_)
            {
              this->SimSys_SupSideInNodeName_.set (r);
              continue;
            }
          }

          // SimSys_DemandSideOutNodeName
          //
          if (n.name () == "SimSys_DemandSideOutNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_DemandSideOutNodeName_type > r (
              SimSys_DemandSideOutNodeName_traits::create (i, f, this));

            if (!this->SimSys_DemandSideOutNodeName_)
            {
              this->SimSys_DemandSideOutNodeName_.set (r);
              continue;
            }
          }

          // SimSys_DemandSideInNodeNames
          //
          if (n.name () == "SimSys_DemandSideInNodeNames" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_DemandSideInNodeNames_type > r (
              SimSys_DemandSideInNodeNames_traits::create (i, f, this));

            if (!this->SimSys_DemandSideInNodeNames_)
            {
              this->SimSys_DemandSideInNodeNames_.set (r);
              continue;
            }
          }

          // SimSys_SupSideOutNodeNames
          //
          if (n.name () == "SimSys_SupSideOutNodeNames" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_SupSideOutNodeNames_type > r (
              SimSys_SupSideOutNodeNames_traits::create (i, f, this));

            if (!this->SimSys_SupSideOutNodeNames_)
            {
              this->SimSys_SupSideOutNodeNames_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSystem_HvacAir_FullSystem* SimSystem_HvacAir_FullSystem::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem_HvacAir_FullSystem (*this, f, c);
      }

      SimSystem_HvacAir_FullSystem& SimSystem_HvacAir_FullSystem::
      operator= (const SimSystem_HvacAir_FullSystem& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimSystem_HvacAir& > (*this) = x;
          this->SimSys_ContListName_ = x.SimSys_ContListName_;
          this->SimSys_AvailMngrListName_ = x.SimSys_AvailMngrListName_;
          this->SimSys_DesignSupAirFlowRate_ = x.SimSys_DesignSupAirFlowRate_;
          this->SimSys_BranchListName_ = x.SimSys_BranchListName_;
          this->SimSys_ConnListName_ = x.SimSys_ConnListName_;
          this->SimSys_SupSideInNodeName_ = x.SimSys_SupSideInNodeName_;
          this->SimSys_DemandSideOutNodeName_ = x.SimSys_DemandSideOutNodeName_;
          this->SimSys_DemandSideInNodeNames_ = x.SimSys_DemandSideInNodeNames_;
          this->SimSys_SupSideOutNodeNames_ = x.SimSys_SupSideOutNodeNames_;
        }

        return *this;
      }

      SimSystem_HvacAir_FullSystem::
      ~SimSystem_HvacAir_FullSystem ()
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
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

