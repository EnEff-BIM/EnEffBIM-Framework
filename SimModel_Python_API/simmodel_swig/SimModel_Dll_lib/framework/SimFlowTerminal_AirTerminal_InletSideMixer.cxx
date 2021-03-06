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

#include "SimFlowTerminal_AirTerminal_InletSideMixer.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowTerminal_AirTerminal_InletSideMixer
      // 

      const SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_Name_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_Name () const
      {
        return this->SimFlowTerm_Name_;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_Name_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_Name ()
      {
        return this->SimFlowTerm_Name_;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_Name (const SimFlowTerm_Name_type& x)
      {
        this->SimFlowTerm_Name_.set (x);
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_Name (const SimFlowTerm_Name_optional& x)
      {
        this->SimFlowTerm_Name_ = x;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_Name (::std::auto_ptr< SimFlowTerm_Name_type > x)
      {
        this->SimFlowTerm_Name_.set (x);
      }

      const SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_ZoneHVACTerminalUnitObjectType_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitObjectType () const
      {
        return this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_ZoneHVACTerminalUnitObjectType_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitObjectType ()
      {
        return this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitObjectType (const SimFlowTerm_ZoneHVACTerminalUnitObjectType_type& x)
      {
        this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_.set (x);
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitObjectType (const SimFlowTerm_ZoneHVACTerminalUnitObjectType_optional& x)
      {
        this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_ = x;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitObjectType (::std::auto_ptr< SimFlowTerm_ZoneHVACTerminalUnitObjectType_type > x)
      {
        this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_.set (x);
      }

      const SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_ZoneHVACTerminalUnitName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitName () const
      {
        return this->SimFlowTerm_ZoneHVACTerminalUnitName_;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_ZoneHVACTerminalUnitName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitName ()
      {
        return this->SimFlowTerm_ZoneHVACTerminalUnitName_;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitName (const SimFlowTerm_ZoneHVACTerminalUnitName_type& x)
      {
        this->SimFlowTerm_ZoneHVACTerminalUnitName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitName (const SimFlowTerm_ZoneHVACTerminalUnitName_optional& x)
      {
        this->SimFlowTerm_ZoneHVACTerminalUnitName_ = x;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_ZoneHVACTerminalUnitName (::std::auto_ptr< SimFlowTerm_ZoneHVACTerminalUnitName_type > x)
      {
        this->SimFlowTerm_ZoneHVACTerminalUnitName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_TerminalUnitOutletNodeName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitOutletNodeName () const
      {
        return this->SimFlowTerm_TerminalUnitOutletNodeName_;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_TerminalUnitOutletNodeName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitOutletNodeName ()
      {
        return this->SimFlowTerm_TerminalUnitOutletNodeName_;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitOutletNodeName (const SimFlowTerm_TerminalUnitOutletNodeName_type& x)
      {
        this->SimFlowTerm_TerminalUnitOutletNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitOutletNodeName (const SimFlowTerm_TerminalUnitOutletNodeName_optional& x)
      {
        this->SimFlowTerm_TerminalUnitOutletNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitOutletNodeName (::std::auto_ptr< SimFlowTerm_TerminalUnitOutletNodeName_type > x)
      {
        this->SimFlowTerm_TerminalUnitOutletNodeName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitPrimaryAirInletNodeName () const
      {
        return this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitPrimaryAirInletNodeName ()
      {
        return this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitPrimaryAirInletNodeName (const SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_type& x)
      {
        this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitPrimaryAirInletNodeName (const SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_optional& x)
      {
        this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitPrimaryAirInletNodeName (::std::auto_ptr< SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_type > x)
      {
        this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_.set (x);
      }

      const SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitSecondaryAirInletNodeName () const
      {
        return this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_optional& SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitSecondaryAirInletNodeName ()
      {
        return this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitSecondaryAirInletNodeName (const SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_type& x)
      {
        this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_.set (x);
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitSecondaryAirInletNodeName (const SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_optional& x)
      {
        this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_ = x;
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerm_TerminalUnitSecondaryAirInletNodeName (::std::auto_ptr< SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_type > x)
      {
        this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_.set (x);
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
      // SimFlowTerminal_AirTerminal_InletSideMixer
      //

      SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerminal_AirTerminal_InletSideMixer ()
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (),
        SimFlowTerm_Name_ (this),
        SimFlowTerm_ZoneHVACTerminalUnitObjectType_ (this),
        SimFlowTerm_ZoneHVACTerminalUnitName_ (this),
        SimFlowTerm_TerminalUnitOutletNodeName_ (this),
        SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_ (this),
        SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_ (this)
      {
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerminal_AirTerminal_InletSideMixer (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (RefId),
        SimFlowTerm_Name_ (this),
        SimFlowTerm_ZoneHVACTerminalUnitObjectType_ (this),
        SimFlowTerm_ZoneHVACTerminalUnitName_ (this),
        SimFlowTerm_TerminalUnitOutletNodeName_ (this),
        SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_ (this),
        SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_ (this)
      {
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerminal_AirTerminal_InletSideMixer (const SimFlowTerminal_AirTerminal_InletSideMixer& x,
                                                  ::xml_schema::flags f,
                                                  ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (x, f, c),
        SimFlowTerm_Name_ (x.SimFlowTerm_Name_, f, this),
        SimFlowTerm_ZoneHVACTerminalUnitObjectType_ (x.SimFlowTerm_ZoneHVACTerminalUnitObjectType_, f, this),
        SimFlowTerm_ZoneHVACTerminalUnitName_ (x.SimFlowTerm_ZoneHVACTerminalUnitName_, f, this),
        SimFlowTerm_TerminalUnitOutletNodeName_ (x.SimFlowTerm_TerminalUnitOutletNodeName_, f, this),
        SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_ (x.SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_, f, this),
        SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_ (x.SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_, f, this)
      {
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::
      SimFlowTerminal_AirTerminal_InletSideMixer (const ::xercesc::DOMElement& e,
                                                  ::xml_schema::flags f,
                                                  ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal (e, f | ::xml_schema::flags::base, c),
        SimFlowTerm_Name_ (this),
        SimFlowTerm_ZoneHVACTerminalUnitObjectType_ (this),
        SimFlowTerm_ZoneHVACTerminalUnitName_ (this),
        SimFlowTerm_TerminalUnitOutletNodeName_ (this),
        SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_ (this),
        SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowTerminal_AirTerminal_InletSideMixer::
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

          // SimFlowTerm_ZoneHVACTerminalUnitObjectType
          //
          if (n.name () == "SimFlowTerm_ZoneHVACTerminalUnitObjectType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_ZoneHVACTerminalUnitObjectType_type > r (
              SimFlowTerm_ZoneHVACTerminalUnitObjectType_traits::create (i, f, this));

            if (!this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_)
            {
              this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_.set (r);
              continue;
            }
          }

          // SimFlowTerm_ZoneHVACTerminalUnitName
          //
          if (n.name () == "SimFlowTerm_ZoneHVACTerminalUnitName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_ZoneHVACTerminalUnitName_type > r (
              SimFlowTerm_ZoneHVACTerminalUnitName_traits::create (i, f, this));

            if (!this->SimFlowTerm_ZoneHVACTerminalUnitName_)
            {
              this->SimFlowTerm_ZoneHVACTerminalUnitName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_TerminalUnitOutletNodeName
          //
          if (n.name () == "SimFlowTerm_TerminalUnitOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_TerminalUnitOutletNodeName_type > r (
              SimFlowTerm_TerminalUnitOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_TerminalUnitOutletNodeName_)
            {
              this->SimFlowTerm_TerminalUnitOutletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_TerminalUnitPrimaryAirInletNodeName
          //
          if (n.name () == "SimFlowTerm_TerminalUnitPrimaryAirInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_type > r (
              SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_)
            {
              this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_.set (r);
              continue;
            }
          }

          // SimFlowTerm_TerminalUnitSecondaryAirInletNodeName
          //
          if (n.name () == "SimFlowTerm_TerminalUnitSecondaryAirInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_type > r (
              SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_traits::create (i, f, this));

            if (!this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_)
            {
              this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowTerminal_AirTerminal_InletSideMixer* SimFlowTerminal_AirTerminal_InletSideMixer::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowTerminal_AirTerminal_InletSideMixer (*this, f, c);
      }

      SimFlowTerminal_AirTerminal_InletSideMixer& SimFlowTerminal_AirTerminal_InletSideMixer::
      operator= (const SimFlowTerminal_AirTerminal_InletSideMixer& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowTerminal_AirTerminal& > (*this) = x;
          this->SimFlowTerm_Name_ = x.SimFlowTerm_Name_;
          this->SimFlowTerm_ZoneHVACTerminalUnitObjectType_ = x.SimFlowTerm_ZoneHVACTerminalUnitObjectType_;
          this->SimFlowTerm_ZoneHVACTerminalUnitName_ = x.SimFlowTerm_ZoneHVACTerminalUnitName_;
          this->SimFlowTerm_TerminalUnitOutletNodeName_ = x.SimFlowTerm_TerminalUnitOutletNodeName_;
          this->SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_ = x.SimFlowTerm_TerminalUnitPrimaryAirInletNodeName_;
          this->SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_ = x.SimFlowTerm_TerminalUnitSecondaryAirInletNodeName_;
        }

        return *this;
      }

      SimFlowTerminal_AirTerminal_InletSideMixer::
      ~SimFlowTerminal_AirTerminal_InletSideMixer ()
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

