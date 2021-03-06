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

#include "SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat
      // 

      const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_Name_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_Name () const
      {
        return this->SimFlowTerm_Name_;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_Name_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_Name ()
      {
        return this->SimFlowTerm_Name_;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_Name (const SimFlowTerm_Name_type& x)
      {
        this->SimFlowTerm_Name_.set (x);
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_Name (const SimFlowTerm_Name_optional& x)
      {
        this->SimFlowTerm_Name_ = x;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_Name (::std::auto_ptr< SimFlowTerm_Name_type > x)
      {
        this->SimFlowTerm_Name_.set (x);
      }

      const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_AvailSchedName_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AvailSchedName () const
      {
        return this->SimFlowTerm_AvailSchedName_;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_AvailSchedName_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AvailSchedName ()
      {
        return this->SimFlowTerm_AvailSchedName_;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_type& x)
      {
        this->SimFlowTerm_AvailSchedName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AvailSchedName (const SimFlowTerm_AvailSchedName_optional& x)
      {
        this->SimFlowTerm_AvailSchedName_ = x;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AvailSchedName (::std::auto_ptr< SimFlowTerm_AvailSchedName_type > x)
      {
        this->SimFlowTerm_AvailSchedName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_MaxAirFlowRate_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_MaxAirFlowRate () const
      {
        return this->SimFlowTerm_MaxAirFlowRate_;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_MaxAirFlowRate_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_MaxAirFlowRate ()
      {
        return this->SimFlowTerm_MaxAirFlowRate_;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_MaxAirFlowRate (const SimFlowTerm_MaxAirFlowRate_type& x)
      {
        this->SimFlowTerm_MaxAirFlowRate_.set (x);
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_MaxAirFlowRate (const SimFlowTerm_MaxAirFlowRate_optional& x)
      {
        this->SimFlowTerm_MaxAirFlowRate_ = x;
      }

      const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_AirOutNodeName_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirOutNodeName () const
      {
        return this->SimFlowTerm_AirOutNodeName_;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_AirOutNodeName_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirOutNodeName ()
      {
        return this->SimFlowTerm_AirOutNodeName_;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_type& x)
      {
        this->SimFlowTerm_AirOutNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirOutNodeName (const SimFlowTerm_AirOutNodeName_optional& x)
      {
        this->SimFlowTerm_AirOutNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirOutNodeName (::std::auto_ptr< SimFlowTerm_AirOutNodeName_type > x)
      {
        this->SimFlowTerm_AirOutNodeName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_AirInNodeName_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirInNodeName () const
      {
        return this->SimFlowTerm_AirInNodeName_;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_AirInNodeName_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirInNodeName ()
      {
        return this->SimFlowTerm_AirInNodeName_;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirInNodeName (const SimFlowTerm_AirInNodeName_type& x)
      {
        this->SimFlowTerm_AirInNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirInNodeName (const SimFlowTerm_AirInNodeName_optional& x)
      {
        this->SimFlowTerm_AirInNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_AirInNodeName (::std::auto_ptr< SimFlowTerm_AirInNodeName_type > x)
      {
        this->SimFlowTerm_AirInNodeName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_ZoneMinAirFlowFract_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_ZoneMinAirFlowFract () const
      {
        return this->SimFlowTerm_ZoneMinAirFlowFract_;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::SimFlowTerm_ZoneMinAirFlowFract_optional& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_ZoneMinAirFlowFract ()
      {
        return this->SimFlowTerm_ZoneMinAirFlowFract_;
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_ZoneMinAirFlowFract (const SimFlowTerm_ZoneMinAirFlowFract_type& x)
      {
        this->SimFlowTerm_ZoneMinAirFlowFract_.set (x);
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerm_ZoneMinAirFlowFract (const SimFlowTerm_ZoneMinAirFlowFract_optional& x)
      {
        this->SimFlowTerm_ZoneMinAirFlowFract_ = x;
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
      // SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat
      //

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat ()
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (),
        SimFlowTerm_Name_ (this),
        SimFlowTerm_AvailSchedName_ (this),
        SimFlowTerm_MaxAirFlowRate_ (this),
        SimFlowTerm_AirOutNodeName_ (this),
        SimFlowTerm_AirInNodeName_ (this),
        SimFlowTerm_ZoneMinAirFlowFract_ (this)
      {
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (RefId),
        SimFlowTerm_Name_ (this),
        SimFlowTerm_AvailSchedName_ (this),
        SimFlowTerm_MaxAirFlowRate_ (this),
        SimFlowTerm_AirOutNodeName_ (this),
        SimFlowTerm_AirInNodeName_ (this),
        SimFlowTerm_ZoneMinAirFlowFract_ (this)
      {
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat (const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat& x,
                                                            ::xml_schema::flags f,
                                                            ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (x, f, c),
        SimFlowTerm_Name_ (x.SimFlowTerm_Name_, f, this),
        SimFlowTerm_AvailSchedName_ (x.SimFlowTerm_AvailSchedName_, f, this),
        SimFlowTerm_MaxAirFlowRate_ (x.SimFlowTerm_MaxAirFlowRate_, f, this),
        SimFlowTerm_AirOutNodeName_ (x.SimFlowTerm_AirOutNodeName_, f, this),
        SimFlowTerm_AirInNodeName_ (x.SimFlowTerm_AirInNodeName_, f, this),
        SimFlowTerm_ZoneMinAirFlowFract_ (x.SimFlowTerm_ZoneMinAirFlowFract_, f, this)
      {
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat (const ::xercesc::DOMElement& e,
                                                            ::xml_schema::flags f,
                                                            ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (e, f | ::xml_schema::flags::base, c),
        SimFlowTerm_Name_ (this),
        SimFlowTerm_AvailSchedName_ (this),
        SimFlowTerm_MaxAirFlowRate_ (this),
        SimFlowTerm_AirOutNodeName_ (this),
        SimFlowTerm_AirInNodeName_ (this),
        SimFlowTerm_ZoneMinAirFlowFract_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowTerminal_AirTerminal::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowTerm_Name
          //
          if (n.name () == "SimFlowTerm_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_Name_type > r (
              SimFlowTerm_Name_traits::create (i, f, this));

            if (!this->SimFlowTerm_Name_)
            {
              this->SimFlowTerm_Name_.set (r);
              continue;
            }
          }

          // SimFlowTerm_AvailSchedName
          //
          if (n.name () == "SimFlowTerm_AvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
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
          if (n.name () == "SimFlowTerm_MaxAirFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowTerm_MaxAirFlowRate_)
            {
              this->SimFlowTerm_MaxAirFlowRate_.set (SimFlowTerm_MaxAirFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowTerm_AirOutNodeName
          //
          if (n.name () == "SimFlowTerm_AirOutNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_AirOutNodeName_type > r (
              SimFlowTerm_AirOutNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_AirOutNodeName_)
            {
              this->SimFlowTerm_AirOutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_AirInNodeName
          //
          if (n.name () == "SimFlowTerm_AirInNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_AirInNodeName_type > r (
              SimFlowTerm_AirInNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_AirInNodeName_)
            {
              this->SimFlowTerm_AirInNodeName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_ZoneMinAirFlowFract
          //
          if (n.name () == "SimFlowTerm_ZoneMinAirFlowFract" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowTerm_ZoneMinAirFlowFract_)
            {
              this->SimFlowTerm_ZoneMinAirFlowFract_.set (SimFlowTerm_ZoneMinAirFlowFract_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat* SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat (*this, f, c);
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat& SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      operator= (const SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal& > (*this) = x;
          this->SimFlowTerm_Name_ = x.SimFlowTerm_Name_;
          this->SimFlowTerm_AvailSchedName_ = x.SimFlowTerm_AvailSchedName_;
          this->SimFlowTerm_MaxAirFlowRate_ = x.SimFlowTerm_MaxAirFlowRate_;
          this->SimFlowTerm_AirOutNodeName_ = x.SimFlowTerm_AirOutNodeName_;
          this->SimFlowTerm_AirInNodeName_ = x.SimFlowTerm_AirInNodeName_;
          this->SimFlowTerm_ZoneMinAirFlowFract_ = x.SimFlowTerm_ZoneMinAirFlowFract_;
        }

        return *this;
      }

      SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat::
      ~SimFlowTerminal_AirTerminal_VAV_HeatAndCool_NoReheat ()
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

