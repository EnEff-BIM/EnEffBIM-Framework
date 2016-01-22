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

#include "SimParameterizedProfileDef_ParameterizedProfile_I_Shape.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimParameterizedProfileDef_ParameterizedProfile_I_Shape
      // 

      const SimParameterizedProfileDef_ParameterizedProfile_I_Shape::OverallWidth_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallWidth () const
      {
        return this->OverallWidth_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::OverallWidth_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallWidth ()
      {
        return this->OverallWidth_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallWidth (const OverallWidth_type& x)
      {
        this->OverallWidth_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallWidth (const OverallWidth_optional& x)
      {
        this->OverallWidth_ = x;
      }

      const SimParameterizedProfileDef_ParameterizedProfile_I_Shape::OverallDepth_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallDepth () const
      {
        return this->OverallDepth_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::OverallDepth_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallDepth ()
      {
        return this->OverallDepth_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallDepth (const OverallDepth_type& x)
      {
        this->OverallDepth_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      OverallDepth (const OverallDepth_optional& x)
      {
        this->OverallDepth_ = x;
      }

      const SimParameterizedProfileDef_ParameterizedProfile_I_Shape::WebThickness_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      WebThickness () const
      {
        return this->WebThickness_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::WebThickness_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      WebThickness ()
      {
        return this->WebThickness_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      WebThickness (const WebThickness_type& x)
      {
        this->WebThickness_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      WebThickness (const WebThickness_optional& x)
      {
        this->WebThickness_ = x;
      }

      const SimParameterizedProfileDef_ParameterizedProfile_I_Shape::FlangeThickness_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FlangeThickness () const
      {
        return this->FlangeThickness_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::FlangeThickness_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FlangeThickness ()
      {
        return this->FlangeThickness_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FlangeThickness (const FlangeThickness_type& x)
      {
        this->FlangeThickness_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FlangeThickness (const FlangeThickness_optional& x)
      {
        this->FlangeThickness_ = x;
      }

      const SimParameterizedProfileDef_ParameterizedProfile_I_Shape::FilletRadius_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FilletRadius () const
      {
        return this->FilletRadius_;
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::FilletRadius_optional& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FilletRadius ()
      {
        return this->FilletRadius_;
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FilletRadius (const FilletRadius_type& x)
      {
        this->FilletRadius_.set (x);
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      FilletRadius (const FilletRadius_optional& x)
      {
        this->FilletRadius_ = x;
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
      // SimParameterizedProfileDef_ParameterizedProfile_I_Shape
      //

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      SimParameterizedProfileDef_ParameterizedProfile_I_Shape ()
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (),
        OverallWidth_ (this),
        OverallDepth_ (this),
        WebThickness_ (this),
        FlangeThickness_ (this),
        FilletRadius_ (this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      SimParameterizedProfileDef_ParameterizedProfile_I_Shape (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (RefId),
        OverallWidth_ (this),
        OverallDepth_ (this),
        WebThickness_ (this),
        FlangeThickness_ (this),
        FilletRadius_ (this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      SimParameterizedProfileDef_ParameterizedProfile_I_Shape (const SimParameterizedProfileDef_ParameterizedProfile_I_Shape& x,
                                                               ::xml_schema::flags f,
                                                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (x, f, c),
        OverallWidth_ (x.OverallWidth_, f, this),
        OverallDepth_ (x.OverallDepth_, f, this),
        WebThickness_ (x.WebThickness_, f, this),
        FlangeThickness_ (x.FlangeThickness_, f, this),
        FilletRadius_ (x.FilletRadius_, f, this)
      {
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      SimParameterizedProfileDef_ParameterizedProfile_I_Shape (const ::xercesc::DOMElement& e,
                                                               ::xml_schema::flags f,
                                                               ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile (e, f | ::xml_schema::flags::base, c),
        OverallWidth_ (this),
        OverallDepth_ (this),
        WebThickness_ (this),
        FlangeThickness_ (this),
        FilletRadius_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // OverallWidth
          //
          if (n.name () == "OverallWidth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->OverallWidth_)
            {
              this->OverallWidth_.set (OverallWidth_traits::create (i, f, this));
              continue;
            }
          }

          // OverallDepth
          //
          if (n.name () == "OverallDepth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->OverallDepth_)
            {
              this->OverallDepth_.set (OverallDepth_traits::create (i, f, this));
              continue;
            }
          }

          // WebThickness
          //
          if (n.name () == "WebThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->WebThickness_)
            {
              this->WebThickness_.set (WebThickness_traits::create (i, f, this));
              continue;
            }
          }

          // FlangeThickness
          //
          if (n.name () == "FlangeThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->FlangeThickness_)
            {
              this->FlangeThickness_.set (FlangeThickness_traits::create (i, f, this));
              continue;
            }
          }

          // FilletRadius
          //
          if (n.name () == "FilletRadius" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->FilletRadius_)
            {
              this->FilletRadius_.set (FilletRadius_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape* SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimParameterizedProfileDef_ParameterizedProfile_I_Shape (*this, f, c);
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape& SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      operator= (const SimParameterizedProfileDef_ParameterizedProfile_I_Shape& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimParameterizedProfileDef_ParameterizedProfile& > (*this) = x;
          this->OverallWidth_ = x.OverallWidth_;
          this->OverallDepth_ = x.OverallDepth_;
          this->WebThickness_ = x.WebThickness_;
          this->FlangeThickness_ = x.FlangeThickness_;
          this->FilletRadius_ = x.FilletRadius_;
        }

        return *this;
      }

      SimParameterizedProfileDef_ParameterizedProfile_I_Shape::
      ~SimParameterizedProfileDef_ParameterizedProfile_I_Shape ()
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
