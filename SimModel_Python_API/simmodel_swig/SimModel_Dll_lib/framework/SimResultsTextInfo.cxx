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

#include "SimResultsTextInfo.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimResultsTextInfo
      // 

      const SimResultsTextInfo::Text_optional& SimResultsTextInfo::
      Text () const
      {
        return this->Text_;
      }

      SimResultsTextInfo::Text_optional& SimResultsTextInfo::
      Text ()
      {
        return this->Text_;
      }

      void SimResultsTextInfo::
      Text (const Text_type& x)
      {
        this->Text_.set (x);
      }

      void SimResultsTextInfo::
      Text (const Text_optional& x)
      {
        this->Text_ = x;
      }

      void SimResultsTextInfo::
      Text (::std::auto_ptr< Text_type > x)
      {
        this->Text_.set (x);
      }

      const SimResultsTextInfo::Bold_optional& SimResultsTextInfo::
      Bold () const
      {
        return this->Bold_;
      }

      SimResultsTextInfo::Bold_optional& SimResultsTextInfo::
      Bold ()
      {
        return this->Bold_;
      }

      void SimResultsTextInfo::
      Bold (const Bold_type& x)
      {
        this->Bold_.set (x);
      }

      void SimResultsTextInfo::
      Bold (const Bold_optional& x)
      {
        this->Bold_ = x;
      }

      const SimResultsTextInfo::Italic_optional& SimResultsTextInfo::
      Italic () const
      {
        return this->Italic_;
      }

      SimResultsTextInfo::Italic_optional& SimResultsTextInfo::
      Italic ()
      {
        return this->Italic_;
      }

      void SimResultsTextInfo::
      Italic (const Italic_type& x)
      {
        this->Italic_.set (x);
      }

      void SimResultsTextInfo::
      Italic (const Italic_optional& x)
      {
        this->Italic_ = x;
      }

      const SimResultsTextInfo::UnderLine_optional& SimResultsTextInfo::
      UnderLine () const
      {
        return this->UnderLine_;
      }

      SimResultsTextInfo::UnderLine_optional& SimResultsTextInfo::
      UnderLine ()
      {
        return this->UnderLine_;
      }

      void SimResultsTextInfo::
      UnderLine (const UnderLine_type& x)
      {
        this->UnderLine_.set (x);
      }

      void SimResultsTextInfo::
      UnderLine (const UnderLine_optional& x)
      {
        this->UnderLine_ = x;
      }

      const SimResultsTextInfo::FontColor_optional& SimResultsTextInfo::
      FontColor () const
      {
        return this->FontColor_;
      }

      SimResultsTextInfo::FontColor_optional& SimResultsTextInfo::
      FontColor ()
      {
        return this->FontColor_;
      }

      void SimResultsTextInfo::
      FontColor (const FontColor_type& x)
      {
        this->FontColor_.set (x);
      }

      void SimResultsTextInfo::
      FontColor (const FontColor_optional& x)
      {
        this->FontColor_ = x;
      }

      void SimResultsTextInfo::
      FontColor (::std::auto_ptr< FontColor_type > x)
      {
        this->FontColor_.set (x);
      }

      const SimResultsTextInfo::TextFont_optional& SimResultsTextInfo::
      TextFont () const
      {
        return this->TextFont_;
      }

      SimResultsTextInfo::TextFont_optional& SimResultsTextInfo::
      TextFont ()
      {
        return this->TextFont_;
      }

      void SimResultsTextInfo::
      TextFont (const TextFont_type& x)
      {
        this->TextFont_.set (x);
      }

      void SimResultsTextInfo::
      TextFont (const TextFont_optional& x)
      {
        this->TextFont_ = x;
      }

      void SimResultsTextInfo::
      TextFont (::std::auto_ptr< TextFont_type > x)
      {
        this->TextFont_.set (x);
      }

      const SimResultsTextInfo::FontSize_optional& SimResultsTextInfo::
      FontSize () const
      {
        return this->FontSize_;
      }

      SimResultsTextInfo::FontSize_optional& SimResultsTextInfo::
      FontSize ()
      {
        return this->FontSize_;
      }

      void SimResultsTextInfo::
      FontSize (const FontSize_type& x)
      {
        this->FontSize_.set (x);
      }

      void SimResultsTextInfo::
      FontSize (const FontSize_optional& x)
      {
        this->FontSize_ = x;
      }

      const SimResultsTextInfo::Alignment_optional& SimResultsTextInfo::
      Alignment () const
      {
        return this->Alignment_;
      }

      SimResultsTextInfo::Alignment_optional& SimResultsTextInfo::
      Alignment ()
      {
        return this->Alignment_;
      }

      void SimResultsTextInfo::
      Alignment (const Alignment_type& x)
      {
        this->Alignment_.set (x);
      }

      void SimResultsTextInfo::
      Alignment (const Alignment_optional& x)
      {
        this->Alignment_ = x;
      }

      void SimResultsTextInfo::
      Alignment (::std::auto_ptr< Alignment_type > x)
      {
        this->Alignment_.set (x);
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
      // SimResultsTextInfo
      //

      SimResultsTextInfo::
      SimResultsTextInfo ()
      : ::schema::simxml::ResourcesGeneral::SimResultsVisualization (),
        Text_ (this),
        Bold_ (this),
        Italic_ (this),
        UnderLine_ (this),
        FontColor_ (this),
        TextFont_ (this),
        FontSize_ (this),
        Alignment_ (this)
      {
      }

      SimResultsTextInfo::
      SimResultsTextInfo (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimResultsVisualization (RefId),
        Text_ (this),
        Bold_ (this),
        Italic_ (this),
        UnderLine_ (this),
        FontColor_ (this),
        TextFont_ (this),
        FontSize_ (this),
        Alignment_ (this)
      {
      }

      SimResultsTextInfo::
      SimResultsTextInfo (const SimResultsTextInfo& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimResultsVisualization (x, f, c),
        Text_ (x.Text_, f, this),
        Bold_ (x.Bold_, f, this),
        Italic_ (x.Italic_, f, this),
        UnderLine_ (x.UnderLine_, f, this),
        FontColor_ (x.FontColor_, f, this),
        TextFont_ (x.TextFont_, f, this),
        FontSize_ (x.FontSize_, f, this),
        Alignment_ (x.Alignment_, f, this)
      {
      }

      SimResultsTextInfo::
      SimResultsTextInfo (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimResultsVisualization (e, f | ::xml_schema::flags::base, c),
        Text_ (this),
        Bold_ (this),
        Italic_ (this),
        UnderLine_ (this),
        FontColor_ (this),
        TextFont_ (this),
        FontSize_ (this),
        Alignment_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimResultsTextInfo::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimResultsVisualization::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // Text
          //
          if (n.name () == "Text" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Text_type > r (
              Text_traits::create (i, f, this));

            if (!this->Text_)
            {
              this->Text_.set (r);
              continue;
            }
          }

          // Bold
          //
          if (n.name () == "Bold" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->Bold_)
            {
              this->Bold_.set (Bold_traits::create (i, f, this));
              continue;
            }
          }

          // Italic
          //
          if (n.name () == "Italic" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->Italic_)
            {
              this->Italic_.set (Italic_traits::create (i, f, this));
              continue;
            }
          }

          // UnderLine
          //
          if (n.name () == "UnderLine" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->UnderLine_)
            {
              this->UnderLine_.set (UnderLine_traits::create (i, f, this));
              continue;
            }
          }

          // FontColor
          //
          if (n.name () == "FontColor" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< FontColor_type > r (
              FontColor_traits::create (i, f, this));

            if (!this->FontColor_)
            {
              this->FontColor_.set (r);
              continue;
            }
          }

          // TextFont
          //
          if (n.name () == "TextFont" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< TextFont_type > r (
              TextFont_traits::create (i, f, this));

            if (!this->TextFont_)
            {
              this->TextFont_.set (r);
              continue;
            }
          }

          // FontSize
          //
          if (n.name () == "FontSize" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->FontSize_)
            {
              this->FontSize_.set (FontSize_traits::create (i, f, this));
              continue;
            }
          }

          // Alignment
          //
          if (n.name () == "Alignment" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< Alignment_type > r (
              Alignment_traits::create (i, f, this));

            if (!this->Alignment_)
            {
              this->Alignment_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimResultsTextInfo* SimResultsTextInfo::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimResultsTextInfo (*this, f, c);
      }

      SimResultsTextInfo& SimResultsTextInfo::
      operator= (const SimResultsTextInfo& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimResultsVisualization& > (*this) = x;
          this->Text_ = x.Text_;
          this->Bold_ = x.Bold_;
          this->Italic_ = x.Italic_;
          this->UnderLine_ = x.UnderLine_;
          this->FontColor_ = x.FontColor_;
          this->TextFont_ = x.TextFont_;
          this->FontSize_ = x.FontSize_;
          this->Alignment_ = x.Alignment_;
        }

        return *this;
      }

      SimResultsTextInfo::
      ~SimResultsTextInfo ()
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

