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

#include "SimFlowSegment_Louver_Intake.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowSegment_Louver_Intake
      // 

      const SimFlowSegment_Louver_Intake::SimFlowSeg_DesignPresDrop_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_DesignPresDrop () const
      {
        return this->SimFlowSeg_DesignPresDrop_;
      }

      SimFlowSegment_Louver_Intake::SimFlowSeg_DesignPresDrop_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_DesignPresDrop ()
      {
        return this->SimFlowSeg_DesignPresDrop_;
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_DesignPresDrop (const SimFlowSeg_DesignPresDrop_type& x)
      {
        this->SimFlowSeg_DesignPresDrop_.set (x);
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_DesignPresDrop (const SimFlowSeg_DesignPresDrop_optional& x)
      {
        this->SimFlowSeg_DesignPresDrop_ = x;
      }

      const SimFlowSegment_Louver_Intake::SimFlowSeg_Ht_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_Ht () const
      {
        return this->SimFlowSeg_Ht_;
      }

      SimFlowSegment_Louver_Intake::SimFlowSeg_Ht_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_Ht ()
      {
        return this->SimFlowSeg_Ht_;
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_Ht (const SimFlowSeg_Ht_type& x)
      {
        this->SimFlowSeg_Ht_.set (x);
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_Ht (const SimFlowSeg_Ht_optional& x)
      {
        this->SimFlowSeg_Ht_ = x;
      }

      const SimFlowSegment_Louver_Intake::SimFlowSeg_Width_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_Width () const
      {
        return this->SimFlowSeg_Width_;
      }

      SimFlowSegment_Louver_Intake::SimFlowSeg_Width_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_Width ()
      {
        return this->SimFlowSeg_Width_;
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_Width (const SimFlowSeg_Width_type& x)
      {
        this->SimFlowSeg_Width_.set (x);
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_Width (const SimFlowSeg_Width_optional& x)
      {
        this->SimFlowSeg_Width_ = x;
      }

      const SimFlowSegment_Louver_Intake::SimFlowSeg_NumberofSlats_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_NumberofSlats () const
      {
        return this->SimFlowSeg_NumberofSlats_;
      }

      SimFlowSegment_Louver_Intake::SimFlowSeg_NumberofSlats_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_NumberofSlats ()
      {
        return this->SimFlowSeg_NumberofSlats_;
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_NumberofSlats (const SimFlowSeg_NumberofSlats_type& x)
      {
        this->SimFlowSeg_NumberofSlats_.set (x);
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_NumberofSlats (const SimFlowSeg_NumberofSlats_optional& x)
      {
        this->SimFlowSeg_NumberofSlats_ = x;
      }

      const SimFlowSegment_Louver_Intake::SimFlowSeg_FixedAngle_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_FixedAngle () const
      {
        return this->SimFlowSeg_FixedAngle_;
      }

      SimFlowSegment_Louver_Intake::SimFlowSeg_FixedAngle_optional& SimFlowSegment_Louver_Intake::
      SimFlowSeg_FixedAngle ()
      {
        return this->SimFlowSeg_FixedAngle_;
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_FixedAngle (const SimFlowSeg_FixedAngle_type& x)
      {
        this->SimFlowSeg_FixedAngle_.set (x);
      }

      void SimFlowSegment_Louver_Intake::
      SimFlowSeg_FixedAngle (const SimFlowSeg_FixedAngle_optional& x)
      {
        this->SimFlowSeg_FixedAngle_ = x;
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
    namespace MepModel
    {
      // SimFlowSegment_Louver_Intake
      //

      SimFlowSegment_Louver_Intake::
      SimFlowSegment_Louver_Intake (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowSegment_Louver (RefId),
        SimFlowSeg_DesignPresDrop_ (this),
        SimFlowSeg_Ht_ (this),
        SimFlowSeg_Width_ (this),
        SimFlowSeg_NumberofSlats_ (this),
        SimFlowSeg_FixedAngle_ (this)
      {
      }

      SimFlowSegment_Louver_Intake::
      SimFlowSegment_Louver_Intake (const SimFlowSegment_Louver_Intake& x,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowSegment_Louver (x, f, c),
        SimFlowSeg_DesignPresDrop_ (x.SimFlowSeg_DesignPresDrop_, f, this),
        SimFlowSeg_Ht_ (x.SimFlowSeg_Ht_, f, this),
        SimFlowSeg_Width_ (x.SimFlowSeg_Width_, f, this),
        SimFlowSeg_NumberofSlats_ (x.SimFlowSeg_NumberofSlats_, f, this),
        SimFlowSeg_FixedAngle_ (x.SimFlowSeg_FixedAngle_, f, this)
      {
      }

      SimFlowSegment_Louver_Intake::
      SimFlowSegment_Louver_Intake (const ::xercesc::DOMElement& e,
                                    ::xml_schema::flags f,
                                    ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowSegment_Louver (e, f | ::xml_schema::flags::base, c),
        SimFlowSeg_DesignPresDrop_ (this),
        SimFlowSeg_Ht_ (this),
        SimFlowSeg_Width_ (this),
        SimFlowSeg_NumberofSlats_ (this),
        SimFlowSeg_FixedAngle_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowSegment_Louver_Intake::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowSegment_Louver::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowSeg_DesignPresDrop
          //
          if (n.name () == "SimFlowSeg_DesignPresDrop" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowSeg_DesignPresDrop_)
            {
              this->SimFlowSeg_DesignPresDrop_.set (SimFlowSeg_DesignPresDrop_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSeg_Ht
          //
          if (n.name () == "SimFlowSeg_Ht" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowSeg_Ht_)
            {
              this->SimFlowSeg_Ht_.set (SimFlowSeg_Ht_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSeg_Width
          //
          if (n.name () == "SimFlowSeg_Width" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowSeg_Width_)
            {
              this->SimFlowSeg_Width_.set (SimFlowSeg_Width_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSeg_NumberofSlats
          //
          if (n.name () == "SimFlowSeg_NumberofSlats" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowSeg_NumberofSlats_)
            {
              this->SimFlowSeg_NumberofSlats_.set (SimFlowSeg_NumberofSlats_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSeg_FixedAngle
          //
          if (n.name () == "SimFlowSeg_FixedAngle" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowSeg_FixedAngle_)
            {
              this->SimFlowSeg_FixedAngle_.set (SimFlowSeg_FixedAngle_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowSegment_Louver_Intake* SimFlowSegment_Louver_Intake::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowSegment_Louver_Intake (*this, f, c);
      }

      SimFlowSegment_Louver_Intake& SimFlowSegment_Louver_Intake::
      operator= (const SimFlowSegment_Louver_Intake& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowSegment_Louver& > (*this) = x;
          this->SimFlowSeg_DesignPresDrop_ = x.SimFlowSeg_DesignPresDrop_;
          this->SimFlowSeg_Ht_ = x.SimFlowSeg_Ht_;
          this->SimFlowSeg_Width_ = x.SimFlowSeg_Width_;
          this->SimFlowSeg_NumberofSlats_ = x.SimFlowSeg_NumberofSlats_;
          this->SimFlowSeg_FixedAngle_ = x.SimFlowSeg_FixedAngle_;
        }

        return *this;
      }

      SimFlowSegment_Louver_Intake::
      ~SimFlowSegment_Louver_Intake ()
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
    namespace MepModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

