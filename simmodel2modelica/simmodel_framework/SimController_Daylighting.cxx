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

#include "SimController_Daylighting.hxx"

namespace namespaces
{
  namespace Sim
  {
    namespace MepModel
    {
      // SimController_Daylighting
      // 

      const SimController_Daylighting::SimCntrl_ZoneName_optional& SimController_Daylighting::
      SimCntrl_ZoneName () const
      {
        return this->SimCntrl_ZoneName_;
      }

      SimController_Daylighting::SimCntrl_ZoneName_optional& SimController_Daylighting::
      SimCntrl_ZoneName ()
      {
        return this->SimCntrl_ZoneName_;
      }

      void SimController_Daylighting::
      SimCntrl_ZoneName (const SimCntrl_ZoneName_type& x)
      {
        this->SimCntrl_ZoneName_.set (x);
      }

      void SimController_Daylighting::
      SimCntrl_ZoneName (const SimCntrl_ZoneName_optional& x)
      {
        this->SimCntrl_ZoneName_ = x;
      }

      void SimController_Daylighting::
      SimCntrl_ZoneName (::std::auto_ptr< SimCntrl_ZoneName_type > x)
      {
        this->SimCntrl_ZoneName_.set (x);
      }

      const SimController_Daylighting::SimCntrl_LightingCntlType_optional& SimController_Daylighting::
      SimCntrl_LightingCntlType () const
      {
        return this->SimCntrl_LightingCntlType_;
      }

      SimController_Daylighting::SimCntrl_LightingCntlType_optional& SimController_Daylighting::
      SimCntrl_LightingCntlType ()
      {
        return this->SimCntrl_LightingCntlType_;
      }

      void SimController_Daylighting::
      SimCntrl_LightingCntlType (const SimCntrl_LightingCntlType_type& x)
      {
        this->SimCntrl_LightingCntlType_.set (x);
      }

      void SimController_Daylighting::
      SimCntrl_LightingCntlType (const SimCntrl_LightingCntlType_optional& x)
      {
        this->SimCntrl_LightingCntlType_ = x;
      }

      const SimController_Daylighting::SimCntrl_MinInputPwrFractForContDimCntl_optional& SimController_Daylighting::
      SimCntrl_MinInputPwrFractForContDimCntl () const
      {
        return this->SimCntrl_MinInputPwrFractForContDimCntl_;
      }

      SimController_Daylighting::SimCntrl_MinInputPwrFractForContDimCntl_optional& SimController_Daylighting::
      SimCntrl_MinInputPwrFractForContDimCntl ()
      {
        return this->SimCntrl_MinInputPwrFractForContDimCntl_;
      }

      void SimController_Daylighting::
      SimCntrl_MinInputPwrFractForContDimCntl (const SimCntrl_MinInputPwrFractForContDimCntl_type& x)
      {
        this->SimCntrl_MinInputPwrFractForContDimCntl_.set (x);
      }

      void SimController_Daylighting::
      SimCntrl_MinInputPwrFractForContDimCntl (const SimCntrl_MinInputPwrFractForContDimCntl_optional& x)
      {
        this->SimCntrl_MinInputPwrFractForContDimCntl_ = x;
      }

      const SimController_Daylighting::SimCntrl_MinLightOutputFractForContDimCntl_optional& SimController_Daylighting::
      SimCntrl_MinLightOutputFractForContDimCntl () const
      {
        return this->SimCntrl_MinLightOutputFractForContDimCntl_;
      }

      SimController_Daylighting::SimCntrl_MinLightOutputFractForContDimCntl_optional& SimController_Daylighting::
      SimCntrl_MinLightOutputFractForContDimCntl ()
      {
        return this->SimCntrl_MinLightOutputFractForContDimCntl_;
      }

      void SimController_Daylighting::
      SimCntrl_MinLightOutputFractForContDimCntl (const SimCntrl_MinLightOutputFractForContDimCntl_type& x)
      {
        this->SimCntrl_MinLightOutputFractForContDimCntl_.set (x);
      }

      void SimController_Daylighting::
      SimCntrl_MinLightOutputFractForContDimCntl (const SimCntrl_MinLightOutputFractForContDimCntl_optional& x)
      {
        this->SimCntrl_MinLightOutputFractForContDimCntl_ = x;
      }

      const SimController_Daylighting::SimCntrl_NumSteppedCntlSteps_optional& SimController_Daylighting::
      SimCntrl_NumSteppedCntlSteps () const
      {
        return this->SimCntrl_NumSteppedCntlSteps_;
      }

      SimController_Daylighting::SimCntrl_NumSteppedCntlSteps_optional& SimController_Daylighting::
      SimCntrl_NumSteppedCntlSteps ()
      {
        return this->SimCntrl_NumSteppedCntlSteps_;
      }

      void SimController_Daylighting::
      SimCntrl_NumSteppedCntlSteps (const SimCntrl_NumSteppedCntlSteps_type& x)
      {
        this->SimCntrl_NumSteppedCntlSteps_.set (x);
      }

      void SimController_Daylighting::
      SimCntrl_NumSteppedCntlSteps (const SimCntrl_NumSteppedCntlSteps_optional& x)
      {
        this->SimCntrl_NumSteppedCntlSteps_ = x;
      }

      const SimController_Daylighting::SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_optional& SimController_Daylighting::
      SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl () const
      {
        return this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_;
      }

      SimController_Daylighting::SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_optional& SimController_Daylighting::
      SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl ()
      {
        return this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_;
      }

