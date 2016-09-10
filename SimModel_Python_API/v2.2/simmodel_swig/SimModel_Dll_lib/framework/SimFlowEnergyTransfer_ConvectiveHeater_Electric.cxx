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

#include "SimFlowEnergyTransfer_ConvectiveHeater_Electric.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowEnergyTransfer_ConvectiveHeater_Electric
      // 

      const SimFlowEnergyTransfer_ConvectiveHeater_Electric::SimFlowEnergyTrans_NomCap_optional& SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_NomCap () const
      {
        return this->SimFlowEnergyTrans_NomCap_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::SimFlowEnergyTrans_NomCap_optional& SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_NomCap ()
      {
        return this->SimFlowEnergyTrans_NomCap_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_NomCap (const SimFlowEnergyTrans_NomCap_type& x)
      {
        this->SimFlowEnergyTrans_NomCap_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_NomCap (const SimFlowEnergyTrans_NomCap_optional& x)
      {
        this->SimFlowEnergyTrans_NomCap_ = x;
      }

      const SimFlowEnergyTransfer_ConvectiveHeater_Electric::SimFlowEnergyTrans_Efficiency_optional& SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_Efficiency () const
      {
        return this->SimFlowEnergyTrans_Efficiency_;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::SimFlowEnergyTrans_Efficiency_optional& SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_Efficiency ()
      {
        return this->SimFlowEnergyTrans_Efficiency_;
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_Efficiency (const SimFlowEnergyTrans_Efficiency_type& x)
      {
        this->SimFlowEnergyTrans_Efficiency_.set (x);
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTrans_Efficiency (const SimFlowEnergyTrans_Efficiency_optional& x)
      {
        this->SimFlowEnergyTrans_Efficiency_ = x;
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
      // SimFlowEnergyTransfer_ConvectiveHeater_Electric
      //

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTransfer_ConvectiveHeater_Electric ()
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (),
        SimFlowEnergyTrans_NomCap_ (this),
        SimFlowEnergyTrans_Efficiency_ (this)
      {
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTransfer_ConvectiveHeater_Electric (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (RefId),
        SimFlowEnergyTrans_NomCap_ (this),
        SimFlowEnergyTrans_Efficiency_ (this)
      {
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTransfer_ConvectiveHeater_Electric (const SimFlowEnergyTransfer_ConvectiveHeater_Electric& x,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (x, f, c),
        SimFlowEnergyTrans_NomCap_ (x.SimFlowEnergyTrans_NomCap_, f, this),
        SimFlowEnergyTrans_Efficiency_ (x.SimFlowEnergyTrans_Efficiency_, f, this)
      {
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      SimFlowEnergyTransfer_ConvectiveHeater_Electric (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater (e, f | ::xml_schema::flags::base, c),
        SimFlowEnergyTrans_NomCap_ (this),
        SimFlowEnergyTrans_Efficiency_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowEnergyTrans_NomCap
          //
          if (n.name () == "SimFlowEnergyTrans_NomCap" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_NomCap_)
            {
              this->SimFlowEnergyTrans_NomCap_.set (SimFlowEnergyTrans_NomCap_traits::create (i, f, this));
              continue;
            }
          }

          // SimFlowEnergyTrans_Efficiency
          //
          if (n.name () == "SimFlowEnergyTrans_Efficiency" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimFlowEnergyTrans_Efficiency_)
            {
              this->SimFlowEnergyTrans_Efficiency_.set (SimFlowEnergyTrans_Efficiency_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric* SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowEnergyTransfer_ConvectiveHeater_Electric (*this, f, c);
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric& SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      operator= (const SimFlowEnergyTransfer_ConvectiveHeater_Electric& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowEnergyTransfer_ConvectiveHeater& > (*this) = x;
          this->SimFlowEnergyTrans_NomCap_ = x.SimFlowEnergyTrans_NomCap_;
          this->SimFlowEnergyTrans_Efficiency_ = x.SimFlowEnergyTrans_Efficiency_;
        }

        return *this;
      }

      SimFlowEnergyTransfer_ConvectiveHeater_Electric::
      ~SimFlowEnergyTransfer_ConvectiveHeater_Electric ()
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

