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

#include "SimSystem_AirFlowNetwork.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimSystem_AirFlowNetwork
      // 

      const SimSystem_AirFlowNetwork::SimSys_AirflowNetCont_optional& SimSystem_AirFlowNetwork::
      SimSys_AirflowNetCont () const
      {
        return this->SimSys_AirflowNetCont_;
      }

      SimSystem_AirFlowNetwork::SimSys_AirflowNetCont_optional& SimSystem_AirFlowNetwork::
      SimSys_AirflowNetCont ()
      {
        return this->SimSys_AirflowNetCont_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AirflowNetCont (const SimSys_AirflowNetCont_type& x)
      {
        this->SimSys_AirflowNetCont_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AirflowNetCont (const SimSys_AirflowNetCont_optional& x)
      {
        this->SimSys_AirflowNetCont_ = x;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AirflowNetCont (::std::auto_ptr< SimSys_AirflowNetCont_type > x)
      {
        this->SimSys_AirflowNetCont_.set (x);
      }

      const SimSystem_AirFlowNetwork::SimSys_WindPresCoeffType_optional& SimSystem_AirFlowNetwork::
      SimSys_WindPresCoeffType () const
      {
        return this->SimSys_WindPresCoeffType_;
      }

      SimSystem_AirFlowNetwork::SimSys_WindPresCoeffType_optional& SimSystem_AirFlowNetwork::
      SimSys_WindPresCoeffType ()
      {
        return this->SimSys_WindPresCoeffType_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_WindPresCoeffType (const SimSys_WindPresCoeffType_type& x)
      {
        this->SimSys_WindPresCoeffType_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_WindPresCoeffType (const SimSys_WindPresCoeffType_optional& x)
      {
        this->SimSys_WindPresCoeffType_ = x;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_WindPresCoeffType (::std::auto_ptr< SimSys_WindPresCoeffType_type > x)
      {
        this->SimSys_WindPresCoeffType_.set (x);
      }

      const SimSystem_AirFlowNetwork::SimSys_AirflowNetWindPresCoeffArrayName_optional& SimSystem_AirFlowNetwork::
      SimSys_AirflowNetWindPresCoeffArrayName () const
      {
        return this->SimSys_AirflowNetWindPresCoeffArrayName_;
      }

      SimSystem_AirFlowNetwork::SimSys_AirflowNetWindPresCoeffArrayName_optional& SimSystem_AirFlowNetwork::
      SimSys_AirflowNetWindPresCoeffArrayName ()
      {
        return this->SimSys_AirflowNetWindPresCoeffArrayName_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AirflowNetWindPresCoeffArrayName (const SimSys_AirflowNetWindPresCoeffArrayName_type& x)
      {
        this->SimSys_AirflowNetWindPresCoeffArrayName_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AirflowNetWindPresCoeffArrayName (const SimSys_AirflowNetWindPresCoeffArrayName_optional& x)
      {
        this->SimSys_AirflowNetWindPresCoeffArrayName_ = x;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AirflowNetWindPresCoeffArrayName (::std::auto_ptr< SimSys_AirflowNetWindPresCoeffArrayName_type > x)
      {
        this->SimSys_AirflowNetWindPresCoeffArrayName_.set (x);
      }

      const SimSystem_AirFlowNetwork::SimSys_HtSelectLocalWindPressCalc_optional& SimSystem_AirFlowNetwork::
      SimSys_HtSelectLocalWindPressCalc () const
      {
        return this->SimSys_HtSelectLocalWindPressCalc_;
      }

      SimSystem_AirFlowNetwork::SimSys_HtSelectLocalWindPressCalc_optional& SimSystem_AirFlowNetwork::
      SimSys_HtSelectLocalWindPressCalc ()
      {
        return this->SimSys_HtSelectLocalWindPressCalc_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_HtSelectLocalWindPressCalc (const SimSys_HtSelectLocalWindPressCalc_type& x)
      {
        this->SimSys_HtSelectLocalWindPressCalc_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_HtSelectLocalWindPressCalc (const SimSys_HtSelectLocalWindPressCalc_optional& x)
      {
        this->SimSys_HtSelectLocalWindPressCalc_ = x;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_HtSelectLocalWindPressCalc (::std::auto_ptr< SimSys_HtSelectLocalWindPressCalc_type > x)
      {
        this->SimSys_HtSelectLocalWindPressCalc_.set (x);
      }

      const SimSystem_AirFlowNetwork::SimSys_BldgType_optional& SimSystem_AirFlowNetwork::
      SimSys_BldgType () const
      {
        return this->SimSys_BldgType_;
      }

      SimSystem_AirFlowNetwork::SimSys_BldgType_optional& SimSystem_AirFlowNetwork::
      SimSys_BldgType ()
      {
        return this->SimSys_BldgType_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_BldgType (const SimSys_BldgType_type& x)
      {
        this->SimSys_BldgType_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_BldgType (const SimSys_BldgType_optional& x)
      {
        this->SimSys_BldgType_ = x;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_BldgType (::std::auto_ptr< SimSys_BldgType_type > x)
      {
        this->SimSys_BldgType_.set (x);
      }

      const SimSystem_AirFlowNetwork::SimSys_MaxNumbIterations_optional& SimSystem_AirFlowNetwork::
      SimSys_MaxNumbIterations () const
      {
        return this->SimSys_MaxNumbIterations_;
      }

      SimSystem_AirFlowNetwork::SimSys_MaxNumbIterations_optional& SimSystem_AirFlowNetwork::
      SimSys_MaxNumbIterations ()
      {
        return this->SimSys_MaxNumbIterations_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_MaxNumbIterations (const SimSys_MaxNumbIterations_type& x)
      {
        this->SimSys_MaxNumbIterations_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_MaxNumbIterations (const SimSys_MaxNumbIterations_optional& x)
      {
        this->SimSys_MaxNumbIterations_ = x;
      }

      const SimSystem_AirFlowNetwork::SimSys_InitType_optional& SimSystem_AirFlowNetwork::
      SimSys_InitType () const
      {
        return this->SimSys_InitType_;
      }

      SimSystem_AirFlowNetwork::SimSys_InitType_optional& SimSystem_AirFlowNetwork::
      SimSys_InitType ()
      {
        return this->SimSys_InitType_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_InitType (const SimSys_InitType_type& x)
      {
        this->SimSys_InitType_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_InitType (const SimSys_InitType_optional& x)
      {
        this->SimSys_InitType_ = x;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_InitType (::std::auto_ptr< SimSys_InitType_type > x)
      {
        this->SimSys_InitType_.set (x);
      }

      const SimSystem_AirFlowNetwork::SimSys_RelAirflowConvergTol_optional& SimSystem_AirFlowNetwork::
      SimSys_RelAirflowConvergTol () const
      {
        return this->SimSys_RelAirflowConvergTol_;
      }

      SimSystem_AirFlowNetwork::SimSys_RelAirflowConvergTol_optional& SimSystem_AirFlowNetwork::
      SimSys_RelAirflowConvergTol ()
      {
        return this->SimSys_RelAirflowConvergTol_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_RelAirflowConvergTol (const SimSys_RelAirflowConvergTol_type& x)
      {
        this->SimSys_RelAirflowConvergTol_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_RelAirflowConvergTol (const SimSys_RelAirflowConvergTol_optional& x)
      {
        this->SimSys_RelAirflowConvergTol_ = x;
      }

      const SimSystem_AirFlowNetwork::SimSys_AbsAirflwConveTol_optional& SimSystem_AirFlowNetwork::
      SimSys_AbsAirflwConveTol () const
      {
        return this->SimSys_AbsAirflwConveTol_;
      }

      SimSystem_AirFlowNetwork::SimSys_AbsAirflwConveTol_optional& SimSystem_AirFlowNetwork::
      SimSys_AbsAirflwConveTol ()
      {
        return this->SimSys_AbsAirflwConveTol_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AbsAirflwConveTol (const SimSys_AbsAirflwConveTol_type& x)
      {
        this->SimSys_AbsAirflwConveTol_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AbsAirflwConveTol (const SimSys_AbsAirflwConveTol_optional& x)
      {
        this->SimSys_AbsAirflwConveTol_ = x;
      }

      const SimSystem_AirFlowNetwork::SimSys_ConvergAccelLimit_optional& SimSystem_AirFlowNetwork::
      SimSys_ConvergAccelLimit () const
      {
        return this->SimSys_ConvergAccelLimit_;
      }

      SimSystem_AirFlowNetwork::SimSys_ConvergAccelLimit_optional& SimSystem_AirFlowNetwork::
      SimSys_ConvergAccelLimit ()
      {
        return this->SimSys_ConvergAccelLimit_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_ConvergAccelLimit (const SimSys_ConvergAccelLimit_type& x)
      {
        this->SimSys_ConvergAccelLimit_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_ConvergAccelLimit (const SimSys_ConvergAccelLimit_optional& x)
      {
        this->SimSys_ConvergAccelLimit_ = x;
      }

      const SimSystem_AirFlowNetwork::SimSys_AzimuthAngLongAxisBldg_optional& SimSystem_AirFlowNetwork::
      SimSys_AzimuthAngLongAxisBldg () const
      {
        return this->SimSys_AzimuthAngLongAxisBldg_;
      }

      SimSystem_AirFlowNetwork::SimSys_AzimuthAngLongAxisBldg_optional& SimSystem_AirFlowNetwork::
      SimSys_AzimuthAngLongAxisBldg ()
      {
        return this->SimSys_AzimuthAngLongAxisBldg_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AzimuthAngLongAxisBldg (const SimSys_AzimuthAngLongAxisBldg_type& x)
      {
        this->SimSys_AzimuthAngLongAxisBldg_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_AzimuthAngLongAxisBldg (const SimSys_AzimuthAngLongAxisBldg_optional& x)
      {
        this->SimSys_AzimuthAngLongAxisBldg_ = x;
      }

      const SimSystem_AirFlowNetwork::SimSys_RatioBldgWidthShortToLongAxis_optional& SimSystem_AirFlowNetwork::
      SimSys_RatioBldgWidthShortToLongAxis () const
      {
        return this->SimSys_RatioBldgWidthShortToLongAxis_;
      }

      SimSystem_AirFlowNetwork::SimSys_RatioBldgWidthShortToLongAxis_optional& SimSystem_AirFlowNetwork::
      SimSys_RatioBldgWidthShortToLongAxis ()
      {
        return this->SimSys_RatioBldgWidthShortToLongAxis_;
      }

      void SimSystem_AirFlowNetwork::
      SimSys_RatioBldgWidthShortToLongAxis (const SimSys_RatioBldgWidthShortToLongAxis_type& x)
      {
        this->SimSys_RatioBldgWidthShortToLongAxis_.set (x);
      }

      void SimSystem_AirFlowNetwork::
      SimSys_RatioBldgWidthShortToLongAxis (const SimSys_RatioBldgWidthShortToLongAxis_optional& x)
      {
        this->SimSys_RatioBldgWidthShortToLongAxis_ = x;
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
      // SimSystem_AirFlowNetwork
      //

      SimSystem_AirFlowNetwork::
      SimSystem_AirFlowNetwork ()
      : ::schema::simxml::BuildingModel::SimSystem (),
        SimSys_AirflowNetCont_ (this),
        SimSys_WindPresCoeffType_ (this),
        SimSys_AirflowNetWindPresCoeffArrayName_ (this),
        SimSys_HtSelectLocalWindPressCalc_ (this),
        SimSys_BldgType_ (this),
        SimSys_MaxNumbIterations_ (this),
        SimSys_InitType_ (this),
        SimSys_RelAirflowConvergTol_ (this),
        SimSys_AbsAirflwConveTol_ (this),
        SimSys_ConvergAccelLimit_ (this),
        SimSys_AzimuthAngLongAxisBldg_ (this),
        SimSys_RatioBldgWidthShortToLongAxis_ (this)
      {
      }

      SimSystem_AirFlowNetwork::
      SimSystem_AirFlowNetwork (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimSystem (RefId),
        SimSys_AirflowNetCont_ (this),
        SimSys_WindPresCoeffType_ (this),
        SimSys_AirflowNetWindPresCoeffArrayName_ (this),
        SimSys_HtSelectLocalWindPressCalc_ (this),
        SimSys_BldgType_ (this),
        SimSys_MaxNumbIterations_ (this),
        SimSys_InitType_ (this),
        SimSys_RelAirflowConvergTol_ (this),
        SimSys_AbsAirflwConveTol_ (this),
        SimSys_ConvergAccelLimit_ (this),
        SimSys_AzimuthAngLongAxisBldg_ (this),
        SimSys_RatioBldgWidthShortToLongAxis_ (this)
      {
      }

      SimSystem_AirFlowNetwork::
      SimSystem_AirFlowNetwork (const SimSystem_AirFlowNetwork& x,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSystem (x, f, c),
        SimSys_AirflowNetCont_ (x.SimSys_AirflowNetCont_, f, this),
        SimSys_WindPresCoeffType_ (x.SimSys_WindPresCoeffType_, f, this),
        SimSys_AirflowNetWindPresCoeffArrayName_ (x.SimSys_AirflowNetWindPresCoeffArrayName_, f, this),
        SimSys_HtSelectLocalWindPressCalc_ (x.SimSys_HtSelectLocalWindPressCalc_, f, this),
        SimSys_BldgType_ (x.SimSys_BldgType_, f, this),
        SimSys_MaxNumbIterations_ (x.SimSys_MaxNumbIterations_, f, this),
        SimSys_InitType_ (x.SimSys_InitType_, f, this),
        SimSys_RelAirflowConvergTol_ (x.SimSys_RelAirflowConvergTol_, f, this),
        SimSys_AbsAirflwConveTol_ (x.SimSys_AbsAirflwConveTol_, f, this),
        SimSys_ConvergAccelLimit_ (x.SimSys_ConvergAccelLimit_, f, this),
        SimSys_AzimuthAngLongAxisBldg_ (x.SimSys_AzimuthAngLongAxisBldg_, f, this),
        SimSys_RatioBldgWidthShortToLongAxis_ (x.SimSys_RatioBldgWidthShortToLongAxis_, f, this)
      {
      }

      SimSystem_AirFlowNetwork::
      SimSystem_AirFlowNetwork (const ::xercesc::DOMElement& e,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSystem (e, f | ::xml_schema::flags::base, c),
        SimSys_AirflowNetCont_ (this),
        SimSys_WindPresCoeffType_ (this),
        SimSys_AirflowNetWindPresCoeffArrayName_ (this),
        SimSys_HtSelectLocalWindPressCalc_ (this),
        SimSys_BldgType_ (this),
        SimSys_MaxNumbIterations_ (this),
        SimSys_InitType_ (this),
        SimSys_RelAirflowConvergTol_ (this),
        SimSys_AbsAirflwConveTol_ (this),
        SimSys_ConvergAccelLimit_ (this),
        SimSys_AzimuthAngLongAxisBldg_ (this),
        SimSys_RatioBldgWidthShortToLongAxis_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSystem_AirFlowNetwork::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimSystem::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSys_AirflowNetCont
          //
          if (n.name () == "SimSys_AirflowNetCont" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_AirflowNetCont_type > r (
              SimSys_AirflowNetCont_traits::create (i, f, this));

            if (!this->SimSys_AirflowNetCont_)
            {
              this->SimSys_AirflowNetCont_.set (r);
              continue;
            }
          }

          // SimSys_WindPresCoeffType
          //
          if (n.name () == "SimSys_WindPresCoeffType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_WindPresCoeffType_type > r (
              SimSys_WindPresCoeffType_traits::create (i, f, this));

            if (!this->SimSys_WindPresCoeffType_)
            {
              this->SimSys_WindPresCoeffType_.set (r);
              continue;
            }
          }

          // SimSys_AirflowNetWindPresCoeffArrayName
          //
          if (n.name () == "SimSys_AirflowNetWindPresCoeffArrayName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_AirflowNetWindPresCoeffArrayName_type > r (
              SimSys_AirflowNetWindPresCoeffArrayName_traits::create (i, f, this));

            if (!this->SimSys_AirflowNetWindPresCoeffArrayName_)
            {
              this->SimSys_AirflowNetWindPresCoeffArrayName_.set (r);
              continue;
            }
          }

          // SimSys_HtSelectLocalWindPressCalc
          //
          if (n.name () == "SimSys_HtSelectLocalWindPressCalc" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_HtSelectLocalWindPressCalc_type > r (
              SimSys_HtSelectLocalWindPressCalc_traits::create (i, f, this));

            if (!this->SimSys_HtSelectLocalWindPressCalc_)
            {
              this->SimSys_HtSelectLocalWindPressCalc_.set (r);
              continue;
            }
          }

          // SimSys_BldgType
          //
          if (n.name () == "SimSys_BldgType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_BldgType_type > r (
              SimSys_BldgType_traits::create (i, f, this));

            if (!this->SimSys_BldgType_)
            {
              this->SimSys_BldgType_.set (r);
              continue;
            }
          }

          // SimSys_MaxNumbIterations
          //
          if (n.name () == "SimSys_MaxNumbIterations" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_MaxNumbIterations_)
            {
              this->SimSys_MaxNumbIterations_.set (SimSys_MaxNumbIterations_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_InitType
          //
          if (n.name () == "SimSys_InitType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< SimSys_InitType_type > r (
              SimSys_InitType_traits::create (i, f, this));

            if (!this->SimSys_InitType_)
            {
              this->SimSys_InitType_.set (r);
              continue;
            }
          }

          // SimSys_RelAirflowConvergTol
          //
          if (n.name () == "SimSys_RelAirflowConvergTol" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_RelAirflowConvergTol_)
            {
              this->SimSys_RelAirflowConvergTol_.set (SimSys_RelAirflowConvergTol_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_AbsAirflwConveTol
          //
          if (n.name () == "SimSys_AbsAirflwConveTol" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_AbsAirflwConveTol_)
            {
              this->SimSys_AbsAirflwConveTol_.set (SimSys_AbsAirflwConveTol_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_ConvergAccelLimit
          //
          if (n.name () == "SimSys_ConvergAccelLimit" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_ConvergAccelLimit_)
            {
              this->SimSys_ConvergAccelLimit_.set (SimSys_ConvergAccelLimit_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_AzimuthAngLongAxisBldg
          //
          if (n.name () == "SimSys_AzimuthAngLongAxisBldg" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_AzimuthAngLongAxisBldg_)
            {
              this->SimSys_AzimuthAngLongAxisBldg_.set (SimSys_AzimuthAngLongAxisBldg_traits::create (i, f, this));
              continue;
            }
          }

          // SimSys_RatioBldgWidthShortToLongAxis
          //
          if (n.name () == "SimSys_RatioBldgWidthShortToLongAxis" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            if (!this->SimSys_RatioBldgWidthShortToLongAxis_)
            {
              this->SimSys_RatioBldgWidthShortToLongAxis_.set (SimSys_RatioBldgWidthShortToLongAxis_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimSystem_AirFlowNetwork* SimSystem_AirFlowNetwork::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem_AirFlowNetwork (*this, f, c);
      }

      SimSystem_AirFlowNetwork& SimSystem_AirFlowNetwork::
      operator= (const SimSystem_AirFlowNetwork& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimSystem& > (*this) = x;
          this->SimSys_AirflowNetCont_ = x.SimSys_AirflowNetCont_;
          this->SimSys_WindPresCoeffType_ = x.SimSys_WindPresCoeffType_;
          this->SimSys_AirflowNetWindPresCoeffArrayName_ = x.SimSys_AirflowNetWindPresCoeffArrayName_;
          this->SimSys_HtSelectLocalWindPressCalc_ = x.SimSys_HtSelectLocalWindPressCalc_;
          this->SimSys_BldgType_ = x.SimSys_BldgType_;
          this->SimSys_MaxNumbIterations_ = x.SimSys_MaxNumbIterations_;
          this->SimSys_InitType_ = x.SimSys_InitType_;
          this->SimSys_RelAirflowConvergTol_ = x.SimSys_RelAirflowConvergTol_;
          this->SimSys_AbsAirflwConveTol_ = x.SimSys_AbsAirflwConveTol_;
          this->SimSys_ConvergAccelLimit_ = x.SimSys_ConvergAccelLimit_;
          this->SimSys_AzimuthAngLongAxisBldg_ = x.SimSys_AzimuthAngLongAxisBldg_;
          this->SimSys_RatioBldgWidthShortToLongAxis_ = x.SimSys_RatioBldgWidthShortToLongAxis_;
        }

        return *this;
      }

      SimSystem_AirFlowNetwork::
      ~SimSystem_AirFlowNetwork ()
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

