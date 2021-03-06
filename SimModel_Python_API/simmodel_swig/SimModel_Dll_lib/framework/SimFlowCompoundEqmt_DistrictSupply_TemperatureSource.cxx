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

#include "SimFlowCompoundEqmt_DistrictSupply_TemperatureSource.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowCompoundEqmt_DistrictSupply_TemperatureSource
      // 

      const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_InletNode_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_InletNode () const
      {
        return this->SimFlowCompEqmt_InletNode_;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_InletNode_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_InletNode ()
      {
        return this->SimFlowCompEqmt_InletNode_;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_InletNode (const SimFlowCompEqmt_InletNode_type& x)
      {
        this->SimFlowCompEqmt_InletNode_.set (x);
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_InletNode (const SimFlowCompEqmt_InletNode_optional& x)
      {
        this->SimFlowCompEqmt_InletNode_ = x;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_InletNode (::std::auto_ptr< SimFlowCompEqmt_InletNode_type > x)
      {
        this->SimFlowCompEqmt_InletNode_.set (x);
      }

      const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_OutletNode_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_OutletNode () const
      {
        return this->SimFlowCompEqmt_OutletNode_;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_OutletNode_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_OutletNode ()
      {
        return this->SimFlowCompEqmt_OutletNode_;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_OutletNode (const SimFlowCompEqmt_OutletNode_type& x)
      {
        this->SimFlowCompEqmt_OutletNode_.set (x);
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_OutletNode (const SimFlowCompEqmt_OutletNode_optional& x)
      {
        this->SimFlowCompEqmt_OutletNode_ = x;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_OutletNode (::std::auto_ptr< SimFlowCompEqmt_OutletNode_type > x)
      {
        this->SimFlowCompEqmt_OutletNode_.set (x);
      }

      const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_DesignVolFlowRate_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_DesignVolFlowRate () const
      {
        return this->SimFlowCompEqmt_DesignVolFlowRate_;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_DesignVolFlowRate_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_DesignVolFlowRate ()
      {
        return this->SimFlowCompEqmt_DesignVolFlowRate_;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_DesignVolFlowRate (const SimFlowCompEqmt_DesignVolFlowRate_type& x)
      {
        this->SimFlowCompEqmt_DesignVolFlowRate_.set (x);
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_DesignVolFlowRate (const SimFlowCompEqmt_DesignVolFlowRate_optional& x)
      {
        this->SimFlowCompEqmt_DesignVolFlowRate_ = x;
      }

      const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_TempSpecificationType_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_TempSpecificationType () const
      {
        return this->SimFlowCompEqmt_TempSpecificationType_;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_TempSpecificationType_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_TempSpecificationType ()
      {
        return this->SimFlowCompEqmt_TempSpecificationType_;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_TempSpecificationType (const SimFlowCompEqmt_TempSpecificationType_type& x)
      {
        this->SimFlowCompEqmt_TempSpecificationType_.set (x);
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_TempSpecificationType (const SimFlowCompEqmt_TempSpecificationType_optional& x)
      {
        this->SimFlowCompEqmt_TempSpecificationType_ = x;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_TempSpecificationType (::std::auto_ptr< SimFlowCompEqmt_TempSpecificationType_type > x)
      {
        this->SimFlowCompEqmt_TempSpecificationType_.set (x);
      }

      const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_SourceTemp_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTemp () const
      {
        return this->SimFlowCompEqmt_SourceTemp_;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_SourceTemp_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTemp ()
      {
        return this->SimFlowCompEqmt_SourceTemp_;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTemp (const SimFlowCompEqmt_SourceTemp_type& x)
      {
        this->SimFlowCompEqmt_SourceTemp_.set (x);
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTemp (const SimFlowCompEqmt_SourceTemp_optional& x)
      {
        this->SimFlowCompEqmt_SourceTemp_ = x;
      }

      const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_SourceTempSchedName_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTempSchedName () const
      {
        return this->SimFlowCompEqmt_SourceTempSchedName_;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::SimFlowCompEqmt_SourceTempSchedName_optional& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTempSchedName ()
      {
        return this->SimFlowCompEqmt_SourceTempSchedName_;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTempSchedName (const SimFlowCompEqmt_SourceTempSchedName_type& x)
      {
        this->SimFlowCompEqmt_SourceTempSchedName_.set (x);
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTempSchedName (const SimFlowCompEqmt_SourceTempSchedName_optional& x)
      {
        this->SimFlowCompEqmt_SourceTempSchedName_ = x;
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompEqmt_SourceTempSchedName (::std::auto_ptr< SimFlowCompEqmt_SourceTempSchedName_type > x)
      {
        this->SimFlowCompEqmt_SourceTempSchedName_.set (x);
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
      // SimFlowCompoundEqmt_DistrictSupply_TemperatureSource
      //

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource ()
      : ::schema::simxml::MepModel::SimFlowCompoundEqmt_DistrictSupply (),
        SimFlowCompEqmt_InletNode_ (this),
        SimFlowCompEqmt_OutletNode_ (this),
        SimFlowCompEqmt_DesignVolFlowRate_ (this),
        SimFlowCompEqmt_TempSpecificationType_ (this),
        SimFlowCompEqmt_SourceTemp_ (this),
        SimFlowCompEqmt_SourceTempSchedName_ (this)
      {
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowCompoundEqmt_DistrictSupply (RefId),
        SimFlowCompEqmt_InletNode_ (this),
        SimFlowCompEqmt_OutletNode_ (this),
        SimFlowCompEqmt_DesignVolFlowRate_ (this),
        SimFlowCompEqmt_TempSpecificationType_ (this),
        SimFlowCompEqmt_SourceTemp_ (this),
        SimFlowCompEqmt_SourceTempSchedName_ (this)
      {
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource (const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource& x,
                                                            ::xml_schema::flags f,
                                                            ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowCompoundEqmt_DistrictSupply (x, f, c),
        SimFlowCompEqmt_InletNode_ (x.SimFlowCompEqmt_InletNode_, f, this),
        SimFlowCompEqmt_OutletNode_ (x.SimFlowCompEqmt_OutletNode_, f, this),
        SimFlowCompEqmt_DesignVolFlowRate_ (x.SimFlowCompEqmt_DesignVolFlowRate_, f, this),
        SimFlowCompEqmt_TempSpecificationType_ (x.SimFlowCompEqmt_TempSpecificationType_, f, this),
        SimFlowCompEqmt_SourceTemp_ (x.SimFlowCompEqmt_SourceTemp_, f, this),
        SimFlowCompEqmt_SourceTempSchedName_ (x.SimFlowCompEqmt_SourceTempSchedName_, f, this)
      {
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource (const ::xercesc::DOMElement& e,
                                                            ::xml_schema::flags f,
                                                            ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowCompoundEqmt_DistrictSupply (e, f | ::xml_schema::flags::base, c),
        SimFlowCompEqmt_InletNode_ (this),
        SimFlowCompEqmt_OutletNode_ (this),
        SimFlowCompEqmt_DesignVolFlowRate_ (this),
        SimFlowCompEqmt_TempSpecificationType_ (this),
        SimFlowCompEqmt_SourceTemp_ (this),
        SimFlowCompEqmt_SourceTempSchedName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowCompoundEqmt_DistrictSupply::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowCompEqmt_InletNode
          //
          if (n.name () == "SimFlowCompEqmt_InletNode" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCompEqmt_InletNode_type > r (
              SimFlowCompEqmt_InletNode_traits::create (i, f, this));

            if (!this->SimFlowCompEqmt_InletNode_)
            {
              this->SimFlowCompEqmt_InletNode_.set (r);
              continue;
            }
          }

          // SimFlowCompEqmt_OutletNode
          //
          if (n.name () == "SimFlowCompEqmt_OutletNode" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCompEqmt_OutletNode_type > r (
              SimFlowCompEqmt_OutletNode_traits::create (i, f, this));

            if (!this->SimFlowCompEqmt_OutletNode_)
            {
              this->SimFlowCompEqmt_OutletNode_.set (r);
              continue;
            }
          }

          // SimFlowCompEqmt_DesignVolFlowRate
          //
          if (n.name () == "SimFlowCompEqmt_DesignVolFlowRate" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowCompEqmt_DesignVolFlowRate_)
            {
              this->SimFlowCompEqmt_DesignVolFlowRate_.set (SimFlowCompEqmt_DesignVolFlowRate_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowCompEqmt_TempSpecificationType
          //
          if (n.name () == "SimFlowCompEqmt_TempSpecificationType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCompEqmt_TempSpecificationType_type > r (
              SimFlowCompEqmt_TempSpecificationType_traits::create (i, f, this));

            if (!this->SimFlowCompEqmt_TempSpecificationType_)
            {
              this->SimFlowCompEqmt_TempSpecificationType_.set (r);
              continue;
            }
          }

          // SimFlowCompEqmt_SourceTemp
          //
          if (n.name () == "SimFlowCompEqmt_SourceTemp" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowCompEqmt_SourceTemp_)
            {
              this->SimFlowCompEqmt_SourceTemp_.set (SimFlowCompEqmt_SourceTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowCompEqmt_SourceTempSchedName
          //
          if (n.name () == "SimFlowCompEqmt_SourceTempSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowCompEqmt_SourceTempSchedName_type > r (
              SimFlowCompEqmt_SourceTempSchedName_traits::create (i, f, this));

            if (!this->SimFlowCompEqmt_SourceTempSchedName_)
            {
              this->SimFlowCompEqmt_SourceTempSchedName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource* SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowCompoundEqmt_DistrictSupply_TemperatureSource (*this, f, c);
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource& SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      operator= (const SimFlowCompoundEqmt_DistrictSupply_TemperatureSource& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowCompoundEqmt_DistrictSupply& > (*this) = x;
          this->SimFlowCompEqmt_InletNode_ = x.SimFlowCompEqmt_InletNode_;
          this->SimFlowCompEqmt_OutletNode_ = x.SimFlowCompEqmt_OutletNode_;
          this->SimFlowCompEqmt_DesignVolFlowRate_ = x.SimFlowCompEqmt_DesignVolFlowRate_;
          this->SimFlowCompEqmt_TempSpecificationType_ = x.SimFlowCompEqmt_TempSpecificationType_;
          this->SimFlowCompEqmt_SourceTemp_ = x.SimFlowCompEqmt_SourceTemp_;
          this->SimFlowCompEqmt_SourceTempSchedName_ = x.SimFlowCompEqmt_SourceTempSchedName_;
        }

        return *this;
      }

      SimFlowCompoundEqmt_DistrictSupply_TemperatureSource::
      ~SimFlowCompoundEqmt_DistrictSupply_TemperatureSource ()
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

