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

#include "SimTimeSeriesSched_DayType_1_5.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimTimeSeriesSched_DayType_1_5
      // 

      const SimTimeSeriesSched_DayType_1_5::stringItem_sequence& SimTimeSeriesSched_DayType_1_5::
      stringItem () const
      {
        return this->stringItem_;
      }

      SimTimeSeriesSched_DayType_1_5::stringItem_sequence& SimTimeSeriesSched_DayType_1_5::
      stringItem ()
      {
        return this->stringItem_;
      }

      void SimTimeSeriesSched_DayType_1_5::
      stringItem (const stringItem_sequence& s)
      {
        this->stringItem_ = s;
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
      // SimTimeSeriesSched_DayType_1_5
      //

      SimTimeSeriesSched_DayType_1_5::
      SimTimeSeriesSched_DayType_1_5 ()
      : ::xml_schema::type (),
        stringItem_ (this)
      {
      }

      SimTimeSeriesSched_DayType_1_5::
      SimTimeSeriesSched_DayType_1_5 (const SimTimeSeriesSched_DayType_1_5& x,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::xml_schema::type (x, f, c),
        stringItem_ (x.stringItem_, f, this)
      {
      }

      SimTimeSeriesSched_DayType_1_5::
      SimTimeSeriesSched_DayType_1_5 (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
        stringItem_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
          this->parse (p, f);
        }
      }

      void SimTimeSeriesSched_DayType_1_5::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // stringItem
          //
          if (n.name () == "stringItem" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/SimModelCore")
          {
            ::std::auto_ptr< stringItem_type > r (
              stringItem_traits::create (i, f, this));

            this->stringItem_.push_back (r);
            continue;
          }

          break;
        }
      }

      SimTimeSeriesSched_DayType_1_5* SimTimeSeriesSched_DayType_1_5::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimTimeSeriesSched_DayType_1_5 (*this, f, c);
      }

      SimTimeSeriesSched_DayType_1_5& SimTimeSeriesSched_DayType_1_5::
      operator= (const SimTimeSeriesSched_DayType_1_5& x)
      {
        if (this != &x)
        {
          static_cast< ::xml_schema::type& > (*this) = x;
          this->stringItem_ = x.stringItem_;
        }

        return *this;
      }

      SimTimeSeriesSched_DayType_1_5::
      ~SimTimeSeriesSched_DayType_1_5 ()
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

