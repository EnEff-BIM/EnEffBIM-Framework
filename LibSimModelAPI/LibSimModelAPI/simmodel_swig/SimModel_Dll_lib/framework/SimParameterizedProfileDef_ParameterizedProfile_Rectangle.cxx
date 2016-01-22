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

#include "SimParameterizedProfileDef_ParameterizedProfile_Rectangle.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimParameterizedProfileDef_ParameterizedProfile_Rectangle
      // 

      const SimParameterizedProfileDef_ParameterizedProfile_Rectangle::XDim_optional& SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      XDim () const
      {
        return this->XDim_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::XDim_optional& SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      XDim ()
      {
        return this->XDim_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      XDim (const XDim_type& x)
      {
        this->XDim_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      XDim (const XDim_optional& x)
      {
        this->XDim_ = x;
      }

      const SimParameterizedProfileDef_ParameterizedProfile_Rectangle::YDim_optional& SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      YDim () const
      {
        return this->YDim_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::YDim_optional& SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      YDim ()
      {
        return this->YDim_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      YDim (const YDim_type& x)
      {
        this->YDim_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      YDim (const YDim_optional& x)
      {
        this->YDim_ = x;
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
    namespace ResourcesGeometry
    {
      // SimParameterizedProfileDef_ParameterizedProfile_Rectangle
      //

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      SimParameterizedProfileDef_ParameterizedProfile_Rectangle ()
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (),
        XDim_ (this),
        YDim_ (this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      SimParameterizedProfileDef_ParameterizedProfile_Rectangle (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (RefId),
        XDim_ (this),
        YDim_ (this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      SimParameterizedProfileDef_ParameterizedProfile_Rectangle (const SimParameterizedProfileDef_ParameterizedProfile_Rectangle& x,
                                                                 ::xml_schema::flags f,
                                                                 ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (x, f, c),
        XDim_ (x.XDim_, f, this),
        YDim_ (x.YDim_, f, this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      SimParameterizedProfileDef_ParameterizedProfile_Rectangle (const ::xercesc::DOMElement& e,
                                                                 ::xml_schema::flags f,
                                                                 ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (e, f | ::xml_schema::flags::base, c),
        XDim_ (this),
        YDim_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // XDim
          //
          if (n.name () == "XDim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->XDim_)
            {
              this->XDim_.set (XDim_traits::create (i, f, this));
              continue;
            }
          }

          // YDim
          //
          if (n.name () == "YDim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->YDim_)
            {
              this->YDim_.set (YDim_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle* SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimParameterizedProfileDef_ParameterizedProfile_Rectangle (*this, f, c);
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle& SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      operator= (const SimParameterizedProfileDef_ParameterizedProfile_Rectangle& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile& > (*this) = x;
          this->XDim_ = x.XDim_;
          this->YDim_ = x.YDim_;
        }

        return *this;
      }

      SimParameterizedProfileDef_ParameterizedProfile_Rectangle::
      ~SimParameterizedProfileDef_ParameterizedProfile_Rectangle ()
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
    namespace ResourcesGeometry
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
