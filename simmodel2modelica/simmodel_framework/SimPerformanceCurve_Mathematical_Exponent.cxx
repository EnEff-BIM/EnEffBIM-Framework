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

#include "SimPerformanceCurve_Mathematical_Exponent.hxx"

#include "doublelist.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace ResourcesGeometry
    {
      // SimPerformanceCurve_Mathematical_Exponent
      // 

      const SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_MinValX_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MinValX () const
      {
        return this->SimPerfCurve_MinValX_;
      }

      SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_MinValX_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MinValX ()
      {
        return this->SimPerfCurve_MinValX_;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MinValX (const SimPerfCurve_MinValX_type& x)
      {
        this->SimPerfCurve_MinValX_.set (x);
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MinValX (const SimPerfCurve_MinValX_optional& x)
      {
        this->SimPerfCurve_MinValX_ = x;
      }

      const SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_MaxValX_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MaxValX () const
      {
        return this->SimPerfCurve_MaxValX_;
      }

      SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_MaxValX_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MaxValX ()
      {
        return this->SimPerfCurve_MaxValX_;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MaxValX (const SimPerfCurve_MaxValX_type& x)
      {
        this->SimPerfCurve_MaxValX_.set (x);
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_MaxValX (const SimPerfCurve_MaxValX_optional& x)
      {
        this->SimPerfCurve_MaxValX_ = x;
      }

      const SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_InputUnitTypeForX_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_InputUnitTypeForX () const
      {
        return this->SimPerfCurve_InputUnitTypeForX_;
      }

      SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_InputUnitTypeForX_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_InputUnitTypeForX ()
      {
        return this->SimPerfCurve_InputUnitTypeForX_;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_InputUnitTypeForX (const SimPerfCurve_InputUnitTypeForX_type& x)
      {
        this->SimPerfCurve_InputUnitTypeForX_.set (x);
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_InputUnitTypeForX (const SimPerfCurve_InputUnitTypeForX_optional& x)
      {
        this->SimPerfCurve_InputUnitTypeForX_ = x;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_InputUnitTypeForX (::std::auto_ptr< SimPerfCurve_InputUnitTypeForX_type > x)
      {
        this->SimPerfCurve_InputUnitTypeForX_.set (x);
      }

      const SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_OutputUnitType_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_OutputUnitType () const
      {
        return this->SimPerfCurve_OutputUnitType_;
      }

      SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_OutputUnitType_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_OutputUnitType ()
      {
        return this->SimPerfCurve_OutputUnitType_;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_OutputUnitType (const SimPerfCurve_OutputUnitType_type& x)
      {
        this->SimPerfCurve_OutputUnitType_.set (x);
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_OutputUnitType (const SimPerfCurve_OutputUnitType_optional& x)
      {
        this->SimPerfCurve_OutputUnitType_ = x;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_OutputUnitType (::std::auto_ptr< SimPerfCurve_OutputUnitType_type > x)
      {
        this->SimPerfCurve_OutputUnitType_.set (x);
      }

      const SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_Coeff_1_3_Const_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_Coeff_1_3_Const () const
      {
        return this->SimPerfCurve_Coeff_1_3_Const_;
      }

      SimPerformanceCurve_Mathematical_Exponent::SimPerfCurve_Coeff_1_3_Const_optional& SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_Coeff_1_3_Const ()
      {
        return this->SimPerfCurve_Coeff_1_3_Const_;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_Coeff_1_3_Const (const SimPerfCurve_Coeff_1_3_Const_type& x)
      {
        this->SimPerfCurve_Coeff_1_3_Const_.set (x);
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_Coeff_1_3_Const (const SimPerfCurve_Coeff_1_3_Const_optional& x)
      {
        this->SimPerfCurve_Coeff_1_3_Const_ = x;
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      SimPerfCurve_Coeff_1_3_Const (::std::auto_ptr< SimPerfCurve_Coeff_1_3_Const_type > x)
      {
        this->SimPerfCurve_Coeff_1_3_Const_.set (x);
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
    namespace ResourcesGeometry
    {
      // SimPerformanceCurve_Mathematical_Exponent
      //

      SimPerformanceCurve_Mathematical_Exponent::
      SimPerformanceCurve_Mathematical_Exponent (const RefId_type& RefId)
      : ::namespaces::Sim::ResourcesGeometry::SimPerformanceCurve_Mathematical (RefId),
        SimPerfCurve_MinValX_ (this),
        SimPerfCurve_MaxValX_ (this),
        SimPerfCurve_InputUnitTypeForX_ (this),
        SimPerfCurve_OutputUnitType_ (this),
        SimPerfCurve_Coeff_1_3_Const_ (this)
      {
      }

      SimPerformanceCurve_Mathematical_Exponent::
      SimPerformanceCurve_Mathematical_Exponent (const SimPerformanceCurve_Mathematical_Exponent& x,
                                                 ::xml_schema::flags f,
                                                 ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimPerformanceCurve_Mathematical (x, f, c),
        SimPerfCurve_MinValX_ (x.SimPerfCurve_MinValX_, f, this),
        SimPerfCurve_MaxValX_ (x.SimPerfCurve_MaxValX_, f, this),
        SimPerfCurve_InputUnitTypeForX_ (x.SimPerfCurve_InputUnitTypeForX_, f, this),
        SimPerfCurve_OutputUnitType_ (x.SimPerfCurve_OutputUnitType_, f, this),
        SimPerfCurve_Coeff_1_3_Const_ (x.SimPerfCurve_Coeff_1_3_Const_, f, this)
      {
      }

      SimPerformanceCurve_Mathematical_Exponent::
      SimPerformanceCurve_Mathematical_Exponent (const ::xercesc::DOMElement& e,
                                                 ::xml_schema::flags f,
                                                 ::xml_schema::container* c)
      : ::namespaces::Sim::ResourcesGeometry::SimPerformanceCurve_Mathematical (e, f | ::xml_schema::flags::base, c),
        SimPerfCurve_MinValX_ (this),
        SimPerfCurve_MaxValX_ (this),
        SimPerfCurve_InputUnitTypeForX_ (this),
        SimPerfCurve_OutputUnitType_ (this),
        SimPerfCurve_Coeff_1_3_Const_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimPerformanceCurve_Mathematical_Exponent::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::ResourcesGeometry::SimPerformanceCurve_Mathematical::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimPerfCurve_MinValX
          //
          if (n.name () == "SimPerfCurve_MinValX" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_MinValX_)
            {
              this->SimPerfCurve_MinValX_.set (SimPerfCurve_MinValX_traits::create (i, f, this));
              continue;
            }
          }

          // SimPerfCurve_MaxValX
          //
          if (n.name () == "SimPerfCurve_MaxValX" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            if (!this->SimPerfCurve_MaxValX_)
            {
              this->SimPerfCurve_MaxValX_.set (SimPerfCurve_MaxValX_traits::create (i, f, this));
              continue;
            }
          }

          // SimPerfCurve_InputUnitTypeForX
          //
          if (n.name () == "SimPerfCurve_InputUnitTypeForX" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< SimPerfCurve_InputUnitTypeForX_type > r (
              SimPerfCurve_InputUnitTypeForX_traits::create (i, f, this));

            if (!this->SimPerfCurve_InputUnitTypeForX_)
            {
              this->SimPerfCurve_InputUnitTypeForX_.set (r);
              continue;
            }
          }

          // SimPerfCurve_OutputUnitType
          //
          if (n.name () == "SimPerfCurve_OutputUnitType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< SimPerfCurve_OutputUnitType_type > r (
              SimPerfCurve_OutputUnitType_traits::create (i, f, this));

            if (!this->SimPerfCurve_OutputUnitType_)
            {
              this->SimPerfCurve_OutputUnitType_.set (r);
              continue;
            }
          }

          // SimPerfCurve_Coeff_1_3_Const
          //
          if (n.name () == "SimPerfCurve_Coeff_1_3_Const" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/ResourcesGeometry")
          {
            ::std::auto_ptr< SimPerfCurve_Coeff_1_3_Const_type > r (
              SimPerfCurve_Coeff_1_3_Const_traits::create (i, f, this));

            if (!this->SimPerfCurve_Coeff_1_3_Const_)
            {
              this->SimPerfCurve_Coeff_1_3_Const_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimPerformanceCurve_Mathematical_Exponent* SimPerformanceCurve_Mathematical_Exponent::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimPerformanceCurve_Mathematical_Exponent (*this, f, c);
      }

      SimPerformanceCurve_Mathematical_Exponent& SimPerformanceCurve_Mathematical_Exponent::
      operator= (const SimPerformanceCurve_Mathematical_Exponent& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::ResourcesGeometry::SimPerformanceCurve_Mathematical& > (*this) = x;
          this->SimPerfCurve_MinValX_ = x.SimPerfCurve_MinValX_;
          this->SimPerfCurve_MaxValX_ = x.SimPerfCurve_MaxValX_;
          this->SimPerfCurve_InputUnitTypeForX_ = x.SimPerfCurve_InputUnitTypeForX_;
          this->SimPerfCurve_OutputUnitType_ = x.SimPerfCurve_OutputUnitType_;
          this->SimPerfCurve_Coeff_1_3_Const_ = x.SimPerfCurve_Coeff_1_3_Const_;
        }

        return *this;
      }

      SimPerformanceCurve_Mathematical_Exponent::
      ~SimPerformanceCurve_Mathematical_Exponent ()
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
