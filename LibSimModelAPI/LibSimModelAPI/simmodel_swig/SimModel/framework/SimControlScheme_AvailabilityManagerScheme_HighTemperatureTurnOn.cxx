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

#include "SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn
      // 

      const SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::SimCntrlSchm_Name_optional& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Name () const
      {
        return this->SimCntrlSchm_Name_;
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::SimCntrlSchm_Name_optional& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Name ()
      {
        return this->SimCntrlSchm_Name_;
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_type& x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_optional& x)
      {
        this->SimCntrlSchm_Name_ = x;
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Name (::std::auto_ptr< SimCntrlSchm_Name_type > x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      const SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::SimCntrlSchm_SensorNodeName_optional& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_SensorNodeName () const
      {
        return this->SimCntrlSchm_SensorNodeName_;
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::SimCntrlSchm_SensorNodeName_optional& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_SensorNodeName ()
      {
        return this->SimCntrlSchm_SensorNodeName_;
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_SensorNodeName (const SimCntrlSchm_SensorNodeName_type& x)
      {
        this->SimCntrlSchm_SensorNodeName_.set (x);
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_SensorNodeName (const SimCntrlSchm_SensorNodeName_optional& x)
      {
        this->SimCntrlSchm_SensorNodeName_ = x;
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_SensorNodeName (::std::auto_ptr< SimCntrlSchm_SensorNodeName_type > x)
      {
        this->SimCntrlSchm_SensorNodeName_.set (x);
      }

      const SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::SimCntrlSchm_Temp_optional& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Temp () const
      {
        return this->SimCntrlSchm_Temp_;
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::SimCntrlSchm_Temp_optional& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Temp ()
      {
        return this->SimCntrlSchm_Temp_;
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Temp (const SimCntrlSchm_Temp_type& x)
      {
        this->SimCntrlSchm_Temp_.set (x);
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimCntrlSchm_Temp (const SimCntrlSchm_Temp_optional& x)
      {
        this->SimCntrlSchm_Temp_ = x;
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
      // SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn
      //

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn ()
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme (),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_SensorNodeName_ (this),
        SimCntrlSchm_Temp_ (this)
      {
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme (RefId),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_SensorNodeName_ (this),
        SimCntrlSchm_Temp_ (this)
      {
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn (const SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn& x,
                                                                        ::xml_schema::flags f,
                                                                        ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme (x, f, c),
        SimCntrlSchm_Name_ (x.SimCntrlSchm_Name_, f, this),
        SimCntrlSchm_SensorNodeName_ (x.SimCntrlSchm_SensorNodeName_, f, this),
        SimCntrlSchm_Temp_ (x.SimCntrlSchm_Temp_, f, this)
      {
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn (const ::xercesc::DOMElement& e,
                                                                        ::xml_schema::flags f,
                                                                        ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_SensorNodeName_ (this),
        SimCntrlSchm_Temp_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme::parse (p, f);

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

          // SimCntrlSchm_SensorNodeName
          //
          if (n.name () == "SimCntrlSchm_SensorNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_SensorNodeName_type > r (
              SimCntrlSchm_SensorNodeName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_SensorNodeName_)
            {
              this->SimCntrlSchm_SensorNodeName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_Temp
          //
          if (n.name () == "SimCntrlSchm_Temp" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_Temp_)
            {
              this->SimCntrlSchm_Temp_.set (SimCntrlSchm_Temp_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn* SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn (*this, f, c);
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn& SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      operator= (const SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimControlScheme_AvailabilityManagerScheme& > (*this) = x;
          this->SimCntrlSchm_Name_ = x.SimCntrlSchm_Name_;
          this->SimCntrlSchm_SensorNodeName_ = x.SimCntrlSchm_SensorNodeName_;
          this->SimCntrlSchm_Temp_ = x.SimCntrlSchm_Temp_;
        }

        return *this;
      }

      SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn::
      ~SimControlScheme_AvailabilityManagerScheme_HighTemperatureTurnOn ()
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
