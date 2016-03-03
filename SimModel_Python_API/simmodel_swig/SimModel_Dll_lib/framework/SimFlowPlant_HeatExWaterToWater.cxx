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

#include "SimFlowPlant_HeatExWaterToWater.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowPlant_HeatExWaterToWater
      // 

      const SimFlowPlant_HeatExWaterToWater::T24HeatRejectFanType_optional& SimFlowPlant_HeatExWaterToWater::
      T24HeatRejectFanType () const
      {
        return this->T24HeatRejectFanType_;
      }

      SimFlowPlant_HeatExWaterToWater::T24HeatRejectFanType_optional& SimFlowPlant_HeatExWaterToWater::
      T24HeatRejectFanType ()
      {
        return this->T24HeatRejectFanType_;
      }

      void SimFlowPlant_HeatExWaterToWater::
      T24HeatRejectFanType (const T24HeatRejectFanType_type& x)
      {
        this->T24HeatRejectFanType_.set (x);
      }

      void SimFlowPlant_HeatExWaterToWater::
      T24HeatRejectFanType (const T24HeatRejectFanType_optional& x)
      {
        this->T24HeatRejectFanType_ = x;
      }

      void SimFlowPlant_HeatExWaterToWater::
      T24HeatRejectFanType (::std::auto_ptr< T24HeatRejectFanType_type > x)
      {
        this->T24HeatRejectFanType_.set (x);
      }

      const SimFlowPlant_HeatExWaterToWater::T24ConstructStatus2_optional& SimFlowPlant_HeatExWaterToWater::
      T24ConstructStatus2 () const
      {
        return this->T24ConstructStatus2_;
      }

      SimFlowPlant_HeatExWaterToWater::T24ConstructStatus2_optional& SimFlowPlant_HeatExWaterToWater::
      T24ConstructStatus2 ()
      {
        return this->T24ConstructStatus2_;
      }

      void SimFlowPlant_HeatExWaterToWater::
      T24ConstructStatus2 (const T24ConstructStatus2_type& x)
      {
        this->T24ConstructStatus2_.set (x);
      }

      void SimFlowPlant_HeatExWaterToWater::
      T24ConstructStatus2 (const T24ConstructStatus2_optional& x)
      {
        this->T24ConstructStatus2_ = x;
      }

      void SimFlowPlant_HeatExWaterToWater::
      T24ConstructStatus2 (::std::auto_ptr< T24ConstructStatus2_type > x)
      {
        this->T24ConstructStatus2_.set (x);
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
      // SimFlowPlant_HeatExWaterToWater
      //

      SimFlowPlant_HeatExWaterToWater::
      SimFlowPlant_HeatExWaterToWater ()
      : ::schema::simxml::MepModel::SimFlowPlant (),
        T24HeatRejectFanType_ (this),
        T24ConstructStatus2_ (this)
      {
      }

      SimFlowPlant_HeatExWaterToWater::
      SimFlowPlant_HeatExWaterToWater (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowPlant (RefId),
        T24HeatRejectFanType_ (this),
        T24ConstructStatus2_ (this)
      {
      }

      SimFlowPlant_HeatExWaterToWater::
      SimFlowPlant_HeatExWaterToWater (const SimFlowPlant_HeatExWaterToWater& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant (x, f, c),
        T24HeatRejectFanType_ (x.T24HeatRejectFanType_, f, this),
        T24ConstructStatus2_ (x.T24ConstructStatus2_, f, this)
      {
      }

      SimFlowPlant_HeatExWaterToWater::
      SimFlowPlant_HeatExWaterToWater (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowPlant (e, f | ::xml_schema::flags::base, c),
        T24HeatRejectFanType_ (this),
        T24ConstructStatus2_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowPlant_HeatExWaterToWater::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowPlant::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // T24HeatRejectFanType
          //
          if (n.name () == "T24HeatRejectFanType" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< T24HeatRejectFanType_type > r (
              T24HeatRejectFanType_traits::create (i, f, this));

            if (!this->T24HeatRejectFanType_)
            {
              this->T24HeatRejectFanType_.set (r);
              continue;
            }
          }

          // T24ConstructStatus2
          //
          if (n.name () == "T24ConstructStatus2" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< T24ConstructStatus2_type > r (
              T24ConstructStatus2_traits::create (i, f, this));

            if (!this->T24ConstructStatus2_)
            {
              this->T24ConstructStatus2_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowPlant_HeatExWaterToWater* SimFlowPlant_HeatExWaterToWater::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowPlant_HeatExWaterToWater (*this, f, c);
      }

      SimFlowPlant_HeatExWaterToWater& SimFlowPlant_HeatExWaterToWater::
      operator= (const SimFlowPlant_HeatExWaterToWater& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowPlant& > (*this) = x;
          this->T24HeatRejectFanType_ = x.T24HeatRejectFanType_;
          this->T24ConstructStatus2_ = x.T24ConstructStatus2_;
        }

        return *this;
      }

      SimFlowPlant_HeatExWaterToWater::
      ~SimFlowPlant_HeatExWaterToWater ()
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
