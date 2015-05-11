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

#include "SimSystem_HvacSteam_Supply.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimSystem_HvacSteam_Supply
      // 

      const SimSystem_HvacSteam_Supply::SimSys_Branch_1_500_Name_optional& SimSystem_HvacSteam_Supply::
      SimSys_Branch_1_500_Name () const
      {
        return this->SimSys_Branch_1_500_Name_;
      }

      SimSystem_HvacSteam_Supply::SimSys_Branch_1_500_Name_optional& SimSystem_HvacSteam_Supply::
      SimSys_Branch_1_500_Name ()
      {
        return this->SimSys_Branch_1_500_Name_;
      }

      void SimSystem_HvacSteam_Supply::
      SimSys_Branch_1_500_Name (const SimSys_Branch_1_500_Name_type& x)
      {
        this->SimSys_Branch_1_500_Name_.set (x);
      }

      void SimSystem_HvacSteam_Supply::
      SimSys_Branch_1_500_Name (const SimSys_Branch_1_500_Name_optional& x)
      {
        this->SimSys_Branch_1_500_Name_ = x;
      }

      void SimSystem_HvacSteam_Supply::
      SimSys_Branch_1_500_Name (::std::auto_ptr< SimSys_Branch_1_500_Name_type > x)
      {
        this->SimSys_Branch_1_500_Name_.set (x);
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
    namespace BuildingModel
    {
      // SimSystem_HvacSteam_Supply
      //

      SimSystem_HvacSteam_Supply::
      SimSystem_HvacSteam_Supply (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacSteam (RefId),
        SimSys_Branch_1_500_Name_ (this)
      {
      }

      SimSystem_HvacSteam_Supply::
      SimSystem_HvacSteam_Supply (const SimSystem_HvacSteam_Supply& x,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacSteam (x, f, c),
        SimSys_Branch_1_500_Name_ (x.SimSys_Branch_1_500_Name_, f, this)
      {
      }

      SimSystem_HvacSteam_Supply::
      SimSystem_HvacSteam_Supply (const ::xercesc::DOMElement& e,
                                  ::xml_schema::flags f,
                                  ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSystem_HvacSteam (e, f | ::xml_schema::flags::base, c),
        SimSys_Branch_1_500_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSystem_HvacSteam_Supply::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimSystem_HvacSteam::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSys_Branch_1_500_Name
          //
          if (n.name () == "SimSys_Branch_1_500_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SimSys_Branch_1_500_Name_type > r (
              SimSys_Branch_1_500_Name_traits::create (i, f, this));

            if (!this->SimSys_Branch_1_500_Name_)
            {
              this->SimSys_Branch_1_500_Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSystem_HvacSteam_Supply* SimSystem_HvacSteam_Supply::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem_HvacSteam_Supply (*this, f, c);
      }

      SimSystem_HvacSteam_Supply& SimSystem_HvacSteam_Supply::
      operator= (const SimSystem_HvacSteam_Supply& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimSystem_HvacSteam& > (*this) = x;
          this->SimSys_Branch_1_500_Name_ = x.SimSys_Branch_1_500_Name_;
        }

        return *this;
      }

      SimSystem_HvacSteam_Supply::
      ~SimSystem_HvacSteam_Supply ()
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
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

