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

#include "SimSystem_HvacChilledWater_WaterBranch.hxx"

#include "simsys_componentobjecttype_1_11.hxx"

#include "simsys_componentinnodename_1_11.hxx"

#include "simsys_componentoutnodename_1_11.hxx"

#include "simsys_componentbranchconttype_1_11.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimSystem_HvacChilledWater_WaterBranch
      // 

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_MaxFlowRate_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_MaxFlowRate () const
      {
        return this->SimSys_MaxFlowRate_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_MaxFlowRate_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_MaxFlowRate ()
      {
        return this->SimSys_MaxFlowRate_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_MaxFlowRate (const SimSys_MaxFlowRate_type& x)
      {
        this->SimSys_MaxFlowRate_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_MaxFlowRate (const SimSys_MaxFlowRate_optional& x)
      {
        this->SimSys_MaxFlowRate_ = x;
      }

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_PresDropCurveName_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_PresDropCurveName () const
      {
        return this->SimSys_PresDropCurveName_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_PresDropCurveName_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_PresDropCurveName ()
      {
        return this->SimSys_PresDropCurveName_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_PresDropCurveName (const SimSys_PresDropCurveName_type& x)
      {
        this->SimSys_PresDropCurveName_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_PresDropCurveName (const SimSys_PresDropCurveName_optional& x)
      {
        this->SimSys_PresDropCurveName_ = x;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_PresDropCurveName (::std::auto_ptr< SimSys_PresDropCurveName_type > x)
      {
        this->SimSys_PresDropCurveName_.set (x);
      }

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentObjectType_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentObjectType_1_11 () const
      {
        return this->SimSys_ComponentObjectType_1_11_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentObjectType_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentObjectType_1_11 ()
      {
        return this->SimSys_ComponentObjectType_1_11_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentObjectType_1_11 (const SimSys_ComponentObjectType_1_11_type& x)
      {
        this->SimSys_ComponentObjectType_1_11_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentObjectType_1_11 (const SimSys_ComponentObjectType_1_11_optional& x)
      {
        this->SimSys_ComponentObjectType_1_11_ = x;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentObjectType_1_11 (::std::auto_ptr< SimSys_ComponentObjectType_1_11_type > x)
      {
        this->SimSys_ComponentObjectType_1_11_.set (x);
      }

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentName_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentName_1_11 () const
      {
        return this->SimSys_ComponentName_1_11_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentName_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentName_1_11 ()
      {
        return this->SimSys_ComponentName_1_11_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentName_1_11 (const SimSys_ComponentName_1_11_type& x)
      {
        this->SimSys_ComponentName_1_11_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentName_1_11 (const SimSys_ComponentName_1_11_optional& x)
      {
        this->SimSys_ComponentName_1_11_ = x;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentName_1_11 (::std::auto_ptr< SimSys_ComponentName_1_11_type > x)
      {
        this->SimSys_ComponentName_1_11_.set (x);
      }

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentInNodeName_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentInNodeName_1_11 () const
      {
        return this->SimSys_ComponentInNodeName_1_11_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentInNodeName_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentInNodeName_1_11 ()
      {
        return this->SimSys_ComponentInNodeName_1_11_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentInNodeName_1_11 (const SimSys_ComponentInNodeName_1_11_type& x)
      {
        this->SimSys_ComponentInNodeName_1_11_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentInNodeName_1_11 (const SimSys_ComponentInNodeName_1_11_optional& x)
      {
        this->SimSys_ComponentInNodeName_1_11_ = x;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentInNodeName_1_11 (::std::auto_ptr< SimSys_ComponentInNodeName_1_11_type > x)
      {
        this->SimSys_ComponentInNodeName_1_11_.set (x);
      }

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentOutNodeName_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentOutNodeName_1_11 () const
      {
        return this->SimSys_ComponentOutNodeName_1_11_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentOutNodeName_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentOutNodeName_1_11 ()
      {
        return this->SimSys_ComponentOutNodeName_1_11_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentOutNodeName_1_11 (const SimSys_ComponentOutNodeName_1_11_type& x)
      {
        this->SimSys_ComponentOutNodeName_1_11_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentOutNodeName_1_11 (const SimSys_ComponentOutNodeName_1_11_optional& x)
      {
        this->SimSys_ComponentOutNodeName_1_11_ = x;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentOutNodeName_1_11 (::std::auto_ptr< SimSys_ComponentOutNodeName_1_11_type > x)
      {
        this->SimSys_ComponentOutNodeName_1_11_.set (x);
      }

      const SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentBranchContType_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentBranchContType_1_11 () const
      {
        return this->SimSys_ComponentBranchContType_1_11_;
      }

      SimSystem_HvacChilledWater_WaterBranch::SimSys_ComponentBranchContType_1_11_optional& SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentBranchContType_1_11 ()
      {
        return this->SimSys_ComponentBranchContType_1_11_;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentBranchContType_1_11 (const SimSys_ComponentBranchContType_1_11_type& x)
      {
        this->SimSys_ComponentBranchContType_1_11_.set (x);
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentBranchContType_1_11 (const SimSys_ComponentBranchContType_1_11_optional& x)
      {
        this->SimSys_ComponentBranchContType_1_11_ = x;
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      SimSys_ComponentBranchContType_1_11 (::std::auto_ptr< SimSys_ComponentBranchContType_1_11_type > x)
      {
        this->SimSys_ComponentBranchContType_1_11_.set (x);
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
    namespace BuildingModel
    {
      // SimSystem_HvacChilledWater_WaterBranch
      //

      SimSystem_HvacChilledWater_WaterBranch::
      SimSystem_HvacChilledWater_WaterBranch ()
      : ::schema::simxml::BuildingModel::SimSystem_HvacChilledWater (),
        SimSys_MaxFlowRate_ (this),
        SimSys_PresDropCurveName_ (this),
        SimSys_ComponentObjectType_1_11_ (this),
        SimSys_ComponentName_1_11_ (this),
        SimSys_ComponentInNodeName_1_11_ (this),
        SimSys_ComponentOutNodeName_1_11_ (this),
        SimSys_ComponentBranchContType_1_11_ (this)
      {
      }

      SimSystem_HvacChilledWater_WaterBranch::
      SimSystem_HvacChilledWater_WaterBranch (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimSystem_HvacChilledWater (RefId),
        SimSys_MaxFlowRate_ (this),
        SimSys_PresDropCurveName_ (this),
        SimSys_ComponentObjectType_1_11_ (this),
        SimSys_ComponentName_1_11_ (this),
        SimSys_ComponentInNodeName_1_11_ (this),
        SimSys_ComponentOutNodeName_1_11_ (this),
        SimSys_ComponentBranchContType_1_11_ (this)
      {
      }

      SimSystem_HvacChilledWater_WaterBranch::
      SimSystem_HvacChilledWater_WaterBranch (const SimSystem_HvacChilledWater_WaterBranch& x,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSystem_HvacChilledWater (x, f, c),
        SimSys_MaxFlowRate_ (x.SimSys_MaxFlowRate_, f, this),
        SimSys_PresDropCurveName_ (x.SimSys_PresDropCurveName_, f, this),
        SimSys_ComponentObjectType_1_11_ (x.SimSys_ComponentObjectType_1_11_, f, this),
        SimSys_ComponentName_1_11_ (x.SimSys_ComponentName_1_11_, f, this),
        SimSys_ComponentInNodeName_1_11_ (x.SimSys_ComponentInNodeName_1_11_, f, this),
        SimSys_ComponentOutNodeName_1_11_ (x.SimSys_ComponentOutNodeName_1_11_, f, this),
        SimSys_ComponentBranchContType_1_11_ (x.SimSys_ComponentBranchContType_1_11_, f, this)
      {
      }

      SimSystem_HvacChilledWater_WaterBranch::
      SimSystem_HvacChilledWater_WaterBranch (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSystem_HvacChilledWater (e, f | ::xml_schema::flags::base, c),
        SimSys_MaxFlowRate_ (this),
        SimSys_PresDropCurveName_ (this),
        SimSys_ComponentObjectType_1_11_ (this),
        SimSys_ComponentName_1_11_ (this),
        SimSys_ComponentInNodeName_1_11_ (this),
        SimSys_ComponentOutNodeName_1_11_ (this),
        SimSys_ComponentBranchContType_1_11_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSystem_HvacChilledWater_WaterBranch::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimSystem_HvacChilledWater::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSys_MaxFlowRate
          //
          if (n.name () == "SimSys_MaxFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_MaxFlowRate_)
            {
              this->SimSys_MaxFlowRate_.set (SimSys_MaxFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_PresDropCurveName
          //
          if (n.name () == "SimSys_PresDropCurveName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_PresDropCurveName_type > r (
              SimSys_PresDropCurveName_traits::create (i, f, this));

            if (!this->SimSys_PresDropCurveName_)
            {
              this->SimSys_PresDropCurveName_.set (r);
              continue;
            }
          }

          // SimSys_ComponentObjectType_1_11
          //
          if (n.name () == "SimSys_ComponentObjectType_1_11" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ComponentObjectType_1_11_type > r (
              SimSys_ComponentObjectType_1_11_traits::create (i, f, this));

            if (!this->SimSys_ComponentObjectType_1_11_)
            {
              this->SimSys_ComponentObjectType_1_11_.set (r);
              continue;
            }
          }

          // SimSys_ComponentName_1_11
          //
          if (n.name () == "SimSys_ComponentName_1_11" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ComponentName_1_11_type > r (
              SimSys_ComponentName_1_11_traits::create (i, f, this));

            if (!this->SimSys_ComponentName_1_11_)
            {
              this->SimSys_ComponentName_1_11_.set (r);
              continue;
            }
          }

          // SimSys_ComponentInNodeName_1_11
          //
          if (n.name () == "SimSys_ComponentInNodeName_1_11" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ComponentInNodeName_1_11_type > r (
              SimSys_ComponentInNodeName_1_11_traits::create (i, f, this));

            if (!this->SimSys_ComponentInNodeName_1_11_)
            {
              this->SimSys_ComponentInNodeName_1_11_.set (r);
              continue;
            }
          }

          // SimSys_ComponentOutNodeName_1_11
          //
          if (n.name () == "SimSys_ComponentOutNodeName_1_11" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ComponentOutNodeName_1_11_type > r (
              SimSys_ComponentOutNodeName_1_11_traits::create (i, f, this));

            if (!this->SimSys_ComponentOutNodeName_1_11_)
            {
              this->SimSys_ComponentOutNodeName_1_11_.set (r);
              continue;
            }
          }

          // SimSys_ComponentBranchContType_1_11
          //
          if (n.name () == "SimSys_ComponentBranchContType_1_11" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_ComponentBranchContType_1_11_type > r (
              SimSys_ComponentBranchContType_1_11_traits::create (i, f, this));

            if (!this->SimSys_ComponentBranchContType_1_11_)
            {
              this->SimSys_ComponentBranchContType_1_11_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSystem_HvacChilledWater_WaterBranch* SimSystem_HvacChilledWater_WaterBranch::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem_HvacChilledWater_WaterBranch (*this, f, c);
      }

      SimSystem_HvacChilledWater_WaterBranch& SimSystem_HvacChilledWater_WaterBranch::
      operator= (const SimSystem_HvacChilledWater_WaterBranch& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimSystem_HvacChilledWater& > (*this) = x;
          this->SimSys_MaxFlowRate_ = x.SimSys_MaxFlowRate_;
          this->SimSys_PresDropCurveName_ = x.SimSys_PresDropCurveName_;
          this->SimSys_ComponentObjectType_1_11_ = x.SimSys_ComponentObjectType_1_11_;
          this->SimSys_ComponentName_1_11_ = x.SimSys_ComponentName_1_11_;
          this->SimSys_ComponentInNodeName_1_11_ = x.SimSys_ComponentInNodeName_1_11_;
          this->SimSys_ComponentOutNodeName_1_11_ = x.SimSys_ComponentOutNodeName_1_11_;
          this->SimSys_ComponentBranchContType_1_11_ = x.SimSys_ComponentBranchContType_1_11_;
        }

        return *this;
      }

      SimSystem_HvacChilledWater_WaterBranch::
      ~SimSystem_HvacChilledWater_WaterBranch ()
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