      void SimController_Daylighting::
      SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl (const SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_type& x)
      {
        this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_.set (x);
      }

      void SimController_Daylighting::
      SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl (const SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_optional& x)
      {
        this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_ = x;
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
    namespace MepModel
    {
      // SimController_Daylighting
      //

      SimController_Daylighting::
      SimController_Daylighting (const RefId_type& RefId)
      : ::namespaces::Sim::MepModel::SimController (RefId),
        SimCntrl_ZoneName_ (this),
        SimCntrl_LightingCntlType_ (this),
        SimCntrl_MinInputPwrFractForContDimCntl_ (this),
        SimCntrl_MinLightOutputFractForContDimCntl_ (this),
        SimCntrl_NumSteppedCntlSteps_ (this),
        SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_ (this)
      {
      }

      SimController_Daylighting::
      SimController_Daylighting (const SimController_Daylighting& x,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimController (x, f, c),
        SimCntrl_ZoneName_ (x.SimCntrl_ZoneName_, f, this),
        SimCntrl_LightingCntlType_ (x.SimCntrl_LightingCntlType_, f, this),
        SimCntrl_MinInputPwrFractForContDimCntl_ (x.SimCntrl_MinInputPwrFractForContDimCntl_, f, this),
        SimCntrl_MinLightOutputFractForContDimCntl_ (x.SimCntrl_MinLightOutputFractForContDimCntl_, f, this),
        SimCntrl_NumSteppedCntlSteps_ (x.SimCntrl_NumSteppedCntlSteps_, f, this),
        SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_ (x.SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_, f, this)
      {
      }

      SimController_Daylighting::
      SimController_Daylighting (const ::xercesc::DOMElement& e,
                                 ::xml_schema::flags f,
                                 ::xml_schema::container* c)
      : ::namespaces::Sim::MepModel::SimController (e, f | ::xml_schema::flags::base, c),
        SimCntrl_ZoneName_ (this),
        SimCntrl_LightingCntlType_ (this),
        SimCntrl_MinInputPwrFractForContDimCntl_ (this),
        SimCntrl_MinLightOutputFractForContDimCntl_ (this),
        SimCntrl_NumSteppedCntlSteps_ (this),
        SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimController_Daylighting::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::namespaces::Sim::MepModel::SimController::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimCntrl_ZoneName
          //
          if (n.name () == "SimCntrl_ZoneName" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            ::std::auto_ptr< SimCntrl_ZoneName_type > r (
              SimCntrl_ZoneName_traits::create (i, f, this));

            if (!this->SimCntrl_ZoneName_)
            {
              this->SimCntrl_ZoneName_.set (r);
              continue;
            }
          }

          // SimCntrl_LightingCntlType
          //
          if (n.name () == "SimCntrl_LightingCntlType" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimCntrl_LightingCntlType_)
            {
              this->SimCntrl_LightingCntlType_.set (SimCntrl_LightingCntlType_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrl_MinInputPwrFractForContDimCntl
          //
          if (n.name () == "SimCntrl_MinInputPwrFractForContDimCntl" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimCntrl_MinInputPwrFractForContDimCntl_)
            {
              this->SimCntrl_MinInputPwrFractForContDimCntl_.set (SimCntrl_MinInputPwrFractForContDimCntl_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrl_MinLightOutputFractForContDimCntl
          //
          if (n.name () == "SimCntrl_MinLightOutputFractForContDimCntl" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimCntrl_MinLightOutputFractForContDimCntl_)
            {
              this->SimCntrl_MinLightOutputFractForContDimCntl_.set (SimCntrl_MinLightOutputFractForContDimCntl_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrl_NumSteppedCntlSteps
          //
          if (n.name () == "SimCntrl_NumSteppedCntlSteps" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimCntrl_NumSteppedCntlSteps_)
            {
              this->SimCntrl_NumSteppedCntlSteps_.set (SimCntrl_NumSteppedCntlSteps_traits::create (i, f, this));
              continue;
            }
          }

          // SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl
          //
          if (n.name () == "SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl" && n.namespace_ () == "http://www.lbl.gov/namespaces/Sim/MepModel")
          {
            if (!this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_)
            {
              this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_.set (SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_traits::create (i, f, this));
              continue;
            }
          }

          break;
        }
      }

      SimController_Daylighting* SimController_Daylighting::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimController_Daylighting (*this, f, c);
      }

      SimController_Daylighting& SimController_Daylighting::
      operator= (const SimController_Daylighting& x)
      {
        if (this != &x)
        {
          static_cast< ::namespaces::Sim::MepModel::SimController& > (*this) = x;
          this->SimCntrl_ZoneName_ = x.SimCntrl_ZoneName_;
          this->SimCntrl_LightingCntlType_ = x.SimCntrl_LightingCntlType_;
          this->SimCntrl_MinInputPwrFractForContDimCntl_ = x.SimCntrl_MinInputPwrFractForContDimCntl_;
          this->SimCntrl_MinLightOutputFractForContDimCntl_ = x.SimCntrl_MinLightOutputFractForContDimCntl_;
          this->SimCntrl_NumSteppedCntlSteps_ = x.SimCntrl_NumSteppedCntlSteps_;
          this->SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_ = x.SimCntrl_ProbLightingWillBeResetWhenNeededManualSteppedCntl_;
        }

        return *this;
      }

      SimController_Daylighting::
      ~SimController_Daylighting ()
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

