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

#include "SimCost_UtilityCost_CostRatchet.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimCost_UtilityCost_CostRatchet
      // 

      const SimCost_UtilityCost_CostRatchet::SimCost_TariffName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_TariffName () const
      {
        return this->SimCost_TariffName_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_TariffName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_TariffName ()
      {
        return this->SimCost_TariffName_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_TariffName (const SimCost_TariffName_type& x)
      {
        this->SimCost_TariffName_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_TariffName (const SimCost_TariffName_optional& x)
      {
        this->SimCost_TariffName_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_TariffName (::std::auto_ptr< SimCost_TariffName_type > x)
      {
        this->SimCost_TariffName_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_RatchetVarName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_RatchetVarName () const
      {
        return this->SimCost_RatchetVarName_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_RatchetVarName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_RatchetVarName ()
      {
        return this->SimCost_RatchetVarName_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_RatchetVarName (const SimCost_RatchetVarName_type& x)
      {
        this->SimCost_RatchetVarName_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_RatchetVarName (const SimCost_RatchetVarName_optional& x)
      {
        this->SimCost_RatchetVarName_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_RatchetVarName (::std::auto_ptr< SimCost_RatchetVarName_type > x)
      {
        this->SimCost_RatchetVarName_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_BaselineSrcVar_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_BaselineSrcVar () const
      {
        return this->SimCost_BaselineSrcVar_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_BaselineSrcVar_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_BaselineSrcVar ()
      {
        return this->SimCost_BaselineSrcVar_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_BaselineSrcVar (const SimCost_BaselineSrcVar_type& x)
      {
        this->SimCost_BaselineSrcVar_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_BaselineSrcVar (const SimCost_BaselineSrcVar_optional& x)
      {
        this->SimCost_BaselineSrcVar_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_BaselineSrcVar (::std::auto_ptr< SimCost_BaselineSrcVar_type > x)
      {
        this->SimCost_BaselineSrcVar_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_AdjSrcVar_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_AdjSrcVar () const
      {
        return this->SimCost_AdjSrcVar_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_AdjSrcVar_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_AdjSrcVar ()
      {
        return this->SimCost_AdjSrcVar_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_AdjSrcVar (const SimCost_AdjSrcVar_type& x)
      {
        this->SimCost_AdjSrcVar_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_AdjSrcVar (const SimCost_AdjSrcVar_optional& x)
      {
        this->SimCost_AdjSrcVar_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_AdjSrcVar (::std::auto_ptr< SimCost_AdjSrcVar_type > x)
      {
        this->SimCost_AdjSrcVar_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_SeasonFrom_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonFrom () const
      {
        return this->SimCost_SeasonFrom_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_SeasonFrom_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonFrom ()
      {
        return this->SimCost_SeasonFrom_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonFrom (const SimCost_SeasonFrom_type& x)
      {
        this->SimCost_SeasonFrom_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonFrom (const SimCost_SeasonFrom_optional& x)
      {
        this->SimCost_SeasonFrom_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonFrom (::std::auto_ptr< SimCost_SeasonFrom_type > x)
      {
        this->SimCost_SeasonFrom_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_SeasonTo_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonTo () const
      {
        return this->SimCost_SeasonTo_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_SeasonTo_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonTo ()
      {
        return this->SimCost_SeasonTo_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonTo (const SimCost_SeasonTo_type& x)
      {
        this->SimCost_SeasonTo_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonTo (const SimCost_SeasonTo_optional& x)
      {
        this->SimCost_SeasonTo_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_SeasonTo (::std::auto_ptr< SimCost_SeasonTo_type > x)
      {
        this->SimCost_SeasonTo_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_MultValOrVarName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_MultValOrVarName () const
      {
        return this->SimCost_MultValOrVarName_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_MultValOrVarName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_MultValOrVarName ()
      {
        return this->SimCost_MultValOrVarName_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_MultValOrVarName (const SimCost_MultValOrVarName_type& x)
      {
        this->SimCost_MultValOrVarName_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_MultValOrVarName (const SimCost_MultValOrVarName_optional& x)
      {
        this->SimCost_MultValOrVarName_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_MultValOrVarName (::std::auto_ptr< SimCost_MultValOrVarName_type > x)
      {
        this->SimCost_MultValOrVarName_.set (x);
      }

      const SimCost_UtilityCost_CostRatchet::SimCost_fsetValOrVarName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_fsetValOrVarName () const
      {
        return this->SimCost_fsetValOrVarName_;
      }

      SimCost_UtilityCost_CostRatchet::SimCost_fsetValOrVarName_optional& SimCost_UtilityCost_CostRatchet::
      SimCost_fsetValOrVarName ()
      {
        return this->SimCost_fsetValOrVarName_;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_fsetValOrVarName (const SimCost_fsetValOrVarName_type& x)
      {
        this->SimCost_fsetValOrVarName_.set (x);
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_fsetValOrVarName (const SimCost_fsetValOrVarName_optional& x)
      {
        this->SimCost_fsetValOrVarName_ = x;
      }

      void SimCost_UtilityCost_CostRatchet::
      SimCost_fsetValOrVarName (::std::auto_ptr< SimCost_fsetValOrVarName_type > x)
      {
        this->SimCost_fsetValOrVarName_.set (x);
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
      // SimCost_UtilityCost_CostRatchet
      //

      SimCost_UtilityCost_CostRatchet::
      SimCost_UtilityCost_CostRatchet ()
      : ::schema::simxml::ResourcesGeneral::SimCost_UtilityCost (),
        SimCost_TariffName_ (this),
        SimCost_RatchetVarName_ (this),
        SimCost_BaselineSrcVar_ (this),
        SimCost_AdjSrcVar_ (this),
        SimCost_SeasonFrom_ (this),
        SimCost_SeasonTo_ (this),
        SimCost_MultValOrVarName_ (this),
        SimCost_fsetValOrVarName_ (this)
      {
      }

      SimCost_UtilityCost_CostRatchet::
      SimCost_UtilityCost_CostRatchet (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimCost_UtilityCost (RefId),
        SimCost_TariffName_ (this),
        SimCost_RatchetVarName_ (this),
        SimCost_BaselineSrcVar_ (this),
        SimCost_AdjSrcVar_ (this),
        SimCost_SeasonFrom_ (this),
        SimCost_SeasonTo_ (this),
        SimCost_MultValOrVarName_ (this),
        SimCost_fsetValOrVarName_ (this)
      {
      }

      SimCost_UtilityCost_CostRatchet::
      SimCost_UtilityCost_CostRatchet (const SimCost_UtilityCost_CostRatchet& x,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCost_UtilityCost (x, f, c),
        SimCost_TariffName_ (x.SimCost_TariffName_, f, this),
        SimCost_RatchetVarName_ (x.SimCost_RatchetVarName_, f, this),
        SimCost_BaselineSrcVar_ (x.SimCost_BaselineSrcVar_, f, this),
        SimCost_AdjSrcVar_ (x.SimCost_AdjSrcVar_, f, this),
        SimCost_SeasonFrom_ (x.SimCost_SeasonFrom_, f, this),
        SimCost_SeasonTo_ (x.SimCost_SeasonTo_, f, this),
        SimCost_MultValOrVarName_ (x.SimCost_MultValOrVarName_, f, this),
        SimCost_fsetValOrVarName_ (x.SimCost_fsetValOrVarName_, f, this)
      {
      }

      SimCost_UtilityCost_CostRatchet::
      SimCost_UtilityCost_CostRatchet (const ::xercesc::DOMElement& e,
                                       ::xml_schema::flags f,
                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimCost_UtilityCost (e, f | ::xml_schema::flags::base, c),
        SimCost_TariffName_ (this),
        SimCost_RatchetVarName_ (this),
        SimCost_BaselineSrcVar_ (this),
        SimCost_AdjSrcVar_ (this),
        SimCost_SeasonFrom_ (this),
        SimCost_SeasonTo_ (this),
        SimCost_MultValOrVarName_ (this),
        SimCost_fsetValOrVarName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimCost_UtilityCost_CostRatchet::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimCost_UtilityCost::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCost_TariffName
          //
          if (n.name () == "SimCost_TariffName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_TariffName_type > r (
              SimCost_TariffName_traits::create (i, f, this));

            if (!this->SimCost_TariffName_)
            {
              this->SimCost_TariffName_.set (r);
              continue;
            }
          }

          // SimCost_RatchetVarName
          //
          if (n.name () == "SimCost_RatchetVarName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_RatchetVarName_type > r (
              SimCost_RatchetVarName_traits::create (i, f, this));

            if (!this->SimCost_RatchetVarName_)
            {
              this->SimCost_RatchetVarName_.set (r);
              continue;
            }
          }

          // SimCost_BaselineSrcVar
          //
          if (n.name () == "SimCost_BaselineSrcVar" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_BaselineSrcVar_type > r (
              SimCost_BaselineSrcVar_traits::create (i, f, this));

            if (!this->SimCost_BaselineSrcVar_)
            {
              this->SimCost_BaselineSrcVar_.set (r);
              continue;
            }
          }

          // SimCost_AdjSrcVar
          //
          if (n.name () == "SimCost_AdjSrcVar" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_AdjSrcVar_type > r (
              SimCost_AdjSrcVar_traits::create (i, f, this));

            if (!this->SimCost_AdjSrcVar_)
            {
              this->SimCost_AdjSrcVar_.set (r);
              continue;
            }
          }

          // SimCost_SeasonFrom
          //
          if (n.name () == "SimCost_SeasonFrom" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_SeasonFrom_type > r (
              SimCost_SeasonFrom_traits::create (i, f, this));

            if (!this->SimCost_SeasonFrom_)
            {
              this->SimCost_SeasonFrom_.set (r);
              continue;
            }
          }

          // SimCost_SeasonTo
          //
          if (n.name () == "SimCost_SeasonTo" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_SeasonTo_type > r (
              SimCost_SeasonTo_traits::create (i, f, this));

            if (!this->SimCost_SeasonTo_)
            {
              this->SimCost_SeasonTo_.set (r);
              continue;
            }
          }

          // SimCost_MultValOrVarName
          //
          if (n.name () == "SimCost_MultValOrVarName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_MultValOrVarName_type > r (
              SimCost_MultValOrVarName_traits::create (i, f, this));

            if (!this->SimCost_MultValOrVarName_)
            {
              this->SimCost_MultValOrVarName_.set (r);
              continue;
            }
          }

          // SimCost_fsetValOrVarName
          //
          if (n.name () == "SimCost_fsetValOrVarName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCost_fsetValOrVarName_type > r (
              SimCost_fsetValOrVarName_traits::create (i, f, this));

            if (!this->SimCost_fsetValOrVarName_)
            {
              this->SimCost_fsetValOrVarName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimCost_UtilityCost_CostRatchet* SimCost_UtilityCost_CostRatchet::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimCost_UtilityCost_CostRatchet (*this, f, c);
      }

      SimCost_UtilityCost_CostRatchet& SimCost_UtilityCost_CostRatchet::
      operator= (const SimCost_UtilityCost_CostRatchet& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimCost_UtilityCost& > (*this) = x;
          this->SimCost_TariffName_ = x.SimCost_TariffName_;
          this->SimCost_RatchetVarName_ = x.SimCost_RatchetVarName_;
          this->SimCost_BaselineSrcVar_ = x.SimCost_BaselineSrcVar_;
          this->SimCost_AdjSrcVar_ = x.SimCost_AdjSrcVar_;
          this->SimCost_SeasonFrom_ = x.SimCost_SeasonFrom_;
          this->SimCost_SeasonTo_ = x.SimCost_SeasonTo_;
          this->SimCost_MultValOrVarName_ = x.SimCost_MultValOrVarName_;
          this->SimCost_fsetValOrVarName_ = x.SimCost_fsetValOrVarName_;
        }

        return *this;
      }

      SimCost_UtilityCost_CostRatchet::
      ~SimCost_UtilityCost_CostRatchet ()
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

