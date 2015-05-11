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

#include "SimNode_AirflowNetworkNode_ExternalNode.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimNode_AirflowNetworkNode_ExternalNode
      // 

      const SimNode_AirflowNetworkNode_ExternalNode::SimNode_Name_optional& SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_Name () const
      {
        return this->SimNode_Name_;
      }

      SimNode_AirflowNetworkNode_ExternalNode::SimNode_Name_optional& SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_Name ()
      {
        return this->SimNode_Name_;
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_Name (const SimNode_Name_type& x)
      {
        this->SimNode_Name_.set (x);
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_Name (const SimNode_Name_optional& x)
      {
        this->SimNode_Name_ = x;
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_Name (::std::auto_ptr< SimNode_Name_type > x)
      {
        this->SimNode_Name_.set (x);
      }

      const SimNode_AirflowNetworkNode_ExternalNode::SimNode_ExternalNodeHeight_optional& SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_ExternalNodeHeight () const
      {
        return this->SimNode_ExternalNodeHeight_;
      }

      SimNode_AirflowNetworkNode_ExternalNode::SimNode_ExternalNodeHeight_optional& SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_ExternalNodeHeight ()
      {
        return this->SimNode_ExternalNodeHeight_;
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_ExternalNodeHeight (const SimNode_ExternalNodeHeight_type& x)
      {
        this->SimNode_ExternalNodeHeight_.set (x);
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_ExternalNodeHeight (const SimNode_ExternalNodeHeight_optional& x)
      {
        this->SimNode_ExternalNodeHeight_ = x;
      }

      const SimNode_AirflowNetworkNode_ExternalNode::SimNode_WindPressureCoefValObjName_optional& SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_WindPressureCoefValObjName () const
      {
        return this->SimNode_WindPressureCoefValObjName_;
      }

      SimNode_AirflowNetworkNode_ExternalNode::SimNode_WindPressureCoefValObjName_optional& SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_WindPressureCoefValObjName ()
      {
        return this->SimNode_WindPressureCoefValObjName_;
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_WindPressureCoefValObjName (const SimNode_WindPressureCoefValObjName_type& x)
      {
        this->SimNode_WindPressureCoefValObjName_.set (x);
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_WindPressureCoefValObjName (const SimNode_WindPressureCoefValObjName_optional& x)
      {
        this->SimNode_WindPressureCoefValObjName_ = x;
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_WindPressureCoefValObjName (::std::auto_ptr< SimNode_WindPressureCoefValObjName_type > x)
      {
        this->SimNode_WindPressureCoefValObjName_.set (x);
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
      // SimNode_AirflowNetworkNode_ExternalNode
      //

      SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_AirflowNetworkNode_ExternalNode (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimNode_AirflowNetworkNode (RefId),
        SimNode_Name_ (this),
        SimNode_ExternalNodeHeight_ (this),
        SimNode_WindPressureCoefValObjName_ (this)
      {
      }

      SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_AirflowNetworkNode_ExternalNode (const SimNode_AirflowNetworkNode_ExternalNode& x,
                                               ::xml_schema::flags f,
                                               ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimNode_AirflowNetworkNode (x, f, c),
        SimNode_Name_ (x.SimNode_Name_, f, this),
        SimNode_ExternalNodeHeight_ (x.SimNode_ExternalNodeHeight_, f, this),
        SimNode_WindPressureCoefValObjName_ (x.SimNode_WindPressureCoefValObjName_, f, this)
      {
      }

      SimNode_AirflowNetworkNode_ExternalNode::
      SimNode_AirflowNetworkNode_ExternalNode (const ::xercesc::DOMElement& e,
                                               ::xml_schema::flags f,
                                               ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimNode_AirflowNetworkNode (e, f | ::xml_schema::flags::base, c),
        SimNode_Name_ (this),
        SimNode_ExternalNodeHeight_ (this),
        SimNode_WindPressureCoefValObjName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimNode_AirflowNetworkNode_ExternalNode::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimNode_AirflowNetworkNode::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimNode_Name
          //
          if (n.name () == "SimNode_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimNode_Name_type > r (
              SimNode_Name_traits::create (i, f, this));

            if (!this->SimNode_Name_)
            {
              this->SimNode_Name_.set (r);
              continue;
            }
          }

          // SimNode_ExternalNodeHeight
          //
          if (n.name () == "SimNode_ExternalNodeHeight" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimNode_ExternalNodeHeight_)
            {
              this->SimNode_ExternalNodeHeight_.set (SimNode_ExternalNodeHeight_traits::create (i, f, this));
              continue;
            }
          }

          // SimNode_WindPressureCoefValObjName
          //
          if (n.name () == "SimNode_WindPressureCoefValObjName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimNode_WindPressureCoefValObjName_type > r (
              SimNode_WindPressureCoefValObjName_traits::create (i, f, this));

            if (!this->SimNode_WindPressureCoefValObjName_)
            {
              this->SimNode_WindPressureCoefValObjName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimNode_AirflowNetworkNode_ExternalNode* SimNode_AirflowNetworkNode_ExternalNode::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimNode_AirflowNetworkNode_ExternalNode (*this, f, c);
      }

      SimNode_AirflowNetworkNode_ExternalNode& SimNode_AirflowNetworkNode_ExternalNode::
      operator= (const SimNode_AirflowNetworkNode_ExternalNode& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimNode_AirflowNetworkNode& > (*this) = x;
          this->SimNode_Name_ = x.SimNode_Name_;
          this->SimNode_ExternalNodeHeight_ = x.SimNode_ExternalNodeHeight_;
          this->SimNode_WindPressureCoefValObjName_ = x.SimNode_WindPressureCoefValObjName_;
        }

        return *this;
      }

      SimNode_AirflowNetworkNode_ExternalNode::
      ~SimNode_AirflowNetworkNode_ExternalNode ()
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

