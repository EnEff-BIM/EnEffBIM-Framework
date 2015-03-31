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

#include "SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume
      // 

      const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_AvailSchedName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AvailSchedName () const
      {
        return this->SimFlowTerm_AvailSchedName_;
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_AvailSchedName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AvailSchedName ()
      {
        return this->SimFlowTerm_AvailSchedName_;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_type& x)
      {
        this->SimFlowTerm_AvailSchedName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_optional& x)
      {
        this->SimFlowTerm_AvailSchedName_ = x;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AvailSchedName (::std::auto_ptr< SimFlowTerm_AvailSchedName_type > x)
      {
        this->SimFlowTerm_AvailSchedName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_MaxAirFlowRate_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_MaxAirFlowRate () const
      {
        return this->SimFlowTerm_MaxAirFlowRate_;
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_MaxAirFlowRate_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_MaxAirFlowRate ()
      {
        return this->SimFlowTerm_MaxAirFlowRate_;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_MaxAirFlowRate (const SimFlowTerm_MaxAirFlowRate_type& x)
      {
        this->SimFlowTerm_MaxAirFlowRate_.set (x);
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_MaxAirFlowRate (const SimFlowTerm_MaxAirFlowRate_optional& x)
      {
        this->SimFlowTerm_MaxAirFlowRate_ = x;
      }

      const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_AirOutNodeName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AirOutNodeName () const
      {
        return this->SimFlowTerm_AirOutNodeName_;
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_AirOutNodeName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AirOutNodeName ()
      {
        return this->SimFlowTerm_AirOutNodeName_;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_type& x)
      {
        this->SimFlowTerm_AirOutNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_optional& x)
      {
        this->SimFlowTerm_AirOutNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_AirOutNodeName (::std::auto_ptr< SimFlowTerm_AirOutNodeName_type > x)
      {
        this->SimFlowTerm_AirOutNodeName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_HotAirInletNodeName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_HotAirInletNodeName () const
      {
        return this->SimFlowTerm_HotAirInletNodeName_;
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_HotAirInletNodeName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_HotAirInletNodeName ()
      {
        return this->SimFlowTerm_HotAirInletNodeName_;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_HotAirInletNodeName (const SimFlowTerm_HotAirInletNodeName_type& x)
      {
        this->SimFlowTerm_HotAirInletNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_HotAirInletNodeName (const SimFlowTerm_HotAirInletNodeName_optional& x)
      {
        this->SimFlowTerm_HotAirInletNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_HotAirInletNodeName (::std::auto_ptr< SimFlowTerm_HotAirInletNodeName_type > x)
      {
        this->SimFlowTerm_HotAirInletNodeName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_ColdAirInletNodeName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_ColdAirInletNodeName () const
      {
        return this->SimFlowTerm_ColdAirInletNodeName_;
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::SimFlowTerm_ColdAirInletNodeName_optional& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_ColdAirInletNodeName ()
      {
        return this->SimFlowTerm_ColdAirInletNodeName_;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_ColdAirInletNodeName (const SimFlowTerm_ColdAirInletNodeName_type& x)
      {
        this->SimFlowTerm_ColdAirInletNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_ColdAirInletNodeName (const SimFlowTerm_ColdAirInletNodeName_optional& x)
      {
        this->SimFlowTerm_ColdAirInletNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerm_ColdAirInletNodeName (::std::auto_ptr< SimFlowTerm_ColdAirInletNodeName_type > x)
      {
        this->SimFlowTerm_ColdAirInletNodeName_.set (x);
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
      // SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume
      //

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal (RefId),
        SimFlowTerm_AvailSchedName_ (this),
        SimFlowTerm_MaxAirFlowRate_ (this),
        SimFlowTerm_AirOutNodeName_ (this),
        SimFlowTerm_HotAirInletNodeName_ (this),
        SimFlowTerm_ColdAirInletNodeName_ (this)
      {
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume (const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume& x,
                                                                       ::xml_schema::flags f,
                                                                       ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal (x, f, c),
        SimFlowTerm_AvailSchedName_ (x.SimFlowTerm_AvailSchedName_, f, this),
        SimFlowTerm_MaxAirFlowRate_ (x.SimFlowTerm_MaxAirFlowRate_, f, this),
        SimFlowTerm_AirOutNodeName_ (x.SimFlowTerm_AirOutNodeName_, f, this),
        SimFlowTerm_HotAirInletNodeName_ (x.SimFlowTerm_HotAirInletNodeName_, f, this),
        SimFlowTerm_ColdAirInletNodeName_ (x.SimFlowTerm_ColdAirInletNodeName_, f, this)
      {
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume (const ::xercesc::DOMElement& e,
                                                                       ::xml_schema::flags f,
                                                                       ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal (e, f | ::xml_schema::flags::base, c),
        SimFlowTerm_AvailSchedName_ (this),
        SimFlowTerm_MaxAirFlowRate_ (this),
        SimFlowTerm_AirOutNodeName_ (this),
        SimFlowTerm_HotAirInletNodeName_ (this),
        SimFlowTerm_ColdAirInletNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowTerm_AvailSchedName
          //
          if (n.name () == "SimFlowTerm_AvailSchedName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_AvailSchedName_type > r (
              SimFlowTerm_AvailSchedName_traits::create (i, f, this));

            if (!this->SimFlowTerm_AvailSchedName_)
            {
              this->SimFlowTerm_AvailSchedName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_MaxAirFlowRate
          //
          if (n.name () == "SimFlowTerm_MaxAirFlowRate" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowTerm_MaxAirFlowRate_)
            {
              this->SimFlowTerm_MaxAirFlowRate_.set (SimFlowTerm_MaxAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowTerm_AirOutNodeName
          //
          if (n.name () == "SimFlowTerm_AirOutNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_AirOutNodeName_type > r (
              SimFlowTerm_AirOutNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_AirOutNodeName_)
            {
              this->SimFlowTerm_AirOutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_HotAirInletNodeName
          //
          if (n.name () == "SimFlowTerm_HotAirInletNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_HotAirInletNodeName_type > r (
              SimFlowTerm_HotAirInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_HotAirInletNodeName_)
            {
              this->SimFlowTerm_HotAirInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_ColdAirInletNodeName
          //
          if (n.name () == "SimFlowTerm_ColdAirInletNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_ColdAirInletNodeName_type > r (
              SimFlowTerm_ColdAirInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_ColdAirInletNodeName_)
            {
              this->SimFlowTerm_ColdAirInletNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume* SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume (*this, f, c);
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume& SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      operator= (const SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowTerminal_AirTerminal& > (*this) = x;
          this->SimFlowTerm_AvailSchedName_ = x.SimFlowTerm_AvailSchedName_;
          this->SimFlowTerm_MaxAirFlowRate_ = x.SimFlowTerm_MaxAirFlowRate_;
          this->SimFlowTerm_AirOutNodeName_ = x.SimFlowTerm_AirOutNodeName_;
          this->SimFlowTerm_HotAirInletNodeName_ = x.SimFlowTerm_HotAirInletNodeName_;
          this->SimFlowTerm_ColdAirInletNodeName_ = x.SimFlowTerm_ColdAirInletNodeName_;
        }

        return *this;
      }

      SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume::
      ~SimFlowTerminal_AirTerminal_AirTerminal_DualDuct_ConstantVolume ()
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
