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

#include "SimFluid_Concentration.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimFluid_Concentration
      // 

      const SimFluid_Concentration::SimFluid_NameOfADefinedFluid_optional& SimFluid_Concentration::
      SimFluid_NameOfADefinedFluid () const
      {
        return this->SimFluid_NameOfADefinedFluid_;
      }

      SimFluid_Concentration::SimFluid_NameOfADefinedFluid_optional& SimFluid_Concentration::
      SimFluid_NameOfADefinedFluid ()
      {
        return this->SimFluid_NameOfADefinedFluid_;
      }

      void SimFluid_Concentration::
      SimFluid_NameOfADefinedFluid (const SimFluid_NameOfADefinedFluid_type& x)
      {
        this->SimFluid_NameOfADefinedFluid_.set (x);
      }

      void SimFluid_Concentration::
      SimFluid_NameOfADefinedFluid (const SimFluid_NameOfADefinedFluid_optional& x)
      {
        this->SimFluid_NameOfADefinedFluid_ = x;
      }

      void SimFluid_Concentration::
      SimFluid_NameOfADefinedFluid (::std::auto_ptr< SimFluid_NameOfADefinedFluid_type > x)
      {
        this->SimFluid_NameOfADefinedFluid_.set (x);
      }

      const SimFluid_Concentration::SimFluid_FluidPropertyType_optional& SimFluid_Concentration::
      SimFluid_FluidPropertyType () const
      {
        return this->SimFluid_FluidPropertyType_;
      }

      SimFluid_Concentration::SimFluid_FluidPropertyType_optional& SimFluid_Concentration::
      SimFluid_FluidPropertyType ()
      {
        return this->SimFluid_FluidPropertyType_;
      }

      void SimFluid_Concentration::
      SimFluid_FluidPropertyType (const SimFluid_FluidPropertyType_type& x)
      {
        this->SimFluid_FluidPropertyType_.set (x);
      }

      void SimFluid_Concentration::
      SimFluid_FluidPropertyType (const SimFluid_FluidPropertyType_optional& x)
      {
        this->SimFluid_FluidPropertyType_ = x;
      }

      void SimFluid_Concentration::
      SimFluid_FluidPropertyType (::std::auto_ptr< SimFluid_FluidPropertyType_type > x)
      {
        this->SimFluid_FluidPropertyType_.set (x);
      }

      const SimFluid_Concentration::SimFluid_TempValName_optional& SimFluid_Concentration::
      SimFluid_TempValName () const
      {
        return this->SimFluid_TempValName_;
      }

      SimFluid_Concentration::SimFluid_TempValName_optional& SimFluid_Concentration::
      SimFluid_TempValName ()
      {
        return this->SimFluid_TempValName_;
      }

      void SimFluid_Concentration::
      SimFluid_TempValName (const SimFluid_TempValName_type& x)
      {
        this->SimFluid_TempValName_.set (x);
      }

      void SimFluid_Concentration::
      SimFluid_TempValName (const SimFluid_TempValName_optional& x)
      {
        this->SimFluid_TempValName_ = x;
      }

      void SimFluid_Concentration::
      SimFluid_TempValName (::std::auto_ptr< SimFluid_TempValName_type > x)
      {
        this->SimFluid_TempValName_.set (x);
      }

      const SimFluid_Concentration::SimFluid_Concentration1_optional& SimFluid_Concentration::
      SimFluid_Concentration1 () const
      {
        return this->SimFluid_Concentration1_;
      }

      SimFluid_Concentration::SimFluid_Concentration1_optional& SimFluid_Concentration::
      SimFluid_Concentration1 ()
      {
        return this->SimFluid_Concentration1_;
      }

      void SimFluid_Concentration::
      SimFluid_Concentration1 (const SimFluid_Concentration1_type& x)
      {
        this->SimFluid_Concentration1_.set (x);
      }

      void SimFluid_Concentration::
      SimFluid_Concentration1 (const SimFluid_Concentration1_optional& x)
      {
        this->SimFluid_Concentration1_ = x;
      }

      const SimFluid_Concentration::SimFluid_PropertyVal_1_250_optional& SimFluid_Concentration::
      SimFluid_PropertyVal_1_250 () const
      {
        return this->SimFluid_PropertyVal_1_250_;
      }

      SimFluid_Concentration::SimFluid_PropertyVal_1_250_optional& SimFluid_Concentration::
      SimFluid_PropertyVal_1_250 ()
      {
        return this->SimFluid_PropertyVal_1_250_;
      }

      void SimFluid_Concentration::
      SimFluid_PropertyVal_1_250 (const SimFluid_PropertyVal_1_250_type& x)
      {
        this->SimFluid_PropertyVal_1_250_.set (x);
      }

      void SimFluid_Concentration::
      SimFluid_PropertyVal_1_250 (const SimFluid_PropertyVal_1_250_optional& x)
      {
        this->SimFluid_PropertyVal_1_250_ = x;
      }

      void SimFluid_Concentration::
      SimFluid_PropertyVal_1_250 (::std::auto_ptr< SimFluid_PropertyVal_1_250_type > x)
      {
        this->SimFluid_PropertyVal_1_250_.set (x);
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
    namespace ResourcesGeneral
    {
      // SimFluid_Concentration
      //

      SimFluid_Concentration::
      SimFluid_Concentration ()
      : ::schema::simxml::ResourcesGeneral::SimFluid (),
        SimFluid_NameOfADefinedFluid_ (this),
        SimFluid_FluidPropertyType_ (this),
        SimFluid_TempValName_ (this),
        SimFluid_Concentration1_ (this),
        SimFluid_PropertyVal_1_250_ (this)
      {
      }

      SimFluid_Concentration::
      SimFluid_Concentration (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimFluid (RefId),
        SimFluid_NameOfADefinedFluid_ (this),
        SimFluid_FluidPropertyType_ (this),
        SimFluid_TempValName_ (this),
        SimFluid_Concentration1_ (this),
        SimFluid_PropertyVal_1_250_ (this)
      {
      }

      SimFluid_Concentration::
      SimFluid_Concentration (const SimFluid_Concentration& x,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimFluid (x, f, c),
        SimFluid_NameOfADefinedFluid_ (x.SimFluid_NameOfADefinedFluid_, f, this),
        SimFluid_FluidPropertyType_ (x.SimFluid_FluidPropertyType_, f, this),
        SimFluid_TempValName_ (x.SimFluid_TempValName_, f, this),
        SimFluid_Concentration1_ (x.SimFluid_Concentration1_, f, this),
        SimFluid_PropertyVal_1_250_ (x.SimFluid_PropertyVal_1_250_, f, this)
      {
      }

      SimFluid_Concentration::
      SimFluid_Concentration (const ::xercesc::DOMElement& e,
                              ::xml_schema::flags f,
                              ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimFluid (e, f | ::xml_schema::flags::base, c),
        SimFluid_NameOfADefinedFluid_ (this),
        SimFluid_FluidPropertyType_ (this),
        SimFluid_TempValName_ (this),
        SimFluid_Concentration1_ (this),
        SimFluid_PropertyVal_1_250_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFluid_Concentration::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimFluid::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFluid_NameOfADefinedFluid
          //
          if (n.name () == "SimFluid_NameOfADefinedFluid" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_NameOfADefinedFluid_type > r (
              SimFluid_NameOfADefinedFluid_traits::create (i, f, this));

            if (!this->SimFluid_NameOfADefinedFluid_)
            {
              this->SimFluid_NameOfADefinedFluid_.set (r);
              continue;
            }
          }

          // SimFluid_FluidPropertyType
          //
          if (n.name () == "SimFluid_FluidPropertyType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_FluidPropertyType_type > r (
              SimFluid_FluidPropertyType_traits::create (i, f, this));

            if (!this->SimFluid_FluidPropertyType_)
            {
              this->SimFluid_FluidPropertyType_.set (r);
              continue;
            }
          }

          // SimFluid_TempValName
          //
          if (n.name () == "SimFluid_TempValName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_TempValName_type > r (
              SimFluid_TempValName_traits::create (i, f, this));

            if (!this->SimFluid_TempValName_)
            {
              this->SimFluid_TempValName_.set (r);
              continue;
            }
          }

          // SimFluid_Concentration
          //
          if (n.name () == "SimFluid_Concentration" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimFluid_Concentration1_)
            {
              this->SimFluid_Concentration1_.set (SimFluid_Concentration1_traits::create (i, f, this));
              continue;
            }
          }

          // SimFluid_PropertyVal_1_250
          //
          if (n.name () == "SimFluid_PropertyVal_1_250" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimFluid_PropertyVal_1_250_type > r (
              SimFluid_PropertyVal_1_250_traits::create (i, f, this));

            if (!this->SimFluid_PropertyVal_1_250_)
            {
              this->SimFluid_PropertyVal_1_250_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFluid_Concentration* SimFluid_Concentration::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFluid_Concentration (*this, f, c);
      }

      SimFluid_Concentration& SimFluid_Concentration::
      operator= (const SimFluid_Concentration& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimFluid& > (*this) = x;
          this->SimFluid_NameOfADefinedFluid_ = x.SimFluid_NameOfADefinedFluid_;
          this->SimFluid_FluidPropertyType_ = x.SimFluid_FluidPropertyType_;
          this->SimFluid_TempValName_ = x.SimFluid_TempValName_;
          this->SimFluid_Concentration1_ = x.SimFluid_Concentration1_;
          this->SimFluid_PropertyVal_1_250_ = x.SimFluid_PropertyVal_1_250_;
        }

        return *this;
      }

      SimFluid_Concentration::
      ~SimFluid_Concentration ()
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

