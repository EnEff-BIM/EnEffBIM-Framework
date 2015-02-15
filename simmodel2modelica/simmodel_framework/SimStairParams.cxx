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

#include "SimStairParams.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimStairParams
      // 

      const SimStairParams::RampFlightParams_optional& SimStairParams::
      RampFlightParams () const
      {
        return this->RampFlightParams_;
      }

      SimStairParams::RampFlightParams_optional& SimStairParams::
      RampFlightParams ()
      {
        return this->RampFlightParams_;
      }

      void SimStairParams::
      RampFlightParams (const RampFlightParams_type& x)
      {
        this->RampFlightParams_.set (x);
      }

      void SimStairParams::
      RampFlightParams (const RampFlightParams_optional& x)
      {
        this->RampFlightParams_ = x;
      }

      void SimStairParams::
      RampFlightParams (::std::auto_ptr< RampFlightParams_type > x)
      {
        this->RampFlightParams_.set (x);
      }

      const SimStairParams::RampLandingParams_optional& SimStairParams::
      RampLandingParams () const
      {
        return this->RampLandingParams_;
      }

      SimStairParams::RampLandingParams_optional& SimStairParams::
      RampLandingParams ()
      {
        return this->RampLandingParams_;
      }

      void SimStairParams::
      RampLandingParams (const RampLandingParams_type& x)
      {
        this->RampLandingParams_.set (x);
      }

      void SimStairParams::
      RampLandingParams (const RampLandingParams_optional& x)
      {
        this->RampLandingParams_ = x;
      }

      void SimStairParams::
      RampLandingParams (::std::auto_ptr< RampLandingParams_type > x)
      {
        this->RampLandingParams_.set (x);
      }

      const SimStairParams::RampRailingParams_optional& SimStairParams::
      RampRailingParams () const
      {
        return this->RampRailingParams_;
      }

      SimStairParams::RampRailingParams_optional& SimStairParams::
      RampRailingParams ()
      {
        return this->RampRailingParams_;
      }

      void SimStairParams::
      RampRailingParams (const RampRailingParams_type& x)
      {
        this->RampRailingParams_.set (x);
      }

      void SimStairParams::
      RampRailingParams (const RampRailingParams_optional& x)
      {
        this->RampRailingParams_ = x;
      }

      void SimStairParams::
      RampRailingParams (::std::auto_ptr< RampRailingParams_type > x)
      {
        this->RampRailingParams_.set (x);
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
      // SimStairParams
      //

      SimStairParams::
      SimStairParams (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimBldgModelParams (RefId),
        RampFlightParams_ (this),
        RampLandingParams_ (this),
        RampRailingParams_ (this)
      {
      }

      SimStairParams::
      SimStairParams (const SimStairParams& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimBldgModelParams (x, f, c),
        RampFlightParams_ (x.RampFlightParams_, f, this),
        RampLandingParams_ (x.RampLandingParams_, f, this),
        RampRailingParams_ (x.RampRailingParams_, f, this)
      {
      }

      SimStairParams::
      SimStairParams (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimBldgModelParams (e, f | ::xml_schema::flags::base, c),
        RampFlightParams_ (this),
        RampLandingParams_ (this),
        RampRailingParams_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimStairParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimBldgModelParams::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // RampFlightParams
          //
          if (n.name () == "RampFlightParams" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< RampFlightParams_type > r (
              RampFlightParams_traits::create (i, f, this));

            if (!this->RampFlightParams_)
            {
              this->RampFlightParams_.set (r);
              continue;
            }
          }

          // RampLandingParams
          //
          if (n.name () == "RampLandingParams" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< RampLandingParams_type > r (
              RampLandingParams_traits::create (i, f, this));

            if (!this->RampLandingParams_)
            {
              this->RampLandingParams_.set (r);
              continue;
            }
          }

          // RampRailingParams
          //
          if (n.name () == "RampRailingParams" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< RampRailingParams_type > r (
              RampRailingParams_traits::create (i, f, this));

            if (!this->RampRailingParams_)
            {
              this->RampRailingParams_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimStairParams* SimStairParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimStairParams (*this, f, c);
      }

      SimStairParams& SimStairParams::
      operator= (const SimStairParams& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimBldgModelParams& > (*this) = x;
          this->RampFlightParams_ = x.RampFlightParams_;
          this->RampLandingParams_ = x.RampLandingParams_;
          this->RampRailingParams_ = x.RampRailingParams_;
        }

        return *this;
      }

      SimStairParams::
      ~SimStairParams ()
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

