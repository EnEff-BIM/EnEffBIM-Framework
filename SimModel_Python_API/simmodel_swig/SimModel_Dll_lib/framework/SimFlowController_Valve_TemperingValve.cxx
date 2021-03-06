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

#include "SimFlowController_Valve_TemperingValve.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowController_Valve_TemperingValve
      // 

      const SimFlowController_Valve_TemperingValve::SimFlowCntrl_Name_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Name () const
      {
        return this->SimFlowCntrl_Name_;
      }

      SimFlowController_Valve_TemperingValve::SimFlowCntrl_Name_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Name ()
      {
        return this->SimFlowCntrl_Name_;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Name (const SimFlowCntrl_Name_type& x)
      {
        this->SimFlowCntrl_Name_.set (x);
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Name (const SimFlowCntrl_Name_optional& x)
      {
        this->SimFlowCntrl_Name_ = x;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Name (::std::auto_ptr< SimFlowCntrl_Name_type > x)
      {
        this->SimFlowCntrl_Name_.set (x);
      }

      const SimFlowController_Valve_TemperingValve::SimFlowCntrl_InNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_InNodeName () const
      {
        return this->SimFlowCntrl_InNodeName_;
      }

      SimFlowController_Valve_TemperingValve::SimFlowCntrl_InNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_InNodeName ()
      {
        return this->SimFlowCntrl_InNodeName_;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_InNodeName (const SimFlowCntrl_InNodeName_type& x)
      {
        this->SimFlowCntrl_InNodeName_.set (x);
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_InNodeName (const SimFlowCntrl_InNodeName_optional& x)
      {
        this->SimFlowCntrl_InNodeName_ = x;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_InNodeName (::std::auto_ptr< SimFlowCntrl_InNodeName_type > x)
      {
        this->SimFlowCntrl_InNodeName_.set (x);
      }

      const SimFlowController_Valve_TemperingValve::SimFlowCntrl_OutNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_OutNodeName () const
      {
        return this->SimFlowCntrl_OutNodeName_;
      }

      SimFlowController_Valve_TemperingValve::SimFlowCntrl_OutNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_OutNodeName ()
      {
        return this->SimFlowCntrl_OutNodeName_;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_OutNodeName (const SimFlowCntrl_OutNodeName_type& x)
      {
        this->SimFlowCntrl_OutNodeName_.set (x);
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_OutNodeName (const SimFlowCntrl_OutNodeName_optional& x)
      {
        this->SimFlowCntrl_OutNodeName_ = x;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_OutNodeName (::std::auto_ptr< SimFlowCntrl_OutNodeName_type > x)
      {
        this->SimFlowCntrl_OutNodeName_.set (x);
      }

      const SimFlowController_Valve_TemperingValve::SimFlowCntrl_Stream2SrcNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Stream2SrcNodeName () const
      {
        return this->SimFlowCntrl_Stream2SrcNodeName_;
      }

      SimFlowController_Valve_TemperingValve::SimFlowCntrl_Stream2SrcNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Stream2SrcNodeName ()
      {
        return this->SimFlowCntrl_Stream2SrcNodeName_;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Stream2SrcNodeName (const SimFlowCntrl_Stream2SrcNodeName_type& x)
      {
        this->SimFlowCntrl_Stream2SrcNodeName_.set (x);
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Stream2SrcNodeName (const SimFlowCntrl_Stream2SrcNodeName_optional& x)
      {
        this->SimFlowCntrl_Stream2SrcNodeName_ = x;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_Stream2SrcNodeName (::std::auto_ptr< SimFlowCntrl_Stream2SrcNodeName_type > x)
      {
        this->SimFlowCntrl_Stream2SrcNodeName_.set (x);
      }

      const SimFlowController_Valve_TemperingValve::SimFlowCntrl_TempSetpointNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_TempSetpointNodeName () const
      {
        return this->SimFlowCntrl_TempSetpointNodeName_;
      }

      SimFlowController_Valve_TemperingValve::SimFlowCntrl_TempSetpointNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_TempSetpointNodeName ()
      {
        return this->SimFlowCntrl_TempSetpointNodeName_;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_TempSetpointNodeName (const SimFlowCntrl_TempSetpointNodeName_type& x)
      {
        this->SimFlowCntrl_TempSetpointNodeName_.set (x);
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_TempSetpointNodeName (const SimFlowCntrl_TempSetpointNodeName_optional& x)
      {
        this->SimFlowCntrl_TempSetpointNodeName_ = x;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_TempSetpointNodeName (::std::auto_ptr< SimFlowCntrl_TempSetpointNodeName_type > x)
      {
        this->SimFlowCntrl_TempSetpointNodeName_.set (x);
      }

      const SimFlowController_Valve_TemperingValve::SimFlowCntrl_PumpOutletNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_PumpOutletNodeName () const
      {
        return this->SimFlowCntrl_PumpOutletNodeName_;
      }

      SimFlowController_Valve_TemperingValve::SimFlowCntrl_PumpOutletNodeName_optional& SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_PumpOutletNodeName ()
      {
        return this->SimFlowCntrl_PumpOutletNodeName_;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_PumpOutletNodeName (const SimFlowCntrl_PumpOutletNodeName_type& x)
      {
        this->SimFlowCntrl_PumpOutletNodeName_.set (x);
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_PumpOutletNodeName (const SimFlowCntrl_PumpOutletNodeName_optional& x)
      {
        this->SimFlowCntrl_PumpOutletNodeName_ = x;
      }

      void SimFlowController_Valve_TemperingValve::
      SimFlowCntrl_PumpOutletNodeName (::std::auto_ptr< SimFlowCntrl_PumpOutletNodeName_type > x)
      {
        this->SimFlowCntrl_PumpOutletNodeName_.set (x);
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
    namespace MepModel
    {
      // SimFlowController_Valve_TemperingValve
      //

      SimFlowController_Valve_TemperingValve::
      SimFlowController_Valve_TemperingValve ()
      : ::schema::simxml::MepModel::SimFlowController_Valve (),
        SimFlowCntrl_Name_ (this),
        SimFlowCntrl_InNodeName_ (this),
        SimFlowCntrl_OutNodeName_ (this),
        SimFlowCntrl_Stream2SrcNodeName_ (this),
        SimFlowCntrl_TempSetpointNodeName_ (this),
        SimFlowCntrl_PumpOutletNodeName_ (this)
      {
      }

      SimFlowController_Valve_TemperingValve::
      SimFlowController_Valve_TemperingValve (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowController_Valve (RefId),
        SimFlowCntrl_Name_ (this),
        SimFlowCntrl_InNodeName_ (this),
        SimFlowCntrl_OutNodeName_ (this),
        SimFlowCntrl_Stream2SrcNodeName_ (this),
        SimFlowCntrl_TempSetpointNodeName_ (this),
        SimFlowCntrl_PumpOutletNodeName_ (this)
      {
      }

      SimFlowController_Valve_TemperingValve::
      SimFlowController_Valve_TemperingValve (const SimFlowController_Valve_TemperingValve& x,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowController_Valve (x, f, c),
        SimFlowCntrl_Name_ (x.SimFlowCntrl_Name_, f, this),
        SimFlowCntrl_InNodeName_ (x.SimFlowCntrl_InNodeName_, f, this),
        SimFlowCntrl_OutNodeName_ (x.SimFlowCntrl_OutNodeName_, f, this),
        SimFlowCntrl_Stream2SrcNodeName_ (x.SimFlowCntrl_Stream2SrcNodeName_, f, this),
        SimFlowCntrl_TempSetpointNodeName_ (x.SimFlowCntrl_TempSetpointNodeName_, f, this),
        SimFlowCntrl_PumpOutletNodeName_ (x.SimFlowCntrl_PumpOutletNodeName_, f, this)
      {
      }

      SimFlowController_Valve_TemperingValve::
      SimFlowController_Valve_TemperingValve (const ::xercesc::DOMElement& e,
                                              ::xml_schema::flags f,
                                              ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowController_Valve (e, f | ::xml_schema::flags::base, c),
        SimFlowCntrl_Name_ (this),
        SimFlowCntrl_InNodeName_ (this),
        SimFlowCntrl_OutNodeName_ (this),
        SimFlowCntrl_Stream2SrcNodeName_ (this),
        SimFlowCntrl_TempSetpointNodeName_ (this),
        SimFlowCntrl_PumpOutletNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowController_Valve_TemperingValve::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowController_Valve::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowCntrl_Name
          //
          if (n.name () == "SimFlowCntrl_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCntrl_Name_type > r (
              SimFlowCntrl_Name_traits::create (i, f, this));

            if (!this->SimFlowCntrl_Name_)
            {
              this->SimFlowCntrl_Name_.set (r);
              continue;
            }
          }

          // SimFlowCntrl_InNodeName
          //
          if (n.name () == "SimFlowCntrl_InNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCntrl_InNodeName_type > r (
              SimFlowCntrl_InNodeName_traits::create (i, f, this));

            if (!this->SimFlowCntrl_InNodeName_)
            {
              this->SimFlowCntrl_InNodeName_.set (r);
              continue;
            }
          }

          // SimFlowCntrl_OutNodeName
          //
          if (n.name () == "SimFlowCntrl_OutNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCntrl_OutNodeName_type > r (
              SimFlowCntrl_OutNodeName_traits::create (i, f, this));

            if (!this->SimFlowCntrl_OutNodeName_)
            {
              this->SimFlowCntrl_OutNodeName_.set (r);
              continue;
            }
          }

          // SimFlowCntrl_Stream2SrcNodeName
          //
          if (n.name () == "SimFlowCntrl_Stream2SrcNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCntrl_Stream2SrcNodeName_type > r (
              SimFlowCntrl_Stream2SrcNodeName_traits::create (i, f, this));

            if (!this->SimFlowCntrl_Stream2SrcNodeName_)
            {
              this->SimFlowCntrl_Stream2SrcNodeName_.set (r);
              continue;
            }
          }

          // SimFlowCntrl_TempSetpointNodeName
          //
          if (n.name () == "SimFlowCntrl_TempSetpointNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCntrl_TempSetpointNodeName_type > r (
              SimFlowCntrl_TempSetpointNodeName_traits::create (i, f, this));

            if (!this->SimFlowCntrl_TempSetpointNodeName_)
            {
              this->SimFlowCntrl_TempSetpointNodeName_.set (r);
              continue;
            }
          }

          // SimFlowCntrl_PumpOutletNodeName
          //
          if (n.name () == "SimFlowCntrl_PumpOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCntrl_PumpOutletNodeName_type > r (
              SimFlowCntrl_PumpOutletNodeName_traits::create (i, f, this));

            if (!this->SimFlowCntrl_PumpOutletNodeName_)
            {
              this->SimFlowCntrl_PumpOutletNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowController_Valve_TemperingValve* SimFlowController_Valve_TemperingValve::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowController_Valve_TemperingValve (*this, f, c);
      }

      SimFlowController_Valve_TemperingValve& SimFlowController_Valve_TemperingValve::
      operator= (const SimFlowController_Valve_TemperingValve& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowController_Valve& > (*this) = x;
          this->SimFlowCntrl_Name_ = x.SimFlowCntrl_Name_;
          this->SimFlowCntrl_InNodeName_ = x.SimFlowCntrl_InNodeName_;
          this->SimFlowCntrl_OutNodeName_ = x.SimFlowCntrl_OutNodeName_;
          this->SimFlowCntrl_Stream2SrcNodeName_ = x.SimFlowCntrl_Stream2SrcNodeName_;
          this->SimFlowCntrl_TempSetpointNodeName_ = x.SimFlowCntrl_TempSetpointNodeName_;
          this->SimFlowCntrl_PumpOutletNodeName_ = x.SimFlowCntrl_PumpOutletNodeName_;
        }

        return *this;
      }

      SimFlowController_Valve_TemperingValve::
      ~SimFlowController_Valve_TemperingValve ()
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

