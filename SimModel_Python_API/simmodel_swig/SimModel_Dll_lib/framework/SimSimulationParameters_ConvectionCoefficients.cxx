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

#include "SimSimulationParameters_ConvectionCoefficients.hxx"

#include "simsimparams_convcoef_1_2_location.hxx"

#include "simsimparams_convcoef_1_2_type.hxx"

#include "doublelist.hxx"

namespace schema
{
  namespace simxml
  {
    namespace ResourcesGeneral
    {
      // SimSimulationParameters_ConvectionCoefficients
      // 

      const SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_Location_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Location () const
      {
        return this->SimSimParams_ConvCoef_1_2_Location_;
      }

      SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_Location_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Location ()
      {
        return this->SimSimParams_ConvCoef_1_2_Location_;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Location (const SimSimParams_ConvCoef_1_2_Location_type& x)
      {
        this->SimSimParams_ConvCoef_1_2_Location_.set (x);
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Location (const SimSimParams_ConvCoef_1_2_Location_optional& x)
      {
        this->SimSimParams_ConvCoef_1_2_Location_ = x;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Location (::std::auto_ptr< SimSimParams_ConvCoef_1_2_Location_type > x)
      {
        this->SimSimParams_ConvCoef_1_2_Location_.set (x);
      }

      const SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_Type_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Type () const
      {
        return this->SimSimParams_ConvCoef_1_2_Type_;
      }

      SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_Type_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Type ()
      {
        return this->SimSimParams_ConvCoef_1_2_Type_;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Type (const SimSimParams_ConvCoef_1_2_Type_type& x)
      {
        this->SimSimParams_ConvCoef_1_2_Type_.set (x);
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Type (const SimSimParams_ConvCoef_1_2_Type_optional& x)
      {
        this->SimSimParams_ConvCoef_1_2_Type_ = x;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_Type (::std::auto_ptr< SimSimParams_ConvCoef_1_2_Type_type > x)
      {
        this->SimSimParams_ConvCoef_1_2_Type_.set (x);
      }

      const SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2 () const
      {
        return this->SimSimParams_ConvCoef_1_2_;
      }

      SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2 ()
      {
        return this->SimSimParams_ConvCoef_1_2_;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2 (const SimSimParams_ConvCoef_1_2_type& x)
      {
        this->SimSimParams_ConvCoef_1_2_.set (x);
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2 (const SimSimParams_ConvCoef_1_2_optional& x)
      {
        this->SimSimParams_ConvCoef_1_2_ = x;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2 (::std::auto_ptr< SimSimParams_ConvCoef_1_2_type > x)
      {
        this->SimSimParams_ConvCoef_1_2_.set (x);
      }

      const SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_SchedName_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_SchedName () const
      {
        return this->SimSimParams_ConvCoef_1_2_SchedName_;
      }

      SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_SchedName_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_SchedName ()
      {
        return this->SimSimParams_ConvCoef_1_2_SchedName_;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_SchedName (const SimSimParams_ConvCoef_1_2_SchedName_type& x)
      {
        this->SimSimParams_ConvCoef_1_2_SchedName_.set (x);
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_SchedName (const SimSimParams_ConvCoef_1_2_SchedName_optional& x)
      {
        this->SimSimParams_ConvCoef_1_2_SchedName_ = x;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_SchedName (::std::auto_ptr< SimSimParams_ConvCoef_1_2_SchedName_type > x)
      {
        this->SimSimParams_ConvCoef_1_2_SchedName_.set (x);
      }

      const SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_UserCurveName_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_UserCurveName () const
      {
        return this->SimSimParams_ConvCoef_1_2_UserCurveName_;
      }

      SimSimulationParameters_ConvectionCoefficients::SimSimParams_ConvCoef_1_2_UserCurveName_optional& SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_UserCurveName ()
      {
        return this->SimSimParams_ConvCoef_1_2_UserCurveName_;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_UserCurveName (const SimSimParams_ConvCoef_1_2_UserCurveName_type& x)
      {
        this->SimSimParams_ConvCoef_1_2_UserCurveName_.set (x);
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_UserCurveName (const SimSimParams_ConvCoef_1_2_UserCurveName_optional& x)
      {
        this->SimSimParams_ConvCoef_1_2_UserCurveName_ = x;
      }

      void SimSimulationParameters_ConvectionCoefficients::
      SimSimParams_ConvCoef_1_2_UserCurveName (::std::auto_ptr< SimSimParams_ConvCoef_1_2_UserCurveName_type > x)
      {
        this->SimSimParams_ConvCoef_1_2_UserCurveName_.set (x);
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
      // SimSimulationParameters_ConvectionCoefficients
      //

      SimSimulationParameters_ConvectionCoefficients::
      SimSimulationParameters_ConvectionCoefficients ()
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters (),
        SimSimParams_ConvCoef_1_2_Location_ (this),
        SimSimParams_ConvCoef_1_2_Type_ (this),
        SimSimParams_ConvCoef_1_2_ (this),
        SimSimParams_ConvCoef_1_2_SchedName_ (this),
        SimSimParams_ConvCoef_1_2_UserCurveName_ (this)
      {
      }

      SimSimulationParameters_ConvectionCoefficients::
      SimSimulationParameters_ConvectionCoefficients (const RefId_type& RefId)
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters (RefId),
        SimSimParams_ConvCoef_1_2_Location_ (this),
        SimSimParams_ConvCoef_1_2_Type_ (this),
        SimSimParams_ConvCoef_1_2_ (this),
        SimSimParams_ConvCoef_1_2_SchedName_ (this),
        SimSimParams_ConvCoef_1_2_UserCurveName_ (this)
      {
      }

      SimSimulationParameters_ConvectionCoefficients::
      SimSimulationParameters_ConvectionCoefficients (const SimSimulationParameters_ConvectionCoefficients& x,
                                                      ::xml_schema::flags f,
                                                      ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters (x, f, c),
        SimSimParams_ConvCoef_1_2_Location_ (x.SimSimParams_ConvCoef_1_2_Location_, f, this),
        SimSimParams_ConvCoef_1_2_Type_ (x.SimSimParams_ConvCoef_1_2_Type_, f, this),
        SimSimParams_ConvCoef_1_2_ (x.SimSimParams_ConvCoef_1_2_, f, this),
        SimSimParams_ConvCoef_1_2_SchedName_ (x.SimSimParams_ConvCoef_1_2_SchedName_, f, this),
        SimSimParams_ConvCoef_1_2_UserCurveName_ (x.SimSimParams_ConvCoef_1_2_UserCurveName_, f, this)
      {
      }

      SimSimulationParameters_ConvectionCoefficients::
      SimSimulationParameters_ConvectionCoefficients (const ::xercesc::DOMElement& e,
                                                      ::xml_schema::flags f,
                                                      ::xml_schema::container* c)
      : ::schema::simxml::ResourcesGeneral::SimSimulationParameters (e, f | ::xml_schema::flags::base, c),
        SimSimParams_ConvCoef_1_2_Location_ (this),
        SimSimParams_ConvCoef_1_2_Type_ (this),
        SimSimParams_ConvCoef_1_2_ (this),
        SimSimParams_ConvCoef_1_2_SchedName_ (this),
        SimSimParams_ConvCoef_1_2_UserCurveName_ (this)
      {
        if ((f & ::xml_schema::flags::base) == 0)
        {
          ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
          this->parse (p, f);
        }
      }

      void SimSimulationParameters_ConvectionCoefficients::
      parse (::xsd::cxx::xml::dom::parser< char >& p,
             ::xml_schema::flags f)
      {
        this->::schema::simxml::ResourcesGeneral::SimSimulationParameters::parse (p, f);

        for (; p.more_content (); p.next_content (false))
        {
          const ::xercesc::DOMElement& i (p.cur_element ());
          const ::xsd::cxx::xml::qualified_name< char > n (
            ::xsd::cxx::xml::dom::name< char > (i));

          // SimSimParams_ConvCoef_1_2_Location
          //
          if (n.name () == "SimSimParams_ConvCoef_1_2_Location" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_ConvCoef_1_2_Location_type > r (
              SimSimParams_ConvCoef_1_2_Location_traits::create (i, f, this));

            if (!this->SimSimParams_ConvCoef_1_2_Location_)
            {
              this->SimSimParams_ConvCoef_1_2_Location_.set (r);
              continue;
            }
          }

          // SimSimParams_ConvCoef_1_2_Type
          //
          if (n.name () == "SimSimParams_ConvCoef_1_2_Type" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_ConvCoef_1_2_Type_type > r (
              SimSimParams_ConvCoef_1_2_Type_traits::create (i, f, this));

            if (!this->SimSimParams_ConvCoef_1_2_Type_)
            {
              this->SimSimParams_ConvCoef_1_2_Type_.set (r);
              continue;
            }
          }

          // SimSimParams_ConvCoef_1_2
          //
          if (n.name () == "SimSimParams_ConvCoef_1_2" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_ConvCoef_1_2_type > r (
              SimSimParams_ConvCoef_1_2_traits::create (i, f, this));

            if (!this->SimSimParams_ConvCoef_1_2_)
            {
              this->SimSimParams_ConvCoef_1_2_.set (r);
              continue;
            }
          }

          // SimSimParams_ConvCoef_1_2_SchedName
          //
          if (n.name () == "SimSimParams_ConvCoef_1_2_SchedName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_ConvCoef_1_2_SchedName_type > r (
              SimSimParams_ConvCoef_1_2_SchedName_traits::create (i, f, this));

            if (!this->SimSimParams_ConvCoef_1_2_SchedName_)
            {
              this->SimSimParams_ConvCoef_1_2_SchedName_.set (r);
              continue;
            }
          }

          // SimSimParams_ConvCoef_1_2_UserCurveName
          //
          if (n.name () == "SimSimParams_ConvCoef_1_2_UserCurveName" && n.namespace_ () == "http://d-alchemy.com/schema/simxml/ResourcesGeneral")
          {
            ::std::auto_ptr< SimSimParams_ConvCoef_1_2_UserCurveName_type > r (
              SimSimParams_ConvCoef_1_2_UserCurveName_traits::create (i, f, this));

            if (!this->SimSimParams_ConvCoef_1_2_UserCurveName_)
            {
              this->SimSimParams_ConvCoef_1_2_UserCurveName_.set (r);
              continue;
            }
          }

          break;
        }
      }

      SimSimulationParameters_ConvectionCoefficients* SimSimulationParameters_ConvectionCoefficients::
      _clone (::xml_schema::flags f,
              ::xml_schema::container* c) const
      {
        return new class SimSimulationParameters_ConvectionCoefficients (*this, f, c);
      }

      SimSimulationParameters_ConvectionCoefficients& SimSimulationParameters_ConvectionCoefficients::
      operator= (const SimSimulationParameters_ConvectionCoefficients& x)
      {
        if (this != &x)
        {
          static_cast< ::schema::simxml::ResourcesGeneral::SimSimulationParameters& > (*this) = x;
          this->SimSimParams_ConvCoef_1_2_Location_ = x.SimSimParams_ConvCoef_1_2_Location_;
          this->SimSimParams_ConvCoef_1_2_Type_ = x.SimSimParams_ConvCoef_1_2_Type_;
          this->SimSimParams_ConvCoef_1_2_ = x.SimSimParams_ConvCoef_1_2_;
          this->SimSimParams_ConvCoef_1_2_SchedName_ = x.SimSimParams_ConvCoef_1_2_SchedName_;
          this->SimSimParams_ConvCoef_1_2_UserCurveName_ = x.SimSimParams_ConvCoef_1_2_UserCurveName_;
        }

        return *this;
      }

      SimSimulationParameters_ConvectionCoefficients::
      ~SimSimulationParameters_ConvectionCoefficients ()
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

