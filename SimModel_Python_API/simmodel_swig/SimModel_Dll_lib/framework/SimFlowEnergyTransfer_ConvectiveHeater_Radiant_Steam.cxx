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

#include "SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam
      // 

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_InNodeName_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_InNodeName () const
      {
        return this->SimFlowEnergyTrans_InNodeName_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_InNodeName_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_InNodeName ()
      {
        return this->SimFlowEnergyTrans_InNodeName_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_InNodeName (const SimFlowEnergyTrans_InNodeName_type& x)
      {
        this->SimFlowEnergyTrans_InNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_InNodeName (const SimFlowEnergyTrans_InNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_InNodeName_ = x;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_InNodeName (::std::auto_ptr< SimFlowEnergyTrans_InNodeName_type > x)
      {
        this->SimFlowEnergyTrans_InNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_OutNodeName_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_OutNodeName () const
      {
        return this->SimFlowEnergyTrans_OutNodeName_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_OutNodeName_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_OutNodeName ()
      {
        return this->SimFlowEnergyTrans_OutNodeName_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_OutNodeName (const SimFlowEnergyTrans_OutNodeName_type& x)
      {
        this->SimFlowEnergyTrans_OutNodeName_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_OutNodeName (const SimFlowEnergyTrans_OutNodeName_optional& x)
      {
        this->SimFlowEnergyTrans_OutNodeName_ = x;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_OutNodeName (::std::auto_ptr< SimFlowEnergyTrans_OutNodeName_type > x)
      {
        this->SimFlowEnergyTrans_OutNodeName_.set (x);
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_ConvergTol_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_ConvergTol () const
      {
        return this->SimFlowEnergyTrans_ConvergTol_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_ConvergTol_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_ConvergTol ()
      {
        return this->SimFlowEnergyTrans_ConvergTol_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_ConvergTol (const SimFlowEnergyTrans_ConvergTol_type& x)
      {
        this->SimFlowEnergyTrans_ConvergTol_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_ConvergTol (const SimFlowEnergyTrans_ConvergTol_optional& x)
      {
        this->SimFlowEnergyTrans_ConvergTol_ = x;
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_FracRadiant_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FracRadiant () const
      {
        return this->SimFlowEnergyTrans_FracRadiant_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_FracRadiant_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FracRadiant ()
      {
        return this->SimFlowEnergyTrans_FracRadiant_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FracRadiant (const SimFlowEnergyTrans_FracRadiant_type& x)
      {
        this->SimFlowEnergyTrans_FracRadiant_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FracRadiant (const SimFlowEnergyTrans_FracRadiant_optional& x)
      {
        this->SimFlowEnergyTrans_FracRadiant_ = x;
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople () const
      {
        return this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople ()
      {
        return this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople (const SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_type& x)
      {
        this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople (const SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_optional& x)
      {
        this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_ = x;
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_DegreeSubCooling_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_DegreeSubCooling () const
      {
        return this->SimFlowEnergyTrans_DegreeSubCooling_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_DegreeSubCooling_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_DegreeSubCooling ()
      {
        return this->SimFlowEnergyTrans_DegreeSubCooling_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_DegreeSubCooling (const SimFlowEnergyTrans_DegreeSubCooling_type& x)
      {
        this->SimFlowEnergyTrans_DegreeSubCooling_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_DegreeSubCooling (const SimFlowEnergyTrans_DegreeSubCooling_optional& x)
      {
        this->SimFlowEnergyTrans_DegreeSubCooling_ = x;
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_MaxSteamFlowRate_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_MaxSteamFlowRate () const
      {
        return this->SimFlowEnergyTrans_MaxSteamFlowRate_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_MaxSteamFlowRate_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_MaxSteamFlowRate ()
      {
        return this->SimFlowEnergyTrans_MaxSteamFlowRate_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_MaxSteamFlowRate (const SimFlowEnergyTrans_MaxSteamFlowRate_type& x)
      {
        this->SimFlowEnergyTrans_MaxSteamFlowRate_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_MaxSteamFlowRate (const SimFlowEnergyTrans_MaxSteamFlowRate_optional& x)
      {
        this->SimFlowEnergyTrans_MaxSteamFlowRate_ = x;
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_SurfName_1_100_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_SurfName_1_100 () const
      {
        return this->SimFlowEnergyTrans_SurfName_1_100_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_SurfName_1_100_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_SurfName_1_100 ()
      {
        return this->SimFlowEnergyTrans_SurfName_1_100_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_SurfName_1_100 (const SimFlowEnergyTrans_SurfName_1_100_type& x)
      {
        this->SimFlowEnergyTrans_SurfName_1_100_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_SurfName_1_100 (const SimFlowEnergyTrans_SurfName_1_100_optional& x)
      {
        this->SimFlowEnergyTrans_SurfName_1_100_ = x;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_SurfName_1_100 (::std::auto_ptr< SimFlowEnergyTrans_SurfName_1_100_type > x)
      {
        this->SimFlowEnergyTrans_SurfName_1_100_.set (x);
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20 () const
      {
        return this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_optional& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20 ()
      {
        return this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20 (const SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_type& x)
      {
        this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20 (const SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_optional& x)
      {
        this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_ = x;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20 (::std::auto_ptr< SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_type > x)
      {
        this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_.set (x);
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
      // SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam
      //

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam ()
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (),
        SimFlowEnergyTrans_InNodeName_ (this),
        SimFlowEnergyTrans_OutNodeName_ (this),
        SimFlowEnergyTrans_ConvergTol_ (this),
        SimFlowEnergyTrans_FracRadiant_ (this),
        SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_ (this),
        SimFlowEnergyTrans_DegreeSubCooling_ (this),
        SimFlowEnergyTrans_MaxSteamFlowRate_ (this),
        SimFlowEnergyTrans_SurfName_1_100_ (this),
        SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_ (this)
      {
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (RefId),
        SimFlowEnergyTrans_InNodeName_ (this),
        SimFlowEnergyTrans_OutNodeName_ (this),
        SimFlowEnergyTrans_ConvergTol_ (this),
        SimFlowEnergyTrans_FracRadiant_ (this),
        SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_ (this),
        SimFlowEnergyTrans_DegreeSubCooling_ (this),
        SimFlowEnergyTrans_MaxSteamFlowRate_ (this),
        SimFlowEnergyTrans_SurfName_1_100_ (this),
        SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_ (this)
      {
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam (const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam& x,
                                                            ::xml_schema::flags f,
                                                            ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (x, f, c),
        SimFlowEnergyTrans_InNodeName_ (x.SimFlowEnergyTrans_InNodeName_, f, this),
        SimFlowEnergyTrans_OutNodeName_ (x.SimFlowEnergyTrans_OutNodeName_, f, this),
        SimFlowEnergyTrans_ConvergTol_ (x.SimFlowEnergyTrans_ConvergTol_, f, this),
        SimFlowEnergyTrans_FracRadiant_ (x.SimFlowEnergyTrans_FracRadiant_, f, this),
        SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_ (x.SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_, f, this),
        SimFlowEnergyTrans_DegreeSubCooling_ (x.SimFlowEnergyTrans_DegreeSubCooling_, f, this),
        SimFlowEnergyTrans_MaxSteamFlowRate_ (x.SimFlowEnergyTrans_MaxSteamFlowRate_, f, this),
        SimFlowEnergyTrans_SurfName_1_100_ (x.SimFlowEnergyTrans_SurfName_1_100_, f, this),
        SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_ (x.SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_, f, this)
      {
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam (const ::xercesc::DOMElement& e,
                                                            ::xml_schema::flags f,
                                                            ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (e, f | ::xml_schema::flags::base, c),
        SimFlowEnergyTrans_InNodeName_ (this),
        SimFlowEnergyTrans_OutNodeName_ (this),
        SimFlowEnergyTrans_ConvergTol_ (this),
        SimFlowEnergyTrans_FracRadiant_ (this),
        SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_ (this),
        SimFlowEnergyTrans_DegreeSubCooling_ (this),
        SimFlowEnergyTrans_MaxSteamFlowRate_ (this),
        SimFlowEnergyTrans_SurfName_1_100_ (this),
        SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowEnergyTrans_InNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_InNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_InNodeName_type > r (
              SimFlowEnergyTrans_InNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_InNodeName_)
            {
              this->SimFlowEnergyTrans_InNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_OutNodeName
          //
          if (n.name () == "SimFlowEnergyTrans_OutNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_OutNodeName_type > r (
              SimFlowEnergyTrans_OutNodeName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_OutNodeName_)
            {
              this->SimFlowEnergyTrans_OutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_ConvergTol
          //
          if (n.name () == "SimFlowEnergyTrans_ConvergTol" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_ConvergTol_)
            {
              this->SimFlowEnergyTrans_ConvergTol_.set (SimFlowEnergyTrans_ConvergTol_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_FracRadiant
          //
          if (n.name () == "SimFlowEnergyTrans_FracRadiant" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_FracRadiant_)
            {
              this->SimFlowEnergyTrans_FracRadiant_.set (SimFlowEnergyTrans_FracRadiant_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople
          //
          if (n.name () == "SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_)
            {
              this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_.set (SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_DegreeSubCooling
          //
          if (n.name () == "SimFlowEnergyTrans_DegreeSubCooling" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_DegreeSubCooling_)
            {
              this->SimFlowEnergyTrans_DegreeSubCooling_.set (SimFlowEnergyTrans_DegreeSubCooling_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_MaxSteamFlowRate
          //
          if (n.name () == "SimFlowEnergyTrans_MaxSteamFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_MaxSteamFlowRate_)
            {
              this->SimFlowEnergyTrans_MaxSteamFlowRate_.set (SimFlowEnergyTrans_MaxSteamFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_SurfName_1_100
          //
          if (n.name () == "SimFlowEnergyTrans_SurfName_1_100" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_SurfName_1_100_type > r (
              SimFlowEnergyTrans_SurfName_1_100_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_SurfName_1_100_)
            {
              this->SimFlowEnergyTrans_SurfName_1_100_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20
          //
          if (n.name () == "SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_type > r (
              SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_)
            {
              this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam* SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam (*this, f, c);
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam& SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      operator= (const SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater& > (*this) = x;
          this->SimFlowEnergyTrans_InNodeName_ = x.SimFlowEnergyTrans_InNodeName_;
          this->SimFlowEnergyTrans_OutNodeName_ = x.SimFlowEnergyTrans_OutNodeName_;
          this->SimFlowEnergyTrans_ConvergTol_ = x.SimFlowEnergyTrans_ConvergTol_;
          this->SimFlowEnergyTrans_FracRadiant_ = x.SimFlowEnergyTrans_FracRadiant_;
          this->SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_ = x.SimFlowEnergyTrans_FractRadiantEnergycidentOnPeople_;
          this->SimFlowEnergyTrans_DegreeSubCooling_ = x.SimFlowEnergyTrans_DegreeSubCooling_;
          this->SimFlowEnergyTrans_MaxSteamFlowRate_ = x.SimFlowEnergyTrans_MaxSteamFlowRate_;
          this->SimFlowEnergyTrans_SurfName_1_100_ = x.SimFlowEnergyTrans_SurfName_1_100_;
          this->SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_ = x.SimFlowEnergyTrans_FractRadiantEnergyToSurf_1_20_;
        }

        return *this;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam::
      ~SimFlowEnergyTransfer_ConvectiveHeater_Radiant_Steam ()
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

