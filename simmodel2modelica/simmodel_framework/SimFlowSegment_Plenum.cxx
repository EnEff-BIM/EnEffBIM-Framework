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

#include "SimFlowSegment_Plenum.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowSegment_Plenum
      // 

      const SimFlowSegment_Plenum::SimFlowSeg_ZoneName_optional& SimFlowSegment_Plenum::
      SimFlowSeg_ZoneName () const
      {
        return this->SimFlowSeg_ZoneName_;
      }

      SimFlowSegment_Plenum::SimFlowSeg_ZoneName_optional& SimFlowSegment_Plenum::
      SimFlowSeg_ZoneName ()
      {
        return this->SimFlowSeg_ZoneName_;
      }

      void SimFlowSegment_Plenum::
      SimFlowSeg_ZoneName (const SimFlowSeg_ZoneName_type& x)
      {
        this->SimFlowSeg_ZoneName_.set (x);
      }

      void SimFlowSegment_Plenum::
      SimFlowSeg_ZoneName (const SimFlowSeg_ZoneName_optional& x)
      {
        this->SimFlowSeg_ZoneName_ = x;
      }

      void SimFlowSegment_Plenum::
      SimFlowSeg_ZoneName (::std::auto_ptr< SimFlowSeg_ZoneName_type > x)
      {
        this->SimFlowSeg_ZoneName_.set (x);
      }

      const SimFlowSegment_Plenum::SimFlowSeg_ZoneNodeName_optional& SimFlowSegment_Plenum::
      SimFlowSeg_ZoneNodeName () const
      {
        return this->SimFlowSeg_ZoneNodeName_;
      }

      SimFlowSegment_Plenum::SimFlowSeg_ZoneNodeName_optional& SimFlowSegment_Plenum::
      SimFlowSeg_ZoneNodeName ()
      {
        return this->SimFlowSeg_ZoneNodeName_;
      }

      void SimFlowSegment_Plenum::
      SimFlowSeg_ZoneNodeName (const SimFlowSeg_ZoneNodeName_type& x)
      {
        this->SimFlowSeg_ZoneNodeName_.set (x);
      }

      void SimFlowSegment_Plenum::
      SimFlowSeg_ZoneNodeName (const SimFlowSeg_ZoneNodeName_optional& x)
      {
        this->SimFlowSeg_ZoneNodeName_ = x;
      }

      void SimFlowSegment_Plenum::
      SimFlowSeg_ZoneNodeName (::std::auto_ptr< SimFlowSeg_ZoneNodeName_type > x)
      {
        this->SimFlowSeg_ZoneNodeName_.set (x);
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
      // SimFlowSegment_Plenum
      //

      SimFlowSegment_Plenum::
      SimFlowSegment_Plenum (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowSegment (RefId),
        SimFlowSeg_ZoneName_ (this),
        SimFlowSeg_ZoneNodeName_ (this)
      {
      }

      SimFlowSegment_Plenum::
      SimFlowSegment_Plenum (const SimFlowSegment_Plenum& x,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowSegment (x, f, c),
        SimFlowSeg_ZoneName_ (x.SimFlowSeg_ZoneName_, f, this),
        SimFlowSeg_ZoneNodeName_ (x.SimFlowSeg_ZoneNodeName_, f, this)
      {
      }

      SimFlowSegment_Plenum::
      SimFlowSegment_Plenum (const ::xercesc::DOMElement& e,
                             ::xml_schema::flags f,
                             ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowSegment (e, f | ::xml_schema::flags::base, c),
        SimFlowSeg_ZoneName_ (this),
        SimFlowSeg_ZoneNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowSegment_Plenum::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowSegment::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowSeg_ZoneName
          //
          if (n.name () == "SimFlowSeg_ZoneName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowSeg_ZoneName_type > r (
              SimFlowSeg_ZoneName_traits::create (i, f, this));

            if (!this->SimFlowSeg_ZoneName_)
            {
              this->SimFlowSeg_ZoneName_.set (r);
              continue;
            }
          }

          // SimFlowSeg_ZoneNodeName
          //
          if (n.name () == "SimFlowSeg_ZoneNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowSeg_ZoneNodeName_type > r (
              SimFlowSeg_ZoneNodeName_traits::create (i, f, this));

            if (!this->SimFlowSeg_ZoneNodeName_)
            {
              this->SimFlowSeg_ZoneNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowSegment_Plenum* SimFlowSegment_Plenum::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowSegment_Plenum (*this, f, c);
      }

      SimFlowSegment_Plenum& SimFlowSegment_Plenum::
      operator= (const SimFlowSegment_Plenum& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowSegment& > (*this) = x;
          this->SimFlowSeg_ZoneName_ = x.SimFlowSeg_ZoneName_;
          this->SimFlowSeg_ZoneNodeName_ = x.SimFlowSeg_ZoneNodeName_;
        }

        return *this;
      }

      SimFlowSegment_Plenum::
      ~SimFlowSegment_Plenum ()
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

