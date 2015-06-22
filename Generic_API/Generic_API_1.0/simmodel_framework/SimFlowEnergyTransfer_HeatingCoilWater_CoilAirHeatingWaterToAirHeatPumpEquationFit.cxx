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

#include "SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit.hxx"

#include "doublelist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit
      // 

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_WaterInletNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterInletNodeName () const
      {
        return this->SimFlowEnergyTrans_WaterInletNodeName_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_WaterInletNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterInletNodeName ()
      {
        return this->SimFlowEnergyTrans_WaterInletNodeName_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterInletNodeName (const SimFlowEnergyTrans_WaterInletNodeName_type& x)
      {
        this->SimFlowEnergyTrans_WaterInletNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterInletNodeName (const SimFlowEnergyTrans_WaterInletNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_WaterInletNodeName_ = x;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterInletNodeName (::std::auto_ptr< SimFlowEnergyTrans_WaterInletNodeName_type > x)
      {
        this->SimFlowEnergyTrans_WaterInletNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_WaterOutletNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterOutletNodeName () const
      {
        return this->SimFlowEnergyTrans_WaterOutletNodeName_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_WaterOutletNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterOutletNodeName ()
      {
        return this->SimFlowEnergyTrans_WaterOutletNodeName_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterOutletNodeName (const SimFlowEnergyTrans_WaterOutletNodeName_type& x)
      {
        this->SimFlowEnergyTrans_WaterOutletNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterOutletNodeName (const SimFlowEnergyTrans_WaterOutletNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_WaterOutletNodeName_ = x;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_WaterOutletNodeName (::std::auto_ptr< SimFlowEnergyTrans_WaterOutletNodeName_type > x)
      {
        this->SimFlowEnergyTrans_WaterOutletNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_AirInNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirInNodeName () const
      {
        return this->SimFlowEnergyTrans_AirInNodeName_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_AirInNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirInNodeName ()
      {
        return this->SimFlowEnergyTrans_AirInNodeName_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirInNodeName (const SimFlowEnergyTrans_AirInNodeName_type& x)
      {
        this->SimFlowEnergyTrans_AirInNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirInNodeName (const SimFlowEnergyTrans_AirInNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_AirInNodeName_ = x;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirInNodeName (::std::auto_ptr< SimFlowEnergyTrans_AirInNodeName_type > x)
      {
        this->SimFlowEnergyTrans_AirInNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_AirOutNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirOutNodeName () const
      {
        return this->SimFlowEnergyTrans_AirOutNodeName_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_AirOutNodeName_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirOutNodeName ()
      {
        return this->SimFlowEnergyTrans_AirOutNodeName_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirOutNodeName (const SimFlowEnergyTrans_AirOutNodeName_type& x)
      {
        this->SimFlowEnergyTrans_AirOutNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirOutNodeName (const SimFlowEnergyTrans_AirOutNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_AirOutNodeName_ = x;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_AirOutNodeName (::std::auto_ptr< SimFlowEnergyTrans_AirOutNodeName_type > x)
      {
        this->SimFlowEnergyTrans_AirOutNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedAirFlowRate_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedAirFlowRate () const
      {
        return this->SimFlowEnergyTrans_RatedAirFlowRate_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedAirFlowRate_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedAirFlowRate ()
      {
        return this->SimFlowEnergyTrans_RatedAirFlowRate_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedAirFlowRate (const SimFlowEnergyTrans_RatedAirFlowRate_type& x)
      {
        this->SimFlowEnergyTrans_RatedAirFlowRate_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedAirFlowRate (const SimFlowEnergyTrans_RatedAirFlowRate_optional& x)
      {
        this->SimFlowEnergyTrans_RatedAirFlowRate_ = x;
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedWaterFlowRate_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedWaterFlowRate () const
      {
        return this->SimFlowEnergyTrans_RatedWaterFlowRate_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedWaterFlowRate_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedWaterFlowRate ()
      {
        return this->SimFlowEnergyTrans_RatedWaterFlowRate_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedWaterFlowRate (const SimFlowEnergyTrans_RatedWaterFlowRate_type& x)
      {
        this->SimFlowEnergyTrans_RatedWaterFlowRate_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedWaterFlowRate (const SimFlowEnergyTrans_RatedWaterFlowRate_optional& x)
      {
        this->SimFlowEnergyTrans_RatedWaterFlowRate_ = x;
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedHeatingCap_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCap () const
      {
        return this->SimFlowEnergyTrans_RatedHeatingCap_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedHeatingCap_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCap ()
      {
        return this->SimFlowEnergyTrans_RatedHeatingCap_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCap (const SimFlowEnergyTrans_RatedHeatingCap_type& x)
      {
        this->SimFlowEnergyTrans_RatedHeatingCap_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCap (const SimFlowEnergyTrans_RatedHeatingCap_optional& x)
      {
        this->SimFlowEnergyTrans_RatedHeatingCap_ = x;
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedHeatingCoefPerf_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCoefPerf () const
      {
        return this->SimFlowEnergyTrans_RatedHeatingCoefPerf_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_RatedHeatingCoefPerf_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCoefPerf ()
      {
        return this->SimFlowEnergyTrans_RatedHeatingCoefPerf_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCoefPerf (const SimFlowEnergyTrans_RatedHeatingCoefPerf_type& x)
      {
        this->SimFlowEnergyTrans_RatedHeatingCoefPerf_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_RatedHeatingCoefPerf (const SimFlowEnergyTrans_RatedHeatingCoefPerf_optional& x)
      {
        this->SimFlowEnergyTrans_RatedHeatingCoefPerf_ = x;
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_HeatingCapCoef_1_5_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingCapCoef_1_5 () const
      {
        return this->SimFlowEnergyTrans_HeatingCapCoef_1_5_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_HeatingCapCoef_1_5_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingCapCoef_1_5 ()
      {
        return this->SimFlowEnergyTrans_HeatingCapCoef_1_5_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingCapCoef_1_5 (const SimFlowEnergyTrans_HeatingCapCoef_1_5_type& x)
      {
        this->SimFlowEnergyTrans_HeatingCapCoef_1_5_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingCapCoef_1_5 (const SimFlowEnergyTrans_HeatingCapCoef_1_5_optional& x)
      {
        this->SimFlowEnergyTrans_HeatingCapCoef_1_5_ = x;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingCapCoef_1_5 (::std::auto_ptr< SimFlowEnergyTrans_HeatingCapCoef_1_5_type > x)
      {
        this->SimFlowEnergyTrans_HeatingCapCoef_1_5_.set (x);
      }

      const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5 () const
      {
        return this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_optional& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5 ()
      {
        return this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5 (const SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_type& x)
      {
        this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_.set (x);
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5 (const SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_optional& x)
      {
        this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_ = x;
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5 (::std::auto_ptr< SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_type > x)
      {
        this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_.set (x);
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
      // SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit
      //

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatingCoilWater (RefId),
        SimFlowEnergyTrans_WaterInletNodeName_ (this),
        SimFlowEnergyTrans_WaterOutletNodeName_ (this),
        SimFlowEnergyTrans_AirInNodeName_ (this),
        SimFlowEnergyTrans_AirOutNodeName_ (this),
        SimFlowEnergyTrans_RatedAirFlowRate_ (this),
        SimFlowEnergyTrans_RatedWaterFlowRate_ (this),
        SimFlowEnergyTrans_RatedHeatingCap_ (this),
        SimFlowEnergyTrans_RatedHeatingCoefPerf_ (this),
        SimFlowEnergyTrans_HeatingCapCoef_1_5_ (this),
        SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_ (this)
      {
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit (const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit& x,
                                                                                          ::xml_schema::flags f,
                                                                                          ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatingCoilWater (x, f, c),
        SimFlowEnergyTrans_WaterInletNodeName_ (x.SimFlowEnergyTrans_WaterInletNodeName_, f, this),
        SimFlowEnergyTrans_WaterOutletNodeName_ (x.SimFlowEnergyTrans_WaterOutletNodeName_, f, this),
        SimFlowEnergyTrans_AirInNodeName_ (x.SimFlowEnergyTrans_AirInNodeName_, f, this),
        SimFlowEnergyTrans_AirOutNodeName_ (x.SimFlowEnergyTrans_AirOutNodeName_, f, this),
        SimFlowEnergyTrans_RatedAirFlowRate_ (x.SimFlowEnergyTrans_RatedAirFlowRate_, f, this),
        SimFlowEnergyTrans_RatedWaterFlowRate_ (x.SimFlowEnergyTrans_RatedWaterFlowRate_, f, this),
        SimFlowEnergyTrans_RatedHeatingCap_ (x.SimFlowEnergyTrans_RatedHeatingCap_, f, this),
        SimFlowEnergyTrans_RatedHeatingCoefPerf_ (x.SimFlowEnergyTrans_RatedHeatingCoefPerf_, f, this),
        SimFlowEnergyTrans_HeatingCapCoef_1_5_ (x.SimFlowEnergyTrans_HeatingCapCoef_1_5_, f, this),
        SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_ (x.SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_, f, this)
      {
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit (const ::xercesc::DOMElement& e,
                                                                                          ::xml_schema::flags f,
                                                                                          ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatingCoilWater (e, f | ::xml_schema::flags::base, c),
        SimFlowEnergyTrans_WaterInletNodeName_ (this),
        SimFlowEnergyTrans_WaterOutletNodeName_ (this),
        SimFlowEnergyTrans_AirInNodeName_ (this),
        SimFlowEnergyTrans_AirOutNodeName_ (this),
        SimFlowEnergyTrans_RatedAirFlowRate_ (this),
        SimFlowEnergyTrans_RatedWaterFlowRate_ (this),
        SimFlowEnergyTrans_RatedHeatingCap_ (this),
        SimFlowEnergyTrans_RatedHeatingCoefPerf_ (this),
        SimFlowEnergyTrans_HeatingCapCoef_1_5_ (this),
        SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatingCoilWater::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowEnergyTrans_WaterInletNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_WaterInletNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_WaterInletNodeName_type > r (
              SimFlowEnergyTrans_WaterInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_WaterInletNodeName_)
            {
              this->SimFlowEnergyTrans_WaterInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_WaterOutletNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_WaterOutletNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_WaterOutletNodeName_type > r (
              SimFlowEnergyTrans_WaterOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_WaterOutletNodeName_)
            {
              this->SimFlowEnergyTrans_WaterOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_AirInNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_AirInNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_AirInNodeName_type > r (
              SimFlowEnergyTrans_AirInNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_AirInNodeName_)
            {
              this->SimFlowEnergyTrans_AirInNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_AirOutNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_AirOutNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_AirOutNodeName_type > r (
              SimFlowEnergyTrans_AirOutNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_AirOutNodeName_)
            {
              this->SimFlowEnergyTrans_AirOutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_RatedAirFlowRate
          //
          if (n.name () == "SimFlowEnergyTrans_RatedAirFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_RatedAirFlowRate_)
            {
              this->SimFlowEnergyTrans_RatedAirFlowRate_.set (SimFlowEnergyTrans_RatedAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_RatedWaterFlowRate
          //
          if (n.name () == "SimFlowEnergyTrans_RatedWaterFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_RatedWaterFlowRate_)
            {
              this->SimFlowEnergyTrans_RatedWaterFlowRate_.set (SimFlowEnergyTrans_RatedWaterFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_RatedHeatingCap
          //
          if (n.name () == "SimFlowEnergyTrans_RatedHeatingCap" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_RatedHeatingCap_)
            {
              this->SimFlowEnergyTrans_RatedHeatingCap_.set (SimFlowEnergyTrans_RatedHeatingCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_RatedHeatingCoefPerf
          //
          if (n.name () == "SimFlowEnergyTrans_RatedHeatingCoefPerf" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_RatedHeatingCoefPerf_)
            {
              this->SimFlowEnergyTrans_RatedHeatingCoefPerf_.set (SimFlowEnergyTrans_RatedHeatingCoefPerf_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_HeatingCapCoef_1_5
          //
          if (n.name () == "SimFlowEnergyTrans_HeatingCapCoef_1_5" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_HeatingCapCoef_1_5_type > r (
              SimFlowEnergyTrans_HeatingCapCoef_1_5_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_HeatingCapCoef_1_5_)
            {
              this->SimFlowEnergyTrans_HeatingCapCoef_1_5_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5
          //
          if (n.name () == "SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_type > r (
              SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_)
            {
              this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit* SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit (*this, f, c);
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit& SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      operator= (const SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_HeatingCoilWater& > (*this) = x;
          this->SimFlowEnergyTrans_WaterInletNodeName_ = x.SimFlowEnergyTrans_WaterInletNodeName_;
          this->SimFlowEnergyTrans_WaterOutletNodeName_ = x.SimFlowEnergyTrans_WaterOutletNodeName_;
          this->SimFlowEnergyTrans_AirInNodeName_ = x.SimFlowEnergyTrans_AirInNodeName_;
          this->SimFlowEnergyTrans_AirOutNodeName_ = x.SimFlowEnergyTrans_AirOutNodeName_;
          this->SimFlowEnergyTrans_RatedAirFlowRate_ = x.SimFlowEnergyTrans_RatedAirFlowRate_;
          this->SimFlowEnergyTrans_RatedWaterFlowRate_ = x.SimFlowEnergyTrans_RatedWaterFlowRate_;
          this->SimFlowEnergyTrans_RatedHeatingCap_ = x.SimFlowEnergyTrans_RatedHeatingCap_;
          this->SimFlowEnergyTrans_RatedHeatingCoefPerf_ = x.SimFlowEnergyTrans_RatedHeatingCoefPerf_;
          this->SimFlowEnergyTrans_HeatingCapCoef_1_5_ = x.SimFlowEnergyTrans_HeatingCapCoef_1_5_;
          this->SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_ = x.SimFlowEnergyTrans_HeatingPwrConsumpCoef_1_5_;
        }

        return *this;
      }

      SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit::
      ~SimFlowEnergyTransfer_HeatingCoilWater_CoilAirHeatingWaterToAirHeatPumpEquationFit ()
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
