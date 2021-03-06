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

#include "SimPerformanceCurve_Relational.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeometry
    {
      // SimPerformanceCurve_Relational
      // 

      const SimPerformanceCurve_Relational::SimPerfCurve_Diam_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_Diam () const
      {
        return this->SimPerfCurve_Diam_;
      }

      SimPerformanceCurve_Relational::SimPerfCurve_Diam_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_Diam ()
      {
        return this->SimPerfCurve_Diam_;
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_Diam (const SimPerfCurve_Diam_type& x)
      {
        this->SimPerfCurve_Diam_.set (x);
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_Diam (const SimPerfCurve_Diam_optional& x)
      {
        this->SimPerfCurve_Diam_ = x;
      }

      const SimPerformanceCurve_Relational::SimPerfCurve_MinorLossCoef_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_MinorLossCoef () const
      {
        return this->SimPerfCurve_MinorLossCoef_;
      }

      SimPerformanceCurve_Relational::SimPerfCurve_MinorLossCoef_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_MinorLossCoef ()
      {
        return this->SimPerfCurve_MinorLossCoef_;
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_MinorLossCoef (const SimPerfCurve_MinorLossCoef_type& x)
      {
        this->SimPerfCurve_MinorLossCoef_.set (x);
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_MinorLossCoef (const SimPerfCurve_MinorLossCoef_optional& x)
      {
        this->SimPerfCurve_MinorLossCoef_ = x;
      }

      const SimPerformanceCurve_Relational::SimPerfCurve_Length_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_Length () const
      {
        return this->SimPerfCurve_Length_;
      }

      SimPerformanceCurve_Relational::SimPerfCurve_Length_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_Length ()
      {
        return this->SimPerfCurve_Length_;
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_Length (const SimPerfCurve_Length_type& x)
      {
        this->SimPerfCurve_Length_.set (x);
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_Length (const SimPerfCurve_Length_optional& x)
      {
        this->SimPerfCurve_Length_ = x;
      }

      const SimPerformanceCurve_Relational::SimPerfCurve_Rough_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_Rough () const
      {
        return this->SimPerfCurve_Rough_;
      }

      SimPerformanceCurve_Relational::SimPerfCurve_Rough_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_Rough ()
      {
        return this->SimPerfCurve_Rough_;
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_Rough (const SimPerfCurve_Rough_type& x)
      {
        this->SimPerfCurve_Rough_.set (x);
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_Rough (const SimPerfCurve_Rough_optional& x)
      {
        this->SimPerfCurve_Rough_ = x;
      }

      const SimPerformanceCurve_Relational::SimPerfCurve_FixedFrictionFactor_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_FixedFrictionFactor () const
      {
        return this->SimPerfCurve_FixedFrictionFactor_;
      }

      SimPerformanceCurve_Relational::SimPerfCurve_FixedFrictionFactor_optional& SimPerformanceCurve_Relational::
      SimPerfCurve_FixedFrictionFactor ()
      {
        return this->SimPerfCurve_FixedFrictionFactor_;
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_FixedFrictionFactor (const SimPerfCurve_FixedFrictionFactor_type& x)
      {
        this->SimPerfCurve_FixedFrictionFactor_.set (x);
      }

      void SimPerformanceCurve_Relational::
      SimPerfCurve_FixedFrictionFactor (const SimPerfCurve_FixedFrictionFactor_optional& x)
      {
        this->SimPerfCurve_FixedFrictionFactor_ = x;
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
    namespace ResourcesGeometry
    {
      // SimPerformanceCurve_Relational
      //

      SimPerformanceCurve_Relational::
      SimPerformanceCurve_Relational ()
      : ::schema::simxml::ResourcesGeometry::SimPerformanceCurve (),
        SimPerfCurve_Diam_ (this),
        SimPerfCurve_MinorLossCoef_ (this),
        SimPerfCurve_Length_ (this),
        SimPerfCurve_Rough_ (this),
        SimPerfCurve_FixedFrictionFactor_ (this)
      {
      }

      SimPerformanceCurve_Relational::
      SimPerformanceCurve_Relational (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeometry::SimPerformanceCurve (RefId),
        SimPerfCurve_Diam_ (this),
        SimPerfCurve_MinorLossCoef_ (this),
        SimPerfCurve_Length_ (this),
        SimPerfCurve_Rough_ (this),
        SimPerfCurve_FixedFrictionFactor_ (this)
      {
      }

      SimPerformanceCurve_Relational::
      SimPerformanceCurve_Relational (const SimPerformanceCurve_Relational& x,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimPerformanceCurve (x, f, c),
        SimPerfCurve_Diam_ (x.SimPerfCurve_Diam_, f, this),
        SimPerfCurve_MinorLossCoef_ (x.SimPerfCurve_MinorLossCoef_, f, this),
        SimPerfCurve_Length_ (x.SimPerfCurve_Length_, f, this),
        SimPerfCurve_Rough_ (x.SimPerfCurve_Rough_, f, this),
        SimPerfCurve_FixedFrictionFactor_ (x.SimPerfCurve_FixedFrictionFactor_, f, this)
      {
      }

      SimPerformanceCurve_Relational::
      SimPerformanceCurve_Relational (const ::xercesc::DOMElement& e,
                                      ::xml_schema::flags f,
                                      ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeometry::SimPerformanceCurve (e, f | ::xml_schema::flags::base, c),
        SimPerfCurve_Diam_ (this),
        SimPerfCurve_MinorLossCoef_ (this),
        SimPerfCurve_Length_ (this),
        SimPerfCurve_Rough_ (this),
        SimPerfCurve_FixedFrictionFactor_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimPerformanceCurve_Relational::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeometry::SimPerformanceCurve::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimPerfCurve_Diam
          //
          if (n.name () == "SimPerfCurve_Diam" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_Diam_)
            {
              this->SimPerfCurve_Diam_.set (SimPerfCurve_Diam_traits::create (i, f, this));
              continue;
            }
          }

          // SimPerfCurve_MinorLossCoef
          //
          if (n.name () == "SimPerfCurve_MinorLossCoef" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_MinorLossCoef_)
            {
              this->SimPerfCurve_MinorLossCoef_.set (SimPerfCurve_MinorLossCoef_traits::create (i, f, this));
              continue;
            }
          }

          // SimPerfCurve_Length
          //
          if (n.name () == "SimPerfCurve_Length" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_Length_)
            {
              this->SimPerfCurve_Length_.set (SimPerfCurve_Length_traits::create (i, f, this));
              continue;
            }
          }

          // SimPerfCurve_Rough
          //
          if (n.name () == "SimPerfCurve_Rough" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_Rough_)
            {
              this->SimPerfCurve_Rough_.set (SimPerfCurve_Rough_traits::create (i, f, this));
              continue;
            }
          }

          // SimPerfCurve_FixedFrictionFactor
          //
          if (n.name () == "SimPerfCurve_FixedFrictionFactor" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_FixedFrictionFactor_)
            {
              this->SimPerfCurve_FixedFrictionFactor_.set (SimPerfCurve_FixedFrictionFactor_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimPerformanceCurve_Relational* SimPerformanceCurve_Relational::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimPerformanceCurve_Relational (*this, f, c);
      }

      SimPerformanceCurve_Relational& SimPerformanceCurve_Relational::
      operator= (const SimPerformanceCurve_Relational& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeometry::SimPerformanceCurve& > (*this) = x;
          this->SimPerfCurve_Diam_ = x.SimPerfCurve_Diam_;
          this->SimPerfCurve_MinorLossCoef_ = x.SimPerfCurve_MinorLossCoef_;
          this->SimPerfCurve_Length_ = x.SimPerfCurve_Length_;
          this->SimPerfCurve_Rough_ = x.SimPerfCurve_Rough_;
          this->SimPerfCurve_FixedFrictionFactor_ = x.SimPerfCurve_FixedFrictionFactor_;
        }

        return *this;
      }

      SimPerformanceCurve_Relational::
      ~SimPerformanceCurve_Relational ()
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
    namespace ResourcesGeometry
    {
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

