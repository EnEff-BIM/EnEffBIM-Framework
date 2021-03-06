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

#include "SimFlowSegment_VirtualComponent.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowSegment_VirtualComponent
      // 

      const SimFlowSegment_VirtualComponent::SimFlowSeg_Name_optional& SimFlowSegment_VirtualComponent::
      SimFlowSeg_Name () const
      {
        return this->SimFlowSeg_Name_;
      }

      SimFlowSegment_VirtualComponent::SimFlowSeg_Name_optional& SimFlowSegment_VirtualComponent::
      SimFlowSeg_Name ()
      {
        return this->SimFlowSeg_Name_;
      }

      void SimFlowSegment_VirtualComponent::
      SimFlowSeg_Name (const SimFlowSeg_Name_type& x)
      {
        this->SimFlowSeg_Name_.set (x);
      }

      void SimFlowSegment_VirtualComponent::
      SimFlowSeg_Name (const SimFlowSeg_Name_optional& x)
      {
        this->SimFlowSeg_Name_ = x;
      }

      void SimFlowSegment_VirtualComponent::
      SimFlowSeg_Name (::std::auto_ptr< SimFlowSeg_Name_type > x)
      {
        this->SimFlowSeg_Name_.set (x);
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
      // SimFlowSegment_VirtualComponent
      //

      SimFlowSegment_VirtualComponent::
      SimFlowSegment_VirtualComponent ()
      : ::schema::simxml::MepModel::SimFlowSegment (),
        SimFlowSeg_Name_ (this)
      {
      }

      SimFlowSegment_VirtualComponent::
      SimFlowSegment_VirtualComponent (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowSegment (RefId),
        SimFlowSeg_Name_ (this)
      {
      }

      SimFlowSegment_VirtualComponent::
      SimFlowSegment_VirtualComponent (const SimFlowSegment_VirtualComponent& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowSegment (x, f, c),
        SimFlowSeg_Name_ (x.SimFlowSeg_Name_, f, this)
      {
      }

      SimFlowSegment_VirtualComponent::
      SimFlowSegment_VirtualComponent (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowSegment (e, f | ::xml_schema::flags::base, c),
        SimFlowSeg_Name_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowSegment_VirtualComponent::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowSegment::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowSeg_Name
          //
          if (n.name () == "SimFlowSeg_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSeg_Name_type > r (
              SimFlowSeg_Name_traits::create (i, f, this));

            if (!this->SimFlowSeg_Name_)
            {
              this->SimFlowSeg_Name_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowSegment_VirtualComponent* SimFlowSegment_VirtualComponent::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowSegment_VirtualComponent (*this, f, c);
      }

      SimFlowSegment_VirtualComponent& SimFlowSegment_VirtualComponent::
      operator= (const SimFlowSegment_VirtualComponent& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowSegment& > (*this) = x;
          this->SimFlowSeg_Name_ = x.SimFlowSeg_Name_;
        }

        return *this;
      }

      SimFlowSegment_VirtualComponent::
      ~SimFlowSegment_VirtualComponent ()
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

