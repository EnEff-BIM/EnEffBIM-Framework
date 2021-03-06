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

#include "SimWindowParams.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimWindowParams
      // 

      const SimWindowParams::WindowType_optional& SimWindowParams::
      WindowType () const
      {
        return this->WindowType_;
      }

      SimWindowParams::WindowType_optional& SimWindowParams::
      WindowType ()
      {
        return this->WindowType_;
      }

      void SimWindowParams::
      WindowType (const WindowType_type& x)
      {
        this->WindowType_.set (x);
      }

      void SimWindowParams::
      WindowType (const WindowType_optional& x)
      {
        this->WindowType_ = x;
      }

      void SimWindowParams::
      WindowType (::std::auto_ptr< WindowType_type > x)
      {
        this->WindowType_.set (x);
      }

      const SimWindowParams::TemplateLibEntryOrMLS_optional& SimWindowParams::
      TemplateLibEntryOrMLS () const
      {
        return this->TemplateLibEntryOrMLS_;
      }

      SimWindowParams::TemplateLibEntryOrMLS_optional& SimWindowParams::
      TemplateLibEntryOrMLS ()
      {
        return this->TemplateLibEntryOrMLS_;
      }

      void SimWindowParams::
      TemplateLibEntryOrMLS (const TemplateLibEntryOrMLS_type& x)
      {
        this->TemplateLibEntryOrMLS_.set (x);
      }

      void SimWindowParams::
      TemplateLibEntryOrMLS (const TemplateLibEntryOrMLS_optional& x)
      {
        this->TemplateLibEntryOrMLS_ = x;
      }

      void SimWindowParams::
      TemplateLibEntryOrMLS (::std::auto_ptr< TemplateLibEntryOrMLS_type > x)
      {
        this->TemplateLibEntryOrMLS_.set (x);
      }

      const SimWindowParams::WinTopElevation_optional& SimWindowParams::
      WinTopElevation () const
      {
        return this->WinTopElevation_;
      }

      SimWindowParams::WinTopElevation_optional& SimWindowParams::
      WinTopElevation ()
      {
        return this->WinTopElevation_;
      }

      void SimWindowParams::
      WinTopElevation (const WinTopElevation_type& x)
      {
        this->WinTopElevation_.set (x);
      }

      void SimWindowParams::
      WinTopElevation (const WinTopElevation_optional& x)
      {
        this->WinTopElevation_ = x;
      }

      const SimWindowParams::WinHeight_optional& SimWindowParams::
      WinHeight () const
      {
        return this->WinHeight_;
      }

      SimWindowParams::WinHeight_optional& SimWindowParams::
      WinHeight ()
      {
        return this->WinHeight_;
      }

      void SimWindowParams::
      WinHeight (const WinHeight_type& x)
      {
        this->WinHeight_.set (x);
      }

      void SimWindowParams::
      WinHeight (const WinHeight_optional& x)
      {
        this->WinHeight_ = x;
      }

      const SimWindowParams::WinWidth_optional& SimWindowParams::
      WinWidth () const
      {
        return this->WinWidth_;
      }

      SimWindowParams::WinWidth_optional& SimWindowParams::
      WinWidth ()
      {
        return this->WinWidth_;
      }

      void SimWindowParams::
      WinWidth (const WinWidth_type& x)
      {
        this->WinWidth_.set (x);
      }

      void SimWindowParams::
      WinWidth (const WinWidth_optional& x)
      {
        this->WinWidth_ = x;
      }

      const SimWindowParams::GlassThickness_optional& SimWindowParams::
      GlassThickness () const
      {
        return this->GlassThickness_;
      }

      SimWindowParams::GlassThickness_optional& SimWindowParams::
      GlassThickness ()
      {
        return this->GlassThickness_;
      }

      void SimWindowParams::
      GlassThickness (const GlassThickness_type& x)
      {
        this->GlassThickness_.set (x);
      }

      void SimWindowParams::
      GlassThickness (const GlassThickness_optional& x)
      {
        this->GlassThickness_ = x;
      }

      const SimWindowParams::FrameThickness_optional& SimWindowParams::
      FrameThickness () const
      {
        return this->FrameThickness_;
      }

      SimWindowParams::FrameThickness_optional& SimWindowParams::
      FrameThickness ()
      {
        return this->FrameThickness_;
      }

      void SimWindowParams::
      FrameThickness (const FrameThickness_type& x)
      {
        this->FrameThickness_.set (x);
      }

      void SimWindowParams::
      FrameThickness (const FrameThickness_optional& x)
      {
        this->FrameThickness_ = x;
      }

      const SimWindowParams::FrameDepth_optional& SimWindowParams::
      FrameDepth () const
      {
        return this->FrameDepth_;
      }

      SimWindowParams::FrameDepth_optional& SimWindowParams::
      FrameDepth ()
      {
        return this->FrameDepth_;
      }

      void SimWindowParams::
      FrameDepth (const FrameDepth_type& x)
      {
        this->FrameDepth_.set (x);
      }

      void SimWindowParams::
      FrameDepth (const FrameDepth_optional& x)
      {
        this->FrameDepth_ = x;
      }

      const SimWindowParams::WinPanelProfiles_optional& SimWindowParams::
      WinPanelProfiles () const
      {
        return this->WinPanelProfiles_;
      }

      SimWindowParams::WinPanelProfiles_optional& SimWindowParams::
      WinPanelProfiles ()
      {
        return this->WinPanelProfiles_;
      }

      void SimWindowParams::
      WinPanelProfiles (const WinPanelProfiles_type& x)
      {
        this->WinPanelProfiles_.set (x);
      }

      void SimWindowParams::
      WinPanelProfiles (const WinPanelProfiles_optional& x)
      {
        this->WinPanelProfiles_ = x;
      }

      void SimWindowParams::
      WinPanelProfiles (::std::auto_ptr< WinPanelProfiles_type > x)
      {
        this->WinPanelProfiles_.set (x);
      }

      const SimWindowParams::WinFrameProfiles_optional& SimWindowParams::
      WinFrameProfiles () const
      {
        return this->WinFrameProfiles_;
      }

      SimWindowParams::WinFrameProfiles_optional& SimWindowParams::
      WinFrameProfiles ()
      {
        return this->WinFrameProfiles_;
      }

      void SimWindowParams::
      WinFrameProfiles (const WinFrameProfiles_type& x)
      {
        this->WinFrameProfiles_.set (x);
      }

      void SimWindowParams::
      WinFrameProfiles (const WinFrameProfiles_optional& x)
      {
        this->WinFrameProfiles_ = x;
      }

      void SimWindowParams::
      WinFrameProfiles (::std::auto_ptr< WinFrameProfiles_type > x)
      {
        this->WinFrameProfiles_.set (x);
      }

      const SimWindowParams::OpeningProfilePath_optional& SimWindowParams::
      OpeningProfilePath () const
      {
        return this->OpeningProfilePath_;
      }

      SimWindowParams::OpeningProfilePath_optional& SimWindowParams::
      OpeningProfilePath ()
      {
        return this->OpeningProfilePath_;
      }

      void SimWindowParams::
      OpeningProfilePath (const OpeningProfilePath_type& x)
      {
        this->OpeningProfilePath_.set (x);
      }

      void SimWindowParams::
      OpeningProfilePath (const OpeningProfilePath_optional& x)
      {
        this->OpeningProfilePath_ = x;
      }

      void SimWindowParams::
      OpeningProfilePath (::std::auto_ptr< OpeningProfilePath_type > x)
      {
        this->OpeningProfilePath_.set (x);
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
      // SimWindowParams
      //

      SimWindowParams::
      SimWindowParams ()
      : ::schema::simxml::SimModelCore::SimBldgModelParams (),
        WindowType_ (this),
        TemplateLibEntryOrMLS_ (this),
        WinTopElevation_ (this),
        WinHeight_ (this),
        WinWidth_ (this),
        GlassThickness_ (this),
        FrameThickness_ (this),
        FrameDepth_ (this),
        WinPanelProfiles_ (this),
        WinFrameProfiles_ (this),
        OpeningProfilePath_ (this)
      {
      }

      SimWindowParams::
      SimWindowParams (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (RefId),
        WindowType_ (this),
        TemplateLibEntryOrMLS_ (this),
        WinTopElevation_ (this),
        WinHeight_ (this),
        WinWidth_ (this),
        GlassThickness_ (this),
        FrameThickness_ (this),
        FrameDepth_ (this),
        WinPanelProfiles_ (this),
        WinFrameProfiles_ (this),
        OpeningProfilePath_ (this)
      {
      }

      SimWindowParams::
      SimWindowParams (const SimWindowParams& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (x, f, c),
        WindowType_ (x.WindowType_, f, this),
        TemplateLibEntryOrMLS_ (x.TemplateLibEntryOrMLS_, f, this),
        WinTopElevation_ (x.WinTopElevation_, f, this),
        WinHeight_ (x.WinHeight_, f, this),
        WinWidth_ (x.WinWidth_, f, this),
        GlassThickness_ (x.GlassThickness_, f, this),
        FrameThickness_ (x.FrameThickness_, f, this),
        FrameDepth_ (x.FrameDepth_, f, this),
        WinPanelProfiles_ (x.WinPanelProfiles_, f, this),
        WinFrameProfiles_ (x.WinFrameProfiles_, f, this),
        OpeningProfilePath_ (x.OpeningProfilePath_, f, this)
      {
      }

      SimWindowParams::
      SimWindowParams (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (e, f | ::xml_schema::flags::base, c),
        WindowType_ (this),
        TemplateLibEntryOrMLS_ (this),
        WinTopElevation_ (this),
        WinHeight_ (this),
        WinWidth_ (this),
        GlassThickness_ (this),
        FrameThickness_ (this),
        FrameDepth_ (this),
        WinPanelProfiles_ (this),
        WinFrameProfiles_ (this),
        OpeningProfilePath_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimWindowParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimBldgModelParams::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // WindowType
          //
          if (n.name () == "WindowType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WindowType_type > r (
              WindowType_traits::create (i, f, this));

            if (!this->WindowType_)
            {
              this->WindowType_.set (r);
              continue;
            }
          }

          // TemplateLibEntryOrMLS
          //
          if (n.name () == "TemplateLibEntryOrMLS" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< TemplateLibEntryOrMLS_type > r (
              TemplateLibEntryOrMLS_traits::create (i, f, this));

            if (!this->TemplateLibEntryOrMLS_)
            {
              this->TemplateLibEntryOrMLS_.set (r);
              continue;
            }
          }

          // WinTopElevation
          //
          if (n.name () == "WinTopElevation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WinTopElevation_)
            {
              this->WinTopElevation_.set (WinTopElevation_traits::create (i, f, this));
              continue;
            }
          }

          // WinHeight
          //
          if (n.name () == "WinHeight" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WinHeight_)
            {
              this->WinHeight_.set (WinHeight_traits::create (i, f, this));
              continue;
            }
          }

          // WinWidth
          //
          if (n.name () == "WinWidth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->WinWidth_)
            {
              this->WinWidth_.set (WinWidth_traits::create (i, f, this));
              continue;
            }
          }

          // GlassThickness
          //
          if (n.name () == "GlassThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->GlassThickness_)
            {
              this->GlassThickness_.set (GlassThickness_traits::create (i, f, this));
              continue;
            }
          }

          // FrameThickness
          //
          if (n.name () == "FrameThickness" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->FrameThickness_)
            {
              this->FrameThickness_.set (FrameThickness_traits::create (i, f, this));
              continue;
            }
          }

          // FrameDepth
          //
          if (n.name () == "FrameDepth" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->FrameDepth_)
            {
              this->FrameDepth_.set (FrameDepth_traits::create (i, f, this));
              continue;
            }
          }

          // WinPanelProfiles
          //
          if (n.name () == "WinPanelProfiles" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WinPanelProfiles_type > r (
              WinPanelProfiles_traits::create (i, f, this));

            if (!this->WinPanelProfiles_)
            {
              this->WinPanelProfiles_.set (r);
              continue;
            }
          }

          // WinFrameProfiles
          //
          if (n.name () == "WinFrameProfiles" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< WinFrameProfiles_type > r (
              WinFrameProfiles_traits::create (i, f, this));

            if (!this->WinFrameProfiles_)
            {
              this->WinFrameProfiles_.set (r);
              continue;
            }
          }

          // OpeningProfilePath
          //
          if (n.name () == "OpeningProfilePath" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< OpeningProfilePath_type > r (
              OpeningProfilePath_traits::create (i, f, this));

            if (!this->OpeningProfilePath_)
            {
              this->OpeningProfilePath_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimWindowParams* SimWindowParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimWindowParams (*this, f, c);
      }

      SimWindowParams& SimWindowParams::
      operator= (const SimWindowParams& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimBldgModelParams& > (*this) = x;
          this->WindowType_ = x.WindowType_;
          this->TemplateLibEntryOrMLS_ = x.TemplateLibEntryOrMLS_;
          this->WinTopElevation_ = x.WinTopElevation_;
          this->WinHeight_ = x.WinHeight_;
          this->WinWidth_ = x.WinWidth_;
          this->GlassThickness_ = x.GlassThickness_;
          this->FrameThickness_ = x.FrameThickness_;
          this->FrameDepth_ = x.FrameDepth_;
          this->WinPanelProfiles_ = x.WinPanelProfiles_;
          this->WinFrameProfiles_ = x.WinFrameProfiles_;
          this->OpeningProfilePath_ = x.OpeningProfilePath_;
        }

        return *this;
      }

      SimWindowParams::
      ~SimWindowParams ()
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

