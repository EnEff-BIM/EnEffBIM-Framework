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

#include "SimWindowPanelProps.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimWindowPanelProps
      // 

      const SimWindowPanelProps::OperationType_optional& SimWindowPanelProps::
      OperationType () const
      {
        return this->OperationType_;
      }

      SimWindowPanelProps::OperationType_optional& SimWindowPanelProps::
      OperationType ()
      {
        return this->OperationType_;
      }

      void SimWindowPanelProps::
      OperationType (const OperationType_type& x)
      {
        this->OperationType_.set (x);
      }

      void SimWindowPanelProps::
      OperationType (const OperationType_optional& x)
      {
        this->OperationType_ = x;
      }

      void SimWindowPanelProps::
      OperationType (::std::auto_ptr< OperationType_type > x)
      {
        this->OperationType_.set (x);
      }

      const SimWindowPanelProps::PanelPosition_optional& SimWindowPanelProps::
      PanelPosition () const
      {
        return this->PanelPosition_;
      }

      SimWindowPanelProps::PanelPosition_optional& SimWindowPanelProps::
      PanelPosition ()
      {
        return this->PanelPosition_;
      }

      void SimWindowPanelProps::
      PanelPosition (const PanelPosition_type& x)
      {
        this->PanelPosition_.set (x);
      }

      void SimWindowPanelProps::
      PanelPosition (const PanelPosition_optional& x)
      {
        this->PanelPosition_ = x;
      }

      void SimWindowPanelProps::
      PanelPosition (::std::auto_ptr< PanelPosition_type > x)
      {
        this->PanelPosition_.set (x);
      }

      const SimWindowPanelProps::FrameDepth_optional& SimWindowPanelProps::
      FrameDepth () const
      {
        return this->FrameDepth_;
      }

      SimWindowPanelProps::FrameDepth_optional& SimWindowPanelProps::
      FrameDepth ()
      {
        return this->FrameDepth_;
      }

      void SimWindowPanelProps::
      FrameDepth (const FrameDepth_type& x)
      {
        this->FrameDepth_.set (x);
      }

      void SimWindowPanelProps::
      FrameDepth (const FrameDepth_optional& x)
      {
        this->FrameDepth_ = x;
      }

      const SimWindowPanelProps::FrameThickness_optional& SimWindowPanelProps::
      FrameThickness () const
      {
        return this->FrameThickness_;
      }

      SimWindowPanelProps::FrameThickness_optional& SimWindowPanelProps::
      FrameThickness ()
      {
        return this->FrameThickness_;
      }

      void SimWindowPanelProps::
      FrameThickness (const FrameThickness_type& x)
      {
        this->FrameThickness_.set (x);
      }

      void SimWindowPanelProps::
      FrameThickness (const FrameThickness_optional& x)
      {
        this->FrameThickness_ = x;
      }

      const SimWindowPanelProps::ShapeAspectStyle_optional& SimWindowPanelProps::
      ShapeAspectStyle () const
      {
        return this->ShapeAspectStyle_;
      }

      SimWindowPanelProps::ShapeAspectStyle_optional& SimWindowPanelProps::
      ShapeAspectStyle ()
      {
        return this->ShapeAspectStyle_;
      }

      void SimWindowPanelProps::
      ShapeAspectStyle (const ShapeAspectStyle_type& x)
      {
        this->ShapeAspectStyle_.set (x);
      }

      void SimWindowPanelProps::
      ShapeAspectStyle (const ShapeAspectStyle_optional& x)
      {
        this->ShapeAspectStyle_ = x;
      }

      void SimWindowPanelProps::
      ShapeAspectStyle (::std::auto_ptr< ShapeAspectStyle_type > x)
      {
        this->ShapeAspectStyle_.set (x);
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
      // SimWindowPanelProps
      //

      SimWindowPanelProps::
      SimWindowPanelProps ()
      : ::schema::simxml::SimModelCore::SimPropertySetDefinition (),
        OperationType_ (this),
        PanelPosition_ (this),
        FrameDepth_ (this),
        FrameThickness_ (this),
        ShapeAspectStyle_ (this)
      {
      }

      SimWindowPanelProps::
      SimWindowPanelProps (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimPropertySetDefinition (RefId),
        OperationType_ (this),
        PanelPosition_ (this),
        FrameDepth_ (this),
        FrameThickness_ (this),
        ShapeAspectStyle_ (this)
      {
      }

      SimWindowPanelProps::
      SimWindowPanelProps (const SimWindowPanelProps& x,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimPropertySetDefinition (x, f, c),
        OperationType_ (x.OperationType_, f, this),
        PanelPosition_ (x.PanelPosition_, f, this),
        FrameDepth_ (x.FrameDepth_, f, this),
        FrameThickness_ (x.FrameThickness_, f, this),
        ShapeAspectStyle_ (x.ShapeAspectStyle_, f, this)
      {
      }

      SimWindowPanelProps::
      SimWindowPanelProps (const ::xercesc::DOMElement& e,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimPropertySetDefinition (e, f | ::xml_schema::flags::base, c),
        OperationType_ (this),
        PanelPosition_ (this),
        FrameDepth_ (this),
        FrameThickness_ (this),
        ShapeAspectStyle_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimWindowPanelProps::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimPropertySetDefinition::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // OperationType
          //
          if (n.name () == "OperationType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< OperationType_type > r (
              OperationType_traits::create (i, f, this));

            if (!this->OperationType_)
            {
              this->OperationType_.set (r);
              continue;
            }
          }

          // PanelPosition
          //
          if (n.name () == "PanelPosition" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< PanelPosition_type > r (
              PanelPosition_traits::create (i, f, this));

            if (!this->PanelPosition_)
            {
              this->PanelPosition_.set (r);
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

          // ShapeAspectStyle
          //
          if (n.name () == "ShapeAspectStyle" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ShapeAspectStyle_type > r (
              ShapeAspectStyle_traits::create (i, f, this));

            if (!this->ShapeAspectStyle_)
            {
              this->ShapeAspectStyle_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimWindowPanelProps* SimWindowPanelProps::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimWindowPanelProps (*this, f, c);
      }

      SimWindowPanelProps& SimWindowPanelProps::
      operator= (const SimWindowPanelProps& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimPropertySetDefinition& > (*this) = x;
          this->OperationType_ = x.OperationType_;
          this->PanelPosition_ = x.PanelPosition_;
          this->FrameDepth_ = x.FrameDepth_;
          this->FrameThickness_ = x.FrameThickness_;
          this->ShapeAspectStyle_ = x.ShapeAspectStyle_;
        }

        return *this;
      }

      SimWindowPanelProps::
      ~SimWindowPanelProps ()
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

