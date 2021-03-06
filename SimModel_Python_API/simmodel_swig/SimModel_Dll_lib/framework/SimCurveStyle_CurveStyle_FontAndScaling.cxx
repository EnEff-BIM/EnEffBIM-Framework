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

#include "SimCurveStyle_CurveStyle_FontAndScaling.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimCurveStyle_CurveStyle_FontAndScaling
      // 

      const SimCurveStyle_CurveStyle_FontAndScaling::CurveFont_optional& SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFont () const
      {
        return this->CurveFont_;
      }

      SimCurveStyle_CurveStyle_FontAndScaling::CurveFont_optional& SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFont ()
      {
        return this->CurveFont_;
      }

      void SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFont (const CurveFont_type& x)
      {
        this->CurveFont_.set (x);
      }

      void SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFont (const CurveFont_optional& x)
      {
        this->CurveFont_ = x;
      }

      void SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFont (::std::auto_ptr< CurveFont_type > x)
      {
        this->CurveFont_.set (x);
      }

      const SimCurveStyle_CurveStyle_FontAndScaling::CurveFontScaling_optional& SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFontScaling () const
      {
        return this->CurveFontScaling_;
      }

      SimCurveStyle_CurveStyle_FontAndScaling::CurveFontScaling_optional& SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFontScaling ()
      {
        return this->CurveFontScaling_;
      }

      void SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFontScaling (const CurveFontScaling_type& x)
      {
        this->CurveFontScaling_.set (x);
      }

      void SimCurveStyle_CurveStyle_FontAndScaling::
      CurveFontScaling (const CurveFontScaling_optional& x)
      {
        this->CurveFontScaling_ = x;
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
      // SimCurveStyle_CurveStyle_FontAndScaling
      //

      SimCurveStyle_CurveStyle_FontAndScaling::
      SimCurveStyle_CurveStyle_FontAndScaling ()
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (),
        CurveFont_ (this),
        CurveFontScaling_ (this)
      {
      }

      SimCurveStyle_CurveStyle_FontAndScaling::
      SimCurveStyle_CurveStyle_FontAndScaling (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (RefId),
        CurveFont_ (this),
        CurveFontScaling_ (this)
      {
      }

      SimCurveStyle_CurveStyle_FontAndScaling::
      SimCurveStyle_CurveStyle_FontAndScaling (const SimCurveStyle_CurveStyle_FontAndScaling& x,
                                               ::xml_schema::flags f,
                                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (x, f, c),
        CurveFont_ (x.CurveFont_, f, this),
        CurveFontScaling_ (x.CurveFontScaling_, f, this)
      {
      }

      SimCurveStyle_CurveStyle_FontAndScaling::
      SimCurveStyle_CurveStyle_FontAndScaling (const ::xercesc::DOMElement& e,
                                               ::xml_schema::flags f,
                                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (e, f | ::xml_schema::flags::base, c),
        CurveFont_ (this),
        CurveFontScaling_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCurveStyle_CurveStyle_FontAndScaling::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // CurveFont
          //
          if (n.name () == "CurveFont" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< CurveFont_type > r (
              CurveFont_traits::create (i, f, this));

            if (!this->CurveFont_)
            {
              this->CurveFont_.set (r);
              continue;
            }
          }

          // CurveFontScaling
          //
          if (n.name () == "CurveFontScaling" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->CurveFontScaling_)
            {
              this->CurveFontScaling_.set (CurveFontScaling_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimCurveStyle_CurveStyle_FontAndScaling* SimCurveStyle_CurveStyle_FontAndScaling::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCurveStyle_CurveStyle_FontAndScaling (*this, f, c);
      }

      SimCurveStyle_CurveStyle_FontAndScaling& SimCurveStyle_CurveStyle_FontAndScaling::
      operator= (const SimCurveStyle_CurveStyle_FontAndScaling& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle& > (*this) = x;
          this->CurveFont_ = x.CurveFont_;
          this->CurveFontScaling_ = x.CurveFontScaling_;
        }

        return *this;
      }

      SimCurveStyle_CurveStyle_FontAndScaling::
      ~SimCurveStyle_CurveStyle_FontAndScaling ()
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

