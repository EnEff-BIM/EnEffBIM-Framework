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

#include "SimBldgSiteParams.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimBldgSiteParams
      // 

      const SimBldgSiteParams::SiteShape_optional& SimBldgSiteParams::
      SiteShape () const
      {
        return this->SiteShape_;
      }

      SimBldgSiteParams::SiteShape_optional& SimBldgSiteParams::
      SiteShape ()
      {
        return this->SiteShape_;
      }

      void SimBldgSiteParams::
      SiteShape (const SiteShape_type& x)
      {
        this->SiteShape_.set (x);
      }

      void SimBldgSiteParams::
      SiteShape (const SiteShape_optional& x)
      {
        this->SiteShape_ = x;
      }

      void SimBldgSiteParams::
      SiteShape (::std::auto_ptr< SiteShape_type > x)
      {
        this->SiteShape_.set (x);
      }

      const SimBldgSiteParams::X1Dim_optional& SimBldgSiteParams::
      X1Dim () const
      {
        return this->X1Dim_;
      }

      SimBldgSiteParams::X1Dim_optional& SimBldgSiteParams::
      X1Dim ()
      {
        return this->X1Dim_;
      }

      void SimBldgSiteParams::
      X1Dim (const X1Dim_type& x)
      {
        this->X1Dim_.set (x);
      }

      void SimBldgSiteParams::
      X1Dim (const X1Dim_optional& x)
      {
        this->X1Dim_ = x;
      }

      const SimBldgSiteParams::X2Dim_optional& SimBldgSiteParams::
      X2Dim () const
      {
        return this->X2Dim_;
      }

      SimBldgSiteParams::X2Dim_optional& SimBldgSiteParams::
      X2Dim ()
      {
        return this->X2Dim_;
      }

      void SimBldgSiteParams::
      X2Dim (const X2Dim_type& x)
      {
        this->X2Dim_.set (x);
      }

      void SimBldgSiteParams::
      X2Dim (const X2Dim_optional& x)
      {
        this->X2Dim_ = x;
      }

      const SimBldgSiteParams::X3Dim_optional& SimBldgSiteParams::
      X3Dim () const
      {
        return this->X3Dim_;
      }

      SimBldgSiteParams::X3Dim_optional& SimBldgSiteParams::
      X3Dim ()
      {
        return this->X3Dim_;
      }

      void SimBldgSiteParams::
      X3Dim (const X3Dim_type& x)
      {
        this->X3Dim_.set (x);
      }

      void SimBldgSiteParams::
      X3Dim (const X3Dim_optional& x)
      {
        this->X3Dim_ = x;
      }

      const SimBldgSiteParams::Y1Dim_optional& SimBldgSiteParams::
      Y1Dim () const
      {
        return this->Y1Dim_;
      }

      SimBldgSiteParams::Y1Dim_optional& SimBldgSiteParams::
      Y1Dim ()
      {
        return this->Y1Dim_;
      }

      void SimBldgSiteParams::
      Y1Dim (const Y1Dim_type& x)
      {
        this->Y1Dim_.set (x);
      }

      void SimBldgSiteParams::
      Y1Dim (const Y1Dim_optional& x)
      {
        this->Y1Dim_ = x;
      }

      const SimBldgSiteParams::Y2Dim_optional& SimBldgSiteParams::
      Y2Dim () const
      {
        return this->Y2Dim_;
      }

      SimBldgSiteParams::Y2Dim_optional& SimBldgSiteParams::
      Y2Dim ()
      {
        return this->Y2Dim_;
      }

      void SimBldgSiteParams::
      Y2Dim (const Y2Dim_type& x)
      {
        this->Y2Dim_.set (x);
      }

      void SimBldgSiteParams::
      Y2Dim (const Y2Dim_optional& x)
      {
        this->Y2Dim_ = x;
      }

      const SimBldgSiteParams::Y3Dim_optional& SimBldgSiteParams::
      Y3Dim () const
      {
        return this->Y3Dim_;
      }

      SimBldgSiteParams::Y3Dim_optional& SimBldgSiteParams::
      Y3Dim ()
      {
        return this->Y3Dim_;
      }

      void SimBldgSiteParams::
      Y3Dim (const Y3Dim_type& x)
      {
        this->Y3Dim_.set (x);
      }

      void SimBldgSiteParams::
      Y3Dim (const Y3Dim_optional& x)
      {
        this->Y3Dim_ = x;
      }

      const SimBldgSiteParams::SiteElevation_optional& SimBldgSiteParams::
      SiteElevation () const
      {
        return this->SiteElevation_;
      }

      SimBldgSiteParams::SiteElevation_optional& SimBldgSiteParams::
      SiteElevation ()
      {
        return this->SiteElevation_;
      }

      void SimBldgSiteParams::
      SiteElevation (const SiteElevation_type& x)
      {
        this->SiteElevation_.set (x);
      }

      void SimBldgSiteParams::
      SiteElevation (const SiteElevation_optional& x)
      {
        this->SiteElevation_ = x;
      }

      const SimBldgSiteParams::ProfilePath_optional& SimBldgSiteParams::
      ProfilePath () const
      {
        return this->ProfilePath_;
      }

      SimBldgSiteParams::ProfilePath_optional& SimBldgSiteParams::
      ProfilePath ()
      {
        return this->ProfilePath_;
      }

      void SimBldgSiteParams::
      ProfilePath (const ProfilePath_type& x)
      {
        this->ProfilePath_.set (x);
      }

      void SimBldgSiteParams::
      ProfilePath (const ProfilePath_optional& x)
      {
        this->ProfilePath_ = x;
      }

      void SimBldgSiteParams::
      ProfilePath (::std::auto_ptr< ProfilePath_type > x)
      {
        this->ProfilePath_.set (x);
      }

      const SimBldgSiteParams::GroundPlaneElevation_optional& SimBldgSiteParams::
      GroundPlaneElevation () const
      {
        return this->GroundPlaneElevation_;
      }

      SimBldgSiteParams::GroundPlaneElevation_optional& SimBldgSiteParams::
      GroundPlaneElevation ()
      {
        return this->GroundPlaneElevation_;
      }

      void SimBldgSiteParams::
      GroundPlaneElevation (const GroundPlaneElevation_type& x)
      {
        this->GroundPlaneElevation_.set (x);
      }

      void SimBldgSiteParams::
      GroundPlaneElevation (const GroundPlaneElevation_optional& x)
      {
        this->GroundPlaneElevation_ = x;
      }

      const SimBldgSiteParams::AdjacentSiteParams_optional& SimBldgSiteParams::
      AdjacentSiteParams () const
      {
        return this->AdjacentSiteParams_;
      }

      SimBldgSiteParams::AdjacentSiteParams_optional& SimBldgSiteParams::
      AdjacentSiteParams ()
      {
        return this->AdjacentSiteParams_;
      }

      void SimBldgSiteParams::
      AdjacentSiteParams (const AdjacentSiteParams_type& x)
      {
        this->AdjacentSiteParams_.set (x);
      }

      void SimBldgSiteParams::
      AdjacentSiteParams (const AdjacentSiteParams_optional& x)
      {
        this->AdjacentSiteParams_ = x;
      }

      void SimBldgSiteParams::
      AdjacentSiteParams (::std::auto_ptr< AdjacentSiteParams_type > x)
      {
        this->AdjacentSiteParams_.set (x);
      }

      const SimBldgSiteParams::SolarObstructionParams_optional& SimBldgSiteParams::
      SolarObstructionParams () const
      {
        return this->SolarObstructionParams_;
      }

      SimBldgSiteParams::SolarObstructionParams_optional& SimBldgSiteParams::
      SolarObstructionParams ()
      {
        return this->SolarObstructionParams_;
      }

      void SimBldgSiteParams::
      SolarObstructionParams (const SolarObstructionParams_type& x)
      {
        this->SolarObstructionParams_.set (x);
      }

      void SimBldgSiteParams::
      SolarObstructionParams (const SolarObstructionParams_optional& x)
      {
        this->SolarObstructionParams_ = x;
      }

      void SimBldgSiteParams::
      SolarObstructionParams (::std::auto_ptr< SolarObstructionParams_type > x)
      {
        this->SolarObstructionParams_.set (x);
      }

      const SimBldgSiteParams::InsertedDWG_optional& SimBldgSiteParams::
      InsertedDWG () const
      {
        return this->InsertedDWG_;
      }

      SimBldgSiteParams::InsertedDWG_optional& SimBldgSiteParams::
      InsertedDWG ()
      {
        return this->InsertedDWG_;
      }

      void SimBldgSiteParams::
      InsertedDWG (const InsertedDWG_type& x)
      {
        this->InsertedDWG_.set (x);
      }

      void SimBldgSiteParams::
      InsertedDWG (const InsertedDWG_optional& x)
      {
        this->InsertedDWG_ = x;
      }

      void SimBldgSiteParams::
      InsertedDWG (::std::auto_ptr< InsertedDWG_type > x)
      {
        this->InsertedDWG_.set (x);
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
      // SimBldgSiteParams
      //

      SimBldgSiteParams::
      SimBldgSiteParams ()
      : ::schema::simxml::SimModelCore::SimBldgModelParams (),
        SiteShape_ (this),
        X1Dim_ (this),
        X2Dim_ (this),
        X3Dim_ (this),
        Y1Dim_ (this),
        Y2Dim_ (this),
        Y3Dim_ (this),
        SiteElevation_ (this),
        ProfilePath_ (this),
        GroundPlaneElevation_ (this),
        AdjacentSiteParams_ (this),
        SolarObstructionParams_ (this),
        InsertedDWG_ (this)
      {
      }

      SimBldgSiteParams::
      SimBldgSiteParams (const RefId_type& RefId)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (RefId),
        SiteShape_ (this),
        X1Dim_ (this),
        X2Dim_ (this),
        X3Dim_ (this),
        Y1Dim_ (this),
        Y2Dim_ (this),
        Y3Dim_ (this),
        SiteElevation_ (this),
        ProfilePath_ (this),
        GroundPlaneElevation_ (this),
        AdjacentSiteParams_ (this),
        SolarObstructionParams_ (this),
        InsertedDWG_ (this)
      {
      }

      SimBldgSiteParams::
      SimBldgSiteParams (const SimBldgSiteParams& x,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (x, f, c),
        SiteShape_ (x.SiteShape_, f, this),
        X1Dim_ (x.X1Dim_, f, this),
        X2Dim_ (x.X2Dim_, f, this),
        X3Dim_ (x.X3Dim_, f, this),
        Y1Dim_ (x.Y1Dim_, f, this),
        Y2Dim_ (x.Y2Dim_, f, this),
        Y3Dim_ (x.Y3Dim_, f, this),
        SiteElevation_ (x.SiteElevation_, f, this),
        ProfilePath_ (x.ProfilePath_, f, this),
        GroundPlaneElevation_ (x.GroundPlaneElevation_, f, this),
        AdjacentSiteParams_ (x.AdjacentSiteParams_, f, this),
        SolarObstructionParams_ (x.SolarObstructionParams_, f, this),
        InsertedDWG_ (x.InsertedDWG_, f, this)
      {
      }

      SimBldgSiteParams::
      SimBldgSiteParams (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f,
                         ::xml_schema::container* c)
      : ::schema::simxml::SimModelCore::SimBldgModelParams (e, f | ::xml_schema::flags::base, c),
        SiteShape_ (this),
        X1Dim_ (this),
        X2Dim_ (this),
        X3Dim_ (this),
        Y1Dim_ (this),
        Y2Dim_ (this),
        Y3Dim_ (this),
        SiteElevation_ (this),
        ProfilePath_ (this),
        GroundPlaneElevation_ (this),
        AdjacentSiteParams_ (this),
        SolarObstructionParams_ (this),
        InsertedDWG_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimBldgSiteParams::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::SimModelCore::SimBldgModelParams::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SiteShape
          //
          if (n.name () == "SiteShape" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SiteShape_type > r (
              SiteShape_traits::create (i, f, this));

            if (!this->SiteShape_)
            {
              this->SiteShape_.set (r);
              continue;
            }
          }

          // X1Dim
          //
          if (n.name () == "X1Dim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->X1Dim_)
            {
              this->X1Dim_.set (X1Dim_traits::create (i, f, this));
              continue;
            }
          }

          // X2Dim
          //
          if (n.name () == "X2Dim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->X2Dim_)
            {
              this->X2Dim_.set (X2Dim_traits::create (i, f, this));
              continue;
            }
          }

          // X3Dim
          //
          if (n.name () == "X3Dim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->X3Dim_)
            {
              this->X3Dim_.set (X3Dim_traits::create (i, f, this));
              continue;
            }
          }

          // Y1Dim
          //
          if (n.name () == "Y1Dim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->Y1Dim_)
            {
              this->Y1Dim_.set (Y1Dim_traits::create (i, f, this));
              continue;
            }
          }

          // Y2Dim
          //
          if (n.name () == "Y2Dim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->Y2Dim_)
            {
              this->Y2Dim_.set (Y2Dim_traits::create (i, f, this));
              continue;
            }
          }

          // Y3Dim
          //
          if (n.name () == "Y3Dim" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->Y3Dim_)
            {
              this->Y3Dim_.set (Y3Dim_traits::create (i, f, this));
              continue;
            }
          }

          // SiteElevation
          //
          if (n.name () == "SiteElevation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->SiteElevation_)
            {
              this->SiteElevation_.set (SiteElevation_traits::create (i, f, this));
              continue;
            }
          }

          // ProfilePath
          //
          if (n.name () == "ProfilePath" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< ProfilePath_type > r (
              ProfilePath_traits::create (i, f, this));

            if (!this->ProfilePath_)
            {
              this->ProfilePath_.set (r);
              continue;
            }
          }

          // GroundPlaneElevation
          //
          if (n.name () == "GroundPlaneElevation" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            if (!this->GroundPlaneElevation_)
            {
              this->GroundPlaneElevation_.set (GroundPlaneElevation_traits::create (i, f, this));
              continue;
            }
          }

          // AdjacentSiteParams
          //
          if (n.name () == "AdjacentSiteParams" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< AdjacentSiteParams_type > r (
              AdjacentSiteParams_traits::create (i, f, this));

            if (!this->AdjacentSiteParams_)
            {
              this->AdjacentSiteParams_.set (r);
              continue;
            }
          }

          // SolarObstructionParams
          //
          if (n.name () == "SolarObstructionParams" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SolarObstructionParams_type > r (
              SolarObstructionParams_traits::create (i, f, this));

            if (!this->SolarObstructionParams_)
            {
              this->SolarObstructionParams_.set (r);
              continue;
            }
          }

          // InsertedDWG
          //
          if (n.name () == "InsertedDWG" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< InsertedDWG_type > r (
              InsertedDWG_traits::create (i, f, this));

            if (!this->InsertedDWG_)
            {
              this->InsertedDWG_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimBldgSiteParams* SimBldgSiteParams::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimBldgSiteParams (*this, f, c);
      }

      SimBldgSiteParams& SimBldgSiteParams::
      operator= (const SimBldgSiteParams& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::SimModelCore::SimBldgModelParams& > (*this) = x;
          this->SiteShape_ = x.SiteShape_;
          this->X1Dim_ = x.X1Dim_;
          this->X2Dim_ = x.X2Dim_;
          this->X3Dim_ = x.X3Dim_;
          this->Y1Dim_ = x.Y1Dim_;
          this->Y2Dim_ = x.Y2Dim_;
          this->Y3Dim_ = x.Y3Dim_;
          this->SiteElevation_ = x.SiteElevation_;
          this->ProfilePath_ = x.ProfilePath_;
          this->GroundPlaneElevation_ = x.GroundPlaneElevation_;
          this->AdjacentSiteParams_ = x.AdjacentSiteParams_;
          this->SolarObstructionParams_ = x.SolarObstructionParams_;
          this->InsertedDWG_ = x.InsertedDWG_;
        }

        return *this;
      }

      SimBldgSiteParams::
      ~SimBldgSiteParams ()
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

