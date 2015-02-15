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

#include "SimComplianceRefModel.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimComplianceRefModel
      // 

      const SimComplianceRefModel::SimCompRefModel_BldgRotationForAppendixG_optional& SimComplianceRefModel::
      SimCompRefModel_BldgRotationForAppendixG () const
      {
        return this->SimCompRefModel_BldgRotationForAppendixG_;
      }

      SimComplianceRefModel::SimCompRefModel_BldgRotationForAppendixG_optional& SimComplianceRefModel::
      SimCompRefModel_BldgRotationForAppendixG ()
      {
        return this->SimCompRefModel_BldgRotationForAppendixG_;
      }

      void SimComplianceRefModel::
      SimCompRefModel_BldgRotationForAppendixG (const SimCompRefModel_BldgRotationForAppendixG_type& x)
      {
        this->SimCompRefModel_BldgRotationForAppendixG_.set (x);
      }

      void SimComplianceRefModel::
      SimCompRefModel_BldgRotationForAppendixG (const SimCompRefModel_BldgRotationForAppendixG_optional& x)
      {
        this->SimCompRefModel_BldgRotationForAppendixG_ = x;
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
      // SimComplianceRefModel
      //

      SimComplianceRefModel::
      SimComplianceRefModel (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (RefId),
        SimCompRefModel_BldgRotationForAppendixG_ (this)
      {
      }

      SimComplianceRefModel::
      SimComplianceRefModel (const SimComplianceRefModel& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (x, f, c),
        SimCompRefModel_BldgRotationForAppendixG_ (x.SimCompRefModel_BldgRotationForAppendixG_, f, this)
      {
      }

      SimComplianceRefModel::
      SimComplianceRefModel (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimResourceObject (e, f | ::xml_schema::flags::base, c),
        SimCompRefModel_BldgRotationForAppendixG_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimComplianceRefModel::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimResourceObject::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCompRefModel_BldgRotationForAppendixG
          //
          if (n.name () == "SimCompRefModel_BldgRotationForAppendixG" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCompRefModel_BldgRotationForAppendixG_)
            {
              this->SimCompRefModel_BldgRotationForAppendixG_.set (SimCompRefModel_BldgRotationForAppendixG_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimComplianceRefModel* SimComplianceRefModel::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimComplianceRefModel (*this, f, c);
      }

      SimComplianceRefModel& SimComplianceRefModel::
      operator= (const SimComplianceRefModel& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimResourceObject& > (*this) = x;
          this->SimCompRefModel_BldgRotationForAppendixG_ = x.SimCompRefModel_BldgRotationForAppendixG_;
        }

        return *this;
      }

      SimComplianceRefModel::
      ~SimComplianceRefModel ()
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

