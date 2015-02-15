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

#include "SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop
      // 

      const SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::SimFlowFitting_LoopType_optional& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_LoopType () const
      {
        return this->SimFlowFitting_LoopType_;
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::SimFlowFitting_LoopType_optional& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_LoopType ()
      {
        return this->SimFlowFitting_LoopType_;
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_LoopType (const SimFlowFitting_LoopType_type& x)
      {
        this->SimFlowFitting_LoopType_.set (x);
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_LoopType (const SimFlowFitting_LoopType_optional& x)
      {
        this->SimFlowFitting_LoopType_ = x;
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_LoopType (::std::auto_ptr< SimFlowFitting_LoopType_type > x)
      {
        this->SimFlowFitting_LoopType_.set (x);
      }

      const SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::SimFlowFitting_InletCount_optional& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_InletCount () const
      {
        return this->SimFlowFitting_InletCount_;
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::SimFlowFitting_InletCount_optional& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_InletCount ()
      {
        return this->SimFlowFitting_InletCount_;
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_InletCount (const SimFlowFitting_InletCount_type& x)
      {
        this->SimFlowFitting_InletCount_.set (x);
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_InletCount (const SimFlowFitting_InletCount_optional& x)
      {
        this->SimFlowFitting_InletCount_ = x;
      }

      const SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::SimFlowFitting_OutletCount_optional& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_OutletCount () const
      {
        return this->SimFlowFitting_OutletCount_;
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::SimFlowFitting_OutletCount_optional& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_OutletCount ()
      {
        return this->SimFlowFitting_OutletCount_;
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_OutletCount (const SimFlowFitting_OutletCount_type& x)
      {
        this->SimFlowFitting_OutletCount_.set (x);
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_OutletCount (const SimFlowFitting_OutletCount_optional& x)
      {
        this->SimFlowFitting_OutletCount_ = x;
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
      // SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop
      //

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowFitting_FlowElementProxy (RefId),
        SimFlowFitting_LoopType_ (this),
        SimFlowFitting_InletCount_ (this),
        SimFlowFitting_OutletCount_ (this)
      {
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop (const SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop& x,
                                                           ::xml_schema::flags f,
                                                           ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowFitting_FlowElementProxy (x, f, c),
        SimFlowFitting_LoopType_ (x.SimFlowFitting_LoopType_, f, this),
        SimFlowFitting_InletCount_ (x.SimFlowFitting_InletCount_, f, this),
        SimFlowFitting_OutletCount_ (x.SimFlowFitting_OutletCount_, f, this)
      {
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop (const ::xercesc::DOMElement& e,
                                                           ::xml_schema::flags f,
                                                           ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowFitting_FlowElementProxy (e, f | ::xml_schema::flags::base, c),
        SimFlowFitting_LoopType_ (this),
        SimFlowFitting_InletCount_ (this),
        SimFlowFitting_OutletCount_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowFitting_FlowElementProxy::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowFitting_LoopType
          //
          if (n.name () == "SimFlowFitting_LoopType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowFitting_LoopType_type > r (
              SimFlowFitting_LoopType_traits::create (i, f, this));

            if (!this->SimFlowFitting_LoopType_)
            {
              this->SimFlowFitting_LoopType_.set (r);
              continue;
            }
          }

          // SimFlowFitting_InletCount
          //
          if (n.name () == "SimFlowFitting_InletCount" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowFitting_InletCount_)
            {
              this->SimFlowFitting_InletCount_.set (SimFlowFitting_InletCount_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowFitting_OutletCount
          //
          if (n.name () == "SimFlowFitting_OutletCount" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimFlowFitting_OutletCount_)
            {
              this->SimFlowFitting_OutletCount_.set (SimFlowFitting_OutletCount_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop* SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop (*this, f, c);
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop& SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      operator= (const SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowFitting_FlowElementProxy& > (*this) = x;
          this->SimFlowFitting_LoopType_ = x.SimFlowFitting_LoopType_;
          this->SimFlowFitting_InletCount_ = x.SimFlowFitting_InletCount_;
          this->SimFlowFitting_OutletCount_ = x.SimFlowFitting_OutletCount_;
        }

        return *this;
      }

      SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop::
      ~SimFlowFitting_FlowElementProxy_DemandProxy_AirLoop ()
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

