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

#include "SimConnection_AirFlow_CrossSystem.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimConnection_AirFlow_CrossSystem
      // 

      const SimConnection_AirFlow_CrossSystem::SimConnect_Name_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_Name () const
      {
        return this->SimConnect_Name_;
      }

      SimConnection_AirFlow_CrossSystem::SimConnect_Name_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_Name ()
      {
        return this->SimConnect_Name_;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_Name (const SimConnect_Name_type& x)
      {
        this->SimConnect_Name_.set (x);
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_Name (const SimConnect_Name_optional& x)
      {
        this->SimConnect_Name_ = x;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_Name (::std::auto_ptr< SimConnect_Name_type > x)
      {
        this->SimConnect_Name_.set (x);
      }

      const SimConnection_AirFlow_CrossSystem::SimConnect_NodeName_1_2_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_NodeName_1_2 () const
      {
        return this->SimConnect_NodeName_1_2_;
      }

      SimConnection_AirFlow_CrossSystem::SimConnect_NodeName_1_2_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_NodeName_1_2 ()
      {
        return this->SimConnect_NodeName_1_2_;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_NodeName_1_2 (const SimConnect_NodeName_1_2_type& x)
      {
        this->SimConnect_NodeName_1_2_.set (x);
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_NodeName_1_2 (const SimConnect_NodeName_1_2_optional& x)
      {
        this->SimConnect_NodeName_1_2_ = x;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_NodeName_1_2 (::std::auto_ptr< SimConnect_NodeName_1_2_type > x)
      {
        this->SimConnect_NodeName_1_2_.set (x);
      }

      const SimConnection_AirFlow_CrossSystem::SimConnect_CompName_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_CompName () const
      {
        return this->SimConnect_CompName_;
      }

      SimConnection_AirFlow_CrossSystem::SimConnect_CompName_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_CompName ()
      {
        return this->SimConnect_CompName_;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_CompName (const SimConnect_CompName_type& x)
      {
        this->SimConnect_CompName_.set (x);
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_CompName (const SimConnect_CompName_optional& x)
      {
        this->SimConnect_CompName_ = x;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_CompName (::std::auto_ptr< SimConnect_CompName_type > x)
      {
        this->SimConnect_CompName_.set (x);
      }

      const SimConnection_AirFlow_CrossSystem::SimConnect_ThermalZoneName_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_ThermalZoneName () const
      {
        return this->SimConnect_ThermalZoneName_;
      }

      SimConnection_AirFlow_CrossSystem::SimConnect_ThermalZoneName_optional& SimConnection_AirFlow_CrossSystem::
      SimConnect_ThermalZoneName ()
      {
        return this->SimConnect_ThermalZoneName_;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_ThermalZoneName (const SimConnect_ThermalZoneName_type& x)
      {
        this->SimConnect_ThermalZoneName_.set (x);
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_ThermalZoneName (const SimConnect_ThermalZoneName_optional& x)
      {
        this->SimConnect_ThermalZoneName_ = x;
      }

      void SimConnection_AirFlow_CrossSystem::
      SimConnect_ThermalZoneName (::std::auto_ptr< SimConnect_ThermalZoneName_type > x)
      {
        this->SimConnect_ThermalZoneName_.set (x);
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
      // SimConnection_AirFlow_CrossSystem
      //

      SimConnection_AirFlow_CrossSystem::
      SimConnection_AirFlow_CrossSystem (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimConnection_AirFlow (RefId),
        SimConnect_Name_ (this),
        SimConnect_NodeName_1_2_ (this),
        SimConnect_CompName_ (this),
        SimConnect_ThermalZoneName_ (this)
      {
      }

      SimConnection_AirFlow_CrossSystem::
      SimConnection_AirFlow_CrossSystem (const SimConnection_AirFlow_CrossSystem& x,
                                         ::xml_schema::flags f,
                                         ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimConnection_AirFlow (x, f, c),
        SimConnect_Name_ (x.SimConnect_Name_, f, this),
        SimConnect_NodeName_1_2_ (x.SimConnect_NodeName_1_2_, f, this),
        SimConnect_CompName_ (x.SimConnect_CompName_, f, this),
        SimConnect_ThermalZoneName_ (x.SimConnect_ThermalZoneName_, f, this)
      {
      }

      SimConnection_AirFlow_CrossSystem::
      SimConnection_AirFlow_CrossSystem (const ::xercesc::DOMElement& e,
                                         ::xml_schema::flags f,
                                         ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimConnection_AirFlow (e, f | ::xml_schema::flags::base, c),
        SimConnect_Name_ (this),
        SimConnect_NodeName_1_2_ (this),
        SimConnect_CompName_ (this),
        SimConnect_ThermalZoneName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimConnection_AirFlow_CrossSystem::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimConnection_AirFlow::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimConnect_Name
          //
          if (n.name () == "SimConnect_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimConnect_Name_type > r (
              SimConnect_Name_traits::create (i, f, this));

            if (!this->SimConnect_Name_)
            {
              this->SimConnect_Name_.set (r);
              continue;
            }
          }

          // SimConnect_NodeName_1_2
          //
          if (n.name () == "SimConnect_NodeName_1_2" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimConnect_NodeName_1_2_type > r (
              SimConnect_NodeName_1_2_traits::create (i, f, this));

            if (!this->SimConnect_NodeName_1_2_)
            {
              this->SimConnect_NodeName_1_2_.set (r);
              continue;
            }
          }

          // SimConnect_CompName
          //
          if (n.name () == "SimConnect_CompName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimConnect_CompName_type > r (
              SimConnect_CompName_traits::create (i, f, this));

            if (!this->SimConnect_CompName_)
            {
              this->SimConnect_CompName_.set (r);
              continue;
            }
          }

          // SimConnect_ThermalZoneName
          //
          if (n.name () == "SimConnect_ThermalZoneName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimConnect_ThermalZoneName_type > r (
              SimConnect_ThermalZoneName_traits::create (i, f, this));

            if (!this->SimConnect_ThermalZoneName_)
            {
              this->SimConnect_ThermalZoneName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimConnection_AirFlow_CrossSystem* SimConnection_AirFlow_CrossSystem::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimConnection_AirFlow_CrossSystem (*this, f, c);
      }

      SimConnection_AirFlow_CrossSystem& SimConnection_AirFlow_CrossSystem::
      operator= (const SimConnection_AirFlow_CrossSystem& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimConnection_AirFlow& > (*this) = x;
          this->SimConnect_Name_ = x.SimConnect_Name_;
          this->SimConnect_NodeName_1_2_ = x.SimConnect_NodeName_1_2_;
          this->SimConnect_CompName_ = x.SimConnect_CompName_;
          this->SimConnect_ThermalZoneName_ = x.SimConnect_ThermalZoneName_;
        }

        return *this;
      }

      SimConnection_AirFlow_CrossSystem::
      ~SimConnection_AirFlow_CrossSystem ()
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

