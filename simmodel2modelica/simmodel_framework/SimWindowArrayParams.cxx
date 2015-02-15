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

#include "SimWindowArrayParams.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimWindowArrayParams
      // 

      const SimWindowArrayParams::WindowTypeDef_optional& SimWindowArrayParams::
      WindowTypeDef () const
      {
        return this->WindowTypeDef_;
      }

      SimWindowArrayParams::WindowTypeDef_optional& SimWindowArrayParams::
      WindowTypeDef ()
      {
        return this->WindowTypeDef_;
      }

      void SimWindowArrayParams::
      WindowTypeDef (const WindowTypeDef_type& x)
      {
        this->WindowTypeDef_.set (x);
      }

      void SimWindowArrayParams::
      WindowTypeDef (const WindowTypeDef_optional& x)
      {
        this->WindowTypeDef_ = x;
      }

      void SimWindowArrayParams::
      WindowTypeDef (::std::auto_ptr< WindowTypeDef_type > x)
      {
        this->WindowTypeDef_.set (x);
      }

      const SimWindowArrayParams::GlazingLayerSet_optional& SimWindowArrayParams::
      GlazingLayerSet () const
      {
        return this->GlazingLayerSet_;
      }

      SimWindowArrayParams::GlazingLayerSet_optional& SimWindowArrayParams::
      GlazingLayerSet ()
      {
        return this->GlazingLayerSet_;
      }

      void SimWindowArrayParams::
      GlazingLayerSet (const GlazingLayerSet_type& x)
      {
        this->GlazingLayerSet_.set (x);
      }

      void SimWindowArrayParams::
      GlazingLayerSet (const GlazingLayerSet_optional& x)
      {
        this->GlazingLayerSet_ = x;
      }

      void SimWindowArrayParams::
      GlazingLayerSet (::std::auto_ptr< GlazingLayerSet_type > x)
      {
        this->GlazingLayerSet_.set (x);
      }

      const SimWindowArrayParams::WindowOpeningProfilePath_optional& SimWindowArrayParams::
      WindowOpeningProfilePath () const
      {
        return this->WindowOpeningProfilePath_;
      }

      SimWindowArrayParams::WindowOpeningProfilePath_optional& SimWindowArrayParams::
      WindowOpeningProfilePath ()
      {
        return this->WindowOpeningProfilePath_;
      }

      void SimWindowArrayParams::
      WindowOpeningProfilePath (const WindowOpeningProfilePath_type& x)
      {
        this->WindowOpeningProfilePath_.set (x);
      }

      void SimWindowArrayParams::
      WindowOpeningProfilePath (const WindowOpeningProfilePath_optional& x)
      {
        this->WindowOpeningProfilePath_ = x;
      }

      void SimWindowArrayParams::
      WindowOpeningProfilePath (::std::auto_ptr< WindowOpeningProfilePath_type > x)
      {
        this->WindowOpeningProfilePath_.set (x);
      }

      const SimWindowArrayParams::ArrayLeftOffset_optional& SimWindowArrayParams::
      ArrayLeftOffset () const
      {
        return this->ArrayLeftOffset_;
      }

      SimWindowArrayParams::ArrayLeftOffset_optional& SimWindowArrayParams::
      ArrayLeftOffset ()
      {
        return this->ArrayLeftOffset_;
      }

      void SimWindowArrayParams::
      ArrayLeftOffset (const ArrayLeftOffset_type& x)
      {
        this->ArrayLeftOffset_.set (x);
      }

      void SimWindowArrayParams::
      ArrayLeftOffset (const ArrayLeftOffset_optional& x)
      {
        this->ArrayLeftOffset_ = x;
      }

      const SimWindowArrayParams::ArrayRightOffset_optional& SimWindowArrayParams::
      ArrayRightOffset () const
      {
        return this->ArrayRightOffset_;
      }

      SimWindowArrayParams::ArrayRightOffset_optional& SimWindowArrayParams::
      ArrayRightOffset ()
      {
        return this->ArrayRightOffset_;
      }

      void SimWindowArrayParams::
      ArrayRightOffset (const ArrayRightOffset_type& x)
      {
        this->ArrayRightOffset_.set (x);
      }

      void SimWindowArrayParams::
      ArrayRightOffset (const ArrayRightOffset_optional& x)
      {
        this->ArrayRightOffset_ = x;
      }

      const SimWindowArrayParams::ArrayWinWallRatio_optional& SimWindowArrayParams::
      ArrayWinWallRatio () const
      {
        return this->ArrayWinWallRatio_;
      }

      SimWindowArrayParams::ArrayWinWallRatio_optional& SimWindowArrayParams::
      ArrayWinWallRatio ()
      {
        return this->ArrayWinWallRatio_;
      }

      void SimWindowArrayParams::
      ArrayWinWallRatio (const ArrayWinWallRatio_type& x)
      {
        this->ArrayWinWallRatio_.set (x);
      }

      void SimWindowArrayParams::
      ArrayWinWallRatio (const ArrayWinWallRatio_optional& x)
      {
        this->ArrayWinWallRatio_ = x;
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
      // SimWindowArrayParams
      //

      SimWindowArrayParams::
      SimWindowArrayParams (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimArrayParams (RefId),
        WindowTypeDef_ (this),
        GlazingLayerSet_ (this),
        WindowOpeningProfilePath_ (this),
        ArrayLeftOffset_ (this),
        ArrayRightOffset_ (this),
        ArrayWinWallRatio_ (this)
      {
      }

      SimWindowArrayParams::
      SimWindowArrayParams (const SimWindowArrayParams& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimArrayParams (x, f, c),
        WindowTypeDef_ (x.WindowTypeDef_, f, this),
        GlazingLayerSet_ (x.GlazingLayerSet_, f, this),
        WindowOpeningProfilePath_ (x.WindowOpeningProfilePath_, f, this),
        ArrayLeftOffset_ (x.ArrayLeftOffset_, f, this),
        ArrayRightOffset_ (x.ArrayRightOffset_, f, this),
        ArrayWinWallRatio_ (x.ArrayWinWallRatio_, f, this)
      {
      }

      SimWindowArrayParams::
      SimWindowArrayParams (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimArrayParams (e, f | ::xml_schema::flags::base, c),
        WindowTypeDef_ (this),
        GlazingLayerSet_ (this),
        WindowOpeningProfilePath_ (this),
        ArrayLeftOffset_ (this),
        ArrayRightOffset_ (this),
        ArrayWinWallRatio_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimWindowArrayParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimArrayParams::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // WindowTypeDef
          //
          if (n.name () == "WindowTypeDef" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< WindowTypeDef_type > r (
              WindowTypeDef_traits::create (i, f, this));

            if (!this->WindowTypeDef_)
            {
              this->WindowTypeDef_.set (r);
              continue;
            }
          }

          // GlazingLayerSet
          //
          if (n.name () == "GlazingLayerSet" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< GlazingLayerSet_type > r (
              GlazingLayerSet_traits::create (i, f, this));

            if (!this->GlazingLayerSet_)
            {
              this->GlazingLayerSet_.set (r);
              continue;
            }
          }

          // WindowOpeningProfilePath
          //
          if (n.name () == "WindowOpeningProfilePath" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< WindowOpeningProfilePath_type > r (
              WindowOpeningProfilePath_traits::create (i, f, this));

            if (!this->WindowOpeningProfilePath_)
            {
              this->WindowOpeningProfilePath_.set (r);
              continue;
            }
          }

          // ArrayLeftOffset
          //
          if (n.name () == "ArrayLeftOffset" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->ArrayLeftOffset_)
            {
              this->ArrayLeftOffset_.set (ArrayLeftOffset_traits::create (i, f, this));
              continue;
            }
          }

          // ArrayRightOffset
          //
          if (n.name () == "ArrayRightOffset" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->ArrayRightOffset_)
            {
              this->ArrayRightOffset_.set (ArrayRightOffset_traits::create (i, f, this));
              continue;
            }
          }

          // ArrayWinWallRatio
          //
          if (n.name () == "ArrayWinWallRatio" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->ArrayWinWallRatio_)
            {
              this->ArrayWinWallRatio_.set (ArrayWinWallRatio_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimWindowArrayParams* SimWindowArrayParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimWindowArrayParams (*this, f, c);
      }

      SimWindowArrayParams& SimWindowArrayParams::
      operator= (const SimWindowArrayParams& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimArrayParams& > (*this) = x;
          this->WindowTypeDef_ = x.WindowTypeDef_;
          this->GlazingLayerSet_ = x.GlazingLayerSet_;
          this->WindowOpeningProfilePath_ = x.WindowOpeningProfilePath_;
          this->ArrayLeftOffset_ = x.ArrayLeftOffset_;
          this->ArrayRightOffset_ = x.ArrayRightOffset_;
          this->ArrayWinWallRatio_ = x.ArrayWinWallRatio_;
        }

        return *this;
      }

      SimWindowArrayParams::
      ~SimWindowArrayParams ()
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

