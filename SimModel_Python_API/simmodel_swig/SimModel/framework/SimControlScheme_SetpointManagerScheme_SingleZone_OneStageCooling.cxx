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

#include "SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling
      // 

      const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_Name () const
      {
        return this->SimCntrlSchm_Name_;
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_Name ()
      {
        return this->SimCntrlSchm_Name_;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_type& x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_optional& x)
      {
        this->SimCntrlSchm_Name_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_Name (::std::auto_ptr< SimCntrlSchm_Name_type > x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_CntlZoneName_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CntlZoneName () const
      {
        return this->SimCntrlSchm_CntlZoneName_;
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_CntlZoneName_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CntlZoneName ()
      {
        return this->SimCntrlSchm_CntlZoneName_;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CntlZoneName (const SimCntrlSchm_CntlZoneName_type& x)
      {
        this->SimCntrlSchm_CntlZoneName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CntlZoneName (const SimCntrlSchm_CntlZoneName_optional& x)
      {
        this->SimCntrlSchm_CntlZoneName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CntlZoneName (::std::auto_ptr< SimCntrlSchm_CntlZoneName_type > x)
      {
        this->SimCntrlSchm_CntlZoneName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_SetpointNodeOrNodeListName () const
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_SetpointNodeOrNodeListName ()
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_type& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_optional& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_SetpointNodeOrNodeListName (::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOnSupplyAirSetptTemp () const
      {
        return this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_;
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOnSupplyAirSetptTemp ()
      {
        return this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOnSupplyAirSetptTemp (const SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_type& x)
      {
        this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOnSupplyAirSetptTemp (const SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_optional& x)
      {
        this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_ = x;
      }

      const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOffSupplyAirSetptTemp () const
      {
        return this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_;
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_optional& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOffSupplyAirSetptTemp ()
      {
        return this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_;
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOffSupplyAirSetptTemp (const SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_type& x)
      {
        this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimCntrlSchm_CoolStageOffSupplyAirSetptTemp (const SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_optional& x)
      {
        this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_ = x;
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
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling
      //

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling ()
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlZoneName_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_ (this),
        SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_ (this)
      {
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (RefId),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlZoneName_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_ (this),
        SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_ (this)
      {
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling (const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling& x,
                                                                         ::xml_schema::flags f,
                                                                         ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (x, f, c),
        SimCntrlSchm_Name_ (x.SimCntrlSchm_Name_, f, this),
        SimCntrlSchm_CntlZoneName_ (x.SimCntrlSchm_CntlZoneName_, f, this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (x.SimCntrlSchm_SetpointNodeOrNodeListName_, f, this),
        SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_ (x.SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_, f, this),
        SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_ (x.SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_, f, this)
      {
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling (const ::xercesc::DOMElement& e,
                                                                         ::xml_schema::flags f,
                                                                         ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlZoneName_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_ (this),
        SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_Name
          //
          if (n.name () == "SimCntrlSchm_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_Name_type > r (
              SimCntrlSchm_Name_traits::create (i, f, this));

            if (!this->SimCntrlSchm_Name_)
            {
              this->SimCntrlSchm_Name_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_CntlZoneName
          //
          if (n.name () == "SimCntrlSchm_CntlZoneName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_CntlZoneName_type > r (
              SimCntrlSchm_CntlZoneName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_CntlZoneName_)
            {
              this->SimCntrlSchm_CntlZoneName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_SetpointNodeOrNodeListName
          //
          if (n.name () == "SimCntrlSchm_SetpointNodeOrNodeListName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > r (
              SimCntrlSchm_SetpointNodeOrNodeListName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_SetpointNodeOrNodeListName_)
            {
              this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_CoolStageOnSupplyAirSetptTemp
          //
          if (n.name () == "SimCntrlSchm_CoolStageOnSupplyAirSetptTemp" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_)
            {
              this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_.set (SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_CoolStageOffSupplyAirSetptTemp
          //
          if (n.name () == "SimCntrlSchm_CoolStageOffSupplyAirSetptTemp" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_)
            {
              this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_.set (SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling* SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling (*this, f, c);
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling& SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      operator= (const SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme& > (*this) = x;
          this->SimCntrlSchm_Name_ = x.SimCntrlSchm_Name_;
          this->SimCntrlSchm_CntlZoneName_ = x.SimCntrlSchm_CntlZoneName_;
          this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x.SimCntrlSchm_SetpointNodeOrNodeListName_;
          this->SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_ = x.SimCntrlSchm_CoolStageOnSupplyAirSetptTemp_;
          this->SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_ = x.SimCntrlSchm_CoolStageOffSupplyAirSetptTemp_;
        }

        return *this;
      }

      SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling::
      ~SimControlScheme_SetpointManagerScheme_SingleZone_OneStageCooling ()
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
    namespace ResourcesGeneral
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
