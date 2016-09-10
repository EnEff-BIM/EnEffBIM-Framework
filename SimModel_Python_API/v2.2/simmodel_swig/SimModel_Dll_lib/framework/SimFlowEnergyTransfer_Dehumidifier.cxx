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

#include "SimFlowEnergyTransfer_Dehumidifier.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimFlowEnergyTransfer_Dehumidifier
      // 

      const SimFlowEnergyTransfer_Dehumidifier::SimFlowEnergyTrans_Name_optional& SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_Name () const
      {
        return this->SimFlowEnergyTrans_Name_;
      }

      SimFlowEnergyTransfer_Dehumidifier::SimFlowEnergyTrans_Name_optional& SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_Name ()
      {
        return this->SimFlowEnergyTrans_Name_;
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_type& x)
      {
        this->SimFlowEnergyTrans_Name_.set (x);
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_Name (const SimFlowEnergyTrans_Name_optional& x)
      {
        this->SimFlowEnergyTrans_Name_ = x;
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_Name (::std::auto_ptr< SimFlowEnergyTrans_Name_type > x)
      {
        this->SimFlowEnergyTrans_Name_.set (x);
      }

      const SimFlowEnergyTransfer_Dehumidifier::SimFlowEnergyTrans_AvailSchedName_optional& SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_AvailSchedName () const
      {
        return this->SimFlowEnergyTrans_AvailSchedName_;
      }

      SimFlowEnergyTransfer_Dehumidifier::SimFlowEnergyTrans_AvailSchedName_optional& SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_AvailSchedName ()
      {
        return this->SimFlowEnergyTrans_AvailSchedName_;
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_AvailSchedName (const SimFlowEnergyTrans_AvailSchedName_type& x)
      {
        this->SimFlowEnergyTrans_AvailSchedName_.set (x);
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_AvailSchedName (const SimFlowEnergyTrans_AvailSchedName_optional& x)
      {
        this->SimFlowEnergyTrans_AvailSchedName_ = x;
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTrans_AvailSchedName (::std::auto_ptr< SimFlowEnergyTrans_AvailSchedName_type > x)
      {
        this->SimFlowEnergyTrans_AvailSchedName_.set (x);
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
      // SimFlowEnergyTransfer_Dehumidifier
      //

      SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTransfer_Dehumidifier ()
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (),
        SimFlowEnergyTrans_Name_ (this),
        SimFlowEnergyTrans_AvailSchedName_ (this)
      {
      }

      SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTransfer_Dehumidifier (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (RefId),
        SimFlowEnergyTrans_Name_ (this),
        SimFlowEnergyTrans_AvailSchedName_ (this)
      {
      }

      SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTransfer_Dehumidifier (const SimFlowEnergyTransfer_Dehumidifier& x,
                                          ::xml_schema::flags f,
                                          ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (x, f, c),
        SimFlowEnergyTrans_Name_ (x.SimFlowEnergyTrans_Name_, f, this),
        SimFlowEnergyTrans_AvailSchedName_ (x.SimFlowEnergyTrans_AvailSchedName_, f, this)
      {
      }

      SimFlowEnergyTransfer_Dehumidifier::
      SimFlowEnergyTransfer_Dehumidifier (const ::xercesc::DOMElement& e,
                                          ::xml_schema::flags f,
                                          ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimFlowEnergyTransfer (e, f | ::xml_schema::flags::base, c),
        SimFlowEnergyTrans_Name_ (this),
        SimFlowEnergyTrans_AvailSchedName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimFlowEnergyTransfer_Dehumidifier::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimFlowEnergyTransfer::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimFlowEnergyTrans_Name
          //
          if (n.name () == "SimFlowEnergyTrans_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_Name_type > r (
              SimFlowEnergyTrans_Name_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_Name_)
            {
              this->SimFlowEnergyTrans_Name_.set (r);
              continue;
            }
          }

          // SimFlowEnergyTrans_AvailSchedName
          //
          if (n.name () == "SimFlowEnergyTrans_AvailSchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimFlowEnergyTrans_AvailSchedName_type > r (
              SimFlowEnergyTrans_AvailSchedName_traits::create (i, f, this));

            if (!this->SimFlowEnergyTrans_AvailSchedName_)
            {
              this->SimFlowEnergyTrans_AvailSchedName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimFlowEnergyTransfer_Dehumidifier* SimFlowEnergyTransfer_Dehumidifier::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimFlowEnergyTransfer_Dehumidifier (*this, f, c);
      }

      SimFlowEnergyTransfer_Dehumidifier& SimFlowEnergyTransfer_Dehumidifier::
      operator= (const SimFlowEnergyTransfer_Dehumidifier& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimFlowEnergyTransfer& > (*this) = x;
          this->SimFlowEnergyTrans_Name_ = x.SimFlowEnergyTrans_Name_;
          this->SimFlowEnergyTrans_AvailSchedName_ = x.SimFlowEnergyTrans_AvailSchedName_;
        }

        return *this;
      }

      SimFlowEnergyTransfer_Dehumidifier::
      ~SimFlowEnergyTransfer_Dehumidifier ()
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

