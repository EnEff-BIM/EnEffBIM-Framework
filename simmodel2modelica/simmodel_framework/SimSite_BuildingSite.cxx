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

#include "SimSite_BuildingSite.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace BuildingModel
    {
      // SimSite_BuildingSite
      // 

      const SimSite_BuildingSite::LandTitleNumber_optional& SimSite_BuildingSite::
      LandTitleNumber () const
      {
        return this->LandTitleNumber_;
      }

      SimSite_BuildingSite::LandTitleNumber_optional& SimSite_BuildingSite::
      LandTitleNumber ()
      {
        return this->LandTitleNumber_;
      }

      void SimSite_BuildingSite::
      LandTitleNumber (const LandTitleNumber_type& x)
      {
        this->LandTitleNumber_.set (x);
      }

      void SimSite_BuildingSite::
      LandTitleNumber (const LandTitleNumber_optional& x)
      {
        this->LandTitleNumber_ = x;
      }

      void SimSite_BuildingSite::
      LandTitleNumber (::std::auto_ptr< LandTitleNumber_type > x)
      {
        this->LandTitleNumber_.set (x);
      }

      const SimSite_BuildingSite::SiteAddress_optional& SimSite_BuildingSite::
      SiteAddress () const
      {
        return this->SiteAddress_;
      }

      SimSite_BuildingSite::SiteAddress_optional& SimSite_BuildingSite::
      SiteAddress ()
      {
        return this->SiteAddress_;
      }

      void SimSite_BuildingSite::
      SiteAddress (const SiteAddress_type& x)
      {
        this->SiteAddress_.set (x);
      }

      void SimSite_BuildingSite::
      SiteAddress (const SiteAddress_optional& x)
      {
        this->SiteAddress_ = x;
      }

      void SimSite_BuildingSite::
      SiteAddress (::std::auto_ptr< SiteAddress_type > x)
      {
        this->SiteAddress_.set (x);
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
    namespace BuildingModel
    {
      // SimSite_BuildingSite
      //

      SimSite_BuildingSite::
      SimSite_BuildingSite (const RefId_type& RefId)
      : ::namespaces::Sim::BuildingModel::SimSite (RefId),
        LandTitleNumber_ (this),
        SiteAddress_ (this)
      {
      }

      SimSite_BuildingSite::
      SimSite_BuildingSite (const SimSite_BuildingSite& x,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSite (x, f, c),
        LandTitleNumber_ (x.LandTitleNumber_, f, this),
        SiteAddress_ (x.SiteAddress_, f, this)
      {
      }

      SimSite_BuildingSite::
      SimSite_BuildingSite (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f,
                            ::xml_schema::container* c)
      : ::namespaces::Sim::BuildingModel::SimSite (e, f | ::xml_schema::flags::base, c),
        LandTitleNumber_ (this),
        SiteAddress_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSite_BuildingSite::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::BuildingModel::SimSite::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // LandTitleNumber
          //
          if (n.name () == "LandTitleNumber" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< LandTitleNumber_type > r (
              LandTitleNumber_traits::create (i, f, this));

            if (!this->LandTitleNumber_)
            {
              this->LandTitleNumber_.set (r);
              continue;
            }
          }

          // SiteAddress
          //
          if (n.name () == "SiteAddress" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/BuildingModel")
          {
            ::std::auto_ptr< SiteAddress_type > r (
              SiteAddress_traits::create (i, f, this));

            if (!this->SiteAddress_)
            {
              this->SiteAddress_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSite_BuildingSite* SimSite_BuildingSite::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSite_BuildingSite (*this, f, c);
      }

      SimSite_BuildingSite& SimSite_BuildingSite::
      operator= (const SimSite_BuildingSite& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::BuildingModel::SimSite& > (*this) = x;
          this->LandTitleNumber_ = x.LandTitleNumber_;
          this->SiteAddress_ = x.SiteAddress_;
        }

        return *this;
      }

      SimSite_BuildingSite::
      ~SimSite_BuildingSite ()
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
    namespace BuildingModel
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
