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

#include "SimControlScheme_SetpointManagerScheme_MixedAir.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimControlScheme_SetpointManagerScheme_MixedAir
      // 

      const SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_Name () const
      {
        return this->SimCntrlSchm_Name_;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_Name_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_Name ()
      {
        return this->SimCntrlSchm_Name_;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_type& x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_Name (const SimCntrlSchm_Name_optional& x)
      {
        this->SimCntrlSchm_Name_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_Name (::std::auto_ptr< SimCntrlSchm_Name_type > x)
      {
        this->SimCntrlSchm_Name_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_CntlVar_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_CntlVar () const
      {
        return this->SimCntrlSchm_CntlVar_;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_CntlVar_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_CntlVar ()
      {
        return this->SimCntrlSchm_CntlVar_;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_CntlVar (const SimCntrlSchm_CntlVar_type& x)
      {
        this->SimCntrlSchm_CntlVar_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_CntlVar (const SimCntrlSchm_CntlVar_optional& x)
      {
        this->SimCntrlSchm_CntlVar_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_CntlVar (::std::auto_ptr< SimCntrlSchm_CntlVar_type > x)
      {
        this->SimCntrlSchm_CntlVar_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_SetpointNodeOrNodeListName () const
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_SetpointNodeOrNodeListName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_SetpointNodeOrNodeListName ()
      {
        return this->SimCntrlSchm_SetpointNodeOrNodeListName_;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_type& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_SetpointNodeOrNodeListName (const SimCntrlSchm_SetpointNodeOrNodeListName_optional& x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_SetpointNodeOrNodeListName (::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > x)
      {
        this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_RefSetpointNodeName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_RefSetpointNodeName () const
      {
        return this->SimCntrlSchm_RefSetpointNodeName_;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_RefSetpointNodeName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_RefSetpointNodeName ()
      {
        return this->SimCntrlSchm_RefSetpointNodeName_;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_RefSetpointNodeName (const SimCntrlSchm_RefSetpointNodeName_type& x)
      {
        this->SimCntrlSchm_RefSetpointNodeName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_RefSetpointNodeName (const SimCntrlSchm_RefSetpointNodeName_optional& x)
      {
        this->SimCntrlSchm_RefSetpointNodeName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_RefSetpointNodeName (::std::auto_ptr< SimCntrlSchm_RefSetpointNodeName_type > x)
      {
        this->SimCntrlSchm_RefSetpointNodeName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_FanInletNodeName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanInletNodeName () const
      {
        return this->SimCntrlSchm_FanInletNodeName_;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_FanInletNodeName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanInletNodeName ()
      {
        return this->SimCntrlSchm_FanInletNodeName_;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanInletNodeName (const SimCntrlSchm_FanInletNodeName_type& x)
      {
        this->SimCntrlSchm_FanInletNodeName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanInletNodeName (const SimCntrlSchm_FanInletNodeName_optional& x)
      {
        this->SimCntrlSchm_FanInletNodeName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanInletNodeName (::std::auto_ptr< SimCntrlSchm_FanInletNodeName_type > x)
      {
        this->SimCntrlSchm_FanInletNodeName_.set (x);
      }

      const SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_FanOutletNodeName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanOutletNodeName () const
      {
        return this->SimCntrlSchm_FanOutletNodeName_;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::SimCntrlSchm_FanOutletNodeName_optional& SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanOutletNodeName ()
      {
        return this->SimCntrlSchm_FanOutletNodeName_;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanOutletNodeName (const SimCntrlSchm_FanOutletNodeName_type& x)
      {
        this->SimCntrlSchm_FanOutletNodeName_.set (x);
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanOutletNodeName (const SimCntrlSchm_FanOutletNodeName_optional& x)
      {
        this->SimCntrlSchm_FanOutletNodeName_ = x;
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      SimCntrlSchm_FanOutletNodeName (::std::auto_ptr< SimCntrlSchm_FanOutletNodeName_type > x)
      {
        this->SimCntrlSchm_FanOutletNodeName_.set (x);
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
      // SimControlScheme_SetpointManagerScheme_MixedAir
      //

      SimControlScheme_SetpointManagerScheme_MixedAir::
      SimControlScheme_SetpointManagerScheme_MixedAir ()
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlVar_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_RefSetpointNodeName_ (this),
        SimCntrlSchm_FanInletNodeName_ (this),
        SimCntrlSchm_FanOutletNodeName_ (this)
      {
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::
      SimControlScheme_SetpointManagerScheme_MixedAir (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (RefId),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlVar_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_RefSetpointNodeName_ (this),
        SimCntrlSchm_FanInletNodeName_ (this),
        SimCntrlSchm_FanOutletNodeName_ (this)
      {
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::
      SimControlScheme_SetpointManagerScheme_MixedAir (const SimControlScheme_SetpointManagerScheme_MixedAir& x,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (x, f, c),
        SimCntrlSchm_Name_ (x.SimCntrlSchm_Name_, f, this),
        SimCntrlSchm_CntlVar_ (x.SimCntrlSchm_CntlVar_, f, this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (x.SimCntrlSchm_SetpointNodeOrNodeListName_, f, this),
        SimCntrlSchm_RefSetpointNodeName_ (x.SimCntrlSchm_RefSetpointNodeName_, f, this),
        SimCntrlSchm_FanInletNodeName_ (x.SimCntrlSchm_FanInletNodeName_, f, this),
        SimCntrlSchm_FanOutletNodeName_ (x.SimCntrlSchm_FanOutletNodeName_, f, this)
      {
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::
      SimControlScheme_SetpointManagerScheme_MixedAir (const ::xercesc::DOMElement& e,
                                                       ::xml_schema::flags f,
                                                       ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme (e, f | ::xml_schema::flags::base, c),
        SimCntrlSchm_Name_ (this),
        SimCntrlSchm_CntlVar_ (this),
        SimCntrlSchm_SetpointNodeOrNodeListName_ (this),
        SimCntrlSchm_RefSetpointNodeName_ (this),
        SimCntrlSchm_FanInletNodeName_ (this),
        SimCntrlSchm_FanOutletNodeName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimControlScheme_SetpointManagerScheme_MixedAir::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrlSchm_Name
          //
          if (n.name () == "SimCntrlSchm_Name" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
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
          if (n.name () == "SimCntrlSchm_CntlVar" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
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
          if (n.name () == "SimCntrlSchm_SetpointNodeOrNodeListName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_SetpointNodeOrNodeListName_type > r (
              SimCntrlSchm_SetpointNodeOrNodeListName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_SetpointNodeOrNodeListName_)
            {
              this->SimCntrlSchm_SetpointNodeOrNodeListName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_RefSetpointNodeName
          //
          if (n.name () == "SimCntrlSchm_RefSetpointNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_RefSetpointNodeName_type > r (
              SimCntrlSchm_RefSetpointNodeName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_RefSetpointNodeName_)
            {
              this->SimCntrlSchm_RefSetpointNodeName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_FanInletNodeName
          //
          if (n.name () == "SimCntrlSchm_FanInletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_FanInletNodeName_type > r (
              SimCntrlSchm_FanInletNodeName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_FanInletNodeName_)
            {
              this->SimCntrlSchm_FanInletNodeName_.set (r);
              continue;
            }
          }

          // SimCntrlSchm_FanOutletNodeName
          //
          if (n.name () == "SimCntrlSchm_FanOutletNodeName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimCntrlSchm_FanOutletNodeName_type > r (
              SimCntrlSchm_FanOutletNodeName_traits::create (i, f, this));

            if (!this->SimCntrlSchm_FanOutletNodeName_)
            {
              this->SimCntrlSchm_FanOutletNodeName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimControlScheme_SetpointManagerScheme_MixedAir* SimControlScheme_SetpointManagerScheme_MixedAir::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimControlScheme_SetpointManagerScheme_MixedAir (*this, f, c);
      }

      SimControlScheme_SetpointManagerScheme_MixedAir& SimControlScheme_SetpointManagerScheme_MixedAir::
      operator= (const SimControlScheme_SetpointManagerScheme_MixedAir& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimControlScheme_SetpointManagerScheme& > (*this) = x;
          this->SimCntrlSchm_Name_ = x.SimCntrlSchm_Name_;
          this->SimCntrlSchm_CntlVar_ = x.SimCntrlSchm_CntlVar_;
          this->SimCntrlSchm_SetpointNodeOrNodeListName_ = x.SimCntrlSchm_SetpointNodeOrNodeListName_;
          this->SimCntrlSchm_RefSetpointNodeName_ = x.SimCntrlSchm_RefSetpointNodeName_;
          this->SimCntrlSchm_FanInletNodeName_ = x.SimCntrlSchm_FanInletNodeName_;
          this->SimCntrlSchm_FanOutletNodeName_ = x.SimCntrlSchm_FanOutletNodeName_;
        }

        return *this;
      }

      SimControlScheme_SetpointManagerScheme_MixedAir::
      ~SimControlScheme_SetpointManagerScheme_MixedAir ()
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

