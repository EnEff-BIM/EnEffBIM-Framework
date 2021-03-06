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

#include "SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling
      // 

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_Name_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_Name () const
      {
        return this->SimFlowPlant_Name_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_Name_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_Name ()
      {
        return this->SimFlowPlant_Name_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_Name (const SimFlowPlant_Name_type& x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_Name (const SimFlowPlant_Name_optional& x)
      {
        this->SimFlowPlant_Name_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_SrcSideInletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideInletNodeName () const
      {
        return this->SimFlowPlant_SrcSideInletNodeName_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_SrcSideInletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideInletNodeName ()
      {
        return this->SimFlowPlant_SrcSideInletNodeName_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideInletNodeName (const SimFlowPlant_SrcSideInletNodeName_type& x)
      {
        this->SimFlowPlant_SrcSideInletNodeName_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideInletNodeName (const SimFlowPlant_SrcSideInletNodeName_optional& x)
      {
        this->SimFlowPlant_SrcSideInletNodeName_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideInletNodeName (::std::auto_ptr< SimFlowPlant_SrcSideInletNodeName_type > x)
      {
        this->SimFlowPlant_SrcSideInletNodeName_.set (x);
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_SrcSideOutletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideOutletNodeName () const
      {
        return this->SimFlowPlant_SrcSideOutletNodeName_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_SrcSideOutletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideOutletNodeName ()
      {
        return this->SimFlowPlant_SrcSideOutletNodeName_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideOutletNodeName (const SimFlowPlant_SrcSideOutletNodeName_type& x)
      {
        this->SimFlowPlant_SrcSideOutletNodeName_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideOutletNodeName (const SimFlowPlant_SrcSideOutletNodeName_optional& x)
      {
        this->SimFlowPlant_SrcSideOutletNodeName_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_SrcSideOutletNodeName (::std::auto_ptr< SimFlowPlant_SrcSideOutletNodeName_type > x)
      {
        this->SimFlowPlant_SrcSideOutletNodeName_.set (x);
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_LoadSideInletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideInletNodeName () const
      {
        return this->SimFlowPlant_LoadSideInletNodeName_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_LoadSideInletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideInletNodeName ()
      {
        return this->SimFlowPlant_LoadSideInletNodeName_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideInletNodeName (const SimFlowPlant_LoadSideInletNodeName_type& x)
      {
        this->SimFlowPlant_LoadSideInletNodeName_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideInletNodeName (const SimFlowPlant_LoadSideInletNodeName_optional& x)
      {
        this->SimFlowPlant_LoadSideInletNodeName_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideInletNodeName (::std::auto_ptr< SimFlowPlant_LoadSideInletNodeName_type > x)
      {
        this->SimFlowPlant_LoadSideInletNodeName_.set (x);
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_LoadSideOutletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideOutletNodeName () const
      {
        return this->SimFlowPlant_LoadSideOutletNodeName_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_LoadSideOutletNodeName_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideOutletNodeName ()
      {
        return this->SimFlowPlant_LoadSideOutletNodeName_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideOutletNodeName (const SimFlowPlant_LoadSideOutletNodeName_type& x)
      {
        this->SimFlowPlant_LoadSideOutletNodeName_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideOutletNodeName (const SimFlowPlant_LoadSideOutletNodeName_optional& x)
      {
        this->SimFlowPlant_LoadSideOutletNodeName_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_LoadSideOutletNodeName (::std::auto_ptr< SimFlowPlant_LoadSideOutletNodeName_type > x)
      {
        this->SimFlowPlant_LoadSideOutletNodeName_.set (x);
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedLoadSideFlowRate_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedLoadSideFlowRate () const
      {
        return this->SimFlowPlant_RatedLoadSideFlowRate_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedLoadSideFlowRate_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedLoadSideFlowRate ()
      {
        return this->SimFlowPlant_RatedLoadSideFlowRate_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedLoadSideFlowRate (const SimFlowPlant_RatedLoadSideFlowRate_type& x)
      {
        this->SimFlowPlant_RatedLoadSideFlowRate_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedLoadSideFlowRate (const SimFlowPlant_RatedLoadSideFlowRate_optional& x)
      {
        this->SimFlowPlant_RatedLoadSideFlowRate_ = x;
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedSrcSideFlowRate_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedSrcSideFlowRate () const
      {
        return this->SimFlowPlant_RatedSrcSideFlowRate_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedSrcSideFlowRate_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedSrcSideFlowRate ()
      {
        return this->SimFlowPlant_RatedSrcSideFlowRate_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedSrcSideFlowRate (const SimFlowPlant_RatedSrcSideFlowRate_type& x)
      {
        this->SimFlowPlant_RatedSrcSideFlowRate_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedSrcSideFlowRate (const SimFlowPlant_RatedSrcSideFlowRate_optional& x)
      {
        this->SimFlowPlant_RatedSrcSideFlowRate_ = x;
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedCoolingCap_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingCap () const
      {
        return this->SimFlowPlant_RatedCoolingCap_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedCoolingCap_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingCap ()
      {
        return this->SimFlowPlant_RatedCoolingCap_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingCap (const SimFlowPlant_RatedCoolingCap_type& x)
      {
        this->SimFlowPlant_RatedCoolingCap_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingCap (const SimFlowPlant_RatedCoolingCap_optional& x)
      {
        this->SimFlowPlant_RatedCoolingCap_ = x;
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedCoolingPwrConsump_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingPwrConsump () const
      {
        return this->SimFlowPlant_RatedCoolingPwrConsump_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_RatedCoolingPwrConsump_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingPwrConsump ()
      {
        return this->SimFlowPlant_RatedCoolingPwrConsump_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingPwrConsump (const SimFlowPlant_RatedCoolingPwrConsump_type& x)
      {
        this->SimFlowPlant_RatedCoolingPwrConsump_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_RatedCoolingPwrConsump (const SimFlowPlant_RatedCoolingPwrConsump_optional& x)
      {
        this->SimFlowPlant_RatedCoolingPwrConsump_ = x;
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_CoolingCapCoef_1_5_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCapCoef_1_5 () const
      {
        return this->SimFlowPlant_CoolingCapCoef_1_5_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_CoolingCapCoef_1_5_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCapCoef_1_5 ()
      {
        return this->SimFlowPlant_CoolingCapCoef_1_5_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCapCoef_1_5 (const SimFlowPlant_CoolingCapCoef_1_5_type& x)
      {
        this->SimFlowPlant_CoolingCapCoef_1_5_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCapCoef_1_5 (const SimFlowPlant_CoolingCapCoef_1_5_optional& x)
      {
        this->SimFlowPlant_CoolingCapCoef_1_5_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCapCoef_1_5 (::std::auto_ptr< SimFlowPlant_CoolingCapCoef_1_5_type > x)
      {
        this->SimFlowPlant_CoolingCapCoef_1_5_.set (x);
      }

      const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_CoolingCompPwrCoef_1_5_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCompPwrCoef_1_5 () const
      {
        return this->SimFlowPlant_CoolingCompPwrCoef_1_5_;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::SimFlowPlant_CoolingCompPwrCoef_1_5_optional& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCompPwrCoef_1_5 ()
      {
        return this->SimFlowPlant_CoolingCompPwrCoef_1_5_;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCompPwrCoef_1_5 (const SimFlowPlant_CoolingCompPwrCoef_1_5_type& x)
      {
        this->SimFlowPlant_CoolingCompPwrCoef_1_5_.set (x);
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCompPwrCoef_1_5 (const SimFlowPlant_CoolingCompPwrCoef_1_5_optional& x)
      {
        this->SimFlowPlant_CoolingCompPwrCoef_1_5_ = x;
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_CoolingCompPwrCoef_1_5 (::std::auto_ptr< SimFlowPlant_CoolingCompPwrCoef_1_5_type > x)
      {
        this->SimFlowPlant_CoolingCompPwrCoef_1_5_.set (x);
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
      // SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling
      //

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling ()
      : ::schema::simxml::MepModel::SimFlowPlant_HeatPump (),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_SrcSideInletNodeName_ (this),
        SimFlowPlant_SrcSideOutletNodeName_ (this),
        SimFlowPlant_LoadSideInletNodeName_ (this),
        SimFlowPlant_LoadSideOutletNodeName_ (this),
        SimFlowPlant_RatedLoadSideFlowRate_ (this),
        SimFlowPlant_RatedSrcSideFlowRate_ (this),
        SimFlowPlant_RatedCoolingCap_ (this),
        SimFlowPlant_RatedCoolingPwrConsump_ (this),
        SimFlowPlant_CoolingCapCoef_1_5_ (this),
        SimFlowPlant_CoolingCompPwrCoef_1_5_ (this)
      {
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowPlant_HeatPump (RefId),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_SrcSideInletNodeName_ (this),
        SimFlowPlant_SrcSideOutletNodeName_ (this),
        SimFlowPlant_LoadSideInletNodeName_ (this),
        SimFlowPlant_LoadSideOutletNodeName_ (this),
        SimFlowPlant_RatedLoadSideFlowRate_ (this),
        SimFlowPlant_RatedSrcSideFlowRate_ (this),
        SimFlowPlant_RatedCoolingCap_ (this),
        SimFlowPlant_RatedCoolingPwrConsump_ (this),
        SimFlowPlant_CoolingCapCoef_1_5_ (this),
        SimFlowPlant_CoolingCompPwrCoef_1_5_ (this)
      {
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling (const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling& x,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_HeatPump (x, f, c),
        SimFlowPlant_Name_ (x.SimFlowPlant_Name_, f, this),
        SimFlowPlant_SrcSideInletNodeName_ (x.SimFlowPlant_SrcSideInletNodeName_, f, this),
        SimFlowPlant_SrcSideOutletNodeName_ (x.SimFlowPlant_SrcSideOutletNodeName_, f, this),
        SimFlowPlant_LoadSideInletNodeName_ (x.SimFlowPlant_LoadSideInletNodeName_, f, this),
        SimFlowPlant_LoadSideOutletNodeName_ (x.SimFlowPlant_LoadSideOutletNodeName_, f, this),
        SimFlowPlant_RatedLoadSideFlowRate_ (x.SimFlowPlant_RatedLoadSideFlowRate_, f, this),
        SimFlowPlant_RatedSrcSideFlowRate_ (x.SimFlowPlant_RatedSrcSideFlowRate_, f, this),
        SimFlowPlant_RatedCoolingCap_ (x.SimFlowPlant_RatedCoolingCap_, f, this),
        SimFlowPlant_RatedCoolingPwrConsump_ (x.SimFlowPlant_RatedCoolingPwrConsump_, f, this),
        SimFlowPlant_CoolingCapCoef_1_5_ (x.SimFlowPlant_CoolingCapCoef_1_5_, f, this),
        SimFlowPlant_CoolingCompPwrCoef_1_5_ (x.SimFlowPlant_CoolingCompPwrCoef_1_5_, f, this)
      {
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling (const ::xercesc::DOMElement& e,
                                                              ::xml_schema::flags f,
                                                              ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_HeatPump (e, f | ::xml_schema::flags::base, c),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_SrcSideInletNodeName_ (this),
        SimFlowPlant_SrcSideOutletNodeName_ (this),
        SimFlowPlant_LoadSideInletNodeName_ (this),
        SimFlowPlant_LoadSideOutletNodeName_ (this),
        SimFlowPlant_RatedLoadSideFlowRate_ (this),
        SimFlowPlant_RatedSrcSideFlowRate_ (this),
        SimFlowPlant_RatedCoolingCap_ (this),
        SimFlowPlant_RatedCoolingPwrConsump_ (this),
        SimFlowPlant_CoolingCapCoef_1_5_ (this),
        SimFlowPlant_CoolingCompPwrCoef_1_5_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowPlant_HeatPump::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowPlant_Name
          //
          if (n.name () == "SimFlowPlant_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_Name_type > r (
              SimFlowPlant_Name_traits::create (i, f, this));

            if (!this->SimFlowPlant_Name_)
            {
              this->SimFlowPlant_Name_.set (r);
              continue;
            }
          }

          // SimFlowPlant_SrcSideInletNodeName
          //
          if (n.name () == "SimFlowPlant_SrcSideInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_SrcSideInletNodeName_type > r (
              SimFlowPlant_SrcSideInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_SrcSideInletNodeName_)
            {
              this->SimFlowPlant_SrcSideInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_SrcSideOutletNodeName
          //
          if (n.name () == "SimFlowPlant_SrcSideOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_SrcSideOutletNodeName_type > r (
              SimFlowPlant_SrcSideOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_SrcSideOutletNodeName_)
            {
              this->SimFlowPlant_SrcSideOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_LoadSideInletNodeName
          //
          if (n.name () == "SimFlowPlant_LoadSideInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_LoadSideInletNodeName_type > r (
              SimFlowPlant_LoadSideInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_LoadSideInletNodeName_)
            {
              this->SimFlowPlant_LoadSideInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_LoadSideOutletNodeName
          //
          if (n.name () == "SimFlowPlant_LoadSideOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_LoadSideOutletNodeName_type > r (
              SimFlowPlant_LoadSideOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowPlant_LoadSideOutletNodeName_)
            {
              this->SimFlowPlant_LoadSideOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_RatedLoadSideFlowRate
          //
          if (n.name () == "SimFlowPlant_RatedLoadSideFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_RatedLoadSideFlowRate_)
            {
              this->SimFlowPlant_RatedLoadSideFlowRate_.set (SimFlowPlant_RatedLoadSideFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_RatedSrcSideFlowRate
          //
          if (n.name () == "SimFlowPlant_RatedSrcSideFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_RatedSrcSideFlowRate_)
            {
              this->SimFlowPlant_RatedSrcSideFlowRate_.set (SimFlowPlant_RatedSrcSideFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_RatedCoolingCap
          //
          if (n.name () == "SimFlowPlant_RatedCoolingCap" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_RatedCoolingCap_)
            {
              this->SimFlowPlant_RatedCoolingCap_.set (SimFlowPlant_RatedCoolingCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_RatedCoolingPwrConsump
          //
          if (n.name () == "SimFlowPlant_RatedCoolingPwrConsump" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_RatedCoolingPwrConsump_)
            {
              this->SimFlowPlant_RatedCoolingPwrConsump_.set (SimFlowPlant_RatedCoolingPwrConsump_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_CoolingCapCoef_1_5
          //
          if (n.name () == "SimFlowPlant_CoolingCapCoef_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_CoolingCapCoef_1_5_type > r (
              SimFlowPlant_CoolingCapCoef_1_5_traits::create (i, f, this));

            if (!this->SimFlowPlant_CoolingCapCoef_1_5_)
            {
              this->SimFlowPlant_CoolingCapCoef_1_5_.set (r);
              continue;
            }
          }

          // SimFlowPlant_CoolingCompPwrCoef_1_5
          //
          if (n.name () == "SimFlowPlant_CoolingCompPwrCoef_1_5" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_CoolingCompPwrCoef_1_5_type > r (
              SimFlowPlant_CoolingCompPwrCoef_1_5_traits::create (i, f, this));

            if (!this->SimFlowPlant_CoolingCompPwrCoef_1_5_)
            {
              this->SimFlowPlant_CoolingCompPwrCoef_1_5_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling* SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling (*this, f, c);
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling& SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      operator= (const SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowPlant_HeatPump& > (*this) = x;
          this->SimFlowPlant_Name_ = x.SimFlowPlant_Name_;
          this->SimFlowPlant_SrcSideInletNodeName_ = x.SimFlowPlant_SrcSideInletNodeName_;
          this->SimFlowPlant_SrcSideOutletNodeName_ = x.SimFlowPlant_SrcSideOutletNodeName_;
          this->SimFlowPlant_LoadSideInletNodeName_ = x.SimFlowPlant_LoadSideInletNodeName_;
          this->SimFlowPlant_LoadSideOutletNodeName_ = x.SimFlowPlant_LoadSideOutletNodeName_;
          this->SimFlowPlant_RatedLoadSideFlowRate_ = x.SimFlowPlant_RatedLoadSideFlowRate_;
          this->SimFlowPlant_RatedSrcSideFlowRate_ = x.SimFlowPlant_RatedSrcSideFlowRate_;
          this->SimFlowPlant_RatedCoolingCap_ = x.SimFlowPlant_RatedCoolingCap_;
          this->SimFlowPlant_RatedCoolingPwrConsump_ = x.SimFlowPlant_RatedCoolingPwrConsump_;
          this->SimFlowPlant_CoolingCapCoef_1_5_ = x.SimFlowPlant_CoolingCapCoef_1_5_;
          this->SimFlowPlant_CoolingCompPwrCoef_1_5_ = x.SimFlowPlant_CoolingCompPwrCoef_1_5_;
        }

        return *this;
      }

      SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling::
      ~SimFlowPlant_HeatPump_WaterToWater_EquationFit_Cooling ()
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

