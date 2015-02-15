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

#include "SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset
      // 

      const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_Name () const
      {
        return this->SimCntrlSchm_Name_;
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_Name ()
      {
        return this->SimCntrlSchm_Name_;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_type& x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_optional& x)
      {
        this->SimCntrlSchm_Name_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_Name (::std::auto_ptr< SimCntrlSchm_Name_type > x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_HVACAirLoopName_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_HVACAirLoopName () const
      {
        return this->SimCntrlSchm_HVACAirLoopName_;
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_HVACAirLoopName_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_HVACAirLoopName ()
      {
        return this->SimCntrlSchm_HVACAirLoopName_;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_HVACAirLoopName (const SimCntrlSchm_HVACAirLoopName_type& x)
      {
        this->SimCntrlSchm_HVACAirLoopName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_HVACAirLoopName (const SimCntrlSchm_HVACAirLoopName_optional& x)
      {
        this->SimCntrlSchm_HVACAirLoopName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_HVACAirLoopName (::std::auto_ptr< SimCntrlSchm_HVACAirLoopName_type > x)
      {
        this->SimCntrlSchm_HVACAirLoopName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_SetpointNodeOrNodeListName () const
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_SetpointNodeOrNodeListName ()
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_type& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_optional& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_SetpointNodeOrNodeListName (::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_MinSetpointHumidRatio_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MinSetpointHumidRatio () const
      {
        return this->SimCntrlSchm_MinSetpointHumidRatio_;
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_MinSetpointHumidRatio_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MinSetpointHumidRatio ()
      {
        return this->SimCntrlSchm_MinSetpointHumidRatio_;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MinSetpointHumidRatio (const SimCntrlSchm_MinSetpointHumidRatio_type& x)
      {
        this->SimCntrlSchm_MinSetpointHumidRatio_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MinSetpointHumidRatio (const SimCntrlSchm_MinSetpointHumidRatio_optional& x)
      {
        this->SimCntrlSchm_MinSetpointHumidRatio_ = x;
      }

      const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_MaxSetpointHumidRatio_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MaxSetpointHumidRatio () const
      {
        return this->SimCntrlSchm_MaxSetpointHumidRatio_;
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::SimCntrlSchm_MaxSetpointHumidRatio_optional& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MaxSetpointHumidRatio ()
      {
        return this->SimCntrlSchm_MaxSetpointHumidRatio_;
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MaxSetpointHumidRatio (const SimCntrlSchm_MaxSetpointHumidRatio_type& x)
      {
        this->SimCntrlSchm_MaxSetpointHumidRatio_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimCntrlSchm_MaxSetpointHumidRatio (const SimCntrlSchm_MaxSetpointHumidRatio_optional& x)
      {
        this->SimCntrlSchm_MaxSetpointHumidRatio_ = x;
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
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset
      //

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (RefId),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_HVACAirLoopName_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_MinSetpointHumidRatio_ (this),
        SimCntrlSchm_MaxSetpointHumidRatio_ (this)
      {
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset (const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset& x,
                                                                  ::xml_schema::flags f,
                                                                  ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (x, f, c),
        SimCntrlSchm_Name_ (x.SimCntrlSchm_Name_, f, this),
        SimCntrlSchm_HVACAirLoopName_ (x.SimCntrlSchm_HVACAirLoopName_, f, this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (x.SimCntrlSchm_SetpointNodeOrNodeListName_, f, this),
        SimCntrlSchm_MinSetpointHumidRatio_ (x.SimCntrlSchm_MinSetpointHumidRatio_, f, this),
        SimCntrlSchm_MaxSetpointHumidRatio_ (x.SimCntrlSchm_MaxSetpointHumidRatio_, f, this)
      {
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset (const ::xercesc::DOMElement& e,
                                                                  ::xml_schema::flags f,
                                                                  ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_HVACAirLoopName_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_MinSetpointHumidRatio_ (this),
        SimCntrlSchm_MaxSetpointHumidRatio_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_Name
          //
          if (n.name () == "SimCntrlSchm_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_Name_type > r (
              SimCntrlSchm_Name_traits::create (i, f, this));

            if (!this->SimCntrlSchm_Name_)
            {
              this->SimCntrlSchm_Name_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_HVACAirLoopName
          //
          if (n.name () == "SimCntrlSchm_HVACAirLoopName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_HVACAirLoopName_type > r (
              SimCntrlSchm_HVACAirLoopName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_HVACAirLoopName_)
            {
              this->SimCntrlSchm_HVACAirLoopName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_SetpointNodeOrNodeListName
          //
          if (n.name () == "SimCntrlSchm_SetpointNodeOrNodeListName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > r (
              SimCntrlSchm_SetpointNodeOrNodeListName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_SetpointNodeOrNodeListName_)
            {
              this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_MinSetpointHumidRatio
          //
          if (n.name () == "SimCntrlSchm_MinSetpointHumidRatio" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MinSetpointHumidRatio_)
            {
              this->SimCntrlSchm_MinSetpointHumidRatio_.set (SimCntrlSchm_MinSetpointHumidRatio_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_MaxSetpointHumidRatio
          //
          if (n.name () == "SimCntrlSchm_MaxSetpointHumidRatio" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MaxSetpointHumidRatio_)
            {
              this->SimCntrlSchm_MaxSetpointHumidRatio_.set (SimCntrlSchm_MaxSetpointHumidRatio_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset* SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset (*this, f, c);
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset& SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      operator= (const SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme& > (*this) = x;
          this->SimCntrlSchm_Name_ = x.SimCntrlSchm_Name_;
          this->SimCntrlSchm_HVACAirLoopName_ = x.SimCntrlSchm_HVACAirLoopName_;
          this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x.SimCntrlSchm_SetpointNodeOrNodeListName_;
          this->SimCntrlSchm_MinSetpointHumidRatio_ = x.SimCntrlSchm_MinSetpointHumidRatio_;
          this->SimCntrlSchm_MaxSetpointHumidRatio_ = x.SimCntrlSchm_MaxSetpointHumidRatio_;
        }

        return *this;
      }

      SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset::
      ~SimControlScheme_SetpointManagerScheme_LeastHumidZoneReset ()
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

