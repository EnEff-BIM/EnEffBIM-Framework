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

#include "SimCurveStyle_CurveStyle_FontPattern.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimCurveStyle_CurveStyle_FontPattern
      // 

      const SimCurveStyle_CurveStyle_FontPattern::VisibleSegmentLength_optional& SimCurveStyle_CurveStyle_FontPattern::
      VisibleSegmentLength () const
      {
        return this->VisibleSegmentLength_;
      }

      SimCurveStyle_CurveStyle_FontPattern::VisibleSegmentLength_optional& SimCurveStyle_CurveStyle_FontPattern::
      VisibleSegmentLength ()
      {
        return this->VisibleSegmentLength_;
      }

      void SimCurveStyle_CurveStyle_FontPattern::
      VisibleSegmentLength (const VisibleSegmentLength_type& x)
      {
        this->VisibleSegmentLength_.set (x);
      }

      void SimCurveStyle_CurveStyle_FontPattern::
      VisibleSegmentLength (const VisibleSegmentLength_optional& x)
      {
        this->VisibleSegmentLength_ = x;
      }

      const SimCurveStyle_CurveStyle_FontPattern::InvisibleSegmentLength_optional& SimCurveStyle_CurveStyle_FontPattern::
      InvisibleSegmentLength () const
      {
        return this->InvisibleSegmentLength_;
      }

      SimCurveStyle_CurveStyle_FontPattern::InvisibleSegmentLength_optional& SimCurveStyle_CurveStyle_FontPattern::
      InvisibleSegmentLength ()
      {
        return this->InvisibleSegmentLength_;
      }

      void SimCurveStyle_CurveStyle_FontPattern::
      InvisibleSegmentLength (const InvisibleSegmentLength_type& x)
      {
        this->InvisibleSegmentLength_.set (x);
      }

      void SimCurveStyle_CurveStyle_FontPattern::
      InvisibleSegmentLength (const InvisibleSegmentLength_optional& x)
      {
        this->InvisibleSegmentLength_ = x;
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
      // SimCurveStyle_CurveStyle_FontPattern
      //

      SimCurveStyle_CurveStyle_FontPattern::
      SimCurveStyle_CurveStyle_FontPattern ()
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (),
        VisibleSegmentLength_ (this),
        InvisibleSegmentLength_ (this)
      {
      }

      SimCurveStyle_CurveStyle_FontPattern::
      SimCurveStyle_CurveStyle_FontPattern (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (RefId),
        VisibleSegmentLength_ (this),
        InvisibleSegmentLength_ (this)
      {
      }

      SimCurveStyle_CurveStyle_FontPattern::
      SimCurveStyle_CurveStyle_FontPattern (const SimCurveStyle_CurveStyle_FontPattern& x,
                                            ::xml_schema::flags f,
                                            ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (x, f, c),
        VisibleSegmentLength_ (x.VisibleSegmentLength_, f, this),
        InvisibleSegmentLength_ (x.InvisibleSegmentLength_, f, this)
      {
      }

      SimCurveStyle_CurveStyle_FontPattern::
      SimCurveStyle_CurveStyle_FontPattern (const ::xercesc::DOMElement& e,
                                            ::xml_schema::flags f,
                                            ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle (e, f | ::xml_schema::flags::base, c),
        VisibleSegmentLength_ (this),
        InvisibleSegmentLength_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCurveStyle_CurveStyle_FontPattern::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // VisibleSegmentLength
          //
          if (n.name () == "VisibleSegmentLength" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->VisibleSegmentLength_)
            {
              this->VisibleSegmentLength_.set (VisibleSegmentLength_traits::create (i, f, this));
              continue;
            }
          }

          // InvisibleSegmentLength
          //
          if (n.name () == "InvisibleSegmentLength" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->InvisibleSegmentLength_)
            {
              this->InvisibleSegmentLength_.set (InvisibleSegmentLength_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimCurveStyle_CurveStyle_FontPattern* SimCurveStyle_CurveStyle_FontPattern::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCurveStyle_CurveStyle_FontPattern (*this, f, c);
      }

      SimCurveStyle_CurveStyle_FontPattern& SimCurveStyle_CurveStyle_FontPattern::
      operator= (const SimCurveStyle_CurveStyle_FontPattern& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimCurveStyle_CurveStyle& > (*this) = x;
          this->VisibleSegmentLength_ = x.VisibleSegmentLength_;
          this->InvisibleSegmentLength_ = x.InvisibleSegmentLength_;
        }

        return *this;
      }

      SimCurveStyle_CurveStyle_FontPattern::
      ~SimCurveStyle_CurveStyle_FontPattern ()
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

