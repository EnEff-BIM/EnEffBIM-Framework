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

#include "SimFlowPlant_ElectricalGenerator_FuelEquipment.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_ElectricalGenerator_FuelEquipment
      // 

      const SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_Name_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_Name () const
      {
        return this->SimFlowPlant_Name_;
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_Name_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_Name ()
      {
        return this->SimFlowPlant_Name_;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_Name (const SimFlowPlant_Name_type& x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_Name (const SimFlowPlant_Name_optional& x)
      {
        this->SimFlowPlant_Name_ = x;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_Name (::std::auto_ptr< SimFlowPlant_Name_type > x)
      {
        this->SimFlowPlant_Name_.set (x);
      }

      const SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_FuelUseType_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_FuelUseType () const
      {
        return this->SimFlowPlant_FuelUseType_;
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_FuelUseType_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_FuelUseType ()
      {
        return this->SimFlowPlant_FuelUseType_;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_FuelUseType (const SimFlowPlant_FuelUseType_type& x)
      {
        this->SimFlowPlant_FuelUseType_.set (x);
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_FuelUseType (const SimFlowPlant_FuelUseType_optional& x)
      {
        this->SimFlowPlant_FuelUseType_ = x;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_FuelUseType (::std::auto_ptr< SimFlowPlant_FuelUseType_type > x)
      {
        this->SimFlowPlant_FuelUseType_.set (x);
      }

      const SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_SchedName_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_SchedName () const
      {
        return this->SimFlowPlant_SchedName_;
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_SchedName_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_SchedName ()
      {
        return this->SimFlowPlant_SchedName_;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_SchedName (const SimFlowPlant_SchedName_type& x)
      {
        this->SimFlowPlant_SchedName_.set (x);
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_SchedName (const SimFlowPlant_SchedName_optional& x)
      {
        this->SimFlowPlant_SchedName_ = x;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_SchedName (::std::auto_ptr< SimFlowPlant_SchedName_type > x)
      {
        this->SimFlowPlant_SchedName_.set (x);
      }

      const SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_DesignLevel_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_DesignLevel () const
      {
        return this->SimFlowPlant_DesignLevel_;
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_DesignLevel_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_DesignLevel ()
      {
        return this->SimFlowPlant_DesignLevel_;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_DesignLevel (const SimFlowPlant_DesignLevel_type& x)
      {
        this->SimFlowPlant_DesignLevel_.set (x);
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_DesignLevel (const SimFlowPlant_DesignLevel_optional& x)
      {
        this->SimFlowPlant_DesignLevel_ = x;
      }

      const SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_EndUseSubCat_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_EndUseSubCat () const
      {
        return this->SimFlowPlant_EndUseSubCat_;
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::SimFlowPlant_EndUseSubCat_optional& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_EndUseSubCat ()
      {
        return this->SimFlowPlant_EndUseSubCat_;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_EndUseSubCat (const SimFlowPlant_EndUseSubCat_type& x)
      {
        this->SimFlowPlant_EndUseSubCat_.set (x);
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_EndUseSubCat (const SimFlowPlant_EndUseSubCat_optional& x)
      {
        this->SimFlowPlant_EndUseSubCat_ = x;
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_EndUseSubCat (::std::auto_ptr< SimFlowPlant_EndUseSubCat_type > x)
      {
        this->SimFlowPlant_EndUseSubCat_.set (x);
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
      // SimFlowPlant_ElectricalGenerator_FuelEquipment
      //

      SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_ElectricalGenerator_FuelEquipment ()
      : ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator (),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_FuelUseType_ (this),
        SimFlowPlant_SchedName_ (this),
        SimFlowPlant_DesignLevel_ (this),
        SimFlowPlant_EndUseSubCat_ (this)
      {
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_ElectricalGenerator_FuelEquipment (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator (RefId),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_FuelUseType_ (this),
        SimFlowPlant_SchedName_ (this),
        SimFlowPlant_DesignLevel_ (this),
        SimFlowPlant_EndUseSubCat_ (this)
      {
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_ElectricalGenerator_FuelEquipment (const SimFlowPlant_ElectricalGenerator_FuelEquipment& x,
                                                      ::xml_schema::flags f,
                                                      ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator (x, f, c),
        SimFlowPlant_Name_ (x.SimFlowPlant_Name_, f, this),
        SimFlowPlant_FuelUseType_ (x.SimFlowPlant_FuelUseType_, f, this),
        SimFlowPlant_SchedName_ (x.SimFlowPlant_SchedName_, f, this),
        SimFlowPlant_DesignLevel_ (x.SimFlowPlant_DesignLevel_, f, this),
        SimFlowPlant_EndUseSubCat_ (x.SimFlowPlant_EndUseSubCat_, f, this)
      {
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::
      SimFlowPlant_ElectricalGenerator_FuelEquipment (const ::xercesc::DOMElement& e,
                                                      ::xml_schema::flags f,
                                                      ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator (e, f | ::xml_schema::flags::base, c),
        SimFlowPlant_Name_ (this),
        SimFlowPlant_FuelUseType_ (this),
        SimFlowPlant_SchedName_ (this),
        SimFlowPlant_DesignLevel_ (this),
        SimFlowPlant_EndUseSubCat_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_ElectricalGenerator_FuelEquipment::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowPlant_Name
          //
          if (n.name () == "SimFlowPlant_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_Name_type > r (
              SimFlowPlant_Name_traits::create (i, f, this));

            if (!this->SimFlowPlant_Name_)
            {
              this->SimFlowPlant_Name_.set (r);
              continue;
            }
          }

          // SimFlowPlant_FuelUseType
          //
          if (n.name () == "SimFlowPlant_FuelUseType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_FuelUseType_type > r (
              SimFlowPlant_FuelUseType_traits::create (i, f, this));

            if (!this->SimFlowPlant_FuelUseType_)
            {
              this->SimFlowPlant_FuelUseType_.set (r);
              continue;
            }
          }

          // SimFlowPlant_SchedName
          //
          if (n.name () == "SimFlowPlant_SchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_SchedName_type > r (
              SimFlowPlant_SchedName_traits::create (i, f, this));

            if (!this->SimFlowPlant_SchedName_)
            {
              this->SimFlowPlant_SchedName_.set (r);
              continue;
            }
          }

          // SimFlowPlant_DesignLevel
          //
          if (n.name () == "SimFlowPlant_DesignLevel" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowPlant_DesignLevel_)
            {
              this->SimFlowPlant_DesignLevel_.set (SimFlowPlant_DesignLevel_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowPlant_EndUseSubCat
          //
          if (n.name () == "SimFlowPlant_EndUseSubCat" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowPlant_EndUseSubCat_type > r (
              SimFlowPlant_EndUseSubCat_traits::create (i, f, this));

            if (!this->SimFlowPlant_EndUseSubCat_)
            {
              this->SimFlowPlant_EndUseSubCat_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment* SimFlowPlant_ElectricalGenerator_FuelEquipment::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_ElectricalGenerator_FuelEquipment (*this, f, c);
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment& SimFlowPlant_ElectricalGenerator_FuelEquipment::
      operator= (const SimFlowPlant_ElectricalGenerator_FuelEquipment& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowPlant_ElectricalGenerator& > (*this) = x;
          this->SimFlowPlant_Name_ = x.SimFlowPlant_Name_;
          this->SimFlowPlant_FuelUseType_ = x.SimFlowPlant_FuelUseType_;
          this->SimFlowPlant_SchedName_ = x.SimFlowPlant_SchedName_;
          this->SimFlowPlant_DesignLevel_ = x.SimFlowPlant_DesignLevel_;
          this->SimFlowPlant_EndUseSubCat_ = x.SimFlowPlant_EndUseSubCat_;
        }

        return *this;
      }

      SimFlowPlant_ElectricalGenerator_FuelEquipment::
      ~SimFlowPlant_ElectricalGenerator_FuelEquipment ()
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

