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

#include "SimFlowSegment_Pipe_Adiabatic.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimFlowSegment_Pipe_Adiabatic
      // 

      const SimFlowSegment_Pipe_Adiabatic::SimFlowSeg_InNodeName_optional& SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_InNodeName () const
      {
        return this->SimFlowSeg_InNodeName_;
      }

      SimFlowSegment_Pipe_Adiabatic::SimFlowSeg_InNodeName_optional& SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_InNodeName ()
      {
        return this->SimFlowSeg_InNodeName_;
      }

      void SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_InNodeName (const SimFlowSeg_InNodeName_type& x)
      {
        this->SimFlowSeg_InNodeName_.set (x);
      }

      void SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_InNodeName (const SimFlowSeg_InNodeName_optional& x)
      {
        this->SimFlowSeg_InNodeName_ = x;
      }

      void SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_InNodeName (::std::auto_ptr< SimFlowSeg_InNodeName_type > x)
      {
        this->SimFlowSeg_InNodeName_.set (x);
      }

      const SimFlowSegment_Pipe_Adiabatic::SimFlowSeg_OutNodeName_optional& SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_OutNodeName () const
      {
        return this->SimFlowSeg_OutNodeName_;
      }

      SimFlowSegment_Pipe_Adiabatic::SimFlowSeg_OutNodeName_optional& SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_OutNodeName ()
      {
        return this->SimFlowSeg_OutNodeName_;
      }

      void SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_OutNodeName (const SimFlowSeg_OutNodeName_type& x)
      {
        this->SimFlowSeg_OutNodeName_.set (x);
      }

      void SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_OutNodeName (const SimFlowSeg_OutNodeName_optional& x)
      {
        this->SimFlowSeg_OutNodeName_ = x;
      }

      void SimFlowSegment_Pipe_Adiabatic::
      SimFlowSeg_OutNodeName (::std::auto_ptr< SimFlowSeg_OutNodeName_type > x)
      {
        this->SimFlowSeg_OutNodeName_.set (x);
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
      // SimFlowSegment_Pipe_Adiabatic
      //

      SimFlowSegment_Pipe_Adiabatic::
      SimFlowSegment_Pipe_Adiabatic (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimFlowSegment_Pipe (RefId),
        SimFlowSeg_InNodeName_ (this),
        SimFlowSeg_OutNodeName_ (this)
      {
      }

      SimFlowSegment_Pipe_Adiabatic::
      SimFlowSegment_Pipe_Adiabatic (const SimFlowSegment_Pipe_Adiabatic& x,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowSegment_Pipe (x, f, c),
        SimFlowSeg_InNodeName_ (x.SimFlowSeg_InNodeName_, f, this),
        SimFlowSeg_OutNodeName_ (x.SimFlowSeg_OutNodeName_, f, this)
      {
      }

      SimFlowSegment_Pipe_Adiabatic::
      SimFlowSegment_Pipe_Adiabatic (const ::xercesc::DOMElement& e,
                                     ::xml_schema::flags f,
                                     ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimFlowSegment_Pipe (e, f | ::xml_schema::flags::base, c),
        SimFlowSeg_InNodeName_ (this),
        SimFlowSeg_OutNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowSegment_Pipe_Adiabatic::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimFlowSegment_Pipe::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowSeg_InNodeName
          //
          if (n.name () == "SimFlowSeg_InNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowSeg_InNodeName_type > r (
              SimFlowSeg_InNodeName_traits::create (i, f, this));

            if (!this->SimFlowSeg_InNodeName_)
            {
              this->SimFlowSeg_InNodeName_.set (r);
              continue;
            }
          }

          // SimFlowSeg_OutNodeName
          //
          if (n.name () == "SimFlowSeg_OutNodeName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimFlowSeg_OutNodeName_type > r (
              SimFlowSeg_OutNodeName_traits::create (i, f, this));

            if (!this->SimFlowSeg_OutNodeName_)
            {
              this->SimFlowSeg_OutNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowSegment_Pipe_Adiabatic* SimFlowSegment_Pipe_Adiabatic::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowSegment_Pipe_Adiabatic (*this, f, c);
      }

      SimFlowSegment_Pipe_Adiabatic& SimFlowSegment_Pipe_Adiabatic::
      operator= (const SimFlowSegment_Pipe_Adiabatic& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimFlowSegment_Pipe& > (*this) = x;
          this->SimFlowSeg_InNodeName_ = x.SimFlowSeg_InNodeName_;
          this->SimFlowSeg_OutNodeName_ = x.SimFlowSeg_OutNodeName_;
        }

        return *this;
      }

      SimFlowSegment_Pipe_Adiabatic::
      ~SimFlowSegment_Pipe_Adiabatic ()
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

