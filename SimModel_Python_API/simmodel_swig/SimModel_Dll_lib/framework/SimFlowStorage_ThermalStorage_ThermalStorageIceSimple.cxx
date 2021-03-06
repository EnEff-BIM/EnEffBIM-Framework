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

#include "SimFlowStorage_ThermalStorage_ThermalStorageIceSimple.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowStorage_ThermalStorage_ThermalStorageIceSimple
      // 

      const SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_IceStorageType_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_IceStorageType () const
      {
        return this->SimFlowSto_IceStorageType_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_IceStorageType_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_IceStorageType ()
      {
        return this->SimFlowSto_IceStorageType_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_IceStorageType (const SimFlowSto_IceStorageType_type& x)
      {
        this->SimFlowSto_IceStorageType_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_IceStorageType (const SimFlowSto_IceStorageType_optional& x)
      {
        this->SimFlowSto_IceStorageType_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_IceStorageType (::std::auto_ptr< SimFlowSto_IceStorageType_type > x)
      {
        this->SimFlowSto_IceStorageType_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_Capacity_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_Capacity () const
      {
        return this->SimFlowSto_Capacity_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_Capacity_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_Capacity ()
      {
        return this->SimFlowSto_Capacity_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_Capacity (const SimFlowSto_Capacity_type& x)
      {
        this->SimFlowSto_Capacity_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_Capacity (const SimFlowSto_Capacity_optional& x)
      {
        this->SimFlowSto_Capacity_ = x;
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_InNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_InNodeName () const
      {
        return this->SimFlowSto_InNodeName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_InNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_InNodeName ()
      {
        return this->SimFlowSto_InNodeName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_InNodeName (const SimFlowSto_InNodeName_type& x)
      {
        this->SimFlowSto_InNodeName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_InNodeName (const SimFlowSto_InNodeName_optional& x)
      {
        this->SimFlowSto_InNodeName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_InNodeName (::std::auto_ptr< SimFlowSto_InNodeName_type > x)
      {
        this->SimFlowSto_InNodeName_.set (x);
      }

      const SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_OutNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_OutNodeName () const
      {
        return this->SimFlowSto_OutNodeName_;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::SimFlowSto_OutNodeName_optional& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_OutNodeName ()
      {
        return this->SimFlowSto_OutNodeName_;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_OutNodeName (const SimFlowSto_OutNodeName_type& x)
      {
        this->SimFlowSto_OutNodeName_.set (x);
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_OutNodeName (const SimFlowSto_OutNodeName_optional& x)
      {
        this->SimFlowSto_OutNodeName_ = x;
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowSto_OutNodeName (::std::auto_ptr< SimFlowSto_OutNodeName_type > x)
      {
        this->SimFlowSto_OutNodeName_.set (x);
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
      // SimFlowStorage_ThermalStorage_ThermalStorageIceSimple
      //

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple ()
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (),
        SimFlowSto_IceStorageType_ (this),
        SimFlowSto_Capacity_ (this),
        SimFlowSto_InNodeName_ (this),
        SimFlowSto_OutNodeName_ (this)
      {
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (RefId),
        SimFlowSto_IceStorageType_ (this),
        SimFlowSto_Capacity_ (this),
        SimFlowSto_InNodeName_ (this),
        SimFlowSto_OutNodeName_ (this)
      {
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple (const SimFlowStorage_ThermalStorage_ThermalStorageIceSimple& x,
                                                             ::xml_schema::flags f,
                                                             ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (x, f, c),
        SimFlowSto_IceStorageType_ (x.SimFlowSto_IceStorageType_, f, this),
        SimFlowSto_Capacity_ (x.SimFlowSto_Capacity_, f, this),
        SimFlowSto_InNodeName_ (x.SimFlowSto_InNodeName_, f, this),
        SimFlowSto_OutNodeName_ (x.SimFlowSto_OutNodeName_, f, this)
      {
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple (const ::xercesc::DOMElement& e,
                                                             ::xml_schema::flags f,
                                                             ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage (e, f | ::xml_schema::flags::base, c),
        SimFlowSto_IceStorageType_ (this),
        SimFlowSto_Capacity_ (this),
        SimFlowSto_InNodeName_ (this),
        SimFlowSto_OutNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowStorage_ThermalStorage::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowSto_IceStorageType
          //
          if (n.name () == "SimFlowSto_IceStorageType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_IceStorageType_type > r (
              SimFlowSto_IceStorageType_traits::create (i, f, this));

            if (!this->SimFlowSto_IceStorageType_)
            {
              this->SimFlowSto_IceStorageType_.set (r);
              continue;
            }
          }

          // SimFlowSto_Capacity
          //
          if (n.name () == "SimFlowSto_Capacity" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowSto_Capacity_)
            {
              this->SimFlowSto_Capacity_.set (SimFlowSto_Capacity_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowSto_InNodeName
          //
          if (n.name () == "SimFlowSto_InNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_InNodeName_type > r (
              SimFlowSto_InNodeName_traits::create (i, f, this));

            if (!this->SimFlowSto_InNodeName_)
            {
              this->SimFlowSto_InNodeName_.set (r);
              continue;
            }
          }

          // SimFlowSto_OutNodeName
          //
          if (n.name () == "SimFlowSto_OutNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowSto_OutNodeName_type > r (
              SimFlowSto_OutNodeName_traits::create (i, f, this));

            if (!this->SimFlowSto_OutNodeName_)
            {
              this->SimFlowSto_OutNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple* SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowStorage_ThermalStorage_ThermalStorageIceSimple (*this, f, c);
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple& SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      operator= (const SimFlowStorage_ThermalStorage_ThermalStorageIceSimple& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowStorage_ThermalStorage& > (*this) = x;
          this->SimFlowSto_IceStorageType_ = x.SimFlowSto_IceStorageType_;
          this->SimFlowSto_Capacity_ = x.SimFlowSto_Capacity_;
          this->SimFlowSto_InNodeName_ = x.SimFlowSto_InNodeName_;
          this->SimFlowSto_OutNodeName_ = x.SimFlowSto_OutNodeName_;
        }

        return *this;
      }

      SimFlowStorage_ThermalStorage_ThermalStorageIceSimple::
      ~SimFlowStorage_ThermalStorage_ThermalStorageIceSimple ()
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

