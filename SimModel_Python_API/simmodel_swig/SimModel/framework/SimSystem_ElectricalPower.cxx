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

#include "SimSystem_ElectricalPower.hxx"

namespace schema
{
  namespace simxml
  {
    namespace BuildingModel
    {
      // SimSystem_ElectricalPower
      // 

      const SimSystem_ElectricalPower::ClassRef_UniFormat_optional& SimSystem_ElectricalPower::
      ClassRef_UniFormat () const
      {
        return this->ClassRef_UniFormat_;
      }

      SimSystem_ElectricalPower::ClassRef_UniFormat_optional& SimSystem_ElectricalPower::
      ClassRef_UniFormat ()
      {
        return this->ClassRef_UniFormat_;
      }

      void SimSystem_ElectricalPower::
      ClassRef_UniFormat (const ClassRef_UniFormat_type& x)
      {
        this->ClassRef_UniFormat_.set (x);
      }

      void SimSystem_ElectricalPower::
      ClassRef_UniFormat (const ClassRef_UniFormat_optional& x)
      {
        this->ClassRef_UniFormat_ = x;
      }

      void SimSystem_ElectricalPower::
      ClassRef_UniFormat (::std::auto_ptr< ClassRef_UniFormat_type > x)
      {
        this->ClassRef_UniFormat_.set (x);
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
    namespace BuildingModel
    {
      // SimSystem_ElectricalPower
      //

      SimSystem_ElectricalPower::
      SimSystem_ElectricalPower ()
      : ::schema::simxml::BuildingModel::SimSystem (),
        ClassRef_UniFormat_ (this)
      {
      }

      SimSystem_ElectricalPower::
      SimSystem_ElectricalPower (const RefId_type& RefId)
      : ::schema::simxml::BuildingModel::SimSystem (RefId),
        ClassRef_UniFormat_ (this)
      {
      }

      SimSystem_ElectricalPower::
      SimSystem_ElectricalPower (const SimSystem_ElectricalPower& x,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSystem (x, f, c),
        ClassRef_UniFormat_ (x.ClassRef_UniFormat_, f, this)
      {
      }

      SimSystem_ElectricalPower::
      SimSystem_ElectricalPower (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::schema::simxml::BuildingModel::SimSystem (e, f | ::xml_schema::flags::base, c),
        ClassRef_UniFormat_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSystem_ElectricalPower::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::BuildingModel::SimSystem::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // ClassRef_UniFormat
          //
          if (n.name () == "ClassRef_UniFormat" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/BuildingModel")
          {
            ::std::auto_ptr< ClassRef_UniFormat_type > r (
              ClassRef_UniFormat_traits::create (i, f, this));

            if (!this->ClassRef_UniFormat_)
            {
              this->ClassRef_UniFormat_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSystem_ElectricalPower* SimSystem_ElectricalPower::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSystem_ElectricalPower (*this, f, c);
      }

      SimSystem_ElectricalPower& SimSystem_ElectricalPower::
      operator= (const SimSystem_ElectricalPower& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::BuildingModel::SimSystem& > (*this) = x;
          this->ClassRef_UniFormat_ = x.ClassRef_UniFormat_;
        }

        return *this;
      }

      SimSystem_ElectricalPower::
      ~SimSystem_ElectricalPower ()
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

