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

#include "SimRefrigerationSystemElement_Condenser.hxx"

namespace schema
{
  namespace simxml
  {
    namespace MepModel
    {
      // SimRefrigerationSystemElement_Condenser
      // 

      const SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_Name_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_Name () const
      {
        return this->SimRefrigSysElem_Name_;
      }

      SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_Name_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_Name ()
      {
        return this->SimRefrigSysElem_Name_;
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_Name (const SimRefrigSysElem_Name_type& x)
      {
        this->SimRefrigSysElem_Name_.set (x);
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_Name (const SimRefrigSysElem_Name_optional& x)
      {
        this->SimRefrigSysElem_Name_ = x;
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_Name (::std::auto_ptr< SimRefrigSysElem_Name_type > x)
      {
        this->SimRefrigSysElem_Name_.set (x);
      }

      const SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_CondRefrigOperatChargeInvent_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondRefrigOperatChargeInvent () const
      {
        return this->SimRefrigSysElem_CondRefrigOperatChargeInvent_;
      }

      SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_CondRefrigOperatChargeInvent_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondRefrigOperatChargeInvent ()
      {
        return this->SimRefrigSysElem_CondRefrigOperatChargeInvent_;
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondRefrigOperatChargeInvent (const SimRefrigSysElem_CondRefrigOperatChargeInvent_type& x)
      {
        this->SimRefrigSysElem_CondRefrigOperatChargeInvent_.set (x);
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondRefrigOperatChargeInvent (const SimRefrigSysElem_CondRefrigOperatChargeInvent_optional& x)
      {
        this->SimRefrigSysElem_CondRefrigOperatChargeInvent_ = x;
      }

      const SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_CondsReceiverRefrigInvent_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsReceiverRefrigInvent () const
      {
        return this->SimRefrigSysElem_CondsReceiverRefrigInvent_;
      }

      SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_CondsReceiverRefrigInvent_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsReceiverRefrigInvent ()
      {
        return this->SimRefrigSysElem_CondsReceiverRefrigInvent_;
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsReceiverRefrigInvent (const SimRefrigSysElem_CondsReceiverRefrigInvent_type& x)
      {
        this->SimRefrigSysElem_CondsReceiverRefrigInvent_.set (x);
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsReceiverRefrigInvent (const SimRefrigSysElem_CondsReceiverRefrigInvent_optional& x)
      {
        this->SimRefrigSysElem_CondsReceiverRefrigInvent_ = x;
      }

      const SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_CondsPipingRefrigInvent_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsPipingRefrigInvent () const
      {
        return this->SimRefrigSysElem_CondsPipingRefrigInvent_;
      }

      SimRefrigerationSystemElement_Condenser::SimRefrigSysElem_CondsPipingRefrigInvent_optional& SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsPipingRefrigInvent ()
      {
        return this->SimRefrigSysElem_CondsPipingRefrigInvent_;
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsPipingRefrigInvent (const SimRefrigSysElem_CondsPipingRefrigInvent_type& x)
      {
        this->SimRefrigSysElem_CondsPipingRefrigInvent_.set (x);
      }

      void SimRefrigerationSystemElement_Condenser::
      SimRefrigSysElem_CondsPipingRefrigInvent (const SimRefrigSysElem_CondsPipingRefrigInvent_optional& x)
      {
        this->SimRefrigSysElem_CondsPipingRefrigInvent_ = x;
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
      // SimRefrigerationSystemElement_Condenser
      //

      SimRefrigerationSystemElement_Condenser::
      SimRefrigerationSystemElement_Condenser ()
      : ::schema::simxml::MepModel::SimRefrigerationSystemElement (),
        SimRefrigSysElem_Name_ (this),
        SimRefrigSysElem_CondRefrigOperatChargeInvent_ (this),
        SimRefrigSysElem_CondsReceiverRefrigInvent_ (this),
        SimRefrigSysElem_CondsPipingRefrigInvent_ (this)
      {
      }

      SimRefrigerationSystemElement_Condenser::
      SimRefrigerationSystemElement_Condenser (const RefId_type& RefId)
      : ::schema::simxml::MepModel::SimRefrigerationSystemElement (RefId),
        SimRefrigSysElem_Name_ (this),
        SimRefrigSysElem_CondRefrigOperatChargeInvent_ (this),
        SimRefrigSysElem_CondsReceiverRefrigInvent_ (this),
        SimRefrigSysElem_CondsPipingRefrigInvent_ (this)
      {
      }

      SimRefrigerationSystemElement_Condenser::
      SimRefrigerationSystemElement_Condenser (const SimRefrigerationSystemElement_Condenser& x,
                                               ::xml_schema::flags f,
                                               ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimRefrigerationSystemElement (x, f, c),
        SimRefrigSysElem_Name_ (x.SimRefrigSysElem_Name_, f, this),
        SimRefrigSysElem_CondRefrigOperatChargeInvent_ (x.SimRefrigSysElem_CondRefrigOperatChargeInvent_, f, this),
        SimRefrigSysElem_CondsReceiverRefrigInvent_ (x.SimRefrigSysElem_CondsReceiverRefrigInvent_, f, this),
        SimRefrigSysElem_CondsPipingRefrigInvent_ (x.SimRefrigSysElem_CondsPipingRefrigInvent_, f, this)
      {
      }

      SimRefrigerationSystemElement_Condenser::
      SimRefrigerationSystemElement_Condenser (const ::xercesc::DOMElement& e,
                                               ::xml_schema::flags f,
                                               ::xml_schema::container* c)
      : ::schema::simxml::MepModel::SimRefrigerationSystemElement (e, f | ::xml_schema::flags::base, c),
        SimRefrigSysElem_Name_ (this),
        SimRefrigSysElem_CondRefrigOperatChargeInvent_ (this),
        SimRefrigSysElem_CondsReceiverRefrigInvent_ (this),
        SimRefrigSysElem_CondsPipingRefrigInvent_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimRefrigerationSystemElement_Condenser::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::MepModel::SimRefrigerationSystemElement::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimRefrigSysElem_Name
          //
          if (n.name () == "SimRefrigSysElem_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            ::std::auto_ptr< SimRefrigSysElem_Name_type > r (
              SimRefrigSysElem_Name_traits::create (i, f, this));

            if (!this->SimRefrigSysElem_Name_)
            {
              this->SimRefrigSysElem_Name_.set (r);
              continue;
            }
          }

          // SimRefrigSysElem_CondRefrigOperatChargeInvent
          //
          if (n.name () == "SimRefrigSysElem_CondRefrigOperatChargeInvent" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimRefrigSysElem_CondRefrigOperatChargeInvent_)
            {
              this->SimRefrigSysElem_CondRefrigOperatChargeInvent_.set (SimRefrigSysElem_CondRefrigOperatChargeInvent_traits::create (i, f, this));
              continue;
            }
          }

          // SimRefrigSysElem_CondsReceiverRefrigInvent
          //
          if (n.name () == "SimRefrigSysElem_CondsReceiverRefrigInvent" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimRefrigSysElem_CondsReceiverRefrigInvent_)
            {
              this->SimRefrigSysElem_CondsReceiverRefrigInvent_.set (SimRefrigSysElem_CondsReceiverRefrigInvent_traits::create (i, f, this));
              continue;
            }
          }

          // SimRefrigSysElem_CondsPipingRefrigInvent
          //
          if (n.name () == "SimRefrigSysElem_CondsPipingRefrigInvent" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/MepModel")
          {
            if (!this->SimRefrigSysElem_CondsPipingRefrigInvent_)
            {
              this->SimRefrigSysElem_CondsPipingRefrigInvent_.set (SimRefrigSysElem_CondsPipingRefrigInvent_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimRefrigerationSystemElement_Condenser* SimRefrigerationSystemElement_Condenser::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimRefrigerationSystemElement_Condenser (*this, f, c);
      }

      SimRefrigerationSystemElement_Condenser& SimRefrigerationSystemElement_Condenser::
      operator= (const SimRefrigerationSystemElement_Condenser& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::MepModel::SimRefrigerationSystemElement& > (*this) = x;
          this->SimRefrigSysElem_Name_ = x.SimRefrigSysElem_Name_;
          this->SimRefrigSysElem_CondRefrigOperatChargeInvent_ = x.SimRefrigSysElem_CondRefrigOperatChargeInvent_;
          this->SimRefrigSysElem_CondsReceiverRefrigInvent_ = x.SimRefrigSysElem_CondsReceiverRefrigInvent_;
          this->SimRefrigSysElem_CondsPipingRefrigInvent_ = x.SimRefrigSysElem_CondsPipingRefrigInvent_;
        }

        return *this;
      }

      SimRefrigerationSystemElement_Condenser::
      ~SimRefrigerationSystemElement_Condenser ()
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
