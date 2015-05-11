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

#include "SimSimulationOutputFormat_ControlTableStyle.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimSimulationOutputFormat_ControlTableStyle
      // 

      const SimSimulationOutputFormat_ControlTableStyle::SimSimulaOutputFormat_ColumnSeparator_optional& SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_ColumnSeparator () const
      {
        return this->SimSimulaOutputFormat_ColumnSeparator_;
      }

      SimSimulationOutputFormat_ControlTableStyle::SimSimulaOutputFormat_ColumnSeparator_optional& SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_ColumnSeparator ()
      {
        return this->SimSimulaOutputFormat_ColumnSeparator_;
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_ColumnSeparator (const SimSimulaOutputFormat_ColumnSeparator_type& x)
      {
        this->SimSimulaOutputFormat_ColumnSeparator_.set (x);
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_ColumnSeparator (const SimSimulaOutputFormat_ColumnSeparator_optional& x)
      {
        this->SimSimulaOutputFormat_ColumnSeparator_ = x;
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_ColumnSeparator (::std::auto_ptr< SimSimulaOutputFormat_ColumnSeparator_type > x)
      {
        this->SimSimulaOutputFormat_ColumnSeparator_.set (x);
      }

      const SimSimulationOutputFormat_ControlTableStyle::SimSimulaOutputFormat_UnitConversion_optional& SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_UnitConversion () const
      {
        return this->SimSimulaOutputFormat_UnitConversion_;
      }

      SimSimulationOutputFormat_ControlTableStyle::SimSimulaOutputFormat_UnitConversion_optional& SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_UnitConversion ()
      {
        return this->SimSimulaOutputFormat_UnitConversion_;
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_UnitConversion (const SimSimulaOutputFormat_UnitConversion_type& x)
      {
        this->SimSimulaOutputFormat_UnitConversion_.set (x);
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_UnitConversion (const SimSimulaOutputFormat_UnitConversion_optional& x)
      {
        this->SimSimulaOutputFormat_UnitConversion_ = x;
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      SimSimulaOutputFormat_UnitConversion (::std::auto_ptr< SimSimulaOutputFormat_UnitConversion_type > x)
      {
        this->SimSimulaOutputFormat_UnitConversion_.set (x);
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
      // SimSimulationOutputFormat_ControlTableStyle
      //

      SimSimulationOutputFormat_ControlTableStyle::
      SimSimulationOutputFormat_ControlTableStyle (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimSimulationOutputFormat (RefId),
        SimSimulaOutputFormat_ColumnSeparator_ (this),
        SimSimulaOutputFormat_UnitConversion_ (this)
      {
      }

      SimSimulationOutputFormat_ControlTableStyle::
      SimSimulationOutputFormat_ControlTableStyle (const SimSimulationOutputFormat_ControlTableStyle& x,
                                                   ::xml_schema::flags f,
                                                   ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimSimulationOutputFormat (x, f, c),
        SimSimulaOutputFormat_ColumnSeparator_ (x.SimSimulaOutputFormat_ColumnSeparator_, f, this),
        SimSimulaOutputFormat_UnitConversion_ (x.SimSimulaOutputFormat_UnitConversion_, f, this)
      {
      }

      SimSimulationOutputFormat_ControlTableStyle::
      SimSimulationOutputFormat_ControlTableStyle (const ::xercesc::DOMElement& e,
                                                   ::xml_schema::flags f,
                                                   ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimSimulationOutputFormat (e, f | ::xml_schema::flags::base, c),
        SimSimulaOutputFormat_ColumnSeparator_ (this),
        SimSimulaOutputFormat_UnitConversion_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSimulationOutputFormat_ControlTableStyle::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimSimulationOutputFormat::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSimulaOutputFormat_ColumnSeparator
          //
          if (n.name () == "SimSimulaOutputFormat_ColumnSeparator" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimulaOutputFormat_ColumnSeparator_type > r (
              SimSimulaOutputFormat_ColumnSeparator_traits::create (i, f, this));

            if (!this->SimSimulaOutputFormat_ColumnSeparator_)
            {
              this->SimSimulaOutputFormat_ColumnSeparator_.set (r);
              continue;
            }
          }

          // SimSimulaOutputFormat_UnitConversion
          //
          if (n.name () == "SimSimulaOutputFormat_UnitConversion" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimulaOutputFormat_UnitConversion_type > r (
              SimSimulaOutputFormat_UnitConversion_traits::create (i, f, this));

            if (!this->SimSimulaOutputFormat_UnitConversion_)
            {
              this->SimSimulaOutputFormat_UnitConversion_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSimulationOutputFormat_ControlTableStyle* SimSimulationOutputFormat_ControlTableStyle::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSimulationOutputFormat_ControlTableStyle (*this, f, c);
      }

      SimSimulationOutputFormat_ControlTableStyle& SimSimulationOutputFormat_ControlTableStyle::
      operator= (const SimSimulationOutputFormat_ControlTableStyle& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimSimulationOutputFormat& > (*this) = x;
          this->SimSimulaOutputFormat_ColumnSeparator_ = x.SimSimulaOutputFormat_ColumnSeparator_;
          this->SimSimulaOutputFormat_UnitConversion_ = x.SimSimulaOutputFormat_UnitConversion_;
        }

        return *this;
      }

      SimSimulationOutputFormat_ControlTableStyle::
      ~SimSimulationOutputFormat_ControlTableStyle ()
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

