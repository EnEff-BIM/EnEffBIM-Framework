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

#include "SimCost_ComponentCost_Reference.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimCost_ComponentCost_Reference
      // 

      const SimCost_ComponentCost_Reference::SimCost_RefBldgLineItemCosts_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgLineItemCosts () const
      {
        return this->SimCost_RefBldgLineItemCosts_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgLineItemCosts_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgLineItemCosts ()
      {
        return this->SimCost_RefBldgLineItemCosts_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgLineItemCosts (const SimCost_RefBldgLineItemCosts_type& x)
      {
        this->SimCost_RefBldgLineItemCosts_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgLineItemCosts (const SimCost_RefBldgLineItemCosts_optional& x)
      {
        this->SimCost_RefBldgLineItemCosts_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgMiscCostPerCondArea_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgMiscCostPerCondArea () const
      {
        return this->SimCost_RefBldgMiscCostPerCondArea_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgMiscCostPerCondArea_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgMiscCostPerCondArea ()
      {
        return this->SimCost_RefBldgMiscCostPerCondArea_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgMiscCostPerCondArea (const SimCost_RefBldgMiscCostPerCondArea_type& x)
      {
        this->SimCost_RefBldgMiscCostPerCondArea_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgMiscCostPerCondArea (const SimCost_RefBldgMiscCostPerCondArea_optional& x)
      {
        this->SimCost_RefBldgMiscCostPerCondArea_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgDesign_EngrFees_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgDesign_EngrFees () const
      {
        return this->SimCost_RefBldgDesign_EngrFees_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgDesign_EngrFees_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgDesign_EngrFees ()
      {
        return this->SimCost_RefBldgDesign_EngrFees_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgDesign_EngrFees (const SimCost_RefBldgDesign_EngrFees_type& x)
      {
        this->SimCost_RefBldgDesign_EngrFees_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgDesign_EngrFees (const SimCost_RefBldgDesign_EngrFees_optional& x)
      {
        this->SimCost_RefBldgDesign_EngrFees_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgContrFee_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgContrFee () const
      {
        return this->SimCost_RefBldgContrFee_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgContrFee_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgContrFee ()
      {
        return this->SimCost_RefBldgContrFee_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgContrFee (const SimCost_RefBldgContrFee_type& x)
      {
        this->SimCost_RefBldgContrFee_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgContrFee (const SimCost_RefBldgContrFee_optional& x)
      {
        this->SimCost_RefBldgContrFee_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgContingency_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgContingency () const
      {
        return this->SimCost_RefBldgContingency_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgContingency_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgContingency ()
      {
        return this->SimCost_RefBldgContingency_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgContingency (const SimCost_RefBldgContingency_type& x)
      {
        this->SimCost_RefBldgContingency_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgContingency (const SimCost_RefBldgContingency_optional& x)
      {
        this->SimCost_RefBldgContingency_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgPermitsBonding_Insur_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgPermitsBonding_Insur () const
      {
        return this->SimCost_RefBldgPermitsBonding_Insur_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgPermitsBonding_Insur_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgPermitsBonding_Insur ()
      {
        return this->SimCost_RefBldgPermitsBonding_Insur_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgPermitsBonding_Insur (const SimCost_RefBldgPermitsBonding_Insur_type& x)
      {
        this->SimCost_RefBldgPermitsBonding_Insur_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgPermitsBonding_Insur (const SimCost_RefBldgPermitsBonding_Insur_optional& x)
      {
        this->SimCost_RefBldgPermitsBonding_Insur_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgCommissioningFee_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgCommissioningFee () const
      {
        return this->SimCost_RefBldgCommissioningFee_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgCommissioningFee_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgCommissioningFee ()
      {
        return this->SimCost_RefBldgCommissioningFee_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgCommissioningFee (const SimCost_RefBldgCommissioningFee_type& x)
      {
        this->SimCost_RefBldgCommissioningFee_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgCommissioningFee (const SimCost_RefBldgCommissioningFee_optional& x)
      {
        this->SimCost_RefBldgCommissioningFee_ = x;
      }

      const SimCost_ComponentCost_Reference::SimCost_RefBldgRegionalAdjFactor_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgRegionalAdjFactor () const
      {
        return this->SimCost_RefBldgRegionalAdjFactor_;
      }

      SimCost_ComponentCost_Reference::SimCost_RefBldgRegionalAdjFactor_optional& SimCost_ComponentCost_Reference::
      SimCost_RefBldgRegionalAdjFactor ()
      {
        return this->SimCost_RefBldgRegionalAdjFactor_;
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgRegionalAdjFactor (const SimCost_RefBldgRegionalAdjFactor_type& x)
      {
        this->SimCost_RefBldgRegionalAdjFactor_.set (x);
      }

      void SimCost_ComponentCost_Reference::
      SimCost_RefBldgRegionalAdjFactor (const SimCost_RefBldgRegionalAdjFactor_optional& x)
      {
        this->SimCost_RefBldgRegionalAdjFactor_ = x;
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
      // SimCost_ComponentCost_Reference
      //

      SimCost_ComponentCost_Reference::
      SimCost_ComponentCost_Reference ()
      : ::schema::simxml::ResourcesGeneral::SimCost_ComponentCost (),
        SimCost_RefBldgLineItemCosts_ (this),
        SimCost_RefBldgMiscCostPerCondArea_ (this),
        SimCost_RefBldgDesign_EngrFees_ (this),
        SimCost_RefBldgContrFee_ (this),
        SimCost_RefBldgContingency_ (this),
        SimCost_RefBldgPermitsBonding_Insur_ (this),
        SimCost_RefBldgCommissioningFee_ (this),
        SimCost_RefBldgRegionalAdjFactor_ (this)
      {
      }

      SimCost_ComponentCost_Reference::
      SimCost_ComponentCost_Reference (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimCost_ComponentCost (RefId),
        SimCost_RefBldgLineItemCosts_ (this),
        SimCost_RefBldgMiscCostPerCondArea_ (this),
        SimCost_RefBldgDesign_EngrFees_ (this),
        SimCost_RefBldgContrFee_ (this),
        SimCost_RefBldgContingency_ (this),
        SimCost_RefBldgPermitsBonding_Insur_ (this),
        SimCost_RefBldgCommissioningFee_ (this),
        SimCost_RefBldgRegionalAdjFactor_ (this)
      {
      }

      SimCost_ComponentCost_Reference::
      SimCost_ComponentCost_Reference (const SimCost_ComponentCost_Reference& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCost_ComponentCost (x, f, c),
        SimCost_RefBldgLineItemCosts_ (x.SimCost_RefBldgLineItemCosts_, f, this),
        SimCost_RefBldgMiscCostPerCondArea_ (x.SimCost_RefBldgMiscCostPerCondArea_, f, this),
        SimCost_RefBldgDesign_EngrFees_ (x.SimCost_RefBldgDesign_EngrFees_, f, this),
        SimCost_RefBldgContrFee_ (x.SimCost_RefBldgContrFee_, f, this),
        SimCost_RefBldgContingency_ (x.SimCost_RefBldgContingency_, f, this),
        SimCost_RefBldgPermitsBonding_Insur_ (x.SimCost_RefBldgPermitsBonding_Insur_, f, this),
        SimCost_RefBldgCommissioningFee_ (x.SimCost_RefBldgCommissioningFee_, f, this),
        SimCost_RefBldgRegionalAdjFactor_ (x.SimCost_RefBldgRegionalAdjFactor_, f, this)
      {
      }

      SimCost_ComponentCost_Reference::
      SimCost_ComponentCost_Reference (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCost_ComponentCost (e, f | ::xml_schema::flags::base, c),
        SimCost_RefBldgLineItemCosts_ (this),
        SimCost_RefBldgMiscCostPerCondArea_ (this),
        SimCost_RefBldgDesign_EngrFees_ (this),
        SimCost_RefBldgContrFee_ (this),
        SimCost_RefBldgContingency_ (this),
        SimCost_RefBldgPermitsBonding_Insur_ (this),
        SimCost_RefBldgCommissioningFee_ (this),
        SimCost_RefBldgRegionalAdjFactor_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCost_ComponentCost_Reference::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimCost_ComponentCost::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCost_RefBldgLineItemCosts
          //
          if (n.name () == "SimCost_RefBldgLineItemCosts" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgLineItemCosts_)
            {
              this->SimCost_RefBldgLineItemCosts_.set (SimCost_RefBldgLineItemCosts_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgMiscCostPerCondArea
          //
          if (n.name () == "SimCost_RefBldgMiscCostPerCondArea" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgMiscCostPerCondArea_)
            {
              this->SimCost_RefBldgMiscCostPerCondArea_.set (SimCost_RefBldgMiscCostPerCondArea_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgDesign_EngrFees
          //
          if (n.name () == "SimCost_RefBldgDesign_EngrFees" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgDesign_EngrFees_)
            {
              this->SimCost_RefBldgDesign_EngrFees_.set (SimCost_RefBldgDesign_EngrFees_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgContrFee
          //
          if (n.name () == "SimCost_RefBldgContrFee" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgContrFee_)
            {
              this->SimCost_RefBldgContrFee_.set (SimCost_RefBldgContrFee_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgContingency
          //
          if (n.name () == "SimCost_RefBldgContingency" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgContingency_)
            {
              this->SimCost_RefBldgContingency_.set (SimCost_RefBldgContingency_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgPermitsBonding_Insur
          //
          if (n.name () == "SimCost_RefBldgPermitsBonding_Insur" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgPermitsBonding_Insur_)
            {
              this->SimCost_RefBldgPermitsBonding_Insur_.set (SimCost_RefBldgPermitsBonding_Insur_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgCommissioningFee
          //
          if (n.name () == "SimCost_RefBldgCommissioningFee" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgCommissioningFee_)
            {
              this->SimCost_RefBldgCommissioningFee_.set (SimCost_RefBldgCommissioningFee_traits::create (i, f, this));
              continue;
            }
          }

          // SimCost_RefBldgRegionalAdjFactor
          //
          if (n.name () == "SimCost_RefBldgRegionalAdjFactor" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SimCost_RefBldgRegionalAdjFactor_)
            {
              this->SimCost_RefBldgRegionalAdjFactor_.set (SimCost_RefBldgRegionalAdjFactor_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimCost_ComponentCost_Reference* SimCost_ComponentCost_Reference::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCost_ComponentCost_Reference (*this, f, c);
      }

      SimCost_ComponentCost_Reference& SimCost_ComponentCost_Reference::
      operator= (const SimCost_ComponentCost_Reference& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimCost_ComponentCost& > (*this) = x;
          this->SimCost_RefBldgLineItemCosts_ = x.SimCost_RefBldgLineItemCosts_;
          this->SimCost_RefBldgMiscCostPerCondArea_ = x.SimCost_RefBldgMiscCostPerCondArea_;
          this->SimCost_RefBldgDesign_EngrFees_ = x.SimCost_RefBldgDesign_EngrFees_;
          this->SimCost_RefBldgContrFee_ = x.SimCost_RefBldgContrFee_;
          this->SimCost_RefBldgContingency_ = x.SimCost_RefBldgContingency_;
          this->SimCost_RefBldgPermitsBonding_Insur_ = x.SimCost_RefBldgPermitsBonding_Insur_;
          this->SimCost_RefBldgCommissioningFee_ = x.SimCost_RefBldgCommissioningFee_;
          this->SimCost_RefBldgRegionalAdjFactor_ = x.SimCost_RefBldgRegionalAdjFactor_;
        }

        return *this;
      }

      SimCost_ComponentCost_Reference::
      ~SimCost_ComponentCost_Reference ()
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

