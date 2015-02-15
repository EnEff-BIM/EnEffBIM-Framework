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

#include "SimControlScheme_SetpointScheme_SingleCooling.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointScheme_SingleCooling
      // 

      const SimControlScheme_SetpointScheme_SingleCooling::SimCntrlSchm_SetpointTempSchedName_optional& SimControlScheme_SetpointScheme_SingleCooling::
      SimCntrlSchm_SetpointTempSchedName () const
      {
        return this->SimCntrlSchm_SetpointTempSchedName_;
      }

      SimControlScheme_SetpointScheme_SingleCooling::SimCntrlSchm_SetpointTempSchedName_optional& SimControlScheme_SetpointScheme_SingleCooling::
      SimCntrlSchm_SetpointTempSchedName ()
      {
        return this->SimCntrlSchm_SetpointTempSchedName_;
      }

      void SimControlScheme_SetpointScheme_SingleCooling::
      SimCntrlSchm_SetpointTempSchedName (const SimCntrlSchm_SetpointTempSchedName_type& x)
      {
        this->SimCntrlSchm_SetpointTempSchedName_.set (x);
      }

      void SimControlScheme_SetpointScheme_SingleCooling::
      SimCntrlSchm_SetpointTempSchedName (const SimCntrlSchm_SetpointTempSchedName_optional& x)
      {
        this->SimCntrlSchm_SetpointTempSchedName_ = x;
      }

      void SimControlScheme_SetpointScheme_SingleCooling::
      SimCntrlSchm_SetpointTempSchedName (::std::auto_ptr< SimCntrlSchm_SetpointTempSchedName_type > x)
      {
        this->SimCntrlSchm_SetpointTempSchedName_.set (x);
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
      // SimControlScheme_SetpointScheme_SingleCooling
      //

      SimControlScheme_SetpointScheme_SingleCooling::
      SimControlScheme_SetpointScheme_SingleCooling (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointScheme (RefId),
        SimCntrlSchm_SetpointTempSchedName_ (this)
      {
      }

      SimControlScheme_SetpointScheme_SingleCooling::
      SimControlScheme_SetpointScheme_SingleCooling (const SimControlScheme_SetpointScheme_SingleCooling& x,
                                                     ::xml_schema::flags f,
                                                     ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointScheme (x, f, c),
        SimCntrlSchm_SetpointTempSchedName_ (x.SimCntrlSchm_SetpointTempSchedName_, f, this)
      {
      }

      SimControlScheme_SetpointScheme_SingleCooling::
      SimControlScheme_SetpointScheme_SingleCooling (const ::xercesc::DOMElement& e,
                                                     ::xml_schema::flags f,
                                                     ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_SetpointTempSchedName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_SetpointScheme_SingleCooling::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_SetpointTempSchedName
          //
          if (n.name () == "SimCntrlSchm_SetpointTempSchedName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_SetpointTempSchedName_type > r (
              SimCntrlSchm_SetpointTempSchedName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_SetpointTempSchedName_)
            {
              this->SimCntrlSchm_SetpointTempSchedName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_SetpointScheme_SingleCooling* SimControlScheme_SetpointScheme_SingleCooling::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_SetpointScheme_SingleCooling (*this, f, c);
      }

      SimControlScheme_SetpointScheme_SingleCooling& SimControlScheme_SetpointScheme_SingleCooling::
      operator= (const SimControlScheme_SetpointScheme_SingleCooling& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointScheme& > (*this) = x;
          this->SimCntrlSchm_SetpointTempSchedName_ = x.SimCntrlSchm_SetpointTempSchedName_;
        }

        return *this;
      }

      SimControlScheme_SetpointScheme_SingleCooling::
      ~SimControlScheme_SetpointScheme_SingleCooling ()
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

