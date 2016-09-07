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

#include "SimSimulationOutputRequest_General_ReportReqSQLite.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimSimulationOutputRequest_General_ReportReqSQLite
      // 

      const SimSimulationOutputRequest_General_ReportReqSQLite::SimSimulaOutputRequest_OptionType_optional& SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulaOutputRequest_OptionType () const
      {
        return this->SimSimulaOutputRequest_OptionType_;
      }

      SimSimulationOutputRequest_General_ReportReqSQLite::SimSimulaOutputRequest_OptionType_optional& SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulaOutputRequest_OptionType ()
      {
        return this->SimSimulaOutputRequest_OptionType_;
      }

      void SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulaOutputRequest_OptionType (const SimSimulaOutputRequest_OptionType_type& x)
      {
        this->SimSimulaOutputRequest_OptionType_.set (x);
      }

      void SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulaOutputRequest_OptionType (const SimSimulaOutputRequest_OptionType_optional& x)
      {
        this->SimSimulaOutputRequest_OptionType_ = x;
      }

      void SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulaOutputRequest_OptionType (::std::auto_ptr< SimSimulaOutputRequest_OptionType_type > x)
      {
        this->SimSimulaOutputRequest_OptionType_.set (x);
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
      // SimSimulationOutputRequest_General_ReportReqSQLite
      //

      SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulationOutputRequest_General_ReportReqSQLite ()
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_General (),
        SimSimulaOutputRequest_OptionType_ (this)
      {
      }

      SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulationOutputRequest_General_ReportReqSQLite (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_General (RefId),
        SimSimulaOutputRequest_OptionType_ (this)
      {
      }

      SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulationOutputRequest_General_ReportReqSQLite (const SimSimulationOutputRequest_General_ReportReqSQLite& x,
                                                          ::xml_schema::flags f,
                                                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_General (x, f, c),
        SimSimulaOutputRequest_OptionType_ (x.SimSimulaOutputRequest_OptionType_, f, this)
      {
      }

      SimSimulationOutputRequest_General_ReportReqSQLite::
      SimSimulationOutputRequest_General_ReportReqSQLite (const ::xercesc::DOMElement& e,
                                                          ::xml_schema::flags f,
                                                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_General (e, f | ::xml_schema::flags::base, c),
        SimSimulaOutputRequest_OptionType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSimulationOutputRequest_General_ReportReqSQLite::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_General::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSimulaOutputRequest_OptionType
          //
          if (n.name () == "SimSimulaOutputRequest_OptionType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimulaOutputRequest_OptionType_type > r (
              SimSimulaOutputRequest_OptionType_traits::create (i, f, this));

            if (!this->SimSimulaOutputRequest_OptionType_)
            {
              this->SimSimulaOutputRequest_OptionType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSimulationOutputRequest_General_ReportReqSQLite* SimSimulationOutputRequest_General_ReportReqSQLite::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSimulationOutputRequest_General_ReportReqSQLite (*this, f, c);
      }

      SimSimulationOutputRequest_General_ReportReqSQLite& SimSimulationOutputRequest_General_ReportReqSQLite::
      operator= (const SimSimulationOutputRequest_General_ReportReqSQLite& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimSimulationOutputRequest_General& > (*this) = x;
          this->SimSimulaOutputRequest_OptionType_ = x.SimSimulaOutputRequest_OptionType_;
        }

        return *this;
      }

      SimSimulationOutputRequest_General_ReportReqSQLite::
      ~SimSimulationOutputRequest_General_ReportReqSQLite ()
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

