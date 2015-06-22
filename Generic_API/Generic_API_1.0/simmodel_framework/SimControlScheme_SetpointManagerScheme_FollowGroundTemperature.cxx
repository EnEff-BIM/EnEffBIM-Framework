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

#include "SimControlScheme_SetpointManagerScheme_FollowGroundTemperature.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_FollowGroundTemperature
      // 

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_Name () const
      {
        return this->SimCntrlSchm_Name_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_Name ()
      {
        return this->SimCntrlSchm_Name_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_type& x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_optional& x)
      {
        this->SimCntrlSchm_Name_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_Name (::std::auto_ptr< SimCntrlSchm_Name_type > x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_CntlVar_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_CntlVar () const
      {
        return this->SimCntrlSchm_CntlVar_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_CntlVar_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_CntlVar ()
      {
        return this->SimCntrlSchm_CntlVar_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_CntlVar (const SimCntrlSchm_CntlVar_type& x)
      {
        this->SimCntrlSchm_CntlVar_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_CntlVar (const SimCntrlSchm_CntlVar_optional& x)
      {
        this->SimCntrlSchm_CntlVar_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_CntlVar (::std::auto_ptr< SimCntrlSchm_CntlVar_type > x)
      {
        this->SimCntrlSchm_CntlVar_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_SetpointNodeOrNodeListName () const
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_SetpointNodeOrNodeListName ()
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_type& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_optional& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_SetpointNodeOrNodeListName (::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_MinSetpointTemp_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MinSetpointTemp () const
      {
        return this->SimCntrlSchm_MinSetpointTemp_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_MinSetpointTemp_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MinSetpointTemp ()
      {
        return this->SimCntrlSchm_MinSetpointTemp_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MinSetpointTemp (const SimCntrlSchm_MinSetpointTemp_type& x)
      {
        this->SimCntrlSchm_MinSetpointTemp_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MinSetpointTemp (const SimCntrlSchm_MinSetpointTemp_optional& x)
      {
        this->SimCntrlSchm_MinSetpointTemp_ = x;
      }

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_MaxSetpointTemp_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MaxSetpointTemp () const
      {
        return this->SimCntrlSchm_MaxSetpointTemp_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_MaxSetpointTemp_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MaxSetpointTemp ()
      {
        return this->SimCntrlSchm_MaxSetpointTemp_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MaxSetpointTemp (const SimCntrlSchm_MaxSetpointTemp_type& x)
      {
        this->SimCntrlSchm_MaxSetpointTemp_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_MaxSetpointTemp (const SimCntrlSchm_MaxSetpointTemp_optional& x)
      {
        this->SimCntrlSchm_MaxSetpointTemp_ = x;
      }

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_OffsetTempDiff_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_OffsetTempDiff () const
      {
        return this->SimCntrlSchm_OffsetTempDiff_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_OffsetTempDiff_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_OffsetTempDiff ()
      {
        return this->SimCntrlSchm_OffsetTempDiff_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_OffsetTempDiff (const SimCntrlSchm_OffsetTempDiff_type& x)
      {
        this->SimCntrlSchm_OffsetTempDiff_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_OffsetTempDiff (const SimCntrlSchm_OffsetTempDiff_optional& x)
      {
        this->SimCntrlSchm_OffsetTempDiff_ = x;
      }

      const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_ReferenceGroundTempObjType_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_ReferenceGroundTempObjType () const
      {
        return this->SimCntrlSchm_ReferenceGroundTempObjType_;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::SimCntrlSchm_ReferenceGroundTempObjType_optional& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_ReferenceGroundTempObjType ()
      {
        return this->SimCntrlSchm_ReferenceGroundTempObjType_;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_ReferenceGroundTempObjType (const SimCntrlSchm_ReferenceGroundTempObjType_type& x)
      {
        this->SimCntrlSchm_ReferenceGroundTempObjType_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_ReferenceGroundTempObjType (const SimCntrlSchm_ReferenceGroundTempObjType_optional& x)
      {
        this->SimCntrlSchm_ReferenceGroundTempObjType_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimCntrlSchm_ReferenceGroundTempObjType (::std::auto_ptr< SimCntrlSchm_ReferenceGroundTempObjType_type > x)
      {
        this->SimCntrlSchm_ReferenceGroundTempObjType_.set (x);
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

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_FollowGroundTemperature
      //

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (RefId),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlVar_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_MinSetpointTemp_ (this),
        SimCntrlSchm_MaxSetpointTemp_ (this),
        SimCntrlSchm_OffsetTempDiff_ (this),
        SimCntrlSchm_ReferenceGroundTempObjType_ (this)
      {
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature (const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature& x,
                                                                      ::xml_schema::flags f,
                                                                      ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (x, f, c),
        SimCntrlSchm_Name_ (x.SimCntrlSchm_Name_, f, this),
        SimCntrlSchm_CntlVar_ (x.SimCntrlSchm_CntlVar_, f, this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (x.SimCntrlSchm_SetpointNodeOrNodeListName_, f, this),
        SimCntrlSchm_MinSetpointTemp_ (x.SimCntrlSchm_MinSetpointTemp_, f, this),
        SimCntrlSchm_MaxSetpointTemp_ (x.SimCntrlSchm_MaxSetpointTemp_, f, this),
        SimCntrlSchm_OffsetTempDiff_ (x.SimCntrlSchm_OffsetTempDiff_, f, this),
        SimCntrlSchm_ReferenceGroundTempObjType_ (x.SimCntrlSchm_ReferenceGroundTempObjType_, f, this)
      {
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature (const ::xercesc::DOMElement& e,
                                                                      ::xml_schema::flags f,
                                                                      ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlVar_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_MinSetpointTemp_ (this),
        SimCntrlSchm_MaxSetpointTemp_ (this),
        SimCntrlSchm_OffsetTempDiff_ (this),
        SimCntrlSchm_ReferenceGroundTempObjType_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_Name
          //
          if (n.name () == "SimCntrlSchm_Name" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_Name_type > r (
              SimCntrlSchm_Name_traits::create (i, f, this));

            if (!this->SimCntrlSchm_Name_)
            {
              this->SimCntrlSchm_Name_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_CntlVar
          //
          if (n.name () == "SimCntrlSchm_CntlVar" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_CntlVar_type > r (
              SimCntrlSchm_CntlVar_traits::create (i, f, this));

            if (!this->SimCntrlSchm_CntlVar_)
            {
              this->SimCntrlSchm_CntlVar_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_SetpointNodeOrNodeListName
          //
          if (n.name () == "SimCntrlSchm_SetpointNodeOrNodeListName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > r (
              SimCntrlSchm_SetpointNodeOrNodeListName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_SetpointNodeOrNodeListName_)
            {
              this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_MinSetpointTemp
          //
          if (n.name () == "SimCntrlSchm_MinSetpointTemp" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MinSetpointTemp_)
            {
              this->SimCntrlSchm_MinSetpointTemp_.set (SimCntrlSchm_MinSetpointTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_MaxSetpointTemp
          //
          if (n.name () == "SimCntrlSchm_MaxSetpointTemp" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_MaxSetpointTemp_)
            {
              this->SimCntrlSchm_MaxSetpointTemp_.set (SimCntrlSchm_MaxSetpointTemp_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_OffsetTempDiff
          //
          if (n.name () == "SimCntrlSchm_OffsetTempDiff" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            if (!this->SimCntrlSchm_OffsetTempDiff_)
            {
              this->SimCntrlSchm_OffsetTempDiff_.set (SimCntrlSchm_OffsetTempDiff_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrlSchm_ReferenceGroundTempObjType
          //
          if (n.name () == "SimCntrlSchm_ReferenceGroundTempObjType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_ReferenceGroundTempObjType_type > r (
              SimCntrlSchm_ReferenceGroundTempObjType_traits::create (i, f, this));

            if (!this->SimCntrlSchm_ReferenceGroundTempObjType_)
            {
              this->SimCntrlSchm_ReferenceGroundTempObjType_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature* SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_SetpointManagerScheme_FollowGroundTemperature (*this, f, c);
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature& SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      operator= (const SimControlScheme_SetpointManagerScheme_FollowGroundTemperature& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeneral::SimControlScheme_SetpointManagerScheme& > (*this) = x;
          this->SimCntrlSchm_Name_ = x.SimCntrlSchm_Name_;
          this->SimCntrlSchm_CntlVar_ = x.SimCntrlSchm_CntlVar_;
          this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x.SimCntrlSchm_SetpointNodeOrNodeListName_;
          this->SimCntrlSchm_MinSetpointTemp_ = x.SimCntrlSchm_MinSetpointTemp_;
          this->SimCntrlSchm_MaxSetpointTemp_ = x.SimCntrlSchm_MaxSetpointTemp_;
          this->SimCntrlSchm_OffsetTempDiff_ = x.SimCntrlSchm_OffsetTempDiff_;
          this->SimCntrlSchm_ReferenceGroundTempObjType_ = x.SimCntrlSchm_ReferenceGroundTempObjType_;
        }

        return *this;
      }

      SimControlScheme_SetpointManagerScheme_FollowGroundTemperature::
      ~SimControlScheme_SetpointManagerScheme_FollowGroundTemperature ()
      {
      }
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace namespaces
{
  namespace Sim
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
