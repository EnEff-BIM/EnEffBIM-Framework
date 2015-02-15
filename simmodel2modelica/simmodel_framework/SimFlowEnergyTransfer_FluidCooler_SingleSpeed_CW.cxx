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

#include "SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW
      // 

      const SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_NomCap_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_NomCap () const
      {
        return this->SimFlowEnergyTrans_NomCap_;
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_NomCap_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_NomCap ()
      {
        return this->SimFlowEnergyTrans_NomCap_;
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_NomCap (const SimFlowEnergyTrans_NomCap_type& x)
      {
        this->SimFlowEnergyTrans_NomCap_.set (x);
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_NomCap (const SimFlowEnergyTrans_NomCap_optional& x)
      {
        this->SimFlowEnergyTrans_NomCap_ = x;
      }

      const SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_DesignAirFlowRate_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_DesignAirFlowRate () const
      {
        return this->SimFlowEnergyTrans_DesignAirFlowRate_;
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_DesignAirFlowRate_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_DesignAirFlowRate ()
      {
        return this->SimFlowEnergyTrans_DesignAirFlowRate_;
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_DesignAirFlowRate (const SimFlowEnergyTrans_DesignAirFlowRate_type& x)
      {
        this->SimFlowEnergyTrans_DesignAirFlowRate_.set (x);
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_DesignAirFlowRate (const SimFlowEnergyTrans_DesignAirFlowRate_optional& x)
      {
        this->SimFlowEnergyTrans_DesignAirFlowRate_ = x;
      }

      const SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate () const
      {
        return this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_;
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate ()
      {
        return this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_;
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate (const SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_type& x)
      {
        this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_.set (x);
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate (const SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_optional& x)
      {
        this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_ = x;
      }

      const SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate () const
      {
        return this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_;
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_optional& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate ()
      {
        return this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_;
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate (const SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_type& x)
      {
        this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_.set (x);
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate (const SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_optional& x)
      {
        this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_ = x;
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
      // SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW
      //

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_FluidCooler (RefId),
        SimFlowEnergyTrans_NomCap_ (this),
        SimFlowEnergyTrans_DesignAirFlowRate_ (this),
        SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_ (this),
        SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_ (this)
      {
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW (const SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW& x,
                                                        ::xml_schema::flags f,
                                                        ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_FluidCooler (x, f, c),
        SimFlowEnergyTrans_NomCap_ (x.SimFlowEnergyTrans_NomCap_, f, this),
        SimFlowEnergyTrans_DesignAirFlowRate_ (x.SimFlowEnergyTrans_DesignAirFlowRate_, f, this),
        SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_ (x.SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_, f, this),
        SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_ (x.SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_, f, this)
      {
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW (const ::xercesc::DOMElement& e,
                                                        ::xml_schema::flags f,
                                                        ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_FluidCooler (e, f | ::xml_schema::flags::base, c),
        SimFlowEnergyTrans_NomCap_ (this),
        SimFlowEnergyTrans_DesignAirFlowRate_ (this),
        SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_ (this),
        SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowEnergyTransfer_FluidCooler::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowEnergyTrans_NomCap
          //
          if (n.name () == "SimFlowEnergyTrans_NomCap" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_NomCap_)
            {
              this->SimFlowEnergyTrans_NomCap_.set (SimFlowEnergyTrans_NomCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_DesignAirFlowRate
          //
          if (n.name () == "SimFlowEnergyTrans_DesignAirFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_DesignAirFlowRate_)
            {
              this->SimFlowEnergyTrans_DesignAirFlowRate_.set (SimFlowEnergyTrans_DesignAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate
          //
          if (n.name () == "SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_)
            {
              this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_.set (SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate
          //
          if (n.name () == "SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_)
            {
              this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_.set (SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW* SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW (*this, f, c);
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW& SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      operator= (const SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowEnergyTransfer_FluidCooler& > (*this) = x;
          this->SimFlowEnergyTrans_NomCap_ = x.SimFlowEnergyTrans_NomCap_;
          this->SimFlowEnergyTrans_DesignAirFlowRate_ = x.SimFlowEnergyTrans_DesignAirFlowRate_;
          this->SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_ = x.SimFlowEnergyTrans_FanPwrAtDesignAirFlowRate_;
          this->SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_ = x.SimFlowEnergyTrans_UFactorTimesAreaValAtDesignAirFlowRate_;
        }

        return *this;
      }

      SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW::
      ~SimFlowEnergyTransfer_FluidCooler_SingleSpeed_CW ()
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

