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

#include "SimController_SupplyWater.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimController_SupplyWater
      // 

      const SimController_SupplyWater::SimCntrl_ControllerScheme_1_optional& SimController_SupplyWater::
      SimCntrl_ControllerScheme_1 () const
      {
        return this->SimCntrl_ControllerScheme_1_;
      }

      SimController_SupplyWater::SimCntrl_ControllerScheme_1_optional& SimController_SupplyWater::
      SimCntrl_ControllerScheme_1 ()
      {
        return this->SimCntrl_ControllerScheme_1_;
      }

      void SimController_SupplyWater::
      SimCntrl_ControllerScheme_1 (const SimCntrl_ControllerScheme_1_type& x)
      {
        this->SimCntrl_ControllerScheme_1_.set (x);
      }

      void SimController_SupplyWater::
      SimCntrl_ControllerScheme_1 (const SimCntrl_ControllerScheme_1_optional& x)
      {
        this->SimCntrl_ControllerScheme_1_ = x;
      }

      void SimController_SupplyWater::
      SimCntrl_ControllerScheme_1 (::std::auto_ptr< SimCntrl_ControllerScheme_1_type > x)
      {
        this->SimCntrl_ControllerScheme_1_.set (x);
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
      // SimController_SupplyWater
      //

      SimController_SupplyWater::
      SimController_SupplyWater (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimController (RefId),
        SimCntrl_ControllerScheme_1_ (this)
      {
      }

      SimController_SupplyWater::
      SimController_SupplyWater (const SimController_SupplyWater& x,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimController (x, f, c),
        SimCntrl_ControllerScheme_1_ (x.SimCntrl_ControllerScheme_1_, f, this)
      {
      }

      SimController_SupplyWater::
      SimController_SupplyWater (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimController (e, f | ::xml_schema::flags::base, c),
        SimCntrl_ControllerScheme_1_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimController_SupplyWater::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimController::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrl_ControllerScheme_1
          //
          if (n.name () == "SimCntrl_ControllerScheme_1" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ControllerScheme_1_type > r (
              SimCntrl_ControllerScheme_1_traits::create (i, f, this));

            if (!this->SimCntrl_ControllerScheme_1_)
            {
              this->SimCntrl_ControllerScheme_1_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimController_SupplyWater* SimController_SupplyWater::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimController_SupplyWater (*this, f, c);
      }

      SimController_SupplyWater& SimController_SupplyWater::
      operator= (const SimController_SupplyWater& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimController& > (*this) = x;
          this->SimCntrl_ControllerScheme_1_ = x.SimCntrl_ControllerScheme_1_;
        }

        return *this;
      }

      SimController_SupplyWater::
      ~SimController_SupplyWater ()
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

