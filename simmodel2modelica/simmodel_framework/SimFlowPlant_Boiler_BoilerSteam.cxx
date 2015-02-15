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

#include "SimFlowPlant_Boiler_BoilerSteam.hxx"

#include "doublelist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowPlant_Boiler_BoilerSteam
      // 

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_WaterInletNodeName_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_WaterInletNodeName () const
      {
        return this->SimFlowPlant_WaterInletNodeName_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_WaterInletNodeName_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_WaterInletNodeName ()
      {
        return this->SimFlowPlant_WaterInletNodeName_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_WaterInletNodeName (const SimFlowPlant_WaterInletNodeName_type& x)
      {
        this->SimFlowPlant_WaterInletNodeName_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_WaterInletNodeName (const SimFlowPlant_WaterInletNodeName_optional& x)
      {
        this->SimFlowPlant_WaterInletNodeName_ = x;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_WaterInletNodeName (::std::auto_ptr< SimFlowPlant_WaterInletNodeName_type > x)
      {
        this->SimFlowPlant_WaterInletNodeName_.set (x);
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_FuelType_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_FuelType () const
      {
        return this->SimFlowPlant_FuelType_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_FuelType_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_FuelType ()
      {
        return this->SimFlowPlant_FuelType_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_FuelType (const SimFlowPlant_FuelType_type& x)
      {
        this->SimFlowPlant_FuelType_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_FuelType (const SimFlowPlant_FuelType_optional& x)
      {
        this->SimFlowPlant_FuelType_ = x;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_FuelType (::std::auto_ptr< SimFlowPlant_FuelType_type > x)
      {
        this->SimFlowPlant_FuelType_.set (x);
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_NomCap_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_NomCap () const
      {
        return this->SimFlowPlant_NomCap_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_NomCap_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_NomCap ()
      {
        return this->SimFlowPlant_NomCap_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_NomCap (const SimFlowPlant_NomCap_type& x)
      {
        this->SimFlowPlant_NomCap_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_NomCap (const SimFlowPlant_NomCap_optional& x)
      {
        this->SimFlowPlant_NomCap_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_MinPartLoadRatio_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MinPartLoadRatio () const
      {
        return this->SimFlowPlant_MinPartLoadRatio_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_MinPartLoadRatio_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MinPartLoadRatio ()
      {
        return this->SimFlowPlant_MinPartLoadRatio_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MinPartLoadRatio (const SimFlowPlant_MinPartLoadRatio_type& x)
      {
        this->SimFlowPlant_MinPartLoadRatio_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MinPartLoadRatio (const SimFlowPlant_MinPartLoadRatio_optional& x)
      {
        this->SimFlowPlant_MinPartLoadRatio_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_MaxPartLoadRatio_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxPartLoadRatio () const
      {
        return this->SimFlowPlant_MaxPartLoadRatio_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_MaxPartLoadRatio_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxPartLoadRatio ()
      {
        return this->SimFlowPlant_MaxPartLoadRatio_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxPartLoadRatio (const SimFlowPlant_MaxPartLoadRatio_type& x)
      {
        this->SimFlowPlant_MaxPartLoadRatio_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxPartLoadRatio (const SimFlowPlant_MaxPartLoadRatio_optional& x)
      {
        this->SimFlowPlant_MaxPartLoadRatio_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_OptimumPartLoadRatio_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_OptimumPartLoadRatio () const
      {
        return this->SimFlowPlant_OptimumPartLoadRatio_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_OptimumPartLoadRatio_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_OptimumPartLoadRatio ()
      {
        return this->SimFlowPlant_OptimumPartLoadRatio_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_OptimumPartLoadRatio (const SimFlowPlant_OptimumPartLoadRatio_type& x)
      {
        this->SimFlowPlant_OptimumPartLoadRatio_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_OptimumPartLoadRatio (const SimFlowPlant_OptimumPartLoadRatio_optional& x)
      {
        this->SimFlowPlant_OptimumPartLoadRatio_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_SizingFactor_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SizingFactor () const
      {
        return this->SimFlowPlant_SizingFactor_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_SizingFactor_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SizingFactor ()
      {
        return this->SimFlowPlant_SizingFactor_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SizingFactor (const SimFlowPlant_SizingFactor_type& x)
      {
        this->SimFlowPlant_SizingFactor_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SizingFactor (const SimFlowPlant_SizingFactor_optional& x)
      {
        this->SimFlowPlant_SizingFactor_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_MaxOperatPressure_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxOperatPressure () const
      {
        return this->SimFlowPlant_MaxOperatPressure_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_MaxOperatPressure_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxOperatPressure ()
      {
        return this->SimFlowPlant_MaxOperatPressure_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxOperatPressure (const SimFlowPlant_MaxOperatPressure_type& x)
      {
        this->SimFlowPlant_MaxOperatPressure_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_MaxOperatPressure (const SimFlowPlant_MaxOperatPressure_optional& x)
      {
        this->SimFlowPlant_MaxOperatPressure_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_TheoreticalEff_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_TheoreticalEff () const
      {
        return this->SimFlowPlant_TheoreticalEff_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_TheoreticalEff_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_TheoreticalEff ()
      {
        return this->SimFlowPlant_TheoreticalEff_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_TheoreticalEff (const SimFlowPlant_TheoreticalEff_type& x)
      {
        this->SimFlowPlant_TheoreticalEff_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_TheoreticalEff (const SimFlowPlant_TheoreticalEff_optional& x)
      {
        this->SimFlowPlant_TheoreticalEff_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_DesignOutletSteamTemp_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_DesignOutletSteamTemp () const
      {
        return this->SimFlowPlant_DesignOutletSteamTemp_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_DesignOutletSteamTemp_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_DesignOutletSteamTemp ()
      {
        return this->SimFlowPlant_DesignOutletSteamTemp_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_DesignOutletSteamTemp (const SimFlowPlant_DesignOutletSteamTemp_type& x)
      {
        this->SimFlowPlant_DesignOutletSteamTemp_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_DesignOutletSteamTemp (const SimFlowPlant_DesignOutletSteamTemp_optional& x)
      {
        this->SimFlowPlant_DesignOutletSteamTemp_ = x;
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList () const
      {
        return this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList ()
      {
        return this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList (const SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_type& x)
      {
        this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList (const SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_optional& x)
      {
        this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_ = x;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList (::std::auto_ptr< SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_type > x)
      {
        this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_.set (x);
      }

      const SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_SteamOutletNodeName_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SteamOutletNodeName () const
      {
        return this->SimFlowPlant_SteamOutletNodeName_;
      }

      SimFlowPlant_Boiler_BoilerSteam::SimFlowPlant_SteamOutletNodeName_optional& SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SteamOutletNodeName ()
      {
        return this->SimFlowPlant_SteamOutletNodeName_;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SteamOutletNodeName (const SimFlowPlant_SteamOutletNodeName_type& x)
      {
        this->SimFlowPlant_SteamOutletNodeName_.set (x);
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SteamOutletNodeName (const SimFlowPlant_SteamOutletNodeName_optional& x)
      {
        this->SimFlowPlant_SteamOutletNodeName_ = x;
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_SteamOutletNodeName (::std::auto_ptr< SimFlowPlant_SteamOutletNodeName_type > x)
      {
        this->SimFlowPlant_SteamOutletNodeName_.set (x);
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
    namespace MepModel
    {
      // SimFlowPlant_Boiler_BoilerSteam
      //

      SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Boiler_BoilerSteam (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowPlant_Boiler (RefId),
        SimFlowPlant_WaterInletNodeName_ (this),
        SimFlowPlant_FuelType_ (this),
        SimFlowPlant_NomCap_ (this),
        SimFlowPlant_MinPartLoadRatio_ (this),
        SimFlowPlant_MaxPartLoadRatio_ (this),
        SimFlowPlant_OptimumPartLoadRatio_ (this),
        SimFlowPlant_SizingFactor_ (this),
        SimFlowPlant_MaxOperatPressure_ (this),
        SimFlowPlant_TheoreticalEff_ (this),
        SimFlowPlant_DesignOutletSteamTemp_ (this),
        SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_ (this),
        SimFlowPlant_SteamOutletNodeName_ (this)
      {
      }

      SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Boiler_BoilerSteam (const SimFlowPlant_Boiler_BoilerSteam& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowPlant_Boiler (x, f, c),
        SimFlowPlant_WaterInletNodeName_ (x.SimFlowPlant_WaterInletNodeName_, f, this),
        SimFlowPlant_FuelType_ (x.SimFlowPlant_FuelType_, f, this),
        SimFlowPlant_NomCap_ (x.SimFlowPlant_NomCap_, f, this),
        SimFlowPlant_MinPartLoadRatio_ (x.SimFlowPlant_MinPartLoadRatio_, f, this),
        SimFlowPlant_MaxPartLoadRatio_ (x.SimFlowPlant_MaxPartLoadRatio_, f, this),
        SimFlowPlant_OptimumPartLoadRatio_ (x.SimFlowPlant_OptimumPartLoadRatio_, f, this),
        SimFlowPlant_SizingFactor_ (x.SimFlowPlant_SizingFactor_, f, this),
        SimFlowPlant_MaxOperatPressure_ (x.SimFlowPlant_MaxOperatPressure_, f, this),
        SimFlowPlant_TheoreticalEff_ (x.SimFlowPlant_TheoreticalEff_, f, this),
        SimFlowPlant_DesignOutletSteamTemp_ (x.SimFlowPlant_DesignOutletSteamTemp_, f, this),
        SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_ (x.SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_, f, this),
        SimFlowPlant_SteamOutletNodeName_ (x.SimFlowPlant_SteamOutletNodeName_, f, this)
      {
      }

      SimFlowPlant_Boiler_BoilerSteam::
      SimFlowPlant_Boiler_BoilerSteam (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowPlant_Boiler (e, f | ::xml_schema::flags::base, c),
        SimFlowPlant_WaterInletNodeName_ (this),
        SimFlowPlant_FuelType_ (this),
        SimFlowPlant_NomCap_ (this),
        SimFlowPlant_MinPartLoadRatio_ (this),
        SimFlowPlant_MaxPartLoadRatio_ (this),
        SimFlowPlant_OptimumPartLoadRatio_ (this),
        SimFlowPlant_SizingFactor_ (this),
        SimFlowPlant_MaxOperatPressure_ (this),
        SimFlowPlant_TheoreticalEff_ (this),
        SimFlowPlant_DesignOutletSteamTemp_ (this),
        SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_ (this),
        SimFlowPlant_SteamOutletNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_Boiler_BoilerSteam::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowPlant_Boiler::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowPlant_WaterInletNodeName
          //
          if (n.name () == "SimFlowPlant_WaterInletNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_WaterInletNodeName_type > r (
              SimFlowPlant_WaterInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_WaterInletNodeName_)
            {
              this->SimFlowPlant_WaterInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_FuelType
          //
          if (n.name () == "SimFlowPlant_FuelType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_FuelType_type > r (
              SimFlowPlant_FuelType_traits::create (i, f, this));

            if (!this->SimFlowPlant_FuelType_)
            {
              this->SimFlowPlant_FuelType_.set (r);
              continue;
            }
          }

          // SimFlowPlant_NomCap
          //
          if (n.name () == "SimFlowPlant_NomCap" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_NomCap_)
            {
              this->SimFlowPlant_NomCap_.set (SimFlowPlant_NomCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_MinPartLoadRatio
          //
          if (n.name () == "SimFlowPlant_MinPartLoadRatio" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_MinPartLoadRatio_)
            {
              this->SimFlowPlant_MinPartLoadRatio_.set (SimFlowPlant_MinPartLoadRatio_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_MaxPartLoadRatio
          //
          if (n.name () == "SimFlowPlant_MaxPartLoadRatio" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_MaxPartLoadRatio_)
            {
              this->SimFlowPlant_MaxPartLoadRatio_.set (SimFlowPlant_MaxPartLoadRatio_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_OptimumPartLoadRatio
          //
          if (n.name () == "SimFlowPlant_OptimumPartLoadRatio" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_OptimumPartLoadRatio_)
            {
              this->SimFlowPlant_OptimumPartLoadRatio_.set (SimFlowPlant_OptimumPartLoadRatio_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_SizingFactor
          //
          if (n.name () == "SimFlowPlant_SizingFactor" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_SizingFactor_)
            {
              this->SimFlowPlant_SizingFactor_.set (SimFlowPlant_SizingFactor_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_MaxOperatPressure
          //
          if (n.name () == "SimFlowPlant_MaxOperatPressure" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_MaxOperatPressure_)
            {
              this->SimFlowPlant_MaxOperatPressure_.set (SimFlowPlant_MaxOperatPressure_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_TheoreticalEff
          //
          if (n.name () == "SimFlowPlant_TheoreticalEff" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_TheoreticalEff_)
            {
              this->SimFlowPlant_TheoreticalEff_.set (SimFlowPlant_TheoreticalEff_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_DesignOutletSteamTemp
          //
          if (n.name () == "SimFlowPlant_DesignOutletSteamTemp" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowPlant_DesignOutletSteamTemp_)
            {
              this->SimFlowPlant_DesignOutletSteamTemp_.set (SimFlowPlant_DesignOutletSteamTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList
          //
          if (n.name () == "SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_type > r (
              SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_traits::create (i, f, this));

            if (!this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_)
            {
              this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_.set (r);
              continue;
            }
          }

          // SimFlowPlant_SteamOutletNodeName
          //
          if (n.name () == "SimFlowPlant_SteamOutletNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_SteamOutletNodeName_type > r (
              SimFlowPlant_SteamOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_SteamOutletNodeName_)
            {
              this->SimFlowPlant_SteamOutletNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_Boiler_BoilerSteam* SimFlowPlant_Boiler_BoilerSteam::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_Boiler_BoilerSteam (*this, f, c);
      }

      SimFlowPlant_Boiler_BoilerSteam& SimFlowPlant_Boiler_BoilerSteam::
      operator= (const SimFlowPlant_Boiler_BoilerSteam& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowPlant_Boiler& > (*this) = x;
          this->SimFlowPlant_WaterInletNodeName_ = x.SimFlowPlant_WaterInletNodeName_;
          this->SimFlowPlant_FuelType_ = x.SimFlowPlant_FuelType_;
          this->SimFlowPlant_NomCap_ = x.SimFlowPlant_NomCap_;
          this->SimFlowPlant_MinPartLoadRatio_ = x.SimFlowPlant_MinPartLoadRatio_;
          this->SimFlowPlant_MaxPartLoadRatio_ = x.SimFlowPlant_MaxPartLoadRatio_;
          this->SimFlowPlant_OptimumPartLoadRatio_ = x.SimFlowPlant_OptimumPartLoadRatio_;
          this->SimFlowPlant_SizingFactor_ = x.SimFlowPlant_SizingFactor_;
          this->SimFlowPlant_MaxOperatPressure_ = x.SimFlowPlant_MaxOperatPressure_;
          this->SimFlowPlant_TheoreticalEff_ = x.SimFlowPlant_TheoreticalEff_;
          this->SimFlowPlant_DesignOutletSteamTemp_ = x.SimFlowPlant_DesignOutletSteamTemp_;
          this->SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_ = x.SimFlowPlant_Coef_1_3_FuelUseFuncPartLoadRatioCurveList_;
          this->SimFlowPlant_SteamOutletNodeName_ = x.SimFlowPlant_SteamOutletNodeName_;
        }

        return *this;
      }

      SimFlowPlant_Boiler_BoilerSteam::
      ~SimFlowPlant_Boiler_BoilerSteam ()
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

