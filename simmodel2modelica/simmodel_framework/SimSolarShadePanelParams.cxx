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

#include "SimSolarShadePanelParams.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimSolarShadePanelParams
      // 

      const SimSolarShadePanelParams::PanelType_optional& SimSolarShadePanelParams::
      PanelType () const
      {
        return this->PanelType_;
      }

      SimSolarShadePanelParams::PanelType_optional& SimSolarShadePanelParams::
      PanelType ()
      {
        return this->PanelType_;
      }

      void SimSolarShadePanelParams::
      PanelType (const PanelType_type& x)
      {
        this->PanelType_.set (x);
      }

      void SimSolarShadePanelParams::
      PanelType (const PanelType_optional& x)
      {
        this->PanelType_ = x;
      }

      void SimSolarShadePanelParams::
      PanelType (::std::auto_ptr< PanelType_type > x)
      {
        this->PanelType_.set (x);
      }

      const SimSolarShadePanelParams::TopLeftExtension_optional& SimSolarShadePanelParams::
      TopLeftExtension () const
      {
        return this->TopLeftExtension_;
      }

      SimSolarShadePanelParams::TopLeftExtension_optional& SimSolarShadePanelParams::
      TopLeftExtension ()
      {
        return this->TopLeftExtension_;
      }

      void SimSolarShadePanelParams::
      TopLeftExtension (const TopLeftExtension_type& x)
      {
        this->TopLeftExtension_.set (x);
      }

      void SimSolarShadePanelParams::
      TopLeftExtension (const TopLeftExtension_optional& x)
      {
        this->TopLeftExtension_ = x;
      }

      const SimSolarShadePanelParams::BottomRightExtension_optional& SimSolarShadePanelParams::
      BottomRightExtension () const
      {
        return this->BottomRightExtension_;
      }

      SimSolarShadePanelParams::BottomRightExtension_optional& SimSolarShadePanelParams::
      BottomRightExtension ()
      {
        return this->BottomRightExtension_;
      }

      void SimSolarShadePanelParams::
      BottomRightExtension (const BottomRightExtension_type& x)
      {
        this->BottomRightExtension_.set (x);
      }

      void SimSolarShadePanelParams::
      BottomRightExtension (const BottomRightExtension_optional& x)
      {
        this->BottomRightExtension_ = x;
      }

      const SimSolarShadePanelParams::DistanceFromWinEdge_optional& SimSolarShadePanelParams::
      DistanceFromWinEdge () const
      {
        return this->DistanceFromWinEdge_;
      }

      SimSolarShadePanelParams::DistanceFromWinEdge_optional& SimSolarShadePanelParams::
      DistanceFromWinEdge ()
      {
        return this->DistanceFromWinEdge_;
      }

      void SimSolarShadePanelParams::
      DistanceFromWinEdge (const DistanceFromWinEdge_type& x)
      {
        this->DistanceFromWinEdge_.set (x);
      }

      void SimSolarShadePanelParams::
      DistanceFromWinEdge (const DistanceFromWinEdge_optional& x)
      {
        this->DistanceFromWinEdge_ = x;
      }

      const SimSolarShadePanelParams::TiltAngleFromDoorWindow_optional& SimSolarShadePanelParams::
      TiltAngleFromDoorWindow () const
      {
        return this->TiltAngleFromDoorWindow_;
      }

      SimSolarShadePanelParams::TiltAngleFromDoorWindow_optional& SimSolarShadePanelParams::
      TiltAngleFromDoorWindow ()
      {
        return this->TiltAngleFromDoorWindow_;
      }

      void SimSolarShadePanelParams::
      TiltAngleFromDoorWindow (const TiltAngleFromDoorWindow_type& x)
      {
        this->TiltAngleFromDoorWindow_.set (x);
      }

      void SimSolarShadePanelParams::
      TiltAngleFromDoorWindow (const TiltAngleFromDoorWindow_optional& x)
      {
        this->TiltAngleFromDoorWindow_ = x;
      }

      const SimSolarShadePanelParams::ShadedWindowParams_optional& SimSolarShadePanelParams::
      ShadedWindowParams () const
      {
        return this->ShadedWindowParams_;
      }

      SimSolarShadePanelParams::ShadedWindowParams_optional& SimSolarShadePanelParams::
      ShadedWindowParams ()
      {
        return this->ShadedWindowParams_;
      }

      void SimSolarShadePanelParams::
      ShadedWindowParams (const ShadedWindowParams_type& x)
      {
        this->ShadedWindowParams_.set (x);
      }

      void SimSolarShadePanelParams::
      ShadedWindowParams (const ShadedWindowParams_optional& x)
      {
        this->ShadedWindowParams_ = x;
      }

      void SimSolarShadePanelParams::
      ShadedWindowParams (::std::auto_ptr< ShadedWindowParams_type > x)
      {
        this->ShadedWindowParams_.set (x);
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
      // SimSolarShadePanelParams
      //

      SimSolarShadePanelParams::
      SimSolarShadePanelParams (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimPanelParams (RefId),
        PanelType_ (this),
        TopLeftExtension_ (this),
        BottomRightExtension_ (this),
        DistanceFromWinEdge_ (this),
        TiltAngleFromDoorWindow_ (this),
        ShadedWindowParams_ (this)
      {
      }

      SimSolarShadePanelParams::
      SimSolarShadePanelParams (const SimSolarShadePanelParams& x,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimPanelParams (x, f, c),
        PanelType_ (x.PanelType_, f, this),
        TopLeftExtension_ (x.TopLeftExtension_, f, this),
        BottomRightExtension_ (x.BottomRightExtension_, f, this),
        DistanceFromWinEdge_ (x.DistanceFromWinEdge_, f, this),
        TiltAngleFromDoorWindow_ (x.TiltAngleFromDoorWindow_, f, this),
        ShadedWindowParams_ (x.ShadedWindowParams_, f, this)
      {
      }

      SimSolarShadePanelParams::
      SimSolarShadePanelParams (const ::xercesc::DOMElement& e,
                                ::xml_schema::flags f,
                                ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimPanelParams (e, f | ::xml_schema::flags::base, c),
        PanelType_ (this),
        TopLeftExtension_ (this),
        BottomRightExtension_ (this),
        DistanceFromWinEdge_ (this),
        TiltAngleFromDoorWindow_ (this),
        ShadedWindowParams_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSolarShadePanelParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimPanelParams::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // PanelType
          //
          if (n.name () == "PanelType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< PanelType_type > r (
              PanelType_traits::create (i, f, this));

            if (!this->PanelType_)
            {
              this->PanelType_.set (r);
              continue;
            }
          }

          // TopLeftExtension
          //
          if (n.name () == "TopLeftExtension" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->TopLeftExtension_)
            {
              this->TopLeftExtension_.set (TopLeftExtension_traits::create (i, f, this));
              continue;
            }
          }

          // BottomRightExtension
          //
          if (n.name () == "BottomRightExtension" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->BottomRightExtension_)
            {
              this->BottomRightExtension_.set (BottomRightExtension_traits::create (i, f, this));
              continue;
            }
          }

          // DistanceFromWinEdge
          //
          if (n.name () == "DistanceFromWinEdge" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->DistanceFromWinEdge_)
            {
              this->DistanceFromWinEdge_.set (DistanceFromWinEdge_traits::create (i, f, this));
              continue;
            }
          }

          // TiltAngleFromDoorWindow
          //
          if (n.name () == "TiltAngleFromDoorWindow" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->TiltAngleFromDoorWindow_)
            {
              this->TiltAngleFromDoorWindow_.set (TiltAngleFromDoorWindow_traits::create (i, f, this));
              continue;
            }
          }

          // ShadedWindowParams
          //
          if (n.name () == "ShadedWindowParams" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< ShadedWindowParams_type > r (
              ShadedWindowParams_traits::create (i, f, this));

            if (!this->ShadedWindowParams_)
            {
              this->ShadedWindowParams_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSolarShadePanelParams* SimSolarShadePanelParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSolarShadePanelParams (*this, f, c);
      }

      SimSolarShadePanelParams& SimSolarShadePanelParams::
      operator= (const SimSolarShadePanelParams& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimPanelParams& > (*this) = x;
          this->PanelType_ = x.PanelType_;
          this->TopLeftExtension_ = x.TopLeftExtension_;
          this->BottomRightExtension_ = x.BottomRightExtension_;
          this->DistanceFromWinEdge_ = x.DistanceFromWinEdge_;
          this->TiltAngleFromDoorWindow_ = x.TiltAngleFromDoorWindow_;
          this->ShadedWindowParams_ = x.ShadedWindowParams_;
        }

        return *this;
      }

      SimSolarShadePanelParams::
      ~SimSolarShadePanelParams ()
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
